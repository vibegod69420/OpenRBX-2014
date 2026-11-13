// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_009af5c0();
// FUNCTION: ROBLOXSTUDIO 0x009a6530
extern "C" __declspec(naked) void asm_009a6530()
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
	__asm { je L_009a657b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009a657b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_009a65ce }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe93648 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe936f0 }
	__asm { mov dword ptr [esi + 8], 0xe93700 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe93708 }
	__asm { mov dword ptr [esi + 8], 0xe93718 }
	__asm { jmp L_009a65d0 }
	__asm { L_009a65ce: }
	__asm { xor esi, esi }
	__asm { L_009a65d0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_009af5c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009a65ed }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009a65ed: }
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
extern "C" void fn_009af770();
// FUNCTION: ROBLOXSTUDIO 0x009a6640
extern "C" __declspec(naked) void asm_009a6640()
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
	__asm { je L_009a668b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009a668b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_009a66de }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe93628 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe93660 }
	__asm { mov dword ptr [esi + 8], 0xe93670 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe93678 }
	__asm { mov dword ptr [esi + 8], 0xe93688 }
	__asm { jmp L_009a66e0 }
	__asm { L_009a66de: }
	__asm { xor esi, esi }
	__asm { L_009a66e0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_009af770 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009a66fd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009a66fd: }
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
extern "C" void fn_009af410();
// FUNCTION: ROBLOXSTUDIO 0x009a6750
extern "C" __declspec(naked) void asm_009a6750()
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
	__asm { je L_009a679b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009a679b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_009a67ee }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe93638 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe93690 }
	__asm { mov dword ptr [esi + 8], 0xe936a0 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe936a8 }
	__asm { mov dword ptr [esi + 8], 0xe936b8 }
	__asm { jmp L_009a67f0 }
	__asm { L_009a67ee: }
	__asm { xor esi, esi }
	__asm { L_009a67f0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_009af410 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009a680d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009a680d: }
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
extern "C" void fn_009a3e80();
extern "C" void fn_009af260();
// FUNCTION: ROBLOXSTUDIO 0x009a6860
extern "C" __declspec(naked) void asm_009a6860()
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
	__asm { je L_009a68ab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009a68ab: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009a68d4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_009a3e80 }
	__asm { mov dword ptr [esi], 0xe937f8 }
	__asm { mov dword ptr [esi + 8], 0xe93808 }
	__asm { jmp L_009a68d6 }
	__asm { L_009a68d4: }
	__asm { xor esi, esi }
	__asm { L_009a68d6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009af260 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009a68fa }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009a68fa: }
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
extern "C" void fn_009a3f40();
extern "C" void fn_009af410();
// FUNCTION: ROBLOXSTUDIO 0x009a6940
extern "C" __declspec(naked) void asm_009a6940()
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
	__asm { je L_009a698b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009a698b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009a69b4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_009a3f40 }
	__asm { mov dword ptr [esi], 0xe93798 }
	__asm { mov dword ptr [esi + 8], 0xe937a8 }
	__asm { jmp L_009a69b6 }
	__asm { L_009a69b4: }
	__asm { xor esi, esi }
	__asm { L_009a69b6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009af410 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009a69da }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009a69da: }
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
extern "C" void fn_009a4000();
extern "C" void fn_009af5c0();
// FUNCTION: ROBLOXSTUDIO 0x009a6a20
extern "C" __declspec(naked) void asm_009a6a20()
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
	__asm { je L_009a6a6b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009a6a6b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009a6a94 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_009a4000 }
	__asm { mov dword ptr [esi], 0xe937c8 }
	__asm { mov dword ptr [esi + 8], 0xe937d8 }
	__asm { jmp L_009a6a96 }
	__asm { L_009a6a94: }
	__asm { xor esi, esi }
	__asm { L_009a6a96: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009af5c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009a6aba }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009a6aba: }
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
extern "C" void fn_009a40c0();
extern "C" void fn_009af770();
// FUNCTION: ROBLOXSTUDIO 0x009a6b00
extern "C" __declspec(naked) void asm_009a6b00()
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
	__asm { je L_009a6b4b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009a6b4b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009a6b74 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_009a40c0 }
	__asm { mov dword ptr [esi], 0xe93768 }
	__asm { mov dword ptr [esi + 8], 0xe93778 }
	__asm { jmp L_009a6b76 }
	__asm { L_009a6b74: }
	__asm { xor esi, esi }
	__asm { L_009a6b76: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009af770 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009a6b9a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009a6b9a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10500[];
extern "C" void fn_009a8910();
// FUNCTION: ROBLOXSTUDIO 0x009a6bb0
extern "C" __declspec(naked) void asm_009a6bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b2b9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009a6c42 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jae L_009a6c0a }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { inc eax }
	__asm { je L_009a6c14 }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_009a6c14 }
	__asm { L_009a6c0a: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_009a6c14: }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { lea eax, [edi + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009a8910 }
	__asm { pop edi }
	__asm { L_009a6c42: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
// FUNCTION: ROBLOXSTUDIO 0x009a7080
extern "C" __declspec(naked) void asm_009a7080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_004124c0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_009a82b0();
// FUNCTION: ROBLOXSTUDIO 0x009a73f0
extern "C" __declspec(naked) void asm_009a73f0()
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
	__asm { call fn_009a82b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe931dc }
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
	__asm { call fn_007d5390 }
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
	__asm { je L_009a749e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009a749e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5470();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_009a82b0();
// FUNCTION: ROBLOXSTUDIO 0x009a74c0
extern "C" __declspec(naked) void asm_009a74c0()
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
	__asm { call fn_009a82b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe93100 }
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
	__asm { call fn_007d5470 }
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
	__asm { je L_009a756e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009a756e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_009a82b0();
// FUNCTION: ROBLOXSTUDIO 0x009a7590
extern "C" __declspec(naked) void asm_009a7590()
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
	__asm { call fn_009a82b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe930b4 }
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
	__asm { je L_009a763e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009a763e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_009a82b0();
// FUNCTION: ROBLOXSTUDIO 0x009a7660
extern "C" __declspec(naked) void asm_009a7660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52aeb }
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
	__asm { call fn_009a82b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe93330 }
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
	__asm { call fn_007d5710 }
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
	__asm { je L_009a770e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009a770e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_0131a264[];
extern "C" char g_0131a268[];
extern "C" char g_0131a26c[];
extern "C" char g_0131a270[];
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_009a82b0();
extern "C" void fn_009ac1b0();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009a7730
extern "C" __declspec(naked) void asm_009a7730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd536f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_009a82b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe932b4 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov bl, byte ptr [ebp + 0x1c] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009a779b }
	__asm { mov byte ptr [eax], bl }
	__asm { jmp L_009a779d }
	__asm { L_009a779b: }
	__asm { xor eax, eax }
	__asm { L_009a779d: }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp + 0x1c], esp }
	__asm { mov esi, esp }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [esi + 8] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009a77c3 }
	__asm { mov byte ptr [eax], bl }
	__asm { L_009a77c3: }
	__asm { mov eax, dword ptr [g_0131a264] }
	__asm { test al, 1 }
	__asm { jne L_009a77ff }
	__asm { or eax, 1 }
	__asm { push 0xddc0d0 }
	__asm { mov dword ptr [g_0131a264], eax }
	__asm { mov dword ptr [g_0131a268], 0x12bdfcc }
	__asm { mov dword ptr [g_0131a270], 0x410d30 }
	__asm { mov dword ptr [g_0131a26c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009a77ff: }
	__asm { mov dword ptr [esi + 4], 0x131a268 }
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
	__asm { call fn_009ac1b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_00825060();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_009a83c0();
// FUNCTION: ROBLOXSTUDIO 0x009a7850
extern "C" __declspec(naked) void asm_009a7850()
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
	__asm { call fn_009a83c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe93274 }
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
	__asm { call fn_00825060 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5390 }
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
	__asm { je L_009a78fe }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009a78fe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00825140();
extern "C" void fn_009a83c0();
extern "C" void fn_009ac260();
// FUNCTION: ROBLOXSTUDIO 0x009a7920
extern "C" __declspec(naked) void asm_009a7920()
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
	__asm { call fn_009a83c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe9321c }
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
	__asm { call fn_009ac260 }
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
extern "C" void fn_007d5390();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_009a83c0();
// FUNCTION: ROBLOXSTUDIO 0x009a79d0
extern "C" __declspec(naked) void asm_009a79d0()
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
	__asm { call fn_009a83c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe932f8 }
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
	__asm { call fn_007d5710 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5390 }
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
	__asm { je L_009a7a7e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009a7a7e: }
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
extern "C" void fn_007d5710();
extern "C" void fn_008251b0();
extern "C" void fn_009a8200();
// FUNCTION: ROBLOXSTUDIO 0x009a8130
extern "C" __declspec(naked) void asm_009a8130()
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
	__asm { call fn_009a8200 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe93058 }
	__asm { call fn_007d5710 }
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
	__asm { jae L_009a81c2 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_009a81c2: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_009a81e5 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009a81e5: }
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
extern "C" char g_012f1374[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009a82b0
extern "C" __declspec(naked) void asm_009a82b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e126 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012f1374] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_009a832a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1374], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe92bac }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1248 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7990 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009a832a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12f1248 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe930a8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009a83a2 }
	__asm { push 0x12346f4 }
	__asm { mov ecx, 0x12346f4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009a83a2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009a838d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009a83a2 }
	__asm { L_009a838d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009a83a2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f1374[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009a83c0
extern "C" __declspec(naked) void asm_009a83c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e146 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012f1374] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_009a843a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1374], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe92bac }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1248 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7990 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009a843a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12f1248 }
	__asm { call fn_0092b930 }
	__asm { mov dword ptr [esi], 0xe93210 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009a84b2 }
	__asm { push 0x12346f4 }
	__asm { mov ecx, 0x12346f4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009a84b2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009a849d }
	__asm { push 0x662 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009a84b2 }
	__asm { L_009a849d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe55e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009a84b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x009a8910
extern "C" __declspec(naked) void asm_009a8910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41938 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test ecx, ecx }
	__asm { je L_009a8980 }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_009a896c }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { jmp L_009a8980 }
	__asm { L_009a896c: }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009a8980: }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009a89e9 }
	__asm { mov dword ptr [esi + 0x20], ecx }
	__asm { test cl, 1 }
	__asm { je L_009a89d5 }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009a89d5: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x28] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 0x28] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009a89e9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_009ac660();
// FUNCTION: ROBLOXSTUDIO 0x009a9000
extern "C" __declspec(naked) void asm_009a9000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e3a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009a908d }
	__asm { add esi, 5 }
	__asm { je L_009a9055 }
	__asm { add esi, -5 }
	__asm { jmp L_009a9057 }
	__asm { L_009a9055: }
	__asm { xor esi, esi }
	__asm { L_009a9057: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a9087 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a9087 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009a908d }
	__asm { L_009a9087: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009a908d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_009ac660 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009a90dc }
	__asm { add esi, 5 }
	__asm { je L_009a90b2 }
	__asm { add esi, -5 }
	__asm { jmp L_009a90b4 }
	__asm { L_009a90b2: }
	__asm { xor esi, esi }
	__asm { L_009a90b4: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a90dc }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a90dc }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_009a90dc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_009ac9f0();
// FUNCTION: ROBLOXSTUDIO 0x009a90f0
extern "C" __declspec(naked) void asm_009a90f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e3d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009a917d }
	__asm { add esi, 5 }
	__asm { je L_009a9145 }
	__asm { add esi, -5 }
	__asm { jmp L_009a9147 }
	__asm { L_009a9145: }
	__asm { xor esi, esi }
	__asm { L_009a9147: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a9177 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a9177 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009a917d }
	__asm { L_009a9177: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009a917d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_009ac9f0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009a91cc }
	__asm { add esi, 5 }
	__asm { je L_009a91a2 }
	__asm { add esi, -5 }
	__asm { jmp L_009a91a4 }
	__asm { L_009a91a2: }
	__asm { xor esi, esi }
	__asm { L_009a91a4: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a91cc }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a91cc }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_009a91cc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_009acd80();
// FUNCTION: ROBLOXSTUDIO 0x009a91e0
extern "C" __declspec(naked) void asm_009a91e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e408 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009a926d }
	__asm { add esi, 5 }
	__asm { je L_009a9235 }
	__asm { add esi, -5 }
	__asm { jmp L_009a9237 }
	__asm { L_009a9235: }
	__asm { xor esi, esi }
	__asm { L_009a9237: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a9267 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a9267 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009a926d }
	__asm { L_009a9267: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009a926d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_009acd80 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009a92bc }
	__asm { add esi, 5 }
	__asm { je L_009a9292 }
	__asm { add esi, -5 }
	__asm { jmp L_009a9294 }
	__asm { L_009a9292: }
	__asm { xor esi, esi }
	__asm { L_009a9294: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a92bc }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a92bc }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_009a92bc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_009ad110();
// FUNCTION: ROBLOXSTUDIO 0x009a92d0
extern "C" __declspec(naked) void asm_009a92d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009a935d }
	__asm { add esi, 5 }
	__asm { je L_009a9325 }
	__asm { add esi, -5 }
	__asm { jmp L_009a9327 }
	__asm { L_009a9325: }
	__asm { xor esi, esi }
	__asm { L_009a9327: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a9357 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a9357 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009a935d }
	__asm { L_009a9357: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009a935d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_009ad110 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009a93ac }
	__asm { add esi, 5 }
	__asm { je L_009a9382 }
	__asm { add esi, -5 }
	__asm { jmp L_009a9384 }
	__asm { L_009a9382: }
	__asm { xor esi, esi }
	__asm { L_009a9384: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a93ac }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a93ac }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_009a93ac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00403540();
extern "C" void fn_00513a40();
extern "C" void fn_008d01b0();
extern "C" void fn_009a4e60();
extern "C" void fn_009a5150();
extern "C" void fn_009a8910();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009a99a0
extern "C" __declspec(naked) void asm_009a99a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3e583 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x98 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { je L_009a99f6 }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_009a99e0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_009a99e0: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, edi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jns L_009a9aa7 }
	__asm { L_009a99f6: }
	__asm { mov dword ptr [ebp - 0xa4], 0 }
	__asm { mov dword ptr [ebp - 0x84], 0 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x64] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x50], 0xf }
	__asm { mov dword ptr [ebp - 0x54], 0 }
	__asm { mov byte ptr [ebp - 0x64], 0 }
	__asm { call fn_00403540 }
	__asm { lea eax, [ebp - 0xa4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009a8910 }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_009a4e60 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_009a5150 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_008d01b0 }
	__asm { cmp dword ptr [ebp - 0x50], 0x10 }
	__asm { jb L_009a9a83 }
	__asm { push dword ptr [ebp - 0x64] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a9a83: }
	__asm { lea ecx, [ebp - 0xa4] }
	__asm { mov dword ptr [ebp - 0x50], 0xf }
	__asm { mov dword ptr [ebp - 0x54], 0 }
	__asm { mov byte ptr [ebp - 0x64], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008d01b0 }
	__asm { L_009a9aa7: }
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

extern "C" char g_00e10528[];
extern "C" void fn_00403540();
extern "C" void fn_00410540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009a9ac0
extern "C" __declspec(naked) void asm_009a9ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e5b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { jne L_009a9b12 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x20], 0xe19198 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00410540 }
	__asm { L_009a9b12: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 0x34 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009a9b85 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a9b85: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_009a9ba8 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a9ba8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00403540();
extern "C" void fn_00410540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009a9bc0
extern "C" __declspec(naked) void asm_009a9bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e5b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { jne L_009a9c13 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x20], 0xe19198 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00410540 }
	__asm { L_009a9c13: }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 0x38 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009a9c8e }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a9c8e: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_009a9cb1 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a9cb1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009a9d70
extern "C" __declspec(naked) void asm_009a9d70()
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
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { add ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_009a9e01 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a9e01: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_009a9e24 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a9e24: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009a9f30
extern "C" __declspec(naked) void asm_009a9f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e608 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { add ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_009a9fcb }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a9fcb: }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_009a9fee }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a9fee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x3c }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009aaa60
extern "C" __declspec(naked) void asm_009aaa60()
{
	__asm { L_009aaa60: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e7d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov ebx, esi }
	__asm { jne L_009aab4b }
	__asm { push edi }
	__asm { L_009aaa92: }
	__asm { push dword ptr [ebx + 8] }
	__asm { mov ecx, eax }
	__asm { call L_009aaa60 }
	__asm { mov ebx, dword ptr [ebx] }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { lea esi, [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_009aaadc }
	__asm { test al, 1 }
	__asm { jne L_009aaad5 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x28] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009aaad5 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009aaad5: }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_009aaadc: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009aab05 }
	__asm { test al, 1 }
	__asm { jne L_009aaaff }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009aaaff }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009aaaff: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_009aab05: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_009aab1c }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009aab1c: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [ebx + 0xd], 0 }
	__asm { mov esi, ebx }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { je L_009aaa92 }
	__asm { pop edi }
	__asm { L_009aab4b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0042e6e0();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_00463960();
extern "C" void fn_006b9980();
extern "C" void fn_007cd560();
extern "C" void fn_008f73e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009aab60
extern "C" __declspec(naked) void asm_009aab60()
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
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009aabcc }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_009aab9d }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_009aab9f }
	__asm { call fn_0043ee40 }
	__asm { jmp L_009aab9f }
	__asm { L_009aab9d: }
	__asm { mov eax, ecx }
	__asm { L_009aab9f: }
	__asm { test eax, eax }
	__asm { je L_009aabcc }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_009aabcc }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_009aabcc }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_009aabcc }
	__asm { call fn_00463960 }
	__asm { jmp L_009aabce }
	__asm { L_009aabcc: }
	__asm { xor eax, eax }
	__asm { L_009aabce: }
	__asm { mov ecx, eax }
	__asm { call fn_008f73e0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_006b9980 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0042e6e0 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_009aac07 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009aac07: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e102c4[];
extern "C" char g_00e102c8[];
extern "C" char g_00e102d4[];
extern "C" char g_00e102dc[];
extern "C" char g_00e10318[];
extern "C" char g_00e1031c[];
extern "C" char g_00e10394[];
extern "C" void fn_00426140();
extern "C" void fn_004270c0();
extern "C" void fn_00532500();
extern "C" void fn_009aab60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009aac20
extern "C" __declspec(naked) void asm_009aac20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38405 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xb8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x70] }
	__asm { mov dword ptr [ebp - 0xc0], 0x102c20c }
	__asm { call dword ptr [g_00e102d4] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xbc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 2 }
	__asm { call dword ptr [g_00e10394] }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xc0], 0xe3b85c }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x50] }
	__asm { mov dword ptr [ebp + ecx - 0xc4], eax }
	__asm { lea ecx, [ebp - 0xbc] }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [ebp - 0xbc], 0xe1827c }
	__asm { mov dword ptr [ebp - 0x84], 0 }
	__asm { mov dword ptr [ebp - 0x80], 4 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_009aab60 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc0] }
	__asm { push eax }
	__asm { call fn_004270c0 }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e102c4] }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { jb L_009aad1e }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009aad1e: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00532500 }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xc0], 0xe3b85c }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x50] }
	__asm { mov dword ptr [ebp + ecx - 0xc4], eax }
	__asm { lea ecx, [ebp - 0xbc] }
	__asm { mov dword ptr [ebp - 0xbc], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [ebp - 0xbc] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [ebp - 0xb8] }
	__asm { call dword ptr [g_00e102dc] }
	__asm { lea ecx, [ebp - 0x70] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e102c4[];
extern "C" char g_00e102c8[];
extern "C" char g_00e102d4[];
extern "C" char g_00e102dc[];
extern "C" char g_00e10318[];
extern "C" char g_00e1031c[];
extern "C" char g_00e10394[];
extern "C" void fn_00426140();
extern "C" void fn_004270c0();
extern "C" void fn_004276b0();
extern "C" void fn_00532500();
extern "C" void fn_009aab60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009aadc0
extern "C" __declspec(naked) void asm_009aadc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38405 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xb8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x70] }
	__asm { mov dword ptr [ebp - 0xc0], 0x102c20c }
	__asm { call dword ptr [g_00e102d4] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xbc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 2 }
	__asm { call dword ptr [g_00e10394] }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xc0], 0xe3b85c }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x50] }
	__asm { mov dword ptr [ebp + ecx - 0xc4], eax }
	__asm { lea ecx, [ebp - 0xbc] }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [ebp - 0xbc], 0xe1827c }
	__asm { mov dword ptr [ebp - 0x84], 0 }
	__asm { mov dword ptr [ebp - 0x80], 4 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_009aab60 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { push 0xe93614 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc0] }
	__asm { push eax }
	__asm { call fn_004270c0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004270c0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e102c4] }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { jb L_009aaed8 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009aaed8: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00532500 }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xc0], 0xe3b85c }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x50] }
	__asm { mov dword ptr [ebp + ecx - 0xc4], eax }
	__asm { lea ecx, [ebp - 0xbc] }
	__asm { mov dword ptr [ebp - 0xbc], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [ebp - 0xbc] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [ebp - 0xb8] }
	__asm { call dword ptr [g_00e102dc] }
	__asm { lea ecx, [ebp - 0x70] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_01303eb9[];
extern "C" void fn_00403540();
extern "C" void fn_009a43b0();
extern "C" void fn_009a5fa0();
extern "C" void fn_009a7290();
extern "C" void fn_009b21c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009ab5c0
extern "C" __declspec(naked) void asm_009ab5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e890 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { movzx eax, byte ptr [g_01303eb9] }
	__asm { sub esp, 0x20 }
	__asm { mov edi, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0 }
	__asm { sub esp, 0x24 }
	__asm { mov esi, esp }
	__asm { push eax }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_009a7290 }
	__asm { add esp, 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push 0x9aa650 }
	__asm { push esi }
	__asm { call fn_009a5fa0 }
	__asm { add esp, 0x2c }
	__asm { mov ecx, edi }
	__asm { call fn_009a43b0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { lea eax, [ebp + 0x24] }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009b21c0 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009ab69e }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ab69e: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_009ab6c1 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ab6c1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" void fn_00403540();
extern "C" void fn_009a9d70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009ab6e0
extern "C" __declspec(naked) void asm_009ab6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e8b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { lea esi, [ecx + 0x10] }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x20] }
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
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [esi + 8] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009a9d70 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009ab772 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ab772: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_009ab795 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ab795: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_00403540();
extern "C" void fn_009a9ac0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009ab7b0
extern "C" __declspec(naked) void asm_009ab7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e8b8 }
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
	__asm { lea eax, [ebp + 0x20] }
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
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009a9ac0 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009ab83f }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ab83f: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_009ab862 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ab862: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_00403540();
extern "C" void fn_009a9f30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009ab9e0
extern "C" __declspec(naked) void asm_009ab9e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e8b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x20] }
	__asm { lea edi, [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { movzx eax, byte ptr [edi + 0xc] }
	__asm { push eax }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [edi + 8] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009a9f30 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009aba80 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009aba80: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_009abaa3 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009abaa3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_00403540();
extern "C" void fn_009a9bc0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009abac0
extern "C" __declspec(naked) void asm_009abac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e8b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [edi + 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009a9bc0 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009abb58 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009abb58: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_009abb7b }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009abb7b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x009ac1b0
extern "C" __declspec(naked) void asm_009ac1b0()
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
	__asm { call fn_007d5d30 }
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
	__asm { je L_009ac22d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009ac22d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009ac247 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009ac247: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
extern "C" void fn_00825060();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x009ac260
extern "C" __declspec(naked) void asm_009ac260()
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
	__asm { call fn_00825060 }
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
	__asm { call fn_007d5390 }
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
	__asm { je L_009ac2dd }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009ac2dd: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009ac2f7 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009ac2f7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_00403540();
extern "C" void fn_009ae350();
extern "C" void fn_009b1fe0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009ae0d0
extern "C" __declspec(naked) void asm_009ae0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e9e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
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
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009ae350 }
	__asm { test esi, esi }
	__asm { je L_009ae15b }
	__asm { add esi, 0x1c }
	__asm { jmp L_009ae15d }
	__asm { L_009ae15b: }
	__asm { xor esi, esi }
	__asm { L_009ae15d: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp + 8], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
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
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009b1fe0 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_009ae1c7 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ae1c7: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_009ae1ea }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ae1ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_00403540();
extern "C" void fn_009aa000();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009ae350
extern "C" __declspec(naked) void asm_009ae350()
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
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { add ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009aa000 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_009ae3e2 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ae3e2: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_009ae405 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ae405: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_009aa140();
// FUNCTION: ROBLOXSTUDIO 0x009ae510
extern "C" __declspec(naked) void asm_009ae510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69a38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test bl, bl }
	__asm { je L_009ae58f }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_009ae58f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009ae57e }
	__asm { push 0x14a }
	__asm { push 0xe52268 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009ae58f }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_009ae57e: }
	__asm { movzx eax, bl }
	__asm { push 0xe55d98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009ae58f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009ae59b }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_009ae59d }
	__asm { L_009ae59b: }
	__asm { xor edi, edi }
	__asm { L_009ae59d: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { add ecx, 0x44 }
	__asm { push eax }
	__asm { call fn_0079a070 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esp }
	__asm { call fn_004d1ca0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009aa140 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_009a62b0();
extern "C" void fn_009aa2a0();
// FUNCTION: ROBLOXSTUDIO 0x009ae5f0
extern "C" __declspec(naked) void asm_009ae5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3df48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test bl, bl }
	__asm { je L_009ae66f }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_009ae66f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009ae65e }
	__asm { push 0x14a }
	__asm { push 0xe52268 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009ae66f }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_009ae65e: }
	__asm { movzx eax, bl }
	__asm { push 0xe55d98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009ae66f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009ae67b }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_009ae67d }
	__asm { L_009ae67b: }
	__asm { xor edi, edi }
	__asm { L_009ae67d: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 0x1c }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { add ecx, 0x44 }
	__asm { push eax }
	__asm { call fn_009a62b0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esp }
	__asm { call fn_004d1ca0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009aa2a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412300();
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_009aa3e0();
// FUNCTION: ROBLOXSTUDIO 0x009ae6d0
extern "C" __declspec(naked) void asm_009ae6d0()
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
	__asm { je L_009ae73a }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_009ae73a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009ae729 }
	__asm { push 0x169 }
	__asm { push 0xe52268 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009ae73a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_009ae729: }
	__asm { movzx eax, bl }
	__asm { push 0xe72810 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009ae73a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009ae746 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_009ae748 }
	__asm { L_009ae746: }
	__asm { xor edi, edi }
	__asm { L_009ae748: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x8c }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { sub esp, 0x18 }
	__asm { push esp }
	__asm { call fn_004d1ca0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { call fn_009aa3e0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009ae790
extern "C" __declspec(naked) void asm_009ae790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ea38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_009ae813 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp + 8], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
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
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { lea ecx, [esi + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [eax] }
	__asm { L_009ae813: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_009ae824 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ae824: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_009ae847 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ae847: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" void fn_0067d390();
extern "C" void fn_00b13870();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009b0e10
extern "C" __declspec(naked) void asm_009b0e10()
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
	__asm { jne L_009b0e81 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x24 }
	__asm { mov esi, dword ptr [eax] }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009b0e6b }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00b13870 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b0e6b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b0e81: }
	__asm { cmp eax, 1 }
	__asm { jne L_009b0ea5 }
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
	__asm { L_009b0ea5: }
	__asm { cmp eax, 2 }
	__asm { jne L_009b0ecf }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_009b0eba }
	__asm { push 1 }
	__asm { call fn_0067d390 }
	__asm { L_009b0eba: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b0ecf: }
	__asm { cmp eax, 3 }
	__asm { jne L_009b0efe }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x1234718 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_009b0eba }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b0efe: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0x1234718 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_007d5550();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009b1fe0
extern "C" __declspec(naked) void asm_009b1fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ed58 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007d5550 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5550 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { lea eax, [ebp + 0x24] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x48] }
	__asm { call fn_0048e3f0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { push edi }
	__asm { call dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00426f50 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_009b2084 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009b2084: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_009b20a7 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009b20a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

// FUNCTION: ROBLOXSTUDIO 0x009b2b10
extern "C" __declspec(naked) void asm_009b2b10()
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
	__asm { mov dword ptr [esi + 8], 0xe94298 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe942a0 }
	__asm { mov dword ptr [esi + 8], 0xe942b0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009b2bba }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_009b2ba6 }
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
	__asm { L_009b2ba6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009b2bba: }
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
extern "C" void fn_009b2b10();
extern "C" void fn_009b61f0();
// FUNCTION: ROBLOXSTUDIO 0x009b2fd0
extern "C" __declspec(naked) void asm_009b2fd0()
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
	__asm { je L_009b301b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009b301b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009b3044 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_009b2b10 }
	__asm { mov dword ptr [esi], 0xe942b8 }
	__asm { mov dword ptr [esi + 8], 0xe942c8 }
	__asm { jmp L_009b3046 }
	__asm { L_009b3044: }
	__asm { xor esi, esi }
	__asm { L_009b3046: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009b61f0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009b306a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009b306a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007de8e0();
extern "C" void fn_009b2bd0();
extern "C" void fn_009b4230();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009b3110
extern "C" __declspec(naked) void asm_009b3110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x120 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009b3164 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_009b4230 }
	__asm { mov edi, eax }
	__asm { jmp L_009b3166 }
	__asm { L_009b3164: }
	__asm { xor edi, edi }
	__asm { L_009b3166: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [esi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], edi }
	__asm { call fn_009b2bd0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_009b3197 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_009b3197 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_007de8e0 }
	__asm { L_009b3197: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b3080();
extern "C" void fn_009b31b0();
extern "C" void fn_009b33e0();
extern "C" void fn_009b5310();
extern "C" void fn_009b72b0();
extern "C" void fn_00a091a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009b3240
extern "C" __declspec(naked) void asm_009b3240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3ef88 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { movzx eax, byte ptr [esi] }
	__asm { inc eax }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { add eax, esi }
	__asm { je L_009b326f }
	__asm { inc eax }
	__asm { jmp L_009b3271 }
	__asm { L_009b326f: }
	__asm { xor eax, eax }
	__asm { L_009b3271: }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009b33e0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_009b32a1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009b32a1: }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_009b32ab }
	__asm { inc eax }
	__asm { jmp L_009b32ad }
	__asm { L_009b32ab: }
	__asm { xor eax, eax }
	__asm { L_009b32ad: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009b5310 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_009b3080 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add esp, 0xc }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 0xf], 1 }
	__asm { call fn_009b72b0 }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00a091a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov byte ptr [edi + 4], 1 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009b3331 }
	__asm { cmp byte ptr [ebp - 0xf], 0 }
	__asm { je L_009b3328 }
	__asm { push esi }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_009b31b0 }
	__asm { add esp, 8 }
	__asm { L_009b3328: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009b3331: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10524[];
extern "C" void fn_0040c5b0();
extern "C" void fn_006b98f0();
extern "C" void fn_007dba40();
extern "C" void fn_007dec00();
extern "C" void fn_007e8960();
extern "C" void fn_009b5380();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009b3490
extern "C" __declspec(naked) void asm_009b3490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10524] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_009b34de }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_009b34b2 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_009b34b7 }
	__asm { L_009b34b2: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_009b34b7: }
	__asm { cmp ecx, 0x11f0754 }
	__asm { je L_009b34d7 }
	__asm { test eax, eax }
	__asm { je L_009b34c7 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_009b34cc }
	__asm { L_009b34c7: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_009b34cc: }
	__asm { push 0x11f0754 }
	__asm { call ebx }
	__asm { test al, al }
	__asm { je L_009b34de }
	__asm { L_009b34d7: }
	__asm { lea eax, [esi + 4] }
	__asm { test eax, eax }
	__asm { jne L_009b353f }
	__asm { L_009b34de: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be0b8 }
	__asm { je L_009b34f6 }
	__asm { push eax }
	__asm { mov ecx, 0x12be0b8 }
	__asm { call ebx }
	__asm { test al, al }
	__asm { je L_009b3546 }
	__asm { L_009b34f6: }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0040c5b0 }
	__asm { lea ecx, [ebp - 4] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_009b5380 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 8], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_009b3520 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009b3520: }
	__asm { test bl, bl }
	__asm { je L_009b3546 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007dba40 }
	__asm { call fn_007e8960 }
	__asm { push esi }
	__asm { mov dword ptr [edi], eax }
	__asm { call fn_007dec00 }
	__asm { add esp, 4 }
	__asm { L_009b353f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b3546: }
	__asm { call fn_007e8960 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { add ecx, 4 }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_009b3559 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_009b3559: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_009b3569 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_009b3569: }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0xf13664 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00825140();
extern "C" void fn_009b3490();
extern "C" void fn_009b37e0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009b3590
extern "C" __declspec(naked) void asm_009b3590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f38 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 1 }
	__asm { jb L_009b365b }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_009b37e0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_009b35e3 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b35e3: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_009b3641 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_009b3490 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_009b3630 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_009b3630: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b3641: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009b365b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009b365b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009b3675 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b3675: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe4fd34 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007cb250();
extern "C" void fn_007e8960();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_009b4120();
// FUNCTION: ROBLOXSTUDIO 0x009b3880
extern "C" __declspec(naked) void asm_009b3880()
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
	__asm { call fn_009b4120 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe93da4 }
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
	__asm { call fn_007e8960 }
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
	__asm { je L_009b392e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009b392e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00825140();
extern "C" void fn_009b4120();
extern "C" void fn_009b5470();
// FUNCTION: ROBLOXSTUDIO 0x009b3950
extern "C" __declspec(naked) void asm_009b3950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31756 }
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
	__asm { call fn_009b4120 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe93d70 }
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
	__asm { call fn_009b5470 }
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
extern "C" void fn_007d5d30();
extern "C" void fn_007e8960();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_009b4120();
// FUNCTION: ROBLOXSTUDIO 0x009b3a00
extern "C" __declspec(naked) void asm_009b3a00()
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
	__asm { call fn_009b4120 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe93dc0 }
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
	__asm { call fn_007e8960 }
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
	__asm { je L_009b3aae }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009b3aae: }
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
// FUNCTION: ROBLOXSTUDIO 0x009b3e70
extern "C" __declspec(naked) void asm_009b3e70()
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
	__asm { push 0x11f0754 }
	__asm { mov edi, ecx }
	__asm { push 0xe64820 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59820 }
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
	__asm { push 0xe93e10 }
	__asm { push 0x20 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe93e18 }
	__asm { push 8 }
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
extern "C" void fn_007e8960();
extern "C" void fn_008251b0();
extern "C" void fn_009b4070();
// FUNCTION: ROBLOXSTUDIO 0x009b3fa0
extern "C" __declspec(naked) void asm_009b3fa0()
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
	__asm { call fn_009b4070 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe93de4 }
	__asm { call fn_007e8960 }
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
	__asm { jae L_009b4032 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_009b4032: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_009b4055 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009b4055: }
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
extern "C" char g_012ed80c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009b4120
extern "C" __declspec(naked) void asm_009b4120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f0b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012ed80c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_009b419a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ed80c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9388c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ed6e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009b419a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12ed6e0 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe93d64 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009b4212 }
	__asm { push 0x1238e58 }
	__asm { mov ecx, 0x1238e58 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009b4212 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009b41fd }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009b4212 }
	__asm { L_009b41fd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009b4212: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de64e[];
extern "C" void fn_00403110();
extern "C" void fn_004115f0();
extern "C" void fn_006b8a90();
extern "C" void fn_009b3b90();
extern "C" void fn_009b7330();
// FUNCTION: ROBLOXSTUDIO 0x009b4430
extern "C" __declspec(naked) void asm_009b4430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f164 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_009b3b90 }
	__asm { mov dword ptr [esi + 0x64], 0xe6ac4c }
	__asm { mov dword ptr [esi + 0x68], 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { mov dword ptr [esi], 0xe93a1c }
	__asm { mov dword ptr [esi + 4], 0xe93a94 }
	__asm { mov dword ptr [esi + 0x18], 0xe93a9c }
	__asm { mov dword ptr [esi + 0x1c], 0xe93aa8 }
	__asm { mov dword ptr [esi + 0x64], 0xe93ab8 }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_009b44c8 }
	__asm { sub eax, 4 }
	__asm { L_009b44c8: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x78], eax }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [esi + 0x80], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x84], 0 }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { lea eax, [esi + 0x8c] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x9b7450 }
	__asm { push 0x130409c }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009b7330 }
	__asm { mov al, byte ptr [g_012de64e] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test al, al }
	__asm { je L_009b453b }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe94128 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_009b453b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007e8960();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x009b5470
extern "C" __declspec(naked) void asm_009b5470()
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
	__asm { call fn_007e8960 }
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
	__asm { call fn_007d5550 }
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
	__asm { je L_009b54ed }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009b54ed: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009b5507 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009b5507: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_00403540();
extern "C" void fn_0083e860();
extern "C" void fn_009b3590();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009b5bf0
extern "C" __declspec(naked) void asm_009b5bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x30] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_009b3590 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x34] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0083e860 }
	__asm { add esp, 0x1c }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_009b5c4b }
	__asm { add ebx, -0x1c }
	__asm { jmp L_009b5c4d }
	__asm { L_009b5c4b: }
	__asm { xor ebx, ebx }
	__asm { L_009b5c4d: }
	__asm { mov edi, dword ptr [edi + 0x28] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { sub esp, 0x18 }
	__asm { mov esi, dword ptr [esi + 0x2c] }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebx + esi] }
	__asm { call edi }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_009b5c8f }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009b5c8f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007dec00();
extern "C" void fn_009b4bb0();
// FUNCTION: ROBLOXSTUDIO 0x009b5d10
extern "C" __declspec(naked) void asm_009b5d10()
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
	__asm { je L_009b5d7a }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { je L_009b5d7a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009b5d69 }
	__asm { push 0x12d }
	__asm { push 0xe52268 }
	__asm { push 0xe5413c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009b5d7a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_009b5d69: }
	__asm { movzx eax, bl }
	__asm { push 0xe54150 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009b5d7a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009b5d86 }
	__asm { lea esi, [eax - 0x1c] }
	__asm { jmp L_009b5d88 }
	__asm { L_009b5d86: }
	__asm { xor esi, esi }
	__asm { L_009b5d88: }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_007dec00 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [eax] }
	__asm { add ecx, esi }
	__asm { call fn_009b4bb0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd560();
extern "C" void fn_0080fc10();
extern "C" void fn_00962630();
// FUNCTION: ROBLOXSTUDIO 0x009b5fe0
extern "C" __declspec(naked) void asm_009b5fe0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 0x38] }
	__asm { test edi, edi }
	__asm { je L_009b600a }
	__asm { add edi, 0x1c }
	__asm { je L_009b600a }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0080fc10 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_009b600a }
	__asm { lea esi, [edi - 0x1c] }
	__asm { jmp L_009b600c }
	__asm { L_009b600a: }
	__asm { xor esi, esi }
	__asm { L_009b600c: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009b6055 }
	__asm { push ebx }
	__asm { call fn_00962630 }
	__asm { add esp, 4 }
	__asm { cmp esi, eax }
	__asm { je L_009b6055 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009b6040 }
	__asm { push 0x4c }
	__asm { push 0xe93e28 }
	__asm { push 0xe93e70 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009b6055 }
	__asm { L_009b6040: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe93eb8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009b6055: }
	__asm { test esi, esi }
	__asm { je L_009b6060 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_009b6060: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_007b5ea0();
extern "C" void fn_009b33e0();
extern "C" void fn_009b5a70();
// FUNCTION: ROBLOXSTUDIO 0x009b7860
extern "C" __declspec(naked) void asm_009b7860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { movzx eax, byte ptr [ecx + 0x74] }
	__asm { push esi }
	__asm { push edi }
	__asm { lea edi, [ecx + 0x74] }
	__asm { inc eax }
	__asm { add eax, edi }
	__asm { je L_009b7875 }
	__asm { inc eax }
	__asm { jmp L_009b7877 }
	__asm { L_009b7875: }
	__asm { xor eax, eax }
	__asm { L_009b7877: }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_009b33e0 }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { test esi, esi }
	__asm { je L_009b78d1 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_007b5ea0 }
	__asm { lea eax, [esi + 0x2c] }
	__asm { test eax, eax }
	__asm { je L_009b78a9 }
	__asm { add eax, -0x2c }
	__asm { jmp L_009b78ab }
	__asm { L_009b78a9: }
	__asm { xor eax, eax }
	__asm { L_009b78ab: }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { test eax, eax }
	__asm { je L_009b78c6 }
	__asm { add eax, -0x2c }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_009b5a70 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009b78c6: }
	__asm { xor eax, eax }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_009b5a70 }
	__asm { L_009b78d1: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010381c8[];
extern "C" void fn_00424480();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_0067af70();
extern "C" void fn_007be290();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x009b78e0
extern "C" __declspec(naked) void asm_009b78e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test edi, edi }
	__asm { je L_009b7930 }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_009b7901 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_009b7903 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_009b7903 }
	__asm { L_009b7901: }
	__asm { mov eax, edi }
	__asm { L_009b7903: }
	__asm { test eax, eax }
	__asm { je L_009b7930 }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_009b7930 }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_009b7930 }
	__asm { lea ecx, [ebx - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_009b7930 }
	__asm { call fn_0067af70 }
	__asm { jmp L_009b7932 }
	__asm { L_009b7930: }
	__asm { xor eax, eax }
	__asm { L_009b7932: }
	__asm { lea ecx, [eax + 0x128] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov esi, eax }
	__asm { call fn_00424480 }
	__asm { cmp dword ptr [eax + 0x70], 3 }
	__asm { jne L_009b7969 }
	__asm { cmp byte ptr [eax + 0x82], 0 }
	__asm { jne L_009b7969 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp byte ptr [ecx + 6], 0 }
	__asm { je L_009b7963 }
	__asm { mov eax, 1 }
	__asm { jmp L_009b7981 }
	__asm { L_009b7963: }
	__asm { movzx eax, byte ptr [ecx + 7] }
	__asm { jmp L_009b797d }
	__asm { L_009b7969: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp byte ptr [eax + 2], 0 }
	__asm { je L_009b7979 }
	__asm { mov eax, 1 }
	__asm { jmp L_009b7981 }
	__asm { L_009b7979: }
	__asm { movzx eax, byte ptr [eax + 3] }
	__asm { L_009b797d: }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { L_009b7981: }
	__asm { cmp dword ptr [esi + 0x1a0], 6 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { je L_009b79be }
	__asm { test eax, eax }
	__asm { je L_009b79be }
	__asm { fild dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fmul dword ptr [edi + 0x94] }
	__asm { fmul qword ptr [eax + 8] }
	__asm { fmul dword ptr [g_010381c8] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_007be290 }
	__asm { inc dword ptr [edi + 0x90] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009b79be: }
	__asm { mov dword ptr [edi + 0x90], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x009b7cc0
extern "C" __declspec(naked) void asm_009b7cc0()
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
	__asm { je L_009b7d0b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009b7d0b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_009b7d5e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe947a8 }
	__asm { mov dword ptr [esi + 8], 0xe947b8 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe947c0 }
	__asm { mov dword ptr [esi + 8], 0xe947d0 }
	__asm { jmp L_009b7d60 }
	__asm { L_009b7d5e: }
	__asm { xor esi, esi }
	__asm { L_009b7d60: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009b7d7d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009b7d7d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e26f4[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009b7f10
extern "C" __declspec(naked) void asm_009b7f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f456 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e26f4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_009b7f8a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e26f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe94460 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e25c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3430 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009b7f8a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e25c8 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe945b8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009b8002 }
	__asm { push 0x1239c98 }
	__asm { mov ecx, 0x1239c98 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009b8002 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009b7fed }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009b8002 }
	__asm { L_009b7fed: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009b8002: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_007b00e0();
// FUNCTION: ROBLOXSTUDIO 0x009b8130
extern "C" __declspec(naked) void asm_009b8130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f4a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 0x6c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009b81ae }
	__asm { add esi, 5 }
	__asm { je L_009b817e }
	__asm { add esi, -5 }
	__asm { jmp L_009b8180 }
	__asm { L_009b817e: }
	__asm { xor esi, esi }
	__asm { L_009b8180: }
	__asm { push ebx }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009b81ad }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009b81ad }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009b81ad: }
	__asm { pop ebx }
	__asm { L_009b81ae: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe94474 }
	__asm { mov dword ptr [edi + 4], 0xe944ec }
	__asm { mov dword ptr [edi + 0x18], 0xe944f4 }
	__asm { mov dword ptr [edi + 0x1c], 0xe94500 }
	__asm { call fn_007b00e0 }
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
extern "C" void fn_0043f040();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009b8310
extern "C" __declspec(naked) void asm_009b8310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test bl, bl }
	__asm { je L_009b8374 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { sub edx, dword ptr [eax] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { je L_009b8374 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009b8363 }
	__asm { push 0x114 }
	__asm { push 0xe52268 }
	__asm { push 0xe541b4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009b8374 }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_009b8363: }
	__asm { movzx eax, bl }
	__asm { push 0xe541c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009b8374: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009b838e }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_0043f040 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009b838e: }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_0043f040 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { cmp byte ptr [ecx + 0x72], 0 }
	__asm { je L_009b83b2 }
	__asm { mov byte ptr [ecx + 0x70], 1 }
	__asm { add ecx, 0x6c }
	__asm { jmp fn_0043f040 }
	__asm { L_009b83b2: }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f86ab[];
extern "C" void fn_0043eed0();
extern "C" void fn_006b9740();
extern "C" void fn_00908fb0();
extern "C" void fn_00c2bee0();
extern "C" void fn_00c307f0();
// FUNCTION: ROBLOXSTUDIO 0x009b84b0
extern "C" __declspec(naked) void asm_009b84b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012f86ab], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { jne L_009b84c6 }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009b84c6: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [edi - 0x64] }
	__asm { test esi, esi }
	__asm { jne L_009b84d5 }
	__asm { xor al, al }
	__asm { jmp L_009b84e6 }
	__asm { L_009b84d5: }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { cmp eax, ecx }
	__asm { jne L_009b84e0 }
	__asm { mov al, 1 }
	__asm { jmp L_009b84e6 }
	__asm { L_009b84e0: }
	__asm { push eax }
	__asm { call fn_0043eed0 }
	__asm { L_009b84e6: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_009b8531 }
	__asm { test al, al }
	__asm { jne L_009b8535 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009b8518 }
	__asm { push 0x68 }
	__asm { push 0xe94650 }
	__asm { push 0xe89924 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009b8558 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_009b8518: }
	__asm { movzx eax, cl }
	__asm { push 0xe94740 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009b8531: }
	__asm { test al, al }
	__asm { je L_009b8558 }
	__asm { L_009b8535: }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c307f0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_009b8558 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_009b8558 }
	__asm { cmp byte ptr [edi + 0xd], al }
	__asm { jne L_009b8560 }
	__asm { L_009b8558: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009b8560: }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { call fn_00908fb0 }
	__asm { test eax, eax }
	__asm { pop esi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009b86c0
extern "C" __declspec(naked) void asm_009b86c0()
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
	__asm { mov dword ptr [esi + 8], 0xe94c58 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe94cd8 }
	__asm { mov dword ptr [esi + 8], 0xe94ce8 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009b876a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_009b8756 }
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
	__asm { L_009b8756: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009b876a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x009b8780
extern "C" __declspec(naked) void asm_009b8780()
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
	__asm { mov dword ptr [esi + 8], 0xe94c68 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe94d08 }
	__asm { mov dword ptr [esi + 8], 0xe94d18 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009b882a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_009b8816 }
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
	__asm { L_009b8816: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009b882a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1026c[];
extern "C" char g_00e1027c[];
extern "C" char g_00e103cc[];
extern "C" char g_00e10458[];
// FUNCTION: ROBLOXSTUDIO 0x009b9070
extern "C" __declspec(naked) void asm_009b9070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f510 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { xor edi, edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { call dword ptr [g_00e1027c] }
	__asm { test eax, eax }
	__asm { je L_009b90c1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, esi }
	__asm { call dword ptr [g_00e1027c] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 4] }
	__asm { L_009b90c1: }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e103cc] }
	__asm { mov byte ptr [ebp - 0x18], al }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_009b9133 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, esi }
	__asm { call dword ptr [g_00e1027c] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10458] }
	__asm { mov ecx, eax }
	__asm { cmp ecx, -1 }
	__asm { jne L_009b9105 }
	__asm { lea edi, [eax + 4] }
	__asm { jmp L_009b912c }
	__asm { L_009b9105: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [eax], cl }
	__asm { jmp L_009b912c }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [edx] }
	__asm { push 4 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, edx }
	__asm { call dword ptr [g_00e1026c] }
	__asm { mov eax, 0x9b9126 }
	__asm { ret }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { L_009b912c: }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { L_009b9133: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push edi }
	__asm { add ecx, esi }
	__asm { call dword ptr [g_00e1026c] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, esi }
	__asm { call dword ptr [g_00e1027c] }
	__asm { test eax, eax }
	__asm { je L_009b916f }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { add ecx, esi }
	__asm { call dword ptr [g_00e1027c] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 8] }
	__asm { L_009b916f: }
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

extern "C" void fn_009bd110();
// FUNCTION: ROBLOXSTUDIO 0x009b9190
extern "C" __declspec(naked) void asm_009b9190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41938 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { sub esp, 0x20 }
	__asm { mov esi, ecx }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { test edx, edx }
	__asm { je L_009b9204 }
	__asm { mov dword ptr [ecx], edx }
	__asm { test dl, 1 }
	__asm { je L_009b91f0 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { jmp L_009b9204 }
	__asm { L_009b91f0: }
	__asm { lea eax, [ecx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009b9204: }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { test edx, edx }
	__asm { je L_009b925e }
	__asm { mov dword ptr [ecx], edx }
	__asm { test dl, 1 }
	__asm { je L_009b924a }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { jmp L_009b925e }
	__asm { L_009b924a: }
	__asm { lea eax, [ecx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009b925e: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [eax] }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009bd110 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10388[];
extern "C" void fn_008b19b0();
extern "C" void fn_00afae40();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009b9290
extern "C" __declspec(naked) void asm_009b9290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f539 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_00afae40 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea edx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { mov dword ptr [ebp - 0x1c], edx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edx, edx }
	__asm { je L_009b9320 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edi, [edx + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { lea ebx, [ecx + 4] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi], eax }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10388] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { L_009b9320: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
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

extern "C" void fn_009b93d0();
// FUNCTION: ROBLOXSTUDIO 0x009b9350
extern "C" __declspec(naked) void asm_009b9350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { push esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_009b93d0 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_009b93b6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_009b9391 }
	__asm { L_009b9387: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_009b9387 }
	__asm { L_009b9391: }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_009b93ac }
	__asm { L_009b93a1: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_009b93a1 }
	__asm { L_009b93ac: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009b93b6: }
	__asm { mov dword ptr [edx], edx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00bb13c0();
extern "C" void fn_00c11190();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009b93d0
extern "C" __declspec(naked) void asm_009b93d0()
{
	__asm { L_009b93d0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f550 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { jne L_009b944f }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { call fn_00c11190 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ebx, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov al, byte ptr [ecx + 0xc] }
	__asm { mov byte ptr [ebx + 0xc], al }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { push ebx }
	__asm { push dword ptr [ecx] }
	__asm { cmovne edi, ebx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call L_009b93d0 }
	__asm { mov dword ptr [ebx], eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push dword ptr [eax + 8] }
	__asm { mov ecx, esi }
	__asm { call L_009b93d0 }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { L_009b944f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00bb13c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0040c260();
extern "C" void fn_009bc350();
extern "C" void fn_009bccc0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009ba590
extern "C" __declspec(naked) void asm_009ba590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5344b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_009ba627 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { call fn_009bc350 }
	__asm { push 0x50 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_009ba610 }
	__asm { mov ecx, dword ptr [ebp - 0x60] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x5c] }
	__asm { lea eax, [ebp - 0x58] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_009bc350 }
	__asm { jmp L_009ba612 }
	__asm { L_009ba610: }
	__asm { xor esi, esi }
	__asm { L_009ba612: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009bccc0 }
	__asm { mov bl, 1 }
	__asm { jmp L_009ba629 }
	__asm { L_009ba627: }
	__asm { xor bl, bl }
	__asm { L_009ba629: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009bccc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x58 }
}

extern "C" void fn_009ba590();
extern "C" void fn_009bc350();
extern "C" void fn_009bccc0();
// FUNCTION: ROBLOXSTUDIO 0x009ba650
extern "C" __declspec(naked) void asm_009ba650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53350 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_009bc350 }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { call fn_009bc350 }
	__asm { mov esi, 0xe94d34 }
	__asm { mov ecx, esi }
	__asm { call fn_009ba590 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009bccc0 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009bccc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_009bf5a0();
// FUNCTION: ROBLOXSTUDIO 0x009babc0
extern "C" __declspec(naked) void asm_009babc0()
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
	__asm { je L_009bac0b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009bac0b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_009bac5e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe94c60 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe94ca8 }
	__asm { mov dword ptr [esi + 8], 0xe94cb8 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe94cc0 }
	__asm { mov dword ptr [esi + 8], 0xe94cd0 }
	__asm { jmp L_009bac60 }
	__asm { L_009bac5e: }
	__asm { xor esi, esi }
	__asm { L_009bac60: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_009bf5a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009bac7d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009bac7d: }
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
extern "C" void fn_009bf750();
// FUNCTION: ROBLOXSTUDIO 0x009bacd0
extern "C" __declspec(naked) void asm_009bacd0()
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
	__asm { je L_009bad1b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009bad1b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_009bad6e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe94c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe94c78 }
	__asm { mov dword ptr [esi + 8], 0xe94c88 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe94c90 }
	__asm { mov dword ptr [esi + 8], 0xe94ca0 }
	__asm { jmp L_009bad70 }
	__asm { L_009bad6e: }
	__asm { xor esi, esi }
	__asm { L_009bad70: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_009bf750 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009bad8d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009bad8d: }
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
extern "C" void fn_009b86c0();
extern "C" void fn_009bf5a0();
// FUNCTION: ROBLOXSTUDIO 0x009bade0
extern "C" __declspec(naked) void asm_009bade0()
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
	__asm { je L_009bae2b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009bae2b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009bae54 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_009b86c0 }
	__asm { mov dword ptr [esi], 0xe94cf0 }
	__asm { mov dword ptr [esi + 8], 0xe94d00 }
	__asm { jmp L_009bae56 }
	__asm { L_009bae54: }
	__asm { xor esi, esi }
	__asm { L_009bae56: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009bf5a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009bae7a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009bae7a: }
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
extern "C" void fn_009b8780();
extern "C" void fn_009bf750();
// FUNCTION: ROBLOXSTUDIO 0x009baec0
extern "C" __declspec(naked) void asm_009baec0()
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
	__asm { je L_009baf0b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009baf0b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009baf34 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_009b8780 }
	__asm { mov dword ptr [esi], 0xe94d20 }
	__asm { mov dword ptr [esi + 8], 0xe94d30 }
	__asm { jmp L_009baf36 }
	__asm { L_009baf34: }
	__asm { xor esi, esi }
	__asm { L_009baf36: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009bf750 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009baf5a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009baf5a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5390();
extern "C" void fn_007dc590();
extern "C" void fn_007e8ea0();
// FUNCTION: ROBLOXSTUDIO 0x009baf70
extern "C" __declspec(naked) void asm_009baf70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007e8ea0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_007dc590 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5390();
extern "C" void fn_007dc620();
extern "C" void fn_007e8f10();
// FUNCTION: ROBLOXSTUDIO 0x009bb030
extern "C" __declspec(naked) void asm_009bb030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007e8f10 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_007dc620 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_009bbad0();
// FUNCTION: ROBLOXSTUDIO 0x009bb150
extern "C" __declspec(naked) void asm_009bb150()
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
	__asm { call fn_009bbad0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe94934 }
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
	__asm { je L_009bb1fe }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009bb1fe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_009bbad0();
// FUNCTION: ROBLOXSTUDIO 0x009bb220
extern "C" __declspec(naked) void asm_009bb220()
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
	__asm { call fn_009bbad0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe949b4 }
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
	__asm { call fn_007d5d30 }
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
	__asm { je L_009bb2ce }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009bb2ce: }
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
// FUNCTION: ROBLOXSTUDIO 0x009bb3b0
extern "C" __declspec(naked) void asm_009bb3b0()
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
	__asm { push 0x11f0d08 }
	__asm { mov edi, ecx }
	__asm { push 0xe94c20 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59bb0 }
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
	__asm { push 0xe94c34 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe94c3c }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe94c44 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe94c4c }
	__asm { push 3 }
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
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x009bb500
extern "C" __declspec(naked) void asm_009bb500()
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
	__asm { push 0x11f0cd8 }
	__asm { mov edi, ecx }
	__asm { push 0xe94bd0 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59b98 }
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
	__asm { push 0xe42a7c }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe94be0 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe94bec }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe94bf4 }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe94c08 }
	__asm { push 4 }
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

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e57c4[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009bbad0
extern "C" __declspec(naked) void asm_009bbad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f7b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e57c4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_009bbb4a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e57c4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe947d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5698 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7840 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009bbb4a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e5698 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe94928 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009bbbc2 }
	__asm { push 0x123a228 }
	__asm { mov ecx, 0x123a228 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009bbbc2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009bbbad }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009bbbc2 }
	__asm { L_009bbbad: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009bbbc2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x009bc1d0
extern "C" __declspec(naked) void asm_009bc1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3f858 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009bc250 }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { test cl, 1 }
	__asm { je L_009bc239 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { jmp L_009bc250 }
	__asm { L_009bc239: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { add esp, 0xc }
	__asm { L_009bc250: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_009bc275 }
	__asm { test cl, 1 }
	__asm { jne L_009bc275 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_009bc275 }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009bc275: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_00aaebb0();
// FUNCTION: ROBLOXSTUDIO 0x009bc350
extern "C" __declspec(naked) void asm_009bc350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3fa28 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00aaebb0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009bc3e2 }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { test cl, 1 }
	__asm { je L_009bc3ce }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009bc3ce: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 0x30] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009bc3e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_009be2d0();
// FUNCTION: ROBLOXSTUDIO 0x009bc9c0
extern "C" __declspec(naked) void asm_009bc9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f9d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009bca4d }
	__asm { add esi, 5 }
	__asm { je L_009bca15 }
	__asm { add esi, -5 }
	__asm { jmp L_009bca17 }
	__asm { L_009bca15: }
	__asm { xor esi, esi }
	__asm { L_009bca17: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009bca47 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009bca47 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009bca4d }
	__asm { L_009bca47: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009bca4d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_009be2d0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009bca9c }
	__asm { add esi, 5 }
	__asm { je L_009bca72 }
	__asm { add esi, -5 }
	__asm { jmp L_009bca74 }
	__asm { L_009bca72: }
	__asm { xor esi, esi }
	__asm { L_009bca74: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009bca9c }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009bca9c }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_009bca9c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_009be660();
// FUNCTION: ROBLOXSTUDIO 0x009bcab0
extern "C" __declspec(naked) void asm_009bcab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3fa08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009bcb3d }
	__asm { add esi, 5 }
	__asm { je L_009bcb05 }
	__asm { add esi, -5 }
	__asm { jmp L_009bcb07 }
	__asm { L_009bcb05: }
	__asm { xor esi, esi }
	__asm { L_009bcb07: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009bcb37 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009bcb37 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009bcb3d }
	__asm { L_009bcb37: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009bcb3d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_009be660 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009bcb8c }
	__asm { add esi, 5 }
	__asm { je L_009bcb62 }
	__asm { add esi, -5 }
	__asm { jmp L_009bcb64 }
	__asm { L_009bcb62: }
	__asm { xor esi, esi }
	__asm { L_009bcb64: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009bcb8c }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009bcb8c }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_009bcb8c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009bccc0
extern "C" __declspec(naked) void asm_009bccc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3fa28 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009bcd0d }
	__asm { test al, 1 }
	__asm { jne L_009bcd06 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x30] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009bcd06 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009bcd06: }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { L_009bcd0d: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009bcd3b }
	__asm { test al, 1 }
	__asm { jne L_009bcd34 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009bcd34 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009bcd34: }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_009bcd3b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009bdac0
extern "C" __declspec(naked) void asm_009bdac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { push edi }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov edi, ecx }
	__asm { jne L_009bdb1e }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [edx] }
	__asm { L_009bdae3: }
	__asm { mov esi, dword ptr [eax + 0x10] }
	__asm { cmp esi, ebx }
	__asm { jl L_009bdb11 }
	__asm { cmp ebx, esi }
	__asm { jl L_009bdaf6 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { cmp ecx, dword ptr [edx + 4] }
	__asm { jl L_009bdb11 }
	__asm { L_009bdaf6: }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { je L_009bdb0a }
	__asm { cmp ebx, esi }
	__asm { jl L_009bdb08 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp ecx, dword ptr [eax + 0x14] }
	__asm { jge L_009bdb0a }
	__asm { L_009bdb08: }
	__asm { mov edi, eax }
	__asm { L_009bdb0a: }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp L_009bdb14 }
	__asm { L_009bdb11: }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { L_009bdb14: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_009bdae3 }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { pop ebx }
	__asm { L_009bdb1e: }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { jne L_009bdb26 }
	__asm { mov edx, dword ptr [edi] }
	__asm { L_009bdb26: }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { jne L_009bdb53 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { L_009bdb31: }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { cmp ecx, eax }
	__asm { jl L_009bdb49 }
	__asm { cmp eax, ecx }
	__asm { jl L_009bdb44 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp eax, dword ptr [edx + 0x14] }
	__asm { jl L_009bdb49 }
	__asm { L_009bdb44: }
	__asm { mov edx, dword ptr [edx + 8] }
	__asm { jmp L_009bdb4d }
	__asm { L_009bdb49: }
	__asm { mov edi, edx }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_009bdb4d: }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { je L_009bdb31 }
	__asm { L_009bdb53: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009bedc0
extern "C" __declspec(naked) void asm_009bedc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12008 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor edx, edx }
	__asm { mov eax, dword ptr [esi + 0x60] }
	__asm { div dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { add esi, 0x5c }
	__asm { mov ebx, edx }
	__asm { mov edi, dword ptr [eax + ebx*4] }
	__asm { L_009bedf5: }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, esi }
	__asm { je L_009bee00 }
	__asm { mov edi, eax }
	__asm { jmp L_009bedf5 }
	__asm { nop }
	__asm { L_009bee00: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_009bee0b }
	__asm { add esi, -0x5c }
	__asm { jmp L_009bee0d }
	__asm { L_009bee0b: }
	__asm { xor esi, esi }
	__asm { L_009bee0d: }
	__asm { mov eax, dword ptr [esi + 0x5c] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009bee2f }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009bee2f: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_009bee46 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009bee46: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [ecx + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov edx, ebx }
	__asm { test eax, eax }
	__asm { je L_009bee80 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ecx + 4] }
	__asm { cmp ebx, edx }
	__asm { je L_009bee8f }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [eax + edx*4], edi }
	__asm { L_009bee80: }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { cmp dword ptr [eax + ebx*4], edi }
	__asm { jne L_009bee8f }
	__asm { mov dword ptr [eax + ebx*4], 0 }
	__asm { L_009bee8f: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ebx, edx }
	__asm { test eax, eax }
	__asm { je L_009bee9d }
	__asm { add eax, 0x5c }
	__asm { jmp L_009bee9f }
	__asm { L_009bee9d: }
	__asm { xor eax, eax }
	__asm { L_009bee9f: }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_009bee00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_0078a6b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009beec0
extern "C" __declspec(naked) void asm_009beec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_0078a6b0 }
	__asm { add esp, 0x10 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_009bef08 }
	__asm { add ebx, -0x1c }
	__asm { jmp L_009bef0a }
	__asm { L_009bef08: }
	__asm { xor ebx, ebx }
	__asm { L_009bef0a: }
	__asm { mov edi, dword ptr [esi + 0x28] }
	__asm { mov esi, dword ptr [esi + 0x2c] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [ebx + esi] }
	__asm { call edi }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_009bef46 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009bef46: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412300();
extern "C" void fn_006b9740();
extern "C" void fn_007df590();
extern "C" void fn_009bd260();
// FUNCTION: ROBLOXSTUDIO 0x009bf050
extern "C" __declspec(naked) void asm_009bf050()
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
	__asm { je L_009bf0ba }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_009bf0ba }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009bf0a9 }
	__asm { push 0x169 }
	__asm { push 0xe52268 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009bf0ba }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_009bf0a9: }
	__asm { movzx eax, bl }
	__asm { push 0xe72810 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009bf0ba: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009bf0c6 }
	__asm { lea ebx, [eax - 0x1c] }
	__asm { jmp L_009bf0c8 }
	__asm { L_009bf0c6: }
	__asm { xor ebx, ebx }
	__asm { L_009bf0c8: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x8c }
	__asm { push eax }
	__asm { call fn_007df590 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [eax] }
	__asm { add ecx, ebx }
	__asm { call fn_009bd260 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412300();
extern "C" void fn_006b9740();
extern "C" void fn_007df620();
extern "C" void fn_009bd330();
// FUNCTION: ROBLOXSTUDIO 0x009bf110
extern "C" __declspec(naked) void asm_009bf110()
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
	__asm { je L_009bf17a }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_009bf17a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009bf169 }
	__asm { push 0x169 }
	__asm { push 0xe52268 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009bf17a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_009bf169: }
	__asm { movzx eax, bl }
	__asm { push 0xe72810 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009bf17a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009bf186 }
	__asm { lea ebx, [eax - 0x1c] }
	__asm { jmp L_009bf188 }
	__asm { L_009bf186: }
	__asm { xor ebx, ebx }
	__asm { L_009bf188: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x8c }
	__asm { push eax }
	__asm { call fn_007df620 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [eax] }
	__asm { add ecx, ebx }
	__asm { call fn_009bd330 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00424f10();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_009c1b40();
extern "C" void fn_00c2bee0();
extern "C" void fn_00c30700();
// FUNCTION: ROBLOXSTUDIO 0x009bf230
extern "C" __declspec(naked) void asm_009bf230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00c2bee0 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_009bf257 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009c1b40 }
	__asm { L_009bf257: }
	__asm { test esi, esi }
	__asm { je L_009bf2eb }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_009bf274 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_009bf276 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_009bf276 }
	__asm { L_009bf274: }
	__asm { mov eax, esi }
	__asm { L_009bf276: }
	__asm { test eax, eax }
	__asm { je L_009bf2eb }
	__asm { push ebx }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_009bf2ea }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_009bf2ea }
	__asm { lea ecx, [ebx - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_009bf2ea }
	__asm { call fn_00424f10 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_009bf2ea }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00c30700 }
	__asm { mov ecx, edi }
	__asm { sub ecx, 3 }
	__asm { je L_009bf2d9 }
	__asm { dec ecx }
	__asm { jne L_009bf2de }
	__asm { mov edi, 3 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { push ebx }
	__asm { call fn_00c30700 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009bf2d9: }
	__asm { mov edi, 4 }
	__asm { L_009bf2de: }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { push ebx }
	__asm { call fn_00c30700 }
	__asm { L_009bf2ea: }
	__asm { pop ebx }
	__asm { L_009bf2eb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009bef60();
// FUNCTION: ROBLOXSTUDIO 0x009bf360
extern "C" __declspec(naked) void asm_009bf360()
{
	__asm { L_009bf360: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { cmp eax, edx }
	__asm { jle L_009bf393 }
	__asm { push eax }
	__asm { push edx }
	__asm { call L_009bf360 }
	__asm { mov ecx, eax }
	__asm { sub ecx, 3 }
	__asm { je L_009bf388 }
	__asm { dec ecx }
	__asm { jne L_009bf3e3 }
	__asm { lea eax, [ecx + 3] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009bf388: }
	__asm { mov eax, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009bf393: }
	__asm { jne L_009bf3a0 }
	__asm { mov eax, 2 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009bf3a0: }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea esi, [ecx + 0x110] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009bef60 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { je L_009bf3d6 }
	__asm { lea esi, [eax + 0x14] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009bef60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { jne L_009bf3df }
	__asm { L_009bf3d6: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009bf3df: }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { pop esi }
	__asm { L_009bf3e3: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004226b0();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9cb0();
extern "C" void fn_006b9da0();
extern "C" void fn_006b9e50();
extern "C" void fn_009bab90();
extern "C" void fn_009baca0();
// FUNCTION: ROBLOXSTUDIO 0x009c0580
extern "C" __declspec(naked) void asm_009c0580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3fcc0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea ecx, [ebx + 0x78] }
	__asm { call fn_006b9da0 }
	__asm { test al, al }
	__asm { je L_009c05b4 }
	__asm { lea ecx, [ebx + 0x78] }
	__asm { call fn_006b9e50 }
	__asm { L_009c05b4: }
	__asm { lea ecx, [ebx + 0x7c] }
	__asm { call fn_006b9da0 }
	__asm { test al, al }
	__asm { je L_009c05c8 }
	__asm { lea ecx, [ebx + 0x7c] }
	__asm { call fn_006b9e50 }
	__asm { L_009c05c8: }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { je L_009c0699 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x70] }
	__asm { mov dword ptr [ebp - 0x20], 0x9bf230 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call fn_009baca0 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x78] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9cb0 }
	__asm { test al, al }
	__asm { je L_009c061d }
	__asm { lea ecx, [ebx + 0x78] }
	__asm { call fn_006b9e50 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebx + 0x78] }
	__asm { call fn_006b9b80 }
	__asm { L_009c061d: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009c0637 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_009c0637: }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x68] }
	__asm { mov dword ptr [ebp - 0x20], 0x9bf1d0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call fn_009bab90 }
	__asm { mov edi, eax }
	__asm { push edi }
	__asm { lea ecx, [ebx + 0x7c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_006b9cb0 }
	__asm { test al, al }
	__asm { je L_009c067f }
	__asm { lea ecx, [ebx + 0x7c] }
	__asm { call fn_006b9e50 }
	__asm { push edi }
	__asm { lea ecx, [ebx + 0x7c] }
	__asm { call fn_006b9b80 }
	__asm { L_009c067f: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009c0699 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_009c0699: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5390();
extern "C" void fn_007dc590();
extern "C" void fn_007e8ea0();
// FUNCTION: ROBLOXSTUDIO 0x009c1320
extern "C" __declspec(naked) void asm_009c1320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x48] }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007e8ea0 }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { call fn_007dc590 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { push edi }
	__asm { call dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5390();
extern "C" void fn_007dc620();
extern "C" void fn_007e8f10();
// FUNCTION: ROBLOXSTUDIO 0x009c13e0
extern "C" __declspec(naked) void asm_009c13e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x48] }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007e8f10 }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { call fn_007dc620 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { push edi }
	__asm { call dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_01304448[];
extern "C" void fn_008e9500();
extern "C" void fn_009bcfc0();
extern "C" void fn_009bd330();
extern "C" void fn_009c13e0();
extern "C" void fn_00c2bee0();
// FUNCTION: ROBLOXSTUDIO 0x009c1b40
extern "C" __declspec(naked) void asm_009c1b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { cmp edi, ebx }
	__asm { jle L_009c1b7b }
	__asm { L_009c1b57: }
	__asm { mov eax, esi }
	__asm { sub eax, 3 }
	__asm { je L_009c1b66 }
	__asm { dec eax }
	__asm { jne L_009c1b6b }
	__asm { lea esi, [eax + 3] }
	__asm { jmp L_009c1b6b }
	__asm { L_009c1b66: }
	__asm { mov esi, 4 }
	__asm { L_009c1b6b: }
	__asm { mov eax, edi }
	__asm { mov edi, ebx }
	__asm { mov ebx, eax }
	__asm { cmp edi, ebx }
	__asm { jg L_009c1b57 }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp + 0xc], ebx }
	__asm { L_009c1b7b: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { add ecx, 0x110 }
	__asm { call fn_009bcfc0 }
	__asm { mov ecx, eax }
	__asm { call fn_008e9500 }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax], esi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_009c1bd5 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add ecx, dword ptr [g_01304448] }
	__asm { push esi }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_009bd330 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { test eax, eax }
	__asm { je L_009c1bc5 }
	__asm { add eax, 0x1c }
	__asm { jmp L_009c1bc7 }
	__asm { L_009c1bc5: }
	__asm { xor eax, eax }
	__asm { L_009c1bc7: }
	__asm { push esi }
	__asm { push ebx }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ecx, 0x1304420 }
	__asm { call fn_009c13e0 }
	__asm { L_009c1bd5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f2c64[];
extern "C" void fn_0040bac0();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_009c4dd0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009c1be0
extern "C" __declspec(naked) void asm_009c1be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3fe86 }
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
	__asm { call fn_009c4dd0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012f2c64] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_009c1c9f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f2c64], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe94dac }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f2b38 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7490 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_009c1c9f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12f2b38 }
	__asm { call fn_0040bac0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe95130 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009c1d1d }
	__asm { push 0x11f2bd0 }
	__asm { mov ecx, 0x11f2bd0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009c1d1d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009c1d08 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009c1d1d }
	__asm { L_009c1d08: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009c1d1d: }
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
extern "C" char g_012f2d94[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008fe500();
extern "C" void fn_009c4e30();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009c1d30
extern "C" __declspec(naked) void asm_009c1d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3feb6 }
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
	__asm { call fn_009c4e30 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012f2d94] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_009c1def }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f2d94], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe94e60 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f2c68 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde74a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_009c1def: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12f2c68 }
	__asm { call fn_008fe500 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe951b8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009c1e6d }
	__asm { push 0x11f2e60 }
	__asm { mov ecx, 0x11f2e60 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009c1e6d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009c1e58 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009c1e6d }
	__asm { L_009c1e58: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009c1e6d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

// FUNCTION: ROBLOXSTUDIO 0x009c2050
extern "C" __declspec(naked) void asm_009c2050()
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
	__asm { mov dword ptr [esi + 8], 0xe95234 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe95364 }
	__asm { mov dword ptr [esi + 8], 0xe95374 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009c20fa }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_009c20e6 }
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
	__asm { L_009c20e6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009c20fa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x009c2110
extern "C" __declspec(naked) void asm_009c2110()
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
	__asm { mov dword ptr [esi + 8], 0xe9526c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe95454 }
	__asm { mov dword ptr [esi + 8], 0xe95464 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009c21ba }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_009c21a6 }
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
	__asm { L_009c21a6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009c21ba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x009c21d0
extern "C" __declspec(naked) void asm_009c21d0()
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
	__asm { mov dword ptr [esi + 8], 0xe95264 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe95424 }
	__asm { mov dword ptr [esi + 8], 0xe95434 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009c227a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_009c2266 }
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
	__asm { L_009c2266: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009c227a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x009c2290
extern "C" __declspec(naked) void asm_009c2290()
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
	__asm { mov dword ptr [esi + 8], 0xe9525c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe953f4 }
	__asm { mov dword ptr [esi + 8], 0xe95404 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009c233a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_009c2326 }
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
	__asm { L_009c2326: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009c233a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x009c2350
extern "C" __declspec(naked) void asm_009c2350()
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
	__asm { mov dword ptr [esi + 8], 0xe95254 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe953c4 }
	__asm { mov dword ptr [esi + 8], 0xe953d4 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009c23fa }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_009c23e6 }
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
	__asm { L_009c23e6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009c23fa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x009c2410
extern "C" __declspec(naked) void asm_009c2410()
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
	__asm { mov dword ptr [esi + 8], 0xe95244 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe95394 }
	__asm { mov dword ptr [esi + 8], 0xe953a4 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009c24ba }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_009c24a6 }
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
	__asm { L_009c24a6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009c24ba: }
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
extern "C" void fn_009c2050();
extern "C" void fn_009c9090();
// FUNCTION: ROBLOXSTUDIO 0x009c4650
extern "C" __declspec(naked) void asm_009c4650()
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
	__asm { je L_009c469b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009c469b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009c46c4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_009c2050 }
	__asm { mov dword ptr [esi], 0xe9537c }
	__asm { mov dword ptr [esi + 8], 0xe9538c }
	__asm { jmp L_009c46c6 }
	__asm { L_009c46c4: }
	__asm { xor esi, esi }
	__asm { L_009c46c6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009c9090 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009c46ea }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009c46ea: }
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
extern "C" void fn_009c2110();
extern "C" void fn_009c9240();
// FUNCTION: ROBLOXSTUDIO 0x009c4700
extern "C" __declspec(naked) void asm_009c4700()
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
	__asm { je L_009c474b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009c474b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009c4774 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_009c2110 }
	__asm { mov dword ptr [esi], 0xe9546c }
	__asm { mov dword ptr [esi + 8], 0xe9547c }
	__asm { jmp L_009c4776 }
	__asm { L_009c4774: }
	__asm { xor esi, esi }
	__asm { L_009c4776: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009c9240 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009c479a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009c479a: }
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
extern "C" void fn_009c21d0();
extern "C" void fn_009c93f0();
// FUNCTION: ROBLOXSTUDIO 0x009c47b0
extern "C" __declspec(naked) void asm_009c47b0()
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
	__asm { je L_009c47fb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009c47fb: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009c4824 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_009c21d0 }
	__asm { mov dword ptr [esi], 0xe9543c }
	__asm { mov dword ptr [esi + 8], 0xe9544c }
	__asm { jmp L_009c4826 }
	__asm { L_009c4824: }
	__asm { xor esi, esi }
	__asm { L_009c4826: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009c93f0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009c484a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009c484a: }
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
extern "C" void fn_009c2290();
extern "C" void fn_009c95a0();
// FUNCTION: ROBLOXSTUDIO 0x009c4860
extern "C" __declspec(naked) void asm_009c4860()
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
	__asm { je L_009c48ab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009c48ab: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009c48d4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_009c2290 }
	__asm { mov dword ptr [esi], 0xe9540c }
	__asm { mov dword ptr [esi + 8], 0xe9541c }
	__asm { jmp L_009c48d6 }
	__asm { L_009c48d4: }
	__asm { xor esi, esi }
	__asm { L_009c48d6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009c95a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009c48fa }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009c48fa: }
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
extern "C" void fn_009c2350();
extern "C" void fn_009c9750();
// FUNCTION: ROBLOXSTUDIO 0x009c4910
extern "C" __declspec(naked) void asm_009c4910()
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
	__asm { je L_009c495b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009c495b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009c4984 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_009c2350 }
	__asm { mov dword ptr [esi], 0xe953dc }
	__asm { mov dword ptr [esi + 8], 0xe953ec }
	__asm { jmp L_009c4986 }
	__asm { L_009c4984: }
	__asm { xor esi, esi }
	__asm { L_009c4986: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009c9750 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009c49aa }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009c49aa: }
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
extern "C" void fn_009c2410();
extern "C" void fn_009c9900();
// FUNCTION: ROBLOXSTUDIO 0x009c49c0
extern "C" __declspec(naked) void asm_009c49c0()
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
	__asm { je L_009c4a0b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009c4a0b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009c4a34 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_009c2410 }
	__asm { mov dword ptr [esi], 0xe953ac }
	__asm { mov dword ptr [esi + 8], 0xe953bc }
	__asm { jmp L_009c4a36 }
	__asm { L_009c4a34: }
	__asm { xor esi, esi }
	__asm { L_009c4a36: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009c9900 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009c4a5a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009c4a5a: }
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
extern "C" void fn_007d5390();
extern "C" void fn_008251b0();
extern "C" void fn_009c6270();
// FUNCTION: ROBLOXSTUDIO 0x009c4ef0
extern "C" __declspec(naked) void asm_009c4ef0()
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
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009c6270 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe9516c }
	__asm { call fn_007d5390 }
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
	__asm { jae L_009c4f81 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_009c4f81: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_009c4fa4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009c4fa4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_008251b0();
extern "C" void fn_009c6270();
// FUNCTION: ROBLOXSTUDIO 0x009c4fc0
extern "C" __declspec(naked) void asm_009c4fc0()
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
	__asm { call fn_009c6270 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe9516c }
	__asm { call fn_007d5390 }
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
	__asm { jae L_009c5052 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_009c5052: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_009c5075 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009c5075: }
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

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d54e0();
extern "C" void fn_008251b0();
extern "C" void fn_009c6320();
// FUNCTION: ROBLOXSTUDIO 0x009c5090
extern "C" __declspec(naked) void asm_009c5090()
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
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009c6320 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe951f4 }
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
	__asm { jae L_009c5121 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_009c5121: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_009c5144 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009c5144: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d54e0();
extern "C" void fn_008251b0();
extern "C" void fn_009c6320();
// FUNCTION: ROBLOXSTUDIO 0x009c5160
extern "C" __declspec(naked) void asm_009c5160()
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
	__asm { call fn_009c6320 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe951f4 }
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
	__asm { jae L_009c51f2 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_009c51f2: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_009c5215 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009c5215: }
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

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_008251b0();
extern "C" void fn_009c63d0();
// FUNCTION: ROBLOXSTUDIO 0x009c5230
extern "C" __declspec(naked) void asm_009c5230()
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
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009c63d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe94efc }
	__asm { call fn_007d5390 }
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
	__asm { jae L_009c52c1 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_009c52c1: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_009c52e4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009c52e4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_008251b0();
extern "C" void fn_009c63d0();
// FUNCTION: ROBLOXSTUDIO 0x009c5300
extern "C" __declspec(naked) void asm_009c5300()
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
	__asm { call fn_009c63d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe94efc }
	__asm { call fn_007d5390 }
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
	__asm { jae L_009c5392 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_009c5392: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_009c53b5 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009c53b5: }
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

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d54e0();
extern "C" void fn_008251b0();
extern "C" void fn_009c6480();
// FUNCTION: ROBLOXSTUDIO 0x009c53d0
extern "C" __declspec(naked) void asm_009c53d0()
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
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009c6480 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe94f44 }
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
	__asm { jae L_009c5461 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_009c5461: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_009c5484 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009c5484: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d54e0();
extern "C" void fn_008251b0();
extern "C" void fn_009c6480();
// FUNCTION: ROBLOXSTUDIO 0x009c54a0
extern "C" __declspec(naked) void asm_009c54a0()
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
	__asm { call fn_009c6480 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe94f44 }
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
	__asm { jae L_009c5532 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_009c5532: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_009c5555 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009c5555: }
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

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d57f0();
extern "C" void fn_008251b0();
extern "C" void fn_009c6530();
// FUNCTION: ROBLOXSTUDIO 0x009c5570
extern "C" __declspec(naked) void asm_009c5570()
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
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009c6530 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe95110 }
	__asm { call fn_007d57f0 }
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
	__asm { jae L_009c5601 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_009c5601: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_009c5624 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009c5624: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d57f0();
extern "C" void fn_008251b0();
extern "C" void fn_009c6530();
// FUNCTION: ROBLOXSTUDIO 0x009c5640
extern "C" __declspec(naked) void asm_009c5640()
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
	__asm { call fn_009c6530 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe95110 }
	__asm { call fn_007d57f0 }
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
	__asm { jae L_009c56d2 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_009c56d2: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_009c56f5 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009c56f5: }
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

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5860();
extern "C" void fn_008251b0();
extern "C" void fn_009c65e0();
// FUNCTION: ROBLOXSTUDIO 0x009c5710
extern "C" __declspec(naked) void asm_009c5710()
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
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009c65e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe950b4 }
	__asm { call fn_007d5860 }
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
	__asm { jae L_009c57a1 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_009c57a1: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_009c57c4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009c57c4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5860();
extern "C" void fn_008251b0();
extern "C" void fn_009c65e0();
// FUNCTION: ROBLOXSTUDIO 0x009c57e0
extern "C" __declspec(naked) void asm_009c57e0()
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
	__asm { call fn_009c65e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe950b4 }
	__asm { call fn_007d5860 }
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
	__asm { jae L_009c5872 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_009c5872: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_009c5895 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009c5895: }
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
