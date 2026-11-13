// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012f0074[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b1d110
extern "C" __declspec(naked) void asm_00b1d110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd55b7e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f0074] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00b1d185 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f0074], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec5ed4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eff48 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7580 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00b1d185: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12eff48 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00b1c670();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b1d9a0
extern "C" __declspec(naked) void asm_00b1d9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { add ecx, 0x10 }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b1c670 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00b1d9f2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b1d9f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_007b8500();
extern "C" void fn_00b1c980();
// FUNCTION: ROBLOXSTUDIO 0x00b1dd10
extern "C" __declspec(naked) void asm_00b1dd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x34] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00b1c980 }
	__asm { fstp dword ptr [ebp - 4] }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x30] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_007b8500 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0x18 }
	__asm { test ecx, ecx }
	__asm { je L_00b1dd45 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_00b1dd47 }
	__asm { L_00b1dd45: }
	__asm { xor ecx, ecx }
	__asm { L_00b1dd47: }
	__asm { fld dword ptr [ebp - 4] }
	__asm { add ecx, dword ptr [edi + 0x2c] }
	__asm { mov edx, dword ptr [edi + 0x28] }
	__asm { sub esp, 8 }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call edx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b8500();
extern "C" void fn_007b8610();
extern "C" void fn_00b1c980();
// FUNCTION: ROBLOXSTUDIO 0x00b1dd70
extern "C" __declspec(naked) void asm_00b1dd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x38] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_007b8610 }
	__asm { fstp dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x34] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00b1c980 }
	__asm { fstp dword ptr [ebp - 4] }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x30] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_007b8500 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0x24 }
	__asm { test ecx, ecx }
	__asm { je L_00b1ddb4 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_00b1ddb6 }
	__asm { L_00b1ddb4: }
	__asm { xor ecx, ecx }
	__asm { L_00b1ddb6: }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { add ecx, dword ptr [edi + 0x2c] }
	__asm { mov edx, dword ptr [edi + 0x28] }
	__asm { sub esp, 0xc }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00891b30();
// FUNCTION: ROBLOXSTUDIO 0x00b1de80
extern "C" __declspec(naked) void asm_00b1de80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x74] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b1dec4 }
	__asm { call fn_00891b30 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add eax, 0x1c }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b1dec4: }
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
	__asm { ret 4 }
}

extern "C" char g_0130e21c[];
extern "C" char g_0130e220[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b1def0
extern "C" __declspec(naked) void asm_00b1def0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd55cee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb1c710 }
	__asm { push 0x130e214 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130e220] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b1df52 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e220], eax }
	__asm { push 0xec5ee4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130e21c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b1df52: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130e21c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e3ec[];
extern "C" char g_0130e3f0[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b1eb40
extern "C" __declspec(naked) void asm_00b1eb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5606e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130e3f0] }
	__asm { test al, 1 }
	__asm { jne L_00b1eb82 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e3f0], eax }
	__asm { push 0xec6148 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130e3ec], eax }
	__asm { L_00b1eb82: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4ca0[];
extern "C" char g_012f01a4[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b1f450
extern "C" __declspec(naked) void asm_00b1f450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd55d36 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xec6154 }
	__asm { mov dword ptr [esi + 4], 0xec61cc }
	__asm { mov dword ptr [esi + 0x18], 0xec61d4 }
	__asm { mov dword ptr [esi + 0x1c], 0xec61e0 }
	__asm { mov eax, dword ptr [g_012f01a4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b1f4e9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f01a4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec6130 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f0078 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7590 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b1f4e9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12f0078 }
	__asm { inc dword ptr [g_012e4ca0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f01a4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b1fb70
extern "C" __declspec(naked) void asm_00b1fb70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2382e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f01a4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00b1fbe5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f01a4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec6130 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f0078 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7590 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00b1fbe5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12f0078 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00b21400();
// FUNCTION: ROBLOXSTUDIO 0x00b20320
extern "C" __declspec(naked) void asm_00b20320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cfb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b21400 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b20392 }
	__asm { add esi, 5 }
	__asm { je L_00b20362 }
	__asm { add esi, -5 }
	__asm { jmp L_00b20364 }
	__asm { L_00b20362: }
	__asm { xor esi, esi }
	__asm { L_00b20364: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b20391 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b20391 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00b20391: }
	__asm { pop edi }
	__asm { L_00b20392: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00b21790();
// FUNCTION: ROBLOXSTUDIO 0x00b203b0
extern "C" __declspec(naked) void asm_00b203b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cfb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b21790 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b20422 }
	__asm { add esi, 5 }
	__asm { je L_00b203f2 }
	__asm { add esi, -5 }
	__asm { jmp L_00b203f4 }
	__asm { L_00b203f2: }
	__asm { xor esi, esi }
	__asm { L_00b203f4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b20421 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b20421 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00b20421: }
	__asm { pop edi }
	__asm { L_00b20422: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00b21b20();
// FUNCTION: ROBLOXSTUDIO 0x00b20440
extern "C" __declspec(naked) void asm_00b20440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cfb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b21b20 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b204b2 }
	__asm { add esi, 5 }
	__asm { je L_00b20482 }
	__asm { add esi, -5 }
	__asm { jmp L_00b20484 }
	__asm { L_00b20482: }
	__asm { xor esi, esi }
	__asm { L_00b20484: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b204b1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b204b1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00b204b1: }
	__asm { pop edi }
	__asm { L_00b204b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x00b205e0
extern "C" __declspec(naked) void asm_00b205e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0e688 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { sub esp, 0xc }
	__asm { test edx, edx }
	__asm { jne L_00b2062c }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 0xc], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe19198 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_00b2062c: }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { lea eax, [ecx + 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { and edx, 0xfffffffe }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x00b20660
extern "C" __declspec(naked) void asm_00b20660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0e688 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { sub esp, 0xc }
	__asm { test edx, edx }
	__asm { jne L_00b206ac }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe19198 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_00b206ac: }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ecx + 8] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { and edx, 0xfffffffe }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x00b206f0
extern "C" __declspec(naked) void asm_00b206f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0e688 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { sub esp, 0xc }
	__asm { test edx, edx }
	__asm { jne L_00b2073c }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 0x14], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe19198 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_00b2073c: }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ecx + 8] }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { and edx, 0xfffffffe }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_0130e2c8[];
extern "C" void fn_00b20850();
extern "C" void fn_00b223d0();
extern "C" void fn_00b233d0();
// FUNCTION: ROBLOXSTUDIO 0x00b20ab0
extern "C" __declspec(naked) void asm_00b20ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00b223d0 }
	__asm { fst dword ptr [ebp - 4] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_0130e2c8] }
	__asm { sub esp, 0xc }
	__asm { lea ecx, [ecx + esi] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00b20850 }
	__asm { test esi, esi }
	__asm { je L_00b20aea }
	__asm { lea eax, [esi + 0x1c] }
	__asm { jmp L_00b20aec }
	__asm { L_00b20aea: }
	__asm { xor eax, eax }
	__asm { L_00b20aec: }
	__asm { fld dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, 0x130e2a0 }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { call fn_00b233d0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0043f040();
// FUNCTION: ROBLOXSTUDIO 0x00b21fa0
extern "C" __declspec(naked) void asm_00b21fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { add ecx, esi }
	__asm { call fn_0043f040 }
	__asm { test esi, esi }
	__asm { je L_00b21fd5 }
	__asm { add esi, 0x1c }
	__asm { jmp L_00b21fd7 }
	__asm { L_00b21fd5: }
	__asm { xor esi, esi }
	__asm { L_00b21fd7: }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
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
	__asm { ret 4 }
}

extern "C" char g_0130e3ec[];
extern "C" char g_0130e3f0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b22350
extern "C" __declspec(naked) void asm_00b22350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5606e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb1eb40 }
	__asm { push 0x130e3e4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130e3f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b223b2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e3f0], eax }
	__asm { push 0xec6148 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130e3ec], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b223b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130e3ec] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e258[];
extern "C" void fn_00b20930();
extern "C" void fn_00b223d0();
extern "C" void fn_00b23490();
// FUNCTION: ROBLOXSTUDIO 0x00b232a0
extern "C" __declspec(naked) void asm_00b232a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00b223d0 }
	__asm { fst dword ptr [ebp - 4] }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [g_0130e258] }
	__asm { sub esp, 0x10 }
	__asm { lea ecx, [ecx + esi] }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00b20930 }
	__asm { test esi, esi }
	__asm { je L_00b232e1 }
	__asm { lea eax, [esi + 0x1c] }
	__asm { jmp L_00b232e3 }
	__asm { L_00b232e1: }
	__asm { xor eax, eax }
	__asm { L_00b232e3: }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, 0x130e230 }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { call fn_00b23490 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_0130e3a4[];
extern "C" char g_0130e3a8[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b23570
extern "C" __declspec(naked) void asm_00b23570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5608e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130e3a8] }
	__asm { test al, 1 }
	__asm { jne L_00b235e3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e3a8], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b235ce }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130e3a4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b235ce: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130e3a4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b235e3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130e3a4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e3ac[];
extern "C" char g_0130e3b0[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b23600
extern "C" __declspec(naked) void asm_00b23600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd560ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130e3b0] }
	__asm { test al, 1 }
	__asm { jne L_00b23673 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e3b0], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b2365e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130e3ac], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b2365e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130e3ac], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b23673: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130e3ac] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e39c[];
extern "C" char g_0130e3a0[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b23690
extern "C" __declspec(naked) void asm_00b23690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd560ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130e3a0] }
	__asm { test al, 1 }
	__asm { jne L_00b23703 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e3a0], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b236ee }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130e39c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b236ee: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130e39c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b23703: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130e39c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e3d4[];
extern "C" char g_0130e3d8[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b23720
extern "C" __declspec(naked) void asm_00b23720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd560ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130e3d8] }
	__asm { test al, 1 }
	__asm { jne L_00b23793 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e3d8], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b2377e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130e3d4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b2377e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130e3d4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b23793: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130e3d4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e3dc[];
extern "C" char g_0130e3e0[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b237b0
extern "C" __declspec(naked) void asm_00b237b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5610e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130e3e0] }
	__asm { test al, 1 }
	__asm { jne L_00b23823 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e3e0], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b2380e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130e3dc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b2380e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130e3dc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b23823: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130e3dc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x00b23b30
extern "C" __declspec(naked) void asm_00b23b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_00b23b65 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_00b23b6f }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00b23b6f }
	__asm { L_00b23b65: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00b23b6f: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00837b20();
// FUNCTION: ROBLOXSTUDIO 0x00b24e10
extern "C" __declspec(naked) void asm_00b24e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00b24e61 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00b24e30 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00b24e32 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00b24e32 }
	__asm { L_00b24e30: }
	__asm { mov eax, ecx }
	__asm { L_00b24e32: }
	__asm { test eax, eax }
	__asm { je L_00b24e61 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00b24e61 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00b24e61 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00b24e61 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00837b20 }
	__asm { L_00b24e61: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_0083c4b0();
// FUNCTION: ROBLOXSTUDIO 0x00b24fa0
extern "C" __declspec(naked) void asm_00b24fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00b24ff1 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00b24fc0 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00b24fc2 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00b24fc2 }
	__asm { L_00b24fc0: }
	__asm { mov eax, ecx }
	__asm { L_00b24fc2: }
	__asm { test eax, eax }
	__asm { je L_00b24ff1 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00b24ff1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00b24ff1 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00b24ff1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_0083c4b0 }
	__asm { L_00b24ff1: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4c90[];
extern "C" char g_012f0794[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b25370
extern "C" __declspec(naked) void asm_00b25370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd56226 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xec65b4 }
	__asm { mov dword ptr [esi + 4], 0xec662c }
	__asm { mov dword ptr [esi + 0x18], 0xec6634 }
	__asm { mov dword ptr [esi + 0x1c], 0xec6640 }
	__asm { mov eax, dword ptr [g_012f0794] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b25409 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f0794], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec658c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f0668 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde79e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b25409: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12f0668 }
	__asm { inc dword ptr [g_012e4c90] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403110();
extern "C" void fn_00b26510();
// FUNCTION: ROBLOXSTUDIO 0x00b25540
extern "C" __declspec(naked) void asm_00b25540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [edi], 0xec6650 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { call fn_00b26510 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00b25598 }
	__asm { sub eax, 4 }
	__asm { L_00b25598: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0x3f800000 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b25b30
extern "C" __declspec(naked) void asm_00b25b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { test edx, edx }
	__asm { je L_00b25b92 }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { test dl, 1 }
	__asm { je L_00b25b7e }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b25b7e: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ecx + 0x10] }
	__asm { and edx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b25b92: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
// FUNCTION: ROBLOXSTUDIO 0x00b265f0
extern "C" __declspec(naked) void asm_00b265f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, edx }
	__asm { je L_00b26623 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 4] }
	__asm { mov eax, 0x5d1745c }
	__asm { sub eax, edi }
	__asm { cmp eax, esi }
	__asm { jae L_00b26618 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00b26618: }
	__asm { lea eax, [edi + esi] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { sub dword ptr [edx + 4], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00b26623: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_0083ee60();
extern "C" void fn_00b26670();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b26cb0
extern "C" __declspec(naked) void asm_00b26cb0()
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
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0083ee60 }
	__asm { add esp, 0x10 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b26cf8 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_00b26cfa }
	__asm { L_00b26cf8: }
	__asm { xor ecx, ecx }
	__asm { L_00b26cfa: }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push ecx }
	__asm { call fn_00b26670 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_00b26d21 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b26d21: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f9648[];
extern "C" char g_012f964c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b27210
extern "C" __declspec(naked) void asm_00b27210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd564de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x834ff0 }
	__asm { push 0x12f9498 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f964c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b27272 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f964c], eax }
	__asm { push 0xec65a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f9648], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b27272: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f9648] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e530[];
extern "C" char g_0130e534[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b28d10
extern "C" __declspec(naked) void asm_00b28d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5671e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130e534] }
	__asm { test al, 1 }
	__asm { jne L_00b28d52 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e534], eax }
	__asm { push 0xec6be0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130e530], eax }
	__asm { L_00b28d52: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4e08[];
extern "C" char g_012f08c4[];
extern "C" void fn_0048b090();
extern "C" void fn_007cbf10();
extern "C" void fn_00928230();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b28d60
extern "C" __declspec(naked) void asm_00b28d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd56746 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00928230 }
	__asm { mov dword ptr [esi], 0xec6bf4 }
	__asm { mov dword ptr [esi + 4], 0xec6c90 }
	__asm { mov dword ptr [esi + 0x18], 0xec6c98 }
	__asm { mov dword ptr [esi + 0x1c], 0xec6ca4 }
	__asm { mov dword ptr [esi + 0x64], 0xec6cb4 }
	__asm { mov eax, dword ptr [g_012f08c4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b28dfe }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f08c4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec6be4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, 0x12f0798 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b28dfe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12f0798 }
	__asm { inc dword ptr [g_012e4e08] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e530[];
extern "C" char g_0130e534[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b28ee0
extern "C" __declspec(naked) void asm_00b28ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5671e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb28d10 }
	__asm { push 0x130e528 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130e534] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b28f42 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e534], eax }
	__asm { push 0xec6be0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130e530], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b28f42: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130e530] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4bec[];
extern "C" char g_012f15d4[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b290e0
extern "C" __declspec(naked) void asm_00b290e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd56766 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xec6d9c }
	__asm { mov dword ptr [esi + 4], 0xec6e14 }
	__asm { mov dword ptr [esi + 0x18], 0xec6e1c }
	__asm { mov dword ptr [esi + 0x1c], 0xec6e28 }
	__asm { mov eax, dword ptr [g_012f15d4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b29179 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f15d4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec6d80 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f14a8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b29179: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12f14a8 }
	__asm { inc dword ptr [g_012e4bec] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9688[];
extern "C" char g_012f968c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b29760
extern "C" __declspec(naked) void asm_00b29760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2682e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x834eb0 }
	__asm { push 0x12f94d8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f968c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b297c2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f968c], eax }
	__asm { push 0xec6d90 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f9688], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b297c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f9688] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x00b2a310
extern "C" __declspec(naked) void asm_00b2a310()
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
	__asm { je L_00b2a339 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00b2a33e }
	__asm { L_00b2a339: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00b2a33e: }
	__asm { cmp ecx, 0x11f13c4 }
	__asm { je L_00b2a387 }
	__asm { test eax, eax }
	__asm { je L_00b2a34e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00b2a353 }
	__asm { L_00b2a34e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00b2a353: }
	__asm { push 0x11f13c4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00b2a387 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00b2a387: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x00b2a3a0
extern "C" __declspec(naked) void asm_00b2a3a0()
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
	__asm { je L_00b2a3c9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00b2a3ce }
	__asm { L_00b2a3c9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00b2a3ce: }
	__asm { cmp ecx, 0x11f12a0 }
	__asm { je L_00b2a417 }
	__asm { test eax, eax }
	__asm { je L_00b2a3de }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00b2a3e3 }
	__asm { L_00b2a3de: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00b2a3e3: }
	__asm { push 0x11f12a0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00b2a417 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00b2a417: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00b2d060();
extern "C" void fn_00b306d0();
// FUNCTION: ROBLOXSTUDIO 0x00b2ae30
extern "C" __declspec(naked) void asm_00b2ae30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd56932 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00b306d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b2ae89 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { L_00b2ae89: }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00b2aea2 }
	__asm { call fn_00b2d060 }
	__asm { L_00b2aea2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [edi + 9], 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f5df0[];
extern "C" void fn_004115f0();
extern "C" void fn_009cc610();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b2b8a0
extern "C" __declspec(naked) void asm_00b2b8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22a2e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x822860 }
	__asm { push 0x12f3018 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5df0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b2b901 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5df0], eax }
	__asm { mov ecx, 0x12f5d68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009cc610 }
	__asm { push 0xde8510 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00b2b901: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f5d68 }
	__asm { push 2 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00b2b928 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b2b928: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4bf8[];
extern "C" char g_012f1704[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b2bfa0
extern "C" __declspec(naked) void asm_00b2bfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd56a06 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xec6f94 }
	__asm { mov dword ptr [esi + 4], 0xec700c }
	__asm { mov dword ptr [esi + 0x18], 0xec7014 }
	__asm { mov dword ptr [esi + 0x1c], 0xec7020 }
	__asm { mov eax, dword ptr [g_012f1704] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b2c039 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1704], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec6f74 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f15d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b2c039: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12f15d8 }
	__asm { inc dword ptr [g_012e4bf8] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f1704[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b2c710
extern "C" __declspec(naked) void asm_00b2c710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23a0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f1704] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00b2c785 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1704], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec6f74 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f15d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00b2c785: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12f15d8 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_008d01b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b2d6d0
extern "C" __declspec(naked) void asm_00b2d6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00b2d738 }
	__asm { cmp byte ptr [edi + 9], 0 }
	__asm { je L_00b2d72d }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008d01b0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00b2d71c }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b2d71c: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_00b2d72d: }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b2d738: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b2da00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b2d750
extern "C" __declspec(naked) void asm_00b2d750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00b2d7b8 }
	__asm { cmp byte ptr [edi + 9], 0 }
	__asm { je L_00b2d7ad }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b2da00 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00b2d79c }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b2d79c: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_00b2d7ad: }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b2d7b8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00b31240();
// FUNCTION: ROBLOXSTUDIO 0x00b2d7d0
extern "C" __declspec(naked) void asm_00b2d7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cfb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b31240 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b2d842 }
	__asm { add esi, 5 }
	__asm { je L_00b2d812 }
	__asm { add esi, -5 }
	__asm { jmp L_00b2d814 }
	__asm { L_00b2d812: }
	__asm { xor esi, esi }
	__asm { L_00b2d814: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b2d841 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b2d841 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00b2d841: }
	__asm { pop edi }
	__asm { L_00b2d842: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00b315d0();
// FUNCTION: ROBLOXSTUDIO 0x00b2d860
extern "C" __declspec(naked) void asm_00b2d860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cfb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b315d0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b2d8d2 }
	__asm { add esi, 5 }
	__asm { je L_00b2d8a2 }
	__asm { add esi, -5 }
	__asm { jmp L_00b2d8a4 }
	__asm { L_00b2d8a2: }
	__asm { xor esi, esi }
	__asm { L_00b2d8a4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b2d8d1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b2d8d1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00b2d8d1: }
	__asm { pop edi }
	__asm { L_00b2d8d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0078a6b0();
extern "C" void fn_00b2f690();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b31e10
extern "C" __declspec(naked) void asm_00b31e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0078a6b0 }
	__asm { add esp, 0x10 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b31e58 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_00b31e5a }
	__asm { L_00b31e58: }
	__asm { xor ecx, ecx }
	__asm { L_00b31e5a: }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push ecx }
	__asm { call fn_00b2f690 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_00b31e81 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b31e81: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f9650[];
extern "C" char g_012f9654[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b33030
extern "C" __declspec(naked) void asm_00b33030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd25f2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x834d70 }
	__asm { push 0x12f94a0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f9654] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b33092 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f9654], eax }
	__asm { push 0xec6f8c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f9650], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b33092: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f9650] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_005457f0();
extern "C" void fn_007cd560();
extern "C" void fn_00922320();
// FUNCTION: ROBLOXSTUDIO 0x00b330b0
extern "C" __declspec(naked) void asm_00b330b0()
{
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00b330fb }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00b330ca }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00b330cc }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00b330cc }
	__asm { L_00b330ca: }
	__asm { mov eax, ecx }
	__asm { L_00b330cc: }
	__asm { test eax, eax }
	__asm { je L_00b330fb }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00b330fb }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00b330fb }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00b330fb }
	__asm { call fn_005457f0 }
	__asm { jmp L_00b330fd }
	__asm { L_00b330fb: }
	__asm { xor eax, eax }
	__asm { L_00b330fd: }
	__asm { mov eax, dword ptr [eax + 0x178] }
	__asm { pop edi }
	__asm { test eax, eax }
	__asm { je L_00b33118 }
	__asm { mov ecx, dword ptr [eax + 0x64] }
	__asm { test ecx, ecx }
	__asm { je L_00b33118 }
	__asm { call fn_00922320 }
	__asm { test eax, eax }
	__asm { jne L_00b3311a }
	__asm { L_00b33118: }
	__asm { xor eax, eax }
	__asm { L_00b3311a: }
	__asm { ret }
}

extern "C" void fn_009b53d0();
// FUNCTION: ROBLOXSTUDIO 0x00b346c0
extern "C" __declspec(naked) void asm_00b346c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_009b53d0 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_00b34721 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_00b346e0: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_00b346eb }
	__asm { add esi, -0x58 }
	__asm { jmp L_00b346ed }
	__asm { L_00b346eb: }
	__asm { xor esi, esi }
	__asm { L_00b346ed: }
	__asm { mov eax, dword ptr [esi + 0x5c] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_00b34708 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x58] }
	__asm { jmp L_00b3471a }
	__asm { L_00b34708: }
	__asm { mov eax, dword ptr [esi + 0x58] }
	__asm { lea edx, [esi + 0x58] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_00b3471a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00b346e0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00b34721: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009b53d0();
// FUNCTION: ROBLOXSTUDIO 0x00b34730
extern "C" __declspec(naked) void asm_00b34730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_009b53d0 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_00b347a0 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_00b34750: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_00b3475e }
	__asm { add esi, 0xffffff60 }
	__asm { jmp L_00b34760 }
	__asm { L_00b3475e: }
	__asm { xor esi, esi }
	__asm { L_00b34760: }
	__asm { mov eax, dword ptr [esi + 0xa4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_00b34781 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0xa0] }
	__asm { jmp L_00b34799 }
	__asm { L_00b34781: }
	__asm { mov eax, dword ptr [esi + 0xa0] }
	__asm { lea edx, [esi + 0xa0] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_00b34799: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00b34750 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00b347a0: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009b53d0();
extern "C" void fn_00b346c0();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x00b347b0
extern "C" __declspec(naked) void asm_00b347b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_00b347e4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c876a0 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [ebp + 8] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_009b53d0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b347e4: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_00b3481a }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { cmp edx, ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_00c876a0 }
	__asm { pop edi }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_00b3481a }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b346c0 }
	__asm { L_00b3481a: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009b53d0();
extern "C" void fn_00b34730();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x00b34830
extern "C" __declspec(naked) void asm_00b34830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_00b34864 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c876a0 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [ebp + 8] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_009b53d0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b34864: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_00b3489a }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { cmp edx, ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_00c876a0 }
	__asm { pop edi }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_00b3489a }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b34730 }
	__asm { L_00b3489a: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130e9a8[];
extern "C" char g_0130e9ac[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b348b0
extern "C" __declspec(naked) void asm_00b348b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5751e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130e9ac] }
	__asm { test al, 1 }
	__asm { jne L_00b34923 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e9ac], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b3490e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130e9a8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b3490e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130e9a8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b34923: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130e9a8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e9b8[];
extern "C" char g_0130e9bc[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b34940
extern "C" __declspec(naked) void asm_00b34940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5753e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130e9bc] }
	__asm { test al, 1 }
	__asm { jne L_00b349b3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e9bc], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b3499e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130e9b8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b3499e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130e9b8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b349b3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130e9b8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e9b0[];
extern "C" char g_0130e9b4[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b349d0
extern "C" __declspec(naked) void asm_00b349d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5755e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130e9b4] }
	__asm { test al, 1 }
	__asm { jne L_00b34a43 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e9b4], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b34a2e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130e9b0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b34a2e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130e9b0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b34a43: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130e9b0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e9d8[];
extern "C" char g_0130e9dc[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b34a60
extern "C" __declspec(naked) void asm_00b34a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5757e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130e9dc] }
	__asm { test al, 1 }
	__asm { jne L_00b34ad3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e9dc], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b34abe }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130e9d8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b34abe: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130e9d8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b34ad3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130e9d8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e9e8[];
extern "C" char g_0130e9ec[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b34af0
extern "C" __declspec(naked) void asm_00b34af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5759e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130e9ec] }
	__asm { test al, 1 }
	__asm { jne L_00b34b63 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e9ec], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b34b4e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130e9e8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b34b4e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130e9e8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b34b63: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130e9e8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f1834[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b358d0
extern "C" __declspec(naked) void asm_00b358d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23fee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f1834] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00b35945 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1834], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec77e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1708 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00b35945: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12f1708 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_012e4e94[];
extern "C" char g_012f1f54[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b360a0
extern "C" __declspec(naked) void asm_00b360a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57766 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xec791c }
	__asm { mov dword ptr [esi + 4], 0xec7994 }
	__asm { mov dword ptr [esi + 0x18], 0xec799c }
	__asm { mov dword ptr [esi + 0x1c], 0xec79a8 }
	__asm { mov eax, dword ptr [g_012f1f54] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b36139 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1f54], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec7900 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1e28 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b36139: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12f1e28 }
	__asm { inc dword ptr [g_012e4e94] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b364d0
extern "C" __declspec(naked) void asm_00b364d0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { mov esi, dword ptr [edi + 0x38] }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_00b36510 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00b364f6 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b364f6: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b36510: }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
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

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00b36e50();
// FUNCTION: ROBLOXSTUDIO 0x00b36540
extern "C" __declspec(naked) void asm_00b36540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cfb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b36e50 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b365b2 }
	__asm { add esi, 5 }
	__asm { je L_00b36582 }
	__asm { add esi, -5 }
	__asm { jmp L_00b36584 }
	__asm { L_00b36582: }
	__asm { xor esi, esi }
	__asm { L_00b36584: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b365b1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b365b1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00b365b1: }
	__asm { pop edi }
	__asm { L_00b365b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00b371e0();
// FUNCTION: ROBLOXSTUDIO 0x00b365d0
extern "C" __declspec(naked) void asm_00b365d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cfb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b371e0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b36642 }
	__asm { add esi, 5 }
	__asm { je L_00b36612 }
	__asm { add esi, -5 }
	__asm { jmp L_00b36614 }
	__asm { L_00b36612: }
	__asm { xor esi, esi }
	__asm { L_00b36614: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b36641 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b36641 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00b36641: }
	__asm { pop edi }
	__asm { L_00b36642: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079ae50();
extern "C" void fn_0083e550();
// FUNCTION: ROBLOXSTUDIO 0x00b37570
extern "C" __declspec(naked) void asm_00b37570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x34] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0083e550 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ebx, eax }
	__asm { call fn_0079ae50 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0x18 }
	__asm { mov esi, eax }
	__asm { test ecx, ecx }
	__asm { je L_00b375b5 }
	__asm { mov edx, dword ptr [edi + 0x28] }
	__asm { add ecx, -0x1c }
	__asm { add ecx, dword ptr [edi + 0x2c] }
	__asm { push ebx }
	__asm { push esi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00b375b5: }
	__asm { mov edx, dword ptr [edi + 0x28] }
	__asm { push ebx }
	__asm { xor ecx, ecx }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { push esi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b37910
extern "C" __declspec(naked) void asm_00b37910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd57998 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00b3796d }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { lea eax, [ebp + 0x14] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 8] }
	__asm { call dword ptr [eax] }
	__asm { L_00b3796d: }
	__asm { cmp dword ptr [ebp + 0x28], 0x10 }
	__asm { jb L_00b3797e }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b3797e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f96c8[];
extern "C" char g_012f96cc[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b37990
extern "C" __declspec(naked) void asm_00b37990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd579be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x835090 }
	__asm { push 0x12f9518 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f96cc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b379f2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f96cc], eax }
	__asm { push 0xec78fc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f96c8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b379f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f96c8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ebb8[];
extern "C" char g_0130ebbc[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b37d40
extern "C" __declspec(naked) void asm_00b37d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd579de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130ebbc] }
	__asm { test al, 1 }
	__asm { jne L_00b37db3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130ebbc], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b37d9e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130ebb8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b37d9e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130ebb8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b37db3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130ebb8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00b36980();
extern "C" void fn_00b36b00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b37e80
extern "C" __declspec(naked) void asm_00b37e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd57a18 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b36b00 }
	__asm { test al, al }
	__asm { je L_00b37edf }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x68] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b36980 }
	__asm { L_00b37edf: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_00b37ef0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b37ef0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b37f10
extern "C" __declspec(naked) void asm_00b37f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57a30 }
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
	__asm { je L_00b37f68 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xec9778 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b37f6a }
	__asm { L_00b37f68: }
	__asm { xor eax, eax }
	__asm { L_00b37f6a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00b37fa0
extern "C" __declspec(naked) void asm_00b37fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57a40 }
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
	__asm { je L_00b37ff8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xec9748 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b37ffa }
	__asm { L_00b37ff8: }
	__asm { xor eax, eax }
	__asm { L_00b37ffa: }
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
// FUNCTION: ROBLOXSTUDIO 0x00b38030
extern "C" __declspec(naked) void asm_00b38030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57a50 }
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
	__asm { je L_00b38088 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xec9760 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b3808a }
	__asm { L_00b38088: }
	__asm { xor eax, eax }
	__asm { L_00b3808a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00b380c0
extern "C" __declspec(naked) void asm_00b380c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57a60 }
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
	__asm { je L_00b38118 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xec9790 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b3811a }
	__asm { L_00b38118: }
	__asm { xor eax, eax }
	__asm { L_00b3811a: }
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

extern "C" void fn_0082a3d0();
extern "C" void fn_00b38150();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b38220
extern "C" __declspec(naked) void asm_00b38220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57a81 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_0082a3d0 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00b38273 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b38150 }
	__asm { L_00b38273: }
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

extern "C" void fn_007de8e0();
extern "C" void fn_00b37f10();
extern "C" void fn_00bfb990();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b38720
extern "C" __declspec(naked) void asm_00b38720()
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
	__asm { push 0xd0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b3876e }
	__asm { mov ecx, eax }
	__asm { call fn_00bfb990 }
	__asm { mov esi, eax }
	__asm { jmp L_00b38770 }
	__asm { L_00b3876e: }
	__asm { xor esi, esi }
	__asm { L_00b38770: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b37f10 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b387a1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b387a1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00b387a1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ee70();
extern "C" void fn_008be480();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b39400
extern "C" __declspec(naked) void asm_00b39400()
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
	__asm { push 0xe4e7b4 }
	__asm { push 3 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_008be480 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xec7c98 }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0043ee70 }
	__asm { add esp, 0x1c }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00b3945f }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b3945f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc98e[];
extern "C" void fn_006b8a90();
extern "C" void fn_009332f0();
// FUNCTION: ROBLOXSTUDIO 0x00b47dc0
extern "C" __declspec(naked) void asm_00b47dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37303 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009332f0 }
	__asm { mov dword ptr [esi], 0xec97bc }
	__asm { mov dword ptr [esi + 4], 0xec9818 }
	__asm { mov dword ptr [esi + 0x1c], 0xec984c }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov al, byte ptr [g_012fc98e] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_00b47e2f }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xec9850 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00b47e2f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_004039a0();
// FUNCTION: ROBLOXSTUDIO 0x00b48190
extern "C" __declspec(naked) void asm_00b48190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ecx + 0x40], 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00b481d3 }
	__asm { cmp byte ptr [ecx + 0x48], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { je L_00b481bf }
	__asm { push 0xec9880 }
	__asm { call fn_004039a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b481bf: }
	__asm { push 0xec9890 }
	__asm { call fn_004039a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b481d3: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xc }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xec9890 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_004039a0();
extern "C" void fn_00892770();
// FUNCTION: ROBLOXSTUDIO 0x00b48200
extern "C" __declspec(naked) void asm_00b48200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0x40] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b4824b }
	__asm { push eax }
	__asm { call fn_00892770 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_00b48237 }
	__asm { push 0xec98a0 }
	__asm { call fn_004039a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b48237: }
	__asm { push 0xec98b0 }
	__asm { call fn_004039a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b4824b: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xa }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xec98b0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b48900();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b48740
extern "C" __declspec(naked) void asm_00b48740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd58d60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b48798 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xec98e0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b4879a }
	__asm { L_00b48798: }
	__asm { xor eax, eax }
	__asm { L_00b4879a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b48900 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00b48900();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b48870
extern "C" __declspec(naked) void asm_00b48870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd58d70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b488c8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xec98f8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b488ca }
	__asm { L_00b488c8: }
	__asm { xor eax, eax }
	__asm { L_00b488ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b48900 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0130ec08[];
extern "C" void fn_00407e90();
extern "C" void fn_00bcfb00();
// FUNCTION: ROBLOXSTUDIO 0x00b49880
extern "C" __declspec(naked) void asm_00b49880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00bcfb00 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi + 0x1c], 0xfffffffe }
	__asm { mov dword ptr [esi + 0x20], 0xffffffff }
	__asm { mov word ptr [esi + 0x24], ax }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp byte ptr [g_0130ec08], al }
	__asm { jne L_00b498fd }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 0xc], 0x1307a2c }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 0xc], 0xb4dbe0 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130ec08], 1 }
	__asm { L_00b498fd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xec9ac4 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00aefbd0();
extern "C" void fn_00bcfb30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b49af0
extern "C" __declspec(naked) void asm_00b49af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd58e08 }
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
	__asm { je L_00b49b26 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b49b26: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bcfb30 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bcfb30 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00aefbd0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a49d20();
extern "C" void fn_00aefbd0();
extern "C" void fn_00bcfb30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b49e10
extern "C" __declspec(naked) void asm_00b49e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd58e08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [esi], 0xec9ac4 }
	__asm { test eax, eax }
	__asm { je L_00b49e45 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b49e45: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b49e5c }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b49e5c: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bcfb30 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bcfb30 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00aefbd0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00b49e8f }
	__asm { push esi }
	__asm { call fn_00a49d20 }
	__asm { add esp, 4 }
	__asm { L_00b49e8f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00c01a90();
extern "C" void fn_00c01e60();
extern "C" void fn_00c02810();
// FUNCTION: ROBLOXSTUDIO 0x00b4a3a0
extern "C" __declspec(naked) void asm_00b4a3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { sub eax, 3 }
	__asm { je L_00b4a3fe }
	__asm { dec eax }
	__asm { je L_00b4a3f8 }
	__asm { dec eax }
	__asm { je L_00b4a3f2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b4a3ee }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b4a3dd }
	__asm { push 0x51 }
	__asm { push 0xec9bb8 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b4a3ee }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b4a3dd: }
	__asm { movzx eax, al }
	__asm { push 0xec9bf8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b4a3ee: }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b4a3f2: }
	__asm { pop ebp }
	__asm { jmp fn_00c01a90 }
	__asm { L_00b4a3f8: }
	__asm { pop ebp }
	__asm { jmp fn_00c01e60 }
	__asm { L_00b4a3fe: }
	__asm { pop ebp }
	__asm { jmp fn_00c02810 }
}

extern "C" void fn_00b4d8a0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b4b060
extern "C" __declspec(naked) void asm_00b4b060()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x28], 0 }
	__asm { jne L_00b4b092 }
	__asm { push 0xc }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b4b08d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { jmp L_00b4b08f }
	__asm { L_00b4b08d: }
	__asm { xor eax, eax }
	__asm { L_00b4b08f: }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { L_00b4b092: }
	__asm { mov ecx, esi }
	__asm { call fn_00b4d8a0 }
	__asm { cmp dword ptr [esi + 0x2c], 0 }
	__asm { jne L_00b4b0f8 }
	__asm { push 0x94 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b4b0f3 }
	__asm { mov dword ptr [eax + 0x20], 0 }
	__asm { mov dword ptr [eax + 0x44], 0 }
	__asm { mov dword ptr [eax + 0x6c], 0 }
	__asm { mov dword ptr [eax + 0x90], esi }
	__asm { mov dword ptr [eax + 0x70], 0 }
	__asm { mov dword ptr [eax + 0x74], 0 }
	__asm { mov dword ptr [eax + 0x78], 0xffffffff }
	__asm { mov dword ptr [eax + 0x7c], 0xffffffff }
	__asm { mov dword ptr [eax + 0x48], 0 }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00b4b0f3: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { L_00b4b0f8: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00b4bad0
extern "C" __declspec(naked) void asm_00b4bad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { lea esi, [ecx + 0x4c] }
	__asm { test al, al }
	__asm { je L_00b4bb27 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, dword ptr [esi + 0x20] }
	__asm { jb L_00b4bb1e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b4bb0d }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b4bb1e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b4bb0d: }
	__asm { movzx eax, al }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b4bb1e: }
	__asm { mov eax, dword ptr [esi + edi*4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b4bb27: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + eax*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00b4bb40
extern "C" __declspec(naked) void asm_00b4bb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x48] }
	__asm { push esi }
	__asm { lea eax, [eax + eax*8] }
	__asm { lea esi, [ecx + eax*4] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b4bb9d }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, dword ptr [esi + 0x20] }
	__asm { jb L_00b4bb94 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b4bb83 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b4bb94 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b4bb83: }
	__asm { movzx eax, al }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b4bb94: }
	__asm { mov eax, dword ptr [esi + edi*4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b4bb9d: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + eax*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b51540();
extern "C" void fn_00b51b80();
// FUNCTION: ROBLOXSTUDIO 0x00b519f0
extern "C" __declspec(naked) void asm_00b519f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { inc dword ptr [edi + 0x24] }
	__asm { mov esi, dword ptr [eax + 0x30] }
	__asm { cmp dword ptr [esi + 0xf0], 0 }
	__asm { jge L_00b51a28 }
	__asm { cmp dword ptr [esi + 0xf4], 0 }
	__asm { jge L_00b51a28 }
	__asm { cmp dword ptr [esi + 0xf8], 0 }
	__asm { jge L_00b51a28 }
	__asm { cmp dword ptr [esi + 0xfc], 0 }
	__asm { jl L_00b51a53 }
	__asm { L_00b51a28: }
	__asm { push esi }
	__asm { call fn_00b51540 }
	__asm { cmp edi, dword ptr [edi + 0x28] }
	__asm { je L_00b51a53 }
	__asm { cmp dword ptr [edi + 0x20], 0 }
	__asm { jge L_00b51a53 }
	__asm { cmp dword ptr [esi + 0xf8], 0 }
	__asm { jge L_00b51a4b }
	__asm { cmp dword ptr [esi + 0xf4], 0 }
	__asm { jl L_00b51a53 }
	__asm { L_00b51a4b: }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_00b51b80 }
	__asm { L_00b51a53: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b535c0();
extern "C" void fn_00b53850();
extern "C" void fn_00b544d0();
extern "C" void fn_00b54eb0();
// FUNCTION: ROBLOXSTUDIO 0x00b54440
extern "C" __declspec(naked) void asm_00b54440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00b5448d }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_00b5448d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b5447c }
	__asm { push 0xba }
	__asm { push 0xecc4f8 }
	__asm { push 0xe857f0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5448d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b5447c: }
	__asm { movzx eax, al }
	__asm { push 0xecc9d0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5448d: }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { mov ecx, esi }
	__asm { je L_00b544ae }
	__asm { call fn_00b53850 }
	__asm { mov ecx, esi }
	__asm { call fn_00b54eb0 }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00b544ae: }
	__asm { call fn_00b535c0 }
	__asm { mov ecx, esi }
	__asm { call fn_00b544d0 }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b56d20();
// FUNCTION: ROBLOXSTUDIO 0x00b56ca0
extern "C" __declspec(naked) void asm_00b56ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd591f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ax, word ptr [ebp + 0x14] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov word ptr [ecx], ax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00b56d20 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00b56d0f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00b56d0f }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_00b56d0f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00894570();
extern "C" void fn_00a5d310();
// FUNCTION: ROBLOXSTUDIO 0x00b57740
extern "C" __declspec(naked) void asm_00b57740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { test eax, eax }
	__asm { je L_00b5777f }
	__asm { L_00b57758: }
	__asm { sub esp, 8 }
	__asm { lea ecx, [ecx + esi*8] }
	__asm { push esp }
	__asm { call fn_00a5d310 }
	__asm { call fn_00894570 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_00b57785 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ecx }
	__asm { inc esi }
	__asm { sar eax, 3 }
	__asm { cmp esi, eax }
	__asm { jb L_00b57758 }
	__asm { L_00b5777f: }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b57785: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011edc12[];
extern "C" void fn_00995e00();
extern "C" void fn_00b58300();
extern "C" void fn_00b5b160();
extern "C" void fn_00b5cbf0();
// FUNCTION: ROBLOXSTUDIO 0x00b58020
extern "C" __declspec(naked) void asm_00b58020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd59308 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [g_011edc12], 0 }
	__asm { je L_00b58080 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_00b5cbf0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b58300 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00b58071 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00995e00 }
	__asm { L_00b58071: }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b5b160 }
	__asm { L_00b58080: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011edc12[];
extern "C" void fn_00995cf0();
extern "C" void fn_00b58300();
extern "C" void fn_00b5b160();
extern "C" void fn_00b5cbf0();
// FUNCTION: ROBLOXSTUDIO 0x00b58090
extern "C" __declspec(naked) void asm_00b58090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd59308 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [g_011edc12], 0 }
	__asm { je L_00b580f0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_00b5cbf0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b58300 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00b580e1 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00995cf0 }
	__asm { L_00b580e1: }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b5b160 }
	__asm { L_00b580f0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009962f0();
extern "C" void fn_00b58300();
extern "C" void fn_00b5b160();
extern "C" void fn_00b5cbf0();
// FUNCTION: ROBLOXSTUDIO 0x00b58c10
extern "C" __declspec(naked) void asm_00b58c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59308 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_00b5cbf0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b58300 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00b58c58 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_009962f0 }
	__asm { L_00b58c58: }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b5b160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b58ed0
extern "C" __declspec(naked) void asm_00b58ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [eax + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov esi, edi }
	__asm { sub esi, ebx }
	__asm { mov eax, 0x92492493 }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp ecx, eax }
	__asm { jl L_00b58f1a }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov eax, 0x92492493 }
	__asm { sub edi, dword ptr [edx] }
	__asm { imul edi }
	__asm { add edx, edi }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { sub ecx, eax }
	__asm { L_00b58f1a: }
	__asm { lea eax, [ecx*8] }
	__asm { pop edi }
	__asm { sub eax, ecx }
	__asm { pop esi }
	__asm { lea eax, [ebx + eax*8] }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b59ef0();
// FUNCTION: ROBLOXSTUDIO 0x00b59050
extern "C" __declspec(naked) void asm_00b59050()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { sub esi, dword ptr [ebx] }
	__asm { mov eax, 0x92492493 }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 5 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mov eax, 0xaaaaaaab }
	__asm { mul ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 0x10] }
	__asm { shr edx, 1 }
	__asm { cmp edx, edi }
	__asm { jb L_00b59097 }
	__asm { mov esi, dword ptr [ebx + 0x1c] }
	__asm { L_00b59080: }
	__asm { shr ecx, 1 }
	__asm { cmp ecx, esi }
	__asm { jbe L_00b59095 }
	__asm { mov eax, 0xaaaaaaab }
	__asm { mul ecx }
	__asm { shr edx, 1 }
	__asm { cmp edx, edi }
	__asm { jae L_00b59080 }
	__asm { jmp L_00b59097 }
	__asm { L_00b59095: }
	__asm { mov ecx, esi }
	__asm { L_00b59097: }
	__asm { mov eax, 0xcccccccd }
	__asm { mul ecx }
	__asm { shr edx, 2 }
	__asm { add edx, edi }
	__asm { cmp edx, ecx }
	__asm { jb L_00b590a9 }
	__asm { add ecx, ecx }
	__asm { L_00b590a9: }
	__asm { cmp ecx, dword ptr [ebx + 0x18] }
	__asm { cmova ecx, dword ptr [ebx + 0x18] }
	__asm { push ecx }
	__asm { mov ecx, ebx }
	__asm { call fn_00b59ef0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e10140[];
extern "C" void fn_006e84d0();
// FUNCTION: ROBLOXSTUDIO 0x00b5b160
extern "C" __declspec(naked) void asm_00b5b160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1843b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push dword ptr [edi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b5b1db }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_00b5b1d4 }
	__asm { mov ecx, esi }
	__asm { call fn_006e84d0 }
	__asm { test esi, esi }
	__asm { je L_00b5b1d4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_00b5b1d4: }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { L_00b5b1db: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00595fa0();
extern "C" void fn_00b5ba40();
// FUNCTION: ROBLOXSTUDIO 0x00b5b590
extern "C" __declspec(naked) void asm_00b5b590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { lea ecx, [ecx + 8] }
	__asm { call fn_00595fa0 }
	__asm { test eax, eax }
	__asm { je L_00b5b5b7 }
	__asm { mov ecx, eax }
	__asm { call fn_00595fa0 }
	__asm { test eax, eax }
	__asm { je L_00b5b5b7 }
	__asm { lea edi, [eax - 8] }
	__asm { jmp L_00b5b5b9 }
	__asm { L_00b5b5b7: }
	__asm { xor edi, edi }
	__asm { L_00b5b5b9: }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { lea ecx, [ecx + 8] }
	__asm { call fn_00595fa0 }
	__asm { test eax, eax }
	__asm { je L_00b5b5d8 }
	__asm { mov ecx, eax }
	__asm { call fn_00595fa0 }
	__asm { test eax, eax }
	__asm { je L_00b5b5d8 }
	__asm { lea esi, [eax - 8] }
	__asm { jmp L_00b5b5da }
	__asm { L_00b5b5d8: }
	__asm { xor esi, esi }
	__asm { L_00b5b5da: }
	__asm { mov ecx, edi }
	__asm { call fn_00b5ba40 }
	__asm { test al, al }
	__asm { je L_00b5b5f6 }
	__asm { mov ecx, esi }
	__asm { call fn_00b5ba40 }
	__asm { test al, al }
	__asm { je L_00b5b5f6 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b5b5f6: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00af1070();
// FUNCTION: ROBLOXSTUDIO 0x00b5b600
extern "C" __declspec(naked) void asm_00b5b600()
{
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0x20] }
	__asm { test esi, esi }
	__asm { je L_00b5b610 }
	__asm { add esi, -8 }
	__asm { jmp L_00b5b612 }
	__asm { L_00b5b610: }
	__asm { xor esi, esi }
	__asm { L_00b5b612: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b5b654 }
	__asm { test esi, esi }
	__asm { jne L_00b5b654 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b5b643 }
	__asm { push 0x72 }
	__asm { push 0xecdd40 }
	__asm { push 0xe56ba4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5b654 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b5b643: }
	__asm { movzx eax, al }
	__asm { push 0xece1f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5b654: }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00af1070 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { setne al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006ded80();
extern "C" void fn_0099c980();
// FUNCTION: ROBLOXSTUDIO 0x00b5b780
extern "C" __declspec(naked) void asm_00b5b780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x20] }
	__asm { test edi, edi }
	__asm { je L_00b5b793 }
	__asm { add edi, -8 }
	__asm { jmp L_00b5b795 }
	__asm { L_00b5b793: }
	__asm { xor edi, edi }
	__asm { L_00b5b795: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b5b7d7 }
	__asm { test edi, edi }
	__asm { jne L_00b5b7d7 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b5b7c6 }
	__asm { push 0x72 }
	__asm { push 0xecdd40 }
	__asm { push 0xe56ba4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5b7d7 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b5b7c6: }
	__asm { movzx eax, al }
	__asm { push 0xece1f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5b7d7: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_0099c980 }
	__asm { lea ecx, [eax + 0x24] }
	__asm { call fn_006ded80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099c7f0();
// FUNCTION: ROBLOXSTUDIO 0x00b5c030
extern "C" __declspec(naked) void asm_00b5c030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { call fn_0099c7f0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov edi, eax }
	__asm { call fn_0099c7f0 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { mov esi, eax }
	__asm { test dl, dl }
	__asm { je L_00b5c096 }
	__asm { cmp edi, esi }
	__asm { jne L_00b5c096 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b5c085 }
	__asm { push 0x10b }
	__asm { push 0xecdd40 }
	__asm { push 0xece51c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5c096 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_00b5c085: }
	__asm { movzx eax, dl }
	__asm { push 0xece528 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5c096: }
	__asm { cmp edi, ebx }
	__asm { cmove edi, esi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099e570();
extern "C" void fn_00c037f0();
// FUNCTION: ROBLOXSTUDIO 0x00b5c730
extern "C" __declspec(naked) void asm_00b5c730()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov esi, dword ptr [eax + 0x20] }
	__asm { test esi, esi }
	__asm { je L_00b5c743 }
	__asm { add esi, -8 }
	__asm { jmp L_00b5c745 }
	__asm { L_00b5c743: }
	__asm { xor esi, esi }
	__asm { L_00b5c745: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b5c787 }
	__asm { test esi, esi }
	__asm { jne L_00b5c787 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b5c776 }
	__asm { push 0x6b }
	__asm { push 0xecdd40 }
	__asm { push 0xe56ba4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5c787 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b5c776: }
	__asm { movzx eax, al }
	__asm { push 0xece198 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5c787: }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_0099e570 }
	__asm { mov ecx, dword ptr [edi + 0x3c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { test ecx, ecx }
	__asm { jne fn_00c037f0 }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00baa210();
// FUNCTION: ROBLOXSTUDIO 0x00b5c800
extern "C" __declspec(naked) void asm_00b5c800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52318 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [esi], 0xece7d8 }
	__asm { mov dword ptr [ecx], 0xece7e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00baa210 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test al, al }
	__asm { je L_00b5c885 }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { je L_00b5c885 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b5c874 }
	__asm { push 0x19 }
	__asm { push 0xe78b18 }
	__asm { push 0xe9053c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5c885 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b5c874: }
	__asm { movzx eax, al }
	__asm { push 0xe90558 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5c885: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 4], 3 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099c7f0();
extern "C" void fn_00b5b600();
extern "C" void fn_00b5bb60();
extern "C" void fn_00b5c980();
// FUNCTION: ROBLOXSTUDIO 0x00b5c900
extern "C" __declspec(naked) void asm_00b5c900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_0099c7f0 }
	__asm { mov esi, eax }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b5c955 }
	__asm { test esi, esi }
	__asm { jne L_00b5c95e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b5c93f }
	__asm { push 0x59 }
	__asm { push 0xece80c }
	__asm { push 0xe47640 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5c959 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b5c93f: }
	__asm { movzx eax, al }
	__asm { push 0xece8d0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b5c955: }
	__asm { test esi, esi }
	__asm { jne L_00b5c95e }
	__asm { L_00b5c959: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b5c95e: }
	__asm { mov ecx, esi }
	__asm { call fn_00b5b600 }
	__asm { test al, al }
	__asm { jne L_00b5c959 }
	__asm { push esi }
	__asm { call fn_00b5c980 }
	__asm { add esp, 4 }
	__asm { mov ecx, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_00b5bb60 }
}

extern "C" void fn_00b5b600();
// FUNCTION: ROBLOXSTUDIO 0x00b5cb90
extern "C" __declspec(naked) void asm_00b5cb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00b5b600 }
	__asm { test al, al }
	__asm { je L_00b5cba7 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b5cba7: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00b5cbd5 }
	__asm { lea eax, [ecx - 8] }
	__asm { test eax, eax }
	__asm { je L_00b5cbd5 }
	__asm { test ecx, ecx }
	__asm { je L_00b5cbbe }
	__asm { add ecx, -8 }
	__asm { jmp L_00b5cbc0 }
	__asm { L_00b5cbbe: }
	__asm { xor ecx, ecx }
	__asm { L_00b5cbc0: }
	__asm { call fn_00b5b600 }
	__asm { test al, al }
	__asm { jne L_00b5cbd5 }
	__asm { mov cl, 1 }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { sete al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b5cbd5: }
	__asm { xor cl, cl }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { sete al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010380f0[];
extern "C" void fn_00891b10();
extern "C" void fn_009d5f80();
extern "C" void fn_00b5b780();
extern "C" void fn_00b5b980();
extern "C" void fn_00c038a0();
// FUNCTION: ROBLOXSTUDIO 0x00b5da30
extern "C" __declspec(naked) void asm_00b5da30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00b5b980 }
	__asm { push eax }
	__asm { call fn_00891b10 }
	__asm { push eax }
	__asm { call fn_009d5f80 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00b5da5d }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b5da5d: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_00b5b780 }
	__asm { fld dword ptr [g_010380f0] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 8] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { call fn_00c038a0 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a09320();
extern "C" void fn_00b5f1d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b5eec0
extern "C" __declspec(naked) void asm_00b5eec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd594d3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea eax, [edi + 4] }
	__asm { mov dword ptr [edi], 0xecfac4 }
	__asm { mov dword ptr [eax], 0xecfad0 }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00a09320 }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00b5ef36 }
	__asm { cmp dword ptr [edi + 0x10], 0 }
	__asm { je L_00b5ef1d }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00b5f1d0 }
	__asm { L_00b5ef1d: }
	__asm { push dword ptr [edi + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { L_00b5ef36: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0xecfab8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b53d0();
// FUNCTION: ROBLOXSTUDIO 0x00b5fa30
extern "C" __declspec(naked) void asm_00b5fa30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_009b53d0 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_00b5faa0 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_00b5fa50: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_00b5fa5e }
	__asm { add esi, 0xfffff7f4 }
	__asm { jmp L_00b5fa60 }
	__asm { L_00b5fa5e: }
	__asm { xor esi, esi }
	__asm { L_00b5fa60: }
	__asm { mov eax, dword ptr [esi + 0x810] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_00b5fa81 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x80c] }
	__asm { jmp L_00b5fa99 }
	__asm { L_00b5fa81: }
	__asm { mov eax, dword ptr [esi + 0x80c] }
	__asm { lea edx, [esi + 0x80c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_00b5fa99: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00b5fa50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00b5faa0: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009b53d0();
extern "C" void fn_00b5fa30();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x00b5fab0
extern "C" __declspec(naked) void asm_00b5fab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_00b5fae4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c876a0 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [ebp + 8] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_009b53d0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b5fae4: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_00b5fb1a }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { cmp edx, ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_00c876a0 }
	__asm { pop edi }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_00b5fb1a }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b5fa30 }
	__asm { L_00b5fb1a: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b60040();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b5fda0
extern "C" __declspec(naked) void asm_00b5fda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd594e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b5fdf8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed00e8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b5fdfa }
	__asm { L_00b5fdf8: }
	__asm { xor eax, eax }
	__asm { L_00b5fdfa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b60040 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00b5fee0();
extern "C" void fn_00b5ff80();
// FUNCTION: ROBLOXSTUDIO 0x00b60160
extern "C" __declspec(naked) void asm_00b60160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { call fn_00b5fee0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp eax, ecx }
	__asm { je L_00b601be }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { sub esp, 0x10 }
	__asm { mov esi, esp }
	__asm { push ecx }
	__asm { mov dword ptr [esi], edx }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov edx, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov edx, dword ptr [ebp + 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0xc], edx }
	__asm { call fn_00b5ff80 }
	__asm { add esp, 0x18 }
	__asm { L_00b601be: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130edd0[];
extern "C" void fn_00407e90();
extern "C" void fn_00bc2af0();
// FUNCTION: ROBLOXSTUDIO 0x00b60220
extern "C" __declspec(naked) void asm_00b60220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c328 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [g_0130edd0], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { jne L_00b6027b }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp - 0x10], 0x130edcc }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp - 0x10], 0xb653c0 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130edd0], 1 }
	__asm { L_00b6027b: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { call fn_00bc2af0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00b61de0
extern "C" __declspec(naked) void asm_00b61de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00b61e34 }
	__asm { test esi, esi }
	__asm { js L_00b61dfc }
	__asm { cmp esi, 5 }
	__asm { jl L_00b61e34 }
	__asm { L_00b61dfc: }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b61e23 }
	__asm { push 0x412 }
	__asm { push 0xecfdf0 }
	__asm { push 0xed003c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b61e34 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b61e23: }
	__asm { movzx ecx, al }
	__asm { push 0xed0068 }
	__asm { push ecx }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b61e34: }
	__asm { cmp esi, 4 }
	__asm { ja L_00b61e45 }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b61e45: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130eddc[];
extern "C" char g_0130ede0[];
extern "C" char g_0130ede4[];
extern "C" char g_0130ede8[];
extern "C" void fn_004115f0();
extern "C" void fn_00b9b4c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b65600
extern "C" __declspec(naked) void asm_00b65600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5965e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb65570 }
	__asm { push 0x130edd4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130ede8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b65679 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130ede8], eax }
	__asm { mov ecx, 0x130eddc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130eddc], 0 }
	__asm { mov dword ptr [g_0130ede0], 0 }
	__asm { call fn_00b9b4c0 }
	__asm { push 0xe078b0 }
	__asm { mov dword ptr [g_0130eddc], eax }
	__asm { mov byte ptr [g_0130ede4], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b65679: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x130eddc }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b681d0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b67db0
extern "C" __declspec(naked) void asm_00b67db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd596c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b67e08 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed0de0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b67e0a }
	__asm { L_00b67e08: }
	__asm { xor eax, eax }
	__asm { L_00b67e0a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b681d0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00b68240();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b67ee0
extern "C" __declspec(naked) void asm_00b67ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd596d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b67f38 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed0df8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b67f3a }
	__asm { L_00b67f38: }
	__asm { xor eax, eax }
	__asm { L_00b67f3a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b68240 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00b6bae0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b681d0
extern "C" __declspec(naked) void asm_00b681d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd12008 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00b68230 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esi }
	__asm { call fn_00b6bae0 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00b68216 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b68216: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b68230: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b6bc30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b68240
extern "C" __declspec(naked) void asm_00b68240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd12008 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00b682a0 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esi }
	__asm { call fn_00b6bc30 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00b68286 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b68286: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b682a0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e102d8[];
extern "C" char g_00e10318[];
extern "C" void fn_00426140();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b68820
extern "C" __declspec(naked) void asm_00b68820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59768 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + ebx + 8], 0xe18340 }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x68] }
	__asm { mov dword ptr [ecx + ebx + 4], eax }
	__asm { lea ecx, [ebx + 0x20] }
	__asm { mov dword ptr [ebx + 0x20], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [ebx + 0x20] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [ebx + 0x28] }
	__asm { call dword ptr [g_00e102d8] }
	__asm { lea ecx, [ebx + 0x70] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [ebx], 0xed0ce8 }
	__asm { je L_00b688a2 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b688a2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0058a0b0();
extern "C" void fn_00595e30();
// FUNCTION: ROBLOXSTUDIO 0x00b688f0
extern "C" __declspec(naked) void asm_00b688f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59788 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x60] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b68933 }
	__asm { cmp byte ptr [esi + 0x64], 0 }
	__asm { je L_00b6892c }
	__asm { push eax }
	__asm { call fn_0058a0b0 }
	__asm { add esp, 4 }
	__asm { L_00b6892c: }
	__asm { mov dword ptr [esi + 0x60], 0 }
	__asm { L_00b68933: }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x64], 1 }
	__asm { mov dword ptr [esi + 0x60], 0 }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00595e30 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00b68969 }
	__asm { push esi }
	__asm { call fn_0058a0b0 }
	__asm { add esp, 4 }
	__asm { L_00b68969: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b68da0
extern "C" __declspec(naked) void asm_00b68da0()
{
	__asm { L_00b68da0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov ebx, ecx }
	__asm { mov edi, esi }
	__asm { jne L_00b68df3 }
	__asm { L_00b68db3: }
	__asm { push dword ptr [edi + 8] }
	__asm { mov ecx, ebx }
	__asm { call L_00b68da0 }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov edi, dword ptr [edi] }
	__asm { jb L_00b68dd0 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b68dd0: }
	__asm { mov dword ptr [esi + 0x24], 0xf }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { mov esi, edi }
	__asm { je L_00b68db3 }
	__asm { L_00b68df3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b6bae0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b68f70
extern "C" __declspec(naked) void asm_00b68f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test esi, esi }
	__asm { je L_00b68fd1 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esi }
	__asm { call fn_00b6bae0 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00b68fb7 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b68fb7: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b68fd1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b6bc30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b68fe0
extern "C" __declspec(naked) void asm_00b68fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test esi, esi }
	__asm { je L_00b69041 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esi }
	__asm { call fn_00b6bc30 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00b69027 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b69027: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b69041: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130eeb8[];
extern "C" char g_0130eebc[];
extern "C" char g_0130eec0[];
extern "C" char g_0130eec4[];
extern "C" void fn_005e8b40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b6be00
extern "C" __declspec(naked) void asm_00b6be00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd59b2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130eec4] }
	__asm { test al, 1 }
	__asm { jne L_00b6be67 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130eec4], eax }
	__asm { mov ecx, 0x130eeb8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130eeb8], 0 }
	__asm { mov dword ptr [g_0130eebc], 0 }
	__asm { call fn_005e8b40 }
	__asm { push 0xe079e0 }
	__asm { mov dword ptr [g_0130eeb8], eax }
	__asm { mov byte ptr [g_0130eec0], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b6be67: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130eea8[];
extern "C" char g_0130eeac[];
extern "C" char g_0130eeb0[];
extern "C" char g_0130eeb4[];
extern "C" void fn_004115f0();
extern "C" void fn_005e8b40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b6c2a0
extern "C" __declspec(naked) void asm_00b6c2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd59bce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb6bd80 }
	__asm { push 0x130ee98 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130eeb4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b6c319 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130eeb4], eax }
	__asm { mov ecx, 0x130eea8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130eea8], 0 }
	__asm { mov dword ptr [g_0130eeac], 0 }
	__asm { call fn_005e8b40 }
	__asm { push 0xe07960 }
	__asm { mov dword ptr [g_0130eea8], eax }
	__asm { mov byte ptr [g_0130eeb0], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b6c319: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x130eea8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130eeb8[];
extern "C" char g_0130eebc[];
extern "C" char g_0130eec0[];
extern "C" char g_0130eec4[];
extern "C" void fn_004115f0();
extern "C" void fn_005e8b40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b6c330
extern "C" __declspec(naked) void asm_00b6c330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd59b2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb6be00 }
	__asm { push 0x130eea0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130eec4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b6c3a9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130eec4], eax }
	__asm { mov ecx, 0x130eeb8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130eeb8], 0 }
	__asm { mov dword ptr [g_0130eebc], 0 }
	__asm { call fn_005e8b40 }
	__asm { push 0xe079e0 }
	__asm { mov dword ptr [g_0130eeb8], eax }
	__asm { mov byte ptr [g_0130eec0], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b6c3a9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x130eeb8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34dd0();
extern "C" void fn_00a34ed0();
extern "C" void fn_00a35290();
extern "C" void fn_00a357b0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a39050();
extern "C" void fn_00a39300();
// FUNCTION: ROBLOXSTUDIO 0x00b6e0a0
extern "C" __declspec(naked) void asm_00b6e0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 1 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a39050 }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov edi, eax }
	__asm { call fn_00a35d10 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35290 }
	__asm { add esp, 0x1c }
	__asm { test eax, eax }
	__asm { je L_00b6e0e9 }
	__asm { test edi, edi }
	__asm { jle L_00b6e0e9 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a39300 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a34dd0 }
	__asm { add esp, 0x18 }
	__asm { L_00b6e0e9: }
	__asm { push esi }
	__asm { call fn_00a34ed0 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35bf0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360d0();
extern "C" void fn_00a385a0();
extern "C" void fn_00a38960();
extern "C" void fn_00a38a50();
extern "C" void fn_00a38bc0();
// FUNCTION: ROBLOXSTUDIO 0x00b6e150
extern "C" __declspec(naked) void asm_00b6e150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { push 5 }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov edi, eax }
	__asm { call fn_00a38960 }
	__asm { add esp, 0x14 }
	__asm { test edi, edi }
	__asm { je L_00b6e188 }
	__asm { cmp edi, 5 }
	__asm { je L_00b6e188 }
	__asm { push 0xed0fc0 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a385a0 }
	__asm { add esp, 0xc }
	__asm { L_00b6e188: }
	__asm { push 0xe6fca0 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38bc0 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_00b6e1aa }
	__asm { push 0xed0fd8 }
	__asm { push esi }
	__asm { call fn_00a38a50 }
	__asm { add esp, 8 }
	__asm { L_00b6e1aa: }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x10 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a351c0();
extern "C" void fn_00a35310();
extern "C" void fn_00a356d0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38960();
extern "C" void fn_00a39080();
// FUNCTION: ROBLOXSTUDIO 0x00b6e640
extern "C" __declspec(naked) void asm_00b6e640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0xed10e8 }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a39080 }
	__asm { push 6 }
	__asm { push 1 }
	__asm { push edi }
	__asm { mov esi, eax }
	__asm { call fn_00a38960 }
	__asm { push 3 }
	__asm { push edi }
	__asm { call fn_00a35d10 }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0xb6ee60 }
	__asm { push edi }
	__asm { call fn_00a35310 }
	__asm { add esp, 0x34 }
	__asm { test eax, eax }
	__asm { jne L_00b6e689 }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b6e689: }
	__asm { push edi }
	__asm { call fn_00a356d0 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a351c0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 2 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35220();
extern "C" void fn_00a35350();
extern "C" void fn_00a357b0();
extern "C" void fn_00a360d0();
extern "C" void fn_00a36120();
extern "C" void fn_00a385a0();
// FUNCTION: ROBLOXSTUDIO 0x00b6eb00
extern "C" __declspec(naked) void asm_00b6eb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a35350 }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov edi, eax }
	__asm { call fn_00a360d0 }
	__asm { add esp, 0xc }
	__asm { cmp eax, 6 }
	__asm { jne L_00b6eb2f }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35220 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00b6eb3f }
	__asm { L_00b6eb2f: }
	__asm { push 0xed11c8 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a385a0 }
	__asm { add esp, 0xc }
	__asm { L_00b6eb3f: }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push 1 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a36120 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35220();
extern "C" void fn_00a35350();
extern "C" void fn_00a35580();
extern "C" void fn_00a357b0();
extern "C" void fn_00a360d0();
extern "C" void fn_00a36120();
extern "C" void fn_00a385a0();
// FUNCTION: ROBLOXSTUDIO 0x00b6eb60
extern "C" __declspec(naked) void asm_00b6eb60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a35350 }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov edi, eax }
	__asm { call fn_00a360d0 }
	__asm { add esp, 0xc }
	__asm { cmp eax, 6 }
	__asm { jne L_00b6eb8f }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35220 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00b6eb9f }
	__asm { L_00b6eb8f: }
	__asm { push 0xed11c8 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a385a0 }
	__asm { add esp, 0xc }
	__asm { L_00b6eb9f: }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push 1 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a36120 }
	__asm { push 1 }
	__asm { push 0xb6eff0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x20 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34dd0();
extern "C" void fn_00a34ed0();
extern "C" void fn_00a35150();
extern "C" void fn_00a351c0();
extern "C" void fn_00a35290();
extern "C" void fn_00a36080();
extern "C" void fn_00a39300();
extern "C" void fn_00b6ec20();
// FUNCTION: ROBLOXSTUDIO 0x00b6eff0
extern "C" __declspec(naked) void asm_00b6eff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0xffffd8ed }
	__asm { push edi }
	__asm { call fn_00a36080 }
	__asm { push edi }
	__asm { mov esi, eax }
	__asm { call fn_00a35150 }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b6ec20 }
	__asm { mov esi, eax }
	__asm { add esp, 0x18 }
	__asm { test esi, esi }
	__asm { jns L_00b6f051 }
	__asm { push -1 }
	__asm { push edi }
	__asm { call fn_00a35290 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00b6f046 }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a39300 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a351c0 }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a34dd0 }
	__asm { add esp, 0x18 }
	__asm { L_00b6f046: }
	__asm { push edi }
	__asm { call fn_00a34ed0 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { L_00b6f051: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35480();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360d0();
extern "C" void fn_00a38930();
extern "C" void fn_00a38960();
extern "C" void fn_00b6f690();
// FUNCTION: ROBLOXSTUDIO 0x00b6f630
extern "C" __declspec(naked) void asm_00b6f630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 5 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38960 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35480 }
	__asm { push 0xf12f2d }
	__asm { push 0x28 }
	__asm { push esi }
	__asm { mov edi, eax }
	__asm { call fn_00a38930 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 0x28 }
	__asm { test eax, eax }
	__asm { jle L_00b6f675 }
	__asm { push 6 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a38960 }
	__asm { add esp, 0xc }
	__asm { L_00b6f675: }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { push edi }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00b6f690 }
	__asm { add esp, 0x14 }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a38a50();
extern "C" void fn_00b70ab0();
// FUNCTION: ROBLOXSTUDIO 0x00b70890
extern "C" __declspec(naked) void asm_00b70890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { dec eax }
	__asm { js L_00b708af }
	__asm { lea ecx, [esi + 0x14] }
	__asm { lea ecx, [ecx + eax*8] }
	__asm { L_00b708a4: }
	__asm { cmp dword ptr [ecx], -1 }
	__asm { je L_00b708bf }
	__asm { sub ecx, 8 }
	__asm { dec eax }
	__asm { jns L_00b708a4 }
	__asm { L_00b708af: }
	__asm { push 0xed146c }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00a38a50 }
	__asm { add esp, 8 }
	__asm { L_00b708bf: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, edx }
	__asm { sub ecx, dword ptr [esi + eax*8 + 0x10] }
	__asm { lea edi, [esi + eax*8] }
	__asm { push edx }
	__asm { push esi }
	__asm { mov dword ptr [edi + 0x14], ecx }
	__asm { call fn_00b70ab0 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00b708e6 }
	__asm { mov dword ptr [edi + 0x14], 0xffffffff }
	__asm { L_00b708e6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b740c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b729e0
extern "C" __declspec(naked) void asm_00b729e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59c50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b72a38 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed21d8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b72a3a }
	__asm { L_00b72a38: }
	__asm { xor eax, eax }
	__asm { L_00b72a3a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b740c0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b72e40
extern "C" __declspec(naked) void asm_00b72e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b72ec4 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b72ec4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00405b90();
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5630();
// FUNCTION: ROBLOXSTUDIO 0x00b74190
extern "C" __declspec(naked) void asm_00b74190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00b741f1 }
	__asm { call fn_007d5630 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_00b741f1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b741dc }
	__asm { push 0x122 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b741f1 }
	__asm { L_00b741dc: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b741f1: }
	__asm { push dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00405b90 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0128d3b4[];
extern "C" void fn_00418a50();
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00b74210
extern "C" __declspec(naked) void asm_00b74210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00b7427e }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00b7427e }
	__asm { push dword ptr [g_0128d3b4] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00b74276 }
	__asm { call fn_00a35d10 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { push ebx }
	__asm { call fn_00418a50 }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b74276: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00b7427e: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00405b90();
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5710();
// FUNCTION: ROBLOXSTUDIO 0x00b74290
extern "C" __declspec(naked) void asm_00b74290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00b742f1 }
	__asm { call fn_007d5710 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_00b742f1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b742dc }
	__asm { push 0x122 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b742f1 }
	__asm { L_00b742dc: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b742f1: }
	__asm { push dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00405b90 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_00a56540();
// FUNCTION: ROBLOXSTUDIO 0x00b74310
extern "C" __declspec(naked) void asm_00b74310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00b74369 }
	__asm { call fn_00a56540 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_00b74369 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b74354 }
	__asm { push 0x122 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b74369 }
	__asm { L_00b74354: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b74369: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5550();
// FUNCTION: ROBLOXSTUDIO 0x00b74440
extern "C" __declspec(naked) void asm_00b74440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00b74499 }
	__asm { call fn_007d5550 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_00b74499 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b74484 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b74499 }
	__asm { L_00b74484: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b74499: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5710();
// FUNCTION: ROBLOXSTUDIO 0x00b744b0
extern "C" __declspec(naked) void asm_00b744b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00b74509 }
	__asm { call fn_007d5710 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_00b74509 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b744f4 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b74509 }
	__asm { L_00b744f4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b74509: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_00b09170();
// FUNCTION: ROBLOXSTUDIO 0x00b74520
extern "C" __declspec(naked) void asm_00b74520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00b74579 }
	__asm { call fn_00b09170 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_00b74579 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b74564 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b74579 }
	__asm { L_00b74564: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b74579: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}
