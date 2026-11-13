// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007d9ac0
extern "C" __declspec(naked) void asm_007d9ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21c90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007d9b18 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b0d0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d9b1a }
	__asm { L_007d9b18: }
	__asm { xor eax, eax }
	__asm { L_007d9b1a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007d9b50
extern "C" __declspec(naked) void asm_007d9b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21ca0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007d9ba8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b0b8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d9baa }
	__asm { L_007d9ba8: }
	__asm { xor eax, eax }
	__asm { L_007d9baa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007d9be0
extern "C" __declspec(naked) void asm_007d9be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21cb0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007d9c38 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b100 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d9c3a }
	__asm { L_007d9c38: }
	__asm { xor eax, eax }
	__asm { L_007d9c3a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007d9c70
extern "C" __declspec(naked) void asm_007d9c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21cc0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007d9cc8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b0e8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d9cca }
	__asm { L_007d9cc8: }
	__asm { xor eax, eax }
	__asm { L_007d9cca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007d9d00
extern "C" __declspec(naked) void asm_007d9d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21cd0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007d9d58 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b118 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d9d5a }
	__asm { L_007d9d58: }
	__asm { xor eax, eax }
	__asm { L_007d9d5a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007d9d90
extern "C" __declspec(naked) void asm_007d9d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21ce0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007d9de8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5ae78 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d9dea }
	__asm { L_007d9de8: }
	__asm { xor eax, eax }
	__asm { L_007d9dea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007d9e20
extern "C" __declspec(naked) void asm_007d9e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21cf0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007d9e78 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5ae90 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d9e7a }
	__asm { L_007d9e78: }
	__asm { xor eax, eax }
	__asm { L_007d9e7a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007d9eb0
extern "C" __declspec(naked) void asm_007d9eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21d00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007d9f08 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b6e8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d9f0a }
	__asm { L_007d9f08: }
	__asm { xor eax, eax }
	__asm { L_007d9f0a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007d9f40
extern "C" __declspec(naked) void asm_007d9f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21d10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007d9f98 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b010 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d9f9a }
	__asm { L_007d9f98: }
	__asm { xor eax, eax }
	__asm { L_007d9f9a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007d9fd0
extern "C" __declspec(naked) void asm_007d9fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21d20 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007da028 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5aec0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007da02a }
	__asm { L_007da028: }
	__asm { xor eax, eax }
	__asm { L_007da02a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007da060
extern "C" __declspec(naked) void asm_007da060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21d30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007da0b8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5aea8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007da0ba }
	__asm { L_007da0b8: }
	__asm { xor eax, eax }
	__asm { L_007da0ba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007da0f0
extern "C" __declspec(naked) void asm_007da0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21d40 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007da148 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5afc8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007da14a }
	__asm { L_007da148: }
	__asm { xor eax, eax }
	__asm { L_007da14a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007da180
extern "C" __declspec(naked) void asm_007da180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21d50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007da1d8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5af20 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007da1da }
	__asm { L_007da1d8: }
	__asm { xor eax, eax }
	__asm { L_007da1da: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007da210
extern "C" __declspec(naked) void asm_007da210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21d60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007da268 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5af08 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007da26a }
	__asm { L_007da268: }
	__asm { xor eax, eax }
	__asm { L_007da26a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007da2a0
extern "C" __declspec(naked) void asm_007da2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21d70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007da2f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b070 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007da2fa }
	__asm { L_007da2f8: }
	__asm { xor eax, eax }
	__asm { L_007da2fa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007da330
extern "C" __declspec(naked) void asm_007da330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21d80 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007da388 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b088 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007da38a }
	__asm { L_007da388: }
	__asm { xor eax, eax }
	__asm { L_007da38a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007da3c0
extern "C" __declspec(naked) void asm_007da3c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21d90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007da418 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b460 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007da41a }
	__asm { L_007da418: }
	__asm { xor eax, eax }
	__asm { L_007da41a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007da450
extern "C" __declspec(naked) void asm_007da450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21da0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007da4a8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5af98 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007da4aa }
	__asm { L_007da4a8: }
	__asm { xor eax, eax }
	__asm { L_007da4aa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007da4e0
extern "C" __declspec(naked) void asm_007da4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21db0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007da538 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b5c8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007da53a }
	__asm { L_007da538: }
	__asm { xor eax, eax }
	__asm { L_007da53a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007da570
extern "C" __declspec(naked) void asm_007da570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21dc0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007da5c8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b3d0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007da5ca }
	__asm { L_007da5c8: }
	__asm { xor eax, eax }
	__asm { L_007da5ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007da600
extern "C" __declspec(naked) void asm_007da600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21dd0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007da658 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b160 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007da65a }
	__asm { L_007da658: }
	__asm { xor eax, eax }
	__asm { L_007da65a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007da690
extern "C" __declspec(naked) void asm_007da690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21de0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007da6e8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b1a8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007da6ea }
	__asm { L_007da6e8: }
	__asm { xor eax, eax }
	__asm { L_007da6ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007da720
extern "C" __declspec(naked) void asm_007da720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21df0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007da778 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b040 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007da77a }
	__asm { L_007da778: }
	__asm { xor eax, eax }
	__asm { L_007da77a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007da7b0
extern "C" __declspec(naked) void asm_007da7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21e00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007da808 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5aef0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007da80a }
	__asm { L_007da808: }
	__asm { xor eax, eax }
	__asm { L_007da80a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007da840
extern "C" __declspec(naked) void asm_007da840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21e10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007da898 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b550 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007da89a }
	__asm { L_007da898: }
	__asm { xor eax, eax }
	__asm { L_007da89a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007da8d0
extern "C" __declspec(naked) void asm_007da8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21e20 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007da928 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b0a0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007da92a }
	__asm { L_007da928: }
	__asm { xor eax, eax }
	__asm { L_007da92a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007da960
extern "C" __declspec(naked) void asm_007da960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21e30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007da9b8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b310 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007da9ba }
	__asm { L_007da9b8: }
	__asm { xor eax, eax }
	__asm { L_007da9ba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007da9f0
extern "C" __declspec(naked) void asm_007da9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21e40 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007daa48 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b190 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007daa4a }
	__asm { L_007daa48: }
	__asm { xor eax, eax }
	__asm { L_007daa4a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007daa80
extern "C" __declspec(naked) void asm_007daa80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21e50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007daad8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b028 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007daada }
	__asm { L_007daad8: }
	__asm { xor eax, eax }
	__asm { L_007daada: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007dab10
extern "C" __declspec(naked) void asm_007dab10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21e60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007dab68 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5aff8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007dab6a }
	__asm { L_007dab68: }
	__asm { xor eax, eax }
	__asm { L_007dab6a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007daba0
extern "C" __declspec(naked) void asm_007daba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21e70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007dabf8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5af68 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007dabfa }
	__asm { L_007dabf8: }
	__asm { xor eax, eax }
	__asm { L_007dabfa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007dac30
extern "C" __declspec(naked) void asm_007dac30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21e80 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007dac88 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b580 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007dac8a }
	__asm { L_007dac88: }
	__asm { xor eax, eax }
	__asm { L_007dac8a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007dacc0
extern "C" __declspec(naked) void asm_007dacc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21e90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007dad18 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b148 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007dad1a }
	__asm { L_007dad18: }
	__asm { xor eax, eax }
	__asm { L_007dad1a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007dad50
extern "C" __declspec(naked) void asm_007dad50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21ea0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007dada8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b3b8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007dadaa }
	__asm { L_007dada8: }
	__asm { xor eax, eax }
	__asm { L_007dadaa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007dade0
extern "C" __declspec(naked) void asm_007dade0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21eb0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007dae38 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b598 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007dae3a }
	__asm { L_007dae38: }
	__asm { xor eax, eax }
	__asm { L_007dae3a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007dae70
extern "C" __declspec(naked) void asm_007dae70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21ec0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007daec8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b1f0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007daeca }
	__asm { L_007daec8: }
	__asm { xor eax, eax }
	__asm { L_007daeca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007daf00
extern "C" __declspec(naked) void asm_007daf00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21ed0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007daf58 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b418 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007daf5a }
	__asm { L_007daf58: }
	__asm { xor eax, eax }
	__asm { L_007daf5a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007daf90
extern "C" __declspec(naked) void asm_007daf90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21ee0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007dafe8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b430 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007dafea }
	__asm { L_007dafe8: }
	__asm { xor eax, eax }
	__asm { L_007dafea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007db020
extern "C" __declspec(naked) void asm_007db020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21ef0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007db078 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b220 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007db07a }
	__asm { L_007db078: }
	__asm { xor eax, eax }
	__asm { L_007db07a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007db0b0
extern "C" __declspec(naked) void asm_007db0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21f00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007db108 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b208 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007db10a }
	__asm { L_007db108: }
	__asm { xor eax, eax }
	__asm { L_007db10a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007db140
extern "C" __declspec(naked) void asm_007db140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21f10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007db198 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b238 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007db19a }
	__asm { L_007db198: }
	__asm { xor eax, eax }
	__asm { L_007db19a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007db1d0
extern "C" __declspec(naked) void asm_007db1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21f20 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007db228 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b250 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007db22a }
	__asm { L_007db228: }
	__asm { xor eax, eax }
	__asm { L_007db22a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007db260
extern "C" __declspec(naked) void asm_007db260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21f30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007db2b8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b268 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007db2ba }
	__asm { L_007db2b8: }
	__asm { xor eax, eax }
	__asm { L_007db2ba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007db2f0
extern "C" __declspec(naked) void asm_007db2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21f40 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007db348 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5afe0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007db34a }
	__asm { L_007db348: }
	__asm { xor eax, eax }
	__asm { L_007db34a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007db380
extern "C" __declspec(naked) void asm_007db380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21f50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007db3d8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5af80 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007db3da }
	__asm { L_007db3d8: }
	__asm { xor eax, eax }
	__asm { L_007db3da: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007db410
extern "C" __declspec(naked) void asm_007db410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21f60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007db468 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b448 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007db46a }
	__asm { L_007db468: }
	__asm { xor eax, eax }
	__asm { L_007db46a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007db4a0
extern "C" __declspec(naked) void asm_007db4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21f70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007db4f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b280 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007db4fa }
	__asm { L_007db4f8: }
	__asm { xor eax, eax }
	__asm { L_007db4fa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007db530
extern "C" __declspec(naked) void asm_007db530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21f80 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007db588 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b298 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007db58a }
	__asm { L_007db588: }
	__asm { xor eax, eax }
	__asm { L_007db58a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007db5c0
extern "C" __declspec(naked) void asm_007db5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21f90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007db618 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b058 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007db61a }
	__asm { L_007db618: }
	__asm { xor eax, eax }
	__asm { L_007db61a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007db650
extern "C" __declspec(naked) void asm_007db650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21fa0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007db6a8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5aed8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007db6aa }
	__asm { L_007db6a8: }
	__asm { xor eax, eax }
	__asm { L_007db6aa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007db6e0
extern "C" __declspec(naked) void asm_007db6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21fb0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007db738 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b1c0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007db73a }
	__asm { L_007db738: }
	__asm { xor eax, eax }
	__asm { L_007db73a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012f6bdc[];
extern "C" char g_012f6be0[];
extern "C" char g_012f6be4[];
extern "C" char g_012f6be8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007db770
extern "C" __declspec(naked) void asm_007db770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6be8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007db7b2 }
	__asm { or eax, 1 }
	__asm { push 0xde85a0 }
	__asm { mov dword ptr [g_012f6be8], eax }
	__asm { mov dword ptr [g_012f6bdc], 0x11f1300 }
	__asm { mov dword ptr [g_012f6be4], 0x40d810 }
	__asm { mov dword ptr [g_012f6be0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007db7b2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6bdc }
	__asm { jne L_007db7cb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007db7cb: }
	__asm { test ecx, ecx }
	__asm { je L_007db7e1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007db7e1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007db7ef }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007db7ef: }
	__asm { mov dword ptr [esi], 0x12f6bdc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f678c[];
extern "C" char g_012f6790[];
extern "C" char g_012f6794[];
extern "C" char g_012f6798[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007db800
extern "C" __declspec(naked) void asm_007db800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6798] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007db842 }
	__asm { or eax, 1 }
	__asm { push 0xde85b0 }
	__asm { mov dword ptr [g_012f6798], eax }
	__asm { mov dword ptr [g_012f678c], 0x11f072c }
	__asm { mov dword ptr [g_012f6794], 0x40d810 }
	__asm { mov dword ptr [g_012f6790], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007db842: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f678c }
	__asm { jne L_007db85b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007db85b: }
	__asm { test ecx, ecx }
	__asm { je L_007db871 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007db871: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007db87f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007db87f: }
	__asm { mov dword ptr [esi], 0x12f678c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f68ec[];
extern "C" char g_012f68f0[];
extern "C" char g_012f68f4[];
extern "C" char g_012f68f8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007db890
extern "C" __declspec(naked) void asm_007db890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f68f8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007db8d2 }
	__asm { or eax, 1 }
	__asm { push 0xde85c0 }
	__asm { mov dword ptr [g_012f68f8], eax }
	__asm { mov dword ptr [g_012f68ec], 0x11f0ae0 }
	__asm { mov dword ptr [g_012f68f4], 0x40d810 }
	__asm { mov dword ptr [g_012f68f0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007db8d2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f68ec }
	__asm { jne L_007db8eb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007db8eb: }
	__asm { test ecx, ecx }
	__asm { je L_007db901 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007db901: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007db90f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007db90f: }
	__asm { mov dword ptr [esi], 0x12f68ec }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f67ac[];
extern "C" char g_012f67b0[];
extern "C" char g_012f67b4[];
extern "C" char g_012f67b8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007db920
extern "C" __declspec(naked) void asm_007db920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f67b8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007db962 }
	__asm { or eax, 1 }
	__asm { push 0xde85d0 }
	__asm { mov dword ptr [g_012f67b8], eax }
	__asm { mov dword ptr [g_012f67ac], 0x11f077c }
	__asm { mov dword ptr [g_012f67b4], 0x40d810 }
	__asm { mov dword ptr [g_012f67b0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007db962: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f67ac }
	__asm { jne L_007db97b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007db97b: }
	__asm { test ecx, ecx }
	__asm { je L_007db991 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007db991: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007db99f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007db99f: }
	__asm { mov dword ptr [esi], 0x12f67ac }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6aac[];
extern "C" char g_012f6ab0[];
extern "C" char g_012f6ab4[];
extern "C" char g_012f6ab8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007db9b0
extern "C" __declspec(naked) void asm_007db9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6ab8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007db9f2 }
	__asm { or eax, 1 }
	__asm { push 0xde85e0 }
	__asm { mov dword ptr [g_012f6ab8], eax }
	__asm { mov dword ptr [g_012f6aac], 0x11f0fa8 }
	__asm { mov dword ptr [g_012f6ab4], 0x40d810 }
	__asm { mov dword ptr [g_012f6ab0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007db9f2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6aac }
	__asm { jne L_007dba0b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dba0b: }
	__asm { test ecx, ecx }
	__asm { je L_007dba21 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dba21: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dba2f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dba2f: }
	__asm { mov dword ptr [esi], 0x12f6aac }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f679c[];
extern "C" char g_012f67a0[];
extern "C" char g_012f67a4[];
extern "C" char g_012f67a8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dba40
extern "C" __declspec(naked) void asm_007dba40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f67a8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dba82 }
	__asm { or eax, 1 }
	__asm { push 0xde85f0 }
	__asm { mov dword ptr [g_012f67a8], eax }
	__asm { mov dword ptr [g_012f679c], 0x11f0754 }
	__asm { mov dword ptr [g_012f67a4], 0x40d810 }
	__asm { mov dword ptr [g_012f67a0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dba82: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f679c }
	__asm { jne L_007dba9b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dba9b: }
	__asm { test ecx, ecx }
	__asm { je L_007dbab1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dbab1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dbabf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dbabf: }
	__asm { mov dword ptr [esi], 0x12f679c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6afc[];
extern "C" char g_012f6b00[];
extern "C" char g_012f6b04[];
extern "C" char g_012f6b08[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dbad0
extern "C" __declspec(naked) void asm_007dbad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6b08] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dbb12 }
	__asm { or eax, 1 }
	__asm { push 0xde8600 }
	__asm { mov dword ptr [g_012f6b08], eax }
	__asm { mov dword ptr [g_012f6afc], 0x11f10a4 }
	__asm { mov dword ptr [g_012f6b04], 0x40d810 }
	__asm { mov dword ptr [g_012f6b00], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dbb12: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6afc }
	__asm { jne L_007dbb2b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dbb2b: }
	__asm { test ecx, ecx }
	__asm { je L_007dbb41 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dbb41: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dbb4f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dbb4f: }
	__asm { mov dword ptr [esi], 0x12f6afc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6b6c[];
extern "C" char g_012f6b70[];
extern "C" char g_012f6b74[];
extern "C" char g_012f6b78[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dbb60
extern "C" __declspec(naked) void asm_007dbb60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6b78] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dbba2 }
	__asm { or eax, 1 }
	__asm { push 0xde8610 }
	__asm { mov dword ptr [g_012f6b78], eax }
	__asm { mov dword ptr [g_012f6b6c], 0x11f11d0 }
	__asm { mov dword ptr [g_012f6b74], 0x40d810 }
	__asm { mov dword ptr [g_012f6b70], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dbba2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6b6c }
	__asm { jne L_007dbbbb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dbbbb: }
	__asm { test ecx, ecx }
	__asm { je L_007dbbd1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dbbd1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dbbdf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dbbdf: }
	__asm { mov dword ptr [esi], 0x12f6b6c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6b5c[];
extern "C" char g_012f6b60[];
extern "C" char g_012f6b64[];
extern "C" char g_012f6b68[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dbbf0
extern "C" __declspec(naked) void asm_007dbbf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6b68] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dbc32 }
	__asm { or eax, 1 }
	__asm { push 0xde8620 }
	__asm { mov dword ptr [g_012f6b68], eax }
	__asm { mov dword ptr [g_012f6b5c], 0x11f11a8 }
	__asm { mov dword ptr [g_012f6b64], 0x40d810 }
	__asm { mov dword ptr [g_012f6b60], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dbc32: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6b5c }
	__asm { jne L_007dbc4b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dbc4b: }
	__asm { test ecx, ecx }
	__asm { je L_007dbc61 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dbc61: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dbc6f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dbc6f: }
	__asm { mov dword ptr [esi], 0x12f6b5c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6b7c[];
extern "C" char g_012f6b80[];
extern "C" char g_012f6b84[];
extern "C" char g_012f6b88[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dbc80
extern "C" __declspec(naked) void asm_007dbc80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6b88] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dbcc2 }
	__asm { or eax, 1 }
	__asm { push 0xde8630 }
	__asm { mov dword ptr [g_012f6b88], eax }
	__asm { mov dword ptr [g_012f6b7c], 0x11f11f4 }
	__asm { mov dword ptr [g_012f6b84], 0x40d810 }
	__asm { mov dword ptr [g_012f6b80], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dbcc2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6b7c }
	__asm { jne L_007dbcdb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dbcdb: }
	__asm { test ecx, ecx }
	__asm { je L_007dbcf1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dbcf1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dbcff }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dbcff: }
	__asm { mov dword ptr [esi], 0x12f6b7c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6a6c[];
extern "C" char g_012f6a70[];
extern "C" char g_012f6a74[];
extern "C" char g_012f6a78[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dbd10
extern "C" __declspec(naked) void asm_007dbd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6a78] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dbd52 }
	__asm { or eax, 1 }
	__asm { push 0xde8640 }
	__asm { mov dword ptr [g_012f6a78], eax }
	__asm { mov dword ptr [g_012f6a6c], 0x11f0ee8 }
	__asm { mov dword ptr [g_012f6a74], 0x40d810 }
	__asm { mov dword ptr [g_012f6a70], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dbd52: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6a6c }
	__asm { jne L_007dbd6b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dbd6b: }
	__asm { test ecx, ecx }
	__asm { je L_007dbd81 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dbd81: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dbd8f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dbd8f: }
	__asm { mov dword ptr [esi], 0x12f6a6c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6a7c[];
extern "C" char g_012f6a80[];
extern "C" char g_012f6a84[];
extern "C" char g_012f6a88[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dbda0
extern "C" __declspec(naked) void asm_007dbda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6a88] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dbde2 }
	__asm { or eax, 1 }
	__asm { push 0xde8650 }
	__asm { mov dword ptr [g_012f6a88], eax }
	__asm { mov dword ptr [g_012f6a7c], 0x11f0f18 }
	__asm { mov dword ptr [g_012f6a84], 0x40d810 }
	__asm { mov dword ptr [g_012f6a80], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dbde2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6a7c }
	__asm { jne L_007dbdfb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dbdfb: }
	__asm { test ecx, ecx }
	__asm { je L_007dbe11 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dbe11: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dbe1f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dbe1f: }
	__asm { mov dword ptr [esi], 0x12f6a7c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f684c[];
extern "C" char g_012f6850[];
extern "C" char g_012f6854[];
extern "C" char g_012f6858[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dbe30
extern "C" __declspec(naked) void asm_007dbe30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6858] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dbe72 }
	__asm { or eax, 1 }
	__asm { push 0xde8660 }
	__asm { mov dword ptr [g_012f6858], eax }
	__asm { mov dword ptr [g_012f684c], 0x11f0934 }
	__asm { mov dword ptr [g_012f6854], 0x40d810 }
	__asm { mov dword ptr [g_012f6850], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dbe72: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f684c }
	__asm { jne L_007dbe8b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dbe8b: }
	__asm { test ecx, ecx }
	__asm { je L_007dbea1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dbea1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dbeaf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dbeaf: }
	__asm { mov dword ptr [esi], 0x12f684c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6adc[];
extern "C" char g_012f6ae0[];
extern "C" char g_012f6ae4[];
extern "C" char g_012f6ae8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dbec0
extern "C" __declspec(naked) void asm_007dbec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6ae8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dbf02 }
	__asm { or eax, 1 }
	__asm { push 0xde8670 }
	__asm { mov dword ptr [g_012f6ae8], eax }
	__asm { mov dword ptr [g_012f6adc], 0x11f1034 }
	__asm { mov dword ptr [g_012f6ae4], 0x40d810 }
	__asm { mov dword ptr [g_012f6ae0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dbf02: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6adc }
	__asm { jne L_007dbf1b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dbf1b: }
	__asm { test ecx, ecx }
	__asm { je L_007dbf31 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dbf31: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dbf3f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dbf3f: }
	__asm { mov dword ptr [esi], 0x12f6adc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6bfc[];
extern "C" char g_012f6c00[];
extern "C" char g_012f6c04[];
extern "C" char g_012f6c08[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dbf50
extern "C" __declspec(naked) void asm_007dbf50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6c08] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dbf92 }
	__asm { or eax, 1 }
	__asm { push 0xde8680 }
	__asm { mov dword ptr [g_012f6c08], eax }
	__asm { mov dword ptr [g_012f6bfc], 0x11f135c }
	__asm { mov dword ptr [g_012f6c04], 0x40d810 }
	__asm { mov dword ptr [g_012f6c00], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dbf92: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6bfc }
	__asm { jne L_007dbfab }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dbfab: }
	__asm { test ecx, ecx }
	__asm { je L_007dbfc1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dbfc1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dbfcf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dbfcf: }
	__asm { mov dword ptr [esi], 0x12f6bfc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f692c[];
extern "C" char g_012f6930[];
extern "C" char g_012f6934[];
extern "C" char g_012f6938[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dbff0
extern "C" __declspec(naked) void asm_007dbff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6938] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dc032 }
	__asm { or eax, 1 }
	__asm { push 0xde8690 }
	__asm { mov dword ptr [g_012f6938], eax }
	__asm { mov dword ptr [g_012f692c], 0x11f0b74 }
	__asm { mov dword ptr [g_012f6934], 0x40d810 }
	__asm { mov dword ptr [g_012f6930], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dc032: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f692c }
	__asm { jne L_007dc04b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dc04b: }
	__asm { test ecx, ecx }
	__asm { je L_007dc061 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dc061: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dc06f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dc06f: }
	__asm { mov dword ptr [esi], 0x12f692c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6a8c[];
extern "C" char g_012f6a90[];
extern "C" char g_012f6a94[];
extern "C" char g_012f6a98[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dc080
extern "C" __declspec(naked) void asm_007dc080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6a98] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dc0c2 }
	__asm { or eax, 1 }
	__asm { push 0xde86a0 }
	__asm { mov dword ptr [g_012f6a98], eax }
	__asm { mov dword ptr [g_012f6a8c], 0x11f0f44 }
	__asm { mov dword ptr [g_012f6a94], 0x40d810 }
	__asm { mov dword ptr [g_012f6a90], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dc0c2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6a8c }
	__asm { jne L_007dc0db }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dc0db: }
	__asm { test ecx, ecx }
	__asm { je L_007dc0f1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dc0f1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dc0ff }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dc0ff: }
	__asm { mov dword ptr [esi], 0x12f6a8c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6b3c[];
extern "C" char g_012f6b40[];
extern "C" char g_012f6b44[];
extern "C" char g_012f6b48[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dc110
extern "C" __declspec(naked) void asm_007dc110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6b48] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dc152 }
	__asm { or eax, 1 }
	__asm { push 0xde86b0 }
	__asm { mov dword ptr [g_012f6b48], eax }
	__asm { mov dword ptr [g_012f6b3c], 0x11f1150 }
	__asm { mov dword ptr [g_012f6b44], 0x40d810 }
	__asm { mov dword ptr [g_012f6b40], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dc152: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6b3c }
	__asm { jne L_007dc16b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dc16b: }
	__asm { test ecx, ecx }
	__asm { je L_007dc181 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dc181: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dc18f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dc18f: }
	__asm { mov dword ptr [esi], 0x12f6b3c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6b4c[];
extern "C" char g_012f6b50[];
extern "C" char g_012f6b54[];
extern "C" char g_012f6b58[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dc1a0
extern "C" __declspec(naked) void asm_007dc1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6b58] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dc1e2 }
	__asm { or eax, 1 }
	__asm { push 0xde86c0 }
	__asm { mov dword ptr [g_012f6b58], eax }
	__asm { mov dword ptr [g_012f6b4c], 0x11f117c }
	__asm { mov dword ptr [g_012f6b54], 0x40d810 }
	__asm { mov dword ptr [g_012f6b50], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dc1e2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6b4c }
	__asm { jne L_007dc1fb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dc1fb: }
	__asm { test ecx, ecx }
	__asm { je L_007dc211 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dc211: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dc21f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dc21f: }
	__asm { mov dword ptr [esi], 0x12f6b4c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f687c[];
extern "C" char g_012f6880[];
extern "C" char g_012f6884[];
extern "C" char g_012f6888[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dc230
extern "C" __declspec(naked) void asm_007dc230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6888] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dc272 }
	__asm { or eax, 1 }
	__asm { push 0xde86d0 }
	__asm { mov dword ptr [g_012f6888], eax }
	__asm { mov dword ptr [g_012f687c], 0x11f09c8 }
	__asm { mov dword ptr [g_012f6884], 0x40d810 }
	__asm { mov dword ptr [g_012f6880], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dc272: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f687c }
	__asm { jne L_007dc28b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dc28b: }
	__asm { test ecx, ecx }
	__asm { je L_007dc2a1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dc2a1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dc2af }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dc2af: }
	__asm { mov dword ptr [esi], 0x12f687c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f686c[];
extern "C" char g_012f6870[];
extern "C" char g_012f6874[];
extern "C" char g_012f6878[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dc2c0
extern "C" __declspec(naked) void asm_007dc2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6878] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dc302 }
	__asm { or eax, 1 }
	__asm { push 0xde86e0 }
	__asm { mov dword ptr [g_012f6878], eax }
	__asm { mov dword ptr [g_012f686c], 0x11f0998 }
	__asm { mov dword ptr [g_012f6874], 0x40d810 }
	__asm { mov dword ptr [g_012f6870], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dc302: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f686c }
	__asm { jne L_007dc31b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dc31b: }
	__asm { test ecx, ecx }
	__asm { je L_007dc331 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dc331: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dc33f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dc33f: }
	__asm { mov dword ptr [esi], 0x12f686c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6bac[];
extern "C" char g_012f6bb0[];
extern "C" char g_012f6bb4[];
extern "C" char g_012f6bb8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dc350
extern "C" __declspec(naked) void asm_007dc350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6bb8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dc392 }
	__asm { or eax, 1 }
	__asm { push 0xde86f0 }
	__asm { mov dword ptr [g_012f6bb8], eax }
	__asm { mov dword ptr [g_012f6bac], 0x11f1274 }
	__asm { mov dword ptr [g_012f6bb4], 0x40d810 }
	__asm { mov dword ptr [g_012f6bb0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dc392: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6bac }
	__asm { jne L_007dc3ab }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dc3ab: }
	__asm { test ecx, ecx }
	__asm { je L_007dc3c1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dc3c1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dc3cf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dc3cf: }
	__asm { mov dword ptr [esi], 0x12f6bac }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f682c[];
extern "C" char g_012f6830[];
extern "C" char g_012f6834[];
extern "C" char g_012f6838[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dc3e0
extern "C" __declspec(naked) void asm_007dc3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6838] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dc422 }
	__asm { or eax, 1 }
	__asm { push 0xde8700 }
	__asm { mov dword ptr [g_012f6838], eax }
	__asm { mov dword ptr [g_012f682c], 0x11f08e0 }
	__asm { mov dword ptr [g_012f6834], 0x40d810 }
	__asm { mov dword ptr [g_012f6830], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dc422: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f682c }
	__asm { jne L_007dc43b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dc43b: }
	__asm { test ecx, ecx }
	__asm { je L_007dc451 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dc451: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dc45f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dc45f: }
	__asm { mov dword ptr [esi], 0x12f682c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f681c[];
extern "C" char g_012f6820[];
extern "C" char g_012f6824[];
extern "C" char g_012f6828[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dc470
extern "C" __declspec(naked) void asm_007dc470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6828] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dc4b2 }
	__asm { or eax, 1 }
	__asm { push 0xde8710 }
	__asm { mov dword ptr [g_012f6828], eax }
	__asm { mov dword ptr [g_012f681c], 0x11f08b8 }
	__asm { mov dword ptr [g_012f6824], 0x40d810 }
	__asm { mov dword ptr [g_012f6820], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dc4b2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f681c }
	__asm { jne L_007dc4cb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dc4cb: }
	__asm { test ecx, ecx }
	__asm { je L_007dc4e1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dc4e1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dc4ef }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dc4ef: }
	__asm { mov dword ptr [esi], 0x12f681c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f673c[];
extern "C" char g_012f6740[];
extern "C" char g_012f6744[];
extern "C" char g_012f6748[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dc500
extern "C" __declspec(naked) void asm_007dc500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6748] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dc542 }
	__asm { or eax, 1 }
	__asm { push 0xde8720 }
	__asm { mov dword ptr [g_012f6748], eax }
	__asm { mov dword ptr [g_012f673c], 0x11f0638 }
	__asm { mov dword ptr [g_012f6744], 0x40d810 }
	__asm { mov dword ptr [g_012f6740], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dc542: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f673c }
	__asm { jne L_007dc55b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dc55b: }
	__asm { test ecx, ecx }
	__asm { je L_007dc571 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dc571: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dc57f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dc57f: }
	__asm { mov dword ptr [esi], 0x12f673c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f69bc[];
extern "C" char g_012f69c0[];
extern "C" char g_012f69c4[];
extern "C" char g_012f69c8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dc590
extern "C" __declspec(naked) void asm_007dc590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f69c8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dc5d2 }
	__asm { or eax, 1 }
	__asm { push 0xde8730 }
	__asm { mov dword ptr [g_012f69c8], eax }
	__asm { mov dword ptr [g_012f69bc], 0x11f0d08 }
	__asm { mov dword ptr [g_012f69c4], 0x40d810 }
	__asm { mov dword ptr [g_012f69c0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dc5d2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f69bc }
	__asm { jne L_007dc5eb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dc5eb: }
	__asm { test ecx, ecx }
	__asm { je L_007dc601 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dc601: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dc60f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dc60f: }
	__asm { mov dword ptr [esi], 0x12f69bc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f69ac[];
extern "C" char g_012f69b0[];
extern "C" char g_012f69b4[];
extern "C" char g_012f69b8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dc620
extern "C" __declspec(naked) void asm_007dc620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f69b8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dc662 }
	__asm { or eax, 1 }
	__asm { push 0xde8740 }
	__asm { mov dword ptr [g_012f69b8], eax }
	__asm { mov dword ptr [g_012f69ac], 0x11f0cd8 }
	__asm { mov dword ptr [g_012f69b4], 0x40d810 }
	__asm { mov dword ptr [g_012f69b0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dc662: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f69ac }
	__asm { jne L_007dc67b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dc67b: }
	__asm { test ecx, ecx }
	__asm { je L_007dc691 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dc691: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dc69f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dc69f: }
	__asm { mov dword ptr [esi], 0x12f69ac }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f694c[];
extern "C" char g_012f6950[];
extern "C" char g_012f6954[];
extern "C" char g_012f6958[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dc6b0
extern "C" __declspec(naked) void asm_007dc6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6958] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dc6f2 }
	__asm { or eax, 1 }
	__asm { push 0xde8750 }
	__asm { mov dword ptr [g_012f6958], eax }
	__asm { mov dword ptr [g_012f694c], 0x11f0bc4 }
	__asm { mov dword ptr [g_012f6954], 0x40d810 }
	__asm { mov dword ptr [g_012f6950], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dc6f2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f694c }
	__asm { jne L_007dc70b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dc70b: }
	__asm { test ecx, ecx }
	__asm { je L_007dc721 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dc721: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dc72f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dc72f: }
	__asm { mov dword ptr [esi], 0x12f694c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f695c[];
extern "C" char g_012f6960[];
extern "C" char g_012f6964[];
extern "C" char g_012f6968[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dc740
extern "C" __declspec(naked) void asm_007dc740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6968] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dc782 }
	__asm { or eax, 1 }
	__asm { push 0xde8760 }
	__asm { mov dword ptr [g_012f6968], eax }
	__asm { mov dword ptr [g_012f695c], 0x11f0bf4 }
	__asm { mov dword ptr [g_012f6964], 0x40d810 }
	__asm { mov dword ptr [g_012f6960], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dc782: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f695c }
	__asm { jne L_007dc79b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dc79b: }
	__asm { test ecx, ecx }
	__asm { je L_007dc7b1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dc7b1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dc7bf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dc7bf: }
	__asm { mov dword ptr [esi], 0x12f695c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f693c[];
extern "C" char g_012f6940[];
extern "C" char g_012f6944[];
extern "C" char g_012f6948[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dc7d0
extern "C" __declspec(naked) void asm_007dc7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6948] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dc812 }
	__asm { or eax, 1 }
	__asm { push 0xde8770 }
	__asm { mov dword ptr [g_012f6948], eax }
	__asm { mov dword ptr [g_012f693c], 0x11f0ba0 }
	__asm { mov dword ptr [g_012f6944], 0x40d810 }
	__asm { mov dword ptr [g_012f6940], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dc812: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f693c }
	__asm { jne L_007dc82b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dc82b: }
	__asm { test ecx, ecx }
	__asm { je L_007dc841 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dc841: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dc84f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dc84f: }
	__asm { mov dword ptr [esi], 0x12f693c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6bec[];
extern "C" char g_012f6bf0[];
extern "C" char g_012f6bf4[];
extern "C" char g_012f6bf8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dc860
extern "C" __declspec(naked) void asm_007dc860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6bf8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dc8a2 }
	__asm { or eax, 1 }
	__asm { push 0xde8780 }
	__asm { mov dword ptr [g_012f6bf8], eax }
	__asm { mov dword ptr [g_012f6bec], 0x11f132c }
	__asm { mov dword ptr [g_012f6bf4], 0x40d810 }
	__asm { mov dword ptr [g_012f6bf0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dc8a2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6bec }
	__asm { jne L_007dc8bb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dc8bb: }
	__asm { test ecx, ecx }
	__asm { je L_007dc8d1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dc8d1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dc8df }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dc8df: }
	__asm { mov dword ptr [esi], 0x12f6bec }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f688c[];
extern "C" char g_012f6890[];
extern "C" char g_012f6894[];
extern "C" char g_012f6898[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dc8f0
extern "C" __declspec(naked) void asm_007dc8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6898] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dc932 }
	__asm { or eax, 1 }
	__asm { push 0xde8790 }
	__asm { mov dword ptr [g_012f6898], eax }
	__asm { mov dword ptr [g_012f688c], 0x11f09f4 }
	__asm { mov dword ptr [g_012f6894], 0x40d810 }
	__asm { mov dword ptr [g_012f6890], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dc932: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f688c }
	__asm { jne L_007dc94b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dc94b: }
	__asm { test ecx, ecx }
	__asm { je L_007dc961 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dc961: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dc96f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dc96f: }
	__asm { mov dword ptr [esi], 0x12f688c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6a9c[];
extern "C" char g_012f6aa0[];
extern "C" char g_012f6aa4[];
extern "C" char g_012f6aa8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dc980
extern "C" __declspec(naked) void asm_007dc980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6aa8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dc9c2 }
	__asm { or eax, 1 }
	__asm { push 0xde87a0 }
	__asm { mov dword ptr [g_012f6aa8], eax }
	__asm { mov dword ptr [g_012f6a9c], 0x11f0f78 }
	__asm { mov dword ptr [g_012f6aa4], 0x40d810 }
	__asm { mov dword ptr [g_012f6aa0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dc9c2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6a9c }
	__asm { jne L_007dc9db }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dc9db: }
	__asm { test ecx, ecx }
	__asm { je L_007dc9f1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dc9f1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dc9ff }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dc9ff: }
	__asm { mov dword ptr [esi], 0x12f6a9c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f683c[];
extern "C" char g_012f6840[];
extern "C" char g_012f6844[];
extern "C" char g_012f6848[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dca10
extern "C" __declspec(naked) void asm_007dca10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6848] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dca52 }
	__asm { or eax, 1 }
	__asm { push 0xde87b0 }
	__asm { mov dword ptr [g_012f6848], eax }
	__asm { mov dword ptr [g_012f683c], 0x11f0904 }
	__asm { mov dword ptr [g_012f6844], 0x40d810 }
	__asm { mov dword ptr [g_012f6840], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dca52: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f683c }
	__asm { jne L_007dca6b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dca6b: }
	__asm { test ecx, ecx }
	__asm { je L_007dca81 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dca81: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dca8f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dca8f: }
	__asm { mov dword ptr [esi], 0x12f683c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f68bc[];
extern "C" char g_012f68c0[];
extern "C" char g_012f68c4[];
extern "C" char g_012f68c8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dcaa0
extern "C" __declspec(naked) void asm_007dcaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f68c8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dcae2 }
	__asm { or eax, 1 }
	__asm { push 0xde87c0 }
	__asm { mov dword ptr [g_012f68c8], eax }
	__asm { mov dword ptr [g_012f68bc], 0x11f0a68 }
	__asm { mov dword ptr [g_012f68c4], 0x40d810 }
	__asm { mov dword ptr [g_012f68c0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dcae2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f68bc }
	__asm { jne L_007dcafb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dcafb: }
	__asm { test ecx, ecx }
	__asm { je L_007dcb11 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dcb11: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dcb1f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dcb1f: }
	__asm { mov dword ptr [esi], 0x12f68bc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6c1c[];
extern "C" char g_012f6c20[];
extern "C" char g_012f6c24[];
extern "C" char g_012f6c28[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dcb30
extern "C" __declspec(naked) void asm_007dcb30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6c28] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dcb72 }
	__asm { or eax, 1 }
	__asm { push 0xde87d0 }
	__asm { mov dword ptr [g_012f6c28], eax }
	__asm { mov dword ptr [g_012f6c1c], 0x11f13c4 }
	__asm { mov dword ptr [g_012f6c24], 0x40d810 }
	__asm { mov dword ptr [g_012f6c20], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dcb72: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6c1c }
	__asm { jne L_007dcb8b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dcb8b: }
	__asm { test ecx, ecx }
	__asm { je L_007dcba1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dcba1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dcbaf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dcbaf: }
	__asm { mov dword ptr [esi], 0x12f6c1c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f68cc[];
extern "C" char g_012f68d0[];
extern "C" char g_012f68d4[];
extern "C" char g_012f68d8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dcbc0
extern "C" __declspec(naked) void asm_007dcbc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f68d8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dcc02 }
	__asm { or eax, 1 }
	__asm { push 0xde87e0 }
	__asm { mov dword ptr [g_012f68d8], eax }
	__asm { mov dword ptr [g_012f68cc], 0x11f0a8c }
	__asm { mov dword ptr [g_012f68d4], 0x40d810 }
	__asm { mov dword ptr [g_012f68d0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dcc02: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f68cc }
	__asm { jne L_007dcc1b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dcc1b: }
	__asm { test ecx, ecx }
	__asm { je L_007dcc31 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dcc31: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dcc3f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dcc3f: }
	__asm { mov dword ptr [esi], 0x12f68cc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f685c[];
extern "C" char g_012f6860[];
extern "C" char g_012f6864[];
extern "C" char g_012f6868[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dcc50
extern "C" __declspec(naked) void asm_007dcc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6868] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dcc92 }
	__asm { or eax, 1 }
	__asm { push 0xde87f0 }
	__asm { mov dword ptr [g_012f6868], eax }
	__asm { mov dword ptr [g_012f685c], 0x11f096c }
	__asm { mov dword ptr [g_012f6864], 0x40d810 }
	__asm { mov dword ptr [g_012f6860], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dcc92: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f685c }
	__asm { jne L_007dccab }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dccab: }
	__asm { test ecx, ecx }
	__asm { je L_007dccc1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dccc1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dcccf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dcccf: }
	__asm { mov dword ptr [esi], 0x12f685c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f689c[];
extern "C" char g_012f68a0[];
extern "C" char g_012f68a4[];
extern "C" char g_012f68a8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dcce0
extern "C" __declspec(naked) void asm_007dcce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f68a8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dcd22 }
	__asm { or eax, 1 }
	__asm { push 0xde8800 }
	__asm { mov dword ptr [g_012f68a8], eax }
	__asm { mov dword ptr [g_012f689c], 0x11f0a18 }
	__asm { mov dword ptr [g_012f68a4], 0x40d810 }
	__asm { mov dword ptr [g_012f68a0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dcd22: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f689c }
	__asm { jne L_007dcd3b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dcd3b: }
	__asm { test ecx, ecx }
	__asm { je L_007dcd51 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dcd51: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dcd5f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dcd5f: }
	__asm { mov dword ptr [esi], 0x12f689c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f66fc[];
extern "C" char g_012f6700[];
extern "C" char g_012f6704[];
extern "C" char g_012f6708[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dcd70
extern "C" __declspec(naked) void asm_007dcd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6708] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dcdb2 }
	__asm { or eax, 1 }
	__asm { push 0xde8810 }
	__asm { mov dword ptr [g_012f6708], eax }
	__asm { mov dword ptr [g_012f66fc], 0x11f0568 }
	__asm { mov dword ptr [g_012f6704], 0x40d810 }
	__asm { mov dword ptr [g_012f6700], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dcdb2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f66fc }
	__asm { jne L_007dcdcb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dcdcb: }
	__asm { test ecx, ecx }
	__asm { je L_007dcde1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dcde1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dcdef }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dcdef: }
	__asm { mov dword ptr [esi], 0x12f66fc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f69fc[];
extern "C" char g_012f6a00[];
extern "C" char g_012f6a04[];
extern "C" char g_012f6a08[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dce00
extern "C" __declspec(naked) void asm_007dce00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6a08] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dce42 }
	__asm { or eax, 1 }
	__asm { push 0xde8820 }
	__asm { mov dword ptr [g_012f6a08], eax }
	__asm { mov dword ptr [g_012f69fc], 0x11f0db4 }
	__asm { mov dword ptr [g_012f6a04], 0x40d810 }
	__asm { mov dword ptr [g_012f6a00], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dce42: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f69fc }
	__asm { jne L_007dce5b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dce5b: }
	__asm { test ecx, ecx }
	__asm { je L_007dce71 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dce71: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dce7f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dce7f: }
	__asm { mov dword ptr [esi], 0x12f69fc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6c2c[];
extern "C" char g_012f6c30[];
extern "C" char g_012f6c34[];
extern "C" char g_012f6c38[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dce90
extern "C" __declspec(naked) void asm_007dce90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6c38] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dced2 }
	__asm { or eax, 1 }
	__asm { push 0xde8830 }
	__asm { mov dword ptr [g_012f6c38], eax }
	__asm { mov dword ptr [g_012f6c2c], 0x11f13e0 }
	__asm { mov dword ptr [g_012f6c34], 0x40d810 }
	__asm { mov dword ptr [g_012f6c30], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dced2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6c2c }
	__asm { jne L_007dceeb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dceeb: }
	__asm { test ecx, ecx }
	__asm { je L_007dcf01 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dcf01: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dcf0f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dcf0f: }
	__asm { mov dword ptr [esi], 0x12f6c2c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6a3c[];
extern "C" char g_012f6a40[];
extern "C" char g_012f6a44[];
extern "C" char g_012f6a48[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dcf20
extern "C" __declspec(naked) void asm_007dcf20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6a48] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dcf62 }
	__asm { or eax, 1 }
	__asm { push 0xde8840 }
	__asm { mov dword ptr [g_012f6a48], eax }
	__asm { mov dword ptr [g_012f6a3c], 0x11f0e64 }
	__asm { mov dword ptr [g_012f6a44], 0x40d810 }
	__asm { mov dword ptr [g_012f6a40], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dcf62: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6a3c }
	__asm { jne L_007dcf7b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dcf7b: }
	__asm { test ecx, ecx }
	__asm { je L_007dcf91 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dcf91: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dcf9f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dcf9f: }
	__asm { mov dword ptr [esi], 0x12f6a3c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f69dc[];
extern "C" char g_012f69e0[];
extern "C" char g_012f69e4[];
extern "C" char g_012f69e8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dcfb0
extern "C" __declspec(naked) void asm_007dcfb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f69e8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dcff2 }
	__asm { or eax, 1 }
	__asm { push 0xde8850 }
	__asm { mov dword ptr [g_012f69e8], eax }
	__asm { mov dword ptr [g_012f69dc], 0x11f0d64 }
	__asm { mov dword ptr [g_012f69e4], 0x40d810 }
	__asm { mov dword ptr [g_012f69e0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dcff2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f69dc }
	__asm { jne L_007dd00b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dd00b: }
	__asm { test ecx, ecx }
	__asm { je L_007dd021 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dd021: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dd02f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dd02f: }
	__asm { mov dword ptr [esi], 0x12f69dc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f690c[];
extern "C" char g_012f6910[];
extern "C" char g_012f6914[];
extern "C" char g_012f6918[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dd040
extern "C" __declspec(naked) void asm_007dd040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6918] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dd082 }
	__asm { or eax, 1 }
	__asm { push 0xde8860 }
	__asm { mov dword ptr [g_012f6918], eax }
	__asm { mov dword ptr [g_012f690c], 0x11f0b24 }
	__asm { mov dword ptr [g_012f6914], 0x40d810 }
	__asm { mov dword ptr [g_012f6910], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dd082: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f690c }
	__asm { jne L_007dd09b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dd09b: }
	__asm { test ecx, ecx }
	__asm { je L_007dd0b1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dd0b1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dd0bf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dd0bf: }
	__asm { mov dword ptr [esi], 0x12f690c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f671c[];
extern "C" char g_012f6720[];
extern "C" char g_012f6724[];
extern "C" char g_012f6728[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dd0d0
extern "C" __declspec(naked) void asm_007dd0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6728] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dd112 }
	__asm { or eax, 1 }
	__asm { push 0xde8870 }
	__asm { mov dword ptr [g_012f6728], eax }
	__asm { mov dword ptr [g_012f671c], 0x11f05d8 }
	__asm { mov dword ptr [g_012f6724], 0x40d810 }
	__asm { mov dword ptr [g_012f6720], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dd112: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f671c }
	__asm { jne L_007dd12b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dd12b: }
	__asm { test ecx, ecx }
	__asm { je L_007dd141 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dd141: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dd14f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dd14f: }
	__asm { mov dword ptr [esi], 0x12f671c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f672c[];
extern "C" char g_012f6730[];
extern "C" char g_012f6734[];
extern "C" char g_012f6738[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dd160
extern "C" __declspec(naked) void asm_007dd160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6738] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dd1a2 }
	__asm { or eax, 1 }
	__asm { push 0xde8880 }
	__asm { mov dword ptr [g_012f6738], eax }
	__asm { mov dword ptr [g_012f672c], 0x11f0608 }
	__asm { mov dword ptr [g_012f6734], 0x40d810 }
	__asm { mov dword ptr [g_012f6730], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dd1a2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f672c }
	__asm { jne L_007dd1bb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dd1bb: }
	__asm { test ecx, ecx }
	__asm { je L_007dd1d1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dd1d1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dd1df }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dd1df: }
	__asm { mov dword ptr [esi], 0x12f672c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f66ec[];
extern "C" char g_012f66f0[];
extern "C" char g_012f66f4[];
extern "C" char g_012f66f8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dd1f0
extern "C" __declspec(naked) void asm_007dd1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f66f8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dd232 }
	__asm { or eax, 1 }
	__asm { push 0xde8890 }
	__asm { mov dword ptr [g_012f66f8], eax }
	__asm { mov dword ptr [g_012f66ec], 0x11f0548 }
	__asm { mov dword ptr [g_012f66f4], 0x40d810 }
	__asm { mov dword ptr [g_012f66f0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dd232: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f66ec }
	__asm { jne L_007dd24b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dd24b: }
	__asm { test ecx, ecx }
	__asm { je L_007dd261 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dd261: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dd26f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dd26f: }
	__asm { mov dword ptr [esi], 0x12f66ec }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6a2c[];
extern "C" char g_012f6a30[];
extern "C" char g_012f6a34[];
extern "C" char g_012f6a38[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dd280
extern "C" __declspec(naked) void asm_007dd280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6a38] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dd2c2 }
	__asm { or eax, 1 }
	__asm { push 0xde88a0 }
	__asm { mov dword ptr [g_012f6a38], eax }
	__asm { mov dword ptr [g_012f6a2c], 0x11f0e34 }
	__asm { mov dword ptr [g_012f6a34], 0x40d810 }
	__asm { mov dword ptr [g_012f6a30], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dd2c2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6a2c }
	__asm { jne L_007dd2db }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dd2db: }
	__asm { test ecx, ecx }
	__asm { je L_007dd2f1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dd2f1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dd2ff }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dd2ff: }
	__asm { mov dword ptr [esi], 0x12f6a2c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f697c[];
extern "C" char g_012f6980[];
extern "C" char g_012f6984[];
extern "C" char g_012f6988[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dd310
extern "C" __declspec(naked) void asm_007dd310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6988] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dd352 }
	__asm { or eax, 1 }
	__asm { push 0xde88b0 }
	__asm { mov dword ptr [g_012f6988], eax }
	__asm { mov dword ptr [g_012f697c], 0x11f0c44 }
	__asm { mov dword ptr [g_012f6984], 0x40d810 }
	__asm { mov dword ptr [g_012f6980], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dd352: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f697c }
	__asm { jne L_007dd36b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dd36b: }
	__asm { test ecx, ecx }
	__asm { je L_007dd381 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dd381: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dd38f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dd38f: }
	__asm { mov dword ptr [esi], 0x12f697c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f675c[];
extern "C" char g_012f6760[];
extern "C" char g_012f6764[];
extern "C" char g_012f6768[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dd3a0
extern "C" __declspec(naked) void asm_007dd3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6768] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dd3e2 }
	__asm { or eax, 1 }
	__asm { push 0xde88c0 }
	__asm { mov dword ptr [g_012f6768], eax }
	__asm { mov dword ptr [g_012f675c], 0x11f0690 }
	__asm { mov dword ptr [g_012f6764], 0x40d810 }
	__asm { mov dword ptr [g_012f6760], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dd3e2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f675c }
	__asm { jne L_007dd3fb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dd3fb: }
	__asm { test ecx, ecx }
	__asm { je L_007dd411 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dd411: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dd41f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dd41f: }
	__asm { mov dword ptr [esi], 0x12f675c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f699c[];
extern "C" char g_012f69a0[];
extern "C" char g_012f69a4[];
extern "C" char g_012f69a8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dd430
extern "C" __declspec(naked) void asm_007dd430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f69a8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dd472 }
	__asm { or eax, 1 }
	__asm { push 0xde88d0 }
	__asm { mov dword ptr [g_012f69a8], eax }
	__asm { mov dword ptr [g_012f699c], 0x11f0ca0 }
	__asm { mov dword ptr [g_012f69a4], 0x40d810 }
	__asm { mov dword ptr [g_012f69a0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dd472: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f699c }
	__asm { jne L_007dd48b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dd48b: }
	__asm { test ecx, ecx }
	__asm { je L_007dd4a1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dd4a1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dd4af }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dd4af: }
	__asm { mov dword ptr [esi], 0x12f699c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6c3c[];
extern "C" char g_012f6c40[];
extern "C" char g_012f6c44[];
extern "C" char g_012f6c48[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dd4c0
extern "C" __declspec(naked) void asm_007dd4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6c48] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dd502 }
	__asm { or eax, 1 }
	__asm { push 0xde88e0 }
	__asm { mov dword ptr [g_012f6c48], eax }
	__asm { mov dword ptr [g_012f6c3c], 0x11f1400 }
	__asm { mov dword ptr [g_012f6c44], 0x40d810 }
	__asm { mov dword ptr [g_012f6c40], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dd502: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6c3c }
	__asm { jne L_007dd51b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dd51b: }
	__asm { test ecx, ecx }
	__asm { je L_007dd531 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dd531: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dd53f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dd53f: }
	__asm { mov dword ptr [esi], 0x12f6c3c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6aec[];
extern "C" char g_012f6af0[];
extern "C" char g_012f6af4[];
extern "C" char g_012f6af8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dd550
extern "C" __declspec(naked) void asm_007dd550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6af8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dd592 }
	__asm { or eax, 1 }
	__asm { push 0xde88f0 }
	__asm { mov dword ptr [g_012f6af8], eax }
	__asm { mov dword ptr [g_012f6aec], 0x11f1068 }
	__asm { mov dword ptr [g_012f6af4], 0x40d810 }
	__asm { mov dword ptr [g_012f6af0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dd592: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6aec }
	__asm { jne L_007dd5ab }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dd5ab: }
	__asm { test ecx, ecx }
	__asm { je L_007dd5c1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dd5c1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dd5cf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dd5cf: }
	__asm { mov dword ptr [esi], 0x12f6aec }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f674c[];
extern "C" char g_012f6750[];
extern "C" char g_012f6754[];
extern "C" char g_012f6758[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dd5e0
extern "C" __declspec(naked) void asm_007dd5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6758] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dd622 }
	__asm { or eax, 1 }
	__asm { push 0xde8900 }
	__asm { mov dword ptr [g_012f6758], eax }
	__asm { mov dword ptr [g_012f674c], 0x11f0664 }
	__asm { mov dword ptr [g_012f6754], 0x40d810 }
	__asm { mov dword ptr [g_012f6750], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dd622: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f674c }
	__asm { jne L_007dd63b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dd63b: }
	__asm { test ecx, ecx }
	__asm { je L_007dd651 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dd651: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dd65f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dd65f: }
	__asm { mov dword ptr [esi], 0x12f674c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6a4c[];
extern "C" char g_012f6a50[];
extern "C" char g_012f6a54[];
extern "C" char g_012f6a58[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dd670
extern "C" __declspec(naked) void asm_007dd670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6a58] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dd6b2 }
	__asm { or eax, 1 }
	__asm { push 0xde8910 }
	__asm { mov dword ptr [g_012f6a58], eax }
	__asm { mov dword ptr [g_012f6a4c], 0x11f0e94 }
	__asm { mov dword ptr [g_012f6a54], 0x40d810 }
	__asm { mov dword ptr [g_012f6a50], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dd6b2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6a4c }
	__asm { jne L_007dd6cb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dd6cb: }
	__asm { test ecx, ecx }
	__asm { je L_007dd6e1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dd6e1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dd6ef }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dd6ef: }
	__asm { mov dword ptr [esi], 0x12f6a4c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f696c[];
extern "C" char g_012f6970[];
extern "C" char g_012f6974[];
extern "C" char g_012f6978[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dd700
extern "C" __declspec(naked) void asm_007dd700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6978] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dd742 }
	__asm { or eax, 1 }
	__asm { push 0xde8920 }
	__asm { mov dword ptr [g_012f6978], eax }
	__asm { mov dword ptr [g_012f696c], 0x11f0c1c }
	__asm { mov dword ptr [g_012f6974], 0x40d810 }
	__asm { mov dword ptr [g_012f6970], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dd742: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f696c }
	__asm { jne L_007dd75b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dd75b: }
	__asm { test ecx, ecx }
	__asm { je L_007dd771 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dd771: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dd77f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dd77f: }
	__asm { mov dword ptr [esi], 0x12f696c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f67bc[];
extern "C" char g_012f67c0[];
extern "C" char g_012f67c4[];
extern "C" char g_012f67c8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dd790
extern "C" __declspec(naked) void asm_007dd790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f67c8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dd7d2 }
	__asm { or eax, 1 }
	__asm { push 0xde8930 }
	__asm { mov dword ptr [g_012f67c8], eax }
	__asm { mov dword ptr [g_012f67bc], 0x11f07a4 }
	__asm { mov dword ptr [g_012f67c4], 0x40d810 }
	__asm { mov dword ptr [g_012f67c0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dd7d2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f67bc }
	__asm { jne L_007dd7eb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dd7eb: }
	__asm { test ecx, ecx }
	__asm { je L_007dd801 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dd801: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dd80f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dd80f: }
	__asm { mov dword ptr [esi], 0x12f67bc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f676c[];
extern "C" char g_012f6770[];
extern "C" char g_012f6774[];
extern "C" char g_012f6778[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dd820
extern "C" __declspec(naked) void asm_007dd820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6778] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dd862 }
	__asm { or eax, 1 }
	__asm { push 0xde8940 }
	__asm { mov dword ptr [g_012f6778], eax }
	__asm { mov dword ptr [g_012f676c], 0x11f06c0 }
	__asm { mov dword ptr [g_012f6774], 0x40d810 }
	__asm { mov dword ptr [g_012f6770], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dd862: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f676c }
	__asm { jne L_007dd87b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dd87b: }
	__asm { test ecx, ecx }
	__asm { je L_007dd891 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dd891: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dd89f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dd89f: }
	__asm { mov dword ptr [esi], 0x12f676c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f69ec[];
extern "C" char g_012f69f0[];
extern "C" char g_012f69f4[];
extern "C" char g_012f69f8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dd8b0
extern "C" __declspec(naked) void asm_007dd8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f69f8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dd8f2 }
	__asm { or eax, 1 }
	__asm { push 0xde8950 }
	__asm { mov dword ptr [g_012f69f8], eax }
	__asm { mov dword ptr [g_012f69ec], 0x11f0d94 }
	__asm { mov dword ptr [g_012f69f4], 0x40d810 }
	__asm { mov dword ptr [g_012f69f0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dd8f2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f69ec }
	__asm { jne L_007dd90b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dd90b: }
	__asm { test ecx, ecx }
	__asm { je L_007dd921 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dd921: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dd92f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dd92f: }
	__asm { mov dword ptr [esi], 0x12f69ec }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6a5c[];
extern "C" char g_012f6a60[];
extern "C" char g_012f6a64[];
extern "C" char g_012f6a68[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dd940
extern "C" __declspec(naked) void asm_007dd940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6a68] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dd982 }
	__asm { or eax, 1 }
	__asm { push 0xde8960 }
	__asm { mov dword ptr [g_012f6a68], eax }
	__asm { mov dword ptr [g_012f6a5c], 0x11f0ebc }
	__asm { mov dword ptr [g_012f6a64], 0x40d810 }
	__asm { mov dword ptr [g_012f6a60], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dd982: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6a5c }
	__asm { jne L_007dd99b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dd99b: }
	__asm { test ecx, ecx }
	__asm { je L_007dd9b1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dd9b1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dd9bf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dd9bf: }
	__asm { mov dword ptr [esi], 0x12f6a5c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f691c[];
extern "C" char g_012f6920[];
extern "C" char g_012f6924[];
extern "C" char g_012f6928[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dd9d0
extern "C" __declspec(naked) void asm_007dd9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6928] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dda12 }
	__asm { or eax, 1 }
	__asm { push 0xde8970 }
	__asm { mov dword ptr [g_012f6928], eax }
	__asm { mov dword ptr [g_012f691c], 0x11f0b50 }
	__asm { mov dword ptr [g_012f6924], 0x40d810 }
	__asm { mov dword ptr [g_012f6920], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dda12: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f691c }
	__asm { jne L_007dda2b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dda2b: }
	__asm { test ecx, ecx }
	__asm { je L_007dda41 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dda41: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dda4f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dda4f: }
	__asm { mov dword ptr [esi], 0x12f691c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f68fc[];
extern "C" char g_012f6900[];
extern "C" char g_012f6904[];
extern "C" char g_012f6908[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dda60
extern "C" __declspec(naked) void asm_007dda60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6908] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007ddaa2 }
	__asm { or eax, 1 }
	__asm { push 0xde8980 }
	__asm { mov dword ptr [g_012f6908], eax }
	__asm { mov dword ptr [g_012f68fc], 0x11f0b00 }
	__asm { mov dword ptr [g_012f6904], 0x40d810 }
	__asm { mov dword ptr [g_012f6900], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007ddaa2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f68fc }
	__asm { jne L_007ddabb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007ddabb: }
	__asm { test ecx, ecx }
	__asm { je L_007ddad1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007ddad1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007ddadf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007ddadf: }
	__asm { mov dword ptr [esi], 0x12f68fc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f698c[];
extern "C" char g_012f6990[];
extern "C" char g_012f6994[];
extern "C" char g_012f6998[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007ddaf0
extern "C" __declspec(naked) void asm_007ddaf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6998] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007ddb32 }
	__asm { or eax, 1 }
	__asm { push 0xde8990 }
	__asm { mov dword ptr [g_012f6998], eax }
	__asm { mov dword ptr [g_012f698c], 0x11f0c74 }
	__asm { mov dword ptr [g_012f6994], 0x40d810 }
	__asm { mov dword ptr [g_012f6990], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007ddb32: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f698c }
	__asm { jne L_007ddb4b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007ddb4b: }
	__asm { test ecx, ecx }
	__asm { je L_007ddb61 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007ddb61: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007ddb6f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007ddb6f: }
	__asm { mov dword ptr [esi], 0x12f698c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6b1c[];
extern "C" char g_012f6b20[];
extern "C" char g_012f6b24[];
extern "C" char g_012f6b28[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007ddb80
extern "C" __declspec(naked) void asm_007ddb80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6b28] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007ddbc2 }
	__asm { or eax, 1 }
	__asm { push 0xde89a0 }
	__asm { mov dword ptr [g_012f6b28], eax }
	__asm { mov dword ptr [g_012f6b1c], 0x11f110c }
	__asm { mov dword ptr [g_012f6b24], 0x40d810 }
	__asm { mov dword ptr [g_012f6b20], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007ddbc2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6b1c }
	__asm { jne L_007ddbdb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007ddbdb: }
	__asm { test ecx, ecx }
	__asm { je L_007ddbf1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007ddbf1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007ddbff }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007ddbff: }
	__asm { mov dword ptr [esi], 0x12f6b1c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6b2c[];
extern "C" char g_012f6b30[];
extern "C" char g_012f6b34[];
extern "C" char g_012f6b38[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007ddc10
extern "C" __declspec(naked) void asm_007ddc10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6b38] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007ddc52 }
	__asm { or eax, 1 }
	__asm { push 0xde89b0 }
	__asm { mov dword ptr [g_012f6b38], eax }
	__asm { mov dword ptr [g_012f6b2c], 0x11f112c }
	__asm { mov dword ptr [g_012f6b34], 0x40d810 }
	__asm { mov dword ptr [g_012f6b30], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007ddc52: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6b2c }
	__asm { jne L_007ddc6b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007ddc6b: }
	__asm { test ecx, ecx }
	__asm { je L_007ddc81 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007ddc81: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007ddc8f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007ddc8f: }
	__asm { mov dword ptr [esi], 0x12f6b2c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f68dc[];
extern "C" char g_012f68e0[];
extern "C" char g_012f68e4[];
extern "C" char g_012f68e8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007ddca0
extern "C" __declspec(naked) void asm_007ddca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f68e8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007ddce2 }
	__asm { or eax, 1 }
	__asm { push 0xde89c0 }
	__asm { mov dword ptr [g_012f68e8], eax }
	__asm { mov dword ptr [g_012f68dc], 0x11f0ab4 }
	__asm { mov dword ptr [g_012f68e4], 0x40d810 }
	__asm { mov dword ptr [g_012f68e0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007ddce2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f68dc }
	__asm { jne L_007ddcfb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007ddcfb: }
	__asm { test ecx, ecx }
	__asm { je L_007ddd11 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007ddd11: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007ddd1f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007ddd1f: }
	__asm { mov dword ptr [esi], 0x12f68dc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6a0c[];
extern "C" char g_012f6a10[];
extern "C" char g_012f6a14[];
extern "C" char g_012f6a18[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007ddd30
extern "C" __declspec(naked) void asm_007ddd30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6a18] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007ddd72 }
	__asm { or eax, 1 }
	__asm { push 0xde89d0 }
	__asm { mov dword ptr [g_012f6a18], eax }
	__asm { mov dword ptr [g_012f6a0c], 0x11f0de0 }
	__asm { mov dword ptr [g_012f6a14], 0x40d810 }
	__asm { mov dword ptr [g_012f6a10], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007ddd72: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6a0c }
	__asm { jne L_007ddd8b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007ddd8b: }
	__asm { test ecx, ecx }
	__asm { je L_007ddda1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007ddda1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dddaf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dddaf: }
	__asm { mov dword ptr [esi], 0x12f6a0c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6a1c[];
extern "C" char g_012f6a20[];
extern "C" char g_012f6a24[];
extern "C" char g_012f6a28[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dddc0
extern "C" __declspec(naked) void asm_007dddc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6a28] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dde02 }
	__asm { or eax, 1 }
	__asm { push 0xde89e0 }
	__asm { mov dword ptr [g_012f6a28], eax }
	__asm { mov dword ptr [g_012f6a1c], 0x11f0e00 }
	__asm { mov dword ptr [g_012f6a24], 0x40d810 }
	__asm { mov dword ptr [g_012f6a20], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dde02: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6a1c }
	__asm { jne L_007dde1b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007dde1b: }
	__asm { test ecx, ecx }
	__asm { je L_007dde31 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007dde31: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007dde3f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007dde3f: }
	__asm { mov dword ptr [esi], 0x12f6a1c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6c0c[];
extern "C" char g_012f6c10[];
extern "C" char g_012f6c14[];
extern "C" char g_012f6c18[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007dde50
extern "C" __declspec(naked) void asm_007dde50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6c18] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007dde92 }
	__asm { or eax, 1 }
	__asm { push 0xde89f0 }
	__asm { mov dword ptr [g_012f6c18], eax }
	__asm { mov dword ptr [g_012f6c0c], 0x11f1390 }
	__asm { mov dword ptr [g_012f6c14], 0x40d810 }
	__asm { mov dword ptr [g_012f6c10], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007dde92: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6c0c }
	__asm { jne L_007ddeab }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007ddeab: }
	__asm { test ecx, ecx }
	__asm { je L_007ddec1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007ddec1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007ddecf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007ddecf: }
	__asm { mov dword ptr [esi], 0x12f6c0c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f677c[];
extern "C" char g_012f6780[];
extern "C" char g_012f6784[];
extern "C" char g_012f6788[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007ddee0
extern "C" __declspec(naked) void asm_007ddee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6788] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007ddf22 }
	__asm { or eax, 1 }
	__asm { push 0xde8a00 }
	__asm { mov dword ptr [g_012f6788], eax }
	__asm { mov dword ptr [g_012f677c], 0x11f06f8 }
	__asm { mov dword ptr [g_012f6784], 0x40d810 }
	__asm { mov dword ptr [g_012f6780], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007ddf22: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f677c }
	__asm { jne L_007ddf3b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007ddf3b: }
	__asm { test ecx, ecx }
	__asm { je L_007ddf51 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007ddf51: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007ddf5f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007ddf5f: }
	__asm { mov dword ptr [esi], 0x12f677c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f68ac[];
extern "C" char g_012f68b0[];
extern "C" char g_012f68b4[];
extern "C" char g_012f68b8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007ddf70
extern "C" __declspec(naked) void asm_007ddf70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f68b8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007ddfb2 }
	__asm { or eax, 1 }
	__asm { push 0xde8a10 }
	__asm { mov dword ptr [g_012f68b8], eax }
	__asm { mov dword ptr [g_012f68ac], 0x11f0a40 }
	__asm { mov dword ptr [g_012f68b4], 0x40d810 }
	__asm { mov dword ptr [g_012f68b0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007ddfb2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f68ac }
	__asm { jne L_007ddfcb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007ddfcb: }
	__asm { test ecx, ecx }
	__asm { je L_007ddfe1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007ddfe1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007ddfef }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007ddfef: }
	__asm { mov dword ptr [esi], 0x12f68ac }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6b0c[];
extern "C" char g_012f6b10[];
extern "C" char g_012f6b14[];
extern "C" char g_012f6b18[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007de000
extern "C" __declspec(naked) void asm_007de000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6b18] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007de042 }
	__asm { or eax, 1 }
	__asm { push 0xde8a20 }
	__asm { mov dword ptr [g_012f6b18], eax }
	__asm { mov dword ptr [g_012f6b0c], 0x11f10d4 }
	__asm { mov dword ptr [g_012f6b14], 0x40d810 }
	__asm { mov dword ptr [g_012f6b10], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007de042: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6b0c }
	__asm { jne L_007de05b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007de05b: }
	__asm { test ecx, ecx }
	__asm { je L_007de071 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007de071: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007de07f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007de07f: }
	__asm { mov dword ptr [esi], 0x12f6b0c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f67ec[];
extern "C" char g_012f67f0[];
extern "C" char g_012f67f4[];
extern "C" char g_012f67f8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007de090
extern "C" __declspec(naked) void asm_007de090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f67f8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007de0d2 }
	__asm { or eax, 1 }
	__asm { push 0xde8a30 }
	__asm { mov dword ptr [g_012f67f8], eax }
	__asm { mov dword ptr [g_012f67ec], 0x11f082c }
	__asm { mov dword ptr [g_012f67f4], 0x40d810 }
	__asm { mov dword ptr [g_012f67f0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007de0d2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f67ec }
	__asm { jne L_007de0eb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007de0eb: }
	__asm { test ecx, ecx }
	__asm { je L_007de101 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007de101: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007de10f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007de10f: }
	__asm { mov dword ptr [esi], 0x12f67ec }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f67cc[];
extern "C" char g_012f67d0[];
extern "C" char g_012f67d4[];
extern "C" char g_012f67d8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007de120
extern "C" __declspec(naked) void asm_007de120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f67d8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007de162 }
	__asm { or eax, 1 }
	__asm { push 0xde8a40 }
	__asm { mov dword ptr [g_012f67d8], eax }
	__asm { mov dword ptr [g_012f67cc], 0x11f07d0 }
	__asm { mov dword ptr [g_012f67d4], 0x40d810 }
	__asm { mov dword ptr [g_012f67d0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007de162: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f67cc }
	__asm { jne L_007de17b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007de17b: }
	__asm { test ecx, ecx }
	__asm { je L_007de191 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007de191: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007de19f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007de19f: }
	__asm { mov dword ptr [esi], 0x12f67cc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f67dc[];
extern "C" char g_012f67e0[];
extern "C" char g_012f67e4[];
extern "C" char g_012f67e8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007de1b0
extern "C" __declspec(naked) void asm_007de1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f67e8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007de1f2 }
	__asm { or eax, 1 }
	__asm { push 0xde8a50 }
	__asm { mov dword ptr [g_012f67e8], eax }
	__asm { mov dword ptr [g_012f67dc], 0x11f0800 }
	__asm { mov dword ptr [g_012f67e4], 0x40d810 }
	__asm { mov dword ptr [g_012f67e0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007de1f2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f67dc }
	__asm { jne L_007de20b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007de20b: }
	__asm { test ecx, ecx }
	__asm { je L_007de221 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007de221: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007de22f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007de22f: }
	__asm { mov dword ptr [esi], 0x12f67dc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6acc[];
extern "C" char g_012f6ad0[];
extern "C" char g_012f6ad4[];
extern "C" char g_012f6ad8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007de240
extern "C" __declspec(naked) void asm_007de240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6ad8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007de282 }
	__asm { or eax, 1 }
	__asm { push 0xde8a60 }
	__asm { mov dword ptr [g_012f6ad8], eax }
	__asm { mov dword ptr [g_012f6acc], 0x11f1004 }
	__asm { mov dword ptr [g_012f6ad4], 0x40d810 }
	__asm { mov dword ptr [g_012f6ad0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007de282: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6acc }
	__asm { jne L_007de29b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007de29b: }
	__asm { test ecx, ecx }
	__asm { je L_007de2b1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007de2b1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007de2bf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007de2bf: }
	__asm { mov dword ptr [esi], 0x12f6acc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6bcc[];
extern "C" char g_012f6bd0[];
extern "C" char g_012f6bd4[];
extern "C" char g_012f6bd8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007de2d0
extern "C" __declspec(naked) void asm_007de2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6bd8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007de312 }
	__asm { or eax, 1 }
	__asm { push 0xde8a70 }
	__asm { mov dword ptr [g_012f6bd8], eax }
	__asm { mov dword ptr [g_012f6bcc], 0x11f12d0 }
	__asm { mov dword ptr [g_012f6bd4], 0x40d810 }
	__asm { mov dword ptr [g_012f6bd0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007de312: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6bcc }
	__asm { jne L_007de32b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007de32b: }
	__asm { test ecx, ecx }
	__asm { je L_007de341 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007de341: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007de34f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007de34f: }
	__asm { mov dword ptr [esi], 0x12f6bcc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6bbc[];
extern "C" char g_012f6bc0[];
extern "C" char g_012f6bc4[];
extern "C" char g_012f6bc8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007de360
extern "C" __declspec(naked) void asm_007de360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6bc8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007de3a2 }
	__asm { or eax, 1 }
	__asm { push 0xde8a80 }
	__asm { mov dword ptr [g_012f6bc8], eax }
	__asm { mov dword ptr [g_012f6bbc], 0x11f12a0 }
	__asm { mov dword ptr [g_012f6bc4], 0x40d810 }
	__asm { mov dword ptr [g_012f6bc0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007de3a2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6bbc }
	__asm { jne L_007de3bb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007de3bb: }
	__asm { test ecx, ecx }
	__asm { je L_007de3d1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007de3d1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007de3df }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007de3df: }
	__asm { mov dword ptr [esi], 0x12f6bbc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6abc[];
extern "C" char g_012f6ac0[];
extern "C" char g_012f6ac4[];
extern "C" char g_012f6ac8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007de3f0
extern "C" __declspec(naked) void asm_007de3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6ac8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007de432 }
	__asm { or eax, 1 }
	__asm { push 0xde8a90 }
	__asm { mov dword ptr [g_012f6ac8], eax }
	__asm { mov dword ptr [g_012f6abc], 0x11f0fd4 }
	__asm { mov dword ptr [g_012f6ac4], 0x40d810 }
	__asm { mov dword ptr [g_012f6ac0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007de432: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6abc }
	__asm { jne L_007de44b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007de44b: }
	__asm { test ecx, ecx }
	__asm { je L_007de461 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007de461: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007de46f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007de46f: }
	__asm { mov dword ptr [esi], 0x12f6abc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f69cc[];
extern "C" char g_012f69d0[];
extern "C" char g_012f69d4[];
extern "C" char g_012f69d8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007de480
extern "C" __declspec(naked) void asm_007de480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f69d8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007de4c2 }
	__asm { or eax, 1 }
	__asm { push 0xde8aa0 }
	__asm { mov dword ptr [g_012f69d8], eax }
	__asm { mov dword ptr [g_012f69cc], 0x11f0d3c }
	__asm { mov dword ptr [g_012f69d4], 0x40d810 }
	__asm { mov dword ptr [g_012f69d0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007de4c2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f69cc }
	__asm { jne L_007de4db }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007de4db: }
	__asm { test ecx, ecx }
	__asm { je L_007de4f1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007de4f1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007de4ff }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007de4ff: }
	__asm { mov dword ptr [esi], 0x12f69cc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f670c[];
extern "C" char g_012f6710[];
extern "C" char g_012f6714[];
extern "C" char g_012f6718[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007de510
extern "C" __declspec(naked) void asm_007de510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6718] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007de552 }
	__asm { or eax, 1 }
	__asm { push 0xde8ab0 }
	__asm { mov dword ptr [g_012f6718], eax }
	__asm { mov dword ptr [g_012f670c], 0x11f059c }
	__asm { mov dword ptr [g_012f6714], 0x40d810 }
	__asm { mov dword ptr [g_012f6710], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007de552: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f670c }
	__asm { jne L_007de56b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007de56b: }
	__asm { test ecx, ecx }
	__asm { je L_007de581 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007de581: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007de58f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007de58f: }
	__asm { mov dword ptr [esi], 0x12f670c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6b9c[];
extern "C" char g_012f6ba0[];
extern "C" char g_012f6ba4[];
extern "C" char g_012f6ba8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007de5a0
extern "C" __declspec(naked) void asm_007de5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6ba8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007de5e2 }
	__asm { or eax, 1 }
	__asm { push 0xde8ac0 }
	__asm { mov dword ptr [g_012f6ba8], eax }
	__asm { mov dword ptr [g_012f6b9c], 0x11f1248 }
	__asm { mov dword ptr [g_012f6ba4], 0x40d810 }
	__asm { mov dword ptr [g_012f6ba0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007de5e2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6b9c }
	__asm { jne L_007de5fb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007de5fb: }
	__asm { test ecx, ecx }
	__asm { je L_007de611 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007de611: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007de61f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007de61f: }
	__asm { mov dword ptr [esi], 0x12f6b9c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6b8c[];
extern "C" char g_012f6b90[];
extern "C" char g_012f6b94[];
extern "C" char g_012f6b98[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007de630
extern "C" __declspec(naked) void asm_007de630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6b98] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007de672 }
	__asm { or eax, 1 }
	__asm { push 0xde8ad0 }
	__asm { mov dword ptr [g_012f6b98], eax }
	__asm { mov dword ptr [g_012f6b8c], 0x11f1220 }
	__asm { mov dword ptr [g_012f6b94], 0x40d810 }
	__asm { mov dword ptr [g_012f6b90], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007de672: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f6b8c }
	__asm { jne L_007de68b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007de68b: }
	__asm { test ecx, ecx }
	__asm { je L_007de6a1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007de6a1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007de6af }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007de6af: }
	__asm { mov dword ptr [esi], 0x12f6b8c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f67fc[];
extern "C" char g_012f6800[];
extern "C" char g_012f6804[];
extern "C" char g_012f6808[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007de6c0
extern "C" __declspec(naked) void asm_007de6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6808] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007de702 }
	__asm { or eax, 1 }
	__asm { push 0xde8ae0 }
	__asm { mov dword ptr [g_012f6808], eax }
	__asm { mov dword ptr [g_012f67fc], 0x11f0860 }
	__asm { mov dword ptr [g_012f6804], 0x40d810 }
	__asm { mov dword ptr [g_012f6800], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007de702: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f67fc }
	__asm { jne L_007de71b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007de71b: }
	__asm { test ecx, ecx }
	__asm { je L_007de731 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007de731: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007de73f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007de73f: }
	__asm { mov dword ptr [esi], 0x12f67fc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f680c[];
extern "C" char g_012f6810[];
extern "C" char g_012f6814[];
extern "C" char g_012f6818[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007de750
extern "C" __declspec(naked) void asm_007de750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f6818] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007de792 }
	__asm { or eax, 1 }
	__asm { push 0xde8af0 }
	__asm { mov dword ptr [g_012f6818], eax }
	__asm { mov dword ptr [g_012f680c], 0x11f088c }
	__asm { mov dword ptr [g_012f6814], 0x40d810 }
	__asm { mov dword ptr [g_012f6810], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007de792: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12f680c }
	__asm { jne L_007de7ab }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007de7ab: }
	__asm { test ecx, ecx }
	__asm { je L_007de7c1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007de7c1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007de7cf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007de7cf: }
	__asm { mov dword ptr [esi], 0x12f680c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007de9c0
extern "C" __declspec(naked) void asm_007de9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007de9e9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007de9ee }
	__asm { L_007de9e9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007de9ee: }
	__asm { cmp ecx, 0x11f1300 }
	__asm { je L_007dea37 }
	__asm { test eax, eax }
	__asm { je L_007de9fe }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dea03 }
	__asm { L_007de9fe: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dea03: }
	__asm { push 0x11f1300 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007dea37 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007dea37: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007dea50
extern "C" __declspec(naked) void asm_007dea50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007dea79 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dea7e }
	__asm { L_007dea79: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dea7e: }
	__asm { cmp ecx, 0x11f072c }
	__asm { je L_007deac7 }
	__asm { test eax, eax }
	__asm { je L_007dea8e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dea93 }
	__asm { L_007dea8e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dea93: }
	__asm { push 0x11f072c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007deac7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007deac7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007deae0
extern "C" __declspec(naked) void asm_007deae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007deb09 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007deb0e }
	__asm { L_007deb09: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007deb0e: }
	__asm { cmp ecx, 0x11f077c }
	__asm { je L_007deb57 }
	__asm { test eax, eax }
	__asm { je L_007deb1e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007deb23 }
	__asm { L_007deb1e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007deb23: }
	__asm { push 0x11f077c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007deb57 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007deb57: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007deb70
extern "C" __declspec(naked) void asm_007deb70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007deb99 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007deb9e }
	__asm { L_007deb99: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007deb9e: }
	__asm { cmp ecx, 0x11f0fa8 }
	__asm { je L_007debe7 }
	__asm { test eax, eax }
	__asm { je L_007debae }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007debb3 }
	__asm { L_007debae: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007debb3: }
	__asm { push 0x11f0fa8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007debe7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007debe7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007dec00
extern "C" __declspec(naked) void asm_007dec00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007dec29 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dec2e }
	__asm { L_007dec29: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dec2e: }
	__asm { cmp ecx, 0x11f0754 }
	__asm { je L_007dec77 }
	__asm { test eax, eax }
	__asm { je L_007dec3e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dec43 }
	__asm { L_007dec3e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dec43: }
	__asm { push 0x11f0754 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007dec77 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007dec77: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007dec90
extern "C" __declspec(naked) void asm_007dec90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007decb9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007decbe }
	__asm { L_007decb9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007decbe: }
	__asm { cmp ecx, 0x11f10a4 }
	__asm { je L_007ded07 }
	__asm { test eax, eax }
	__asm { je L_007decce }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007decd3 }
	__asm { L_007decce: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007decd3: }
	__asm { push 0x11f10a4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007ded07 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007ded07: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007ded20
extern "C" __declspec(naked) void asm_007ded20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007ded49 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007ded4e }
	__asm { L_007ded49: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007ded4e: }
	__asm { cmp ecx, 0x11f11d0 }
	__asm { je L_007ded97 }
	__asm { test eax, eax }
	__asm { je L_007ded5e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007ded63 }
	__asm { L_007ded5e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007ded63: }
	__asm { push 0x11f11d0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007ded97 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007ded97: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007dedb0
extern "C" __declspec(naked) void asm_007dedb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007dedd9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dedde }
	__asm { L_007dedd9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dedde: }
	__asm { cmp ecx, 0x11f11a8 }
	__asm { je L_007dee27 }
	__asm { test eax, eax }
	__asm { je L_007dedee }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dedf3 }
	__asm { L_007dedee: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dedf3: }
	__asm { push 0x11f11a8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007dee27 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007dee27: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007dee40
extern "C" __declspec(naked) void asm_007dee40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007dee69 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dee6e }
	__asm { L_007dee69: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dee6e: }
	__asm { cmp ecx, 0x11f0934 }
	__asm { je L_007deeb7 }
	__asm { test eax, eax }
	__asm { je L_007dee7e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dee83 }
	__asm { L_007dee7e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dee83: }
	__asm { push 0x11f0934 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007deeb7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007deeb7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007deed0
extern "C" __declspec(naked) void asm_007deed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007deef9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007deefe }
	__asm { L_007deef9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007deefe: }
	__asm { cmp ecx, 0x11f1034 }
	__asm { je L_007def47 }
	__asm { test eax, eax }
	__asm { je L_007def0e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007def13 }
	__asm { L_007def0e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007def13: }
	__asm { push 0x11f1034 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007def47 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007def47: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007def60
extern "C" __declspec(naked) void asm_007def60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007def89 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007def8e }
	__asm { L_007def89: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007def8e: }
	__asm { cmp ecx, 0x11f135c }
	__asm { je L_007defd7 }
	__asm { test eax, eax }
	__asm { je L_007def9e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007defa3 }
	__asm { L_007def9e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007defa3: }
	__asm { push 0x11f135c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007defd7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007defd7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007deff0
extern "C" __declspec(naked) void asm_007deff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007df019 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df01e }
	__asm { L_007df019: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df01e: }
	__asm { cmp ecx, 0x11f0b74 }
	__asm { je L_007df067 }
	__asm { test eax, eax }
	__asm { je L_007df02e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df033 }
	__asm { L_007df02e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df033: }
	__asm { push 0x11f0b74 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007df067 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007df067: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007df080
extern "C" __declspec(naked) void asm_007df080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007df0a9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df0ae }
	__asm { L_007df0a9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df0ae: }
	__asm { cmp ecx, 0x11f0f44 }
	__asm { je L_007df0f7 }
	__asm { test eax, eax }
	__asm { je L_007df0be }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df0c3 }
	__asm { L_007df0be: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df0c3: }
	__asm { push 0x11f0f44 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007df0f7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007df0f7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
