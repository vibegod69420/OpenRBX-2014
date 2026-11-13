// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_009c9090();
// FUNCTION: ROBLOXSTUDIO 0x00c5fbf0
extern "C" __declspec(naked) void asm_00c5fbf0()
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
	__asm { je L_00c5fc3b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c5fc3b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00c5fc82 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe9523c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xef4e0c }
	__asm { mov dword ptr [esi + 8], 0xef4e1c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xef4e24 }
	__asm { mov dword ptr [esi + 8], 0xef4e34 }
	__asm { jmp L_00c5fc84 }
	__asm { L_00c5fc82: }
	__asm { xor esi, esi }
	__asm { L_00c5fc84: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_009c9090 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c5fca1 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c5fca1: }
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
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x00c5fcc0
extern "C" __declspec(naked) void asm_00c5fcc0()
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
	__asm { je L_00c5fd0b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c5fd0b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00c5fd52 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xef4dac }
	__asm { mov dword ptr [esi + 8], 0xef4dbc }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xef4dc4 }
	__asm { mov dword ptr [esi + 8], 0xef4dd4 }
	__asm { jmp L_00c5fd54 }
	__asm { L_00c5fd52: }
	__asm { xor esi, esi }
	__asm { L_00c5fd54: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c5fd71 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c5fd71: }
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
extern "C" void fn_008c5910();
// FUNCTION: ROBLOXSTUDIO 0x00c5fd90
extern "C" __declspec(naked) void asm_00c5fd90()
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
	__asm { je L_00c5fddb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c5fddb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00c5fe22 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe6f5a0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xef4eac }
	__asm { mov dword ptr [esi + 8], 0xef4ebc }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xef4ec4 }
	__asm { mov dword ptr [esi + 8], 0xef4ed4 }
	__asm { jmp L_00c5fe24 }
	__asm { L_00c5fe22: }
	__asm { xor esi, esi }
	__asm { L_00c5fe24: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_008c5910 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c5fe41 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c5fe41: }
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
extern "C" void fn_0044b730();
// FUNCTION: ROBLOXSTUDIO 0x00c5fe60
extern "C" __declspec(naked) void asm_00c5fe60()
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
	__asm { je L_00c5feab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c5feab: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00c5fef2 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe4dde8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xef4e7c }
	__asm { mov dword ptr [esi + 8], 0xef4e8c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xef4e94 }
	__asm { mov dword ptr [esi + 8], 0xef4ea4 }
	__asm { jmp L_00c5fef4 }
	__asm { L_00c5fef2: }
	__asm { xor esi, esi }
	__asm { L_00c5fef4: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044b730 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c5ff11 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c5ff11: }
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
extern "C" void fn_00c63be0();
// FUNCTION: ROBLOXSTUDIO 0x00c5ff30
extern "C" __declspec(naked) void asm_00c5ff30()
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
	__asm { je L_00c5ff7b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c5ff7b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00c5ffc2 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xef4d44 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xef4d4c }
	__asm { mov dword ptr [esi + 8], 0xef4d5c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xef4d64 }
	__asm { mov dword ptr [esi + 8], 0xef4d74 }
	__asm { jmp L_00c5ffc4 }
	__asm { L_00c5ffc2: }
	__asm { xor esi, esi }
	__asm { L_00c5ffc4: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c63be0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c5ffe1 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c5ffe1: }
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
extern "C" void fn_009af5c0();
// FUNCTION: ROBLOXSTUDIO 0x00c60000
extern "C" __declspec(naked) void asm_00c60000()
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
	__asm { je L_00c6004b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c6004b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00c60092 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe93648 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xef4ddc }
	__asm { mov dword ptr [esi + 8], 0xef4dec }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xef4df4 }
	__asm { mov dword ptr [esi + 8], 0xef4e04 }
	__asm { jmp L_00c60094 }
	__asm { L_00c60092: }
	__asm { xor esi, esi }
	__asm { L_00c60094: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_009af5c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c600b1 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c600b1: }
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
extern "C" void fn_0043b9c0();
extern "C" void fn_00c5eeb0();
// FUNCTION: ROBLOXSTUDIO 0x00c600d0
extern "C" __declspec(naked) void asm_00c600d0()
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
	__asm { push 0x34 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c6011b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c6011b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00c60141 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00c5eeb0 }
	__asm { mov dword ptr [esi], 0xef4d94 }
	__asm { mov dword ptr [esi + 8], 0xef4da4 }
	__asm { jmp L_00c60143 }
	__asm { L_00c60141: }
	__asm { xor esi, esi }
	__asm { L_00c60143: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c60160 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c60160: }
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
extern "C" void fn_00c63a30();
// FUNCTION: ROBLOXSTUDIO 0x00c60180
extern "C" __declspec(naked) void asm_00c60180()
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
	__asm { je L_00c601cb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c601cb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00c60212 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xef4e44 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xef4e4c }
	__asm { mov dword ptr [esi + 8], 0xef4e5c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xef4e64 }
	__asm { mov dword ptr [esi + 8], 0xef4e74 }
	__asm { jmp L_00c60214 }
	__asm { L_00c60212: }
	__asm { xor esi, esi }
	__asm { L_00c60214: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c63a30 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c60231 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c60231: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00c60b00
extern "C" __declspec(naked) void asm_00c60b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd661c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea edi, [ebx + 4] }
	__asm { push -1 }
	__asm { mov dword ptr [edi], eax }
	__asm { lea ecx, [edi + 4] }
	__asm { push 0 }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00c60f90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c60c40
extern "C" __declspec(naked) void asm_00c60c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd661f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x3c] }
	__asm { lea eax, [ebp + 0x24] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00c60f90 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00c60cd4 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c60cd4: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_00c60cf7 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c60cf7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" void fn_00403540();
extern "C" void fn_00c60ee0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c60d10
extern "C" __declspec(naked) void asm_00c60d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4f3b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00c60ee0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { jb L_00c60da2 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c60da2: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00c60db3 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c60db3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c60dd0
extern "C" __declspec(naked) void asm_00c60dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd66230 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00c60e55 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c60e55: }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00c60e9d }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c60e9d: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_00c60ec0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c60ec0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c60ee0
extern "C" __declspec(naked) void asm_00c60ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd36660 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00c60f62 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c60f62: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { jb L_00c60f79 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c60f79: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00403540();
extern "C" void fn_00c60dd0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c60f90
extern "C" __declspec(naked) void asm_00c60f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd661f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00c60dd0 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { jb L_00c61027 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c61027: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_00c6104a }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c6104a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" char g_00e10524[];
extern "C" void fn_00c60a60();
extern "C" void fn_00c61480();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c64050
extern "C" __declspec(naked) void asm_00c64050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1ac4b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { jne L_00c640c1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x3c }
	__asm { mov esi, dword ptr [eax] }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c640ab }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00c60a60 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c640ab: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c640c1: }
	__asm { cmp eax, 1 }
	__asm { jne L_00c640e5 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c640e5: }
	__asm { cmp eax, 2 }
	__asm { jne L_00c6410f }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_00c640fa }
	__asm { push 1 }
	__asm { call fn_00c61480 }
	__asm { L_00c640fa: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c6410f: }
	__asm { cmp eax, 3 }
	__asm { jne L_00c6413e }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x12a3ae8 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00c640fa }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c6413e: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0x12a3ae8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_006b98c0();
extern "C" void fn_00c67000();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c64830
extern "C" __declspec(naked) void asm_00c64830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd37a68 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov byte ptr [edi + 0x1c], 1 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00c6485d }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00c6485d: }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push 0xef4a30 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push 0xef4a60 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0x1c }
	__asm { push 5 }
	__asm { push 0xef4778 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00c67000 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop edi }
	__asm { jb L_00c648d8 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c648d8: }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { jb L_00c648e9 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c648e9: }
	__asm { cmp dword ptr [ebp - 0x40], 0x10 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { jb L_00c6490c }
	__asm { push dword ptr [ebp - 0x54] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c6490c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_004038a0();
extern "C" void fn_006b9e50();
extern "C" void fn_00c67000();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c64920
extern "C" __declspec(naked) void asm_00c64920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37a68 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0x40] }
	__asm { call fn_006b9e50 }
	__asm { push 0xc }
	__asm { push 0xef4a68 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 0x40], 0xf }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov byte ptr [ebp - 0x54], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0xc }
	__asm { push 0xef4a68 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0x2e }
	__asm { push 0xef4a78 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00c67000 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop esi }
	__asm { jb L_00c649dd }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c649dd: }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { jb L_00c64a00 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c64a00: }
	__asm { cmp dword ptr [ebp - 0x40], 0x10 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { jb L_00c64a23 }
	__asm { push dword ptr [ebp - 0x54] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c64a23: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006ded80();
extern "C" void fn_00892440();
extern "C" void fn_00c039f0();
extern "C" void fn_00c67c20();
// FUNCTION: ROBLOXSTUDIO 0x00c679d0
extern "C" __declspec(naked) void asm_00c679d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test dl, dl }
	__asm { je L_00c67a26 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, dword ptr [esi + 0x214] }
	__asm { jne L_00c67a26 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c67a15 }
	__asm { push 0xf3 }
	__asm { push 0xef5118 }
	__asm { push 0xef54d4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c67a26 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_00c67a15: }
	__asm { movzx eax, dl }
	__asm { push 0xef54f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c67a26: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c67c20 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c67a40 }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c67a40: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_00892440 }
	__asm { lea ecx, [eax + 0x24] }
	__asm { call fn_006ded80 }
	__asm { fld1 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { add eax, 0x18 }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_00c039f0 }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c6ac00
extern "C" __declspec(naked) void asm_00c6ac00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebx + 0x1cc], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_00c6ac66 }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00c6ac56 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0x1c8] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_00c6ac56: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0x1c8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_00c6ac74 }
	__asm { L_00c6ac66: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0x1c8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00c6ac74: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_00c6ac8d }
	__asm { add ecx, 0xfffffe38 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c6ac8d: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00c6aca0
extern "C" __declspec(naked) void asm_00c6aca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebx + 0x3c], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_00c6acfd }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00c6acf0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0x38] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_00c6acf0: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0x38] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_00c6ad08 }
	__asm { L_00c6acfd: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0x38] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00c6ad08: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_00c6ad1e }
	__asm { add ecx, -0x38 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c6ad1e: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c6aea0
extern "C" __declspec(naked) void asm_00c6aea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { xor ebx, ebx }
	__asm { nop }
	__asm { L_00c6aeb0: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_00c6aebb }
	__asm { add esi, -0x38 }
	__asm { jmp L_00c6aebd }
	__asm { L_00c6aebb: }
	__asm { xor esi, esi }
	__asm { L_00c6aebd: }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { test eax, eax }
	__asm { je L_00c6aee9 }
	__asm { test al, 1 }
	__asm { jne L_00c6aee2 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00c6aee2 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c6aee2: }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00c6aee9: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { inc ebx }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_00c6aeb0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0057db00();
extern "C" void fn_00c68910();
extern "C" void fn_00c68c80();
extern "C" void fn_00c6ae40();
// FUNCTION: ROBLOXSTUDIO 0x00c6af10
extern "C" __declspec(naked) void asm_00c6af10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { cmp dword ptr [ebx + 8], 0 }
	__asm { jne L_00c6af28 }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6af28: }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c68c80 }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { add esp, 4 }
	__asm { mov eax, edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov edi, dword ptr [ecx + eax*4] }
	__asm { test edi, edi }
	__asm { jne L_00c6af55 }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6af55: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push esi }
	__asm { test ecx, ecx }
	__asm { je L_00c6af99 }
	__asm { L_00c6af5c: }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea eax, [ecx - 0x1c8] }
	__asm { xor edx, edx }
	__asm { mov eax, esi }
	__asm { div dword ptr [ebx + 4] }
	__asm { cmp edx, dword ptr [ebp - 4] }
	__asm { jne L_00c6af99 }
	__asm { cmp esi, dword ptr [ebp - 8] }
	__asm { jne L_00c6af91 }
	__asm { test ecx, ecx }
	__asm { je L_00c6af82 }
	__asm { add ecx, 0xfffffe38 }
	__asm { jmp L_00c6af84 }
	__asm { L_00c6af82: }
	__asm { xor ecx, ecx }
	__asm { L_00c6af84: }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { jne L_00c6afa4 }
	__asm { L_00c6af91: }
	__asm { mov edi, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { jne L_00c6af5c }
	__asm { L_00c6af99: }
	__asm { pop esi }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6afa4: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00c6afb1 }
	__asm { add eax, 0xfffffe38 }
	__asm { jmp L_00c6afb3 }
	__asm { L_00c6afb1: }
	__asm { xor eax, eax }
	__asm { L_00c6afb3: }
	__asm { push dword ptr [eax + 0x1c8] }
	__asm { mov ecx, ebx }
	__asm { push edi }
	__asm { call fn_00c6ae40 }
	__asm { push edi }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov ecx, ebx }
	__asm { mov esi, eax }
	__asm { call fn_0057db00 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e13134[];
extern "C" void fn_0057db00();
extern "C" void fn_00c68910();
extern "C" void fn_00c68a90();
extern "C" void fn_00c68cb0();
extern "C" void fn_00c6aea0();
// FUNCTION: ROBLOXSTUDIO 0x00c6afe0
extern "C" __declspec(naked) void asm_00c6afe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { cmp dword ptr [ebx + 8], 0 }
	__asm { jne L_00c6aff8 }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6aff8: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x7c }
	__asm { push 0 }
	__asm { call fn_00c68cb0 }
	__asm { push eax }
	__asm { call dword ptr [g_00e13134] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea esi, [eax - 0x61c88647] }
	__asm { call fn_00c68a90 }
	__asm { movzx edx, ax }
	__asm { mov ecx, esi }
	__asm { shl ecx, 6 }
	__asm { add edx, ecx }
	__asm { mov eax, esi }
	__asm { shr eax, 2 }
	__asm { add eax, 0x9e3779b9 }
	__asm { add eax, edx }
	__asm { xor eax, esi }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov ecx, edx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov edi, dword ptr [eax + ecx*4] }
	__asm { test edi, edi }
	__asm { je L_00c6b087 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_00c6b087 }
	__asm { L_00c6b050: }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea eax, [ecx - 0x38] }
	__asm { xor edx, edx }
	__asm { mov eax, esi }
	__asm { div dword ptr [ebx + 4] }
	__asm { cmp edx, dword ptr [ebp - 4] }
	__asm { jne L_00c6b087 }
	__asm { cmp esi, dword ptr [ebp - 8] }
	__asm { jne L_00c6b07f }
	__asm { test ecx, ecx }
	__asm { je L_00c6b070 }
	__asm { add ecx, -0x38 }
	__asm { jmp L_00c6b072 }
	__asm { L_00c6b070: }
	__asm { xor ecx, ecx }
	__asm { L_00c6b072: }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { jne L_00c6b092 }
	__asm { L_00c6b07f: }
	__asm { mov edi, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { jne L_00c6b050 }
	__asm { L_00c6b087: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6b092: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00c6b09d }
	__asm { add eax, -0x38 }
	__asm { jmp L_00c6b09f }
	__asm { L_00c6b09d: }
	__asm { xor eax, eax }
	__asm { L_00c6b09f: }
	__asm { push dword ptr [eax + 0x38] }
	__asm { mov ecx, ebx }
	__asm { push edi }
	__asm { call fn_00c6aea0 }
	__asm { push edi }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov ecx, ebx }
	__asm { mov esi, eax }
	__asm { call fn_0057db00 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0042ba60();
extern "C" void fn_0049a1e0();
extern "C" void fn_00c6a300();
extern "C" void fn_00c6b1b0();
// FUNCTION: ROBLOXSTUDIO 0x00c6b210
extern "C" __declspec(naked) void asm_00c6b210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46528 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea edi, [esi + 0x14] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00c6b2bb }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0042ba60 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_00c6b264 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00c6b264: }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { dec ecx }
	__asm { and ecx, dword ptr [edx + 8] }
	__asm { push dword ptr [eax + ecx*4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00c6a300 }
	__asm { mov ecx, esi }
	__asm { call fn_00c6b1b0 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00c6b2b2 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0042ba60 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_00c6b29b }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00c6b29b: }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { dec ecx }
	__asm { and ecx, dword ptr [edx + 8] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { fld qword ptr [eax + 0x30] }
	__asm { mov al, 1 }
	__asm { fstp qword ptr [esi + 0x18] }
	__asm { jmp L_00c6b2bd }
	__asm { L_00c6b2b2: }
	__asm { fldz }
	__asm { mov al, 1 }
	__asm { fstp qword ptr [esi + 0x18] }
	__asm { jmp L_00c6b2bd }
	__asm { L_00c6b2bb: }
	__asm { xor al, al }
	__asm { L_00c6b2bd: }
	__asm { test edi, edi }
	__asm { je L_00c6b2c4 }
	__asm { mov byte ptr [edi], 0 }
	__asm { L_00c6b2c4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012afa44[];
extern "C" char g_012afa48[];
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00c6c350
extern "C" __declspec(naked) void asm_00c6c350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ebx, dword ptr [esi] }
	__asm { add edx, ebx }
	__asm { mov edi, edx }
	__asm { je L_00c6c3e8 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { dec eax }
	__asm { lea ecx, [edi - 1] }
	__asm { and ecx, 0xfffffff8 }
	__asm { and eax, 0xfffffff8 }
	__asm { cmp eax, ecx }
	__asm { jae L_00c6c3e8 }
	__asm { lea edi, [edx + edx] }
	__asm { mov eax, edi }
	__asm { sub eax, ebx }
	__asm { sub eax, dword ptr [ebp + 8] }
	__asm { cmp eax, 0x100000 }
	__asm { jbe L_00c6c38f }
	__asm { lea edi, [edx + 0x100000] }
	__asm { L_00c6c38f: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { lea eax, [edi + 7] }
	__asm { lea ebx, [esi + 0x11] }
	__asm { shr eax, 3 }
	__asm { cmp ecx, ebx }
	__asm { jne L_00c6c3d0 }
	__asm { cmp eax, 0x100 }
	__asm { jbe L_00c6c3e8 }
	__asm { push 0x2fd }
	__asm { push 0xef5bc8 }
	__asm { push eax }
	__asm { call dword ptr [g_012afa44] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { add ecx, 7 }
	__asm { shr ecx, 3 }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0x18 }
	__asm { jmp L_00c6c3e8 }
	__asm { L_00c6c3d0: }
	__asm { push 0x306 }
	__asm { push 0xef5bc8 }
	__asm { push eax }
	__asm { push ecx }
	__asm { call dword ptr [g_012afa48] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_00c6c3e8: }
	__asm { cmp edi, dword ptr [esi + 4] }
	__asm { jbe L_00c6c3f0 }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { L_00c6c3f0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1313c[];
extern "C" char g_012afa44[];
extern "C" char g_01313910[];
extern "C" char g_01313914[];
extern "C" char g_01313918[];
extern "C" char g_0131391c[];
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00c6c400
extern "C" __declspec(naked) void asm_00c6c400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x3b8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { push 0xef5bc8 }
	__asm { push eax }
	__asm { call dword ptr [g_012afa44] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add ecx, 7 }
	__asm { shr ecx, 3 }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 0x18 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov eax, dword ptr [g_01313914] }
	__asm { test al, 1 }
	__asm { jne L_00c6c49d }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313914], eax }
	__asm { mov eax, dword ptr [g_0131391c] }
	__asm { test al, 1 }
	__asm { jne L_00c6c489 }
	__asm { or eax, 1 }
	__asm { push 0x3039 }
	__asm { mov dword ptr [g_0131391c], eax }
	__asm { call dword ptr [g_00e1313c] }
	__asm { cmp eax, 0x3039 }
	__asm { sete cl }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { mov byte ptr [g_01313918], cl }
	__asm { mov byte ptr [g_01313910], cl }
	__asm { sete al }
	__asm { ret }
	__asm { L_00c6c489: }
	__asm { mov cl, byte ptr [g_01313918] }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { mov byte ptr [g_01313910], cl }
	__asm { sete al }
	__asm { ret }
	__asm { L_00c6c49d: }
	__asm { mov cl, byte ptr [g_01313910] }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { sete al }
	__asm { ret }
}

extern "C" void fn_00c6c440();
// FUNCTION: ROBLOXSTUDIO 0x00c6c690
extern "C" __declspec(naked) void asm_00c6c690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add eax, 0x20 }
	__asm { cmp eax, dword ptr [esi] }
	__asm { jbe L_00c6c6a7 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6c6a7: }
	__asm { call fn_00c6c440 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { shr ecx, 3 }
	__asm { test al, al }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { je L_00c6c6fc }
	__asm { mov al, byte ptr [ecx + eax + 3] }
	__asm { mov byte ptr [edx], al }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { shr ecx, 3 }
	__asm { mov al, byte ptr [ecx + eax + 2] }
	__asm { mov byte ptr [edx + 1], al }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { shr ecx, 3 }
	__asm { mov al, byte ptr [ecx + eax + 1] }
	__asm { mov byte ptr [edx + 2], al }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { shr ecx, 3 }
	__asm { mov al, byte ptr [ecx + eax] }
	__asm { mov byte ptr [edx + 3], al }
	__asm { add dword ptr [esi + 8], 0x20 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6c6fc: }
	__asm { mov al, byte ptr [ecx + eax] }
	__asm { mov byte ptr [edx], al }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { shr ecx, 3 }
	__asm { mov al, byte ptr [ecx + eax + 1] }
	__asm { mov byte ptr [edx + 1], al }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { shr ecx, 3 }
	__asm { mov al, byte ptr [ecx + eax + 2] }
	__asm { mov byte ptr [edx + 2], al }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { shr ecx, 3 }
	__asm { mov al, byte ptr [ecx + eax + 3] }
	__asm { mov byte ptr [edx + 3], al }
	__asm { add dword ptr [esi + 8], 0x20 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6c350();
extern "C" void fn_00c6c440();
// FUNCTION: ROBLOXSTUDIO 0x00c6cd60
extern "C" __declspec(naked) void asm_00c6cd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x20 }
	__asm { mov edi, ecx }
	__asm { call fn_00c6c350 }
	__asm { call fn_00c6c440 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { shr edx, 3 }
	__asm { test al, al }
	__asm { je L_00c6cdaa }
	__asm { mov al, byte ptr [esi + 3] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov al, byte ptr [esi + 2] }
	__asm { shr edx, 3 }
	__asm { mov byte ptr [edx + ecx + 1], al }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov al, byte ptr [esi + 1] }
	__asm { shr edx, 3 }
	__asm { mov byte ptr [edx + ecx + 2], al }
	__asm { mov al, byte ptr [esi] }
	__asm { jmp L_00c6cdd0 }
	__asm { L_00c6cdaa: }
	__asm { mov al, byte ptr [esi] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov al, byte ptr [esi + 1] }
	__asm { shr edx, 3 }
	__asm { mov byte ptr [edx + ecx + 1], al }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov al, byte ptr [esi + 2] }
	__asm { shr edx, 3 }
	__asm { mov byte ptr [edx + ecx + 2], al }
	__asm { mov al, byte ptr [esi + 3] }
	__asm { L_00c6cdd0: }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { shr edx, 3 }
	__asm { mov byte ptr [edx + ecx + 3], al }
	__asm { add dword ptr [edi], 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6c350();
extern "C" void fn_00c6cf00();
// FUNCTION: ROBLOXSTUDIO 0x00c6ce20
extern "C" __declspec(naked) void asm_00c6ce20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov edi, ecx }
	__asm { call fn_00c6c350 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00c6ceeb }
	__asm { xor ecx, ecx }
	__asm { cmp esi, 8 }
	__asm { jb L_00c6ce4c }
	__asm { lea ecx, [esi + 7] }
	__asm { shr ecx, 3 }
	__asm { and esi, 7 }
	__asm { L_00c6ce4c: }
	__asm { test esi, esi }
	__asm { jle L_00c6ced4 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov eax, edx }
	__asm { and eax, 7 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov al, byte ptr [eax] }
	__asm { mov ecx, esi }
	__asm { shl al, cl }
	__asm { shr edx, 3 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { jne L_00c6ce83 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov cl, byte ptr [ebp + 0xb] }
	__asm { mov byte ptr [edx + eax], cl }
	__asm { jmp L_00c6ceb3 }
	__asm { L_00c6ce83: }
	__asm { movzx ecx, byte ptr [ebp + 0x10] }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { add edx, dword ptr [edi + 0xc] }
	__asm { shr al, cl }
	__asm { mov ecx, 8 }
	__asm { sub ecx, dword ptr [ebp + 0x10] }
	__asm { or byte ptr [edx], al }
	__asm { cmp ecx, 8 }
	__asm { jae L_00c6ceb3 }
	__asm { cmp ecx, ebx }
	__asm { jae L_00c6ceb3 }
	__asm { mov dl, byte ptr [ebp + 0xb] }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { shl dl, cl }
	__asm { mov ecx, dword ptr [edi] }
	__asm { shr ecx, 3 }
	__asm { mov byte ptr [ecx + eax + 1], dl }
	__asm { L_00c6ceb3: }
	__asm { mov eax, 8 }
	__asm { sub eax, esi }
	__asm { add dword ptr [edi], eax }
	__asm { sub ebx, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push ebx }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c6cf00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c6ced4: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { add eax, ecx }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c6cf00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c6ceeb: }
	__asm { push 0 }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_00c6cf00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
extern "C" void fn_006b98c0();
extern "C" void fn_00c6c7a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c6d230
extern "C" __declspec(naked) void asm_00c6d230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd66fa1 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00c6c7a0 }
	__asm { test al, al }
	__asm { jne L_00c6d2c3 }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xef617c }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { mov esi, eax }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x48], 0xef5c28 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x116eac8 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { L_00c6d2c3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
extern "C" void fn_006b98c0();
extern "C" void fn_00c6c7a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c6d2e0
extern "C" __declspec(naked) void asm_00c6d2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd66fa1 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00c6c7a0 }
	__asm { test al, al }
	__asm { jne L_00c6d373 }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xef6154 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { mov esi, eax }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x48], 0xef5c28 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x116eac8 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { L_00c6d373: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
extern "C" void fn_006b98c0();
extern "C" void fn_00c6c7a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c6d390
extern "C" __declspec(naked) void asm_00c6d390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd66fa1 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00c6c7a0 }
	__asm { test al, al }
	__asm { jne L_00c6d423 }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xef61ac }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { mov esi, eax }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x48], 0xef5c28 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x116eac8 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { L_00c6d423: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_004039a0();
extern "C" void fn_00c6c560();
extern "C" void fn_00c6e220();
extern "C" void fn_00cf67ec();
extern "C" void fn_00cf6810();
// FUNCTION: ROBLOXSTUDIO 0x00c6d8e0
extern "C" __declspec(naked) void asm_00c6d8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd66fd5 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x7c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00c6e220 }
	__asm { test al, al }
	__asm { jne L_00c6d97f }
	__asm { push 0x30 }
	__asm { push 0xef6334 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], al }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [ebp - 0x64] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x64], 0xef5c28 }
	__asm { mov dword ptr [ebp - 0x44], 0xf }
	__asm { mov dword ptr [ebp - 0x48], 0 }
	__asm { mov byte ptr [ebp - 0x58], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x116eac8 }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00c6d97f: }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { cmp edi, 0x7d000 }
	__asm { jbe L_00c6d9ef }
	__asm { push 0xef6368 }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { call fn_004039a0 }
	__asm { lea ecx, [ebp - 0x88] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x7c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp - 0x88], 0xef5c28 }
	__asm { mov dword ptr [ebp - 0x68], 0xf }
	__asm { mov dword ptr [ebp - 0x6c], 0 }
	__asm { mov byte ptr [ebp - 0x7c], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x116eac8 }
	__asm { lea eax, [ebp - 0x88] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00cf67ec }
	__asm { L_00c6d9ef: }
	__asm { lea eax, [edi + 1] }
	__asm { call fn_00cf6810 }
	__asm { mov esi, esp }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00c6c560 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, ebx }
	__asm { lea esp, [ebp - 0x94] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_008e9bd0();
extern "C" void fn_00c6c7a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c6da30
extern "C" __declspec(naked) void asm_00c6da30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd66ff1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x40 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 6 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00c6c7a0 }
	__asm { test al, al }
	__asm { jne L_00c6dad5 }
	__asm { push 0x1e }
	__asm { push 0xef641c }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], al }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x4c], 0xef5c28 }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x116eac8 }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00c6dad5: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { call fn_008e9bd0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + esi*4] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_007cb440();
extern "C" void fn_00826b00();
extern "C" void fn_00c6d780();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c6db30
extern "C" __declspec(naked) void asm_00c6db30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54168 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6d780 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { call fn_00826b00 }
	__asm { add esp, 4 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp edi, eax }
	__asm { je L_00c6dbca }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00403540 }
	__asm { L_00c6dbca: }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { jb L_00c6dbe1 }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c6dbe1: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00c6dbf2 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c6dbf2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6d2e0();
extern "C" void fn_00c6d460();
extern "C" void fn_00c6e0a0();
// FUNCTION: ROBLOXSTUDIO 0x00c6ddc0
extern "C" __declspec(naked) void asm_00c6ddc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call fn_00c6e0a0 }
	__asm { add esp, 8 }
	__asm { cmp byte ptr [ebp - 1], 0 }
	__asm { je L_00c6de1c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c6d460 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c6d460 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c6d460 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { jmp L_00c6de46 }
	__asm { L_00c6de1c: }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c6d2e0 }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c6d2e0 }
	__asm { lea eax, [ebp - 2] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c6d2e0 }
	__asm { movsx edi, byte ptr [ebp + 0xb] }
	__asm { movsx edx, byte ptr [ebp - 1] }
	__asm { movsx eax, byte ptr [ebp - 2] }
	__asm { L_00c6de46: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ecx], edi }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
extern "C" void fn_006b98c0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c6e0a0
extern "C" __declspec(naked) void asm_00c6e0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd671b1 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 8] }
	__asm { lea eax, [edi + 1] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { ja L_00c6e0fc }
	__asm { mov ecx, edi }
	__asm { and ecx, 7 }
	__asm { mov edx, 0x80 }
	__asm { sar edx, cl }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { shr edi, 3 }
	__asm { mov eax, esi }
	__asm { test byte ptr [edi + ecx], dl }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { setne dl }
	__asm { mov byte ptr [ecx], dl }
	__asm { inc dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c6e0fc: }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xef61dc }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { mov esi, eax }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x48], 0xef5c28 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x116eac8 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_01313910[];
extern "C" char g_01313914[];
extern "C" void fn_00c6c4d0();
extern "C" void fn_00c6c7a0();
extern "C" void fn_00c6ca80();
// FUNCTION: ROBLOXSTUDIO 0x00c6e160
extern "C" __declspec(naked) void asm_00c6e160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6710e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01313914] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c6e1a7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313914], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6c4d0 }
	__asm { mov byte ptr [g_01313910], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_00c6e1ac }
	__asm { L_00c6e1a7: }
	__asm { mov al, byte ptr [g_01313910] }
	__asm { L_00c6e1ac: }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { push 0x10 }
	__asm { test al, al }
	__asm { jne L_00c6e1fa }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00c6c7a0 }
	__asm { test al, al }
	__asm { je L_00c6e1e7 }
	__asm { push 2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00c6ca80 }
	__asm { add esp, 0xc }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6e1e7: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6e1fa: }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c6c7a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01313910[];
extern "C" char g_01313914[];
extern "C" void fn_00c6c4d0();
extern "C" void fn_00c6c7a0();
extern "C" void fn_00c6ca80();
// FUNCTION: ROBLOXSTUDIO 0x00c6e220
extern "C" __declspec(naked) void asm_00c6e220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6710e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01313914] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c6e267 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313914], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6c4d0 }
	__asm { mov byte ptr [g_01313910], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_00c6e26c }
	__asm { L_00c6e267: }
	__asm { mov al, byte ptr [g_01313910] }
	__asm { L_00c6e26c: }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { push 0x20 }
	__asm { test al, al }
	__asm { jne L_00c6e2ba }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00c6c7a0 }
	__asm { test al, al }
	__asm { je L_00c6e2a7 }
	__asm { push 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00c6ca80 }
	__asm { add esp, 0xc }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6e2a7: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6e2ba: }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c6c7a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01313910[];
extern "C" char g_01313914[];
extern "C" void fn_00c6c4d0();
extern "C" void fn_00c6c7a0();
extern "C" void fn_00c6ca80();
// FUNCTION: ROBLOXSTUDIO 0x00c6e2e0
extern "C" __declspec(naked) void asm_00c6e2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6710e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01313914] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c6e329 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313914], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6c4d0 }
	__asm { mov byte ptr [g_01313910], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_00c6e32e }
	__asm { L_00c6e329: }
	__asm { mov al, byte ptr [g_01313910] }
	__asm { L_00c6e32e: }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { push 0x40 }
	__asm { test al, al }
	__asm { jne L_00c6e37c }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00c6c7a0 }
	__asm { test al, al }
	__asm { je L_00c6e369 }
	__asm { push 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00c6ca80 }
	__asm { add esp, 0xc }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6e369: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6e37c: }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c6c7a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006dea00();
extern "C" void fn_008b1300();
extern "C" void fn_00c6d640();
// FUNCTION: ROBLOXSTUDIO 0x00c6f130
extern "C" __declspec(naked) void asm_00c6f130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd675f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x28], 0xe461dc }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x24], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6d640 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c6d640 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c6d640 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c6d640 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c6d640 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c6d640 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0x30 }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { pop esi }
	__asm { je L_00c6f1db }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_008b1300 }
	__asm { L_00c6f1db: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cc240();
extern "C" void fn_00bfdcb0();
extern "C" void fn_00c705a0();
// FUNCTION: ROBLOXSTUDIO 0x00c6f540
extern "C" __declspec(naked) void asm_00c6f540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67068 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { call fn_00bfdcb0 }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cc240 }
	__asm { mov esi, dword ptr [eax] }
	__asm { call fn_007cc240 }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { cmp esi, edi }
	__asm { je L_00c6f5d5 }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { L_00c6f597: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 0x1c], 0 }
	__asm { call fn_00c705a0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test eax, eax }
	__asm { je L_00c6f5c8 }
	__asm { L_00c6f5c3: }
	__asm { inc ecx }
	__asm { shr eax, 1 }
	__asm { jne L_00c6f5c3 }
	__asm { L_00c6f5c8: }
	__asm { add esi, 4 }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { cmp esi, edi }
	__asm { jne L_00c6f597 }
	__asm { L_00c6f5d5: }
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

extern "C" void fn_007cc2a0();
extern "C" void fn_00bfdcb0();
extern "C" void fn_00c705a0();
// FUNCTION: ROBLOXSTUDIO 0x00c6f5f0
extern "C" __declspec(naked) void asm_00c6f5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67068 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { call fn_00bfdcb0 }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cc2a0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { call fn_007cc2a0 }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { cmp esi, edi }
	__asm { je L_00c6f685 }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { L_00c6f647: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 0x1c], 0 }
	__asm { call fn_00c705a0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test eax, eax }
	__asm { je L_00c6f678 }
	__asm { L_00c6f673: }
	__asm { inc ecx }
	__asm { shr eax, 1 }
	__asm { jne L_00c6f673 }
	__asm { L_00c6f678: }
	__asm { add esi, 4 }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { cmp esi, edi }
	__asm { jne L_00c6f647 }
	__asm { L_00c6f685: }
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

extern "C" void fn_00794450();
extern "C" void fn_00bfdcb0();
extern "C" void fn_00c705a0();
// FUNCTION: ROBLOXSTUDIO 0x00c6f6a0
extern "C" __declspec(naked) void asm_00c6f6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67068 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { call fn_00bfdcb0 }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00794450 }
	__asm { mov esi, dword ptr [eax] }
	__asm { call fn_00794450 }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { cmp esi, edi }
	__asm { je L_00c6f735 }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { L_00c6f6f7: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 0x1c], 0 }
	__asm { call fn_00c705a0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test eax, eax }
	__asm { je L_00c6f728 }
	__asm { L_00c6f723: }
	__asm { inc ecx }
	__asm { shr eax, 1 }
	__asm { jne L_00c6f723 }
	__asm { L_00c6f728: }
	__asm { add esi, 4 }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { cmp esi, edi }
	__asm { jne L_00c6f6f7 }
	__asm { L_00c6f735: }
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

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
extern "C" void fn_006b98c0();
extern "C" void fn_00c6e3a0();
extern "C" void fn_00cb91b0();
extern "C" void fn_00cb94e0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c6fc90
extern "C" __declspec(naked) void asm_00c6fc90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd671b1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp eax, 0x30d40 }
	__asm { jbe L_00c6fd1d }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xef6254 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { mov esi, eax }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x48], 0xef5c28 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x116eac8 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00c6fd1d: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c6e3a0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00c6fd33 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00c6fd33: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push edi }
	__asm { inc ecx }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00cb94e0 }
	__asm { mov ecx, eax }
	__asm { call fn_00cb91b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
extern "C" void fn_006b98c0();
extern "C" void fn_00c6cc40();
extern "C" void fn_00c6e3a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c6fd60
extern "C" __declspec(naked) void asm_00c6fd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd671b1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp eax, 0x7d000 }
	__asm { jbe L_00c6fded }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xef6300 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { mov esi, eax }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x48], 0xef5c28 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x116eac8 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00c6fded: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c6e3a0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00c6fe03 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00c6fe03: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call fn_00c6cc40 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6cac0();
extern "C" void fn_00c6cae0();
extern "C" void fn_00c70300();
extern "C" void fn_00c703b0();
// FUNCTION: ROBLOXSTUDIO 0x00c70030
extern "C" __declspec(naked) void asm_00c70030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, 0x7f }
	__asm { jg L_00c70091 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { cmp ecx, 0x7f }
	__asm { jg L_00c70091 }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { cmp edx, 0x7f }
	__asm { jg L_00c70091 }
	__asm { cmp eax, -0x80 }
	__asm { jl L_00c70091 }
	__asm { cmp ecx, -0x80 }
	__asm { jl L_00c70091 }
	__asm { cmp edx, -0x80 }
	__asm { jl L_00c70091 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00c6cac0 }
	__asm { movzx eax, byte ptr [edi] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c70300 }
	__asm { movzx ecx, byte ptr [edi + 4] }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00c70300 }
	__asm { movzx ecx, byte ptr [edi + 8] }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00c70300 }
	__asm { add esp, 0x18 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c70091: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00c6cae0 }
	__asm { push dword ptr [edi] }
	__asm { push esi }
	__asm { call fn_00c703b0 }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_00c703b0 }
	__asm { push dword ptr [edi + 8] }
	__asm { push esi }
	__asm { call fn_00c703b0 }
	__asm { add esp, 0x18 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01313910[];
extern "C" char g_01313914[];
extern "C" void fn_00c6c4d0();
extern "C" void fn_00c6ca80();
extern "C" void fn_00c6cf00();
extern "C" void fn_00c6e3a0();
// FUNCTION: ROBLOXSTUDIO 0x00c70160
extern "C" __declspec(naked) void asm_00c70160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6710e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c6e3a0 }
	__asm { movsx eax, word ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [g_01313914] }
	__asm { test al, 1 }
	__asm { jne L_00c701ba }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313914], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6c4d0 }
	__asm { mov byte ptr [g_01313910], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_00c701bf }
	__asm { L_00c701ba: }
	__asm { mov al, byte ptr [g_01313910] }
	__asm { L_00c701bf: }
	__asm { test al, al }
	__asm { jne L_00c701da }
	__asm { push 4 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00c6ca80 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp + 8] }
	__asm { jmp L_00c701dd }
	__asm { L_00c701da: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { L_00c701dd: }
	__asm { push 1 }
	__asm { push 0x20 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c6cf00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008f1f00();
extern "C" void fn_00c6e500();
extern "C" void fn_00c6e570();
extern "C" void fn_00c6ea10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c70630
extern "C" __declspec(naked) void asm_00c70630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67130 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { jne L_00c70680 }
	__asm { L_00c70661: }
	__asm { push ebx }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_008f1f00 }
	__asm { test al, al }
	__asm { je L_00c70673 }
	__asm { mov edi, dword ptr [edi + 8] }
	__asm { jmp L_00c70677 }
	__asm { L_00c70673: }
	__asm { mov esi, edi }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_00c70677: }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { je L_00c70661 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { L_00c70680: }
	__asm { cmp esi, dword ptr [eax] }
	__asm { je L_00c70697 }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008f1f00 }
	__asm { test al, al }
	__asm { je L_00c7071c }
	__asm { L_00c70697: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00c6e500 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00c6ea10 }
	__asm { mov edi, dword ptr [ebp - 0x28] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00c7071c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { push edi }
	__asm { call fn_00c6e570 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_00c7071c: }
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

extern "C" char g_00e1025c[];
extern "C" void fn_00c6e570();
extern "C" void fn_00c6efb0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c70900
extern "C" __declspec(naked) void asm_00c70900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67140 }
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
	__asm { je L_00c70955 }
	__asm { cmp edi, 0x15555555 }
	__asm { ja L_00c7094f }
	__asm { lea eax, [edi + edi*2] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00c70955 }
	__asm { L_00c7094f: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00c70955: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00c6efb0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { sar edx, 1 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { test eax, eax }
	__asm { je L_00c709b5 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 4] }
	__asm { push eax }
	__asm { call fn_00c6e570 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { add esp, 0x14 }
	__asm { L_00c709b5: }
	__asm { lea eax, [edi + edi*2] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { lea eax, [ecx + ecx*2] }
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
extern "C" void fn_00c70900();
// FUNCTION: ROBLOXSTUDIO 0x00c70a00
extern "C" __declspec(naked) void asm_00c70a00()
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
	__asm { jae L_00c70a98 }
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
	__asm { jae L_00c70a4f }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00c70a4f: }
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
	__asm { jae L_00c70a85 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c70900 }
	__asm { L_00c70a85: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c70900 }
	__asm { L_00c70a98: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c34f20();
extern "C" void fn_00c6f2b0();
// FUNCTION: ROBLOXSTUDIO 0x00c70bb0
extern "C" __declspec(naked) void asm_00c70bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_00c70c11 }
	__asm { mov ecx, dword ptr [edi + 0xe80] }
	__asm { push esi }
	__asm { call fn_00c34f20 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { add edi, 0x64 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { movzx eax, byte ptr [edi] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { add eax, edi }
	__asm { je L_00c70be7 }
	__asm { inc eax }
	__asm { jmp L_00c70be9 }
	__asm { L_00c70be7: }
	__asm { xor eax, eax }
	__asm { L_00c70be9: }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov eax, ecx }
	__asm { shr eax, 3 }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c6f2b0 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp - 4], eax }
	__asm { pop edi }
	__asm { setne al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c70c11: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00c70cf0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c70c20
extern "C" __declspec(naked) void asm_00c70c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd66ff1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x40 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00c70cf0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 0x10 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call eax }
	__asm { pop esi }
	__asm { test al, al }
	__asm { jne L_00c70cdc }
	__asm { push 0x21 }
	__asm { push 0xef6088 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], al }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x4c], 0xef5c28 }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x116eac8 }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00c70cdc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
extern "C" void fn_004039a0();
extern "C" void fn_007cb440();
extern "C" void fn_00c6c7a0();
extern "C" void fn_00c72030();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c70e70
extern "C" __declspec(naked) void asm_00c70e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd671b1 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [edi + 0x64] }
	__asm { call fn_00c72030 }
	__asm { call fn_007cb440 }
	__asm { cmp dword ptr [esi], eax }
	__asm { je L_00c70f21 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [esi + 4] }
	__asm { push 1 }
	__asm { mov dword ptr [eax], 0 }
	__asm { push dword ptr [edi + 0xe90] }
	__asm { push eax }
	__asm { call fn_00c6c7a0 }
	__asm { test al, al }
	__asm { jne L_00c70f28 }
	__asm { push 0xef643c }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_004039a0 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x48], 0xef5c28 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x116eac8 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00c70f21: }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { L_00c70f28: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00463db0();
extern "C" void fn_006b9740();
extern "C" void fn_00c32520();
extern "C" void fn_00c70e70();
// FUNCTION: ROBLOXSTUDIO 0x00c710b0
extern "C" __declspec(naked) void asm_00c710b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { call fn_00c70e70 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebx + 0xe80] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00c32520 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov bl, al }
	__asm { je L_00c71144 }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00c71144 }
	__asm { push eax }
	__asm { call fn_00463db0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c71144 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00463db0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov esi, eax }
	__asm { call fn_00463db0 }
	__asm { add esp, 8 }
	__asm { cmp esi, eax }
	__asm { je L_00c71144 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c7112f }
	__asm { push 0x49e }
	__asm { push 0xef5ef0 }
	__asm { push 0xef6460 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c71144 }
	__asm { L_00c7112f: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xef6500 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c71144: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
extern "C" void fn_00c6c7a0();
extern "C" void fn_00c6d780();
extern "C" void fn_00cc6590();
// FUNCTION: ROBLOXSTUDIO 0x00c71fa0
extern "C" __declspec(naked) void asm_00c71fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push 1 }
	__asm { push 8 }
	__asm { lea eax, [ebp - 1] }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00c6c7a0 }
	__asm { mov al, byte ptr [ebp - 1] }
	__asm { test al, al }
	__asm { jne L_00c71fd2 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cc6590 }
	__asm { add esp, 4 }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c71fd2: }
	__asm { jns L_00c72009 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c6d780 }
	__asm { movzx eax, byte ptr [ebp - 1] }
	__asm { and eax, 0x7f }
	__asm { add esp, 8 }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea ecx, [ebx + eax*8] }
	__asm { cmp ecx, esi }
	__asm { je L_00c71fff }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00403540 }
	__asm { L_00c71fff: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c72009: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { movzx eax, al }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea eax, [ebx + eax*8] }
	__asm { cmp ecx, eax }
	__asm { je L_00c72023 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00c72023: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00c6cf00();
// FUNCTION: ROBLOXSTUDIO 0x00c72190
extern "C" __declspec(naked) void asm_00c72190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, eax }
	__asm { je L_00c721e5 }
	__asm { test esi, esi }
	__asm { jne L_00c721e5 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c721d0 }
	__asm { push 0x42 }
	__asm { push 0xef5ef0 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c721e5 }
	__asm { L_00c721d0: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xef6038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c721e5: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { je L_00c7222f }
	__asm { cmp eax, dword ptr [edi + 0x28] }
	__asm { jb L_00c7222f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c7221a }
	__asm { push 0x26 }
	__asm { push 0xef5ef0 }
	__asm { push 0xef5f2c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c7222f }
	__asm { L_00c7221a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xef5f50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c7222f: }
	__asm { test esi, esi }
	__asm { jne L_00c72236 }
	__asm { mov esi, dword ptr [edi + 0x2c] }
	__asm { L_00c72236: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push 1 }
	__asm { lea eax, [esi + 1] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00c6cf00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a57d8[];
extern "C" void fn_00c6cf00();
extern "C" void fn_00c6fc90();
extern "C" void fn_00cc4dc0();
extern "C" void fn_00cc4df0();
extern "C" void fn_00cc5430();
// FUNCTION: ROBLOXSTUDIO 0x00c72380
extern "C" __declspec(naked) void asm_00c72380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd67288 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 4 }
	__asm { cmp byte ptr [g_012a57d8], 0 }
	__asm { mov ebx, ecx }
	__asm { je L_00c723e7 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00c723b6 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00c723b6: }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00cc4dc0 }
	__asm { add esp, 8 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cc5430 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00cc4df0 }
	__asm { jmp L_00c723f4 }
	__asm { L_00c723e7: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00c6fc90 }
	__asm { add esp, 8 }
	__asm { L_00c723f4: }
	__asm { push 1 }
	__asm { push dword ptr [ebx + 0xe90] }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c6cf00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012a57d8[];
extern "C" void fn_00c34f20();
extern "C" void fn_00c6fc90();
extern "C" void fn_00c72380();
extern "C" void fn_00cc4de0();
extern "C" void fn_00cc4df0();
extern "C" void fn_00cc5430();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c72420
extern "C" __declspec(naked) void asm_00c72420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd672b0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_00c7247e }
	__asm { mov ecx, dword ptr [edi + 0xe80] }
	__asm { push esi }
	__asm { call fn_00c34f20 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_00c72380 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c7247e: }
	__asm { cmp byte ptr [g_012a57d8], 0 }
	__asm { je L_00c724c1 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00cc4de0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cc5430 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00cc4df0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c724c1: }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00c6fc90 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00c724fa }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c724fa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
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
extern "C" void fn_00c6cf00();
extern "C" void fn_00c6f2b0();
// FUNCTION: ROBLOXSTUDIO 0x00c72650
extern "C" __declspec(naked) void asm_00c72650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [edx + 0x14], 0 }
	__asm { jne L_00c7266b }
	__asm { mov byte ptr [ebp + 0xf], 0 }
	__asm { lea eax, [ebp + 0xf] }
	__asm { jmp L_00c72735 }
	__asm { L_00c7266b: }
	__asm { movzx eax, byte ptr [ecx] }
	__asm { inc eax }
	__asm { add eax, ecx }
	__asm { je L_00c72676 }
	__asm { inc eax }
	__asm { jmp L_00c72678 }
	__asm { L_00c72676: }
	__asm { xor eax, eax }
	__asm { L_00c72678: }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, edx }
	__asm { shr eax, 3 }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_00c6f2b0 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { test eax, eax }
	__asm { jne L_00c7269d }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c7269d: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov al, byte ptr [eax + 4] }
	__asm { mov byte ptr [ebp - 1], al }
	__asm { je L_00c72732 }
	__asm { test al, al }
	__asm { jns L_00c726ed }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c726d5 }
	__asm { push 0x85 }
	__asm { push 0xef5c30 }
	__asm { push 0xef5c6c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c726ea }
	__asm { L_00c726d5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xef5c80 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c726ea: }
	__asm { mov al, byte ptr [ebp - 1] }
	__asm { L_00c726ed: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c72732 }
	__asm { and al, 0x7f }
	__asm { cmp al, 0x80 }
	__asm { jb L_00c72732 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c7271d }
	__asm { push 0x86 }
	__asm { push 0xef5c30 }
	__asm { push 0xef5cdc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c72732 }
	__asm { L_00c7271d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xef5d00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c72732: }
	__asm { lea eax, [ebp - 1] }
	__asm { L_00c72735: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 8 }
	__asm { push eax }
	__asm { call fn_00c6cf00 }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c34f20();
extern "C" void fn_00c6cf00();
extern "C" void fn_00c72650();
// FUNCTION: ROBLOXSTUDIO 0x00c72750
extern "C" __declspec(naked) void asm_00c72750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_00c727af }
	__asm { mov ecx, dword ptr [edi + 0xe80] }
	__asm { push esi }
	__asm { call fn_00c34f20 }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x64] }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_00c72650 }
	__asm { test al, al }
	__asm { jne L_00c72792 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c72792: }
	__asm { push 1 }
	__asm { push dword ptr [edi + 0xe90] }
	__asm { lea eax, [ebp - 4] }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00c6cf00 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c727af: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 8 }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { mov byte ptr [ebp + 0xf], 0 }
	__asm { call fn_00c6cf00 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c6cac0();
extern "C" void fn_00c6cae0();
extern "C" void fn_00c6cf00();
extern "C" void fn_00c703b0();
extern "C" void fn_00c715b0();
// FUNCTION: ROBLOXSTUDIO 0x00c729a0
extern "C" __declspec(naked) void asm_00c729a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00c715b0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { mov ecx, esi }
	__asm { test al, al }
	__asm { je L_00c72a01 }
	__asm { call fn_00c6cae0 }
	__asm { push 1 }
	__asm { push 0xb }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c6cf00 }
	__asm { push 1 }
	__asm { push 0xb }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c6cf00 }
	__asm { push 1 }
	__asm { push 0xb }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c6cf00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c72a01: }
	__asm { call fn_00c6cac0 }
	__asm { fld dword ptr [edi] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push esi }
	__asm { call fn_00c703b0 }
	__asm { fld dword ptr [edi + 4] }
	__asm { add esp, 4 }
	__asm { fstp dword ptr [esp] }
	__asm { push esi }
	__asm { call fn_00c703b0 }
	__asm { fld dword ptr [edi + 8] }
	__asm { add esp, 4 }
	__asm { fstp dword ptr [esp] }
	__asm { push esi }
	__asm { call fn_00c703b0 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01310a84[];
extern "C" void fn_004118e0();
extern "C" void fn_0048d4a0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00c78ca0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c72af0
extern "C" __declspec(naked) void asm_00c72af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd672e6 }
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
	__asm { call fn_00c78ca0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_01310a84] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00c72bac }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310a84], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xef66ac }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1310958 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08f70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00c72bac: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x1310958 }
	__asm { call fn_0048d4a0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xef7774 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c72c2a }
	__asm { push 0x12a15b0 }
	__asm { mov ecx, 0x12a15b0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c72c2a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c72c15 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c72c2a }
	__asm { L_00c72c15: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c72c2a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01310a84[];
extern "C" void fn_0040bac0();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00c78cf0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c72c40
extern "C" __declspec(naked) void asm_00c72c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd672e6 }
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
	__asm { call fn_00c78cf0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_01310a84] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00c72cfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310a84], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xef66ac }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1310958 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08f70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00c72cfc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x1310958 }
	__asm { call fn_0040bac0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xef7730 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c72d7a }
	__asm { push 0x12a15b0 }
	__asm { mov ecx, 0x12a15b0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c72d7a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c72d65 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c72d7a }
	__asm { L_00c72d65: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c72d7a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e1031c[];
extern "C" char g_00e1037c[];
extern "C" char g_00e10398[];
extern "C" char g_00e103b4[];
extern "C" char g_00e103b8[];
extern "C" void fn_00c89b00();
// FUNCTION: ROBLOXSTUDIO 0x00c72d90
extern "C" __declspec(naked) void asm_00c72d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67320 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { cmp dword ptr [ebp + 0x14], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00c72de4 }
	__asm { mov dword ptr [edi + 0x60], 0xef885c }
	__asm { mov eax, dword ptr [g_00e103b4] }
	__asm { mov dword ptr [edi + 0x78], eax }
	__asm { mov eax, dword ptr [g_00e103b8] }
	__asm { mov dword ptr [edi + 0x78], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00c72de4: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov byte ptr [edi + 0x44], 0 }
	__asm { or dword ptr [edi + 0x38], 1 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { mov byte ptr [edi + 0x58], 1 }
	__asm { mov dword ptr [edi], 0xef87e4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push edi }
	__asm { lea ecx, [edi + 0x60] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e1037c] }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edi + 0x60], 0xef8840 }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x18] }
	__asm { mov dword ptr [ecx + edi + 0x5c], eax }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0 }
	__asm { mov dword ptr [eax + edi + 0x60], 0xef8850 }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x18] }
	__asm { mov dword ptr [ecx + edi + 0x5c], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { lea ecx, [edi + 0x60] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add ecx, eax }
	__asm { call dword ptr [g_00e10398] }
	__asm { push -1 }
	__asm { push -1 }
	__asm { push -1 }
	__asm { push -1 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c89b00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c72ed0
extern "C" __declspec(naked) void asm_00c72ed0()
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
	__asm { mov dword ptr [esi + 8], 0xef4d3c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xef99a4 }
	__asm { mov dword ptr [esi + 8], 0xef99b4 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c72f7a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00c72f66 }
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
	__asm { L_00c72f66: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c72f7a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00b7f950();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c74030
extern "C" __declspec(naked) void asm_00c74030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67411 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_00b7f950 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { lea esi, [edi + 0x10] }
	__asm { mov word ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00c740a5 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov al, byte ptr [ebx + 0x1c] }
	__asm { mov byte ptr [esi + 0x1c], al }
	__asm { L_00c740a5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
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

extern "C" char g_01313d04[];
extern "C" char g_01313d08[];
extern "C" char g_01313d0c[];
extern "C" char g_01313d10[];
extern "C" char g_01313d14[];
extern "C" char g_01313d18[];
extern "C" char g_01313d54[];
extern "C" char g_01313d58[];
extern "C" void fn_007cb250();
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00c74f10
extern "C" __declspec(naked) void asm_00c74f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd675be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01313d10] }
	__asm { test al, 1 }
	__asm { jne L_00c74f52 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313d10], eax }
	__asm { push 0xef3ee0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01313d0c], eax }
	__asm { L_00c74f52: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd674ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01313d18] }
	__asm { test al, 1 }
	__asm { jne L_00c74fa2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313d18], eax }
	__asm { push 0xef3ea4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01313d14], eax }
	__asm { L_00c74fa2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd674ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01313d08] }
	__asm { test al, 1 }
	__asm { jne L_00c74ff2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313d08], eax }
	__asm { push 0xef6660 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01313d04], eax }
	__asm { L_00c74ff2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd674ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01313d58] }
	__asm { test al, 1 }
	__asm { jne L_00c7503a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313d58], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_01313d54], eax }
	__asm { L_00c7503a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00656f60();
extern "C" void fn_00c7a510();
// FUNCTION: ROBLOXSTUDIO 0x00c75330
extern "C" __declspec(naked) void asm_00c75330()
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
	__asm { push 0x2c }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c7537b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c7537b: }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00c75396 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c7a510 }
	__asm { mov esi, eax }
	__asm { jmp L_00c75398 }
	__asm { L_00c75396: }
	__asm { xor esi, esi }
	__asm { L_00c75398: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00656f60 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c753b5 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c753b5: }
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
extern "C" void fn_00c7a580();
extern "C" void fn_00c86500();
// FUNCTION: ROBLOXSTUDIO 0x00c753d0
extern "C" __declspec(naked) void asm_00c753d0()
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
	__asm { je L_00c7541b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c7541b: }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00c75436 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c7a580 }
	__asm { mov esi, eax }
	__asm { jmp L_00c75438 }
	__asm { L_00c75436: }
	__asm { xor esi, esi }
	__asm { L_00c75438: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c86500 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c75455 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c75455: }
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
extern "C" void fn_00c63be0();
extern "C" void fn_00c72ed0();
// FUNCTION: ROBLOXSTUDIO 0x00c75470
extern "C" __declspec(naked) void asm_00c75470()
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
	__asm { je L_00c754bb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c754bb: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00c754e4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00c72ed0 }
	__asm { mov dword ptr [esi], 0xef99bc }
	__asm { mov dword ptr [esi + 8], 0xef99cc }
	__asm { jmp L_00c754e6 }
	__asm { L_00c754e4: }
	__asm { xor esi, esi }
	__asm { L_00c754e6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c63be0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c7550a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c7550a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e104c8[];
extern "C" void fn_00c923b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c755b0
extern "C" __declspec(naked) void asm_00c755b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd46a08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { push edi }
	__asm { test ebx, ebx }
	__asm { je L_00c755f1 }
	__asm { cmp ebx, -1 }
	__asm { ja L_00c755eb }
	__asm { push ebx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { jne L_00c755f1 }
	__asm { L_00c755eb: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00c755f1: }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { mov dword ptr [ebp - 0x28], esi }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 0x1c], edx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { xor eax, eax }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_00c75614: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push esi }
	__asm { call dword ptr [g_00e104c8] }
	__asm { mov edi, eax }
	__asm { mov ebx, edx }
	__asm { mov ecx, edi }
	__asm { or ecx, ebx }
	__asm { je L_00c7564d }
	__asm { mov ecx, edi }
	__asm { and ecx, ebx }
	__asm { cmp ecx, -1 }
	__asm { je L_00c7564d }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_00c923b0 }
	__asm { add dword ptr [ebp - 0x10], edi }
	__asm { adc dword ptr [ebp - 0x14], ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { jmp L_00c75614 }
	__asm { L_00c7564d: }
	__asm { test esi, esi }
	__asm { je L_00c7565a }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c7565a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004030b0();
extern "C" void fn_004b05a0();
extern "C" void fn_004b0f30();
extern "C" void fn_004b1d80();
extern "C" void fn_004b1ea0();
extern "C" void fn_004b35b0();
extern "C" void fn_00c75520();
// FUNCTION: ROBLOXSTUDIO 0x00c76740
extern "C" __declspec(naked) void asm_00c76740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd67618 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { call fn_004030b0 }
	__asm { movzx edx, byte ptr [esi] }
	__asm { lea ecx, [esi + 1] }
	__asm { add esp, 4 }
	__asm { mov ebx, eax }
	__asm { add ecx, edx }
	__asm { je L_00c76779 }
	__asm { inc ecx }
	__asm { jmp L_00c7677b }
	__asm { L_00c76779: }
	__asm { xor ecx, ecx }
	__asm { L_00c7677b: }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b1ea0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00c767ad }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c767ad: }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_00c767b7 }
	__asm { inc eax }
	__asm { jmp L_00c767b9 }
	__asm { L_00c767b7: }
	__asm { xor eax, eax }
	__asm { L_00c767b9: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004b35b0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00c75520 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add esp, 0xc }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 0xf], 1 }
	__asm { call fn_004b0f30 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b05a0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [esi + 4], 1 }
	__asm { call fn_004b1d80 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403160();
extern "C" void fn_00c78060();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c78100
extern "C" __declspec(naked) void asm_00c78100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67690 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { call fn_00c78060 }
	__asm { add esp, 0x14 }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov edi, edx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00403160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov edx, edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00403160 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xc7818a }
	__asm { ret }
}

extern "C" char g_0131a54c[];
extern "C" char g_0131a550[];
extern "C" char g_0131a554[];
extern "C" char g_0131a558[];
extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
extern "C" void fn_00825670();
extern "C" void fn_00c7a310();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c79d90
extern "C" __declspec(naked) void asm_00c79d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00c7a310 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xef76ac }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c79df1 }
	__asm { mov dword ptr [eax], esi }
	__asm { jmp L_00c79df3 }
	__asm { L_00c79df1: }
	__asm { xor eax, eax }
	__asm { L_00c79df3: }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [g_0131a54c] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp - 0x4c], esi }
	__asm { test al, 1 }
	__asm { jne L_00c79e48 }
	__asm { or eax, 1 }
	__asm { push 0xddc180 }
	__asm { mov dword ptr [g_0131a54c], eax }
	__asm { mov dword ptr [g_0131a550], 0x12be4a4 }
	__asm { mov dword ptr [g_0131a558], 0x40d810 }
	__asm { mov dword ptr [g_0131a554], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c79e48: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0x131a550 }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007d5550 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5390 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00c79e97 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c79e97: }
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
extern "C" void fn_007d54e0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00c7a310();
// FUNCTION: ROBLOXSTUDIO 0x00c79eb0
extern "C" __declspec(naked) void asm_00c79eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
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
	__asm { call fn_00c7a310 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xef770c }
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
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d54e0 }
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
	__asm { je L_00c79f5e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c79f5e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_00824ff0();
extern "C" void fn_008251b0();
extern "C" void fn_00c7a260();
// FUNCTION: ROBLOXSTUDIO 0x00c7a190
extern "C" __declspec(naked) void asm_00c7a190()
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
	__asm { call fn_00c7a260 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xef761c }
	__asm { call fn_00824ff0 }
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
	__asm { jae L_00c7a222 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00c7a222: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00c7a245 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c7a245: }
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
extern "C" char g_01310a84[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c7a310
extern "C" __declspec(naked) void asm_00c7a310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67766 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_01310a84] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00c7a38a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310a84], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xef66ac }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1310958 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08f70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c7a38a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x1310958 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xef764c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00c7a402 }
	__asm { push 0x12a15b0 }
	__asm { mov ecx, 0x12a15b0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c7a402 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c7a3ed }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c7a402 }
	__asm { L_00c7a3ed: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c7a402: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e1031c[];
extern "C" void fn_00a26970();
extern "C" void fn_00a2b9b0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c7a5f0
extern "C" __declspec(naked) void asm_00c7a5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd677af }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e1031c] }
	__asm { lea edi, [esi + 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi], 0xea5ff4 }
	__asm { push 0x30 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xef886c }
	__asm { mov dword ptr [edi], 0xef88ac }
	__asm { lea ebx, [esi + 0x40] }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00c7a661 }
	__asm { mov ecx, eax }
	__asm { call fn_00a2b9b0 }
	__asm { jmp L_00c7a663 }
	__asm { L_00c7a661: }
	__asm { xor eax, eax }
	__asm { L_00c7a663: }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a26970 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 4], ebx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [eax + 8], edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c7a910();
// FUNCTION: ROBLOXSTUDIO 0x00c7a7a0
extern "C" __declspec(naked) void asm_00c7a7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd677c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00c7a818 }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00c7a801 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_00c7a818 }
	__asm { L_00c7a801: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c7a818: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c7a910 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00c7a84c }
	__asm { test al, 1 }
	__asm { jne L_00c7a84c }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00c7a84c }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c7a84c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c7a910
extern "C" __declspec(naked) void asm_00c7a910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd677c8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c7a98a }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { test cl, 1 }
	__asm { je L_00c7a973 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { jmp L_00c7a98a }
	__asm { L_00c7a973: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 0xc }
	__asm { L_00c7a98a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00c7a9af }
	__asm { test cl, 1 }
	__asm { jne L_00c7a9af }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00c7a9af }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c7a9af: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00a29c40();
extern "C" void fn_00a29d30();
extern "C" void fn_00a2ba10();
extern "C" void fn_00a2bde0();
extern "C" void fn_00c7a690();
extern "C" void fn_00c89920();
// FUNCTION: ROBLOXSTUDIO 0x00c7ab30
extern "C" __declspec(naked) void asm_00c7ab30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46f28 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x58 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c7a690 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xef9cc4 }
	__asm { call fn_00a29d30 }
	__asm { add esp, 0xc }
	__asm { test byte ptr [esi + 0xa0], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_00c7abaa }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { push 0xea642c }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp + 0x14], 1 }
	__asm { mov dword ptr [ebp + 0x18], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a29c40 }
	__asm { L_00c7abaa: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00c89920 }
	__asm { lea ecx, [ebp - 0x64] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00a2bde0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e1031c[];
extern "C" void fn_00a29c40();
extern "C" void fn_00a2ba10();
extern "C" void fn_00c89a40();
// FUNCTION: ROBLOXSTUDIO 0x00c7abe0
extern "C" __declspec(naked) void asm_00c7abe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47510 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov byte ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov dword ptr [esi + 0x54], 0 }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { mov dword ptr [esi + 0x60], 4 }
	__asm { test byte ptr [esi + 0x60], 1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xef9d2c }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { je L_00c7ac87 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { push 0xea642c }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp + 0x14], 1 }
	__asm { mov dword ptr [ebp + 0x18], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a29c40 }
	__asm { L_00c7ac87: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00c89a40 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00665970();
extern "C" void fn_00c74a70();
extern "C" void fn_00c7f940();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c7ad60
extern "C" __declspec(naked) void asm_00c7ad60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd677e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00c7f940 }
	__asm { test al, al }
	__asm { je L_00c7adda }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00c74a70 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_00c7adda: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
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

extern "C" char g_00e10318[];
extern "C" void fn_00a284b0();
// FUNCTION: ROBLOXSTUDIO 0x00c7c840
extern "C" __declspec(naked) void asm_00c7c840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67c78 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0xef87e4 }
	__asm { cmp dword ptr [esi + 0x48], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jne L_00c7c883 }
	__asm { cmp dword ptr [esi + 0x50], 0 }
	__asm { je L_00c7c8a7 }
	__asm { L_00c7c883: }
	__asm { mov al, byte ptr [esi + 0x58] }
	__asm { test al, al }
	__asm { je L_00c7c8a7 }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { push 2 }
	__asm { push esi }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a284b0 }
	__asm { add esp, 0x14 }
	__asm { jmp L_00c7c8a7 }
	__asm { mov eax, 0xc7c8a4 }
	__asm { ret }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00c7c8a7: }
	__asm { cmp byte ptr [esi + 0x44], 0 }
	__asm { je L_00c7c8b1 }
	__asm { mov byte ptr [esi + 0x44], 0 }
	__asm { L_00c7c8b1: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10318] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10318[];
extern "C" void fn_00a28210();
extern "C" void fn_00a2bde0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c7c8d0
extern "C" __declspec(naked) void asm_00c7c8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67ca0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0xef9cc4 }
	__asm { test byte ptr [esi + 0xa0], 1 }
	__asm { lea edx, [esi + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_00c7c93d }
	__asm { mov eax, dword ptr [edx] }
	__asm { shr eax, 2 }
	__asm { test al, 1 }
	__asm { je L_00c7c93d }
	__asm { push edx }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { push 2 }
	__asm { push esi }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a28210 }
	__asm { add esp, 0x18 }
	__asm { jmp L_00c7c93d }
	__asm { mov eax, 0xc7c93a }
	__asm { ret }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00c7c93d: }
	__asm { mov eax, dword ptr [esi + 0x88] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_00c7c957 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c7c957: }
	__asm { cmp byte ptr [esi + 0x7c], 0 }
	__asm { je L_00c7c969 }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { call fn_00a2bde0 }
	__asm { mov byte ptr [esi + 0x7c], 0 }
	__asm { L_00c7c969: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10318] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x00c7de70
extern "C" __declspec(naked) void asm_00c7de70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd681b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00c7deee }
	__asm { add edi, 5 }
	__asm { je L_00c7dea8 }
	__asm { add edi, -5 }
	__asm { jmp L_00c7deaa }
	__asm { L_00c7dea8: }
	__asm { xor edi, edi }
	__asm { L_00c7deaa: }
	__asm { push ebx }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c7ded7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c7ded7 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c7ded7: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0xe389e4 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c7deee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xe389e4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b49770();
// FUNCTION: ROBLOXSTUDIO 0x00c7fa70
extern "C" __declspec(naked) void asm_00c7fa70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { mov edi, ebx }
	__asm { jne L_00c7facf }
	__asm { L_00c7fa91: }
	__asm { lea ebx, [esi + 0x10] }
	__asm { push ecx }
	__asm { mov ecx, ebx }
	__asm { call fn_00b49770 }
	__asm { test al, al }
	__asm { je L_00c7faa8 }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { jmp L_00c7fac3 }
	__asm { L_00c7faa8: }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { je L_00c7fabc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call fn_00b49770 }
	__asm { test al, al }
	__asm { cmovne edi, esi }
	__asm { L_00c7fabc: }
	__asm { mov ebx, esi }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { L_00c7fac3: }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { je L_00c7fa91 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { L_00c7facf: }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { je L_00c7fadc }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { jmp L_00c7fade }
	__asm { L_00c7fadc: }
	__asm { mov esi, dword ptr [edi] }
	__asm { L_00c7fade: }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { jne L_00c7fb03 }
	__asm { L_00c7fae4: }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { call fn_00b49770 }
	__asm { test al, al }
	__asm { je L_00c7faf7 }
	__asm { mov edi, esi }
	__asm { mov esi, dword ptr [esi] }
	__asm { jmp L_00c7fafa }
	__asm { L_00c7faf7: }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { L_00c7fafa: }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { je L_00c7fae4 }
	__asm { L_00c7fb03: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00ce31f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c7fb20
extern "C" __declspec(naked) void asm_00c7fb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd684a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test ebx, ebx }
	__asm { je L_00c7fb76 }
	__asm { cmp ebx, 0x1fffffff }
	__asm { ja L_00c7fb70 }
	__asm { lea eax, [ebx*8] }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00c7fb76 }
	__asm { L_00c7fb70: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00c7fb76: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00ce31f0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test ecx, ecx }
	__asm { je L_00c7fbae }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c7fbae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + ebx*8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
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
extern "C" void fn_00c7fb20();
// FUNCTION: ROBLOXSTUDIO 0x00c7fbf0
extern "C" __declspec(naked) void asm_00c7fbf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sar eax, 3 }
	__asm { cmp eax, edi }
	__asm { jae L_00c7fc5d }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0x1fffffff }
	__asm { sar esi, 3 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00c7fc27 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00c7fc27: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { pop ebx }
	__asm { jae L_00c7fc4b }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_00c7fb20 }
	__asm { L_00c7fc4b: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_00c7fb20 }
	__asm { L_00c7fc5d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009b53d0();
extern "C" void fn_00b34640();
extern "C" void fn_00c78460();
extern "C" void fn_00c7c610();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x00c81190
extern "C" __declspec(naked) void asm_00c81190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd68618 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { fld dword ptr [edi + 0xc] }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { call fn_00b34640 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_00c811cd }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { je L_00c81292 }
	__asm { L_00c811cd: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { jb L_00c811e7 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c876a0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009b53d0 }
	__asm { jmp L_00c81201 }
	__asm { L_00c811e7: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea eax, [ecx + eax*4] }
	__asm { cmp ecx, eax }
	__asm { je L_00c81201 }
	__asm { L_00c811f4: }
	__asm { mov dword ptr [ecx], 0 }
	__asm { add ecx, 4 }
	__asm { cmp ecx, eax }
	__asm { jne L_00c811f4 }
	__asm { L_00c81201: }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_00c8120b }
	__asm { inc eax }
	__asm { jmp L_00c8120d }
	__asm { L_00c8120b: }
	__asm { xor eax, eax }
	__asm { L_00c8120d: }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00c8124f }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [edx + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00c8123c }
	__asm { add eax, -0x30 }
	__asm { jmp L_00c8123e }
	__asm { L_00c8123c: }
	__asm { xor eax, eax }
	__asm { L_00c8123e: }
	__asm { mov dword ptr [edx + ecx*4], 0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00c8124f: }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00c81271 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00c81271 }
	__asm { add eax, -0x30 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00c81278 }
	__asm { L_00c81271: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_00c81278: }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push esi }
	__asm { push dword ptr [eax] }
	__asm { call fn_00c78460 }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_00c7c610 }
	__asm { L_00c81292: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012a58c8[];
extern "C" char g_012a58cc[];
extern "C" char g_012a58d0[];
extern "C" void fn_007b5910();
extern "C" void fn_007b5ea0();
extern "C" void fn_00891b30();
extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00c6b400();
// FUNCTION: ROBLOXSTUDIO 0x00c81840
extern "C" __declspec(naked) void asm_00c81840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ebx + 0xea8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { test ecx, ecx }
	__asm { je L_00c818ad }
	__asm { call fn_00c6b400 }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { mov ecx, esi }
	__asm { mov ebx, eax }
	__asm { call fn_00c687d0 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c68890 }
	__asm { mov eax, dword ptr [g_012a58c8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_012a58cc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ax, word ptr [g_012a58d0] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { add eax, 0xeb0 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c688b0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x68] }
	__asm { mov ebx, dword ptr [ebp - 8] }
	__asm { L_00c818ad: }
	__asm { lea eax, [ebx + 0x48] }
	__asm { push eax }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { call fn_00891b30 }
	__asm { lea ecx, [eax + 0x18] }
	__asm { call fn_007b5910 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_007b5ea0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10598[];
extern "C" void fn_0045fe60();
extern "C" void fn_00c87230();
// FUNCTION: ROBLOXSTUDIO 0x00c821c0
extern "C" __declspec(naked) void asm_00c821c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4bb48 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jne L_00c82251 }
	__asm { mov word ptr [esi + 8], 0 }
	__asm { call fn_00c87230 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00c82222 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe1815c }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0045fe60 }
	__asm { L_00c82222: }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov byte ptr [esi + 8], 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c82251: }
	__asm { cmp byte ptr [esi + 9], 0 }
	__asm { je L_00c8225b }
	__asm { mov byte ptr [esi + 9], 0 }
	__asm { L_00c8225b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0057db00();
extern "C" void fn_0084f520();
// FUNCTION: ROBLOXSTUDIO 0x00c84b70
extern "C" __declspec(naked) void asm_00c84b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { jne L_00c84b87 }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c84b87: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ebx, eax }
	__asm { shr ebx, 3 }
	__asm { add ebx, eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { xor edx, edx }
	__asm { mov eax, ebx }
	__asm { div esi }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov edi, dword ptr [eax + edx*4] }
	__asm { test edi, edi }
	__asm { je L_00c84be8 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_00c84be8 }
	__asm { L_00c84bb8: }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea eax, [ecx - 4] }
	__asm { xor edx, edx }
	__asm { mov eax, esi }
	__asm { div dword ptr [ebp - 4] }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { jne L_00c84be8 }
	__asm { cmp esi, ebx }
	__asm { jne L_00c84be0 }
	__asm { test ecx, ecx }
	__asm { je L_00c84bd7 }
	__asm { lea eax, [ecx - 4] }
	__asm { jmp L_00c84bd9 }
	__asm { L_00c84bd7: }
	__asm { xor eax, eax }
	__asm { L_00c84bd9: }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { cmp edx, dword ptr [eax] }
	__asm { je L_00c84bf3 }
	__asm { L_00c84be0: }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { jne L_00c84bb8 }
	__asm { L_00c84be8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c84bf3: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00c84bfe }
	__asm { add eax, -4 }
	__asm { jmp L_00c84c00 }
	__asm { L_00c84bfe: }
	__asm { xor eax, eax }
	__asm { L_00c84c00: }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { push edi }
	__asm { call fn_0084f520 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { call fn_0057db00 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038108[];
extern "C" void fn_00bd0930();
extern "C" void fn_00c85520();
extern "C" void fn_00cc7320();
extern "C" void fn_00cc7340();
// FUNCTION: ROBLOXSTUDIO 0x00c85040
extern "C" __declspec(naked) void asm_00c85040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fldz }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { fstp qword ptr [ebx] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x208] }
	__asm { mov byte ptr [ebx + 8], 0 }
	__asm { test edi, edi }
	__asm { je L_00c85176 }
	__asm { mov eax, dword ptr [edi + 0x21c0] }
	__asm { push dword ptr [esi + 0x214] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax + 0xe8] }
	__asm { call fn_00c85520 }
	__asm { test eax, eax }
	__asm { setg cl }
	__asm { test cl, cl }
	__asm { je L_00c85176 }
	__asm { mov eax, dword ptr [edi + 0x21c0] }
	__asm { cmp byte ptr [eax + 0x80], 0 }
	__asm { je L_00c85144 }
	__asm { lea ecx, [edi + 0x2118] }
	__asm { call fn_00bd0930 }
	__asm { mov ecx, dword ptr [esi + 0x208] }
	__asm { test eax, eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { je L_00c8511a }
	__asm { add ecx, 0x2118 }
	__asm { call fn_00cc7340 }
	__asm { fld dword ptr [esi + 0x210] }
	__asm { fmul qword ptr [ebp - 8] }
	__asm { mov edi, dword ptr [esi + 0x208] }
	__asm { lea ecx, [edi + 0x2118] }
	__asm { fstp qword ptr [ebx] }
	__asm { call fn_00bd0930 }
	__asm { lea ecx, [edi + 0x2108] }
	__asm { mov esi, eax }
	__asm { call fn_00bd0930 }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { L_00c850ed: }
	__asm { cmp eax, 0xa }
	__asm { lea ecx, [ebp + 8] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { cmovge ecx, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp + 0xc], 0xa }
	__asm { fild dword ptr [ecx] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { fmul qword ptr [g_01038108] }
	__asm { mov eax, ebx }
	__asm { fmul qword ptr [ebx] }
	__asm { fstp qword ptr [ebx] }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c8511a: }
	__asm { add ecx, 0x2108 }
	__asm { call fn_00cc7340 }
	__asm { fld dword ptr [esi + 0x210] }
	__asm { fmul qword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [esi + 0x208] }
	__asm { lea ecx, [ecx + 0x2108] }
	__asm { fstp qword ptr [ebx] }
	__asm { call fn_00bd0930 }
	__asm { inc eax }
	__asm { jmp L_00c850ed }
	__asm { L_00c85144: }
	__asm { lea ecx, [edi + 0x2108] }
	__asm { call fn_00cc7320 }
	__asm { test al, al }
	__asm { je L_00c85168 }
	__asm { mov ecx, dword ptr [esi + 0x208] }
	__asm { lea ecx, [ecx + 0x2118] }
	__asm { call fn_00cc7320 }
	__asm { test al, al }
	__asm { jne L_00c85176 }
	__asm { L_00c85168: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { fld dword ptr [esi + 0x210] }
	__asm { fmul qword ptr [eax + 8] }
	__asm { fstp qword ptr [ebx] }
	__asm { L_00c85176: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00421eb0();
extern "C" void fn_0044dae0();
extern "C" void fn_0044e270();
extern "C" void fn_00c86aa0();
extern "C" void fn_00c86b40();
extern "C" void fn_00c88000();
// FUNCTION: ROBLOXSTUDIO 0x00c85190
extern "C" __declspec(naked) void asm_00c85190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp edi, dword ptr [esi + 0xec4] }
	__asm { je L_00c851e1 }
	__asm { test edi, edi }
	__asm { je L_00c851af }
	__asm { lea eax, [edi + 0x1c] }
	__asm { jmp L_00c851b1 }
	__asm { L_00c851af: }
	__asm { xor eax, eax }
	__asm { L_00c851b1: }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_0044dae0 }
	__asm { mov ecx, dword ptr [esi + 0x2178] }
	__asm { test ecx, ecx }
	__asm { je L_00c851ef }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_00c851ef }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jne L_00c851ef }
	__asm { mov dword ptr [esi + 0x2178], 0 }
	__asm { L_00c851e1: }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c851ef: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax + 0xc8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00c851e1 }
	__asm { cmp ebx, 0x12e1e0c }
	__asm { jne L_00c8522d }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { call fn_00c88000 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c8522d: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00c86b40 }
	__asm { test al, al }
	__asm { jne L_00c851e1 }
	__asm { mov ecx, ebx }
	__asm { call fn_0044e270 }
	__asm { test al, al }
	__asm { je L_00c851e1 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c86aa0 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { setne cl }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004ae7e0();
extern "C" void fn_006b9740();
extern "C" void fn_00ab9ab0();
// FUNCTION: ROBLOXSTUDIO 0x00c85270
extern "C" __declspec(naked) void asm_00c85270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_00c852da }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { je L_00c852da }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c852c9 }
	__asm { push 0x12d }
	__asm { push 0xe52268 }
	__asm { push 0xe5413c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c852da }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00c852c9: }
	__asm { movzx eax, bl }
	__asm { push 0xe54150 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c852da: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c852e6 }
	__asm { lea esi, [eax - 0x1c] }
	__asm { jmp L_00c852e8 }
	__asm { L_00c852e6: }
	__asm { xor esi, esi }
	__asm { L_00c852e8: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_004ae7e0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, esi }
	__asm { call fn_00ab9ab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00410bb0();
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_00c7e4b0();
// FUNCTION: ROBLOXSTUDIO 0x00c85310
extern "C" __declspec(naked) void asm_00c85310()
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
	__asm { je L_00c8537a }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_00c8537a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c85369 }
	__asm { push 0x14a }
	__asm { push 0xe52268 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c8537a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00c85369: }
	__asm { movzx eax, bl }
	__asm { push 0xe55d98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c8537a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c85386 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00c85388 }
	__asm { L_00c85386: }
	__asm { xor edi, edi }
	__asm { L_00c85388: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_00410bb0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x18 }
	__asm { push esp }
	__asm { call fn_004d1ca0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { call fn_00c7e4b0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_012a589a[];
extern "C" char g_0131b23c[];
extern "C" char g_0131b240[];
extern "C" void fn_007cb490();
// FUNCTION: ROBLOXSTUDIO 0x00c86980
extern "C" __declspec(naked) void asm_00c86980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6890e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131b23c] }
	__asm { test al, 1 }
	__asm { jne L_00c869d2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b23c], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0x10082cc }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b240], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_00c869d7 }
	__asm { L_00c869d2: }
	__asm { mov eax, dword ptr [g_0131b240] }
	__asm { L_00c869d7: }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { sete bl }
	__asm { cmp eax, 0x12be0b8 }
	__asm { je L_00c86a7d }
	__asm { mov edi, dword ptr [g_00e10524] }
	__asm { push eax }
	__asm { mov ecx, 0x12be0b8 }
	__asm { call edi }
	__asm { test al, al }
	__asm { jne L_00c86a7d }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp eax, 0x11ef0c0 }
	__asm { je L_00c86a7d }
	__asm { push eax }
	__asm { mov ecx, 0x11ef0c0 }
	__asm { call edi }
	__asm { test al, al }
	__asm { jne L_00c86a7d }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp eax, 0x11efd80 }
	__asm { je L_00c86a7d }
	__asm { push eax }
	__asm { mov ecx, 0x11efd80 }
	__asm { call edi }
	__asm { test al, al }
	__asm { jne L_00c86a7d }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp eax, 0x11efd60 }
	__asm { je L_00c86a7d }
	__asm { push eax }
	__asm { mov ecx, 0x11efd60 }
	__asm { call edi }
	__asm { test al, al }
	__asm { jne L_00c86a7d }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp eax, 0x11ef0a4 }
	__asm { je L_00c86a5b }
	__asm { push eax }
	__asm { mov ecx, 0x11ef0a4 }
	__asm { call edi }
	__asm { test al, al }
	__asm { je L_00c86a64 }
	__asm { L_00c86a5b: }
	__asm { cmp byte ptr [g_012a589a], 0 }
	__asm { jne L_00c86a7d }
	__asm { L_00c86a64: }
	__asm { test bl, bl }
	__asm { jne L_00c86a7d }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c86a7d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6c2f0();
extern "C" void fn_00c6c320();
extern "C" void fn_00c826c0();
extern "C" void fn_00c86ba0();
extern "C" void fn_00c86d10();
extern "C" void fn_00c86e80();
extern "C" void fn_00c86ff0();
// FUNCTION: ROBLOXSTUDIO 0x00c87160
extern "C" __declspec(naked) void asm_00c87160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6894b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x118 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x124] }
	__asm { call fn_00c6c2f0 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test bl, bl }
	__asm { je L_00c871b3 }
	__asm { lea edi, [ebp - 0x124] }
	__asm { mov eax, edi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c826c0 }
	__asm { add esp, 8 }
	__asm { jmp L_00c871b6 }
	__asm { L_00c871b3: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_00c871b6: }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { add ecx, 0x1fc0 }
	__asm { call fn_00c86ba0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea ecx, [ecx + 0x1fe0] }
	__asm { call fn_00c86e80 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea ecx, [ecx + 0x2000] }
	__asm { call fn_00c86d10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { lea ecx, [ebx + 0x2020] }
	__asm { call fn_00c86ff0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x140] }
	__asm { lea ecx, [ebp - 0x124] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c6c320 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00c87850
extern "C" __declspec(naked) void asm_00c87850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { movzx edx, word ptr [eax + 2] }
	__asm { push esi }
	__asm { movzx esi, word ptr [eax + 4] }
	__asm { push edi }
	__asm { movzx edi, word ptr [eax] }
	__asm { mov ecx, edx }
	__asm { and ecx, 0xf }
	__asm { shl ecx, 5 }
	__asm { mov eax, esi }
	__asm { and eax, 0x1f }
	__asm { or ecx, eax }
	__asm { mov eax, edi }
	__asm { shl ecx, 5 }
	__asm { and eax, 0x1f }
	__asm { or ecx, eax }
	__asm { cmp ecx, 0x3fff }
	__asm { jne L_00c878a4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [edi + 1] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { mov word ptr [ebp - 4], dx }
	__asm { mov eax, dword ptr [ebp - 6] }
	__asm { mov dword ptr [ecx], eax }
	__asm { pop edi }
	__asm { mov word ptr [ecx + 4], si }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c878a4: }
	__asm { inc ecx }
	__asm { mov eax, ecx }
	__asm { and eax, 0x1f }
	__asm { mov word ptr [ebp - 0x18], ax }
	__asm { mov eax, ecx }
	__asm { shr eax, 0xa }
	__asm { and eax, 0xf }
	__asm { mov word ptr [ebp - 0x16], ax }
	__asm { sar di, 5 }
	__asm { sar dx, 4 }
	__asm { mov word ptr [ebp - 6], dx }
	__asm { mov word ptr [ebp - 8], di }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { shl eax, 5 }
	__asm { mov word ptr [ebp - 0x10], ax }
	__asm { sar si, 5 }
	__asm { mov word ptr [ebp - 4], si }
	__asm { mov eax, dword ptr [ebp - 6] }
	__asm { shl eax, 4 }
	__asm { mov word ptr [ebp - 0xe], ax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { shl eax, 5 }
	__asm { mov word ptr [ebp - 0xc], ax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { add eax, dword ptr [ebp - 0x10] }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { shr ecx, 5 }
	__asm { and ecx, 0x1f }
	__asm { mov word ptr [ebp - 0x14], cx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { mov eax, dword ptr [ebp - 0x16] }
	__asm { add eax, dword ptr [ebp - 0xe] }
	__asm { add edx, dword ptr [ebp - 0x14] }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov eax, dword ptr [ebp - 6] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov word ptr [ecx + 4], dx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a58ac[];
extern "C" char g_012a58b0[];
extern "C" char g_012a58b4[];
// FUNCTION: ROBLOXSTUDIO 0x00c87930
extern "C" __declspec(naked) void asm_00c87930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { movzx ecx, word ptr [eax] }
	__asm { movzx ebx, word ptr [eax + 2] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { movsx edx, cx }
	__asm { push esi }
	__asm { movsx ecx, bx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, dword ptr [g_012a58ac] }
	__asm { sar edx, cl }
	__asm { mov ecx, dword ptr [g_012a58b0] }
	__asm { sar dword ptr [ebp + 8], cl }
	__asm { mov ecx, dword ptr [g_012a58b4] }
	__asm { push edi }
	__asm { movzx edi, word ptr [eax + 4] }
	__asm { movsx eax, di }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { sar dword ptr [ebp - 8], cl }
	__asm { mov ecx, dword ptr [g_012a58ac] }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { shl dword ptr [ebp - 4], cl }
	__asm { mov ecx, dword ptr [g_012a58b0] }
	__asm { shl dword ptr [ebp + 8], cl }
	__asm { mov ecx, dword ptr [g_012a58b4] }
	__asm { sub ebx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { sub edx, dword ptr [ebp - 4] }
	__asm { shl esi, cl }
	__asm { movsx ecx, bx }
	__asm { sub edi, esi }
	__asm { shl ecx, 4 }
	__asm { movsx eax, di }
	__asm { or ecx, eax }
	__asm { movsx edx, dx }
	__asm { shl ecx, 4 }
	__asm { or edx, ecx }
	__asm { inc edx }
	__asm { mov eax, edx }
	__asm { and eax, 0xf }
	__asm { add eax, dword ptr [ebp - 4] }
	__asm { mov ecx, edx }
	__asm { shr ecx, 8 }
	__asm { mov word ptr [ebp - 0x10], ax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { and ecx, 0xf }
	__asm { add eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { shr edx, 4 }
	__asm { and edx, 0xf }
	__asm { pop edi }
	__asm { mov word ptr [ebp - 0xe], ax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { add edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov word ptr [ecx + 4], dx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a2a4f0();
extern "C" void fn_00a2bde0();
extern "C" void fn_00a301d0();
// FUNCTION: ROBLOXSTUDIO 0x00c89920
extern "C" __declspec(naked) void asm_00c89920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd68cf9 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x40 }
	__asm { mov eax, edx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { and eax, ecx }
	__asm { push edi }
	__asm { cmp eax, -1 }
	__asm { jne L_00c89955 }
	__asm { mov edx, 0x80 }
	__asm { xor ecx, ecx }
	__asm { L_00c89955: }
	__asm { mov edi, dword ptr [ebp + 0x18] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { mov eax, ebx }
	__asm { and eax, edi }
	__asm { cmp eax, -1 }
	__asm { jne L_00c89972 }
	__asm { mov ebx, 4 }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp + 0x14], ebx }
	__asm { mov dword ptr [ebp + 0x18], edi }
	__asm { L_00c89972: }
	__asm { mov dword ptr [ebp + 0xc], 2 }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { test edi, edi }
	__asm { jl L_00c89990 }
	__asm { jg L_00c8998b }
	__asm { cmp ebx, 2 }
	__asm { jbe L_00c89990 }
	__asm { L_00c8998b: }
	__asm { lea edi, [ebp + 0x14] }
	__asm { jmp L_00c89993 }
	__asm { L_00c89990: }
	__asm { lea edi, [ebp + 0xc] }
	__asm { L_00c89993: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 0x98], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x9c], eax }
	__asm { mov eax, edx }
	__asm { or eax, ecx }
	__asm { pop ebx }
	__asm { jne L_00c899b2 }
	__asm { mov edx, 1 }
	__asm { xor ecx, ecx }
	__asm { L_00c899b2: }
	__asm { add edx, dword ptr [esi + 0x98] }
	__asm { adc ecx, dword ptr [esi + 0x9c] }
	__asm { push edx }
	__asm { mov dword ptr [ebp + 0x18], ecx }
	__asm { lea ecx, [esi + 0x88] }
	__asm { call fn_00a301d0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x58] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { call fn_00a2a4f0 }
	__asm { cmp byte ptr [esi + 0x7c], 0 }
	__asm { lea edi, [esi + 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00c899fa }
	__asm { mov ecx, edi }
	__asm { call fn_00a2bde0 }
	__asm { mov byte ptr [edi + 0x40], 0 }
	__asm { L_00c899fa: }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp + 0x18], edi }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a2a4f0 }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov byte ptr [edi + 0x40], 1 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a2bde0 }
	__asm { or dword ptr [esi + 0xa0], 1 }
	__asm { and dword ptr [esi + 0x38], 0xfffffff8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00a301d0();
// FUNCTION: ROBLOXSTUDIO 0x00c89a40
extern "C" __declspec(naked) void asm_00c89a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, ecx }
	__asm { and eax, ebx }
	__asm { cmp eax, -1 }
	__asm { jne L_00c89a5d }
	__asm { mov ecx, 0x1000 }
	__asm { xor ebx, ebx }
	__asm { L_00c89a5d: }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov eax, edi }
	__asm { and eax, edx }
	__asm { cmp eax, -1 }
	__asm { jne L_00c89a7a }
	__asm { mov edi, 4 }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp + 0x14], edi }
	__asm { mov dword ptr [ebp + 0x18], edx }
	__asm { L_00c89a7a: }
	__asm { mov dword ptr [ebp + 0xc], 2 }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { test edx, edx }
	__asm { jl L_00c89a98 }
	__asm { jg L_00c89a93 }
	__asm { cmp edi, 2 }
	__asm { jbe L_00c89a98 }
	__asm { L_00c89a93: }
	__asm { lea edx, [ebp + 0x14] }
	__asm { jmp L_00c89a9b }
	__asm { L_00c89a98: }
	__asm { lea edx, [ebp + 0xc] }
	__asm { L_00c89a9b: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 0x58], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 0x5c], eax }
	__asm { mov eax, ecx }
	__asm { or eax, ebx }
	__asm { pop edi }
	__asm { je L_00c89ab2 }
	__asm { mov dword ptr [ebp + 0x18], ebx }
	__asm { jmp L_00c89abe }
	__asm { L_00c89ab2: }
	__asm { mov ecx, 1 }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { L_00c89abe: }
	__asm { mov eax, dword ptr [esi + 0x58] }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x48] }
	__asm { call fn_00a301d0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x58] }
	__asm { cmp byte ptr [esi + 0x40], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { je L_00c89ae2 }
	__asm { mov byte ptr [esi + 0x40], 0 }
	__asm { L_00c89ae2: }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov byte ptr [esi + 0x40], 1 }
	__asm { or dword ptr [esi + 0x60], 1 }
	__asm { and dword ptr [esi + 0x38], 0xfffffff8 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00a29c40();
extern "C" void fn_00a2ba10();
extern "C" void fn_00c86400();
// FUNCTION: ROBLOXSTUDIO 0x00c89bf0
extern "C" __declspec(naked) void asm_00c89bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd68d40 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x50], 0 }
	__asm { jne L_00c89c40 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push 0xea5a84 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { mov dword ptr [ebp - 0x10], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a29c40 }
	__asm { L_00c89c40: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { jne L_00c89c4d }
	__asm { call fn_00c86400 }
	__asm { L_00c89c4d: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, -1 }
	__asm { je L_00c89caa }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [esi + 0x54] }
	__asm { jne L_00c89c8b }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push 0xef72ec }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { mov dword ptr [ebp - 0x10], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00a29c40 }
	__asm { L_00c89c8b: }
	__asm { mov byte ptr [eax], dl }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov eax, edx }
	__asm { dec dword ptr [ecx] }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { pop esi }
	__asm { inc dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c89caa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a29f60();
extern "C" void fn_00c91670();
// FUNCTION: ROBLOXSTUDIO 0x00c89cc0
extern "C" __declspec(naked) void asm_00c89cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0xa0] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00c89ce0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { jne L_00c89ce0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x5c] }
	__asm { L_00c89ce0: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { cmp ebx, -1 }
	__asm { je L_00c89d5f }
	__asm { mov eax, dword ptr [esi + 0xa0] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00c89d34 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, ecx }
	__asm { cmp ecx, eax }
	__asm { jne L_00c89d1b }
	__asm { mov ecx, esi }
	__asm { call fn_00c91670 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, ecx }
	__asm { cmp ecx, eax }
	__asm { je L_00c89d56 }
	__asm { L_00c89d1b: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov byte ptr [eax], bl }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { dec dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { pop esi }
	__asm { inc dword ptr [eax] }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c89d34: }
	__asm { push dword ptr [esi + 0x80] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { mov byte ptr [ebp + 0xb], bl }
	__asm { call fn_00a29f60 }
	__asm { cmp eax, 1 }
	__asm { jne L_00c89d56 }
	__asm { test edx, edx }
	__asm { je L_00c89d61 }
	__asm { L_00c89d56: }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c89d5f: }
	__asm { xor ebx, ebx }
	__asm { L_00c89d61: }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a29c40();
extern "C" void fn_00a29d70();
extern "C" void fn_00a2d3d0();
// FUNCTION: ROBLOXSTUDIO 0x00c89d70
extern "C" __declspec(naked) void asm_00c89d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0f5a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x60] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00c89da4 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { jne L_00c89da4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x5c] }
	__asm { L_00c89da4: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp ecx, -1 }
	__asm { je L_00c89e38 }
	__asm { mov eax, dword ptr [esi + 0x60] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00c89e1f }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, edx }
	__asm { cmp edx, eax }
	__asm { jne L_00c89e00 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { sub edx, ecx }
	__asm { mov eax, edx }
	__asm { cdq }
	__asm { test edx, edx }
	__asm { jl L_00c89dec }
	__asm { jg L_00c89ddd }
	__asm { test eax, eax }
	__asm { je L_00c89dec }
	__asm { L_00c89ddd: }
	__asm { push edx }
	__asm { push eax }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0x44] }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { call fn_00a29d70 }
	__asm { L_00c89dec: }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c89e00: }
	__asm { mov byte ptr [edx], cl }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { dec dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { pop esi }
	__asm { inc dword ptr [eax] }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c89e1f: }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00a2d3d0 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a29c40 }
	__asm { L_00c89e38: }
	__asm { xor ecx, ecx }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a29c40();
extern "C" void fn_00a2d230();
extern "C" void fn_00a2d350();
// FUNCTION: ROBLOXSTUDIO 0x00c89eb0
extern "C" __declspec(naked) void asm_00c89eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd68d60 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx + 0x48] }
	__asm { sub esp, 0x28 }
	__asm { test edx, edx }
	__asm { jne L_00c89eeb }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00a2d350 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a29c40 }
	__asm { L_00c89eeb: }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00c89f37 }
	__asm { cmp eax, edx }
	__asm { je L_00c89f37 }
	__asm { mov eax, dword ptr [ecx + 0x2c] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { inc dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { dec dword ptr [eax] }
	__asm { cmp edx, -1 }
	__asm { je L_00c89f23 }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov byte ptr [eax], dl }
	__asm { mov eax, edx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c89f23: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor edx, edx }
	__asm { mov eax, edx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c89f37: }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_00a2d230 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00a29c40 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00c8a000
extern "C" __declspec(naked) void asm_00c8a000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00c8a04d }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { ja L_00c8a04d }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00c8a03c }
	__asm { push 0x38 }
	__asm { push 0xef6860 }
	__asm { push 0xeafdd4 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c8a04d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c8a03c: }
	__asm { movzx eax, al }
	__asm { push 0xef68b0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c8a04d: }
	__asm { movzx eax, word ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { and ax, 0x1f }
	__asm { mov word ptr [ebp - 0x18], ax }
	__asm { mov eax, ecx }
	__asm { shr eax, 0xa }
	__asm { and eax, 0xf }
	__asm { mov word ptr [ebp - 0x16], ax }
	__asm { mov eax, ecx }
	__asm { shr eax, 5 }
	__asm { and eax, 0x1f }
	__asm { mov word ptr [ebp - 0x14], ax }
	__asm { mov eax, dword ptr [esi] }
	__asm { shr ecx, 0xe }
	__asm { lea ecx, [ecx + ecx*2] }
	__asm { lea ecx, [eax + ecx*2] }
	__asm { movzx eax, word ptr [ecx] }
	__asm { shl ax, 5 }
	__asm { mov word ptr [ebp - 0xe], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { shl ax, 4 }
	__asm { mov word ptr [ebp - 0xc], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { shl ax, 5 }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { add eax, dword ptr [ebp - 0xe] }
	__asm { mov edx, dword ptr [ebp - 0xa] }
	__asm { add edx, dword ptr [ebp - 0x14] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { mov eax, dword ptr [ebp - 0x16] }
	__asm { add eax, dword ptr [ebp - 0xc] }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov eax, dword ptr [ebp - 6] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov word ptr [ecx + 4], dx }
	__asm { inc dword ptr [esi + 0xc] }
	__asm { dec dword ptr [esi + 0x10] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00c8a0e0
extern "C" __declspec(naked) void asm_00c8a0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00c8a12f }
	__asm { cmp word ptr [edi + 8], 0 }
	__asm { jne L_00c8a12f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c8a11e }
	__asm { push 0x79 }
	__asm { push 0xef6860 }
	__asm { push 0xef691c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c8a12f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c8a11e: }
	__asm { movzx eax, al }
	__asm { push 0xef6930 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c8a12f: }
	__asm { movzx esi, word ptr [edi + 6] }
	__asm { movzx eax, word ptr [edi] }
	__asm { mov ecx, esi }
	__asm { and ecx, 0xf }
	__asm { add ax, cx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, esi }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { movzx eax, word ptr [edi + 2] }
	__asm { shr edx, 8 }
	__asm { and edx, 0xf }
	__asm { add ax, dx }
	__asm { mov dx, word ptr [edi + 4] }
	__asm { shr esi, 4 }
	__asm { and esi, 0xf }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov eax, dword ptr [ebp - 6] }
	__asm { add dx, si }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov word ptr [ecx + 4], dx }
	__asm { inc word ptr [edi + 6] }
	__asm { mov eax, 0xffff }
	__asm { add word ptr [edi + 8], ax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0042ba60();
extern "C" void fn_0049a1e0();
// FUNCTION: ROBLOXSTUDIO 0x00c8a190
extern "C" __declspec(naked) void asm_00c8a190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea edi, [esi + 0x14] }
	__asm { push edi }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00c8a229 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0042ba60 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_00c8a1c1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00c8a1c1: }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { dec ecx }
	__asm { and ecx, dword ptr [edx + 8] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00c8a1ee }
	__asm { dec eax }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { jne L_00c8a1eb }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { jmp L_00c8a1ee }
	__asm { L_00c8a1eb: }
	__asm { inc dword ptr [esi + 0xc] }
	__asm { L_00c8a1ee: }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00c8a220 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0042ba60 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_00c8a209 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00c8a209: }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { dec ecx }
	__asm { and ecx, dword ptr [edx + 8] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { fld qword ptr [eax + 8] }
	__asm { mov al, 1 }
	__asm { fstp qword ptr [esi + 0x18] }
	__asm { jmp L_00c8a22b }
	__asm { L_00c8a220: }
	__asm { fldz }
	__asm { mov al, 1 }
	__asm { fstp qword ptr [esi + 0x18] }
	__asm { jmp L_00c8a22b }
	__asm { L_00c8a229: }
	__asm { xor al, al }
	__asm { L_00c8a22b: }
	__asm { test edi, edi }
	__asm { je L_00c8a232 }
	__asm { mov byte ptr [edi], 0 }
	__asm { L_00c8a232: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006c0990();
extern "C" void fn_00c6d500();
extern "C" void fn_00c6e000();
extern "C" void fn_00c6e0a0();
extern "C" void fn_00c7df10();
extern "C" void fn_00cc7530();
extern "C" void fn_00cc8400();
extern "C" void fn_00cc86f0();
extern "C" void fn_00cc98c0();
extern "C" void fn_00ccfe40();
// FUNCTION: ROBLOXSTUDIO 0x00c8b1f0
extern "C" __declspec(naked) void asm_00c8b1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd68e51 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { mov ebx, dword ptr [edi + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_00c6e0a0 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00c6e000 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00c6d500 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 0x18 }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call dword ptr [eax + 0x128] }
	__asm { cmp byte ptr [ebp + 0xb], 0 }
	__asm { je L_00c8b260 }
	__asm { call fn_00ccfe40 }
	__asm { sub eax, dword ptr [ebp - 0x20] }
	__asm { lea ecx, [esi + 0x1880] }
	__asm { push eax }
	__asm { call fn_006c0990 }
	__asm { jmp L_00c8b2a7 }
	__asm { L_00c8b260: }
	__asm { mov eax, dword ptr [esi + 0x1fac] }
	__asm { push eax }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_00c7df10 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c8b292 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { push esi }
	__asm { call fn_00cc98c0 }
	__asm { jmp L_00c8b294 }
	__asm { L_00c8b292: }
	__asm { xor eax, eax }
	__asm { L_00c8b294: }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x2108] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00cc7530 }
	__asm { L_00c8b2a7: }
	__asm { call fn_00ccfe40 }
	__asm { mov dword ptr [esi + 0x1f70], eax }
	__asm { mov eax, dword ptr [esi + 0x21c0] }
	__asm { mov dword ptr [esi + 0x1f74], 0 }
	__asm { cmp byte ptr [eax + 0x72], 0 }
	__asm { je L_00c8b2eb }
	__asm { push 2 }
	__asm { lea ecx, [esi + 0xec8] }
	__asm { call fn_00cc8400 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { sub eax, ebx }
	__asm { shr eax, 3 }
	__asm { push eax }
	__asm { push 2 }
	__asm { lea ecx, [esi + 0xec8] }
	__asm { call fn_00cc86f0 }
	__asm { L_00c8b2eb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6c2f0();
extern "C" void fn_00c6c320();
extern "C" void fn_00c6d500();
extern "C" void fn_00c75850();
extern "C" void fn_00c826c0();
extern "C" void fn_00c8ba60();
// FUNCTION: ROBLOXSTUDIO 0x00c8c450
extern "C" __declspec(naked) void asm_00c8c450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd68f96 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x22c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push eax }
	__asm { cmp byte ptr [edi + 0x45dc], 0 }
	__asm { push esi }
	__asm { je L_00c8c4de }
	__asm { call fn_00c75850 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00c8c53b }
	__asm { lea ecx, [ebp - 0x124] }
	__asm { call fn_00c6c2f0 }
	__asm { lea eax, [ebp - 0x124] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c826c0 }
	__asm { xor esi, esi }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x10], esi }
	__asm { jbe L_00c8c4d6 }
	__asm { nop }
	__asm { L_00c8c4c0: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x124] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c8ba60 }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [ebp - 0x10] }
	__asm { jb L_00c8c4c0 }
	__asm { L_00c8c4d6: }
	__asm { lea ecx, [ebp - 0x124] }
	__asm { jmp L_00c8c52c }
	__asm { L_00c8c4de: }
	__asm { call fn_00c6d500 }
	__asm { add esp, 8 }
	__asm { lea ecx, [ebp - 0x238] }
	__asm { call fn_00c6c2f0 }
	__asm { lea eax, [ebp - 0x238] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00c826c0 }
	__asm { xor esi, esi }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x10], esi }
	__asm { jbe L_00c8c526 }
	__asm { nop }
	__asm { L_00c8c510: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x238] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c8ba60 }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [ebp - 0x10] }
	__asm { jb L_00c8c510 }
	__asm { L_00c8c526: }
	__asm { lea ecx, [ebp - 0x238] }
	__asm { L_00c8c52c: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c6c320 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { L_00c8c53b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_007cb440();
extern "C" void fn_00c6c7a0();
extern "C" void fn_00c6db30();
// FUNCTION: ROBLOXSTUDIO 0x00c8d060
extern "C" __declspec(naked) void asm_00c8d060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 8 }
	__asm { lea eax, [ebp - 1] }
	__asm { mov ebx, ecx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c6c7a0 }
	__asm { mov al, byte ptr [ebp - 1] }
	__asm { test al, al }
	__asm { jne L_00c8d0c2 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { jb L_00c8d0aa }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [eax], 0 }
	__asm { call fn_007cb440 }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c8d0aa: }
	__asm { mov eax, esi }
	__asm { mov byte ptr [eax], 0 }
	__asm { call fn_007cb440 }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c8d0c2: }
	__asm { jns L_00c8d0e6 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c6db30 }
	__asm { movzx ecx, byte ptr [ebp - 1] }
	__asm { and ecx, 0x7f }
	__asm { add esp, 8 }
	__asm { lea eax, [ecx*8] }
	__asm { sub eax, ecx }
	__asm { lea edi, [ebx + eax*4] }
	__asm { jmp L_00c8d0f8 }
	__asm { L_00c8d0e6: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { movzx ecx, al }
	__asm { lea eax, [ecx*8] }
	__asm { sub eax, ecx }
	__asm { lea esi, [ebx + eax*4] }
	__asm { L_00c8d0f8: }
	__asm { cmp edi, esi }
	__asm { je L_00c8d108 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00403540 }
	__asm { L_00c8d108: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c6c7a0();
extern "C" void fn_00c6dec0();
// FUNCTION: ROBLOXSTUDIO 0x00c8d120
extern "C" __declspec(naked) void asm_00c8d120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 1 }
	__asm { push 8 }
	__asm { lea eax, [ebp - 1] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00c6c7a0 }
	__asm { mov al, byte ptr [ebp - 1] }
	__asm { test al, al }
	__asm { jne L_00c8d159 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, 0xffff }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { mov word ptr [eax + 4], cx }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c8d159: }
	__asm { jns L_00c8d188 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c6dec0 }
	__asm { movzx ecx, byte ptr [ebp - 1] }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 8 }
	__asm { and ecx, 0x7f }
	__asm { mov dword ptr [edi + ecx*8], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + ecx*8 + 4], eax }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c8d188: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { movzx edx, al }
	__asm { mov eax, dword ptr [edi + edx*8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + edx*8 + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_005e56e0();
extern "C" void fn_00c74ab0();
extern "C" void fn_00c7fbf0();
extern "C" void fn_00c84ad0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c8d800
extern "C" __declspec(naked) void asm_00c8d800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd690d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, edx }
	__asm { sub ecx, eax }
	__asm { sar ecx, 3 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp ecx, edi }
	__asm { jbe L_00c8d85c }
	__asm { lea eax, [eax + edi*8] }
	__asm { push edx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c84ad0 }
	__asm { L_00c8d849: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c8d85c: }
	__asm { jae L_00c8d849 }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c7fbf0 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, dword ptr [esi] }
	__asm { mov ecx, edi }
	__asm { sar eax, 3 }
	__asm { sub ecx, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c74ab0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, ecx }
	__asm { sub eax, dword ptr [esi] }
	__asm { add esp, 0x14 }
	__asm { sar eax, 3 }
	__asm { sub edi, eax }
	__asm { lea eax, [ecx + edi*8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_005e56e0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104c4[];
extern "C" void fn_00a29bb0();
extern "C" void fn_00a29be0();
// FUNCTION: ROBLOXSTUDIO 0x00c8dd00
extern "C" __declspec(naked) void asm_00c8dd00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_00c8dd74 }
	__asm { cmp dword ptr [ebp + 0x14], 1 }
	__asm { jne L_00c8dd74 }
	__asm { cmp dword ptr [ebp + 0x18], 1 }
	__asm { jne L_00c8dd74 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { sub eax, ecx }
	__asm { cdq }
	__asm { cmp edx, ebx }
	__asm { jg L_00c8dd74 }
	__asm { jl L_00c8dd38 }
	__asm { cmp eax, edi }
	__asm { ja L_00c8dd74 }
	__asm { L_00c8dd38: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { cmp ebx, edx }
	__asm { jg L_00c8dd74 }
	__asm { jl L_00c8dd4a }
	__asm { cmp edi, eax }
	__asm { ja L_00c8dd74 }
	__asm { L_00c8dd4a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { push 1 }
	__asm { push 1 }
	__asm { sub ecx, edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { push 0 }
	__asm { add dword ptr [eax], edi }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x80] }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00a29be0 }
	__asm { L_00c8dd74: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { je L_00c8dd84 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00c8dd84: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { cmp ecx, 1 }
	__asm { jne L_00c8dd9e }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { je L_00c8dd9e }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cdq }
	__asm { sub edi, eax }
	__asm { sbb ebx, edx }
	__asm { L_00c8dd9e: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { push ecx }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { push ebx }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { push edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [eax], 0 }
	__asm { push dword ptr [esi + 0x80] }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a29bb0 }
}

extern "C" char g_00e104c4[];
extern "C" void fn_00a29be0();
extern "C" void fn_00a29c20();
// FUNCTION: ROBLOXSTUDIO 0x00c8ddf0
extern "C" __declspec(naked) void asm_00c8ddf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_00c8de5e }
	__asm { cmp dword ptr [ebp + 0x14], 1 }
	__asm { jne L_00c8de5e }
	__asm { cmp dword ptr [ebp + 0x18], 1 }
	__asm { jne L_00c8de5e }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { sub eax, ecx }
	__asm { cdq }
	__asm { cmp edx, ebx }
	__asm { jg L_00c8de5e }
	__asm { jl L_00c8de28 }
	__asm { cmp eax, edi }
	__asm { ja L_00c8de5e }
	__asm { L_00c8de28: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { cmp ebx, edx }
	__asm { jg L_00c8de5e }
	__asm { jl L_00c8de3a }
	__asm { cmp edi, eax }
	__asm { ja L_00c8de5e }
	__asm { L_00c8de3a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { push 1 }
	__asm { sub ecx, edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { push 1 }
	__asm { add dword ptr [eax], edi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00a29be0 }
	__asm { L_00c8de5e: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { je L_00c8de6e }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00c8de6e: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { cmp ecx, 1 }
	__asm { jne L_00c8de88 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { je L_00c8de88 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cdq }
	__asm { sub edi, eax }
	__asm { sbb ebx, edx }
	__asm { L_00c8de88: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { push ecx }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { push ebx }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { push edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [eax], 0 }
	__asm { push dword ptr [esi + 0x44] }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a29c20 }
}

extern "C" char g_01313c61[];
extern "C" void fn_008ff0a0();
extern "C" void fn_00c6cf00();
extern "C" void fn_00c704d0();
extern "C" void fn_00c74970();
extern "C" void fn_00c7fa70();
// FUNCTION: ROBLOXSTUDIO 0x00c8e310
extern "C" __declspec(naked) void asm_00c8e310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { cmp dword ptr [edi], -1 }
	__asm { jne L_00c8e333 }
	__asm { mov eax, 0xffff }
	__asm { cmp word ptr [edi + 4], ax }
	__asm { jne L_00c8e333 }
	__asm { mov byte ptr [ebp + 0xf], 0 }
	__asm { jmp L_00c8e36e }
	__asm { L_00c8e333: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { movzx eax, byte ptr [ebx + 0x408] }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { movzx eax, byte ptr [g_01313c61] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_00c74970 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov al, byte ptr [eax + 4] }
	__asm { test al, al }
	__asm { jne L_00c8e386 }
	__asm { mov al, byte ptr [ecx + 0x18] }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { L_00c8e36e: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 8 }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { call fn_00c6cf00 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c8e386: }
	__asm { mov eax, dword ptr [ebx + 0x408] }
	__asm { inc eax }
	__asm { mov ecx, ebx }
	__asm { lea eax, [ebx + eax*8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_00c7fa70 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov ecx, dword ptr [ebx + 0x408] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebx + ecx*8 + 8], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebx + ecx*8 + 0xc], eax }
	__asm { mov al, byte ptr [ebx + 0x408] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { or al, 0x80 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 1], al }
	__asm { push 8 }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { call fn_00c6cf00 }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c704d0 }
	__asm { mov eax, dword ptr [ebx + 0x408] }
	__asm { cdq }
	__asm { mov ecx, 0x7f }
	__asm { idiv ecx }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { inc edx }
	__asm { mov dword ptr [ebx + 0x408], edx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_00c72550();
// FUNCTION: ROBLOXSTUDIO 0x00c908c0
extern "C" __declspec(naked) void asm_00c908c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69308 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test eax, eax }
	__asm { je L_00c908f2 }
	__asm { add eax, 0x1c }
	__asm { jmp L_00c908f4 }
	__asm { L_00c908f2: }
	__asm { xor eax, eax }
	__asm { L_00c908f4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { je L_00c90949 }
	__asm { test eax, eax }
	__asm { je L_00c90949 }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_00c90949 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c90934 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c90949 }
	__asm { L_00c90934: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c90949: }
	__asm { lea edi, [esi + 0x2178] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x20], edi }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov dword ptr [edi], eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c72550 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e36270[];
extern "C" char g_01038228[];
extern "C" void fn_006c46c0();
// FUNCTION: ROBLOXSTUDIO 0x00c90c20
extern "C" __declspec(naked) void asm_00c90c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ecx + 0x210], 0 }
	__asm { jne L_00c90c40 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld qword ptr [g_01038228] }
	__asm { fstp qword ptr [eax] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c90c40: }
	__asm { mov eax, dword ptr [ecx + 0x208] }
	__asm { test eax, eax }
	__asm { je L_00c90ca5 }
	__asm { cmp dword ptr [eax + 0x2198], 0 }
	__asm { jbe L_00c90c86 }
	__asm { mov eax, dword ptr [eax + 0x21c0] }
	__asm { sub esp, 8 }
	__asm { fld qword ptr [eax + 0x118] }
	__asm { lea eax, [ebp - 8] }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_006c46c0 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c90c86: }
	__asm { fld qword ptr [g_00e36270] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 8] }
	__asm { fstp qword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c90ca5: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld qword ptr [g_00e36270] }
	__asm { fstp qword ptr [eax] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004033d0();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_00c81a40();
// FUNCTION: ROBLOXSTUDIO 0x00c90f10
extern "C" __declspec(naked) void asm_00c90f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69368 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { cmp dword ptr [ecx + 0x208], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { je L_00c90fa9 }
	__asm { mov ecx, dword ptr [ecx + 0x208] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c81a40 }
	__asm { mov eax, 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { mov ecx, 0xef7244 }
	__asm { test esi, esi }
	__asm { cmovne ecx, esi }
	__asm { push ecx }
	__asm { push 0xef72bc }
	__asm { push 3 }
	__asm { push dword ptr [eax] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00773930 }
	__asm { add esp, 0x14 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004033d0 }
	__asm { mov eax, 0xc90fa9 }
	__asm { ret }
	__asm { L_00c90fa9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104c4[];
extern "C" void fn_00a29d70();
// FUNCTION: ROBLOXSTUDIO 0x00c91480
extern "C" __declspec(naked) void asm_00c91480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69430 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx] }
	__asm { sub eax, esi }
	__asm { cdq }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edx, edx }
	__asm { jl L_00c914cc }
	__asm { jg L_00c914bd }
	__asm { test eax, eax }
	__asm { je L_00c914cc }
	__asm { L_00c914bd: }
	__asm { push edx }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ecx + 0x44] }
	__asm { lea eax, [ecx + 0x3c] }
	__asm { push eax }
	__asm { call fn_00a29d70 }
	__asm { L_00c914cc: }
	__asm { mov ecx, dword ptr [ecx + 0x44] }
	__asm { mov bl, 1 }
	__asm { test ecx, ecx }
	__asm { je L_00c914e2 }
	__asm { call dword ptr [g_00e104c4] }
	__asm { cmp eax, -1 }
	__asm { jne L_00c914e2 }
	__asm { xor bl, bl }
	__asm { L_00c914e2: }
	__asm { mov al, bl }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0xc914fb }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104c4[];
extern "C" void fn_00a29d70();
// FUNCTION: ROBLOXSTUDIO 0x00c915e0
extern "C" __declspec(naked) void asm_00c915e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69450 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx] }
	__asm { sub eax, esi }
	__asm { cdq }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edx, edx }
	__asm { jl L_00c9162e }
	__asm { jg L_00c9161f }
	__asm { test eax, eax }
	__asm { je L_00c9162e }
	__asm { L_00c9161f: }
	__asm { push edx }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ecx + 0x44] }
	__asm { lea eax, [ecx + 0x3c] }
	__asm { push eax }
	__asm { call fn_00a29d70 }
	__asm { L_00c9162e: }
	__asm { mov ecx, dword ptr [ecx + 0x44] }
	__asm { test ecx, ecx }
	__asm { je L_00c9163b }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00c9163b: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0xc91654 }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a29f60();
// FUNCTION: ROBLOXSTUDIO 0x00c91670
extern "C" __declspec(naked) void asm_00c91670()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov eax, dword ptr [eax] }
	__asm { sub eax, ecx }
	__asm { cdq }
	__asm { mov esi, edx }
	__asm { mov ebx, eax }
	__asm { test esi, esi }
	__asm { jl L_00c91703 }
	__asm { jg L_00c91690 }
	__asm { test ebx, ebx }
	__asm { je L_00c91703 }
	__asm { L_00c91690: }
	__asm { push dword ptr [edi + 0x80] }
	__asm { push esi }
	__asm { push ebx }
	__asm { push ecx }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { call fn_00a29f60 }
	__asm { mov ecx, eax }
	__asm { cmp ecx, ebx }
	__asm { jne L_00c916ce }
	__asm { cmp edx, esi }
	__asm { jne L_00c916ce }
	__asm { mov ecx, dword ptr [edi + 0x88] }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov edx, dword ptr [edi + 0x90] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { add edx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { pop edi }
	__asm { sub edx, ecx }
	__asm { pop esi }
	__asm { mov dword ptr [eax], edx }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_00c916ce: }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov edx, dword ptr [edi + 0x90] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [edi + 0x88] }
	__asm { add ecx, eax }
	__asm { add edx, eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { sub edx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { sub esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { sub dword ptr [eax], esi }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { add dword ptr [eax], esi }
	__asm { L_00c91703: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00495630();
extern "C" void fn_00cc6a10();
extern "C" void fn_00ccd820();
extern "C" void fn_00ccd8d0();
// FUNCTION: ROBLOXSTUDIO 0x00c91d30
extern "C" __declspec(naked) void asm_00c91d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { cmp byte ptr [edi + 0x1205], 0 }
	__asm { mov ax, word ptr [esi + 4] }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { jne L_00c91dcc }
	__asm { cmp byte ptr [edi + 0x3738], 0 }
	__asm { je L_00c91dac }
	__asm { mov ecx, dword ptr [edi + 0x1254] }
	__asm { test ecx, ecx }
	__asm { je L_00c91dac }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov ax, word ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov word ptr [edx + 4], ax }
	__asm { call fn_00ccd8d0 }
	__asm { test al, al }
	__asm { je L_00c91dcc }
	__asm { mov ecx, dword ptr [edi + 0x1254] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00ccd820 }
	__asm { test al, al }
	__asm { jne L_00c91dcc }
	__asm { L_00c91dac: }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x11c0] }
	__asm { call fn_00cc6a10 }
	__asm { lea ecx, [edi + 0x11c0] }
	__asm { call fn_00495630 }
	__asm { mov dword ptr [edi + 0x1208], eax }
	__asm { L_00c91dcc: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005451a0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00c92330
extern "C" __declspec(naked) void asm_00c92330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov eax, dword ptr [eax + 0x128] }
	__asm { and eax, 3 }
	__asm { sub eax, 0 }
	__asm { je L_00c923a7 }
	__asm { dec eax }
	__asm { je L_00c9239f }
	__asm { dec eax }
	__asm { jne L_00c9239f }
	__asm { mov edi, dword ptr [edi + 0x38] }
	__asm { test edi, edi }
	__asm { je L_00c923a7 }
	__asm { add edi, 0x1c }
	__asm { je L_00c923a7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_005451a0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c923a7 }
	__asm { add edi, -0x1c }
	__asm { je L_00c923a7 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x90] }
	__asm { mov edx, eax }
	__asm { test edx, edx }
	__asm { je L_00c923a7 }
	__asm { mov ecx, dword ptr [edi + 0xcc] }
	__asm { xor eax, eax }
	__asm { cmp ecx, dword ptr [edx + 0xcc] }
	__asm { pop edi }
	__asm { sete al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c9239f: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c923a7: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038198[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fc97f[];
extern "C" void fn_006b8aba();
extern "C" void fn_006b9740();
extern "C" void fn_006c54a0();
extern "C" void fn_006c5500();
extern "C" void fn_00c92ef0();
extern "C" void fn_00cc7750();
// FUNCTION: ROBLOXSTUDIO 0x00c92420
extern "C" __declspec(naked) void asm_00c92420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x18 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00c92470 }
	__asm { cmp dword ptr [edi + 0x28], 0 }
	__asm { jg L_00c92470 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c9245f }
	__asm { push 0xdc }
	__asm { push 0xef6ec0 }
	__asm { push 0xef6f08 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c92470 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c9245f: }
	__asm { movzx eax, al }
	__asm { push 0xef6f20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c92470: }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_006c54a0 }
	__asm { inc dword ptr [edi + 0x2c] }
	__asm { push 0xb }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cc7750 }
	__asm { add esp, 0xc }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c92ef0 }
	__asm { cmp byte ptr [g_012fc97f], 0 }
	__asm { je L_00c924e5 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_006c54a0 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_006c5500 }
	__asm { fldz }
	__asm { movzx eax, byte ptr [g_012fc97f] }
	__asm { fst dword ptr [esp + 8] }
	__asm { fst dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { push ecx }
	__asm { fld qword ptr [ebp - 0x10] }
	__asm { fmul qword ptr [g_01038198] }
	__asm { fstp dword ptr [esp] }
	__asm { push 0xef6f8c }
	__asm { push eax }
	__asm { call fn_006b8aba }
	__asm { add esp, 0x18 }
	__asm { L_00c924e5: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [edi + 0x24], eax }
	__asm { pop edi }
	__asm { sete al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c93e30
extern "C" __declspec(naked) void asm_00c93e30()
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
	__asm { mov dword ptr [esi + 8], 0xef4e3c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xefa730 }
	__asm { mov dword ptr [esi + 8], 0xefa740 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c93eda }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00c93ec6 }
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
	__asm { L_00c93ec6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c93eda: }
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
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x00c94350
extern "C" __declspec(naked) void asm_00c94350()
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
	__asm { je L_00c9439b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c9439b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00c943ee }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xefa700 }
	__asm { mov dword ptr [esi + 8], 0xefa710 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xefa718 }
	__asm { mov dword ptr [esi + 8], 0xefa728 }
	__asm { jmp L_00c943f0 }
	__asm { L_00c943ee: }
	__asm { xor esi, esi }
	__asm { L_00c943f0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c9440d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c9440d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}
