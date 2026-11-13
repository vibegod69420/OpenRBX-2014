// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a6ded0
extern "C" __declspec(naked) void asm_00a6ded0()
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
	__asm { je L_00a6df0b }
	__asm { mov dword ptr [edx], 0xead8d8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a6df0d }
	__asm { L_00a6df0b: }
	__asm { xor edx, edx }
	__asm { L_00a6df0d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a6df30
extern "C" __declspec(naked) void asm_00a6df30()
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
	__asm { je L_00a6df6b }
	__asm { mov dword ptr [edx], 0xead8ec }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a6df6d }
	__asm { L_00a6df6b: }
	__asm { xor edx, edx }
	__asm { L_00a6df6d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a6df90
extern "C" __declspec(naked) void asm_00a6df90()
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
	__asm { je L_00a6dfcb }
	__asm { mov dword ptr [edx], 0xead900 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a6dfcd }
	__asm { L_00a6dfcb: }
	__asm { xor edx, edx }
	__asm { L_00a6dfcd: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a6dff0
extern "C" __declspec(naked) void asm_00a6dff0()
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
	__asm { je L_00a6e02b }
	__asm { mov dword ptr [edx], 0xead914 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a6e02d }
	__asm { L_00a6e02b: }
	__asm { xor edx, edx }
	__asm { L_00a6e02d: }
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

extern "C" void fn_004199f0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00a6ec50
extern "C" __declspec(naked) void asm_00a6ec50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00a6ec85 }
	__asm { add edi, 0x1c }
	__asm { je L_00a6ec85 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00a6ec85 }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a6ec85: }
	__asm { xor edi, edi }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a6f850
extern "C" __declspec(naked) void asm_00a6f850()
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
	__asm { je L_00a6f88b }
	__asm { mov dword ptr [edx], 0xeadad0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a6f88d }
	__asm { L_00a6f88b: }
	__asm { xor edx, edx }
	__asm { L_00a6f88d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a703b0
extern "C" __declspec(naked) void asm_00a703b0()
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
	__asm { je L_00a703eb }
	__asm { mov dword ptr [edx], 0xeadf60 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a703ed }
	__asm { L_00a703eb: }
	__asm { xor edx, edx }
	__asm { L_00a703ed: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a70410
extern "C" __declspec(naked) void asm_00a70410()
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
	__asm { je L_00a7044b }
	__asm { mov dword ptr [edx], 0xeadf74 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a7044d }
	__asm { L_00a7044b: }
	__asm { xor edx, edx }
	__asm { L_00a7044d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a70470
extern "C" __declspec(naked) void asm_00a70470()
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
	__asm { je L_00a704ab }
	__asm { mov dword ptr [edx], 0xeadf4c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a704ad }
	__asm { L_00a704ab: }
	__asm { xor edx, edx }
	__asm { L_00a704ad: }
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

extern "C" void fn_0082a3d0();
extern "C" void fn_00a7e3f0();
// FUNCTION: ROBLOXSTUDIO 0x00a7e5d0
extern "C" __declspec(naked) void asm_00a7e5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_0082a3d0 }
	__asm { mov edi, eax }
	__asm { lea ebx, [edi + 0x10] }
	__asm { mov word ptr [edi + 0xc], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00a7e61b }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00a7e3f0 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ebx + 0x30], eax }
	__asm { mov dword ptr [ebx + 0x34], 0 }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [ebx + 0x34], eax }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov eax, edi }
	__asm { pop esi }
	__asm { L_00a7e61b: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a7f170
extern "C" __declspec(naked) void asm_00a7f170()
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
	__asm { je L_00a7f1ab }
	__asm { mov dword ptr [edx], 0xeaffb4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a7f1ad }
	__asm { L_00a7f1ab: }
	__asm { xor edx, edx }
	__asm { L_00a7f1ad: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a82970
extern "C" __declspec(naked) void asm_00a82970()
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
	__asm { je L_00a829ab }
	__asm { mov dword ptr [edx], 0xeb02dc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a829ad }
	__asm { L_00a829ab: }
	__asm { xor edx, edx }
	__asm { L_00a829ad: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a829d0
extern "C" __declspec(naked) void asm_00a829d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a829fd }
	__asm { mov dword ptr [eax], 0xeb02b4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a829ff }
	__asm { L_00a829fd: }
	__asm { xor eax, eax }
	__asm { L_00a829ff: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a82a20
extern "C" __declspec(naked) void asm_00a82a20()
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
	__asm { je L_00a82a5b }
	__asm { mov dword ptr [edx], 0xeb02c8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a82a5d }
	__asm { L_00a82a5b: }
	__asm { xor edx, edx }
	__asm { L_00a82a5d: }
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

// FUNCTION: ROBLOXSTUDIO 0x00a83930
extern "C" __declspec(naked) void asm_00a83930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_00a83944 }
	__asm { add eax, -0x1c }
	__asm { jmp L_00a83946 }
	__asm { L_00a83944: }
	__asm { xor eax, eax }
	__asm { L_00a83946: }
	__asm { lea ecx, [ebp - 6] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov cx, word ptr [eax + 4] }
	__asm { mov word ptr [edx + 4], cx }
	__asm { mov eax, edx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a84fb0
extern "C" __declspec(naked) void asm_00a84fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a84fdd }
	__asm { mov dword ptr [eax], 0xeb1480 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a84fdf }
	__asm { L_00a84fdd: }
	__asm { xor eax, eax }
	__asm { L_00a84fdf: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a85000
extern "C" __declspec(naked) void asm_00a85000()
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
	__asm { je L_00a8503b }
	__asm { mov dword ptr [edx], 0xeb146c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a8503d }
	__asm { L_00a8503b: }
	__asm { xor edx, edx }
	__asm { L_00a8503d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a86910
extern "C" __declspec(naked) void asm_00a86910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xeb03e8 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { test eax, eax }
	__asm { je L_00a86943 }
	__asm { test al, 1 }
	__asm { jne L_00a8693c }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a8693c }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a8693c: }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00a86943: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a86952 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a86952: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a89020
extern "C" __declspec(naked) void asm_00a89020()
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
	__asm { L_00a89030: }
	__asm { test eax, eax }
	__asm { je L_00a8903c }
	__asm { lea ecx, [eax - 0x401c] }
	__asm { jmp L_00a8903e }
	__asm { L_00a8903c: }
	__asm { xor ecx, ecx }
	__asm { L_00a8903e: }
	__asm { mov eax, dword ptr [ecx + 0x401c] }
	__asm { push ecx }
	__asm { mov dword ptr [edi], eax }
	__asm { call fn_00cf6522 }
	__asm { dec dword ptr [ebx + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 4 }
	__asm { inc esi }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_00a89030 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004083f0();
extern "C" void fn_007cb490();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00a8a7b0
extern "C" __declspec(naked) void asm_00a8a7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { test al, al }
	__asm { je L_00a8a7e5 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a8a7e5: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a89d60();
// FUNCTION: ROBLOXSTUDIO 0x00a8b1a0
extern "C" __declspec(naked) void asm_00a8b1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov al, byte ptr [edx + 7] }
	__asm { xor al, byte ptr [edx + 6] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 0x38 }
	__asm { je L_00a8b1f5 }
	__asm { movzx eax, word ptr [edx] }
	__asm { mov cx, word ptr [edx + 4] }
	__asm { sar ax, 5 }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [edx + 2] }
	__asm { sar ax, 4 }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { sar cx, 5 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { mov word ptr [ebp - 4], cx }
	__asm { push eax }
	__asm { lea ecx, [esi - 0x68] }
	__asm { call fn_00a89d60 }
	__asm { test eax, eax }
	__asm { je L_00a8b1f5 }
	__asm { mov dword ptr [eax], 1 }
	__asm { L_00a8b1f5: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x00a8b200
extern "C" __declspec(naked) void asm_00a8b200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov edx, dword ptr [edi + 0x7c] }
	__asm { mov eax, dword ptr [edi + 0x78] }
	__asm { cmp eax, edx }
	__asm { je L_00a8b23f }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_00a8b214: }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_00a8b21f }
	__asm { add eax, 4 }
	__asm { cmp eax, edx }
	__asm { jne L_00a8b214 }
	__asm { L_00a8b21f: }
	__asm { pop esi }
	__asm { cmp eax, edx }
	__asm { je L_00a8b23f }
	__asm { mov ecx, dword ptr [edi + 0x7c] }
	__asm { lea edx, [eax + 4] }
	__asm { sub ecx, edx }
	__asm { and ecx, 0xfffffffc }
	__asm { push ecx }
	__asm { push edx }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { add dword ptr [edi + 0x7c], -4 }
	__asm { L_00a8b23f: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a8c660
extern "C" __declspec(naked) void asm_00a8c660()
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
	__asm { je L_00a8c69b }
	__asm { mov dword ptr [edx], 0xeb256c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a8c69d }
	__asm { L_00a8c69b: }
	__asm { xor edx, edx }
	__asm { L_00a8c69d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a8c6c0
extern "C" __declspec(naked) void asm_00a8c6c0()
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
	__asm { je L_00a8c6fb }
	__asm { mov dword ptr [edx], 0xeb2558 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a8c6fd }
	__asm { L_00a8c6fb: }
	__asm { xor edx, edx }
	__asm { L_00a8c6fd: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a8c720
extern "C" __declspec(naked) void asm_00a8c720()
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
	__asm { je L_00a8c75b }
	__asm { mov dword ptr [edx], 0xeb2530 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a8c75d }
	__asm { L_00a8c75b: }
	__asm { xor edx, edx }
	__asm { L_00a8c75d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a8c780
extern "C" __declspec(naked) void asm_00a8c780()
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
	__asm { je L_00a8c7bb }
	__asm { mov dword ptr [edx], 0xeb2544 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a8c7bd }
	__asm { L_00a8c7bb: }
	__asm { xor edx, edx }
	__asm { L_00a8c7bd: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a8c7e0
extern "C" __declspec(naked) void asm_00a8c7e0()
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
	__asm { je L_00a8c81b }
	__asm { mov dword ptr [edx], 0xeb251c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a8c81d }
	__asm { L_00a8c81b: }
	__asm { xor edx, edx }
	__asm { L_00a8c81d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a8c840
extern "C" __declspec(naked) void asm_00a8c840()
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
	__asm { je L_00a8c87b }
	__asm { mov dword ptr [edx], 0xeb2508 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a8c87d }
	__asm { L_00a8c87b: }
	__asm { xor edx, edx }
	__asm { L_00a8c87d: }
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

extern "C" char g_00e339a8[];
extern "C" char g_01038094[];
extern "C" void fn_006c7420();
extern "C" void fn_006da0e0();
extern "C" void fn_00a8d9f0();
// FUNCTION: ROBLOXSTUDIO 0x00a8de80
extern "C" __declspec(naked) void asm_00a8de80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_006da0e0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea ecx, [esi - 0x64] }
	__asm { call fn_00a8d9f0 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00a8ded0 }
	__asm { fld dword ptr [g_00e339a8] }
	__asm { push 1 }
	__asm { push 0x11dd38c }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [g_01038094] }
	__asm { fstp dword ptr [esp] }
	__asm { push 2 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c7420 }
	__asm { add esp, 0x1c }
	__asm { L_00a8ded0: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a8eb30
extern "C" __declspec(naked) void asm_00a8eb30()
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
	__asm { je L_00a8eb6b }
	__asm { mov dword ptr [edx], 0xeb2880 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a8eb6d }
	__asm { L_00a8eb6b: }
	__asm { xor edx, edx }
	__asm { L_00a8eb6d: }
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

extern "C" char g_00e10260[];
extern "C" void fn_00cdcc90();
// FUNCTION: ROBLOXSTUDIO 0x00a90400
extern "C" __declspec(naked) void asm_00a90400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0x74] }
	__asm { lea esi, [ecx + 0x74] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { mov ecx, esi }
	__asm { push edi }
	__asm { call fn_00cdcc90 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, 0x15555554 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00a90436 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00a90436: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [edi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a90a50
extern "C" __declspec(naked) void asm_00a90a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a90a62 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a90a64 }
	__asm { L_00a90a62: }
	__asm { xor edx, edx }
	__asm { L_00a90a64: }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a940f0
extern "C" __declspec(naked) void asm_00a940f0()
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
	__asm { je L_00a9412b }
	__asm { mov dword ptr [edx], 0xeb5678 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a9412d }
	__asm { L_00a9412b: }
	__asm { xor edx, edx }
	__asm { L_00a9412d: }
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

extern "C" void fn_007d0510();
extern "C" void fn_007d5be0();
// FUNCTION: ROBLOXSTUDIO 0x00a98090
extern "C" __declspec(naked) void asm_00a98090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { je L_00a980a4 }
	__asm { lea esi, [eax - 0x1c] }
	__asm { jmp L_00a980a6 }
	__asm { L_00a980a4: }
	__asm { xor esi, esi }
	__asm { L_00a980a6: }
	__asm { mov edx, dword ptr [ecx + 0x28] }
	__asm { mov eax, dword ptr [ecx + 0x2c] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { push ecx }
	__asm { lea ecx, [esi + eax] }
	__asm { call edx }
	__asm { mov esi, eax }
	__asm { call fn_007d5be0 }
	__asm { push esi }
	__asm { lea ecx, [edi + 8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { call fn_007d0510 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006d19a0();
extern "C" void fn_009f62a0();
extern "C" void fn_00bef550();
// FUNCTION: ROBLOXSTUDIO 0x00a981b0
extern "C" __declspec(naked) void asm_00a981b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x2c] }
	__asm { test esi, esi }
	__asm { je L_00a981ca }
	__asm { mov ecx, esi }
	__asm { call fn_00bef550 }
	__asm { add esi, 0x18 }
	__asm { jmp L_00a981cd }
	__asm { L_00a981ca: }
	__asm { lea esi, [ecx + 0x6c] }
	__asm { L_00a981cd: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_006d19a0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_009f62a0 }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x00a98620
extern "C" __declspec(naked) void asm_00a98620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00a9862f }
	__asm { add eax, -0x1c }
	__asm { jmp L_00a98631 }
	__asm { L_00a9862f: }
	__asm { xor eax, eax }
	__asm { L_00a98631: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 8] }
	__asm { add edi, eax }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a9a400
extern "C" __declspec(naked) void asm_00a9a400()
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
	__asm { je L_00a9a43b }
	__asm { mov dword ptr [edx], 0xeb5b64 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a9a43d }
	__asm { L_00a9a43b: }
	__asm { xor edx, edx }
	__asm { L_00a9a43d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a9a460
extern "C" __declspec(naked) void asm_00a9a460()
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
	__asm { je L_00a9a49b }
	__asm { mov dword ptr [edx], 0xeb5b50 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a9a49d }
	__asm { L_00a9a49b: }
	__asm { xor edx, edx }
	__asm { L_00a9a49d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a9e850
extern "C" __declspec(naked) void asm_00a9e850()
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
	__asm { je L_00a9e88b }
	__asm { mov dword ptr [edx], 0xeb6108 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a9e88d }
	__asm { L_00a9e88b: }
	__asm { xor edx, edx }
	__asm { L_00a9e88d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00aa1e70
extern "C" __declspec(naked) void asm_00aa1e70()
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
	__asm { je L_00aa1eab }
	__asm { mov dword ptr [edx], 0xeb6464 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00aa1ead }
	__asm { L_00aa1eab: }
	__asm { xor edx, edx }
	__asm { L_00aa1ead: }
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
// FUNCTION: ROBLOXSTUDIO 0x00aa4780
extern "C" __declspec(naked) void asm_00aa4780()
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
	__asm { je L_00aa47b5 }
	__asm { mov dword ptr [edx], 0xeb817c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { jmp L_00aa47b7 }
	__asm { L_00aa47b5: }
	__asm { xor edx, edx }
	__asm { L_00aa47b7: }
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
// FUNCTION: ROBLOXSTUDIO 0x00aa47d0
extern "C" __declspec(naked) void asm_00aa47d0()
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
	__asm { je L_00aa4805 }
	__asm { mov dword ptr [edx], 0xeb8168 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { jmp L_00aa4807 }
	__asm { L_00aa4805: }
	__asm { xor edx, edx }
	__asm { L_00aa4807: }
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

extern "C" void fn_00915e60();
// FUNCTION: ROBLOXSTUDIO 0x00aa52a0
extern "C" __declspec(naked) void asm_00aa52a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00aa52bd }
	__asm { mov dword ptr [esi + 0x68], 0xeb718c }
	__asm { mov dword ptr [esi + 0xb4], 0xeb7194 }
	__asm { L_00aa52bd: }
	__asm { push 0 }
	__asm { call fn_00915e60 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xeb6dd4 }
	__asm { mov dword ptr [esi + 4], 0xeb6ef4 }
	__asm { mov dword ptr [esi + 0x18], 0xeb6efc }
	__asm { mov dword ptr [esi + 0x1c], 0xeb6f08 }
	__asm { mov dword ptr [esi + 0x64], 0xeb6f18 }
	__asm { mov dword ptr [esi + 0x70], 0xeb6f20 }
	__asm { mov dword ptr [esi + 0x98], 0xeb6f40 }
	__asm { mov dword ptr [esi + 0xb0], 0xeb6f74 }
	__asm { mov dword ptr [esi + 0xc4], 0xeb6fa0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xeb6fa8 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x64], 0 }
	__asm { mov dword ptr [esi + 0x130], 0 }
	__asm { mov dword ptr [esi + 0x134], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00aa9a20();
// FUNCTION: ROBLOXSTUDIO 0x00aa6270
extern "C" __declspec(naked) void asm_00aa6270()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00aa62bf }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { test eax, eax }
	__asm { jns L_00aa62a1 }
	__asm { push esi }
	__asm { jne L_00aa6295 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { jmp L_00aa629c }
	__asm { L_00aa6295: }
	__asm { mov dword ptr [edi + 8], 0xa }
	__asm { L_00aa629c: }
	__asm { call fn_00aa9a20 }
	__asm { L_00aa62a1: }
	__asm { cmp esi, dword ptr [edi + 4] }
	__asm { jge L_00aa62bf }
	__asm { L_00aa62a6: }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea eax, [eax + esi*8] }
	__asm { test eax, eax }
	__asm { je L_00aa62b9 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { L_00aa62b9: }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 4] }
	__asm { jl L_00aa62a6 }
	__asm { L_00aa62bf: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_007ad9f0();
// FUNCTION: ROBLOXSTUDIO 0x00aa6700
extern "C" __declspec(naked) void asm_00aa6700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00aa673b }
	__asm { mov edx, dword ptr [eax + 0x4c] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edx + ecx] }
	__asm { add ecx, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, 0x4c }
	__asm { add ecx, eax }
	__asm { call fn_007ad9f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00aa673b: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00915ca0();
// FUNCTION: ROBLOXSTUDIO 0x00aa6750
extern "C" __declspec(naked) void asm_00aa6750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00aa678b }
	__asm { mov edx, dword ptr [eax + 0x4c] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edx + ecx] }
	__asm { add ecx, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, 0x4c }
	__asm { add ecx, eax }
	__asm { call fn_00915ca0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00aa678b: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0079a4d0();
// FUNCTION: ROBLOXSTUDIO 0x00aa67a0
extern "C" __declspec(naked) void asm_00aa67a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00aa67db }
	__asm { mov edx, dword ptr [eax + 0x4c] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edx + ecx] }
	__asm { add ecx, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, 0x4c }
	__asm { add ecx, eax }
	__asm { call fn_0079a4d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00aa67db: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00aa4570();
// FUNCTION: ROBLOXSTUDIO 0x00aa67f0
extern "C" __declspec(naked) void asm_00aa67f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00aa682b }
	__asm { mov edx, dword ptr [eax + 0x4c] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edx + ecx] }
	__asm { add ecx, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, 0x4c }
	__asm { add ecx, eax }
	__asm { call fn_00aa4570 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00aa682b: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00aaa620
extern "C" __declspec(naked) void asm_00aaa620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00aaa64d }
	__asm { mov dword ptr [eax], 0xeb84c8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00aaa64f }
	__asm { L_00aaa64d: }
	__asm { xor eax, eax }
	__asm { L_00aaa64f: }
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

extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00aac470
extern "C" __declspec(naked) void asm_00aac470()
{
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi], 0xeb8b24 }
	__asm { mov dword ptr [edi + 4], 0xeb8b9c }
	__asm { mov dword ptr [edi + 0x18], 0xeb8ba4 }
	__asm { mov dword ptr [edi + 0x1c], 0xeb8bb0 }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { cmp ecx, dword ptr [edi + 0x68] }
	__asm { je L_00aac4bb }
	__asm { push esi }
	__asm { L_00aac4a8: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { cmp esi, dword ptr [edi + 0x68] }
	__asm { jne L_00aac4a8 }
	__asm { pop esi }
	__asm { L_00aac4bb: }
	__asm { push dword ptr [edi + 0x68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { jmp fn_007b00e0 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00aad490
extern "C" __declspec(naked) void asm_00aad490()
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
	__asm { je L_00aad4cb }
	__asm { mov dword ptr [edx], 0xeb9208 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00aad4cd }
	__asm { L_00aad4cb: }
	__asm { xor edx, edx }
	__asm { L_00aad4cd: }
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

extern "C" void fn_007cd560();
extern "C" void fn_00813b10();
// FUNCTION: ROBLOXSTUDIO 0x00aadf00
extern "C" __declspec(naked) void asm_00aadf00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00aadf35 }
	__asm { add edi, 0x1c }
	__asm { je L_00aadf35 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00813b10 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00aadf35 }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00aadf35: }
	__asm { xor edi, edi }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ab8170
extern "C" __declspec(naked) void asm_00ab8170()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { je L_00ab81b8 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00ab819e }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ab819e: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ab81b8: }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_004b21c0();
// FUNCTION: ROBLOXSTUDIO 0x00abfbb0
extern "C" __declspec(naked) void asm_00abfbb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { push esi }
	__asm { movzx eax, byte ptr [edx] }
	__asm { inc eax }
	__asm { add eax, edx }
	__asm { je L_00abfbc3 }
	__asm { lea esi, [eax + 1] }
	__asm { jmp L_00abfbc5 }
	__asm { L_00abfbc3: }
	__asm { xor esi, esi }
	__asm { L_00abfbc5: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov eax, ecx }
	__asm { shr eax, 3 }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edx }
	__asm { call fn_004b21c0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ac77f0
extern "C" __declspec(naked) void asm_00ac77f0()
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
	__asm { je L_00ac782b }
	__asm { mov dword ptr [edx], 0xebb6c8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00ac782d }
	__asm { L_00ac782b: }
	__asm { xor edx, edx }
	__asm { L_00ac782d: }
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

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00ac89b0
extern "C" __declspec(naked) void asm_00ac89b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp eax, 0x12fc548 }
	__asm { jne L_00ac89e2 }
	__asm { mov edx, dword ptr [esi] }
	__asm { push 0 }
	__asm { lea eax, [esi + 0xe4] }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x90] }
	__asm { push 0x130bce0 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ac89e2: }
	__asm { cmp eax, 0x12fc574 }
	__asm { jne L_00ac8a06 }
	__asm { mov edx, dword ptr [esi] }
	__asm { push 0 }
	__asm { lea eax, [esi + 0xe4] }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x90] }
	__asm { push 0x130bd0c }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00ac8a06: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ac93e0
extern "C" __declspec(naked) void asm_00ac93e0()
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
	__asm { je L_00ac941b }
	__asm { mov dword ptr [edx], 0xebbcb0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00ac941d }
	__asm { L_00ac941b: }
	__asm { xor edx, edx }
	__asm { L_00ac941d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00ac9440
extern "C" __declspec(naked) void asm_00ac9440()
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
	__asm { je L_00ac947b }
	__asm { mov dword ptr [edx], 0xebbcc4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00ac947d }
	__asm { L_00ac947b: }
	__asm { xor edx, edx }
	__asm { L_00ac947d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00ac94a0
extern "C" __declspec(naked) void asm_00ac94a0()
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
	__asm { je L_00ac94db }
	__asm { mov dword ptr [edx], 0xebbcd8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00ac94dd }
	__asm { L_00ac94db: }
	__asm { xor edx, edx }
	__asm { L_00ac94dd: }
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
// FUNCTION: ROBLOXSTUDIO 0x00aca780
extern "C" __declspec(naked) void asm_00aca780()
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
	__asm { je L_00aca7bb }
	__asm { mov dword ptr [edx], 0xebc010 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00aca7bd }
	__asm { L_00aca7bb: }
	__asm { xor edx, edx }
	__asm { L_00aca7bd: }
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
// FUNCTION: ROBLOXSTUDIO 0x00aca7e0
extern "C" __declspec(naked) void asm_00aca7e0()
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
	__asm { je L_00aca81b }
	__asm { mov dword ptr [edx], 0xebc024 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00aca81d }
	__asm { L_00aca81b: }
	__asm { xor edx, edx }
	__asm { L_00aca81d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00aca840
extern "C" __declspec(naked) void asm_00aca840()
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
	__asm { je L_00aca87b }
	__asm { mov dword ptr [edx], 0xebc038 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00aca87d }
	__asm { L_00aca87b: }
	__asm { xor edx, edx }
	__asm { L_00aca87d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00aca8a0
extern "C" __declspec(naked) void asm_00aca8a0()
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
	__asm { je L_00aca8db }
	__asm { mov dword ptr [edx], 0xebbffc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00aca8dd }
	__asm { L_00aca8db: }
	__asm { xor edx, edx }
	__asm { L_00aca8dd: }
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
// FUNCTION: ROBLOXSTUDIO 0x00acbb70
extern "C" __declspec(naked) void asm_00acbb70()
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
	__asm { je L_00acbbab }
	__asm { mov dword ptr [edx], 0xebc360 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00acbbad }
	__asm { L_00acbbab: }
	__asm { xor edx, edx }
	__asm { L_00acbbad: }
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
// FUNCTION: ROBLOXSTUDIO 0x00acbbd0
extern "C" __declspec(naked) void asm_00acbbd0()
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
	__asm { je L_00acbc0b }
	__asm { mov dword ptr [edx], 0xebc374 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00acbc0d }
	__asm { L_00acbc0b: }
	__asm { xor edx, edx }
	__asm { L_00acbc0d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00acbc30
extern "C" __declspec(naked) void asm_00acbc30()
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
	__asm { je L_00acbc6b }
	__asm { mov dword ptr [edx], 0xebc388 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00acbc6d }
	__asm { L_00acbc6b: }
	__asm { xor edx, edx }
	__asm { L_00acbc6d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00acbc90
extern "C" __declspec(naked) void asm_00acbc90()
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
	__asm { je L_00acbccb }
	__asm { mov dword ptr [edx], 0xebc34c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00acbccd }
	__asm { L_00acbccb: }
	__asm { xor edx, edx }
	__asm { L_00acbccd: }
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

// FUNCTION: ROBLOXSTUDIO 0x00ace3a0
extern "C" __declspec(naked) void asm_00ace3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, edi }
	__asm { je L_00ace3e3 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_00ace3b2: }
	__asm { test esi, esi }
	__asm { je L_00ace3d3 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { L_00ace3d3: }
	__asm { add ecx, 0xc }
	__asm { add esi, 0xc }
	__asm { cmp ecx, edi }
	__asm { jne L_00ace3b2 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ace3e3: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cd560();
extern "C" void fn_0080f090();
// FUNCTION: ROBLOXSTUDIO 0x00ad1a30
extern "C" __declspec(naked) void asm_00ad1a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00ad1a65 }
	__asm { add edi, 0x1c }
	__asm { je L_00ad1a65 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0080f090 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00ad1a65 }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ad1a65: }
	__asm { xor edi, edi }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00ad1670();
// FUNCTION: ROBLOXSTUDIO 0x00ad59b0
extern "C" __declspec(naked) void asm_00ad59b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x2e8ba2e9 }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, ecx }
	__asm { jae L_00ad59ee }
	__asm { cmp ecx, 0x5d1745d }
	__asm { jbe L_00ad59e6 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00ad59e6: }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00ad1670 }
	__asm { L_00ad59ee: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130c4b8[];
extern "C" void fn_00adf3e0();
extern "C" void fn_00ae2cd0();
// FUNCTION: ROBLOXSTUDIO 0x00ae0c70
extern "C" __declspec(naked) void asm_00ae0c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [g_0130c4b8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ecx + esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00adf3e0 }
	__asm { test esi, esi }
	__asm { je L_00ae0c99 }
	__asm { lea eax, [esi + 0x1c] }
	__asm { jmp L_00ae0c9b }
	__asm { L_00ae0c99: }
	__asm { xor eax, eax }
	__asm { L_00ae0c9b: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, 0x130c490 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00ae2cd0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ae3960
extern "C" __declspec(naked) void asm_00ae3960()
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
	__asm { je L_00ae399b }
	__asm { mov dword ptr [edx], 0xebebf0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00ae399d }
	__asm { L_00ae399b: }
	__asm { xor edx, edx }
	__asm { L_00ae399d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00ae39c0
extern "C" __declspec(naked) void asm_00ae39c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00ae39ed }
	__asm { mov dword ptr [eax], 0xebec18 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00ae39ef }
	__asm { L_00ae39ed: }
	__asm { xor eax, eax }
	__asm { L_00ae39ef: }
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
// FUNCTION: ROBLOXSTUDIO 0x00ae3a10
extern "C" __declspec(naked) void asm_00ae3a10()
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
	__asm { je L_00ae3a4b }
	__asm { mov dword ptr [edx], 0xebec04 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00ae3a4d }
	__asm { L_00ae3a4b: }
	__asm { xor edx, edx }
	__asm { L_00ae3a4d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00ae3a70
extern "C" __declspec(naked) void asm_00ae3a70()
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
	__asm { je L_00ae3aab }
	__asm { mov dword ptr [edx], 0xebec2c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00ae3aad }
	__asm { L_00ae3aab: }
	__asm { xor edx, edx }
	__asm { L_00ae3aad: }
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
// FUNCTION: ROBLOXSTUDIO 0x00ae3ad0
extern "C" __declspec(naked) void asm_00ae3ad0()
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
	__asm { je L_00ae3b0b }
	__asm { mov dword ptr [edx], 0xebebdc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00ae3b0d }
	__asm { L_00ae3b0b: }
	__asm { xor edx, edx }
	__asm { L_00ae3b0d: }
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

// FUNCTION: ROBLOXSTUDIO 0x00ae4de0
extern "C" __declspec(naked) void asm_00ae4de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x10 }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_00ae4df4 }
	__asm { add eax, -0x1c }
	__asm { jmp L_00ae4df6 }
	__asm { L_00ae4df4: }
	__asm { xor eax, eax }
	__asm { L_00ae4df6: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, edx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00875570();
extern "C" void fn_00ae6c40();
// FUNCTION: ROBLOXSTUDIO 0x00ae5450
extern "C" __declspec(naked) void asm_00ae5450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00875570 }
	__asm { cmp esi, 0x12fc548 }
	__asm { je L_00ae5488 }
	__asm { cmp esi, 0x12fc574 }
	__asm { je L_00ae5488 }
	__asm { cmp esi, 0x130c528 }
	__asm { je L_00ae5488 }
	__asm { cmp esi, 0x130c554 }
	__asm { je L_00ae5488 }
	__asm { cmp esi, 0x130c5ac }
	__asm { jne L_00ae5496 }
	__asm { L_00ae5488: }
	__asm { mov ecx, edi }
	__asm { call fn_00ae6c40 }
	__asm { mov byte ptr [edi + 0x3e5], 1 }
	__asm { L_00ae5496: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00aefe90();
extern "C" void fn_00af0610();
// FUNCTION: ROBLOXSTUDIO 0x00af09b0
extern "C" __declspec(naked) void asm_00af09b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 0x18] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00af0610 }
	__asm { add esp, 0x14 }
	__asm { test al, al }
	__asm { je L_00af09d6 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00af09d6: }
	__asm { fld dword ptr [ebp + 0x18] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00aefe90 }
	__asm { add esp, 0x14 }
	__asm { test al, al }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00af2e80
extern "C" __declspec(naked) void asm_00af2e80()
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
	__asm { je L_00af2ebb }
	__asm { mov dword ptr [edx], 0xec0948 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00af2ebd }
	__asm { L_00af2ebb: }
	__asm { xor edx, edx }
	__asm { L_00af2ebd: }
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

// FUNCTION: ROBLOXSTUDIO 0x00af40b0
extern "C" __declspec(naked) void asm_00af40b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, 0x80 }
	__asm { jg L_00af40d7 }
	__asm { je L_00af40ce }
	__asm { test eax, eax }
	__asm { je L_00af40c8 }
	__asm { cmp eax, 0xa }
	__asm { jne L_00af40f4 }
	__asm { L_00af40c8: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00af40ce: }
	__asm { mov eax, 0xa }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00af40d7: }
	__asm { mov ecx, eax }
	__asm { sub ecx, 0xf0 }
	__asm { je L_00af40ef }
	__asm { sub ecx, 0xf }
	__asm { jne L_00af40f4 }
	__asm { mov eax, 0xf0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00af40ef: }
	__asm { mov eax, 0x80 }
	__asm { L_00af40f4: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00af4100
extern "C" __declspec(naked) void asm_00af4100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, 0x80 }
	__asm { jg L_00af4133 }
	__asm { je L_00af412a }
	__asm { test eax, eax }
	__asm { je L_00af4121 }
	__asm { cmp eax, 0xa }
	__asm { jne L_00af4147 }
	__asm { mov eax, 0x80 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00af4121: }
	__asm { mov eax, 0xa }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00af412a: }
	__asm { mov eax, 0xf0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00af4133: }
	__asm { mov ecx, eax }
	__asm { sub ecx, 0xf0 }
	__asm { je L_00af4142 }
	__asm { sub ecx, 0xf }
	__asm { jne L_00af4147 }
	__asm { L_00af4142: }
	__asm { mov eax, 0xff }
	__asm { L_00af4147: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4798[];
extern "C" char g_012e479c[];
extern "C" char g_012e47a0[];
extern "C" char g_012e47a4[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00af55a0
extern "C" __declspec(naked) void asm_00af55a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00af55c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { L_00af55c0: }
	__asm { mov eax, dword ptr [g_012e47a4] }
	__asm { test al, 1 }
	__asm { jne L_00af55fc }
	__asm { or eax, 1 }
	__asm { push 0xde4ff0 }
	__asm { mov dword ptr [g_012e47a4], eax }
	__asm { mov dword ptr [g_012e4798], 0x12c37d8 }
	__asm { mov dword ptr [g_012e47a0], 0x7d6b70 }
	__asm { mov dword ptr [g_012e479c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00af55fc: }
	__asm { mov eax, esi }
	__asm { mov dword ptr [esi], 0x12e4798 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00af80d0
extern "C" __declspec(naked) void asm_00af80d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00af80fd }
	__asm { mov dword ptr [eax], 0xec14f4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00af80ff }
	__asm { L_00af80fd: }
	__asm { xor eax, eax }
	__asm { L_00af80ff: }
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
// FUNCTION: ROBLOXSTUDIO 0x00af8120
extern "C" __declspec(naked) void asm_00af8120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00af814d }
	__asm { mov dword ptr [eax], 0xec1508 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00af814f }
	__asm { L_00af814d: }
	__asm { xor eax, eax }
	__asm { L_00af814f: }
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
// FUNCTION: ROBLOXSTUDIO 0x00af8170
extern "C" __declspec(naked) void asm_00af8170()
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
	__asm { je L_00af81ab }
	__asm { mov dword ptr [edx], 0xec151c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00af81ad }
	__asm { L_00af81ab: }
	__asm { xor edx, edx }
	__asm { L_00af81ad: }
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

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00afa910
extern "C" __declspec(naked) void asm_00afa910()
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
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { je L_00afa962 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00afa962: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00afae80
extern "C" __declspec(naked) void asm_00afae80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { cmp ecx, dword ptr [edi + 0x14] }
	__asm { je L_00afaeb4 }
	__asm { push esi }
	__asm { L_00afaea1: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { cmp esi, dword ptr [edi + 0x14] }
	__asm { jne L_00afaea1 }
	__asm { pop esi }
	__asm { L_00afaeb4: }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00cdcc90();
// FUNCTION: ROBLOXSTUDIO 0x00afea20
extern "C" __declspec(naked) void asm_00afea20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [eax] }
	__asm { push dword ptr [edi + 4] }
	__asm { push edi }
	__asm { call fn_00cdcc90 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, 0x15555554 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00afea53 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00afea53: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [edi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b03140
extern "C" __declspec(naked) void asm_00b03140()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0xdc], 0x10 }
	__asm { jb L_00b0315a }
	__asm { push dword ptr [esi + 0xc8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b0315a: }
	__asm { mov dword ptr [esi + 0xdc], 0xf }
	__asm { mov dword ptr [esi + 0xd8], 0 }
	__asm { mov byte ptr [esi + 0xc8], 0 }
	__asm { cmp dword ptr [esi + 0xc4], 0x10 }
	__asm { jb L_00b0318c }
	__asm { push dword ptr [esi + 0xb0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b0318c: }
	__asm { mov dword ptr [esi + 0xc4], 0xf }
	__asm { mov dword ptr [esi + 0xc0], 0 }
	__asm { mov byte ptr [esi + 0xb0], 0 }
	__asm { cmp dword ptr [esi + 0xac], 0x10 }
	__asm { jb L_00b031be }
	__asm { push dword ptr [esi + 0x98] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b031be: }
	__asm { mov dword ptr [esi + 0xac], 0xf }
	__asm { mov dword ptr [esi + 0xa8], 0 }
	__asm { mov byte ptr [esi + 0x98], 0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_007b00e0 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b0a180
extern "C" __declspec(naked) void asm_00b0a180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b0a1ad }
	__asm { mov dword ptr [eax], 0xec2874 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b0a1af }
	__asm { L_00b0a1ad: }
	__asm { xor eax, eax }
	__asm { L_00b0a1af: }
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
// FUNCTION: ROBLOXSTUDIO 0x00b0a1d0
extern "C" __declspec(naked) void asm_00b0a1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b0a1fd }
	__asm { mov dword ptr [eax], 0xec2888 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b0a1ff }
	__asm { L_00b0a1fd: }
	__asm { xor eax, eax }
	__asm { L_00b0a1ff: }
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
// FUNCTION: ROBLOXSTUDIO 0x00b0a320
extern "C" __declspec(naked) void asm_00b0a320()
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
	__asm { je L_00b0a35b }
	__asm { mov dword ptr [edx], 0xec289c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00b0a35d }
	__asm { L_00b0a35b: }
	__asm { xor edx, edx }
	__asm { L_00b0a35d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00b0a380
extern "C" __declspec(naked) void asm_00b0a380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b0a3ad }
	__asm { mov dword ptr [eax], 0xec28b0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b0a3af }
	__asm { L_00b0a3ad: }
	__asm { xor eax, eax }
	__asm { L_00b0a3af: }
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
// FUNCTION: ROBLOXSTUDIO 0x00b0c320
extern "C" __declspec(naked) void asm_00b0c320()
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
	__asm { je L_00b0c35b }
	__asm { mov dword ptr [edx], 0xec2b98 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00b0c35d }
	__asm { L_00b0c35b: }
	__asm { xor edx, edx }
	__asm { L_00b0c35d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00b0c380
extern "C" __declspec(naked) void asm_00b0c380()
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
	__asm { je L_00b0c3bb }
	__asm { mov dword ptr [edx], 0xec2bac }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00b0c3bd }
	__asm { L_00b0c3bb: }
	__asm { xor edx, edx }
	__asm { L_00b0c3bd: }
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
// FUNCTION: ROBLOXSTUDIO 0x00b0c3e0
extern "C" __declspec(naked) void asm_00b0c3e0()
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
	__asm { je L_00b0c41b }
	__asm { mov dword ptr [edx], 0xec2bc0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00b0c41d }
	__asm { L_00b0c41b: }
	__asm { xor edx, edx }
	__asm { L_00b0c41d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00b0cbc0
extern "C" __declspec(naked) void asm_00b0cbc0()
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
	__asm { je L_00b0cbfb }
	__asm { mov dword ptr [edx], 0xec3050 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00b0cbfd }
	__asm { L_00b0cbfb: }
	__asm { xor edx, edx }
	__asm { L_00b0cbfd: }
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
// FUNCTION: ROBLOXSTUDIO 0x00b0cc20
extern "C" __declspec(naked) void asm_00b0cc20()
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
	__asm { je L_00b0cc5b }
	__asm { mov dword ptr [edx], 0xec303c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00b0cc5d }
	__asm { L_00b0cc5b: }
	__asm { xor edx, edx }
	__asm { L_00b0cc5d: }
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

extern "C" void fn_006b9e50();
extern "C" void fn_007b4a80();
extern "C" void fn_00ac7ea0();
extern "C" void fn_00ac8350();
// FUNCTION: ROBLOXSTUDIO 0x00b0e230
extern "C" __declspec(naked) void asm_00b0e230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_007b4a80 }
	__asm { mov byte ptr [edi + 0xa8], 1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test eax, eax }
	__asm { je L_00b0e276 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xc4] }
	__asm { call fn_00ac7ea0 }
	__asm { lea ecx, [eax + 4] }
	__asm { call fn_006b9e50 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xc4] }
	__asm { call fn_00ac8350 }
	__asm { L_00b0e276: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b0ea70
extern "C" __declspec(naked) void asm_00b0ea70()
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
	__asm { je L_00b0eaab }
	__asm { mov dword ptr [edx], 0xec38a0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00b0eaad }
	__asm { L_00b0eaab: }
	__asm { xor edx, edx }
	__asm { L_00b0eaad: }
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
// FUNCTION: ROBLOXSTUDIO 0x00b0f600
extern "C" __declspec(naked) void asm_00b0f600()
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
	__asm { je L_00b0f63b }
	__asm { mov dword ptr [edx], 0xec3acc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00b0f63d }
	__asm { L_00b0f63b: }
	__asm { xor edx, edx }
	__asm { L_00b0f63d: }
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

extern "C" void fn_0048eee0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b11520
extern "C" __declspec(naked) void asm_00b11520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x18] }
	__asm { call fn_0048eee0 }
	__asm { push dword ptr [edi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [edi + 0x14], 8 }
	__asm { jb L_00b11555 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b11555: }
	__asm { mov dword ptr [edi + 0x14], 7 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { xor eax, eax }
	__asm { mov word ptr [edi], ax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4a80();
extern "C" void fn_00cf67f8();
extern "C" void fn_00d08dc0();
// FUNCTION: ROBLOXSTUDIO 0x00b18210
extern "C" __declspec(naked) void asm_00b18210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0x11edc30 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [edi] }
	__asm { mov esi, ecx }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00b18242 }
	__asm { mov ecx, dword ptr [esi + 0x90] }
	__asm { push eax }
	__asm { call fn_00d08dc0 }
	__asm { L_00b18242: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_007b4a80 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b18b70();
// FUNCTION: ROBLOXSTUDIO 0x00b19690
extern "C" __declspec(naked) void asm_00b19690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ecx + 0x80], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { je L_00b196ba }
	__asm { mov edx, dword ptr [ecx + 0x7c] }
	__asm { mov ecx, dword ptr [ecx + 0x8c] }
	__asm { mov ecx, dword ptr [ecx + edx*4] }
	__asm { test ecx, ecx }
	__asm { je L_00b196ba }
	__asm { add ecx, -0x1c }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { jmp L_00b196c1 }
	__asm { L_00b196ba: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_00b196c1: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea edx, [ebp + 8] }
	__asm { push 0 }
	__asm { mov edx, dword ptr [edx] }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00b18b70 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b1af20
extern "C" __declspec(naked) void asm_00b1af20()
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
	__asm { je L_00b1af5b }
	__asm { mov dword ptr [edx], 0xec58b8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00b1af5d }
	__asm { L_00b1af5b: }
	__asm { xor edx, edx }
	__asm { L_00b1af5d: }
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

extern "C" void fn_00a46650();
extern "C" void fn_00b659c0();
extern "C" void fn_00c2bee0();
// FUNCTION: ROBLOXSTUDIO 0x00b1bae0
extern "C" __declspec(naked) void asm_00b1bae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_00b1bb0f }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00b1bb0f }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [edi + 0x64] }
	__asm { call fn_00a46650 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00b1bb0f: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [edi + 0x6c] }
	__asm { call fn_00b659c0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b1c0b0
extern "C" __declspec(naked) void asm_00b1c0b0()
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
	__asm { je L_00b1c0eb }
	__asm { mov dword ptr [edx], 0xec5ec4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00b1c0ed }
	__asm { L_00b1c0eb: }
	__asm { xor edx, edx }
	__asm { L_00b1c0ed: }
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
// FUNCTION: ROBLOXSTUDIO 0x00b1c110
extern "C" __declspec(naked) void asm_00b1c110()
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
	__asm { je L_00b1c14b }
	__asm { mov dword ptr [edx], 0xec5eb0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00b1c14d }
	__asm { L_00b1c14b: }
	__asm { xor edx, edx }
	__asm { L_00b1c14d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00b1c620
extern "C" __declspec(naked) void asm_00b1c620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_00b1c633 }
	__asm { lea esi, [eax - 0x1c] }
	__asm { jmp L_00b1c635 }
	__asm { L_00b1c633: }
	__asm { xor esi, esi }
	__asm { L_00b1c635: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { add ecx, esi }
	__asm { call eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b1d790
extern "C" __declspec(naked) void asm_00b1d790()
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
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { je L_00b1d7da }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b1d7da: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b8500();
// FUNCTION: ROBLOXSTUDIO 0x00b1dcc0
extern "C" __declspec(naked) void asm_00b1dcc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_007b8500 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { test ecx, ecx }
	__asm { je L_00b1dcf2 }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { add ecx, -0x1c }
	__asm { push ecx }
	__asm { add ecx, dword ptr [esi + 0x2c] }
	__asm { fstp dword ptr [esp] }
	__asm { call edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00b1dcf2: }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { fstp dword ptr [esp] }
	__asm { call edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0130e300[];
extern "C" void fn_00b20780();
extern "C" void fn_00b223d0();
extern "C" void fn_00b23320();
// FUNCTION: ROBLOXSTUDIO 0x00b20a50
extern "C" __declspec(naked) void asm_00b20a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00b223d0 }
	__asm { fst dword ptr [ebp - 4] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_0130e300] }
	__asm { sub esp, 8 }
	__asm { lea ecx, [ecx + esi] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00b20780 }
	__asm { test esi, esi }
	__asm { je L_00b20a83 }
	__asm { lea eax, [esi + 0x1c] }
	__asm { jmp L_00b20a85 }
	__asm { L_00b20a83: }
	__asm { xor eax, eax }
	__asm { L_00b20a85: }
	__asm { fld dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, 0x130e2d8 }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { call fn_00b23320 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130e290[];
extern "C" void fn_00b20780();
extern "C" void fn_00b223d0();
extern "C" void fn_00b23320();
// FUNCTION: ROBLOXSTUDIO 0x00b23a40
extern "C" __declspec(naked) void asm_00b23a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00b223d0 }
	__asm { fst dword ptr [ebp - 4] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_0130e290] }
	__asm { sub esp, 8 }
	__asm { lea ecx, [ecx + esi] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00b20780 }
	__asm { test esi, esi }
	__asm { je L_00b23a73 }
	__asm { lea eax, [esi + 0x1c] }
	__asm { jmp L_00b23a75 }
	__asm { L_00b23a73: }
	__asm { xor eax, eax }
	__asm { L_00b23a75: }
	__asm { fld dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, 0x130e268 }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { call fn_00b23320 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00486e40();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00b28e90
extern "C" __declspec(naked) void asm_00b28e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00b28ec5 }
	__asm { add edi, 0x1c }
	__asm { je L_00b28ec5 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00486e40 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00b28ec5 }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b28ec5: }
	__asm { xor edi, edi }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b2d3c0
extern "C" __declspec(naked) void asm_00b2d3c0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_00b2d400 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00b2d3e6 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b2d3e6: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b2d400: }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_0043f040();
extern "C" void fn_00c307f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b35ba0
extern "C" __declspec(naked) void asm_00b35ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c307f0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00b35bc5 }
	__asm { lea ecx, [esi + 0x74] }
	__asm { call fn_0043f040 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b35bc5: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xec78b8 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" void fn_0043f040();
extern "C" void fn_00c307f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b35bf0
extern "C" __declspec(naked) void asm_00b35bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c307f0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00b35c15 }
	__asm { lea ecx, [esi + 0x70] }
	__asm { call fn_0043f040 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b35c15: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xec7870 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b48900
extern "C" __declspec(naked) void asm_00b48900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00b48939 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00b48930 }
	__asm { test al, 1 }
	__asm { jne L_00b4892a }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b4892a }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b4892a: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00b48930: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b48939: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b48c80
extern "C" __declspec(naked) void asm_00b48c80()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00b48cb6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00b48cad }
	__asm { test al, 1 }
	__asm { jne L_00b48ca7 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b48ca7 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b48ca7: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00b48cad: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b48cb6: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_0130ec18[];
extern "C" void fn_00407e90();
extern "C" void fn_00b49950();
// FUNCTION: ROBLOXSTUDIO 0x00b497a0
extern "C" __declspec(naked) void asm_00b497a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b49950 }
	__asm { cmp byte ptr [g_0130ec18], 0 }
	__asm { jne L_00b497ee }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 0x10], 0x130ec14 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 0x10], 0xb4db20 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130ec18], 1 }
	__asm { L_00b497ee: }
	__asm { mov eax, esi }
	__asm { mov dword ptr [esi], 0xec9e28 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_0130ec20[];
extern "C" void fn_00407e90();
extern "C" void fn_00b49950();
// FUNCTION: ROBLOXSTUDIO 0x00b49800
extern "C" __declspec(naked) void asm_00b49800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b49950 }
	__asm { cmp byte ptr [g_0130ec20], 0 }
	__asm { jne L_00b4984e }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 0x10], 0x130ec1c }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 0x10], 0xb4db80 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130ec20], 1 }
	__asm { L_00b4984e: }
	__asm { mov dword ptr [esi], 0xec9e50 }
	__asm { mov dword ptr [esi + 0x10c], 0 }
	__asm { mov dword ptr [esi + 0x110], 0 }
	__asm { mov dword ptr [esi + 0x114], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_0130ec10[];
extern "C" void fn_00407e90();
extern "C" void fn_00b49950();
// FUNCTION: ROBLOXSTUDIO 0x00b49a30
extern "C" __declspec(naked) void asm_00b49a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b49950 }
	__asm { cmp byte ptr [g_0130ec10], 0 }
	__asm { jne L_00b49a7e }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 0x10], 0x130ec0c }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 0x10], 0xb4dc40 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130ec10], 1 }
	__asm { L_00b49a7e: }
	__asm { mov eax, esi }
	__asm { mov dword ptr [esi], 0xec9e00 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130ec14[];
extern "C" void fn_006b9b20();
extern "C" void fn_00b4d660();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b49b60
extern "C" __declspec(naked) void asm_00b49b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00b4d660 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00b49b7b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00b49b99 }
	__asm { jmp L_00b49b94 }
	__asm { L_00b49b7b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130ec14] }
	__asm { cmp edx, eax }
	__asm { ja L_00b49b8e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130ec14], eax }
	__asm { L_00b49b8e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b49b94: }
	__asm { call fn_006b9b20 }
	__asm { L_00b49b99: }
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
extern "C" char g_0130ec1c[];
extern "C" void fn_006b9b20();
extern "C" void fn_00b4d6c0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b49bd0
extern "C" __declspec(naked) void asm_00b49bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00b4d6c0 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00b49beb }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00b49c09 }
	__asm { jmp L_00b49c04 }
	__asm { L_00b49beb: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130ec1c] }
	__asm { cmp edx, eax }
	__asm { ja L_00b49bfe }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130ec1c], eax }
	__asm { L_00b49bfe: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b49c04: }
	__asm { call fn_006b9b20 }
	__asm { L_00b49c09: }
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
extern "C" char g_0130ec0c[];
extern "C" void fn_006b9b20();
extern "C" void fn_00b4d720();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b49c40
extern "C" __declspec(naked) void asm_00b49c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00b4d720 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00b49c5b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00b49c79 }
	__asm { jmp L_00b49c74 }
	__asm { L_00b49c5b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130ec0c] }
	__asm { cmp edx, eax }
	__asm { ja L_00b49c6e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130ec0c], eax }
	__asm { L_00b49c6e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b49c74: }
	__asm { call fn_006b9b20 }
	__asm { L_00b49c79: }
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

// FUNCTION: ROBLOXSTUDIO 0x00b4da60
extern "C" __declspec(naked) void asm_00b4da60()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { xor edi, edi }
	__asm { call dword ptr [eax + 0x28] }
	__asm { test eax, eax }
	__asm { jle L_00b4dab7 }
	__asm { nop }
	__asm { L_00b4da70: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { mov dword ptr [eax + 0xf0], 0 }
	__asm { mov dword ptr [eax + 0xf4], 0 }
	__asm { mov dword ptr [eax + 0xf8], 0 }
	__asm { mov dword ptr [eax + 0x18], 0 }
	__asm { mov dword ptr [eax + 0x68], 0 }
	__asm { mov dword ptr [eax + 0x6c], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { inc edi }
	__asm { call dword ptr [eax + 0x28] }
	__asm { cmp edi, eax }
	__asm { jl L_00b4da70 }
	__asm { L_00b4dab7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_01210342[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b4e0b0();
extern "C" void fn_00b4e1f0();
// FUNCTION: ROBLOXSTUDIO 0x00b4e040
extern "C" __declspec(naked) void asm_00b4e040()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00b4e08a }
	__asm { cmp dword ptr [esi + 0x2c], 0 }
	__asm { jne L_00b4e08a }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b4e079 }
	__asm { push 0x1c7 }
	__asm { push 0xec9e74 }
	__asm { push 0xec9f1c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b4e08a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b4e079: }
	__asm { movzx eax, al }
	__asm { push 0xeca0c0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b4e08a: }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { pop esi }
	__asm { test ecx, ecx }
	__asm { je L_00b4e0a4 }
	__asm { cmp byte ptr [g_01210342], 0 }
	__asm { jne fn_00b4e1f0 }
	__asm { jmp fn_00b4e0b0 }
	__asm { L_00b4e0a4: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b51630();
// FUNCTION: ROBLOXSTUDIO 0x00b533d0
extern "C" __declspec(naked) void asm_00b533d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00b5341a }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_00b5341a }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00b53409 }
	__asm { push 0x69 }
	__asm { push 0xecc4f8 }
	__asm { push 0xe857f0 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5341a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b53409: }
	__asm { movzx eax, al }
	__asm { push 0xecc8e0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5341a: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { call fn_00b51630 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b53d40();
// FUNCTION: ROBLOXSTUDIO 0x00b53cd0
extern "C" __declspec(naked) void asm_00b53cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00b53d1a }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_00b53d1a }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00b53d09 }
	__asm { push 0x75 }
	__asm { push 0xecc4f8 }
	__asm { push 0xe857f0 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b53d1a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b53d09: }
	__asm { movzx eax, al }
	__asm { push 0xecc940 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b53d1a: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { call fn_00b53d40 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b51540();
extern "C" void fn_00b54150();
// FUNCTION: ROBLOXSTUDIO 0x00b54050
extern "C" __declspec(naked) void asm_00b54050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { dec dword ptr [esi + 0x24] }
	__asm { cmp dword ptr [esi + 0x20], 0 }
	__asm { mov edi, ecx }
	__asm { jl L_00b5406f }
	__asm { cmp dword ptr [esi + 0x24], 0 }
	__asm { jne L_00b5406f }
	__asm { push esi }
	__asm { call fn_00b54150 }
	__asm { L_00b5406f: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [eax + 0x30] }
	__asm { cmp dword ptr [eax + 0xf0], 0 }
	__asm { jge L_00b54099 }
	__asm { cmp dword ptr [eax + 0xf4], 0 }
	__asm { jge L_00b54099 }
	__asm { cmp dword ptr [eax + 0xf8], 0 }
	__asm { jge L_00b54099 }
	__asm { cmp dword ptr [eax + 0xfc], 0 }
	__asm { jl L_00b540a1 }
	__asm { L_00b54099: }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b51540 }
	__asm { L_00b540a1: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b52c90();
// FUNCTION: ROBLOXSTUDIO 0x00b54200
extern "C" __declspec(naked) void asm_00b54200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00b5424a }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_00b5424a }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00b54239 }
	__asm { push 0x6f }
	__asm { push 0xecc4f8 }
	__asm { push 0xe857f0 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5424a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b54239: }
	__asm { movzx eax, al }
	__asm { push 0xecc910 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5424a: }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0x50 }
	__asm { call fn_00b52c90 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099c6f0();
// FUNCTION: ROBLOXSTUDIO 0x00b5ba40
extern "C" __declspec(naked) void asm_00b5ba40()
{
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0x20] }
	__asm { test esi, esi }
	__asm { je L_00b5ba50 }
	__asm { add esi, -8 }
	__asm { jmp L_00b5ba52 }
	__asm { L_00b5ba50: }
	__asm { xor esi, esi }
	__asm { L_00b5ba52: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b5ba94 }
	__asm { test esi, esi }
	__asm { jne L_00b5ba94 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b5ba83 }
	__asm { push 0x72 }
	__asm { push 0xecdd40 }
	__asm { push 0xe56ba4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5ba94 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b5ba83: }
	__asm { movzx eax, al }
	__asm { push 0xece1f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5ba94: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_0099c6f0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00b5bb60
extern "C" __declspec(naked) void asm_00b5bb60()
{
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0x20] }
	__asm { test esi, esi }
	__asm { je L_00b5bb70 }
	__asm { add esi, -8 }
	__asm { jmp L_00b5bb72 }
	__asm { L_00b5bb70: }
	__asm { xor esi, esi }
	__asm { L_00b5bb72: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b5bbb4 }
	__asm { test esi, esi }
	__asm { jne L_00b5bbb4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b5bba3 }
	__asm { push 0x72 }
	__asm { push 0xecdd40 }
	__asm { push 0xe56ba4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5bbb4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b5bba3: }
	__asm { movzx eax, al }
	__asm { push 0xece1f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5bbb4: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00b5b600();
// FUNCTION: ROBLOXSTUDIO 0x00b5c980
extern "C" __declspec(naked) void asm_00b5c980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_00b5c987: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00b5c9b9 }
	__asm { lea eax, [ecx - 8] }
	__asm { test eax, eax }
	__asm { je L_00b5c9b9 }
	__asm { test ecx, ecx }
	__asm { je L_00b5c99e }
	__asm { add ecx, -8 }
	__asm { jmp L_00b5c9a0 }
	__asm { L_00b5c99e: }
	__asm { xor ecx, ecx }
	__asm { L_00b5c9a0: }
	__asm { call fn_00b5b600 }
	__asm { test al, al }
	__asm { jne L_00b5c9b9 }
	__asm { mov esi, dword ptr [esi + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00b5c9b5 }
	__asm { add esi, -8 }
	__asm { jmp L_00b5c987 }
	__asm { L_00b5c9b5: }
	__asm { xor esi, esi }
	__asm { jmp L_00b5c987 }
	__asm { L_00b5c9b9: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00b5c9f0
extern "C" __declspec(naked) void asm_00b5c9f0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { test esi, esi }
	__asm { je L_00b5c9fd }
	__asm { add esi, -8 }
	__asm { jmp L_00b5c9ff }
	__asm { L_00b5c9fd: }
	__asm { xor esi, esi }
	__asm { L_00b5c9ff: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b5ca44 }
	__asm { test esi, esi }
	__asm { jne L_00b5ca44 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b5ca33 }
	__asm { push 0x80 }
	__asm { push 0xece80c }
	__asm { push 0xe56ba4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5ca44 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b5ca33: }
	__asm { movzx eax, al }
	__asm { push 0xece920 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5ca44: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5cb90();
// FUNCTION: ROBLOXSTUDIO 0x00b5ca60
extern "C" __declspec(naked) void asm_00b5ca60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { je L_00b5cab0 }
	__asm { push esi }
	__asm { call fn_00b5cb90 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00b5cab0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5ca9b }
	__asm { push 0x26 }
	__asm { push 0xece80c }
	__asm { push 0xece84c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5cab0 }
	__asm { L_00b5ca9b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xece868 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5cab0: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [esi + 0x18], eax }
	__asm { pop esi }
	__asm { setg al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00b5d980
extern "C" __declspec(naked) void asm_00b5d980()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00b5d9c7 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_00b5d9c7 }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00b5d9b6 }
	__asm { push 0x45 }
	__asm { push 0xeceae8 }
	__asm { push 0xeceb2c }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5d9c7 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b5d9b6: }
	__asm { movzx eax, al }
	__asm { push 0xeceb38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5d9c7: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax + 8] }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00b5d9d0
extern "C" __declspec(naked) void asm_00b5d9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00b5da1a }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_00b5da1a }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00b5da09 }
	__asm { push 0x2c }
	__asm { push 0xeceb98 }
	__asm { push 0xecebe0 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5da1a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b5da09: }
	__asm { movzx eax, al }
	__asm { push 0xecebf8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5da1a: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x14] }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b5f1d0
extern "C" __declspec(naked) void asm_00b5f1d0()
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
	__asm { L_00b5f1e0: }
	__asm { test eax, eax }
	__asm { je L_00b5f1ec }
	__asm { lea ecx, [eax - 0x80c] }
	__asm { jmp L_00b5f1ee }
	__asm { L_00b5f1ec: }
	__asm { xor ecx, ecx }
	__asm { L_00b5f1ee: }
	__asm { mov eax, dword ptr [ecx + 0x80c] }
	__asm { push ecx }
	__asm { mov dword ptr [edi], eax }
	__asm { call fn_00cf6522 }
	__asm { dec dword ptr [ebx + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 4 }
	__asm { inc esi }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_00b5f1e0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b5fe30
extern "C" __declspec(naked) void asm_00b5fe30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_00b5fe7e }
	__asm { add esi, 4 }
	__asm { L_00b5fe42: }
	__asm { mov dword ptr [esi + 0xc], 0xe370e4 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00b5fe74 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00b5fe74: }
	__asm { add esi, 0x24 }
	__asm { lea eax, [esi - 4] }
	__asm { cmp eax, edi }
	__asm { jne L_00b5fe42 }
	__asm { L_00b5fe7e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b5fe90
extern "C" __declspec(naked) void asm_00b5fe90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_00b5fed7 }
	__asm { add esi, 0x10 }
	__asm { L_00b5fea2: }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00b5fecd }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00b5fecd: }
	__asm { add esi, 0x1c }
	__asm { lea eax, [esi - 0x10] }
	__asm { cmp eax, edi }
	__asm { jne L_00b5fea2 }
	__asm { L_00b5fed7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}
