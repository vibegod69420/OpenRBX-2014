// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00bb9bb0();
// FUNCTION: ROBLOXSTUDIO 0x009dc2e0
extern "C" __declspec(naked) void asm_009dc2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x218] }
	__asm { test ecx, ecx }
	__asm { je L_009dc2f3 }
	__asm { pop ebp }
	__asm { jmp fn_00bb9bb0 }
	__asm { L_009dc2f3: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009dd310
extern "C" __declspec(naked) void asm_009dd310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x20a], al }
	__asm { je L_009dd324 }
	__asm { mov byte ptr [ecx + 0x20a], al }
	__asm { L_009dd324: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009dd330
extern "C" __declspec(naked) void asm_009dd330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x212], al }
	__asm { je L_009dd351 }
	__asm { mov byte ptr [ecx + 0x212], al }
	__asm { mov dword ptr [ebp + 8], 0x1305360 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_009dd351: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01304e42[];
extern "C" void fn_009dd760();
// FUNCTION: ROBLOXSTUDIO 0x009dd820
extern "C" __declspec(naked) void asm_009dd820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_01304e42], 0 }
	__asm { je L_009dd83a }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009dd760 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009dd83a: }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009dd760 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009dda90
extern "C" __declspec(naked) void asm_009dda90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ecx + 0x228] }
	__asm { je L_009ddab1 }
	__asm { mov dword ptr [ecx + 0x228], eax }
	__asm { mov dword ptr [ebp + 8], 0x13054ec }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_009ddab1: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009ddb10
extern "C" __declspec(naked) void asm_009ddb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x20d], al }
	__asm { je L_009ddb31 }
	__asm { mov byte ptr [ecx + 0x20d], al }
	__asm { mov dword ptr [ebp + 8], 0x1305334 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_009ddb31: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009ddb40
extern "C" __declspec(naked) void asm_009ddb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x20b], al }
	__asm { je L_009ddb61 }
	__asm { mov byte ptr [ecx + 0x20b], al }
	__asm { mov dword ptr [ebp + 8], 0x1305308 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_009ddb61: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009ddb70
extern "C" __declspec(naked) void asm_009ddb70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x20e], al }
	__asm { je L_009ddb91 }
	__asm { mov byte ptr [ecx + 0x20e], al }
	__asm { mov dword ptr [ebp + 8], 0x13053e4 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_009ddb91: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01304e42[];
extern "C" void fn_009ddf20();
// FUNCTION: ROBLOXSTUDIO 0x009de110
extern "C" __declspec(naked) void asm_009de110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_01304e42], 0 }
	__asm { je L_009de12a }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009ddf20 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009de12a: }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009ddf20 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009df9d0
extern "C" __declspec(naked) void asm_009df9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x6c], al }
	__asm { je L_009df9eb }
	__asm { mov byte ptr [ecx + 0x6c], al }
	__asm { mov dword ptr [ebp + 8], 0x1305d4c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_009df9eb: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009df9f0
extern "C" __declspec(naked) void asm_009df9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x64], eax }
	__asm { je L_009dfa0b }
	__asm { mov dword ptr [ecx + 0x64], eax }
	__asm { mov dword ptr [ebp + 8], 0x1305cf4 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_009dfa0b: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009dfa10
extern "C" __declspec(naked) void asm_009dfa10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x68], eax }
	__asm { je L_009dfa28 }
	__asm { push 0x1305d20 }
	__asm { mov dword ptr [ecx + 0x68], eax }
	__asm { call fn_007b4f50 }
	__asm { L_009dfa28: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009ee850();
// FUNCTION: ROBLOXSTUDIO 0x009ee5c0
extern "C" __declspec(naked) void asm_009ee5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009ee5d4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009ee850 }
	__asm { L_009ee5d4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12442c8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009ee930();
// FUNCTION: ROBLOXSTUDIO 0x009ee5f0
extern "C" __declspec(naked) void asm_009ee5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009ee604 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009ee930 }
	__asm { L_009ee604: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1243f58 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009eea10();
// FUNCTION: ROBLOXSTUDIO 0x009ee620
extern "C" __declspec(naked) void asm_009ee620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009ee634 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009eea10 }
	__asm { L_009ee634: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1243dc0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009eeb00();
// FUNCTION: ROBLOXSTUDIO 0x009ee650
extern "C" __declspec(naked) void asm_009ee650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009ee664 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009eeb00 }
	__asm { L_009ee664: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1243a98 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009eebf0();
// FUNCTION: ROBLOXSTUDIO 0x009ee680
extern "C" __declspec(naked) void asm_009ee680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009ee694 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009eebf0 }
	__asm { L_009ee694: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1243b98 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009eecb0();
// FUNCTION: ROBLOXSTUDIO 0x009ee6b0
extern "C" __declspec(naked) void asm_009ee6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009ee6c4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009eecb0 }
	__asm { L_009ee6c4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1243850 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009eeda0();
// FUNCTION: ROBLOXSTUDIO 0x009ee6e0
extern "C" __declspec(naked) void asm_009ee6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009ee6f4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009eeda0 }
	__asm { L_009ee6f4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1243740 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009eee90();
// FUNCTION: ROBLOXSTUDIO 0x009ee710
extern "C" __declspec(naked) void asm_009ee710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009ee724 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009eee90 }
	__asm { L_009ee724: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1243968 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009eef80();
// FUNCTION: ROBLOXSTUDIO 0x009ee740
extern "C" __declspec(naked) void asm_009ee740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009ee754 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009eef80 }
	__asm { L_009ee754: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1243600 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009ef070();
// FUNCTION: ROBLOXSTUDIO 0x009ee7b0
extern "C" __declspec(naked) void asm_009ee7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009ee7c4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009ef070 }
	__asm { L_009ee7c4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1242fe8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009ef0f0();
// FUNCTION: ROBLOXSTUDIO 0x009ee7e0
extern "C" __declspec(naked) void asm_009ee7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009ee7f4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009ef0f0 }
	__asm { L_009ee7f4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1242ee0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d2a80();
extern "C" void fn_006d35b0();
// FUNCTION: ROBLOXSTUDIO 0x009f46e0
extern "C" __declspec(naked) void asm_009f46e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_006d2a80 }
	__asm { test al, al }
	__asm { jne L_009f46fb }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_006d35b0 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f46fb: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009f9050();
// FUNCTION: ROBLOXSTUDIO 0x009f9020
extern "C" __declspec(naked) void asm_009f9020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009f9034 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009f9050 }
	__asm { L_009f9034: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1247ef0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009f9d60
extern "C" __declspec(naked) void asm_009f9d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ecx + 0xa0] }
	__asm { je L_009f9d81 }
	__asm { mov dword ptr [ecx + 0xa0], eax }
	__asm { mov dword ptr [ebp + 8], 0x1306388 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_009f9d81: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009d9c50();
// FUNCTION: ROBLOXSTUDIO 0x009fbfd0
extern "C" __declspec(naked) void asm_009fbfd0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 0x38] }
	__asm { call fn_009d9c50 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009fbfea }
	__asm { mov edx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 0x78] }
	__asm { L_009fbfea: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009fd3d0
extern "C" __declspec(naked) void asm_009fd3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x74], eax }
	__asm { je L_009fd3eb }
	__asm { mov dword ptr [ecx + 0x74], eax }
	__asm { mov dword ptr [ebp + 8], 0x130667c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_009fd3eb: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a003e0();
// FUNCTION: ROBLOXSTUDIO 0x00a00340
extern "C" __declspec(naked) void asm_00a00340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a00354 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a003e0 }
	__asm { L_00a00354: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1249ad0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a00490();
// FUNCTION: ROBLOXSTUDIO 0x00a00370
extern "C" __declspec(naked) void asm_00a00370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a00384 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a00490 }
	__asm { L_00a00384: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1249c58 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009ff710();
// FUNCTION: ROBLOXSTUDIO 0x00a00890
extern "C" __declspec(naked) void asm_00a00890()
{
	__asm { mov ecx, dword ptr [ecx + 0x1c] }
	__asm { inc dword ptr [ecx + 0x1c] }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { cmp eax, dword ptr [ecx + 0x18] }
	__asm { jb L_00a008aa }
	__asm { mov dword ptr [ecx + 0x1c], 0 }
	__asm { call fn_009ff710 }
	__asm { L_00a008aa: }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a0f2e0
extern "C" __declspec(naked) void asm_00a0f2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x6c] }
	__asm { test ecx, ecx }
	__asm { je L_00a0f2f0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 4] }
	__asm { L_00a0f2f0: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a0f470
extern "C" __declspec(naked) void asm_00a0f470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x68] }
	__asm { test ecx, ecx }
	__asm { je L_00a0f47f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax] }
	__asm { L_00a0f47f: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a0f980();
// FUNCTION: ROBLOXSTUDIO 0x00a0fac0
extern "C" __declspec(naked) void asm_00a0fac0()
{
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { test eax, eax }
	__asm { je fn_00a0f980 }
	__asm { ret }
}

extern "C" void fn_00a10530();
// FUNCTION: ROBLOXSTUDIO 0x00a104c0
extern "C" __declspec(naked) void asm_00a104c0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00a10530 }
	__asm { cmp dword ptr [esi + 0xc0], 0x10 }
	__asm { lea eax, [esi + 0xac] }
	__asm { pop esi }
	__asm { jb L_00a104da }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00a104da: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a1ce20
extern "C" __declspec(naked) void asm_00a1ce20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00a1ce38 }
	__asm { cmp dword ptr [ecx + 0x40], eax }
	__asm { jb L_00a1ce38 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a1ce38: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a2fdf0();
// FUNCTION: ROBLOXSTUDIO 0x00a27900
extern "C" __declspec(naked) void asm_00a27900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test byte ptr [eax + 0x28], 1 }
	__asm { je L_00a27919 }
	__asm { pop ebp }
	__asm { jmp fn_00a2fdf0 }
	__asm { L_00a27919: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a2bde0();
// FUNCTION: ROBLOXSTUDIO 0x00a2cb70
extern "C" __declspec(naked) void asm_00a2cb70()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { cmp byte ptr [esi + 0x40], 0 }
	__asm { je L_00a2cb84 }
	__asm { mov ecx, esi }
	__asm { call fn_00a2bde0 }
	__asm { mov byte ptr [esi + 0x40], 0 }
	__asm { L_00a2cb84: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2ccc0
extern "C" __declspec(naked) void asm_00a2ccc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xea5fe8 }
	__asm { je L_00a2ccdb }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2ccdb: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2ccf0
extern "C" __declspec(naked) void asm_00a2ccf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xea5dc8 }
	__asm { je L_00a2cd0b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2cd0b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a2bf00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2cd20
extern "C" __declspec(naked) void asm_00a2cd20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00a2bf00 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { je L_00a2cd41 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2cd41: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a2bf60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2cd50
extern "C" __declspec(naked) void asm_00a2cd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00a2bf60 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x38], 0xe1822c }
	__asm { je L_00a2cd71 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2cd71: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a2d870
extern "C" __declspec(naked) void asm_00a2d870()
{
	__asm { cmp dword ptr [ecx + 0x34], 0x10 }
	__asm { lea eax, [ecx + 0x20] }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { jb L_00a2d882 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00a2d882: }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [ecx + 0x38], 0 }
	__asm { mov dword ptr [ecx + 0x3c], 0 }
	__asm { ret }
}

extern "C" char g_00e10314[];
// FUNCTION: ROBLOXSTUDIO 0x00a2f090
extern "C" __declspec(naked) void asm_00a2f090()
{
	__asm { mov eax, dword ptr [ecx + 0x60] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00a2f0aa }
	__asm { mov edx, dword ptr [ecx + 0x48] }
	__asm { mov eax, dword ptr [ecx + 0x50] }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { push edx }
	__asm { call dword ptr [g_00e10314] }
	__asm { ret }
	__asm { L_00a2f0aa: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10314] }
	__asm { ret }
}

extern "C" char g_00e10314[];
// FUNCTION: ROBLOXSTUDIO 0x00a2f0c0
extern "C" __declspec(naked) void asm_00a2f0c0()
{
	__asm { mov eax, dword ptr [ecx + 0x68] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00a2f0da }
	__asm { mov edx, dword ptr [ecx + 0x50] }
	__asm { mov eax, dword ptr [ecx + 0x58] }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { push edx }
	__asm { call dword ptr [g_00e10314] }
	__asm { ret }
	__asm { L_00a2f0da: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10314] }
	__asm { ret }
}

extern "C" void fn_00a34020();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a33f40
extern "C" __declspec(naked) void asm_00a33f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00a33f5c }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00a34020 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a33f5c: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34020();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a34330
extern "C" __declspec(naked) void asm_00a34330()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00a34349 }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00a34020 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a34349: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00a34c10();
// FUNCTION: ROBLOXSTUDIO 0x00a36080
extern "C" __declspec(naked) void asm_00a36080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a34c10 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [eax + 8], 8 }
	__asm { je L_00a3609b }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3609b: }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
// FUNCTION: ROBLOXSTUDIO 0x00a360d0
extern "C" __declspec(naked) void asm_00a360d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a34c10 }
	__asm { add esp, 8 }
	__asm { cmp eax, 0xea7e68 }
	__asm { jne L_00a360ed }
	__asm { or eax, 0xffffffff }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a360ed: }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a36100
extern "C" __declspec(naked) void asm_00a36100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, -1 }
	__asm { jne L_00a36112 }
	__asm { mov eax, 0xea6ea0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a36112: }
	__asm { mov eax, dword ptr [eax*4 + 0xee1bc0] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a379f0();
// FUNCTION: ROBLOXSTUDIO 0x00a378a0
extern "C" __declspec(naked) void asm_00a378a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { cmp ecx, 4 }
	__asm { je L_00a378b3 }
	__asm { cmp ecx, 3 }
	__asm { jne L_00a378b6 }
	__asm { L_00a378b3: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { L_00a378b6: }
	__asm { mov dword ptr [ebp + 0x10], 0xea6ff4 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a379f0 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a38320
extern "C" __declspec(naked) void asm_00a38320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { test edx, edx }
	__asm { jne L_00a38331 }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a38331: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34d60();
extern "C" void fn_00a38a50();
// FUNCTION: ROBLOXSTUDIO 0x00a38930
extern "C" __declspec(naked) void asm_00a38930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a34d60 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00a38952 }
	__asm { mov dword ptr [ebp + 0xc], 0xea70f8 }
	__asm { pop ebp }
	__asm { jmp fn_00a38a50 }
	__asm { L_00a38952: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34710();
extern "C" void fn_00a34d00();
// FUNCTION: ROBLOXSTUDIO 0x00a39020
extern "C" __declspec(naked) void asm_00a39020()
{
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0xa38350 }
	__asm { call fn_00a34710 }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { je L_00a39046 }
	__asm { push 0xa39370 }
	__asm { push esi }
	__asm { call fn_00a34d00 }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { L_00a39046: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00a43480
extern "C" __declspec(naked) void asm_00a43480()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x11efd20 }
	__asm { jne L_00a4348f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_00a4348f: }
	__asm { push eax }
	__asm { mov ecx, 0x11efd20 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00a434a0
extern "C" __declspec(naked) void asm_00a434a0()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x11e6648 }
	__asm { jne L_00a434af }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_00a434af: }
	__asm { push eax }
	__asm { mov ecx, 0x11e6648 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00a434c0
extern "C" __declspec(naked) void asm_00a434c0()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12105f0 }
	__asm { jne L_00a434cf }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_00a434cf: }
	__asm { push eax }
	__asm { mov ecx, 0x12105f0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00a434e0
extern "C" __declspec(naked) void asm_00a434e0()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x1210668 }
	__asm { jne L_00a434ef }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_00a434ef: }
	__asm { push eax }
	__asm { mov ecx, 0x1210668 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00a43500
extern "C" __declspec(naked) void asm_00a43500()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x11efd48 }
	__asm { jne L_00a4350f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_00a4350f: }
	__asm { push eax }
	__asm { mov ecx, 0x11efd48 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00a43520
extern "C" __declspec(naked) void asm_00a43520()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x124ebbc }
	__asm { jne L_00a4352f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_00a4352f: }
	__asm { push eax }
	__asm { mov ecx, 0x124ebbc }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" void fn_00a35690();
// FUNCTION: ROBLOXSTUDIO 0x00a44210
extern "C" __declspec(naked) void asm_00a44210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { jb L_00a44221 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00a44221: }
	__asm { push edx }
	__asm { push eax }
	__asm { push dword ptr [ecx] }
	__asm { call fn_00a35690 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a45760
extern "C" __declspec(naked) void asm_00a45760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { sar ecx, 3 }
	__asm { and ecx, 0x1f }
	__asm { je L_00a45779 }
	__asm { and eax, 7 }
	__asm { add eax, 8 }
	__asm { dec ecx }
	__asm { shl eax, cl }
	__asm { L_00a45779: }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a457b0
extern "C" __declspec(naked) void asm_00a457b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { cmp eax, 0x100 }
	__asm { jb L_00a457cd }
	__asm { L_00a457c0: }
	__asm { shr eax, 8 }
	__asm { add ecx, 8 }
	__asm { cmp eax, 0x100 }
	__asm { jae L_00a457c0 }
	__asm { L_00a457cd: }
	__asm { movzx eax, byte ptr [eax + 0xea7e80] }
	__asm { add eax, ecx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a48550
extern "C" __declspec(naked) void asm_00a48550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ecx + 0x34] }
	__asm { mov dword ptr [ecx + 0x34], eax }
	__asm { je L_00a48569 }
	__asm { test eax, eax }
	__asm { jne L_00a48569 }
	__asm { mov dword ptr [ecx + 0x20], 0x41300000 }
	__asm { L_00a48569: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a56010
extern "C" __declspec(naked) void asm_00a56010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp ecx, 2 }
	__asm { ja L_00a56024 }
	__asm { mov eax, 1 }
	__asm { shl eax, cl }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a56024: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a57d30
extern "C" __declspec(naked) void asm_00a57d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x121], al }
	__asm { je L_00a57d51 }
	__asm { mov byte ptr [ecx + 0x121], al }
	__asm { mov dword ptr [ebp + 8], 0x1307ce8 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a57d51: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a60000();
// FUNCTION: ROBLOXSTUDIO 0x00a5ffd0
extern "C" __declspec(naked) void asm_00a5ffd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a5ffe4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a60000 }
	__asm { L_00a5ffe4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1251150 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a653a0
extern "C" __declspec(naked) void asm_00a653a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { test edx, edx }
	__asm { js L_00a653b9 }
	__asm { cmp edx, 0x200 }
	__asm { jae L_00a653b9 }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { mov byte ptr [edx + ecx + 0x38], al }
	__asm { L_00a653b9: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a6c1d0();
// FUNCTION: ROBLOXSTUDIO 0x00a6c140
extern "C" __declspec(naked) void asm_00a6c140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a6c154 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a6c1d0 }
	__asm { L_00a6c154: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1253a18 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a6c2c0();
// FUNCTION: ROBLOXSTUDIO 0x00a6c170
extern "C" __declspec(naked) void asm_00a6c170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a6c184 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a6c2c0 }
	__asm { L_00a6c184: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1253c78 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a6c3b0();
// FUNCTION: ROBLOXSTUDIO 0x00a6c1a0
extern "C" __declspec(naked) void asm_00a6c1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a6c1b4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a6c3b0 }
	__asm { L_00a6c1b4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1253b40 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a6f440
extern "C" __declspec(naked) void asm_00a6f440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x84], eax }
	__asm { je L_00a6f461 }
	__asm { mov dword ptr [ecx + 0x84], eax }
	__asm { mov dword ptr [ebp + 8], 0x130880c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a6f461: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a6f470
extern "C" __declspec(naked) void asm_00a6f470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x88], eax }
	__asm { je L_00a6f491 }
	__asm { mov dword ptr [ecx + 0x88], eax }
	__asm { mov dword ptr [ebp + 8], 0x1308840 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a6f491: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a6f4a0
extern "C" __declspec(naked) void asm_00a6f4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x65], al }
	__asm { je L_00a6f4bb }
	__asm { mov byte ptr [ecx + 0x65], al }
	__asm { mov dword ptr [ebp + 8], 0x13088a0 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a6f4bb: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012339a0[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a709d0
extern "C" __declspec(naked) void asm_00a709d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_012339a0] }
	__asm { je L_00a709f0 }
	__asm { mov byte ptr [g_012339a0], al }
	__asm { mov dword ptr [ebp + 8], 0x1308c2c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a709f0: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01303178[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a70a00
extern "C" __declspec(naked) void asm_00a70a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [g_01303178] }
	__asm { je L_00a70a20 }
	__asm { mov dword ptr [g_01303178], eax }
	__asm { mov dword ptr [ebp + 8], 0x1308c84 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a70a20: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fb0eb[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a70a30
extern "C" __declspec(naked) void asm_00a70a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_012fb0eb] }
	__asm { je L_00a70a50 }
	__asm { mov byte ptr [g_012fb0eb], al }
	__asm { mov dword ptr [ebp + 8], 0x1308acc }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a70a50: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fce30[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a70a60
extern "C" __declspec(naked) void asm_00a70a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_012fce30] }
	__asm { je L_00a70a80 }
	__asm { mov byte ptr [g_012fce30], al }
	__asm { mov dword ptr [ebp + 8], 0x1308c58 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a70a80: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc3fb[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a70a90
extern "C" __declspec(naked) void asm_00a70a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_012fc3fb] }
	__asm { je L_00a70ab0 }
	__asm { mov byte ptr [g_012fc3fb], al }
	__asm { mov dword ptr [ebp + 8], 0x1308ce4 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a70ab0: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fb0ed[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a70ac0
extern "C" __declspec(naked) void asm_00a70ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_012fb0ed] }
	__asm { je L_00a70ae0 }
	__asm { mov byte ptr [g_012fb0ed], al }
	__asm { mov dword ptr [ebp + 8], 0x1308998 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a70ae0: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fb0f2[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a70af0
extern "C" __declspec(naked) void asm_00a70af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_012fb0f2] }
	__asm { je L_00a70b10 }
	__asm { mov byte ptr [g_012fb0f2], al }
	__asm { mov dword ptr [ebp + 8], 0x1308bd4 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a70b10: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fb0ec[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a70b20
extern "C" __declspec(naked) void asm_00a70b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_012fb0ec] }
	__asm { je L_00a70b40 }
	__asm { mov byte ptr [g_012fb0ec], al }
	__asm { mov dword ptr [ebp + 8], 0x1308af8 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a70b40: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fb0e8[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a70b50
extern "C" __declspec(naked) void asm_00a70b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_012fb0e8] }
	__asm { je L_00a70b70 }
	__asm { mov byte ptr [g_012fb0e8], al }
	__asm { mov dword ptr [ebp + 8], 0x1308b50 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a70b70: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01300d73[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a70b80
extern "C" __declspec(naked) void asm_00a70b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_01300d73] }
	__asm { je L_00a70ba0 }
	__asm { mov byte ptr [g_01300d73], al }
	__asm { mov dword ptr [ebp + 8], 0x1308a74 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a70ba0: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01300d74[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a70bb0
extern "C" __declspec(naked) void asm_00a70bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_01300d74] }
	__asm { je L_00a70bd0 }
	__asm { mov byte ptr [g_01300d74], al }
	__asm { mov dword ptr [ebp + 8], 0x1308aa0 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a70bd0: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fb0e9[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a70be0
extern "C" __declspec(naked) void asm_00a70be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_012fb0e9] }
	__asm { je L_00a70c00 }
	__asm { mov byte ptr [g_012fb0e9], al }
	__asm { mov dword ptr [ebp + 8], 0x1308b7c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a70c00: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fb0f1[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a70c10
extern "C" __declspec(naked) void asm_00a70c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_012fb0f1] }
	__asm { je L_00a70c30 }
	__asm { mov byte ptr [g_012fb0f1], al }
	__asm { mov dword ptr [ebp + 8], 0x1308ba8 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a70c30: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_013032e0[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a70c40
extern "C" __declspec(naked) void asm_00a70c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_013032e0] }
	__asm { je L_00a70c60 }
	__asm { mov byte ptr [g_013032e0], al }
	__asm { mov dword ptr [ebp + 8], 0x1308a1c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a70c60: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fb0ee[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a70c70
extern "C" __declspec(naked) void asm_00a70c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_012fb0ee] }
	__asm { je L_00a70c90 }
	__asm { mov byte ptr [g_012fb0ee], al }
	__asm { mov dword ptr [ebp + 8], 0x13089c4 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a70c90: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fb0f3[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a70ca0
extern "C" __declspec(naked) void asm_00a70ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_012fb0f3] }
	__asm { je L_00a70cc0 }
	__asm { mov byte ptr [g_012fb0f3], al }
	__asm { mov dword ptr [ebp + 8], 0x1308b24 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a70cc0: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fb0f0[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a70cd0
extern "C" __declspec(naked) void asm_00a70cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_012fb0f0] }
	__asm { je L_00a70cf0 }
	__asm { mov byte ptr [g_012fb0f0], al }
	__asm { mov dword ptr [ebp + 8], 0x1308c00 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a70cf0: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fb0ef[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a70d00
extern "C" __declspec(naked) void asm_00a70d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_012fb0ef] }
	__asm { je L_00a70d20 }
	__asm { mov byte ptr [g_012fb0ef], al }
	__asm { mov dword ptr [ebp + 8], 0x13089f0 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a70d20: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01300d71[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a70d30
extern "C" __declspec(naked) void asm_00a70d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_01300d71] }
	__asm { je L_00a70d50 }
	__asm { mov byte ptr [g_01300d71], al }
	__asm { mov dword ptr [ebp + 8], 0x1308a48 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a70d50: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a7b650();
// FUNCTION: ROBLOXSTUDIO 0x00a7b520
extern "C" __declspec(naked) void asm_00a7b520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a7b534 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a7b650 }
	__asm { L_00a7b534: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1257fb0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a7b6c0();
// FUNCTION: ROBLOXSTUDIO 0x00a7b550
extern "C" __declspec(naked) void asm_00a7b550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a7b564 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a7b6c0 }
	__asm { L_00a7b564: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1257e00 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a7b7b0();
// FUNCTION: ROBLOXSTUDIO 0x00a7b5c0
extern "C" __declspec(naked) void asm_00a7b5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a7b5d4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a7b7b0 }
	__asm { L_00a7b5d4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1257b50 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a7b8a0();
// FUNCTION: ROBLOXSTUDIO 0x00a7b5f0
extern "C" __declspec(naked) void asm_00a7b5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a7b604 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a7b8a0 }
	__asm { L_00a7b604: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1257ca0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a7b990();
// FUNCTION: ROBLOXSTUDIO 0x00a7b620
extern "C" __declspec(naked) void asm_00a7b620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a7b634 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a7b990 }
	__asm { L_00a7b634: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1257ea8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a79ad0();
// FUNCTION: ROBLOXSTUDIO 0x00a7c1e0
extern "C" __declspec(naked) void asm_00a7c1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ecx + 0x8c] }
	__asm { jne L_00a7c1fb }
	__asm { dec dword ptr [ecx + 0x90] }
	__asm { jne L_00a7c1fb }
	__asm { call fn_00a79ad0 }
	__asm { L_00a7c1fb: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a8df60
extern "C" __declspec(naked) void asm_00a8df60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x7c], eax }
	__asm { je L_00a8df7b }
	__asm { mov dword ptr [ecx + 0x7c], eax }
	__asm { mov dword ptr [ebp + 8], 0x13099f8 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a8df7b: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a8e100
extern "C" __declspec(naked) void asm_00a8e100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x88], eax }
	__asm { je L_00a8e121 }
	__asm { mov dword ptr [ecx + 0x88], eax }
	__asm { mov dword ptr [ebp + 8], 0x1309a94 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a8e121: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a8e130
extern "C" __declspec(naked) void asm_00a8e130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x84], eax }
	__asm { je L_00a8e151 }
	__asm { mov dword ptr [ecx + 0x84], eax }
	__asm { mov dword ptr [ebp + 8], 0x1309a60 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a8e151: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a8e2d0
extern "C" __declspec(naked) void asm_00a8e2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x80], eax }
	__asm { je L_00a8e2f1 }
	__asm { mov dword ptr [ecx + 0x80], eax }
	__asm { mov dword ptr [ebp + 8], 0x1309a2c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a8e2f1: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a8ef90
extern "C" __declspec(naked) void asm_00a8ef90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [eax + 0x70], 0 }
	__asm { je L_00a8efa2 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a8efa2: }
	__asm { mov eax, dword ptr [eax + 0x6c] }
	__asm { cmp eax, dword ptr [ecx + 0x258] }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a8f250();
// FUNCTION: ROBLOXSTUDIO 0x00a8f220
extern "C" __declspec(naked) void asm_00a8f220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a8f234 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a8f250 }
	__asm { L_00a8f234: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x125d1d8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a90450();
extern "C" void fn_00a90670();
// FUNCTION: ROBLOXSTUDIO 0x00a90540
extern "C" __declspec(naked) void asm_00a90540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a90670 }
	__asm { test eax, eax }
	__asm { je L_00a90557 }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_00a90450 }
	__asm { L_00a90557: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a90b60();
// FUNCTION: ROBLOXSTUDIO 0x00a90b30
extern "C" __declspec(naked) void asm_00a90b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a90b44 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a90b60 }
	__asm { L_00a90b44: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x125d528 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a9c2e0
extern "C" __declspec(naked) void asm_00a9c2e0()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00a9c2ee }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { pop ecx }
	__asm { L_00a9c2ee: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a9c450
extern "C" __declspec(naked) void asm_00a9c450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { je L_00a9c46e }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add ecx, 8 }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [eax] }
	__asm { L_00a9c46e: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a9c930();
// FUNCTION: ROBLOXSTUDIO 0x00a9c8d0
extern "C" __declspec(naked) void asm_00a9c8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a9c8e4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a9c930 }
	__asm { L_00a9c8e4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x125f928 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a9ca20();
// FUNCTION: ROBLOXSTUDIO 0x00a9c900
extern "C" __declspec(naked) void asm_00a9c900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a9c914 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a9ca20 }
	__asm { L_00a9c914: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x125fa00 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a9d410
extern "C" __declspec(naked) void asm_00a9d410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x170], eax }
	__asm { je L_00a9d42e }
	__asm { push 0x130ac64 }
	__asm { mov dword ptr [ecx + 0x170], eax }
	__asm { call fn_007b4f50 }
	__asm { L_00a9d42e: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a9d690
extern "C" __declspec(naked) void asm_00a9d690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x16c], eax }
	__asm { je L_00a9d6b1 }
	__asm { mov dword ptr [ecx + 0x16c], eax }
	__asm { mov dword ptr [ebp + 8], 0x130ac30 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a9d6b1: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00aa0d70();
// FUNCTION: ROBLOXSTUDIO 0x00aa0d10
extern "C" __declspec(naked) void asm_00aa0d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00aa0d24 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00aa0d70 }
	__asm { L_00aa0d24: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1261860 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00aa0e60();
// FUNCTION: ROBLOXSTUDIO 0x00aa0d40
extern "C" __declspec(naked) void asm_00aa0d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00aa0d54 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00aa0e60 }
	__asm { L_00aa0d54: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1261940 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00aa1940
extern "C" __declspec(naked) void asm_00aa1940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x16c], eax }
	__asm { je L_00aa195e }
	__asm { push 0x130aec8 }
	__asm { mov dword ptr [ecx + 0x16c], eax }
	__asm { call fn_007b4f50 }
	__asm { L_00aa195e: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00aa8b60();
// FUNCTION: ROBLOXSTUDIO 0x00aa8b00
extern "C" __declspec(naked) void asm_00aa8b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00aa8b14 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00aa8b60 }
	__asm { L_00aa8b14: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1263b60 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00aa8ca0();
// FUNCTION: ROBLOXSTUDIO 0x00aa8b30
extern "C" __declspec(naked) void asm_00aa8b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00aa8b44 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00aa8ca0 }
	__asm { L_00aa8b44: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1263c08 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00aa9ee0
extern "C" __declspec(naked) void asm_00aa9ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x230], al }
	__asm { je L_00aa9f01 }
	__asm { mov byte ptr [ecx + 0x230], al }
	__asm { mov dword ptr [ebp + 8], 0x130b1bc }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00aa9f01: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00aacbd0();
// FUNCTION: ROBLOXSTUDIO 0x00aacba0
extern "C" __declspec(naked) void asm_00aacba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00aacbb4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00aacbd0 }
	__asm { L_00aacbb4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12663f0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00aad940
extern "C" __declspec(naked) void asm_00aad940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x94], eax }
	__asm { je L_00aad961 }
	__asm { mov dword ptr [ecx + 0x94], eax }
	__asm { mov dword ptr [ebp + 8], 0x130b5cc }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00aad961: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00aae550();
// FUNCTION: ROBLOXSTUDIO 0x00aae530
extern "C" __declspec(naked) void asm_00aae530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [eax + 0x70], 0 }
	__asm { je L_00aae542 }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00aae542: }
	__asm { push dword ptr [eax + 0x6c] }
	__asm { call fn_00aae550 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ac0810
extern "C" __declspec(naked) void asm_00ac0810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { je L_00ac082d }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { add ecx, 8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [eax] }
	__asm { L_00ac082d: }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00ac1320
extern "C" __declspec(naked) void asm_00ac1320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [ecx + 0xe3c], 0 }
	__asm { mov byte ptr [ebp - 1], 1 }
	__asm { je L_00ac133b }
	__asm { mov al, byte ptr [ecx + 0xe3d] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ac133b: }
	__asm { lea eax, [ebp - 1] }
	__asm { mov al, byte ptr [eax] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac3060();
// FUNCTION: ROBLOXSTUDIO 0x00ac2d20
extern "C" __declspec(naked) void asm_00ac2d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ac2d34 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ac3060 }
	__asm { L_00ac2d34: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12681e8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac30c0();
// FUNCTION: ROBLOXSTUDIO 0x00ac2d90
extern "C" __declspec(naked) void asm_00ac2d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ac2da4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ac30c0 }
	__asm { L_00ac2da4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1269030 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac31a0();
// FUNCTION: ROBLOXSTUDIO 0x00ac2e00
extern "C" __declspec(naked) void asm_00ac2e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ac2e14 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ac31a0 }
	__asm { L_00ac2e14: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1267b48 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac3250();
// FUNCTION: ROBLOXSTUDIO 0x00ac2e30
extern "C" __declspec(naked) void asm_00ac2e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ac2e44 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ac3250 }
	__asm { L_00ac2e44: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1267c60 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac3300();
// FUNCTION: ROBLOXSTUDIO 0x00ac2e60
extern "C" __declspec(naked) void asm_00ac2e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ac2e74 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ac3300 }
	__asm { L_00ac2e74: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1268f10 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac3360();
// FUNCTION: ROBLOXSTUDIO 0x00ac2e90
extern "C" __declspec(naked) void asm_00ac2e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ac2ea4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ac3360 }
	__asm { L_00ac2ea4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1268480 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac3450();
// FUNCTION: ROBLOXSTUDIO 0x00ac2ec0
extern "C" __declspec(naked) void asm_00ac2ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ac2ed4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ac3450 }
	__asm { L_00ac2ed4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1268e10 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac3540();
// FUNCTION: ROBLOXSTUDIO 0x00ac2ef0
extern "C" __declspec(naked) void asm_00ac2ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ac2f04 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ac3540 }
	__asm { L_00ac2f04: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1268d20 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac3630();
// FUNCTION: ROBLOXSTUDIO 0x00ac2f20
extern "C" __declspec(naked) void asm_00ac2f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ac2f34 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ac3630 }
	__asm { L_00ac2f34: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1268c10 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac3720();
// FUNCTION: ROBLOXSTUDIO 0x00ac2f50
extern "C" __declspec(naked) void asm_00ac2f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ac2f64 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ac3720 }
	__asm { L_00ac2f64: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12686f8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac3810();
// FUNCTION: ROBLOXSTUDIO 0x00ac2f80
extern "C" __declspec(naked) void asm_00ac2f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ac2f94 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ac3810 }
	__asm { L_00ac2f94: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1268338 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac3900();
// FUNCTION: ROBLOXSTUDIO 0x00ac2fb0
extern "C" __declspec(naked) void asm_00ac2fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ac2fc4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ac3900 }
	__asm { L_00ac2fc4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1268848 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac8630();
extern "C" void fn_00ac8ab0();
// FUNCTION: ROBLOXSTUDIO 0x00ac8980
extern "C" __declspec(naked) void asm_00ac8980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { cmp byte ptr [eax + 0x386], 0 }
	__asm { je L_00ac8999 }
	__asm { call fn_00ac8630 }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ac8999: }
	__asm { call fn_00ac8ab0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00acd7d0
extern "C" __declspec(naked) void asm_00acd7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00acd7e2 }
	__asm { add ecx, 0x64 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax] }
	__asm { L_00acd7e2: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00ad3c40();
// FUNCTION: ROBLOXSTUDIO 0x00ad3be0
extern "C" __declspec(naked) void asm_00ad3be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ad3bf4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ad3c40 }
	__asm { L_00ad3bf4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1272620 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ad3d30();
// FUNCTION: ROBLOXSTUDIO 0x00ad3c10
extern "C" __declspec(naked) void asm_00ad3c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ad3c24 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ad3d30 }
	__asm { L_00ad3c24: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1272518 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ae1e20();
// FUNCTION: ROBLOXSTUDIO 0x00ae1df0
extern "C" __declspec(naked) void asm_00ae1df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ae1e04 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ae1e20 }
	__asm { L_00ae1e04: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1274de8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00ae7680
extern "C" __declspec(naked) void asm_00ae7680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [ecx + 0x36c] }
	__asm { je L_00ae76a1 }
	__asm { mov byte ptr [ecx + 0x36c], al }
	__asm { mov dword ptr [ebp + 8], 0x130c4fc }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00ae76a1: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00aeb740();
// FUNCTION: ROBLOXSTUDIO 0x00aeb6b0
extern "C" __declspec(naked) void asm_00aeb6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00aeb6c4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00aeb740 }
	__asm { L_00aeb6c4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1276170 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00aeb830();
// FUNCTION: ROBLOXSTUDIO 0x00aeb6e0
extern "C" __declspec(naked) void asm_00aeb6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00aeb6f4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00aeb830 }
	__asm { L_00aeb6f4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1275f30 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00aeb920();
// FUNCTION: ROBLOXSTUDIO 0x00aeb710
extern "C" __declspec(naked) void asm_00aeb710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00aeb724 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00aeb920 }
	__asm { L_00aeb724: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1276040 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00aefe60
extern "C" __declspec(naked) void asm_00aefe60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xebf9a0 }
	__asm { je L_00aefe7b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00aefe7b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00af1230
extern "C" __declspec(naked) void asm_00af1230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + eax*4 - 0x10] }
	__asm { test eax, eax }
	__asm { je L_00af1245 }
	__asm { add eax, 8 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00af1245: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00afae00();
// FUNCTION: ROBLOXSTUDIO 0x00af5960
extern "C" __declspec(naked) void asm_00af5960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { call fn_00afae00 }
	__asm { lea edx, [eax + 0xe] }
	__asm { mov word ptr [eax + 0xc], 0 }
	__asm { test edx, edx }
	__asm { je L_00af597c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov cl, byte ptr [ecx] }
	__asm { mov byte ptr [edx], cl }
	__asm { L_00af597c: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00afdf40();
// FUNCTION: ROBLOXSTUDIO 0x00afdf10
extern "C" __declspec(naked) void asm_00afdf10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00afdf24 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00afdf40 }
	__asm { L_00afdf24: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1278c18 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}
