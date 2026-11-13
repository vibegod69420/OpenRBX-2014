// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10194[];
extern "C" void fn_008f4b90();
extern "C" void fn_00b88d60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f5110
extern "C" __declspec(naked) void asm_008f5110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0x100] }
	__asm { mov dword ptr [ecx], 0xe74200 }
	__asm { call fn_008f4b90 }
	__asm { xor ecx, ecx }
	__asm { lea eax, [esi + 0xfc] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_008f513c }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_008f513c: }
	__asm { mov ecx, esi }
	__asm { call fn_00b88d60 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_008f5152 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f5152: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008fcdb0
extern "C" __declspec(naked) void asm_008fcdb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008fcddd }
	__asm { mov dword ptr [eax], 0xe75c7c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008fcddf }
	__asm { L_008fcddd: }
	__asm { xor eax, eax }
	__asm { L_008fcddf: }
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
// FUNCTION: ROBLOXSTUDIO 0x008fce00
extern "C" __declspec(naked) void asm_008fce00()
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
	__asm { je L_008fce3b }
	__asm { mov dword ptr [edx], 0xe75d1c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008fce3d }
	__asm { L_008fce3b: }
	__asm { xor edx, edx }
	__asm { L_008fce3d: }
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
// FUNCTION: ROBLOXSTUDIO 0x008fce60
extern "C" __declspec(naked) void asm_008fce60()
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
	__asm { je L_008fce9b }
	__asm { mov dword ptr [edx], 0xe75dd0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008fce9d }
	__asm { L_008fce9b: }
	__asm { xor edx, edx }
	__asm { L_008fce9d: }
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
// FUNCTION: ROBLOXSTUDIO 0x008fcec0
extern "C" __declspec(naked) void asm_008fcec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008fceed }
	__asm { mov dword ptr [eax], 0xe75ca4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008fceef }
	__asm { L_008fceed: }
	__asm { xor eax, eax }
	__asm { L_008fceef: }
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
// FUNCTION: ROBLOXSTUDIO 0x008fcf10
extern "C" __declspec(naked) void asm_008fcf10()
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
	__asm { je L_008fcf4b }
	__asm { mov dword ptr [edx], 0xe75de4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008fcf4d }
	__asm { L_008fcf4b: }
	__asm { xor edx, edx }
	__asm { L_008fcf4d: }
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
// FUNCTION: ROBLOXSTUDIO 0x008fcf70
extern "C" __declspec(naked) void asm_008fcf70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008fcf9d }
	__asm { mov dword ptr [eax], 0xe75ce0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008fcf9f }
	__asm { L_008fcf9d: }
	__asm { xor eax, eax }
	__asm { L_008fcf9f: }
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
// FUNCTION: ROBLOXSTUDIO 0x008fcfc0
extern "C" __declspec(naked) void asm_008fcfc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008fcfed }
	__asm { mov dword ptr [eax], 0xe75c90 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008fcfef }
	__asm { L_008fcfed: }
	__asm { xor eax, eax }
	__asm { L_008fcfef: }
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
// FUNCTION: ROBLOXSTUDIO 0x008fd010
extern "C" __declspec(naked) void asm_008fd010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008fd03d }
	__asm { mov dword ptr [eax], 0xe75ccc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008fd03f }
	__asm { L_008fd03d: }
	__asm { xor eax, eax }
	__asm { L_008fd03f: }
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
// FUNCTION: ROBLOXSTUDIO 0x008fd060
extern "C" __declspec(naked) void asm_008fd060()
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
	__asm { je L_008fd09b }
	__asm { mov dword ptr [edx], 0xe75dbc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008fd09d }
	__asm { L_008fd09b: }
	__asm { xor edx, edx }
	__asm { L_008fd09d: }
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
// FUNCTION: ROBLOXSTUDIO 0x008fd0c0
extern "C" __declspec(naked) void asm_008fd0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008fd0ed }
	__asm { mov dword ptr [eax], 0xe75cb8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008fd0ef }
	__asm { L_008fd0ed: }
	__asm { xor eax, eax }
	__asm { L_008fd0ef: }
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
// FUNCTION: ROBLOXSTUDIO 0x008fd110
extern "C" __declspec(naked) void asm_008fd110()
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
	__asm { je L_008fd14b }
	__asm { mov dword ptr [edx], 0xe75da8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008fd14d }
	__asm { L_008fd14b: }
	__asm { xor edx, edx }
	__asm { L_008fd14d: }
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
// FUNCTION: ROBLOXSTUDIO 0x008fd170
extern "C" __declspec(naked) void asm_008fd170()
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
	__asm { je L_008fd1ab }
	__asm { mov dword ptr [edx], 0xe75d6c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008fd1ad }
	__asm { L_008fd1ab: }
	__asm { xor edx, edx }
	__asm { L_008fd1ad: }
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
// FUNCTION: ROBLOXSTUDIO 0x008fd1d0
extern "C" __declspec(naked) void asm_008fd1d0()
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
	__asm { je L_008fd20b }
	__asm { mov dword ptr [edx], 0xe75d44 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008fd20d }
	__asm { L_008fd20b: }
	__asm { xor edx, edx }
	__asm { L_008fd20d: }
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
// FUNCTION: ROBLOXSTUDIO 0x008fd230
extern "C" __declspec(naked) void asm_008fd230()
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
	__asm { je L_008fd26b }
	__asm { mov dword ptr [edx], 0xe75d58 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008fd26d }
	__asm { L_008fd26b: }
	__asm { xor edx, edx }
	__asm { L_008fd26d: }
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
// FUNCTION: ROBLOXSTUDIO 0x008fd290
extern "C" __declspec(naked) void asm_008fd290()
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
	__asm { je L_008fd2cb }
	__asm { mov dword ptr [edx], 0xe75d30 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008fd2cd }
	__asm { L_008fd2cb: }
	__asm { xor edx, edx }
	__asm { L_008fd2cd: }
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
// FUNCTION: ROBLOXSTUDIO 0x008fd2f0
extern "C" __declspec(naked) void asm_008fd2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008fd31d }
	__asm { mov dword ptr [eax], 0xe75cf4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008fd31f }
	__asm { L_008fd31d: }
	__asm { xor eax, eax }
	__asm { L_008fd31f: }
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
// FUNCTION: ROBLOXSTUDIO 0x008fd340
extern "C" __declspec(naked) void asm_008fd340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008fd36d }
	__asm { mov dword ptr [eax], 0xe75d08 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008fd36f }
	__asm { L_008fd36d: }
	__asm { xor eax, eax }
	__asm { L_008fd36f: }
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
// FUNCTION: ROBLOXSTUDIO 0x008fd390
extern "C" __declspec(naked) void asm_008fd390()
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
	__asm { je L_008fd3cb }
	__asm { mov dword ptr [edx], 0xe75d94 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008fd3cd }
	__asm { L_008fd3cb: }
	__asm { xor edx, edx }
	__asm { L_008fd3cd: }
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
// FUNCTION: ROBLOXSTUDIO 0x008fd3f0
extern "C" __declspec(naked) void asm_008fd3f0()
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
	__asm { je L_008fd42b }
	__asm { mov dword ptr [edx], 0xe75d80 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008fd42d }
	__asm { L_008fd42b: }
	__asm { xor edx, edx }
	__asm { L_008fd42d: }
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
extern "C" void fn_00d0c250();
// FUNCTION: ROBLOXSTUDIO 0x008fec60
extern "C" __declspec(naked) void asm_008fec60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { call fn_00d0c250 }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { mov esi, dword ptr [eax + 0x28] }
	__asm { jb L_008fec83 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008fec83: }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xf }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { jb L_008feca6 }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008feca6: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00d0c250();
// FUNCTION: ROBLOXSTUDIO 0x008fee50
extern "C" __declspec(naked) void asm_008fee50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { call fn_00d0c250 }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { jb L_008fee73 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008fee73: }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xf }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { jb L_008fee96 }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008fee96: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00d0c250();
// FUNCTION: ROBLOXSTUDIO 0x008feea0
extern "C" __declspec(naked) void asm_008feea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { call fn_00d0c250 }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { jb L_008feec3 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008feec3: }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xf }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { jb L_008feee6 }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008feee6: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00d0c250();
// FUNCTION: ROBLOXSTUDIO 0x00900390
extern "C" __declspec(naked) void asm_00900390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { call fn_00d0c250 }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { mov esi, dword ptr [eax + 0x24] }
	__asm { jb L_009003b3 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009003b3: }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xf }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { jb L_009003d6 }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009003d6: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00d0c250();
// FUNCTION: ROBLOXSTUDIO 0x00900490
extern "C" __declspec(naked) void asm_00900490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { call fn_00d0c250 }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { mov esi, dword ptr [eax] }
	__asm { jb L_009004b2 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009004b2: }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xf }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { jb L_009004d5 }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009004d5: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00905d60
extern "C" __declspec(naked) void asm_00905d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { je L_00905d9e }
	__asm { mov edi, edi }
	__asm { L_00905d70: }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call dword ptr [ebp + 0x10] }
	__asm { test al, al }
	__asm { je L_00905d91 }
	__asm { inc esi }
	__asm { L_00905d91: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_00905d70 }
	__asm { L_00905d9e: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0048eab0();
extern "C" void fn_00905d60();
// FUNCTION: ROBLOXSTUDIO 0x00907410
extern "C" __declspec(naked) void asm_00907410()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { push 0x907150 }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { call fn_00905d60 }
	__asm { add esp, 0x10 }
	__asm { mov ecx, esi }
	__asm { mov edi, eax }
	__asm { call fn_0048eab0 }
	__asm { test al, al }
	__asm { je L_0090743f }
	__asm { cmp edi, dword ptr [esi + 0x1c] }
	__asm { jne L_0090743f }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0090743f: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00907b70
extern "C" __declspec(naked) void asm_00907b70()
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
	__asm { je L_00907bab }
	__asm { mov dword ptr [edx], 0xe7717c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00907bad }
	__asm { L_00907bab: }
	__asm { xor edx, edx }
	__asm { L_00907bad: }
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
// FUNCTION: ROBLOXSTUDIO 0x00909280
extern "C" __declspec(naked) void asm_00909280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009092ad }
	__asm { mov dword ptr [eax], 0xe77aec }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_009092af }
	__asm { L_009092ad: }
	__asm { xor eax, eax }
	__asm { L_009092af: }
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
// FUNCTION: ROBLOXSTUDIO 0x009092d0
extern "C" __declspec(naked) void asm_009092d0()
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
	__asm { je L_0090930b }
	__asm { mov dword ptr [edx], 0xe77ad8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0090930d }
	__asm { L_0090930b: }
	__asm { xor edx, edx }
	__asm { L_0090930d: }
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

extern "C" void fn_007b4a10();
extern "C" void fn_007b6490();
extern "C" void fn_00cf67f8();
extern "C" void fn_00d08c90();
// FUNCTION: ROBLOXSTUDIO 0x0090bf30
extern "C" __declspec(naked) void asm_0090bf30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_0090bf47 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_007b6490 }
	__asm { L_0090bf47: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_007b4a10 }
	__asm { push 0 }
	__asm { push 0x11edc30 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0090bf73 }
	__asm { mov ecx, dword ptr [edi + 0x70] }
	__asm { push eax }
	__asm { call fn_00d08c90 }
	__asm { L_0090bf73: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4a80();
extern "C" void fn_00cf67f8();
extern "C" void fn_00d08dc0();
// FUNCTION: ROBLOXSTUDIO 0x0090bf80
extern "C" __declspec(naked) void asm_0090bf80()
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
	__asm { je L_0090bfaf }
	__asm { mov ecx, dword ptr [esi + 0x70] }
	__asm { push eax }
	__asm { call fn_00d08dc0 }
	__asm { L_0090bfaf: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_007b4a80 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0090f5f0
extern "C" __declspec(naked) void asm_0090f5f0()
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
	__asm { je L_0090f625 }
	__asm { mov dword ptr [edx], 0xe78a60 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { jmp L_0090f627 }
	__asm { L_0090f625: }
	__asm { xor edx, edx }
	__asm { L_0090f627: }
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

extern "C" void fn_0090f700();
// FUNCTION: ROBLOXSTUDIO 0x0090faf0
extern "C" __declspec(naked) void asm_0090faf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_0090fb0d }
	__asm { mov dword ptr [esi + 0x68], 0xeb86d4 }
	__asm { mov dword ptr [esi + 0xb4], 0xe7c5a8 }
	__asm { L_0090fb0d: }
	__asm { push 0 }
	__asm { call fn_0090f700 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe7869c }
	__asm { mov dword ptr [esi + 4], 0xe787ac }
	__asm { mov dword ptr [esi + 0x18], 0xe787b4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe787c0 }
	__asm { mov dword ptr [esi + 0x64], 0xe787d0 }
	__asm { mov dword ptr [esi + 0x70], 0xe787d8 }
	__asm { mov dword ptr [esi + 0x98], 0xe787f8 }
	__asm { mov dword ptr [esi + 0xb0], 0xe7882c }
	__asm { mov dword ptr [esi + 0xc4], 0xe78858 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe78860 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xbc] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov dword ptr [esi + 0x118], 1 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0090f820();
// FUNCTION: ROBLOXSTUDIO 0x0090fb90
extern "C" __declspec(naked) void asm_0090fb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_0090fbad }
	__asm { mov dword ptr [esi + 0x68], 0xeb6824 }
	__asm { mov dword ptr [esi + 0xb4], 0xeb682c }
	__asm { L_0090fbad: }
	__asm { push 0 }
	__asm { call fn_0090f820 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe780d4 }
	__asm { mov dword ptr [esi + 4], 0xe781e4 }
	__asm { mov dword ptr [esi + 0x18], 0xe781ec }
	__asm { mov dword ptr [esi + 0x1c], 0xe781f8 }
	__asm { mov dword ptr [esi + 0x64], 0xe78208 }
	__asm { mov dword ptr [esi + 0x70], 0xe78210 }
	__asm { mov dword ptr [esi + 0x98], 0xe78230 }
	__asm { mov dword ptr [esi + 0xb0], 0xe78264 }
	__asm { mov dword ptr [esi + 0xc4], 0xe78290 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe78298 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xb4] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov dword ptr [esi + 0x110], 1 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0090ff90
extern "C" __declspec(naked) void asm_0090ff90()
{
	__asm { mov eax, dword ptr [ecx + 0x118] }
	__asm { sub eax, 0 }
	__asm { je L_0090ffeb }
	__asm { dec eax }
	__asm { je L_0090ffdf }
	__asm { dec eax }
	__asm { je L_0090ffe5 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0090ffdf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0090ffce }
	__asm { push 0x75 }
	__asm { push 0xe788f0 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0090ffdf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0090ffce: }
	__asm { movzx eax, al }
	__asm { push 0xe78940 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0090ffdf: }
	__asm { mov eax, 1 }
	__asm { ret }
	__asm { L_0090ffe5: }
	__asm { mov eax, 2 }
	__asm { ret }
	__asm { L_0090ffeb: }
	__asm { xor eax, eax }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009116f0
extern "C" __declspec(naked) void asm_009116f0()
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
	__asm { je L_0091172b }
	__asm { mov dword ptr [edx], 0xe7b024 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0091172d }
	__asm { L_0091172b: }
	__asm { xor edx, edx }
	__asm { L_0091172d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00911750
extern "C" __declspec(naked) void asm_00911750()
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
	__asm { je L_0091178b }
	__asm { mov dword ptr [edx], 0xe7b010 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0091178d }
	__asm { L_0091178b: }
	__asm { xor edx, edx }
	__asm { L_0091178d: }
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
// FUNCTION: ROBLOXSTUDIO 0x009117b0
extern "C" __declspec(naked) void asm_009117b0()
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
	__asm { je L_009117eb }
	__asm { mov dword ptr [edx], 0xe7affc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009117ed }
	__asm { L_009117eb: }
	__asm { xor edx, edx }
	__asm { L_009117ed: }
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
// FUNCTION: ROBLOXSTUDIO 0x00911810
extern "C" __declspec(naked) void asm_00911810()
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
	__asm { je L_0091184b }
	__asm { mov dword ptr [edx], 0xe7afd4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0091184d }
	__asm { L_0091184b: }
	__asm { xor edx, edx }
	__asm { L_0091184d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00911870
extern "C" __declspec(naked) void asm_00911870()
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
	__asm { je L_009118ab }
	__asm { mov dword ptr [edx], 0xe7afe8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009118ad }
	__asm { L_009118ab: }
	__asm { xor edx, edx }
	__asm { L_009118ad: }
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
// FUNCTION: ROBLOXSTUDIO 0x009118d0
extern "C" __declspec(naked) void asm_009118d0()
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
	__asm { je L_0091190b }
	__asm { mov dword ptr [edx], 0xe7b038 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0091190d }
	__asm { L_0091190b: }
	__asm { xor edx, edx }
	__asm { L_0091190d: }
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

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006da0e0();
// FUNCTION: ROBLOXSTUDIO 0x00913690
extern "C" __declspec(naked) void asm_00913690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009136d1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009136c0 }
	__asm { push 0x6f }
	__asm { push 0xe66ca8 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009136d1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009136c0: }
	__asm { movzx eax, al }
	__asm { push 0xe78bd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009136d1: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_006da0e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012fc99a[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b8aa8();
extern "C" void fn_007b5bb0();
// FUNCTION: ROBLOXSTUDIO 0x00915370
extern "C" __declspec(naked) void asm_00915370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012fc99a] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_009153ae }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0xe7a9ec }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { mov al, byte ptr [g_012fc99a] }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_009153ae }
	__asm { push dword ptr [ebp + 8] }
	__asm { movzx eax, al }
	__asm { push 0xe678c4 }
	__asm { push eax }
	__asm { call fn_006b8aa8 }
	__asm { add esp, 0xc }
	__asm { L_009153ae: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_007b5bb0 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00915e60();
// FUNCTION: ROBLOXSTUDIO 0x009162b0
extern "C" __declspec(naked) void asm_009162b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_009162cd }
	__asm { mov dword ptr [esi + 0x68], 0xe7b408 }
	__asm { mov dword ptr [esi + 0xb4], 0xe7b5e8 }
	__asm { L_009162cd: }
	__asm { push 0 }
	__asm { call fn_00915e60 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe7b234 }
	__asm { mov dword ptr [esi + 4], 0xe7b350 }
	__asm { mov dword ptr [esi + 0x18], 0xe7b358 }
	__asm { mov dword ptr [esi + 0x1c], 0xe7b364 }
	__asm { mov dword ptr [esi + 0x64], 0xe7b374 }
	__asm { mov dword ptr [esi + 0x70], 0xe7b37c }
	__asm { mov dword ptr [esi + 0x98], 0xe7b39c }
	__asm { mov dword ptr [esi + 0xb0], 0xe7b3d0 }
	__asm { mov dword ptr [esi + 0xc4], 0xe7b3fc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe7b404 }
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

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00918760
extern "C" __declspec(naked) void asm_00918760()
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
	__asm { je L_00918795 }
	__asm { mov dword ptr [edx], 0xe7d32c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { jmp L_00918797 }
	__asm { L_00918795: }
	__asm { xor edx, edx }
	__asm { L_00918797: }
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

extern "C" void fn_00918b60();
// FUNCTION: ROBLOXSTUDIO 0x00918fd0
extern "C" __declspec(naked) void asm_00918fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00918fed }
	__asm { mov dword ptr [esi + 0x68], 0xe7b224 }
	__asm { mov dword ptr [esi + 0xb4], 0xe7c784 }
	__asm { L_00918fed: }
	__asm { push 0 }
	__asm { call fn_00918b60 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe7c5b4 }
	__asm { mov dword ptr [esi + 4], 0xe7c6cc }
	__asm { mov dword ptr [esi + 0x18], 0xe7c6d4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe7c6e0 }
	__asm { mov dword ptr [esi + 0x64], 0xe7c6f0 }
	__asm { mov dword ptr [esi + 0x70], 0xe7c6f8 }
	__asm { mov dword ptr [esi + 0x98], 0xe7c718 }
	__asm { mov dword ptr [esi + 0xb0], 0xe7c74c }
	__asm { mov dword ptr [esi + 0xc4], 0xe7c778 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe7c780 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x64], 0 }
	__asm { mov dword ptr [esi + 0x120], 0 }
	__asm { mov dword ptr [esi + 0x124], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00865390();
// FUNCTION: ROBLOXSTUDIO 0x00919bc0
extern "C" __declspec(naked) void asm_00919bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00919bfb }
	__asm { mov edx, dword ptr [eax + 0x4c] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edx + ecx] }
	__asm { add ecx, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, 0x4c }
	__asm { add ecx, eax }
	__asm { call fn_00865390 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00919bfb: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x0091baf0
extern "C" __declspec(naked) void asm_0091baf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_0091bb02 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_0091bb04 }
	__asm { L_0091bb02: }
	__asm { xor edx, edx }
	__asm { L_0091bb04: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { fld dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { fstp dword ptr [esp] }
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

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0091c540
extern "C" __declspec(naked) void asm_0091c540()
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
	__asm { je L_0091c57b }
	__asm { mov dword ptr [edx], 0xe7d5c0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0091c57d }
	__asm { L_0091c57b: }
	__asm { xor edx, edx }
	__asm { L_0091c57d: }
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
// FUNCTION: ROBLOXSTUDIO 0x0091c5a0
extern "C" __declspec(naked) void asm_0091c5a0()
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
	__asm { je L_0091c5db }
	__asm { mov dword ptr [edx], 0xe7d5d4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0091c5dd }
	__asm { L_0091c5db: }
	__asm { xor edx, edx }
	__asm { L_0091c5dd: }
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
extern "C" void fn_00812810();
// FUNCTION: ROBLOXSTUDIO 0x0091c9e0
extern "C" __declspec(naked) void asm_0091c9e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_0091ca15 }
	__asm { add edi, 0x1c }
	__asm { je L_0091ca15 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00812810 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0091ca15 }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0091ca15: }
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
// FUNCTION: ROBLOXSTUDIO 0x0091cdc0
extern "C" __declspec(naked) void asm_0091cdc0()
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
	__asm { je L_0091cdfb }
	__asm { mov dword ptr [edx], 0xe7d7b8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0091cdfd }
	__asm { L_0091cdfb: }
	__asm { xor edx, edx }
	__asm { L_0091cdfd: }
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
// FUNCTION: ROBLOXSTUDIO 0x0091d810
extern "C" __declspec(naked) void asm_0091d810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_0091d857 }
	__asm { add esi, 4 }
	__asm { L_0091d822: }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0091d84d }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_0091d84d: }
	__asm { add esi, 0x10 }
	__asm { lea eax, [esi - 4] }
	__asm { cmp eax, edi }
	__asm { jne L_0091d822 }
	__asm { L_0091d857: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0091e6c0
extern "C" __declspec(naked) void asm_0091e6c0()
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
	__asm { je L_0091e6fb }
	__asm { mov dword ptr [edx], 0xe7db74 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0091e6fd }
	__asm { L_0091e6fb: }
	__asm { xor edx, edx }
	__asm { L_0091e6fd: }
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
// FUNCTION: ROBLOXSTUDIO 0x0091e720
extern "C" __declspec(naked) void asm_0091e720()
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
	__asm { je L_0091e75b }
	__asm { mov dword ptr [edx], 0xe7db60 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0091e75d }
	__asm { L_0091e75b: }
	__asm { xor edx, edx }
	__asm { L_0091e75d: }
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
extern "C" void fn_00811210();
// FUNCTION: ROBLOXSTUDIO 0x0091ff00
extern "C" __declspec(naked) void asm_0091ff00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_0091ff35 }
	__asm { add edi, 0x1c }
	__asm { je L_0091ff35 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00811210 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0091ff35 }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0091ff35: }
	__asm { xor edi, edi }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00963670();
// FUNCTION: ROBLOXSTUDIO 0x009202a0
extern "C" __declspec(naked) void asm_009202a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov al, byte ptr [edi + 0xa0] }
	__asm { cmp byte ptr [esi + 0xa0], al }
	__asm { je L_009202cb }
	__asm { push 0x12ff3c8 }
	__asm { mov byte ptr [esi + 0xa0], al }
	__asm { call fn_007b4f50 }
	__asm { L_009202cb: }
	__asm { mov eax, dword ptr [edi + 0xa4] }
	__asm { cmp dword ptr [esi + 0xa4], eax }
	__asm { je L_009202eb }
	__asm { push 0x12ff3f4 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0xa4], eax }
	__asm { call fn_007b4f50 }
	__asm { L_009202eb: }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 8], 0x91f6e0 }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_00963670 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00922440
extern "C" __declspec(naked) void asm_00922440()
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
	__asm { je L_0092247b }
	__asm { mov dword ptr [edx], 0xe7f700 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0092247d }
	__asm { L_0092247b: }
	__asm { xor edx, edx }
	__asm { L_0092247d: }
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
// FUNCTION: ROBLOXSTUDIO 0x009224a0
extern "C" __declspec(naked) void asm_009224a0()
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
	__asm { je L_009224db }
	__asm { mov dword ptr [edx], 0xe7f6ec }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009224dd }
	__asm { L_009224db: }
	__asm { xor edx, edx }
	__asm { L_009224dd: }
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
// FUNCTION: ROBLOXSTUDIO 0x00922500
extern "C" __declspec(naked) void asm_00922500()
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
	__asm { je L_0092253b }
	__asm { mov dword ptr [edx], 0xe7f6d8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0092253d }
	__asm { L_0092253b: }
	__asm { xor edx, edx }
	__asm { L_0092253d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00922560
extern "C" __declspec(naked) void asm_00922560()
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
	__asm { je L_0092259b }
	__asm { mov dword ptr [edx], 0xe7f714 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0092259d }
	__asm { L_0092259b: }
	__asm { xor edx, edx }
	__asm { L_0092259d: }
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

extern "C" void fn_0048b090();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00923710
extern "C" __declspec(naked) void asm_00923710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00923745 }
	__asm { add edi, 0x1c }
	__asm { je L_00923745 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00923745 }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00923745: }
	__asm { xor edi, edi }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc96a[];
extern "C" void fn_006b8aae();
extern "C" void fn_006b9da0();
extern "C" void fn_006b9e50();
// FUNCTION: ROBLOXSTUDIO 0x009240b0
extern "C" __declspec(naked) void asm_009240b0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov cl, byte ptr [g_012fc96a] }
	__asm { test cl, cl }
	__asm { je L_009240d8 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x210] }
	__asm { push eax }
	__asm { push esi }
	__asm { movzx eax, cl }
	__asm { push 0xe7eb40 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_009240d8: }
	__asm { add esi, 0x210 }
	__asm { cmp byte ptr [esi + 4], 0 }
	__asm { je L_00924101 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_006b9da0 }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0xe7dbe0 }
	__asm { push 1 }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00924101: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_006b9e50 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006e07d0();
// FUNCTION: ROBLOXSTUDIO 0x009244b0
extern "C" __declspec(naked) void asm_009244b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009244f1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009244e0 }
	__asm { push 0x46 }
	__asm { push 0xe7dc1c }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009244f1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009244e0: }
	__asm { movzx eax, al }
	__asm { push 0xe7dcc0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009244f1: }
	__asm { call fn_006e07d0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x009249b0
extern "C" __declspec(naked) void asm_009249b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_009249c4 }
	__asm { add eax, -0x1c }
	__asm { jmp L_009249c6 }
	__asm { L_009249c4: }
	__asm { xor eax, eax }
	__asm { L_009249c6: }
	__asm { lea ecx, [ebp - 0xc] }
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
	__asm { mov eax, edx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b5ea0();
extern "C" void fn_00922320();
extern "C" void fn_00c4a7d0();
// FUNCTION: ROBLOXSTUDIO 0x00924eb0
extern "C" __declspec(naked) void asm_00924eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00924ef1 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [edi + 0x64] }
	__asm { test ebx, ebx }
	__asm { je L_00924ef0 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00922320 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00924eef }
	__asm { L_00924ed1: }
	__asm { mov ecx, edi }
	__asm { call fn_00c4a7d0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007b5ea0 }
	__asm { mov ecx, ebx }
	__asm { call fn_00922320 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_00924ed1 }
	__asm { L_00924eef: }
	__asm { pop esi }
	__asm { L_00924ef0: }
	__asm { pop ebx }
	__asm { L_00924ef1: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009278c0
extern "C" __declspec(naked) void asm_009278c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009278ed }
	__asm { mov dword ptr [eax], 0xe803a8 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_009278ef }
	__asm { L_009278ed: }
	__asm { xor eax, eax }
	__asm { L_009278ef: }
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
// FUNCTION: ROBLOXSTUDIO 0x00927910
extern "C" __declspec(naked) void asm_00927910()
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
	__asm { je L_0092794b }
	__asm { mov dword ptr [edx], 0xe80380 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0092794d }
	__asm { L_0092794b: }
	__asm { xor edx, edx }
	__asm { L_0092794d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00927970
extern "C" __declspec(naked) void asm_00927970()
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
	__asm { je L_009279ab }
	__asm { mov dword ptr [edx], 0xe80394 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009279ad }
	__asm { L_009279ab: }
	__asm { xor edx, edx }
	__asm { L_009279ad: }
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
// FUNCTION: ROBLOXSTUDIO 0x00929c30
extern "C" __declspec(naked) void asm_00929c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea esi, [ebx + 0xf8] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0044e490 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00929c71 }
	__asm { cmp esi, edi }
	__asm { je L_00929c5f }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_00929c5f: }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { push 0x12ff668 }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_007b4f50 }
	__asm { L_00929c71: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006e07d0();
// FUNCTION: ROBLOXSTUDIO 0x0092a860
extern "C" __declspec(naked) void asm_0092a860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x88] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0092a887 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [esi + 0x70] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [esi + 0x74] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0092a887: }
	__asm { call fn_006e07d0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { pop esi }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_004272a0();
extern "C" void fn_00932f50();
// FUNCTION: ROBLOXSTUDIO 0x00932d10
extern "C" __declspec(naked) void asm_00932d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp byte ptr [eax], 0 }
	__asm { je L_00932d43 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00932d34 }
	__asm { add eax, 0x10 }
	__asm { push 0x2c }
	__asm { push eax }
	__asm { call fn_004272a0 }
	__asm { add esp, 8 }
	__asm { jmp L_00932d46 }
	__asm { L_00932d34: }
	__asm { xor eax, eax }
	__asm { push 0x2c }
	__asm { push eax }
	__asm { call fn_004272a0 }
	__asm { add esp, 8 }
	__asm { jmp L_00932d46 }
	__asm { L_00932d43: }
	__asm { mov byte ptr [eax], 1 }
	__asm { L_00932d46: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00932f50 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { mov byte ptr [eax], 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0092c700();
// FUNCTION: ROBLOXSTUDIO 0x00932ec0
extern "C" __declspec(naked) void asm_00932ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { je L_00932ee4 }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { test eax, eax }
	__asm { je L_00932ee4 }
	__asm { add eax, -0x5c }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00932eeb }
	__asm { L_00932ee4: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_00932eeb: }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push 0 }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 8], 0x932f10 }
	__asm { call fn_0092c700 }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004272a0();
extern "C" void fn_00932d60();
// FUNCTION: ROBLOXSTUDIO 0x00932f10
extern "C" __declspec(naked) void asm_00932f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp byte ptr [eax], 0 }
	__asm { je L_00932f36 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00932f29 }
	__asm { add eax, 0x10 }
	__asm { jmp L_00932f2b }
	__asm { L_00932f29: }
	__asm { xor eax, eax }
	__asm { L_00932f2b: }
	__asm { push 0x2c }
	__asm { push eax }
	__asm { call fn_004272a0 }
	__asm { add esp, 8 }
	__asm { L_00932f36: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00932d60 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { mov byte ptr [eax], 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00532390();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00933550
extern "C" __declspec(naked) void asm_00933550()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_0093359d }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { call fn_00532390 }
	__asm { cmp byte ptr [eax + 0x28], 0 }
	__asm { je L_0093359d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00933588 }
	__asm { push 0x3f }
	__asm { push 0xe81ab0 }
	__asm { push 0xe81b94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0093359d }
	__asm { L_00933588: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe81bc8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0093359d: }
	__asm { mov byte ptr [esi + 0x28], 1 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009397c0
extern "C" __declspec(naked) void asm_009397c0()
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
	__asm { je L_009397fb }
	__asm { mov dword ptr [edx], 0xe828b0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009397fd }
	__asm { L_009397fb: }
	__asm { xor edx, edx }
	__asm { L_009397fd: }
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
// FUNCTION: ROBLOXSTUDIO 0x00939820
extern "C" __declspec(naked) void asm_00939820()
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
	__asm { je L_0093985b }
	__asm { mov dword ptr [edx], 0xe828c4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0093985d }
	__asm { L_0093985b: }
	__asm { xor edx, edx }
	__asm { L_0093985d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00939880
extern "C" __declspec(naked) void asm_00939880()
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
	__asm { je L_009398bb }
	__asm { mov dword ptr [edx], 0xe8289c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009398bd }
	__asm { L_009398bb: }
	__asm { xor edx, edx }
	__asm { L_009398bd: }
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
// FUNCTION: ROBLOXSTUDIO 0x009398e0
extern "C" __declspec(naked) void asm_009398e0()
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
	__asm { je L_0093991b }
	__asm { mov dword ptr [edx], 0xe828d8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0093991d }
	__asm { L_0093991b: }
	__asm { xor edx, edx }
	__asm { L_0093991d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00939940
extern "C" __declspec(naked) void asm_00939940()
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
	__asm { je L_0093997b }
	__asm { mov dword ptr [edx], 0xe82900 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0093997d }
	__asm { L_0093997b: }
	__asm { xor edx, edx }
	__asm { L_0093997d: }
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
// FUNCTION: ROBLOXSTUDIO 0x009399a0
extern "C" __declspec(naked) void asm_009399a0()
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
	__asm { je L_009399db }
	__asm { mov dword ptr [edx], 0xe828ec }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009399dd }
	__asm { L_009399db: }
	__asm { xor edx, edx }
	__asm { L_009399dd: }
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
// FUNCTION: ROBLOXSTUDIO 0x0093ab90
extern "C" __declspec(naked) void asm_0093ab90()
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
	__asm { je L_0093abcb }
	__asm { mov dword ptr [edx], 0xe82d18 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0093abcd }
	__asm { L_0093abcb: }
	__asm { xor edx, edx }
	__asm { L_0093abcd: }
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
// FUNCTION: ROBLOXSTUDIO 0x0093abf0
extern "C" __declspec(naked) void asm_0093abf0()
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
	__asm { je L_0093ac2b }
	__asm { mov dword ptr [edx], 0xe82d2c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0093ac2d }
	__asm { L_0093ac2b: }
	__asm { xor edx, edx }
	__asm { L_0093ac2d: }
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
// FUNCTION: ROBLOXSTUDIO 0x0093ac50
extern "C" __declspec(naked) void asm_0093ac50()
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
	__asm { je L_0093ac8b }
	__asm { mov dword ptr [edx], 0xe82d40 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0093ac8d }
	__asm { L_0093ac8b: }
	__asm { xor edx, edx }
	__asm { L_0093ac8d: }
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
// FUNCTION: ROBLOXSTUDIO 0x0093acb0
extern "C" __declspec(naked) void asm_0093acb0()
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
	__asm { je L_0093aceb }
	__asm { mov dword ptr [edx], 0xe82cf0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0093aced }
	__asm { L_0093aceb: }
	__asm { xor edx, edx }
	__asm { L_0093aced: }
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
// FUNCTION: ROBLOXSTUDIO 0x0093ad10
extern "C" __declspec(naked) void asm_0093ad10()
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
	__asm { je L_0093ad4b }
	__asm { mov dword ptr [edx], 0xe82d04 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0093ad4d }
	__asm { L_0093ad4b: }
	__asm { xor edx, edx }
	__asm { L_0093ad4d: }
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

extern "C" void fn_004115f0();
extern "C" void fn_0041d140();
extern "C" void fn_007cd560();
extern "C" void fn_0096c1b0();
extern "C" void fn_00b0e0a0();
// FUNCTION: ROBLOXSTUDIO 0x0093bcc0
extern "C" __declspec(naked) void asm_0093bcc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00b0e0a0 }
	__asm { mov esi, dword ptr [esi + 0x28] }
	__asm { call fn_0041d140 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { jne L_0093bd03 }
	__asm { push edi }
	__asm { call fn_0096c1b0 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_0093bd03 }
	__asm { push 0x93c470 }
	__asm { push 0x13005a0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { L_0093bd03: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_013005bc[];
extern "C" char g_013005c0[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0093d9a0
extern "C" __declspec(naked) void asm_0093d9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { mov byte ptr [g_013005c0], al }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0093d9f2 }
	__asm { cmp dword ptr [g_013005bc], 0 }
	__asm { jne L_0093d9f2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0093d9e1 }
	__asm { push 0x2a }
	__asm { push 0xe82ef4 }
	__asm { push 0xe82f30 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0093d9f2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0093d9e1: }
	__asm { movzx eax, al }
	__asm { push 0xe82f40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0093d9f2: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00afae40();
// FUNCTION: ROBLOXSTUDIO 0x0093e1f0
extern "C" __declspec(naked) void asm_0093e1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00afae40 }
	__asm { mov esi, eax }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test edi, edi }
	__asm { je L_0093e233 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov eax, esi }
	__asm { L_0093e233: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00945a50
extern "C" __declspec(naked) void asm_00945a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test ecx, ecx }
	__asm { je L_00945a7a }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cdq }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 0xc], 0x1606 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { mov eax, ecx }
	__asm { jl L_00945a7c }
	__asm { mov dword ptr [ecx + 0xc], 0x3e06 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00945a7a: }
	__asm { mov eax, ecx }
	__asm { L_00945a7c: }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { test ecx, ecx }
	__asm { je L_00945a95 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ecx + 0xc], 3 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { L_00945a95: }
	__asm { mov eax, ecx }
	__asm { ret }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x00951a90
extern "C" __declspec(naked) void asm_00951a90()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xe84790 }
	__asm { mov dword ptr [esi + 0x14], 0xe8479c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x28], 0xe847a4 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe8477c }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00951ae1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00951ae1 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00951ae1: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x00951af0
extern "C" __declspec(naked) void asm_00951af0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xe846fc }
	__asm { mov dword ptr [esi + 0x14], 0xe84708 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x28], 0xe84710 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe846e8 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00951b41 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00951b41 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00951b41: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x00951b50
extern "C" __declspec(naked) void asm_00951b50()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xe84758 }
	__asm { mov dword ptr [esi + 0x14], 0xe84764 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x28], 0xe8476c }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe84744 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00951ba1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00951ba1 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00951ba1: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x00951d30
extern "C" __declspec(naked) void asm_00951d30()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe847b4 }
	__asm { mov dword ptr [esi + 0xc], 0xe847c0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe847c8 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe845d0 }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00951d81 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00951d81 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00951d81: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x00951d90
extern "C" __declspec(naked) void asm_00951d90()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xe848d4 }
	__asm { mov dword ptr [esi + 0x14], 0xe848e0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x28], 0xe848e8 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe84670 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00951de1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00951de1 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00951de1: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x00951df0
extern "C" __declspec(naked) void asm_00951df0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe847d8 }
	__asm { mov dword ptr [esi + 0xc], 0xe847e4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe847ec }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe845e4 }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00951e41 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00951e41 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00951e41: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x00951e50
extern "C" __declspec(naked) void asm_00951e50()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe847fc }
	__asm { mov dword ptr [esi + 0xc], 0xe84808 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84810 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe845f8 }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00951ea1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00951ea1 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00951ea1: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x00951eb0
extern "C" __declspec(naked) void asm_00951eb0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84844 }
	__asm { mov dword ptr [esi + 0xc], 0xe84850 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84858 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe84620 }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00951f01 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00951f01 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00951f01: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x00951f10
extern "C" __declspec(naked) void asm_00951f10()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84820 }
	__asm { mov dword ptr [esi + 0xc], 0xe8482c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84834 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe8460c }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00951f61 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00951f61 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00951f61: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x00951f70
extern "C" __declspec(naked) void asm_00951f70()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe8488c }
	__asm { mov dword ptr [esi + 0xc], 0xe84898 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe848a0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe84648 }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00951fc1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00951fc1 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00951fc1: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x00951fe0
extern "C" __declspec(naked) void asm_00951fe0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84868 }
	__asm { mov dword ptr [esi + 0xc], 0xe84874 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe8487c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe84634 }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00952031 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00952031 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00952031: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x00952040
extern "C" __declspec(naked) void asm_00952040()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe848f8 }
	__asm { mov dword ptr [esi + 0xc], 0xe84904 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe8490c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe84684 }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00952091 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00952091 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00952091: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x009520a0
extern "C" __declspec(naked) void asm_009520a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe848b0 }
	__asm { mov dword ptr [esi + 0xc], 0xe848bc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe848c4 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe8465c }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_009520f1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_009520f1 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_009520f1: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009532e0
extern "C" __declspec(naked) void asm_009532e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe84698 }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0095330c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0095330c }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_0095330c: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0xe1815c }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00953329 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00953329: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00953380
extern "C" __declspec(naked) void asm_00953380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe846d4 }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_009533ac }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_009533ac }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_009533ac: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0xe18150 }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_009533c9 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009533c9: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00953470
extern "C" __declspec(naked) void asm_00953470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe84670 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_0095349c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0095349c }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_0095349c: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_009534b3 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009534b3: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00953770
extern "C" __declspec(naked) void asm_00953770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe8477c }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_0095379c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0095379c }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_0095379c: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_009537b3 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009537b3: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009537c0
extern "C" __declspec(naked) void asm_009537c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe846e8 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_009537ec }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_009537ec }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_009537ec: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00953803 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00953803: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00953810
extern "C" __declspec(naked) void asm_00953810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe84744 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_0095383c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0095383c }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_0095383c: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00953853 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00953853: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00952790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00953860
extern "C" __declspec(naked) void asm_00953860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x88] }
	__asm { mov dword ptr [edi], 0xe84aa8 }
	__asm { test esi, esi }
	__asm { je L_009538a1 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00953887 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00953887: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009538a1: }
	__asm { mov ecx, edi }
	__asm { call fn_00952790 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_009538b7 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009538b7: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009538f0
extern "C" __declspec(naked) void asm_009538f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov dword ptr [esi], 0xe84548 }
	__asm { mov dword ptr [ecx], 0xe84550 }
	__asm { call dword ptr [g_00e10510] }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0095392a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0095392a }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { L_0095392a: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00953939 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00953939: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0095a990
extern "C" __declspec(naked) void asm_0095a990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0095a9bd }
	__asm { mov dword ptr [eax], 0xe850c0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0095a9bf }
	__asm { L_0095a9bd: }
	__asm { xor eax, eax }
	__asm { L_0095a9bf: }
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

extern "C" void fn_00403540();
extern "C" void fn_006a2760();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0095ab40
extern "C" __declspec(naked) void asm_0095ab40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0xf }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006a2760 }
	__asm { cmp dword ptr [ebp - 0xc], 0x10 }
	__asm { jb L_0095ab98 }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0095ab98: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" void fn_0095cc90();
extern "C" void fn_00b88d60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0095d230
extern "C" __declspec(naked) void asm_0095d230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0x100] }
	__asm { mov dword ptr [ecx], 0xe85034 }
	__asm { call fn_0095cc90 }
	__asm { xor ecx, ecx }
	__asm { lea eax, [esi + 0xfc] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0095d25c }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_0095d25c: }
	__asm { mov ecx, esi }
	__asm { call fn_00b88d60 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0095d272 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0095d272: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10194[];
extern "C" void fn_0095cd40();
extern "C" void fn_00b88d60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0095d280
extern "C" __declspec(naked) void asm_0095d280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0x100] }
	__asm { mov dword ptr [ecx], 0xe85058 }
	__asm { call fn_0095cd40 }
	__asm { xor ecx, ecx }
	__asm { lea eax, [esi + 0xfc] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0095d2ac }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_0095d2ac: }
	__asm { mov ecx, esi }
	__asm { call fn_00b88d60 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0095d2c2 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0095d2c2: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0095d740
extern "C" __declspec(naked) void asm_0095d740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x38], 0x10 }
	__asm { jb L_0095d758 }
	__asm { push dword ptr [esi + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0095d758: }
	__asm { mov dword ptr [esi + 0x38], 0xf }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov byte ptr [esi + 0x24], 0 }
	__asm { cmp dword ptr [esi + 0x1c], 0x10 }
	__asm { jb L_0095d77b }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0095d77b: }
	__asm { mov dword ptr [esi + 0x1c], 0xf }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b0970();
// FUNCTION: ROBLOXSTUDIO 0x0095f2e0
extern "C" __declspec(naked) void asm_0095f2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { sub esp, 0x44 }
	__asm { mov edi, esp }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { test ecx, ecx }
	__asm { je L_0095f312 }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x28] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0095f312: }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { call fn_007b0970 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009634c0
extern "C" __declspec(naked) void asm_009634c0()
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
	__asm { je L_009634f5 }
	__asm { mov dword ptr [edx], 0xe87310 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { jmp L_009634f7 }
	__asm { L_009634f5: }
	__asm { xor edx, edx }
	__asm { L_009634f7: }
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

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00995860();
extern "C" void fn_00997d00();
// FUNCTION: ROBLOXSTUDIO 0x00965cf0
extern "C" __declspec(naked) void asm_00965cf0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x148] }
	__asm { call fn_00995860 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00965d4c }
	__asm { mov ecx, dword ptr [esi + 0x148] }
	__asm { call fn_00997d00 }
	__asm { test al, al }
	__asm { jne L_00965d4c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00965d37 }
	__asm { push 0x353 }
	__asm { push 0xe85be8 }
	__asm { push 0xe6b11c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00965d4c }
	__asm { L_00965d37: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe865e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00965d4c: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0096d160();
// FUNCTION: ROBLOXSTUDIO 0x0096bbd0
extern "C" __declspec(naked) void asm_0096bbd0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_0096d160 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov esi, dword ptr [esi + 0x148] }
	__asm { test al, al }
	__asm { je L_0096bc25 }
	__asm { cmp byte ptr [esi + 0x30], 0 }
	__asm { je L_0096bc25 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0096bc14 }
	__asm { push 0xb2 }
	__asm { push 0xe857b0 }
	__asm { push 0xe857f0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0096bc25 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0096bc14: }
	__asm { movzx eax, al }
	__asm { push 0xe85800 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0096bc25: }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0096cc50
extern "C" __declspec(naked) void asm_0096cc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_0096cc62 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_0096cc64 }
	__asm { L_0096cc62: }
	__asm { xor edx, edx }
	__asm { L_0096cc64: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { fld qword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { sub esp, 8 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { fstp qword ptr [esp] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0096e000
extern "C" __declspec(naked) void asm_0096e000()
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
	__asm { je L_0096e03b }
	__asm { mov dword ptr [edx], 0xe8788c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0096e03d }
	__asm { L_0096e03b: }
	__asm { xor edx, edx }
	__asm { L_0096e03d: }
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
// FUNCTION: ROBLOXSTUDIO 0x0096e060
extern "C" __declspec(naked) void asm_0096e060()
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
	__asm { je L_0096e09b }
	__asm { mov dword ptr [edx], 0xe878b4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0096e09d }
	__asm { L_0096e09b: }
	__asm { xor edx, edx }
	__asm { L_0096e09d: }
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
// FUNCTION: ROBLOXSTUDIO 0x0096e0c0
extern "C" __declspec(naked) void asm_0096e0c0()
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
	__asm { je L_0096e0fb }
	__asm { mov dword ptr [edx], 0xe878a0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0096e0fd }
	__asm { L_0096e0fb: }
	__asm { xor edx, edx }
	__asm { L_0096e0fd: }
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
// FUNCTION: ROBLOXSTUDIO 0x0096e120
extern "C" __declspec(naked) void asm_0096e120()
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
	__asm { je L_0096e15b }
	__asm { mov dword ptr [edx], 0xe878c8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0096e15d }
	__asm { L_0096e15b: }
	__asm { xor edx, edx }
	__asm { L_0096e15d: }
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
extern "C" void fn_00813490();
// FUNCTION: ROBLOXSTUDIO 0x0096fbc0
extern "C" __declspec(naked) void asm_0096fbc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_0096fbf5 }
	__asm { add edi, 0x1c }
	__asm { je L_0096fbf5 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00813490 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0096fbf5 }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0096fbf5: }
	__asm { xor edi, edi }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0083e660();
// FUNCTION: ROBLOXSTUDIO 0x0096fe50
extern "C" __declspec(naked) void asm_0096fe50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0083e660 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { test ecx, ecx }
	__asm { je L_0096fe84 }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { add ecx, -0x1c }
	__asm { add ecx, dword ptr [esi + 0x2c] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { call edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0096fe84: }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { sub esp, 8 }
	__asm { xor ecx, ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { fstp qword ptr [esp] }
	__asm { call edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00972d50
extern "C" __declspec(naked) void asm_00972d50()
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
	__asm { je L_00972d8b }
	__asm { mov dword ptr [edx], 0xe88458 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00972d8d }
	__asm { L_00972d8b: }
	__asm { xor edx, edx }
	__asm { L_00972d8d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00972db0
extern "C" __declspec(naked) void asm_00972db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00972ddd }
	__asm { mov dword ptr [eax], 0xe88430 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00972ddf }
	__asm { L_00972ddd: }
	__asm { xor eax, eax }
	__asm { L_00972ddf: }
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
// FUNCTION: ROBLOXSTUDIO 0x00972e00
extern "C" __declspec(naked) void asm_00972e00()
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
	__asm { je L_00972e3b }
	__asm { mov dword ptr [edx], 0xe88444 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00972e3d }
	__asm { L_00972e3b: }
	__asm { xor edx, edx }
	__asm { L_00972e3d: }
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

extern "C" void fn_007dd280();
extern "C" void fn_007e9300();
// FUNCTION: ROBLOXSTUDIO 0x00979f20
extern "C" __declspec(naked) void asm_00979f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { je L_00979f31 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00979f33 }
	__asm { L_00979f31: }
	__asm { xor edi, edi }
	__asm { L_00979f33: }
	__asm { mov edx, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [edi + ecx] }
	__asm { call edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_007e9300 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_007dd280 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00962630();
// FUNCTION: ROBLOXSTUDIO 0x0097ead0
extern "C" __declspec(naked) void asm_0097ead0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp eax, dword ptr [esi + 0x11c] }
	__asm { je L_0097eb0f }
	__asm { mov dword ptr [esi + 0x11c], eax }
	__asm { dec eax }
	__asm { jne L_0097eb03 }
	__asm { push esi }
	__asm { call fn_00962630 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0097eb03 }
	__asm { mov ecx, dword ptr [eax + 0x68] }
	__asm { test ecx, ecx }
	__asm { je L_0097eb03 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0097eb03: }
	__asm { push 0x1301b10 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_0097eb0f: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00790e70();
// FUNCTION: ROBLOXSTUDIO 0x00980230
extern "C" __declspec(naked) void asm_00980230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x40] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00980254 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00980254: }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push eax }
	__asm { call fn_00790e70 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009809b0
extern "C" __declspec(naked) void asm_009809b0()
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
	__asm { je L_009809eb }
	__asm { mov dword ptr [edx], 0xe88d80 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009809ed }
	__asm { L_009809eb: }
	__asm { xor edx, edx }
	__asm { L_009809ed: }
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
// FUNCTION: ROBLOXSTUDIO 0x00980a10
extern "C" __declspec(naked) void asm_00980a10()
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
	__asm { je L_00980a4b }
	__asm { mov dword ptr [edx], 0xe88d94 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00980a4d }
	__asm { L_00980a4b: }
	__asm { xor edx, edx }
	__asm { L_00980a4d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00980a70
extern "C" __declspec(naked) void asm_00980a70()
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
	__asm { je L_00980aab }
	__asm { mov dword ptr [edx], 0xe88da8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00980aad }
	__asm { L_00980aab: }
	__asm { xor edx, edx }
	__asm { L_00980aad: }
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
// FUNCTION: ROBLOXSTUDIO 0x009816e0
extern "C" __declspec(naked) void asm_009816e0()
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
	__asm { je L_0098171b }
	__asm { mov dword ptr [edx], 0xe89238 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0098171d }
	__asm { L_0098171b: }
	__asm { xor edx, edx }
	__asm { L_0098171d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00983c70
extern "C" __declspec(naked) void asm_00983c70()
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
	__asm { je L_00983cab }
	__asm { mov dword ptr [edx], 0xe8999c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00983cad }
	__asm { L_00983cab: }
	__asm { xor edx, edx }
	__asm { L_00983cad: }
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

extern "C" void fn_005316c0();
// FUNCTION: ROBLOXSTUDIO 0x00984560
extern "C" __declspec(naked) void asm_00984560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp eax, ecx }
	__asm { je L_00984595 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_00984571: }
	__asm { test esi, esi }
	__asm { je L_00984583 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_005316c0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_00984583: }
	__asm { add eax, 0x54 }
	__asm { add esi, 0x54 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp eax, ecx }
	__asm { jne L_00984571 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00984595: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009846a0
extern "C" __declspec(naked) void asm_009846a0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi], 0xe89c58 }
	__asm { cmp dword ptr [edi + 0x1c], 0 }
	__asm { je L_009846d9 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { L_009846d9: }
	__asm { cmp dword ptr [edi + 0x10], 0 }
	__asm { je L_00984708 }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { L_00984708: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00989940
extern "C" __declspec(naked) void asm_00989940()
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
	__asm { je L_0098997b }
	__asm { mov dword ptr [edx], 0xe8df7c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0098997d }
	__asm { L_0098997b: }
	__asm { xor edx, edx }
	__asm { L_0098997d: }
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
// FUNCTION: ROBLOXSTUDIO 0x009899a0
extern "C" __declspec(naked) void asm_009899a0()
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
	__asm { je L_009899db }
	__asm { mov dword ptr [edx], 0xe8dfa4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009899dd }
	__asm { L_009899db: }
	__asm { xor edx, edx }
	__asm { L_009899dd: }
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
// FUNCTION: ROBLOXSTUDIO 0x00989a00
extern "C" __declspec(naked) void asm_00989a00()
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
	__asm { je L_00989a3b }
	__asm { mov dword ptr [edx], 0xe8df90 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00989a3d }
	__asm { L_00989a3b: }
	__asm { xor edx, edx }
	__asm { L_00989a3d: }
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
