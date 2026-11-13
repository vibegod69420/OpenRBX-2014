// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00ef9f6c[];
extern "C" char g_01310cf8[];
extern "C" char g_01310cfc[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00c23ad0
extern "C" __declspec(naked) void asm_00c23ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61d0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ef9f6c], 0 }
	__asm { jne L_00c23b04 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c23b04: }
	__asm { push 0xc22a20 }
	__asm { push 0x1310944 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01310cfc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c23b4e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310cfc], eax }
	__asm { push 0xef9f6c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01310cf8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c23b4e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01310cf8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ef9d90[];
extern "C" char g_01310cf0[];
extern "C" char g_01310cf4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00c23b70
extern "C" __declspec(naked) void asm_00c23b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6965e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ef9d90], 0 }
	__asm { jne L_00c23ba4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c23ba4: }
	__asm { push 0xc22a70 }
	__asm { push 0x131093c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01310cf4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c23bee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310cf4], eax }
	__asm { push 0xef9d90 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01310cf0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c23bee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01310cf0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00efa7d0[];
extern "C" char g_01310d00[];
extern "C" char g_01310d04[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00c23c10
extern "C" __declspec(naked) void asm_00c23c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61e5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00efa7d0], 0 }
	__asm { jne L_00c23c44 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c23c44: }
	__asm { push 0xc22ac0 }
	__asm { push 0x131094c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01310d04] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c23c8e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310d04], eax }
	__asm { push 0xefa7d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01310d00], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c23c8e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01310d00] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_0083bf70();
// FUNCTION: ROBLOXSTUDIO 0x00c240f0
extern "C" __declspec(naked) void asm_00c240f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00c24141 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c24110 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c24112 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c24112 }
	__asm { L_00c24110: }
	__asm { mov eax, ecx }
	__asm { L_00c24112: }
	__asm { test eax, eax }
	__asm { je L_00c24141 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c24141 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c24141 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c24141 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_0083bf70 }
	__asm { L_00c24141: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00c242a0();
// FUNCTION: ROBLOXSTUDIO 0x00c243f0
extern "C" __declspec(naked) void asm_00c243f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00c24441 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c24410 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c24412 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c24412 }
	__asm { L_00c24410: }
	__asm { mov eax, ecx }
	__asm { L_00c24412: }
	__asm { test eax, eax }
	__asm { je L_00c24441 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c24441 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c24441 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c24441 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00c242a0 }
	__asm { L_00c24441: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310880[];
extern "C" void fn_004115f0();
extern "C" void fn_00c25090();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c24930
extern "C" __declspec(naked) void asm_00c24930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61f5e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0xc31250 }
	__asm { push 0x13107c4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01310880] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c24991 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310880], eax }
	__asm { mov ecx, 0x13107f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c25090 }
	__asm { push 0xe09e80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c24991: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x13107f8 }
	__asm { push 1 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00c249b8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c249b8: }
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

extern "C" char g_012f8694[];
extern "C" char g_01312428[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c24fd0
extern "C" __declspec(naked) void asm_00c24fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd62006 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xeee7a4 }
	__asm { mov dword ptr [esi + 4], 0xeee81c }
	__asm { mov dword ptr [esi + 0x18], 0xeee824 }
	__asm { mov dword ptr [esi + 0x1c], 0xeee830 }
	__asm { mov eax, dword ptr [g_012f8694] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00c25069 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f8694], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeee750 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f8568 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde8bf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c25069: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12f8568 }
	__asm { inc dword ptr [g_01312428] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8694[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c258f0
extern "C" __declspec(naked) void asm_00c258f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6201e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f8694] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c25965 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f8694], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeee750 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f8568 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde8bf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c25965: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12f8568 }
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
extern "C" void fn_00c2e190();
// FUNCTION: ROBLOXSTUDIO 0x00c28320
extern "C" __declspec(naked) void asm_00c28320()
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
	__asm { call fn_00c2e190 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c28392 }
	__asm { add esi, 5 }
	__asm { je L_00c28362 }
	__asm { add esi, -5 }
	__asm { jmp L_00c28364 }
	__asm { L_00c28362: }
	__asm { xor esi, esi }
	__asm { L_00c28364: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c28391 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c28391 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c28391: }
	__asm { pop edi }
	__asm { L_00c28392: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00c2e520();
// FUNCTION: ROBLOXSTUDIO 0x00c283b0
extern "C" __declspec(naked) void asm_00c283b0()
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
	__asm { call fn_00c2e520 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c28422 }
	__asm { add esi, 5 }
	__asm { je L_00c283f2 }
	__asm { add esi, -5 }
	__asm { jmp L_00c283f4 }
	__asm { L_00c283f2: }
	__asm { xor esi, esi }
	__asm { L_00c283f4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c28421 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c28421 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c28421: }
	__asm { pop edi }
	__asm { L_00c28422: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00c2e8b0();
// FUNCTION: ROBLOXSTUDIO 0x00c28440
extern "C" __declspec(naked) void asm_00c28440()
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
	__asm { call fn_00c2e8b0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c284b2 }
	__asm { add esi, 5 }
	__asm { je L_00c28482 }
	__asm { add esi, -5 }
	__asm { jmp L_00c28484 }
	__asm { L_00c28482: }
	__asm { xor esi, esi }
	__asm { L_00c28484: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c284b1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c284b1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c284b1: }
	__asm { pop edi }
	__asm { L_00c284b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00c2ec40();
// FUNCTION: ROBLOXSTUDIO 0x00c284d0
extern "C" __declspec(naked) void asm_00c284d0()
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
	__asm { call fn_00c2ec40 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c28542 }
	__asm { add esi, 5 }
	__asm { je L_00c28512 }
	__asm { add esi, -5 }
	__asm { jmp L_00c28514 }
	__asm { L_00c28512: }
	__asm { xor esi, esi }
	__asm { L_00c28514: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c28541 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c28541 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c28541: }
	__asm { pop edi }
	__asm { L_00c28542: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00c2efe0();
// FUNCTION: ROBLOXSTUDIO 0x00c28560
extern "C" __declspec(naked) void asm_00c28560()
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
	__asm { call fn_00c2efe0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c285d2 }
	__asm { add esi, 5 }
	__asm { je L_00c285a2 }
	__asm { add esi, -5 }
	__asm { jmp L_00c285a4 }
	__asm { L_00c285a2: }
	__asm { xor esi, esi }
	__asm { L_00c285a4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c285d1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c285d1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c285d1: }
	__asm { pop edi }
	__asm { L_00c285d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00c215d0();
// FUNCTION: ROBLOXSTUDIO 0x00c29240
extern "C" __declspec(naked) void asm_00c29240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [edi + 4] }
	__asm { lea ecx, [esi + 4] }
	__asm { cmp ecx, eax }
	__asm { je L_00c29262 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00c29262: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { lea eax, [edi + 0x24] }
	__asm { lea ecx, [esi + 0x24] }
	__asm { cmp ecx, eax }
	__asm { je L_00c29282 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00c29282: }
	__asm { lea eax, [edi + 0x3c] }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { cmp ecx, eax }
	__asm { je L_00c29296 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { call fn_00c215d0 }
	__asm { L_00c29296: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c29670
extern "C" __declspec(naked) void asm_00c29670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57a18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { push -1 }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_00c296ea }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c296ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c2b290
extern "C" __declspec(naked) void asm_00c2b290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { test eax, eax }
	__asm { jne L_00c2b2b8 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c2b2b8: }
	__asm { cmp eax, 0xaaaaaaa }
	__asm { jbe L_00c2b2ca }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00c2b2ca: }
	__asm { push edi }
	__asm { lea edi, [eax + eax*2] }
	__asm { shl edi, 3 }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c2b2f0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c2b2f0: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" void fn_00c20500();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c2c5a0
extern "C" __declspec(naked) void asm_00c2c5a0()
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
	__asm { call fn_00c20500 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00c2c5f2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c2c5f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00403540();
extern "C" void fn_00c29670();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c2c610
extern "C" __declspec(naked) void asm_00c2c610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0xc }
	__asm { lea esi, [ecx + 0x10] }
	__asm { mov ecx, esp }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00c29670 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00c2c68b }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c2c68b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00ef9f6c[];
extern "C" char g_01310bb4[];
extern "C" void fn_007cbf10();
extern "C" void fn_00c2cc50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c2cbd0
extern "C" __declspec(naked) void asm_00c2cbd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd62c4e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01310bb4] }
	__asm { test al, 1 }
	__asm { jne L_00c2cc3c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310bb4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { push dword ptr [g_00ef9f6c] }
	__asm { call fn_00c2cc50 }
	__asm { push eax }
	__asm { mov ecx, 0x1310a88 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08f50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c2cc3c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x1310a88 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00efb3e8[];
extern "C" char g_01310ce4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c2cc50
extern "C" __declspec(naked) void asm_00c2cc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd62c6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01310ce4] }
	__asm { test al, 1 }
	__asm { jne L_00c2ccbc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310ce4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00efb3e8] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1310bb8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08f60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c2ccbc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x1310bb8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310880[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_00c25090();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c2d6e0
extern "C" __declspec(naked) void asm_00c2d6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00c2d704 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00c2d704: }
	__asm { push 0xc31250 }
	__asm { push 0x13107c4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01310880] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c2d74c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310880], eax }
	__asm { mov ecx, 0x13107f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c25090 }
	__asm { push 0xe09e80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c2d74c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x13107f8 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00c242a0();
extern "C" void fn_00c2f370();
// FUNCTION: ROBLOXSTUDIO 0x00c2f500
extern "C" __declspec(naked) void asm_00c2f500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test edi, edi }
	__asm { je L_00c2f562 }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c2f51f }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c2f521 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c2f521 }
	__asm { L_00c2f51f: }
	__asm { mov eax, edi }
	__asm { L_00c2f521: }
	__asm { test eax, eax }
	__asm { je L_00c2f562 }
	__asm { push ebx }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00c2f561 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c2f561 }
	__asm { lea ecx, [ebx - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c2f561 }
	__asm { call fn_00c242a0 }
	__asm { test eax, eax }
	__asm { je L_00c2f561 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00c2f370 }
	__asm { L_00c2f561: }
	__asm { pop ebx }
	__asm { L_00c2f562: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00c23fa0();
extern "C" void fn_00c2f370();
// FUNCTION: ROBLOXSTUDIO 0x00c2f570
extern "C" __declspec(naked) void asm_00c2f570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test edi, edi }
	__asm { je L_00c2f5d2 }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c2f58f }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c2f591 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c2f591 }
	__asm { L_00c2f58f: }
	__asm { mov eax, edi }
	__asm { L_00c2f591: }
	__asm { test eax, eax }
	__asm { je L_00c2f5d2 }
	__asm { push ebx }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00c2f5d1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c2f5d1 }
	__asm { lea ecx, [ebx - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c2f5d1 }
	__asm { call fn_00c23fa0 }
	__asm { test eax, eax }
	__asm { je L_00c2f5d1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00c2f370 }
	__asm { L_00c2f5d1: }
	__asm { pop ebx }
	__asm { L_00c2f5d2: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c24650();
// FUNCTION: ROBLOXSTUDIO 0x00c2fc50
extern "C" __declspec(naked) void asm_00c2fc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c24650 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov edi, eax }
	__asm { test ecx, ecx }
	__asm { je L_00c2fc83 }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { add ecx, -0x1c }
	__asm { add ecx, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c2fc83: }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { xor ecx, ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00424f10();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00c2fed0
extern "C" __declspec(naked) void asm_00c2fed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00c2ff2c }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c2fef0 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c2fef2 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c2fef2 }
	__asm { L_00c2fef0: }
	__asm { mov eax, ecx }
	__asm { L_00c2fef2: }
	__asm { test eax, eax }
	__asm { je L_00c2ff2c }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c2ff2c }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c2ff2c }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c2ff2c }
	__asm { call fn_00424f10 }
	__asm { test eax, eax }
	__asm { je L_00c2ff2c }
	__asm { mov eax, dword ptr [eax + 0x178] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c2ff2c: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00497220();
extern "C" void fn_0084a550();
extern "C" void fn_0084a7a0();
extern "C" void fn_00c97070();
extern "C" void fn_00c9e480();
// FUNCTION: ROBLOXSTUDIO 0x00c2ff40
extern "C" __declspec(naked) void asm_00c2ff40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00497220 }
	__asm { cmp byte ptr [eax + 0xdc], 0 }
	__asm { jne L_00c2ff63 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_0084a7a0 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c2ff63: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00c9e480 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00c2ff86 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_0084a550 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c2ff86: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00c97070 }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00424f10();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00855ed0();
// FUNCTION: ROBLOXSTUDIO 0x00c30dc0
extern "C" __declspec(naked) void asm_00c30dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00c30e1c }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c30de0 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c30de2 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c30de2 }
	__asm { L_00c30de0: }
	__asm { mov eax, ecx }
	__asm { L_00c30de2: }
	__asm { test eax, eax }
	__asm { je L_00c30e1c }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c30e1c }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c30e1c }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c30e1c }
	__asm { call fn_00424f10 }
	__asm { test eax, eax }
	__asm { je L_00c30e1c }
	__asm { mov ecx, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00855ed0 }
	__asm { L_00c30e1c: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310880[];
extern "C" void fn_00c25090();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c31250
extern "C" __declspec(naked) void asm_00c31250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01310880] }
	__asm { test al, 1 }
	__asm { jne L_00c31297 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310880], eax }
	__asm { mov ecx, 0x13107f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c25090 }
	__asm { push 0xe09e80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c31297: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310910[];
extern "C" void fn_00c251d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c312b0
extern "C" __declspec(naked) void asm_00c312b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd64fee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01310910] }
	__asm { test al, 1 }
	__asm { jne L_00c312f7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310910], eax }
	__asm { mov ecx, 0x1310888 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c251d0 }
	__asm { push 0xe09e90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c312f7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005451a0();
extern "C" void fn_007b4a80();
extern "C" void fn_007b5910();
extern "C" void fn_007cd560();
extern "C" void fn_00891b30();
extern "C" void fn_00c2bee0();
// FUNCTION: ROBLOXSTUDIO 0x00c33ad0
extern "C" __declspec(naked) void asm_00c33ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov eax, ecx }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_00c2bee0 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00c33b2f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx] }
	__asm { test edi, edi }
	__asm { je L_00c33b2e }
	__asm { add edi, 0x1c }
	__asm { je L_00c33b2e }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_005451a0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c33b2e }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c33b2e }
	__asm { lea eax, [ecx + 0x48] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { mov byte ptr [ebp + 0xb], 1 }
	__asm { call fn_00891b30 }
	__asm { lea ecx, [eax + 0x18] }
	__asm { call fn_007b5910 }
	__asm { L_00c33b2e: }
	__asm { pop edi }
	__asm { L_00c33b2f: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push ebx }
	__asm { call fn_007b4a80 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00c2b490();
extern "C" void fn_00c2d440();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c349a0
extern "C" __declspec(naked) void asm_00c349a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { cmp dword ptr [esi + 8], eax }
	__asm { ja L_00c349b7 }
	__asm { push 1 }
	__asm { call fn_00c2b490 }
	__asm { L_00c349b7: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { dec ecx }
	__asm { and dword ptr [esi + 0xc], ecx }
	__asm { add eax, dword ptr [esi + 0xc] }
	__asm { and ecx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea edi, [ecx*4] }
	__asm { cmp dword ptr [edi + eax], 0 }
	__asm { jne L_00c349f2 }
	__asm { push 0x44 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_00c349ec }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00c349ec: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + eax], ecx }
	__asm { L_00c349f2: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push dword ptr [edi + eax] }
	__asm { call fn_00c2d440 }
	__asm { inc dword ptr [esi + 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00825550();
// FUNCTION: ROBLOXSTUDIO 0x00c34a10
extern "C" __declspec(naked) void asm_00c34a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_00c34a52 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_00c34a52 }
	__asm { sub edi, ecx }
	__asm { sar edi, 2 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00c34a3a }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00825550 }
	__asm { L_00c34a3a: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00c34a6b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c34a52: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00c34a60 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00825550 }
	__asm { L_00c34a60: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00c34a6b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00c34a6b: }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007cb550();
extern "C" void fn_00c6d460();
extern "C" void fn_00c6d780();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c34e90
extern "C" __declspec(naked) void asm_00c34e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3bd18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6d780 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call fn_007cb550 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c6d460 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00c34f03 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c34f03: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov edx, edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013107e4[];
extern "C" char g_013107e8[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c35b50
extern "C" __declspec(naked) void asm_00c35b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6346e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013107e8] }
	__asm { test al, 1 }
	__asm { jne L_00c35bc3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013107e8], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c35bae }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013107e4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c35bae: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013107e4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c35bc3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013107e4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013107dc[];
extern "C" char g_013107e0[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c35be0
extern "C" __declspec(naked) void asm_00c35be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6348e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013107e0] }
	__asm { test al, 1 }
	__asm { jne L_00c35c53 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013107e0], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c35c3e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013107dc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c35c3e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013107dc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c35c53: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013107dc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310d58[];
extern "C" char g_01310d5c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c35c70
extern "C" __declspec(naked) void asm_00c35c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd634ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01310d5c] }
	__asm { test al, 1 }
	__asm { jne L_00c35ce3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310d5c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c35cce }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01310d58], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c35cce: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01310d58], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c35ce3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01310d58] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310d60[];
extern "C" char g_01310d64[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c35d00
extern "C" __declspec(naked) void asm_00c35d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd634ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01310d64] }
	__asm { test al, 1 }
	__asm { jne L_00c35d73 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310d64], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c35d5e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01310d60], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c35d5e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01310d60], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c35d73: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01310d60] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013107d4[];
extern "C" char g_013107d8[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c35d90
extern "C" __declspec(naked) void asm_00c35d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd634ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013107d8] }
	__asm { test al, 1 }
	__asm { jne L_00c35e03 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013107d8], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c35dee }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013107d4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c35dee: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013107d4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c35e03: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013107d4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013107ec[];
extern "C" char g_013107f0[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c35e20
extern "C" __declspec(naked) void asm_00c35e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6350e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013107f0] }
	__asm { test al, 1 }
	__asm { jne L_00c35e93 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013107f0], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c35e7e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013107ec], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c35e7e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013107ec], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c35e93: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013107ec] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310d68[];
extern "C" char g_01310d6c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c35eb0
extern "C" __declspec(naked) void asm_00c35eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6352e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01310d6c] }
	__asm { test al, 1 }
	__asm { jne L_00c35f23 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310d6c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c35f0e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01310d68], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c35f0e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01310d68], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c35f23: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01310d68] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310d70[];
extern "C" char g_01310d74[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c35f40
extern "C" __declspec(naked) void asm_00c35f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6354e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01310d74] }
	__asm { test al, 1 }
	__asm { jne L_00c35fb3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310d74], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c35f9e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01310d70], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c35f9e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01310d70], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c35fb3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01310d70] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310d78[];
extern "C" char g_01310d7c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c35fd0
extern "C" __declspec(naked) void asm_00c35fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6356e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01310d7c] }
	__asm { test al, 1 }
	__asm { jne L_00c36043 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310d7c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c3602e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01310d78], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c3602e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01310d78], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c36043: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01310d78] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310924[];
extern "C" char g_01310928[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c36060
extern "C" __declspec(naked) void asm_00c36060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6358e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01310928] }
	__asm { test al, 1 }
	__asm { jne L_00c360d3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310928], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c360be }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01310924], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c360be: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01310924], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c360d3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01310924] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131092c[];
extern "C" char g_01310930[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c360f0
extern "C" __declspec(naked) void asm_00c360f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd635ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01310930] }
	__asm { test al, 1 }
	__asm { jne L_00c36163 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310930], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c3614e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0131092c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c3614e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131092c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c36163: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131092c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310880[];
extern "C" void fn_004115f0();
extern "C" void fn_00c25090();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c366a0
extern "C" __declspec(naked) void asm_00c366a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc31250 }
	__asm { push 0x13107c4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01310880] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c366f9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310880], eax }
	__asm { mov ecx, 0x13107f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c25090 }
	__asm { push 0xe09e80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c366f9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x13107f8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e100ec[];
extern "C" char g_01310dc8[];
extern "C" void fn_00c37640();
// FUNCTION: ROBLOXSTUDIO 0x00c376f0
extern "C" __declspec(naked) void asm_00c376f0()
{
	__asm { L_00c376f0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0x1169960 }
	__asm { push 0xcf6e22 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { add esp, -0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00c37763 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x80000003 }
	__asm { call dword ptr [g_00e100ec] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_00c3775c }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push eax }
	__asm { call L_00c376f0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, 1 }
	__asm { ret }
	__asm { mov esp, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c3775c: }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { jmp L_00c37772 }
	__asm { jmp L_00c37772 }
	__asm { L_00c37763: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [g_01310dc8] }
	__asm { call fn_00c37640 }
	__asm { L_00c37772: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c37950
extern "C" __declspec(naked) void asm_00c37950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { xor eax, eax }
	__asm { test edx, edx }
	__asm { je L_00c37961 }
	__asm { cmp edx, dword ptr [ebp + 0x14] }
	__asm { jbe L_00c37966 }
	__asm { L_00c37961: }
	__asm { mov eax, 0x80070057 }
	__asm { L_00c37966: }
	__asm { test eax, eax }
	__asm { js L_00c379ad }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { mov ecx, edx }
	__asm { test edx, edx }
	__asm { je L_00c37985 }
	__asm { L_00c37976: }
	__asm { cmp byte ptr [eax], 0 }
	__asm { je L_00c37981 }
	__asm { inc eax }
	__asm { dec ecx }
	__asm { jne L_00c37976 }
	__asm { jmp L_00c37985 }
	__asm { L_00c37981: }
	__asm { test ecx, ecx }
	__asm { jne L_00c3798a }
	__asm { L_00c37985: }
	__asm { mov esi, 0x80070057 }
	__asm { L_00c3798a: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00c379a6 }
	__asm { test esi, esi }
	__asm { js L_00c379a0 }
	__asm { sub edx, ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00c379a0: }
	__asm { mov dword ptr [eax], 0 }
	__asm { L_00c379a6: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00c379ad: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx], 0 }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c394e0
extern "C" __declspec(naked) void asm_00c394e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd638e0 }
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
	__asm { je L_00c39538 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef2584 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c3953a }
	__asm { L_00c39538: }
	__asm { xor eax, eax }
	__asm { L_00c3953a: }
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

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c39610
extern "C" __declspec(naked) void asm_00c39610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd638f0 }
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
	__asm { je L_00c39668 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef25e4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c3966a }
	__asm { L_00c39668: }
	__asm { xor eax, eax }
	__asm { L_00c3966a: }
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
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00c3cfc0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c3a810
extern "C" __declspec(naked) void asm_00c3a810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd63900 }
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
	__asm { je L_00c3a868 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef25c4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c3a86a }
	__asm { L_00c3a868: }
	__asm { xor eax, eax }
	__asm { L_00c3a86a: }
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
	__asm { call fn_00c3cfc0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_013122a4[];
extern "C" char g_013122a8[];
extern "C" char g_013122ac[];
extern "C" char g_013122b0[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c3ad20
extern "C" __declspec(naked) void asm_00c3ad20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_013122b0] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c3ad62 }
	__asm { or eax, 1 }
	__asm { push 0xe0c1b0 }
	__asm { mov dword ptr [g_013122b0], eax }
	__asm { mov dword ptr [g_013122a4], 0x129a1c4 }
	__asm { mov dword ptr [g_013122ac], 0x40d810 }
	__asm { mov dword ptr [g_013122a8], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c3ad62: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x13122a4 }
	__asm { jne L_00c3ad7b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c3ad7b: }
	__asm { test ecx, ecx }
	__asm { je L_00c3ad91 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00c3ad91: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00c3ad9f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00c3ad9f: }
	__asm { mov dword ptr [esi], 0x13122a4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01312294[];
extern "C" char g_01312298[];
extern "C" char g_0131229c[];
extern "C" char g_013122a0[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c3adb0
extern "C" __declspec(naked) void asm_00c3adb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_013122a0] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c3adf2 }
	__asm { or eax, 1 }
	__asm { push 0xe0c1c0 }
	__asm { mov dword ptr [g_013122a0], eax }
	__asm { mov dword ptr [g_01312294], 0x129a190 }
	__asm { mov dword ptr [g_0131229c], 0x40d810 }
	__asm { mov dword ptr [g_01312298], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c3adf2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x1312294 }
	__asm { jne L_00c3ae0b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c3ae0b: }
	__asm { test ecx, ecx }
	__asm { je L_00c3ae21 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00c3ae21: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00c3ae2f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00c3ae2f: }
	__asm { mov dword ptr [esi], 0x1312294 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x00c3b1f0
extern "C" __declspec(naked) void asm_00c3b1f0()
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
	__asm { je L_00c3b219 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00c3b21e }
	__asm { L_00c3b219: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00c3b21e: }
	__asm { cmp ecx, 0x129a190 }
	__asm { je L_00c3b267 }
	__asm { test eax, eax }
	__asm { je L_00c3b22e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00c3b233 }
	__asm { L_00c3b22e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00c3b233: }
	__asm { push 0x129a190 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00c3b267 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00c3b267: }
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
// FUNCTION: ROBLOXSTUDIO 0x00c3b280
extern "C" __declspec(naked) void asm_00c3b280()
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
	__asm { je L_00c3b2a9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00c3b2ae }
	__asm { L_00c3b2a9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00c3b2ae: }
	__asm { cmp ecx, 0x129a1c4 }
	__asm { je L_00c3b2f7 }
	__asm { test eax, eax }
	__asm { je L_00c3b2be }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00c3b2c3 }
	__asm { L_00c3b2be: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00c3b2c3: }
	__asm { push 0x129a1c4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00c3b2f7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00c3b2f7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_00b1a8d0();
extern "C" void fn_00c394e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c3d900
extern "C" __declspec(naked) void asm_00c3d900()
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
	__asm { push 0xc0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c3d94e }
	__asm { mov ecx, eax }
	__asm { call fn_00b1a8d0 }
	__asm { mov esi, eax }
	__asm { jmp L_00c3d950 }
	__asm { L_00c3d94e: }
	__asm { xor esi, esi }
	__asm { L_00c3d950: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00c394e0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00c3d981 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00c3d981 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00c3d981: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_0083cde0();
// FUNCTION: ROBLOXSTUDIO 0x00c3dd60
extern "C" __declspec(naked) void asm_00c3dd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00c3ddb1 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c3dd80 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c3dd82 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c3dd82 }
	__asm { L_00c3dd80: }
	__asm { mov eax, ecx }
	__asm { L_00c3dd82: }
	__asm { test eax, eax }
	__asm { je L_00c3ddb1 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c3ddb1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c3ddb1 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c3ddb1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_0083cde0 }
	__asm { L_00c3ddb1: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_0083d5c0();
// FUNCTION: ROBLOXSTUDIO 0x00c3ddc0
extern "C" __declspec(naked) void asm_00c3ddc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00c3de11 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c3dde0 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c3dde2 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c3dde2 }
	__asm { L_00c3dde0: }
	__asm { mov eax, ecx }
	__asm { L_00c3dde2: }
	__asm { test eax, eax }
	__asm { je L_00c3de11 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c3de11 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c3de11 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c3de11 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_0083d5c0 }
	__asm { L_00c3de11: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_0083d860();
// FUNCTION: ROBLOXSTUDIO 0x00c3de20
extern "C" __declspec(naked) void asm_00c3de20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00c3de71 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c3de40 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c3de42 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c3de42 }
	__asm { L_00c3de40: }
	__asm { mov eax, ecx }
	__asm { L_00c3de42: }
	__asm { test eax, eax }
	__asm { je L_00c3de71 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c3de71 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c3de71 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c3de71 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_0083d860 }
	__asm { L_00c3de71: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_0083db00();
// FUNCTION: ROBLOXSTUDIO 0x00c3de80
extern "C" __declspec(naked) void asm_00c3de80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00c3ded1 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c3dea0 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c3dea2 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c3dea2 }
	__asm { L_00c3dea0: }
	__asm { mov eax, ecx }
	__asm { L_00c3dea2: }
	__asm { test eax, eax }
	__asm { je L_00c3ded1 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c3ded1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c3ded1 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c3ded1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_0083db00 }
	__asm { L_00c3ded1: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013121b8[];
extern "C" void fn_004115f0();
extern "C" void fn_00c3fe30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c3e970
extern "C" __declspec(naked) void asm_00c3e970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd64eee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0xc4aed0 }
	__asm { push 0x1312110 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013121b8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c3e9d1 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013121b8], eax }
	__asm { mov ecx, 0x1312130 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c3fe30 }
	__asm { push 0xe0c1a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c3e9d1: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x1312130 }
	__asm { push 1 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00c3e9f8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c3e9f8: }
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

extern "C" char g_01312424[];
extern "C" char g_0131f784[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c3fc40
extern "C" __declspec(naked) void asm_00c3fc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd63cb6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xeefc2c }
	__asm { mov dword ptr [esi + 4], 0xeefca4 }
	__asm { mov dword ptr [esi + 0x18], 0xeefcac }
	__asm { mov dword ptr [esi + 0x1c], 0xeefcb8 }
	__asm { mov eax, dword ptr [g_0131f784] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00c3fcd9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f784], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6e5f4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x13 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131f788 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddee90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c3fcd9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131f788 }
	__asm { inc dword ptr [g_01312424] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131f784[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c40bc0
extern "C" __declspec(naked) void asm_00c40bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4e06e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131f784] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c40c35 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f784], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6e5f4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x13 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131f788 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddee90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c40c35: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x131f788 }
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
extern "C" void fn_00c46860();
// FUNCTION: ROBLOXSTUDIO 0x00c42bd0
extern "C" __declspec(naked) void asm_00c42bd0()
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
	__asm { call fn_00c46860 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c42c42 }
	__asm { add esi, 5 }
	__asm { je L_00c42c12 }
	__asm { add esi, -5 }
	__asm { jmp L_00c42c14 }
	__asm { L_00c42c12: }
	__asm { xor esi, esi }
	__asm { L_00c42c14: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c42c41 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c42c41 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c42c41: }
	__asm { pop edi }
	__asm { L_00c42c42: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00c46bf0();
// FUNCTION: ROBLOXSTUDIO 0x00c42c60
extern "C" __declspec(naked) void asm_00c42c60()
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
	__asm { call fn_00c46bf0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c42cd2 }
	__asm { add esi, 5 }
	__asm { je L_00c42ca2 }
	__asm { add esi, -5 }
	__asm { jmp L_00c42ca4 }
	__asm { L_00c42ca2: }
	__asm { xor esi, esi }
	__asm { L_00c42ca4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c42cd1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c42cd1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c42cd1: }
	__asm { pop edi }
	__asm { L_00c42cd2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00c46f80();
// FUNCTION: ROBLOXSTUDIO 0x00c42cf0
extern "C" __declspec(naked) void asm_00c42cf0()
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
	__asm { call fn_00c46f80 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c42d62 }
	__asm { add esi, 5 }
	__asm { je L_00c42d32 }
	__asm { add esi, -5 }
	__asm { jmp L_00c42d34 }
	__asm { L_00c42d32: }
	__asm { xor esi, esi }
	__asm { L_00c42d34: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c42d61 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c42d61 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c42d61: }
	__asm { pop edi }
	__asm { L_00c42d62: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00c47310();
// FUNCTION: ROBLOXSTUDIO 0x00c42d80
extern "C" __declspec(naked) void asm_00c42d80()
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
	__asm { call fn_00c47310 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c42df2 }
	__asm { add esi, 5 }
	__asm { je L_00c42dc2 }
	__asm { add esi, -5 }
	__asm { jmp L_00c42dc4 }
	__asm { L_00c42dc2: }
	__asm { xor esi, esi }
	__asm { L_00c42dc4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c42df1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c42df1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c42df1: }
	__asm { pop edi }
	__asm { L_00c42df2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00c476a0();
// FUNCTION: ROBLOXSTUDIO 0x00c42e10
extern "C" __declspec(naked) void asm_00c42e10()
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
	__asm { call fn_00c476a0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c42e82 }
	__asm { add esi, 5 }
	__asm { je L_00c42e52 }
	__asm { add esi, -5 }
	__asm { jmp L_00c42e54 }
	__asm { L_00c42e52: }
	__asm { xor esi, esi }
	__asm { L_00c42e54: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c42e81 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c42e81 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c42e81: }
	__asm { pop edi }
	__asm { L_00c42e82: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00c43540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c44e60
extern "C" __declspec(naked) void asm_00c44e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push -1 }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c43540 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00c44ed5 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c44ed5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_00c3b050();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c44ef0
extern "C" __declspec(naked) void asm_00c44ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57a18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { add ecx, 0x10 }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c3b050 }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_00c44f4e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c44f4e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00403540();
extern "C" void fn_00c43750();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c44f60
extern "C" __declspec(naked) void asm_00c44f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57a18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c43750 }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_00c44fc5 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c44fc5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x00c44fe0
extern "C" __declspec(naked) void asm_00c44fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0e688 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { sub esp, 0xc }
	__asm { test edx, edx }
	__asm { jne L_00c4502d }
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
	__asm { L_00c4502d: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ecx + 0x18] }
	__asm { push dword ptr [ebp + 8] }
	__asm { and edx, 0xfffffffe }
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

extern "C" char g_00efb99c[];
extern "C" char g_013123e4[];
extern "C" void fn_007cbf10();
extern "C" void fn_00c2ccd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c45220
extern "C" __declspec(naked) void asm_00c45220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6482e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_013123e4] }
	__asm { test al, 1 }
	__asm { jne L_00c4528c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013123e4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { push dword ptr [g_00efb99c] }
	__asm { call fn_00c2ccd0 }
	__asm { push eax }
	__asm { mov ecx, 0x13122b8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0a7c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c4528c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x13122b8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013121b8[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_00c3fe30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c46140
extern "C" __declspec(naked) void asm_00c46140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd64eee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00c46164 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00c46164: }
	__asm { push 0xc4aed0 }
	__asm { push 0x1312110 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013121b8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c461ac }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013121b8], eax }
	__asm { mov ecx, 0x1312130 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c3fe30 }
	__asm { push 0xe0c1a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c461ac: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1312130 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00972c50();
extern "C" void fn_00b1c980();
// FUNCTION: ROBLOXSTUDIO 0x00c48990
extern "C" __declspec(naked) void asm_00c48990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push 0 }
	__asm { lea eax, [ebx + 0x34] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00b1c980 }
	__asm { fstp dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_00c489bc }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00c489be }
	__asm { L_00c489bc: }
	__asm { xor edi, edi }
	__asm { L_00c489be: }
	__asm { push 0 }
	__asm { lea eax, [ebx + 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00972c50 }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebx + 0x2c] }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { fld dword ptr [eax] }
	__asm { mov esi, dword ptr [ebx + 0x28] }
	__asm { add esp, 4 }
	__asm { mov ecx, esp }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { lea ecx, [edi + edx] }
	__asm { call esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c3e3c0();
// FUNCTION: ROBLOXSTUDIO 0x00c48a80
extern "C" __declspec(naked) void asm_00c48a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c3e3c0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov edi, eax }
	__asm { test ecx, ecx }
	__asm { je L_00c48ab3 }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { add ecx, -0x1c }
	__asm { add ecx, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c48ab3: }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { xor ecx, ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00c43800();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c49a80
extern "C" __declspec(naked) void asm_00c49a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49f08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { push -1 }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { add ecx, dword ptr [ebp + 8] }
	__asm { call fn_00c43800 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00c49af8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c49af8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c49fc0
extern "C" __declspec(naked) void asm_00c49fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49f08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00c4a02a }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { lea ecx, [esi + 8] }
	__asm { call dword ptr [eax] }
	__asm { L_00c4a02a: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00c4a03b }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c4a03b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312104[];
extern "C" void fn_00c68890();
extern "C" void fn_00c72ac0();
// FUNCTION: ROBLOXSTUDIO 0x00c4a920
extern "C" __declspec(naked) void asm_00c4a920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd64ace }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ecx + 0x100] }
	__asm { test eax, eax }
	__asm { jne L_00c4a970 }
	__asm { mov eax, dword ptr [g_01312104] }
	__asm { test al, 1 }
	__asm { jne L_00c4a96b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312104], eax }
	__asm { mov ecx, 0x13120f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c68890 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c4a96b: }
	__asm { mov eax, 0x13120f0 }
	__asm { L_00c4a970: }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c72ac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_008ef020();
extern "C" void fn_00c3de80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c4ad80
extern "C" __declspec(naked) void asm_00c4ad80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd57a18 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00c4ade2 }
	__asm { push ecx }
	__asm { call fn_00c3de80 }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_00c4ade2 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_008ef020 }
	__asm { L_00c4ade2: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_00c4adf3 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c4adf3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_01312248[];
extern "C" void fn_00c3fd00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c4ae70
extern "C" __declspec(naked) void asm_00c4ae70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6500e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01312248] }
	__asm { test al, 1 }
	__asm { jne L_00c4aeb7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312248], eax }
	__asm { mov ecx, 0x13121c0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c3fd00 }
	__asm { push 0xe0c190 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c4aeb7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013121b8[];
extern "C" void fn_00c3fe30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c4aed0
extern "C" __declspec(naked) void asm_00c4aed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd64eee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013121b8] }
	__asm { test al, 1 }
	__asm { jne L_00c4af17 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013121b8], eax }
	__asm { mov ecx, 0x1312130 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c3fe30 }
	__asm { push 0xe0c1a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c4af17: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c4b580
extern "C" __declspec(naked) void asm_00c4b580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd64af8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { lea eax, [ebp + 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00c4b5c9 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c4b5c9: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_00c4b5ec }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c4b5ec: }
	__asm { cmp dword ptr [ebp + 0x50], 0x10 }
	__asm { mov dword ptr [ebp + 0x38], 0xf }
	__asm { mov dword ptr [ebp + 0x34], 0 }
	__asm { mov byte ptr [ebp + 0x24], 0 }
	__asm { jb L_00c4b60f }
	__asm { push dword ptr [ebp + 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c4b60f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00c49700();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c4f090
extern "C" __declspec(naked) void asm_00c4f090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57a18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, 0x13120a4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00c49700 }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_00c4f0f8 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c4f0f8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006c54a0();
extern "C" void fn_00c307f0();
// FUNCTION: ROBLOXSTUDIO 0x00c4f590
extern "C" __declspec(naked) void asm_00c4f590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00c4f5e7 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c307f0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_00c4f5e7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c4f5d2 }
	__asm { push 0x3b3 }
	__asm { push 0xef0d84 }
	__asm { push 0xef1398 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c4f5e7 }
	__asm { L_00c4f5d2: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xef13c0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c4f5e7: }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_006c54a0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x1d0], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x1d4], eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" char g_012fc979[];
extern "C" void fn_006b8a90();
extern "C" void fn_00c2bee0();
extern "C" void fn_00c51200();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c4f670
extern "C" __declspec(naked) void asm_00c4f670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00c4f6b2 }
	__asm { mov al, byte ptr [g_012fc979] }
	__asm { test al, al }
	__asm { je L_00c4f6a4 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xef1670 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00c4f6a4: }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00c51200 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c4f6b2: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xef1634 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00c23fa0();
extern "C" void fn_00c3dee0();
extern "C" void fn_00caa1d0();
// FUNCTION: ROBLOXSTUDIO 0x00c4f930
extern "C" __declspec(naked) void asm_00c4f930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test ecx, ecx }
	__asm { je L_00c4f995 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c4f94c }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c4f94e }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c4f94e }
	__asm { L_00c4f94c: }
	__asm { mov eax, ecx }
	__asm { L_00c4f94e: }
	__asm { test eax, eax }
	__asm { je L_00c4f995 }
	__asm { push edi }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c4f994 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c4f994 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c4f994 }
	__asm { call fn_00c23fa0 }
	__asm { test eax, eax }
	__asm { je L_00c4f994 }
	__asm { mov ecx, eax }
	__asm { call fn_00c3dee0 }
	__asm { test eax, eax }
	__asm { je L_00c4f994 }
	__asm { pop edi }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_00caa1d0 }
	__asm { L_00c4f994: }
	__asm { pop edi }
	__asm { L_00c4f995: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00c23fa0();
extern "C" void fn_00c3dee0();
extern "C" void fn_00caa1f0();
// FUNCTION: ROBLOXSTUDIO 0x00c4f9a0
extern "C" __declspec(naked) void asm_00c4f9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test ecx, ecx }
	__asm { je L_00c4fa05 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c4f9bc }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c4f9be }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c4f9be }
	__asm { L_00c4f9bc: }
	__asm { mov eax, ecx }
	__asm { L_00c4f9be: }
	__asm { test eax, eax }
	__asm { je L_00c4fa05 }
	__asm { push edi }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c4fa04 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c4fa04 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c4fa04 }
	__asm { call fn_00c23fa0 }
	__asm { test eax, eax }
	__asm { je L_00c4fa04 }
	__asm { mov ecx, eax }
	__asm { call fn_00c3dee0 }
	__asm { test eax, eax }
	__asm { je L_00c4fa04 }
	__asm { pop edi }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_00caa1f0 }
	__asm { L_00c4fa04: }
	__asm { pop edi }
	__asm { L_00c4fa05: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00b21eb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c4fce0
extern "C" __declspec(naked) void asm_00c4fce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push esi }
	__asm { mov ecx, 0x1311a10 }
	__asm { call fn_00b21eb0 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00c4fd42 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c4fd42: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_01312120[];
extern "C" char g_01312124[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c500b0
extern "C" __declspec(naked) void asm_00c500b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd64d5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01312124] }
	__asm { test al, 1 }
	__asm { jne L_00c50123 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312124], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c5010e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01312120], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c5010e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01312120], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c50123: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01312120] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131224c[];
extern "C" char g_01312250[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c50140
extern "C" __declspec(naked) void asm_00c50140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd64d7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01312250] }
	__asm { test al, 1 }
	__asm { jne L_00c501b3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312250], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c5019e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0131224c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c5019e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131224c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c501b3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131224c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312264[];
extern "C" char g_01312268[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c501d0
extern "C" __declspec(naked) void asm_00c501d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd64d9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01312268] }
	__asm { test al, 1 }
	__asm { jne L_00c50243 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312268], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c5022e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01312264], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c5022e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01312264], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c50243: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01312264] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00403540();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00c51630
extern "C" __declspec(naked) void asm_00c51630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { cmp dword ptr [ebx + 0xc4], 0x10 }
	__asm { lea esi, [ebx + 0xb0] }
	__asm { push edi }
	__asm { jb L_00c5164b }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_00c5164d }
	__asm { L_00c5164b: }
	__asm { mov eax, esi }
	__asm { L_00c5164d: }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, edi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { je L_00c51680 }
	__asm { cmp esi, edi }
	__asm { je L_00c51674 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_00c51674: }
	__asm { push 0x1311d18 }
	__asm { mov ecx, ebx }
	__asm { call fn_007b4f50 }
	__asm { L_00c51680: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00af3d70();
extern "C" void fn_00c3dd60();
// FUNCTION: ROBLOXSTUDIO 0x00c51ac0
extern "C" __declspec(naked) void asm_00c51ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp eax, dword ptr [esi + 0xf4] }
	__asm { je L_00c51b44 }
	__asm { cmp eax, 0xff }
	__asm { ja L_00c51b44 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0xf4], eax }
	__asm { call fn_00c3dd60 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c51afe }
	__asm { push dword ptr [esi + 0xf4] }
	__asm { mov ecx, eax }
	__asm { call fn_00af3d70 }
	__asm { mov dword ptr [esi + 0xf4], eax }
	__asm { L_00c51afe: }
	__asm { cmp dword ptr [esi + 0xf4], 0x80 }
	__asm { jl L_00c51b1c }
	__asm { cmp byte ptr [esi + 0xf0], 1 }
	__asm { je L_00c51b38 }
	__asm { mov byte ptr [esi + 0xf0], 1 }
	__asm { jmp L_00c51b2c }
	__asm { L_00c51b1c: }
	__asm { cmp byte ptr [esi + 0xf0], 0 }
	__asm { je L_00c51b38 }
	__asm { mov byte ptr [esi + 0xf0], 0 }
	__asm { L_00c51b2c: }
	__asm { push 0x1311a48 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00c51b38: }
	__asm { push 0x1311250 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00c51b44: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10518[];
extern "C" void fn_00cf67ec();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00c51b50
extern "C" __declspec(naked) void asm_00c51b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00c51b7d }
	__asm { push 0 }
	__asm { push 0x12d1e20 }
	__asm { push 0x12bc2e4 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { jne L_00c51b7f }
	__asm { jmp L_00c51b98 }
	__asm { L_00c51b7d: }
	__asm { xor eax, eax }
	__asm { L_00c51b7f: }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c51b98: }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { call dword ptr [g_00e10518] }
	__asm { push 0x1179e30 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" void fn_007b4f50();
extern "C" void fn_0097efd0();
extern "C" void fn_0097f090();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c51de0
extern "C" __declspec(naked) void asm_00c51de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp edi, dword ptr [esi + 0xcc] }
	__asm { je L_00c51e28 }
	__asm { call fn_0097efd0 }
	__asm { push 4 }
	__asm { push dword ptr [eax] }
	__asm { call fn_0097f090 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00c51e30 }
	__asm { push 0x1310ff4 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0xcc], edi }
	__asm { call fn_007b4f50 }
	__asm { push 0x13111b4 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00c51e28: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c51e30: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 8], 0xf12f2d }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_01312dac[];
extern "C" char g_01312db0[];
extern "C" char g_01312db4[];
extern "C" char g_01312db8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c52420
extern "C" __declspec(naked) void asm_00c52420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_01312db8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c52462 }
	__asm { or eax, 1 }
	__asm { push 0xe0c4b0 }
	__asm { mov dword ptr [g_01312db8], eax }
	__asm { mov dword ptr [g_01312dac], 0x12a125c }
	__asm { mov dword ptr [g_01312db4], 0x40d810 }
	__asm { mov dword ptr [g_01312db0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c52462: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x1312dac }
	__asm { jne L_00c5247b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c5247b: }
	__asm { test ecx, ecx }
	__asm { je L_00c52491 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00c52491: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00c5249f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00c5249f: }
	__asm { mov dword ptr [esi], 0x1312dac }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01312d8c[];
extern "C" char g_01312d90[];
extern "C" char g_01312d94[];
extern "C" char g_01312d98[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c524b0
extern "C" __declspec(naked) void asm_00c524b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_01312d98] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c524f2 }
	__asm { or eax, 1 }
	__asm { push 0xe0c4c0 }
	__asm { mov dword ptr [g_01312d98], eax }
	__asm { mov dword ptr [g_01312d8c], 0x12a1218 }
	__asm { mov dword ptr [g_01312d94], 0x40d810 }
	__asm { mov dword ptr [g_01312d90], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c524f2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x1312d8c }
	__asm { jne L_00c5250b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c5250b: }
	__asm { test ecx, ecx }
	__asm { je L_00c52521 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00c52521: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00c5252f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00c5252f: }
	__asm { mov dword ptr [esi], 0x1312d8c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01312d9c[];
extern "C" char g_01312da0[];
extern "C" char g_01312da4[];
extern "C" char g_01312da8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c52540
extern "C" __declspec(naked) void asm_00c52540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_01312da8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c52582 }
	__asm { or eax, 1 }
	__asm { push 0xe0c4d0 }
	__asm { mov dword ptr [g_01312da8], eax }
	__asm { mov dword ptr [g_01312d9c], 0x12a1238 }
	__asm { mov dword ptr [g_01312da4], 0x40d810 }
	__asm { mov dword ptr [g_01312da0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c52582: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x1312d9c }
	__asm { jne L_00c5259b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c5259b: }
	__asm { test ecx, ecx }
	__asm { je L_00c525b1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00c525b1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00c525bf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00c525bf: }
	__asm { mov dword ptr [esi], 0x1312d9c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01312dcc[];
extern "C" char g_01312dd0[];
extern "C" char g_01312dd4[];
extern "C" char g_01312dd8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c525d0
extern "C" __declspec(naked) void asm_00c525d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_01312dd8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c52612 }
	__asm { or eax, 1 }
	__asm { push 0xe0c4e0 }
	__asm { mov dword ptr [g_01312dd8], eax }
	__asm { mov dword ptr [g_01312dcc], 0x12a12bc }
	__asm { mov dword ptr [g_01312dd4], 0x40d810 }
	__asm { mov dword ptr [g_01312dd0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c52612: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x1312dcc }
	__asm { jne L_00c5262b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c5262b: }
	__asm { test ecx, ecx }
	__asm { je L_00c52641 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00c52641: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00c5264f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00c5264f: }
	__asm { mov dword ptr [esi], 0x1312dcc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01312dbc[];
extern "C" char g_01312dc0[];
extern "C" char g_01312dc4[];
extern "C" char g_01312dc8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c52660
extern "C" __declspec(naked) void asm_00c52660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_01312dc8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c526a2 }
	__asm { or eax, 1 }
	__asm { push 0xe0c4f0 }
	__asm { mov dword ptr [g_01312dc8], eax }
	__asm { mov dword ptr [g_01312dbc], 0x12a1284 }
	__asm { mov dword ptr [g_01312dc4], 0x40d810 }
	__asm { mov dword ptr [g_01312dc0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c526a2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x1312dbc }
	__asm { jne L_00c526bb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c526bb: }
	__asm { test ecx, ecx }
	__asm { je L_00c526d1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00c526d1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00c526df }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00c526df: }
	__asm { mov dword ptr [esi], 0x1312dbc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x00c526f0
extern "C" __declspec(naked) void asm_00c526f0()
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
	__asm { je L_00c52719 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00c5271e }
	__asm { L_00c52719: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00c5271e: }
	__asm { cmp ecx, 0x12a1218 }
	__asm { je L_00c52767 }
	__asm { test eax, eax }
	__asm { je L_00c5272e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00c52733 }
	__asm { L_00c5272e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00c52733: }
	__asm { push 0x12a1218 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00c52767 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00c52767: }
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
// FUNCTION: ROBLOXSTUDIO 0x00c52780
extern "C" __declspec(naked) void asm_00c52780()
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
	__asm { je L_00c527a9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00c527ae }
	__asm { L_00c527a9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00c527ae: }
	__asm { cmp ecx, 0x12a1238 }
	__asm { je L_00c527f7 }
	__asm { test eax, eax }
	__asm { je L_00c527be }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00c527c3 }
	__asm { L_00c527be: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00c527c3: }
	__asm { push 0x12a1238 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00c527f7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00c527f7: }
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
// FUNCTION: ROBLOXSTUDIO 0x00c52810
extern "C" __declspec(naked) void asm_00c52810()
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
	__asm { je L_00c52839 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00c5283e }
	__asm { L_00c52839: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00c5283e: }
	__asm { cmp ecx, 0x12a12bc }
	__asm { je L_00c52887 }
	__asm { test eax, eax }
	__asm { je L_00c5284e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00c52853 }
	__asm { L_00c5284e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00c52853: }
	__asm { push 0x12a12bc }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00c52887 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00c52887: }
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
// FUNCTION: ROBLOXSTUDIO 0x00c528a0
extern "C" __declspec(naked) void asm_00c528a0()
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
	__asm { je L_00c528c9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00c528ce }
	__asm { L_00c528c9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00c528ce: }
	__asm { cmp ecx, 0x12a1284 }
	__asm { je L_00c52917 }
	__asm { test eax, eax }
	__asm { je L_00c528de }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00c528e3 }
	__asm { L_00c528de: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00c528e3: }
	__asm { push 0x12a1284 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00c52917 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00c52917: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312d84[];
extern "C" char g_01312d88[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c52930
extern "C" __declspec(naked) void asm_00c52930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd64ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01312d88] }
	__asm { test al, 1 }
	__asm { jne L_00c52972 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312d88], eax }
	__asm { push 0xefd738 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01312d84], eax }
	__asm { L_00c52972: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00efd738[];
extern "C" char g_01312d84[];
extern "C" char g_01312d88[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00c529c0
extern "C" __declspec(naked) void asm_00c529c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd64ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00efd738], 0 }
	__asm { jne L_00c529f4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c529f4: }
	__asm { push 0xc52930 }
	__asm { push 0x1312d7c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312d88] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c52a3e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312d88], eax }
	__asm { push 0xefd738 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01312d84], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c52a3e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01312d84] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312248[];
extern "C" void fn_004115f0();
extern "C" void fn_00c3fd00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c52a60
extern "C" __declspec(naked) void asm_00c52a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6500e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc4ae70 }
	__asm { push 0x1312118 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312248] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c52ab9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312248], eax }
	__asm { mov ecx, 0x13121c0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c3fd00 }
	__asm { push 0xe0c190 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c52ab9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x13121c0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312c58[];
extern "C" void fn_004115f0();
extern "C" void fn_00cb9ca0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c52ad0
extern "C" __declspec(naked) void asm_00c52ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd650ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc53cf0 }
	__asm { push 0x1312a98 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312c58] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c52b29 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312c58], eax }
	__asm { mov ecx, 0x1312bd0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cb9ca0 }
	__asm { push 0xe0c460 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c52b29: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x1312bd0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013121b8[];
extern "C" void fn_004115f0();
extern "C" void fn_00c3fe30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c52b40
extern "C" __declspec(naked) void asm_00c52b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd64eee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc4aed0 }
	__asm { push 0x1312110 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013121b8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c52b99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013121b8], eax }
	__asm { mov ecx, 0x1312130 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c3fe30 }
	__asm { push 0xe0c1a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c52b99: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x1312130 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310910[];
extern "C" void fn_004115f0();
extern "C" void fn_00c251d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c52bb0
extern "C" __declspec(naked) void asm_00c52bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd64fee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc312b0 }
	__asm { push 0x13107cc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01310910] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c52c09 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310910], eax }
	__asm { mov ecx, 0x1310888 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c251d0 }
	__asm { push 0xe09e90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c52c09: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x1310888 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ef9d90[];
extern "C" char g_01312a84[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c53730
extern "C" __declspec(naked) void asm_00c53730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6504e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01312a84] }
	__asm { test al, 1 }
	__asm { jne L_00c5379c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312a84], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ef9d90] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1312958 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0c410 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c5379c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x1312958 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eff078[];
extern "C" char g_01312954[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c537b0
extern "C" __declspec(naked) void asm_00c537b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6bd9e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01312954] }
	__asm { test al, 1 }
	__asm { jne L_00c5381c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312954], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eff078] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1312828 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0c420 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c5381c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x1312828 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ef2774[];
extern "C" char g_013125c4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c53830
extern "C" __declspec(naked) void asm_00c53830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6506e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_013125c4] }
	__asm { test al, 1 }
	__asm { jne L_00c5389c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013125c4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ef2774] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1312498 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0c430 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c5389c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x1312498 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00efa7d0[];
extern "C" char g_013126f4[];
extern "C" void fn_007cbf10();
extern "C" void fn_00c2cc50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c538b0
extern "C" __declspec(naked) void asm_00c538b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69d0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_013126f4] }
	__asm { test al, 1 }
	__asm { jne L_00c5391c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013126f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { push dword ptr [g_00efa7d0] }
	__asm { call fn_00c2cc50 }
	__asm { push eax }
	__asm { mov ecx, 0x13125c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0c440 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c5391c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x13125c8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00efd738[];
extern "C" char g_01312824[];
extern "C" void fn_007cbf10();
extern "C" void fn_00c2ccd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c53930
extern "C" __declspec(naked) void asm_00c53930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6508e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01312824] }
	__asm { test al, 1 }
	__asm { jne L_00c5399c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312824], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { push dword ptr [g_00efd738] }
	__asm { call fn_00c2ccd0 }
	__asm { push eax }
	__asm { mov ecx, 0x13126f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0c450 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c5399c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x13126f8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312c58[];
extern "C" void fn_004115f0();
extern "C" void fn_00c52420();
extern "C" void fn_00cb9ca0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c539b0
extern "C" __declspec(naked) void asm_00c539b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd650ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00c539de }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00c539e0 }
	__asm { L_00c539de: }
	__asm { xor bl, bl }
	__asm { L_00c539e0: }
	__asm { push 0xc53cf0 }
	__asm { push 0x1312a98 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312c58] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c53a28 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312c58], eax }
	__asm { mov ecx, 0x1312bd0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cb9ca0 }
	__asm { push 0xe0c460 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c53a28: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x1312bd0 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_00c52420 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01312b38[];
extern "C" void fn_004115f0();
extern "C" void fn_00c524b0();
extern "C" void fn_00c567b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c53a50
extern "C" __declspec(naked) void asm_00c53a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd650ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00c53a7e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00c53a80 }
	__asm { L_00c53a7e: }
	__asm { xor bl, bl }
	__asm { L_00c53a80: }
	__asm { push 0xc53d50 }
	__asm { push 0x1312a88 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312b38] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c53ac8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312b38], eax }
	__asm { mov ecx, 0x1312ab0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c567b0 }
	__asm { push 0xe0c470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c53ac8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x1312ab0 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_00c524b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01312bc8[];
extern "C" void fn_004115f0();
extern "C" void fn_00c52540();
extern "C" void fn_00c56900();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c53af0
extern "C" __declspec(naked) void asm_00c53af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd64fce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00c53b1e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00c53b20 }
	__asm { L_00c53b1e: }
	__asm { xor bl, bl }
	__asm { L_00c53b20: }
	__asm { push 0xc53db0 }
	__asm { push 0x1312a90 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312bc8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c53b68 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312bc8], eax }
	__asm { mov ecx, 0x1312b40 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c56900 }
	__asm { push 0xe0c480 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c53b68: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x1312b40 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_00c52540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01312d78[];
extern "C" void fn_004115f0();
extern "C" void fn_00c525d0();
extern "C" void fn_00c56a60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c53b90
extern "C" __declspec(naked) void asm_00c53b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd650ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00c53bbe }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00c53bc0 }
	__asm { L_00c53bbe: }
	__asm { xor bl, bl }
	__asm { L_00c53bc0: }
	__asm { push 0xc53e10 }
	__asm { push 0x1312aa8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312d78] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c53c08 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312d78], eax }
	__asm { mov ecx, 0x1312cf0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c56a60 }
	__asm { push 0xe0c490 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c53c08: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x1312cf0 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_00c525d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01312ce8[];
extern "C" void fn_004115f0();
extern "C" void fn_00c52660();
extern "C" void fn_00c56b90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c53c30
extern "C" __declspec(naked) void asm_00c53c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6502e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00c53c5e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00c53c60 }
	__asm { L_00c53c5e: }
	__asm { xor bl, bl }
	__asm { L_00c53c60: }
	__asm { push 0xc53e70 }
	__asm { push 0x1312aa0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312ce8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c53ca8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312ce8], eax }
	__asm { mov ecx, 0x1312c60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c56b90 }
	__asm { push 0xe0c4a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c53ca8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x1312c60 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_00c52660 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01312c58[];
extern "C" void fn_00cb9ca0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c53cf0
extern "C" __declspec(naked) void asm_00c53cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd650ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01312c58] }
	__asm { test al, 1 }
	__asm { jne L_00c53d37 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312c58], eax }
	__asm { mov ecx, 0x1312bd0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cb9ca0 }
	__asm { push 0xe0c460 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c53d37: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312b38[];
extern "C" void fn_00c567b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c53d50
extern "C" __declspec(naked) void asm_00c53d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd650ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01312b38] }
	__asm { test al, 1 }
	__asm { jne L_00c53d97 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312b38], eax }
	__asm { mov ecx, 0x1312ab0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c567b0 }
	__asm { push 0xe0c470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c53d97: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312bc8[];
extern "C" void fn_00c56900();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c53db0
extern "C" __declspec(naked) void asm_00c53db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd64fce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01312bc8] }
	__asm { test al, 1 }
	__asm { jne L_00c53df7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312bc8], eax }
	__asm { mov ecx, 0x1312b40 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c56900 }
	__asm { push 0xe0c480 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c53df7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312d78[];
extern "C" void fn_00c56a60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c53e10
extern "C" __declspec(naked) void asm_00c53e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd650ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01312d78] }
	__asm { test al, 1 }
	__asm { jne L_00c53e57 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312d78], eax }
	__asm { mov ecx, 0x1312cf0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c56a60 }
	__asm { push 0xe0c490 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c53e57: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312ce8[];
extern "C" void fn_00c56b90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c53e70
extern "C" __declspec(naked) void asm_00c53e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6502e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01312ce8] }
	__asm { test al, 1 }
	__asm { jne L_00c53eb7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312ce8], eax }
	__asm { mov ecx, 0x1312c60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c56b90 }
	__asm { push 0xe0c4a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c53eb7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e13084[];
extern "C" char g_00e1308c[];
extern "C" char g_01312402[];
extern "C" char g_01312490[];
extern "C" void fn_0040f730();
extern "C" void fn_0042e3d0();
extern "C" void fn_00497220();
extern "C" void fn_005451a0();
extern "C" void fn_007c5aa0();
extern "C" void fn_0082a980();
extern "C" void fn_00c2cbd0();
extern "C" void fn_00c53830();
extern "C" void fn_00c538b0();
extern "C" void fn_00cb9080();
extern "C" void fn_00cb96c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c53ed0
extern "C" __declspec(naked) void asm_00c53ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6510e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xef26a0 }
	__asm { call dword ptr [g_00e1308c] }
	__asm { mov eax, dword ptr [g_01312490] }
	__asm { mov byte ptr [g_01312402], 0 }
	__asm { test al, 1 }
	__asm { jne L_00c53f30 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312490], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cb9080 }
	__asm { call fn_00cb96c0 }
	__asm { push 0xe0c500 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c53f30: }
	__asm { call fn_00c2cbd0 }
	__asm { call fn_00c538b0 }
	__asm { push 1 }
	__asm { push 0xef26b4 }
	__asm { mov ecx, 0x12a11a8 }
	__asm { call fn_0040f730 }
	__asm { call fn_005451a0 }
	__asm { call fn_0082a980 }
	__asm { call fn_007c5aa0 }
	__asm { call fn_00c53830 }
	__asm { push 0x11 }
	__asm { push 1 }
	__asm { mov ecx, 0x12a11a8 }
	__asm { call fn_0042e3d0 }
	__asm { call fn_00497220 }
	__asm { call dword ptr [g_00e13084] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00c54cd0
extern "C" __declspec(naked) void asm_00c54cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00c54ce6 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c54ce6: }
	__asm { cmp eax, 1 }
	__asm { jne L_00c54cfd }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c54cfd: }
	__asm { cmp eax, 2 }
	__asm { jne L_00c54d0d }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c54d0d: }
	__asm { cmp eax, 3 }
	__asm { jne L_00c54d30 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x12a12f8 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c54d30: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12a12f8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131242c[];
extern "C" char g_013125c4[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c566f0
extern "C" __declspec(naked) void asm_00c566f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd65556 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xef2794 }
	__asm { mov dword ptr [esi + 4], 0xef280c }
	__asm { mov dword ptr [esi + 0x18], 0xef2814 }
	__asm { mov dword ptr [esi + 0x1c], 0xef2820 }
	__asm { mov eax, dword ptr [g_013125c4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00c56789 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013125c4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xef277c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1312498 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0c430 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c56789: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x1312498 }
	__asm { inc dword ptr [g_0131242c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c57390
extern "C" __declspec(naked) void asm_00c57390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test eax, eax }
	__asm { je L_00c573c0 }
	__asm { add eax, -0x1c }
	__asm { jmp L_00c573c2 }
	__asm { L_00c573c0: }
	__asm { xor eax, eax }
	__asm { L_00c573c2: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00c57409 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c57409: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e4cd8[];
extern "C" char g_012e5b5c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c57f00
extern "C" __declspec(naked) void asm_00c57f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd656e6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xef320c }
	__asm { mov dword ptr [esi + 4], 0xef3284 }
	__asm { mov dword ptr [esi + 0x18], 0xef328c }
	__asm { mov dword ptr [esi + 0x1c], 0xef3298 }
	__asm { mov eax, dword ptr [g_012e5b5c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00c57f99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5b5c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xef200c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5a30 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7660 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c57f99: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e5a30 }
	__asm { inc dword ptr [g_012e4cd8] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e131b8[];
extern "C" void fn_00c58720();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c588e0
extern "C" __declspec(naked) void asm_00c588e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd64fa9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c58720 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e131b8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c5892c }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c5892c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e131b8[];
extern "C" void fn_00c587b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c58940
extern "C" __declspec(naked) void asm_00c58940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd64fa9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c587b0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e131b8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c5898c }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c5898c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01310ce8[];
extern "C" char g_01310cec[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c58e40
extern "C" __declspec(naked) void asm_00c58e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61e3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc229d0 }
	__asm { push 0x1310934 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01310cec] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c58ea2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310cec], eax }
	__asm { push 0xef3200 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01310ce8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c58ea2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01310ce8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x00c58ec0
extern "C" __declspec(naked) void asm_00c58ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd40368 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx + 0x40] }
	__asm { sub esp, 0x10 }
	__asm { test edx, edx }
	__asm { jne L_00c58f0d }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe19198 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_00c58f0d: }
	__asm { lea eax, [ecx + 0x60] }
	__asm { push eax }
	__asm { lea eax, [ecx + 0x48] }
	__asm { and edx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c59530();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c592d0
extern "C" __declspec(naked) void asm_00c592d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd65950 }
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
	__asm { je L_00c59328 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef3e70 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c5932a }
	__asm { L_00c59328: }
	__asm { xor eax, eax }
	__asm { L_00c5932a: }
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
	__asm { call fn_00c59530 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00c59550();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c59400
extern "C" __declspec(naked) void asm_00c59400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd65960 }
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
	__asm { je L_00c59458 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef3e88 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c5945a }
	__asm { L_00c59458: }
	__asm { xor eax, eax }
	__asm { L_00c5945a: }
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
	__asm { call fn_00c59550 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0131368c[];
extern "C" char g_01313690[];
extern "C" char g_01313694[];
extern "C" char g_01313698[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c59490
extern "C" __declspec(naked) void asm_00c59490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6597e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01313698] }
	__asm { test al, 1 }
	__asm { jne L_00c594d2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313698], eax }
	__asm { push 0xef343c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01313694], eax }
	__asm { L_00c594d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6599e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01313690] }
	__asm { test al, 1 }
	__asm { jne L_00c59522 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313690], eax }
	__asm { push 0xef3434 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131368c], eax }
	__asm { L_00c59522: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4cc8[];
extern "C" char g_012f0d84[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c5a070
extern "C" __declspec(naked) void asm_00c5a070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd65a66 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xef35c4 }
	__asm { mov dword ptr [esi + 4], 0xef363c }
	__asm { mov dword ptr [esi + 0x18], 0xef3644 }
	__asm { mov dword ptr [esi + 0x1c], 0xef3650 }
	__asm { mov eax, dword ptr [g_012f0d84] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00c5a109 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f0d84], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xef3454 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f0c58 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde79a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c5a109: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12f0c58 }
	__asm { inc dword ptr [g_012e4cc8] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4cc4[];
extern "C" char g_012f0c54[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c5a130
extern "C" __declspec(naked) void asm_00c5a130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd65a86 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xef3484 }
	__asm { mov dword ptr [esi + 4], 0xef34fc }
	__asm { mov dword ptr [esi + 0x18], 0xef3504 }
	__asm { mov dword ptr [esi + 0x1c], 0xef3510 }
	__asm { mov eax, dword ptr [g_012f0c54] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00c5a1c9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f0c54], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xef3440 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f0b28 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7bd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c5a1c9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12f0b28 }
	__asm { inc dword ptr [g_012e4cc4] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01313694[];
extern "C" char g_01313698[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c5b360
extern "C" __declspec(naked) void asm_00c5b360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6597e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc59490 }
	__asm { push 0x1313684 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01313698] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c5b3c2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313698], eax }
	__asm { push 0xef343c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01313694], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c5b3c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01313694] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131368c[];
extern "C" char g_01313690[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c5b3e0
extern "C" __declspec(naked) void asm_00c5b3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6599e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc594e0 }
	__asm { push 0x131367c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01313690] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c5b442 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313690], eax }
	__asm { push 0xef3434 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131368c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c5b442: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131368c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403110();
extern "C" void fn_00c5a4e0();
// FUNCTION: ROBLOXSTUDIO 0x00c5d5d0
extern "C" __declspec(naked) void asm_00c5d5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd65e7b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { mov dword ptr [esi], 0xef3f38 }
	__asm { push 0xf12e90 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00c5d624 }
	__asm { sub eax, 4 }
	__asm { L_00c5d624: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c5a4e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403110();
extern "C" void fn_00c5a4e0();
// FUNCTION: ROBLOXSTUDIO 0x00c5d680
extern "C" __declspec(naked) void asm_00c5d680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd65e9b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { mov dword ptr [esi], 0xef3f44 }
	__asm { push 0xf12e90 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00c5d6d4 }
	__asm { sub eax, 4 }
	__asm { L_00c5d6d4: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c5a4e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c5bca0();
extern "C" void fn_00c5ce50();
extern "C" void fn_00c5d9d0();
extern "C" void fn_00c6cf00();
// FUNCTION: ROBLOXSTUDIO 0x00c5dee0
extern "C" __declspec(naked) void asm_00c5dee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd65f38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { lea eax, [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00c5bca0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c5d9d0 }
	__asm { cmp byte ptr [eax + 8], 0 }
	__asm { jne L_00c5df3f }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push dword ptr [eax] }
	__asm { push dword ptr [eax + 0xc] }
	__asm { call fn_00c6cf00 }
	__asm { mov bl, 1 }
	__asm { jmp L_00c5df41 }
	__asm { L_00c5df3f: }
	__asm { xor bl, bl }
	__asm { L_00c5df41: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00c5df4f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00c5ce50 }
	__asm { L_00c5df4f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c5bca0();
extern "C" void fn_00c5ce50();
extern "C" void fn_00c5db10();
extern "C" void fn_00c6cf00();
// FUNCTION: ROBLOXSTUDIO 0x00c5df70
extern "C" __declspec(naked) void asm_00c5df70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd65f38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { lea eax, [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00c5bca0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c5db10 }
	__asm { cmp byte ptr [eax + 0xc], 0 }
	__asm { jne L_00c5dfcf }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push dword ptr [eax] }
	__asm { push dword ptr [eax + 0xc] }
	__asm { call fn_00c6cf00 }
	__asm { mov bl, 1 }
	__asm { jmp L_00c5dfd1 }
	__asm { L_00c5dfcf: }
	__asm { xor bl, bl }
	__asm { L_00c5dfd1: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00c5dfdf }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00c5ce50 }
	__asm { L_00c5dfdf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009b53d0();
// FUNCTION: ROBLOXSTUDIO 0x00c5e000
extern "C" __declspec(naked) void asm_00c5e000()
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
	__asm { je L_00c5e061 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_00c5e020: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_00c5e02b }
	__asm { add esi, -0x14 }
	__asm { jmp L_00c5e02d }
	__asm { L_00c5e02b: }
	__asm { xor esi, esi }
	__asm { L_00c5e02d: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_00c5e048 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x14] }
	__asm { jmp L_00c5e05a }
	__asm { L_00c5e048: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { lea edx, [esi + 0x14] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_00c5e05a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00c5e020 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00c5e061: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}
