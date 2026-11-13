// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_009be660();
// FUNCTION: ROBLOXSTUDIO 0x009bcc30
extern "C" __declspec(naked) void asm_009bcc30()
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
	__asm { call fn_009be660 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009bcca2 }
	__asm { add esi, 5 }
	__asm { je L_009bcc72 }
	__asm { add esi, -5 }
	__asm { jmp L_009bcc74 }
	__asm { L_009bcc72: }
	__asm { xor esi, esi }
	__asm { L_009bcc74: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009bcca1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009bcca1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009bcca1: }
	__asm { pop edi }
	__asm { L_009bcca2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009bef60
extern "C" __declspec(naked) void asm_009bef60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov ecx, esi }
	__asm { jne L_009bef8b }
	__asm { mov edx, dword ptr [edi] }
	__asm { L_009bef77: }
	__asm { cmp dword ptr [eax + 0x10], edx }
	__asm { jge L_009bef81 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_009bef85 }
	__asm { L_009bef81: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_009bef85: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_009bef77 }
	__asm { L_009bef8b: }
	__asm { cmp ecx, esi }
	__asm { je L_009bef99 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { cmp eax, dword ptr [ecx + 0x10] }
	__asm { jge L_009bef9c }
	__asm { L_009bef99: }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { L_009bef9c: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009bde10();
// FUNCTION: ROBLOXSTUDIO 0x009befb0
extern "C" __declspec(naked) void asm_009befb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_009bde10 }
	__asm { mov edx, dword ptr [esi] }
	__asm { cmp eax, edx }
	__asm { je L_009befee }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov esi, dword ptr [eax + 0x10] }
	__asm { cmp ecx, esi }
	__asm { jl L_009befee }
	__asm { cmp esi, ecx }
	__asm { jl L_009befdb }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { cmp ecx, dword ptr [eax + 0x14] }
	__asm { jl L_009befee }
	__asm { L_009befdb: }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009befee: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00424f10();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00c304d0();
// FUNCTION: ROBLOXSTUDIO 0x009bf1d0
extern "C" __declspec(naked) void asm_009bf1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test ecx, ecx }
	__asm { je L_009bf22a }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_009bf1ec }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_009bf1ee }
	__asm { call fn_0043ee40 }
	__asm { jmp L_009bf1ee }
	__asm { L_009bf1ec: }
	__asm { mov eax, ecx }
	__asm { L_009bf1ee: }
	__asm { test eax, eax }
	__asm { je L_009bf22a }
	__asm { push edi }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_009bf229 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_009bf229 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_009bf229 }
	__asm { call fn_00424f10 }
	__asm { test eax, eax }
	__asm { je L_009bf229 }
	__asm { pop edi }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_00c304d0 }
	__asm { L_009bf229: }
	__asm { pop edi }
	__asm { L_009bf22a: }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_013044a4[];
extern "C" char g_013044a8[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009c14a0
extern "C" __declspec(naked) void asm_009c14a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3fdee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013044a8] }
	__asm { test al, 1 }
	__asm { jne L_009c1513 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013044a8], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009c14fe }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013044a4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009c14fe: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013044a4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009c1513: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013044a4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013044ac[];
extern "C" char g_013044b0[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009c1530
extern "C" __declspec(naked) void asm_009c1530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3fe0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013044b0] }
	__asm { test al, 1 }
	__asm { jne L_009c15a3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013044b0], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009c158e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013044ac], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009c158e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013044ac], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009c15a3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013044ac] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013044c4[];
extern "C" char g_013044c8[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009c15c0
extern "C" __declspec(naked) void asm_009c15c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3fe2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013044c8] }
	__asm { test al, 1 }
	__asm { jne L_009c1633 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013044c8], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009c161e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013044c4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009c161e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013044c4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009c1633: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013044c4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f2c64[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009c6270
extern "C" __declspec(naked) void asm_009c6270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4016e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f2c64] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009c62e5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f2c64], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe94dac }
	__asm { mov dword ptr [ebp - 4], 0 }
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
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009c62e5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12f2b38 }
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

extern "C" char g_012f2d94[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009c6320
extern "C" __declspec(naked) void asm_009c6320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2374e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f2d94] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009c6395 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f2d94], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe94e60 }
	__asm { mov dword ptr [ebp - 4], 0 }
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
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009c6395: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12f2c68 }
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

extern "C" char g_012f21b4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009c63d0
extern "C" __declspec(naked) void asm_009c63d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2376e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f21b4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009c6445 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f21b4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe94e78 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f2088 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde74b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009c6445: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12f2088 }
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

extern "C" char g_012f22e4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009c6480
extern "C" __declspec(naked) void asm_009c6480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4018e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f22e4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009c64f5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f22e4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe94d94 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f21b8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde74c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009c64f5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12f21b8 }
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

extern "C" char g_012f2b34[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009c6530
extern "C" __declspec(naked) void asm_009c6530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd401ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f2b34] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009c65a5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f2b34], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe94de4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f2a08 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde74e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009c65a5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12f2a08 }
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

extern "C" char g_012f2a04[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009c65e0
extern "C" __declspec(naked) void asm_009c65e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd401ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f2a04] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009c6655 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f2a04], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe94e54 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f28d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde74f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009c6655: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12f28d8 }
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

extern "C" char g_012f28d4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009c6690
extern "C" __declspec(naked) void asm_009c6690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd401ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f28d4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009c6705 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f28d4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe94d88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f27a8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7500 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009c6705: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12f27a8 }
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

extern "C" char g_012f27a4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009c6740
extern "C" __declspec(naked) void asm_009c6740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4020e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f27a4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009c67b5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f27a4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe94da0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f2678 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7510 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009c67b5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12f2678 }
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

extern "C" char g_012f2674[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009c67f0
extern "C" __declspec(naked) void asm_009c67f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd237ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f2674] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009c6865 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f2674], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe94dd4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f2548 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7520 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009c6865: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12f2548 }
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

extern "C" char g_012f2414[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009c68a0
extern "C" __declspec(naked) void asm_009c68a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4022e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f2414] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009c6915 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f2414], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe94e28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f22e8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7530 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009c6915: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12f22e8 }
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

extern "C" char g_0131fc80[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009c6950
extern "C" __declspec(naked) void asm_009c6950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4024e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131fc80] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009c69c5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131fc80], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe94dc0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131fb08 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddf200 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009c69c5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x131fb08 }
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

extern "C" char g_0131faa4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009c6a00
extern "C" __declspec(naked) void asm_009c6a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4026e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131faa4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009c6a75 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131faa4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe94e34 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131fd68 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddf210 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009c6a75: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x131fd68 }
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

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x009c6d50
extern "C" __declspec(naked) void asm_009c6d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd40368 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi] }
	__asm { test edx, edx }
	__asm { jne L_009c6d9f }
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
	__asm { L_009c6d9f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { and edx, 0xfffffffe }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
extern "C" void fn_00427010();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009c7430
extern "C" __declspec(naked) void asm_009c7430()
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
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00427010 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009c748f }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009c748f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x009c74a0
extern "C" __declspec(naked) void asm_009c74a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd40368 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { sub esp, 0x10 }
	__asm { test edx, edx }
	__asm { jne L_009c74ed }
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
	__asm { L_009c74ed: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ecx + 0x18] }
	__asm { and edx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009c8d80
extern "C" __declspec(naked) void asm_009c8d80()
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
	__asm { je L_009c8dd4 }
	__asm { sub esp, 0x18 }
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
	__asm { L_009c8dd4: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_009c8de5 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009c8de5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009c8e80
extern "C" __declspec(naked) void asm_009c8e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd47888 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [edx + 0x10], 0 }
	__asm { je L_009c8edf }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], 0xe461dc }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { lea ecx, [edx + 8] }
	__asm { call dword ptr [eax] }
	__asm { L_009c8edf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009c9ab0
extern "C" __declspec(naked) void asm_009c9ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49f08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_009c9af1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009c9af1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304d18[];
extern "C" char g_01304d1c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009cae90
extern "C" __declspec(naked) void asm_009cae90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd403ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01304d1c] }
	__asm { test al, 1 }
	__asm { jne L_009caf03 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01304d1c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009caeee }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01304d18], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009caeee: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01304d18], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009caf03: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01304d18] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304d40[];
extern "C" char g_01304d44[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009caf20
extern "C" __declspec(naked) void asm_009caf20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd403ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01304d44] }
	__asm { test al, 1 }
	__asm { jne L_009caf93 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01304d44], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009caf7e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01304d40], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009caf7e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01304d40], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009caf93: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01304d40] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304d38[];
extern "C" char g_01304d3c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009cafb0
extern "C" __declspec(naked) void asm_009cafb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd403ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01304d3c] }
	__asm { test al, 1 }
	__asm { jne L_009cb023 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01304d3c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009cb00e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01304d38], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009cb00e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01304d38], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009cb023: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01304d38] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304d30[];
extern "C" char g_01304d34[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009cb040
extern "C" __declspec(naked) void asm_009cb040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4040e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01304d34] }
	__asm { test al, 1 }
	__asm { jne L_009cb0b3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01304d34], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009cb09e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01304d30], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009cb09e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01304d30], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009cb0b3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01304d30] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304d28[];
extern "C" char g_01304d2c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009cb0d0
extern "C" __declspec(naked) void asm_009cb0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4042e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01304d2c] }
	__asm { test al, 1 }
	__asm { jne L_009cb143 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01304d2c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009cb12e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01304d28], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009cb12e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01304d28], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009cb143: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01304d28] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4a80[];
extern "C" char g_012e5304[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009cc550
extern "C" __declspec(naked) void asm_009cc550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd405d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe852ec }
	__asm { mov dword ptr [esi + 4], 0xe85364 }
	__asm { mov dword ptr [esi + 0x18], 0xe8536c }
	__asm { mov dword ptr [esi + 0x1c], 0xe85378 }
	__asm { mov eax, dword ptr [g_012e5304] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009cc5e9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5304], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe95878 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e51d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7980 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009cc5e9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e51d8 }
	__asm { inc dword ptr [g_012e4a80] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5df0[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_009cc610();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009ccee0
extern "C" __declspec(naked) void asm_009ccee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd22a2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_009ccf04 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_009ccf04: }
	__asm { push 0x822860 }
	__asm { push 0x12f3018 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5df0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009ccf4c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5df0], eax }
	__asm { mov ecx, 0x12f5d68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009cc610 }
	__asm { push 0xde8510 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009ccf4c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12f5d68 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009ce010
extern "C" __declspec(naked) void asm_009ce010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40720 }
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
	__asm { je L_009ce068 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe97544 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_009ce06a }
	__asm { L_009ce068: }
	__asm { xor eax, eax }
	__asm { L_009ce06a: }
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

extern "C" void fn_009ceb50();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009ce7a0
extern "C" __declspec(naked) void asm_009ce7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40730 }
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
	__asm { je L_009ce7f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe9752c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_009ce7fa }
	__asm { L_009ce7f8: }
	__asm { xor eax, eax }
	__asm { L_009ce7fa: }
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
	__asm { call fn_009ceb50 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x009ce830
extern "C" __declspec(naked) void asm_009ce830()
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
	__asm { je L_009ce859 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_009ce85e }
	__asm { L_009ce859: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_009ce85e: }
	__asm { cmp ecx, 0x11f0b50 }
	__asm { je L_009ce8a7 }
	__asm { test eax, eax }
	__asm { je L_009ce86e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_009ce873 }
	__asm { L_009ce86e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_009ce873: }
	__asm { push 0x11f0b50 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_009ce8a7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_009ce8a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305ce8[];
extern "C" char g_01305cec[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x009ceb00
extern "C" __declspec(naked) void asm_009ceb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4074e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01305cec] }
	__asm { test al, 1 }
	__asm { jne L_009ceb3a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01305cec], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_01305ce8], eax }
	__asm { L_009ceb3a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_009ce010();
extern "C" void fn_009d1c00();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009cf210
extern "C" __declspec(naked) void asm_009cf210()
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
	__asm { push 0x80 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009cf25e }
	__asm { mov ecx, eax }
	__asm { call fn_009d1c00 }
	__asm { mov esi, eax }
	__asm { jmp L_009cf260 }
	__asm { L_009cf25e: }
	__asm { xor esi, esi }
	__asm { L_009cf260: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_009ce010 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_009cf291 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_009cf291 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_009cf291: }
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
extern "C" void fn_0083d9b0();
// FUNCTION: ROBLOXSTUDIO 0x009cf890
extern "C" __declspec(naked) void asm_009cf890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_009cf8e1 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_009cf8b0 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_009cf8b2 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_009cf8b2 }
	__asm { L_009cf8b0: }
	__asm { mov eax, ecx }
	__asm { L_009cf8b2: }
	__asm { test eax, eax }
	__asm { je L_009cf8e1 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_009cf8e1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_009cf8e1 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_009cf8e1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_0083d9b0 }
	__asm { L_009cf8e1: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009d00f0
extern "C" __declspec(naked) void asm_009d00f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_009d0137 }
	__asm { mov dword ptr [edx], 0xe974c4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_009d0139 }
	__asm { L_009d0137: }
	__asm { xor edx, edx }
	__asm { L_009d0139: }
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
// FUNCTION: ROBLOXSTUDIO 0x009d0150
extern "C" __declspec(naked) void asm_009d0150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_009d0197 }
	__asm { mov dword ptr [edx], 0xe97500 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_009d0199 }
	__asm { L_009d0197: }
	__asm { xor edx, edx }
	__asm { L_009d0199: }
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
// FUNCTION: ROBLOXSTUDIO 0x009d01b0
extern "C" __declspec(naked) void asm_009d01b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_009d01f7 }
	__asm { mov dword ptr [edx], 0xe9749c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_009d01f9 }
	__asm { L_009d01f7: }
	__asm { xor edx, edx }
	__asm { L_009d01f9: }
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
// FUNCTION: ROBLOXSTUDIO 0x009d0210
extern "C" __declspec(naked) void asm_009d0210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_009d0257 }
	__asm { mov dword ptr [edx], 0xe974d8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_009d0259 }
	__asm { L_009d0257: }
	__asm { xor edx, edx }
	__asm { L_009d0259: }
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
// FUNCTION: ROBLOXSTUDIO 0x009d0270
extern "C" __declspec(naked) void asm_009d0270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_009d02b7 }
	__asm { mov dword ptr [edx], 0xe97474 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_009d02b9 }
	__asm { L_009d02b7: }
	__asm { xor edx, edx }
	__asm { L_009d02b9: }
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
// FUNCTION: ROBLOXSTUDIO 0x009d02d0
extern "C" __declspec(naked) void asm_009d02d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_009d0317 }
	__asm { mov dword ptr [edx], 0xe97460 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_009d0319 }
	__asm { L_009d0317: }
	__asm { xor edx, edx }
	__asm { L_009d0319: }
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
// FUNCTION: ROBLOXSTUDIO 0x009d0330
extern "C" __declspec(naked) void asm_009d0330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_009d0377 }
	__asm { mov dword ptr [edx], 0xe974b0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_009d0379 }
	__asm { L_009d0377: }
	__asm { xor edx, edx }
	__asm { L_009d0379: }
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
// FUNCTION: ROBLOXSTUDIO 0x009d0390
extern "C" __declspec(naked) void asm_009d0390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_009d03d7 }
	__asm { mov dword ptr [edx], 0xe974ec }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_009d03d9 }
	__asm { L_009d03d7: }
	__asm { xor edx, edx }
	__asm { L_009d03d9: }
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

extern "C" char g_012f4260[];
extern "C" void fn_004115f0();
extern "C" void fn_009d1260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009d0580
extern "C" __declspec(naked) void asm_009d0580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2334e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x822260 }
	__asm { push 0x12f2e90 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4260] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009d05e1 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4260], eax }
	__asm { mov ecx, 0x12f41d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009d1260 }
	__asm { push 0xde8410 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009d05e1: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f41d8 }
	__asm { push 1 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_009d0608 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009d0608: }
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

extern "C" char g_012f4140[];
extern "C" void fn_004115f0();
extern "C" void fn_009d14c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009d0620
extern "C" __declspec(naked) void asm_009d0620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4132e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x8222c0 }
	__asm { push 0x12f2e80 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4140] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009d0681 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4140], eax }
	__asm { mov ecx, 0x12f40b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009d14c0 }
	__asm { push 0xde8420 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009d0681: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f40b8 }
	__asm { push 1 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_009d06a8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009d06a8: }
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

extern "C" char g_012e341c[];
extern "C" char g_012e4b20[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009d1060
extern "C" __declspec(naked) void asm_009d1060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd408a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe95b44 }
	__asm { mov dword ptr [esi + 4], 0xe95bbc }
	__asm { mov dword ptr [esi + 0x18], 0xe95bc4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe95bd0 }
	__asm { mov eax, dword ptr [g_012e341c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009d10f9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e341c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe56b98 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e32f0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde41b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009d10f9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e32f0 }
	__asm { inc dword ptr [g_012e4b20] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_009d68d0();
// FUNCTION: ROBLOXSTUDIO 0x009d29f0
extern "C" __declspec(naked) void asm_009d29f0()
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
	__asm { call fn_009d68d0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009d2a62 }
	__asm { add esi, 5 }
	__asm { je L_009d2a32 }
	__asm { add esi, -5 }
	__asm { jmp L_009d2a34 }
	__asm { L_009d2a32: }
	__asm { xor esi, esi }
	__asm { L_009d2a34: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009d2a61 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009d2a61 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009d2a61: }
	__asm { pop edi }
	__asm { L_009d2a62: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009d3f00
extern "C" __declspec(naked) void asm_009d3f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x34] }
	__asm { test esi, esi }
	__asm { je L_009d3f38 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_009d3f1e }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009d3f1e: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009d3f38: }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { je L_009d3f60 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009d3f60: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x009d5060
extern "C" __declspec(naked) void asm_009d5060()
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
	__asm { jne L_009d50ad }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 8], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe19198 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_009d50ad: }
	__asm { fld dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0x18] }
	__asm { and edx, 0xfffffffe }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_009d2950();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009d6010
extern "C" __declspec(naked) void asm_009d6010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { jne L_009d6065 }
	__asm { push 0x14 }
	__asm { mov word ptr [esi + 8], cx }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_009d603a }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_009d603a: }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [esi + 8], 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009d6065: }
	__asm { cmp byte ptr [esi + 9], 0 }
	__asm { je L_009d6074 }
	__asm { call fn_009d2950 }
	__asm { mov byte ptr [esi + 9], 0 }
	__asm { L_009d6074: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007dd9d0();
extern "C" void fn_007e95a0();
// FUNCTION: ROBLOXSTUDIO 0x009d7370
extern "C" __declspec(naked) void asm_009d7370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { je L_009d7382 }
	__asm { lea ebx, [eax - 0x1c] }
	__asm { jmp L_009d7384 }
	__asm { L_009d7382: }
	__asm { xor ebx, ebx }
	__asm { L_009d7384: }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov edx, dword ptr [ecx + 0x2c] }
	__asm { mov ecx, dword ptr [ecx + 0x30] }
	__asm { mov eax, dword ptr [ebx + 0x12c] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax + ecx] }
	__asm { add eax, ebx }
	__asm { lea ecx, [edx + 0x12c] }
	__asm { add ecx, eax }
	__asm { call esi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_007e95a0 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_007dd9d0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b8500();
// FUNCTION: ROBLOXSTUDIO 0x009d73d0
extern "C" __declspec(naked) void asm_009d73d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push 0 }
	__asm { lea eax, [ebx + 0x34] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_007b8500 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { test edi, edi }
	__asm { je L_009d73f5 }
	__asm { add edi, -0x1c }
	__asm { jmp L_009d73f7 }
	__asm { L_009d73f5: }
	__asm { xor edi, edi }
	__asm { L_009d73f7: }
	__asm { mov ecx, dword ptr [ebx + 0x30] }
	__asm { mov eax, dword ptr [edi + 0x12c] }
	__asm { mov edx, dword ptr [ebx + 0x2c] }
	__asm { mov eax, dword ptr [eax + ecx] }
	__asm { mov esi, dword ptr [ebx + 0x28] }
	__asm { push ecx }
	__asm { add eax, edi }
	__asm { lea ecx, [edx + 0x12c] }
	__asm { fstp dword ptr [esp] }
	__asm { add ecx, eax }
	__asm { call esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009cfe80();
// FUNCTION: ROBLOXSTUDIO 0x009d76b0
extern "C" __declspec(naked) void asm_009d76b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push 0 }
	__asm { lea eax, [ebx + 0x34] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_009cfe80 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { test ecx, ecx }
	__asm { je L_009d76d5 }
	__asm { lea edi, [ecx - 0x1c] }
	__asm { jmp L_009d76d7 }
	__asm { L_009d76d5: }
	__asm { xor edi, edi }
	__asm { L_009d76d7: }
	__asm { mov ecx, dword ptr [ebx + 0x30] }
	__asm { mov edx, dword ptr [ebx + 0x2c] }
	__asm { mov esi, dword ptr [ebx + 0x28] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi + 0x12c] }
	__asm { mov eax, dword ptr [eax + ecx] }
	__asm { add eax, edi }
	__asm { lea ecx, [edx + 0x12c] }
	__asm { add ecx, eax }
	__asm { call esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0078a830();
// FUNCTION: ROBLOXSTUDIO 0x009d7740
extern "C" __declspec(naked) void asm_009d7740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push 0 }
	__asm { lea eax, [ebx + 0x34] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0078a830 }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_009d7768 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_009d776a }
	__asm { L_009d7768: }
	__asm { xor edi, edi }
	__asm { L_009d776a: }
	__asm { mov ecx, dword ptr [ebx + 0x30] }
	__asm { mov eax, dword ptr [edi + 0x12c] }
	__asm { mov edx, dword ptr [ebx + 0x2c] }
	__asm { mov eax, dword ptr [eax + ecx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebx + 0x28] }
	__asm { add eax, edi }
	__asm { lea ecx, [edx + 0x12c] }
	__asm { add ecx, eax }
	__asm { call esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00410d50();
extern "C" void fn_007d5d30();
extern "C" void fn_009cff90();
// FUNCTION: ROBLOXSTUDIO 0x009d7880
extern "C" __declspec(naked) void asm_009d7880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push 0 }
	__asm { lea eax, [ebx + 0x34] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_009cff90 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { test ecx, ecx }
	__asm { je L_009d78a5 }
	__asm { lea edi, [ecx - 0x1c] }
	__asm { jmp L_009d78a7 }
	__asm { L_009d78a5: }
	__asm { xor edi, edi }
	__asm { L_009d78a7: }
	__asm { mov ecx, dword ptr [ebx + 0x30] }
	__asm { mov edx, dword ptr [ebx + 0x2c] }
	__asm { mov esi, dword ptr [ebx + 0x28] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi + 0x12c] }
	__asm { mov eax, dword ptr [eax + ecx] }
	__asm { add eax, edi }
	__asm { lea ecx, [edx + 0x12c] }
	__asm { add ecx, eax }
	__asm { call esi }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { call fn_007d5d30 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { call fn_00410d50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009d84a0
extern "C" __declspec(naked) void asm_009d84a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x324], 0 }
	__asm { je L_009d8509 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009d84f6 }
	__asm { cmp dword ptr [esi + 0x328], 0 }
	__asm { jne L_009d84f6 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009d84e5 }
	__asm { push 0x1b0 }
	__asm { push 0xe9663c }
	__asm { push 0xe96814 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009d84f6 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009d84e5: }
	__asm { movzx eax, al }
	__asm { push 0xe96828 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009d84f6: }
	__asm { mov ecx, dword ptr [esi + 0x328] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { cmp eax, 0xf }
	__asm { sete al }
	__asm { pop esi }
	__asm { ret }
	__asm { L_009d8509: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00532170();
extern "C" void fn_007cd560();
extern "C" void fn_0099ff60();
// FUNCTION: ROBLOXSTUDIO 0x009d89d0
extern "C" __declspec(naked) void asm_009d89d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { lea edi, [ecx - 0x128] }
	__asm { test edi, edi }
	__asm { je L_009d8a17 }
	__asm { mov edi, dword ptr [edi + 0x38] }
	__asm { test edi, edi }
	__asm { je L_009d8a17 }
	__asm { add edi, 0x1c }
	__asm { je L_009d8a17 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00532170 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_009d8a17 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_009d8a17 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_0099ff60 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009d8a17: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_007b3490();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009d8ae0
extern "C" __declspec(naked) void asm_009d8ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd414b9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { xor ebx, ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov esi, dword ptr [ecx + 0x298] }
	__asm { test esi, esi }
	__asm { je L_009d8b42 }
	__asm { push 0xe }
	__asm { push 0xe969c8 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { mov byte ptr [ebp - 0x28], bl }
	__asm { call fn_004038a0 }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov ebx, 1 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_007b3490 }
	__asm { mov esi, eax }
	__asm { jmp L_009d8b44 }
	__asm { L_009d8b42: }
	__asm { xor esi, esi }
	__asm { L_009d8b44: }
	__asm { test bl, 1 }
	__asm { je L_009d8b5a }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_009d8b5a }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009d8b5a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00532170();
extern "C" void fn_007cd560();
extern "C" void fn_00b15430();
// FUNCTION: ROBLOXSTUDIO 0x009d8ba0
extern "C" __declspec(naked) void asm_009d8ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { lea edi, [ecx - 0x128] }
	__asm { test edi, edi }
	__asm { je L_009d8bf0 }
	__asm { mov edi, dword ptr [edi + 0x38] }
	__asm { test edi, edi }
	__asm { je L_009d8bf0 }
	__asm { add edi, 0x1c }
	__asm { je L_009d8bf0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00532170 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_009d8bf0 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_009d8bf0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 8], 0x9d5200 }
	__asm { call fn_00b15430 }
	__asm { L_009d8bf0: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009d8f90
extern "C" __declspec(naked) void asm_009d8f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_009d8fa5 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_009d8fa7 }
	__asm { L_009d8fa5: }
	__asm { xor edx, edx }
	__asm { L_009d8fa7: }
	__asm { mov ecx, dword ptr [edx + 0x12c] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [esi + 0xc] }
	__asm { lea ecx, [edx + 0x12c] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { call eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b3490();
extern "C" void fn_009d8c00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009d9150
extern "C" __declspec(naked) void asm_009d9150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009d8c00 }
	__asm { test eax, eax }
	__asm { je L_009d91aa }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_007b3490 }
	__asm { test eax, eax }
	__asm { je L_009d91aa }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009d9198 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009d9198: }
	__asm { mov al, 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_009d91aa: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009d91bb }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009d91bb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor al, al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009dc0c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009db090
extern "C" __declspec(naked) void asm_009db090()
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
	__asm { push 9 }
	__asm { mov esi, ecx }
	__asm { push 0xe97268 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x2d8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009dc0c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop esi }
	__asm { jb L_009db0fa }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009db0fa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10500[];
extern "C" void fn_008bbcc0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x009dbb00
extern "C" __declspec(naked) void asm_009dbb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0x11f9cd4 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [edi] }
	__asm { mov esi, ecx }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test eax, eax }
	__asm { je L_009dbb35 }
	__asm { lea eax, [ebp + 8] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { push eax }
	__asm { call fn_008bbcc0 }
	__asm { L_009dbb35: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_009dbb6d }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { cmp edx, eax }
	__asm { je L_009dbb6d }
	__asm { L_009dbb46: }
	__asm { cmp dword ptr [edx], ecx }
	__asm { je L_009dbb51 }
	__asm { add edx, 4 }
	__asm { cmp edx, eax }
	__asm { jne L_009dbb46 }
	__asm { L_009dbb51: }
	__asm { cmp edx, eax }
	__asm { je L_009dbb6d }
	__asm { lea ecx, [edx + 4] }
	__asm { sub eax, ecx }
	__asm { and eax, 0xfffffffc }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { add dword ptr [esi + 0x14], -4 }
	__asm { L_009dbb6d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b3490();
extern "C" void fn_007b5ea0();
extern "C" void fn_009d8c00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009dc1c0
extern "C" __declspec(naked) void asm_009dc1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009d8c00 }
	__asm { test eax, eax }
	__asm { je L_009dc225 }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_007b3490 }
	__asm { test eax, eax }
	__asm { je L_009dc225 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { call fn_007b5ea0 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009dc213 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009dc213: }
	__asm { mov al, 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_009dc225: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009dc236 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009dc236: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor al, al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012f4140[];
extern "C" void fn_004115f0();
extern "C" void fn_00814630();
extern "C" void fn_009d14c0();
extern "C" void fn_009dc1c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009dc250
extern "C" __declspec(naked) void asm_009dc250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4132e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x8222c0 }
	__asm { push 0x12f2e80 }
	__asm { mov esi, ecx }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4140] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009dc2b4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4140], eax }
	__asm { mov ecx, 0x12f40b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009d14c0 }
	__asm { push 0xde8420 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009dc2b4: }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { lea edx, [ebp + 8] }
	__asm { push edx }
	__asm { push eax }
	__asm { mov ecx, 0x12f40b8 }
	__asm { call fn_00814630 }
	__asm { mov ecx, esi }
	__asm { call fn_009dc1c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01305cb8[];
extern "C" char g_01305cbc[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009dcda0
extern "C" __declspec(naked) void asm_009dcda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4164e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01305cbc] }
	__asm { test al, 1 }
	__asm { jne L_009dce13 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01305cbc], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009dcdfe }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01305cb8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009dcdfe: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01305cb8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009dce13: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01305cb8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305cb0[];
extern "C" char g_01305cb4[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009dce30
extern "C" __declspec(naked) void asm_009dce30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4166e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01305cb4] }
	__asm { test al, 1 }
	__asm { jne L_009dcea3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01305cb4], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009dce8e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01305cb0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009dce8e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01305cb0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009dcea3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01305cb0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305cd8[];
extern "C" char g_01305cdc[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009dcec0
extern "C" __declspec(naked) void asm_009dcec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4168e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01305cdc] }
	__asm { test al, 1 }
	__asm { jne L_009dcf33 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01305cdc], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009dcf1e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01305cd8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009dcf1e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01305cd8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009dcf33: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01305cd8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4e04[];
extern "C" char g_012e757c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009deb10
extern "C" __declspec(naked) void asm_009deb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41746 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe97564 }
	__asm { mov dword ptr [esi + 4], 0xe975dc }
	__asm { mov dword ptr [esi + 0x18], 0xe975e4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe975f0 }
	__asm { mov eax, dword ptr [g_012e757c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009deba9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e757c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6d934 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7450 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009deba9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e7450 }
	__asm { inc dword ptr [g_012e4e04] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4ae4[];
extern "C" char g_012e5694[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009df700
extern "C" __declspec(naked) void asm_009df700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41846 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe976ac }
	__asm { mov dword ptr [esi + 4], 0xe97724 }
	__asm { mov dword ptr [esi + 0x18], 0xe9772c }
	__asm { mov dword ptr [esi + 0x1c], 0xe97738 }
	__asm { mov eax, dword ptr [g_012e5694] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009df799 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5694], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9769c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5568 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ee0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009df799: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e5568 }
	__asm { inc dword ptr [g_012e4ae4] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4e80[];
extern "C" char g_0132000c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af830();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009dfdf0
extern "C" __declspec(naked) void asm_009dfdf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41886 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af830 }
	__asm { mov dword ptr [esi], 0xe97a8c }
	__asm { mov dword ptr [esi + 4], 0xe97b04 }
	__asm { mov dword ptr [esi + 0x18], 0xe97b0c }
	__asm { mov dword ptr [esi + 0x1c], 0xe97b18 }
	__asm { mov eax, dword ptr [g_0132000c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009dfe8a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0132000c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe97938 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1320010 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddf670 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009dfe8a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x1320010 }
	__asm { inc dword ptr [g_012e4e80] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4e7c[];
extern "C" char g_0131fed8[];
extern "C" void fn_004118e0();
extern "C" void fn_007af830();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009dfeb0
extern "C" __declspec(naked) void asm_009dfeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd418a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af830 }
	__asm { mov dword ptr [esi], 0xe9794c }
	__asm { mov dword ptr [esi + 4], 0xe979c4 }
	__asm { mov dword ptr [esi + 0x18], 0xe979cc }
	__asm { mov dword ptr [esi + 0x1c], 0xe979d8 }
	__asm { mov eax, dword ptr [g_0131fed8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009dff4a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131fed8], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe97928 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131fee0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddf680 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009dff4a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131fee0 }
	__asm { inc dword ptr [g_012e4e7c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a8f640();
// FUNCTION: ROBLOXSTUDIO 0x009e0ce0
extern "C" __declspec(naked) void asm_009e0ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { mov edx, esp }
	__asm { mov edi, 0xe986f4 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { call fn_00a8f640 }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_009e0d36 }
	__asm { or edi, 1 }
	__asm { mov dword ptr [esi], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x1c }
	__asm { L_009e0d36: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00a8f640();
// FUNCTION: ROBLOXSTUDIO 0x009e0d50
extern "C" __declspec(naked) void asm_009e0d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { mov edx, esp }
	__asm { mov edi, 0xe986ec }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { call fn_00a8f640 }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_009e0da6 }
	__asm { or edi, 1 }
	__asm { mov dword ptr [esi], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x1c }
	__asm { L_009e0da6: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_009e6ad0();
extern "C" void fn_009e8f20();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009e1890
extern "C" __declspec(naked) void asm_009e1890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41961 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_009e8f20 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea edx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { mov dword ptr [ebp - 0x1c], edx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edx, edx }
	__asm { je L_009e18ec }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ecx + 8] }
	__asm { push eax }
	__asm { lea ecx, [edx + 8] }
	__asm { call fn_009e6ad0 }
	__asm { L_009e18ec: }
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

extern "C" char g_0131fed8[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009e5390
extern "C" __declspec(naked) void asm_009e5390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41c1e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131fed8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009e5405 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131fed8], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe97928 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131fee0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddf680 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009e5405: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x131fee0 }
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
extern "C" void fn_009ea710();
// FUNCTION: ROBLOXSTUDIO 0x009e72d0
extern "C" __declspec(naked) void asm_009e72d0()
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
	__asm { call fn_009ea710 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009e7342 }
	__asm { add esi, 5 }
	__asm { je L_009e7312 }
	__asm { add esi, -5 }
	__asm { jmp L_009e7314 }
	__asm { L_009e7312: }
	__asm { xor esi, esi }
	__asm { L_009e7314: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009e7341 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009e7341 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009e7341: }
	__asm { pop edi }
	__asm { L_009e7342: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_009eaaa0();
// FUNCTION: ROBLOXSTUDIO 0x009e7360
extern "C" __declspec(naked) void asm_009e7360()
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
	__asm { call fn_009eaaa0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009e73d2 }
	__asm { add esi, 5 }
	__asm { je L_009e73a2 }
	__asm { add esi, -5 }
	__asm { jmp L_009e73a4 }
	__asm { L_009e73a2: }
	__asm { xor esi, esi }
	__asm { L_009e73a4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009e73d1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009e73d1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009e73d1: }
	__asm { pop edi }
	__asm { L_009e73d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_009eae30();
// FUNCTION: ROBLOXSTUDIO 0x009e73f0
extern "C" __declspec(naked) void asm_009e73f0()
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
	__asm { call fn_009eae30 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009e7462 }
	__asm { add esi, 5 }
	__asm { je L_009e7432 }
	__asm { add esi, -5 }
	__asm { jmp L_009e7434 }
	__asm { L_009e7432: }
	__asm { xor esi, esi }
	__asm { L_009e7434: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009e7461 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009e7461 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009e7461: }
	__asm { pop edi }
	__asm { L_009e7462: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_009eb1c0();
// FUNCTION: ROBLOXSTUDIO 0x009e7480
extern "C" __declspec(naked) void asm_009e7480()
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
	__asm { call fn_009eb1c0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009e74f2 }
	__asm { add esi, 5 }
	__asm { je L_009e74c2 }
	__asm { add esi, -5 }
	__asm { jmp L_009e74c4 }
	__asm { L_009e74c2: }
	__asm { xor esi, esi }
	__asm { L_009e74c4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009e74f1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009e74f1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009e74f1: }
	__asm { pop edi }
	__asm { L_009e74f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009e75b0();
// FUNCTION: ROBLOXSTUDIO 0x009e7650
extern "C" __declspec(naked) void asm_009e7650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd42028 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009e769d }
	__asm { test al, 1 }
	__asm { jne L_009e7696 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009e7696 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009e7696: }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_009e769d: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009e75b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009e7510();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009e8e00
extern "C" __declspec(naked) void asm_009e8e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41ef8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009e8e51 }
	__asm { test al, 1 }
	__asm { jne L_009e8e4a }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x38] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009e8e4a }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009e8e4a: }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { L_009e8e51: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009e7510 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_009e8e6e }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009e8e6e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009e1360();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009e9130
extern "C" __declspec(naked) void asm_009e9130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49f08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { add ecx, 0x10 }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009e1360 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_009e9188 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009e9188: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00403540();
extern "C" void fn_009e7c70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009e91a0
extern "C" __declspec(naked) void asm_009e91a0()
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
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_009e7c70 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_009e9202 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009e9202: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_009e4440();
// FUNCTION: ROBLOXSTUDIO 0x009e9790
extern "C" __declspec(naked) void asm_009e9790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27058 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x34] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ecx + 0x30] }
	__asm { push dword ptr [ecx + 0x2c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009e4440 }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009e97f5 }
	__asm { test al, 1 }
	__asm { jne L_009e97f5 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009e97f5 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009e97f5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009ec9b0
extern "C" __declspec(naked) void asm_009ec9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 0x2c] }
	__asm { add ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { push 1 }
	__asm { call eax }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov esi, eax }
	__asm { test cl, cl }
	__asm { je L_009eca0d }
	__asm { test esi, esi }
	__asm { jne L_009eca0d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009ec9fa }
	__asm { push 0xe9 }
	__asm { push 0xe52268 }
	__asm { push 0xe55e7c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009eca0b }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_009ec9fa: }
	__asm { movzx eax, cl }
	__asm { push 0xe55e80 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009eca0b: }
	__asm { mov eax, esi }
	__asm { L_009eca0d: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009e1520();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009ed390
extern "C" __declspec(naked) void asm_009ed390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49f08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009e1520 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_009ed3e2 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ed3e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009ed490
extern "C" __declspec(naked) void asm_009ed490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd57a18 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_009ed4d5 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ed4d5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x009ef070
extern "C" __declspec(naked) void asm_009ef070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_009ef0b8 }
	__asm { cmp eax, 1 }
	__asm { je L_009ef0b8 }
	__asm { cmp eax, 2 }
	__asm { je L_009ef0e4 }
	__asm { cmp eax, 3 }
	__asm { jne L_009ef0a7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x1242fe8 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009ef0a7: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1242fe8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009ef0b8: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_009ef0e4 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { L_009ef0e4: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x009ef0f0
extern "C" __declspec(naked) void asm_009ef0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_009ef138 }
	__asm { cmp eax, 1 }
	__asm { je L_009ef138 }
	__asm { cmp eax, 2 }
	__asm { je L_009ef164 }
	__asm { cmp eax, 3 }
	__asm { jne L_009ef127 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x1242ee0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009ef127: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1242ee0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009ef138: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_009ef164 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { L_009ef164: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306100[];
extern "C" char g_01306104[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009f0970
extern "C" __declspec(naked) void asm_009f0970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4290e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01306104] }
	__asm { test al, 1 }
	__asm { jne L_009f09e3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01306104], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009f09ce }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01306100], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f09ce: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01306100], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f09e3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01306100] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013060f8[];
extern "C" char g_013060fc[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009f0a00
extern "C" __declspec(naked) void asm_009f0a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4292e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013060fc] }
	__asm { test al, 1 }
	__asm { jne L_009f0a73 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013060fc], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009f0a5e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013060f8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f0a5e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013060f8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f0a73: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013060f8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013060f0[];
extern "C" char g_013060f4[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009f0a90
extern "C" __declspec(naked) void asm_009f0a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4294e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013060f4] }
	__asm { test al, 1 }
	__asm { jne L_009f0b03 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013060f4], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009f0aee }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013060f0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f0aee: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013060f0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f0b03: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013060f0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306108[];
extern "C" char g_0130610c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009f0b20
extern "C" __declspec(naked) void asm_009f0b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4296e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130610c] }
	__asm { test al, 1 }
	__asm { jne L_009f0b93 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130610c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009f0b7e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01306108], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f0b7e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01306108], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f0b93: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01306108] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306148[];
extern "C" char g_0130614c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009f0bb0
extern "C" __declspec(naked) void asm_009f0bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4298e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130614c] }
	__asm { test al, 1 }
	__asm { jne L_009f0c23 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130614c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009f0c0e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01306148], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f0c0e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01306148], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f0c23: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01306148] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306140[];
extern "C" char g_01306144[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009f0c40
extern "C" __declspec(naked) void asm_009f0c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd429ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01306144] }
	__asm { test al, 1 }
	__asm { jne L_009f0cb3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01306144], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009f0c9e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01306140], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f0c9e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01306140], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f0cb3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01306140] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306138[];
extern "C" char g_0130613c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009f0cd0
extern "C" __declspec(naked) void asm_009f0cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd429ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130613c] }
	__asm { test al, 1 }
	__asm { jne L_009f0d43 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130613c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009f0d2e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01306138], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f0d2e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01306138], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f0d43: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01306138] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306158[];
extern "C" char g_0130615c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009f0d60
extern "C" __declspec(naked) void asm_009f0d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd429ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130615c] }
	__asm { test al, 1 }
	__asm { jne L_009f0dd3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130615c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009f0dbe }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01306158], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f0dbe: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01306158], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f0dd3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01306158] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009f1280
extern "C" __declspec(naked) void asm_009f1280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { mov eax, 0xf8c9 }
	__asm { test ebx, ebx }
	__asm { je L_009f12be }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_009f1297: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { inc esi }
	__asm { movzx edx, byte ptr [esi + ecx - 1] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { imul ecx, eax }
	__asm { imul eax, eax, 0x5c6b7 }
	__asm { add edx, ecx }
	__asm { mov dword ptr [edi], edx }
	__asm { cmp esi, ebx }
	__asm { jb L_009f1297 }
	__asm { and dword ptr [edi], 0x7fffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f12be: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { and dword ptr [eax], 0x7fffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009f2ac0();
extern "C" void fn_009f2b40();
// FUNCTION: ROBLOXSTUDIO 0x009f2a70
extern "C" __declspec(naked) void asm_009f2a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { lea eax, [esi + 0x24] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { lea eax, [edi + 0x24] }
	__asm { push eax }
	__asm { call fn_009f2b40 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009f2a9a }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f2a9a: }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_009f2ac0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { pop edi }
	__asm { setne al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009f7bb0
extern "C" __declspec(naked) void asm_009f7bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_009f7bf7 }
	__asm { mov dword ptr [edx], 0xe9a3e8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_009f7bf9 }
	__asm { L_009f7bf7: }
	__asm { xor edx, edx }
	__asm { L_009f7bf9: }
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
// FUNCTION: ROBLOXSTUDIO 0x009f7c10
extern "C" __declspec(naked) void asm_009f7c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_009f7c57 }
	__asm { mov dword ptr [edx], 0xe9a3d4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_009f7c59 }
	__asm { L_009f7c57: }
	__asm { xor edx, edx }
	__asm { L_009f7c59: }
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
// FUNCTION: ROBLOXSTUDIO 0x009f7c70
extern "C" __declspec(naked) void asm_009f7c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_009f7cb7 }
	__asm { mov dword ptr [edx], 0xe9a3fc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_009f7cb9 }
	__asm { L_009f7cb7: }
	__asm { xor edx, edx }
	__asm { L_009f7cb9: }
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

extern "C" char g_012de44c[];
extern "C" char g_012e4ac0[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009f7cd0
extern "C" __declspec(naked) void asm_009f7cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd42cd6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe99314 }
	__asm { mov dword ptr [esi + 4], 0xe9938c }
	__asm { mov dword ptr [esi + 0x18], 0xe99394 }
	__asm { mov dword ptr [esi + 0x1c], 0xe993a0 }
	__asm { mov eax, dword ptr [g_012de44c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009f7d69 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de44c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003648 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12de320 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde06f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009f7d69: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12de320 }
	__asm { inc dword ptr [g_012e4ac0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
extern "C" void fn_006da0e0();
extern "C" void fn_00892440();
extern "C" void fn_009f8cf0();
// FUNCTION: ROBLOXSTUDIO 0x009f8da0
extern "C" __declspec(naked) void asm_009f8da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x64 }
	__asm { push esi }
	__asm { push edi }
	__asm { add ecx, 0xffffff18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009f8cf0 }
	__asm { test eax, eax }
	__asm { je L_009f8de7 }
	__asm { mov ecx, eax }
	__asm { call fn_00892440 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea edi, [ebp - 0x34] }
	__asm { jmp L_009f8df1 }
	__asm { L_009f8de7: }
	__asm { lea ecx, [ebp - 0x64] }
	__asm { call fn_006da0e0 }
	__asm { mov edi, eax }
	__asm { L_009f8df1: }
	__asm { mov esi, dword ptr [ebp + 8] }
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
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009f8e80
extern "C" __declspec(naked) void asm_009f8e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_009f8e95 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_009f8e97 }
	__asm { L_009f8e95: }
	__asm { xor edx, edx }
	__asm { L_009f8e97: }
	__asm { mov ecx, dword ptr [edx + 0x8c] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [esi + 0xc] }
	__asm { lea ecx, [edx + 0x8c] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { call eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x009f8ee0
extern "C" __declspec(naked) void asm_009f8ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_009f8ef3 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_009f8ef5 }
	__asm { L_009f8ef3: }
	__asm { xor edx, edx }
	__asm { L_009f8ef5: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [edx + 0x8c] }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add ecx, 0x8c }
	__asm { add ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], ecx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x009f9050
extern "C" __declspec(naked) void asm_009f9050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_009f9098 }
	__asm { cmp eax, 1 }
	__asm { je L_009f9098 }
	__asm { cmp eax, 2 }
	__asm { je L_009f90c4 }
	__asm { cmp eax, 3 }
	__asm { jne L_009f9087 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x1247ef0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f9087: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1247ef0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f9098: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_009f90c4 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { L_009f90c4: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_009f9690();
extern "C" void fn_00c2bee0();
// FUNCTION: ROBLOXSTUDIO 0x009f9280
extern "C" __declspec(naked) void asm_009f9280()
{
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test edi, edi }
	__asm { je L_009f92de }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_009f929c }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_009f929e }
	__asm { call fn_0043ee40 }
	__asm { jmp L_009f929e }
	__asm { L_009f929c: }
	__asm { mov eax, edi }
	__asm { L_009f929e: }
	__asm { test eax, eax }
	__asm { je L_009f92de }
	__asm { push ebx }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_009f92dd }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_009f92dd }
	__asm { lea eax, [ebx - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_009f92dd }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_009f92dd }
	__asm { mov ecx, edi }
	__asm { call fn_009f9690 }
	__asm { L_009f92dd: }
	__asm { pop ebx }
	__asm { L_009f92de: }
	__asm { pop edi }
	__asm { ret 4 }
}

extern "C" char g_012dc674[];
extern "C" char g_012e4c44[];
extern "C" void fn_0052c370();
extern "C" void fn_007cbf10();
extern "C" void fn_009a36a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009fa5b0
extern "C" __declspec(naked) void asm_009fa5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd42e76 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009a36a0 }
	__asm { mov dword ptr [esi], 0xe9a42c }
	__asm { mov dword ptr [esi + 4], 0xe9a4a4 }
	__asm { mov dword ptr [esi + 0x18], 0xe9a4ac }
	__asm { mov dword ptr [esi + 0x1c], 0xe9a4b8 }
	__asm { mov eax, dword ptr [g_012dc674] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009fa647 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dc674], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9a41c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0052c370 }
	__asm { push eax }
	__asm { mov ecx, 0x12dc548 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddfca0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009fa647: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12dc548 }
	__asm { inc dword ptr [g_012e4c44] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306440[];
extern "C" char g_01306444[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x009fa6c0
extern "C" __declspec(naked) void asm_009fa6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd42e8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x9fa500 }
	__asm { push 0x1306438 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01306444] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009fa722 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01306444], eax }
	__asm { push 0xe9a418 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01306440], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009fa722: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01306440] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4ac8[];
extern "C" char g_012e70bc[];
extern "C" void fn_007706e0();
extern "C" void fn_007cbf10();
extern "C" void fn_009fb360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009fb2a0
extern "C" __declspec(naked) void asm_009fb2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd42ff6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009fb360 }
	__asm { mov dword ptr [esi], 0xe9add4 }
	__asm { mov dword ptr [esi + 4], 0xe9ae54 }
	__asm { mov dword ptr [esi + 0x18], 0xe9ae5c }
	__asm { mov dword ptr [esi + 0x1c], 0xe9ae68 }
	__asm { mov dword ptr [esi + 0x64], 0xe9ae78 }
	__asm { mov eax, dword ptr [g_012e70bc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009fb33e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e70bc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003664 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007706e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6f90 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7620 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009fb33e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e6f90 }
	__asm { inc dword ptr [g_012e4ac8] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e06a4[];
extern "C" char g_012e4cac[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009fb360
extern "C" __declspec(naked) void asm_009fb360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43016 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe9a63c }
	__asm { mov dword ptr [esi + 4], 0xe9a6b4 }
	__asm { mov dword ptr [esi + 0x18], 0xe9a6bc }
	__asm { mov dword ptr [esi + 0x1c], 0xe9a6c8 }
	__asm { mov eax, dword ptr [g_012e06a4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009fb3f9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e06a4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9a5f8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e0578 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1510 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009fb3f9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e0578 }
	__asm { inc dword ptr [g_012e4cac] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0444[];
extern "C" char g_012e4c2c[];
extern "C" void fn_007706e0();
extern "C" void fn_007cbf10();
extern "C" void fn_009fb360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009fb420
extern "C" __declspec(naked) void asm_009fb420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43036 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009fb360 }
	__asm { mov dword ptr [esi], 0xe9a874 }
	__asm { mov dword ptr [esi + 4], 0xe9a8f4 }
	__asm { mov dword ptr [esi + 0x18], 0xe9a8fc }
	__asm { mov dword ptr [esi + 0x1c], 0xe9a908 }
	__asm { mov dword ptr [esi + 0x64], 0xe9a918 }
	__asm { mov eax, dword ptr [g_012e0444] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009fb4be }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0444], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9a60c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007706e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e0318 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1530 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009fb4be: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e0318 }
	__asm { inc dword ptr [g_012e4c2c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4b58[];
extern "C" char g_012e6e5c[];
extern "C" void fn_007707e0();
extern "C" void fn_007cbf10();
extern "C" void fn_009fb8b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009fb4e0
extern "C" __declspec(naked) void asm_009fb4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43056 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009fb8b0 }
	__asm { mov dword ptr [esi], 0xe9aa94 }
	__asm { mov dword ptr [esi + 4], 0xe9ab18 }
	__asm { mov dword ptr [esi + 0x18], 0xe9ab20 }
	__asm { mov dword ptr [esi + 0x1c], 0xe9ab2c }
	__asm { mov dword ptr [esi + 0x64], 0xe9ab3c }
	__asm { mov eax, dword ptr [g_012e6e5c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009fb57e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e6e5c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x10036d0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007707e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6d30 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009fb57e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e6d30 }
	__asm { inc dword ptr [g_012e4b58] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4b54[];
extern "C" char g_012e6f8c[];
extern "C" void fn_007707e0();
extern "C" void fn_007cbf10();
extern "C" void fn_009fb8b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009fb5a0
extern "C" __declspec(naked) void asm_009fb5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43076 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009fb8b0 }
	__asm { mov dword ptr [esi], 0xe9ac34 }
	__asm { mov dword ptr [esi + 4], 0xe9acb8 }
	__asm { mov dword ptr [esi + 0x18], 0xe9acc0 }
	__asm { mov dword ptr [esi + 0x1c], 0xe9accc }
	__asm { mov dword ptr [esi + 0x64], 0xe9acdc }
	__asm { mov eax, dword ptr [g_012e6f8c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009fb63e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e6f8c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003718 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007707e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6e60 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7dd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009fb63e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e6e60 }
	__asm { inc dword ptr [g_012e4b54] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0314[];
extern "C" char g_012e4b50[];
extern "C" void fn_007706e0();
extern "C" void fn_007cbf10();
extern "C" void fn_009fb360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009fb660
extern "C" __declspec(naked) void asm_009fb660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43096 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009fb360 }
	__asm { mov dword ptr [esi], 0xe9a6dc }
	__asm { mov dword ptr [esi + 4], 0xe9a75c }
	__asm { mov dword ptr [esi + 0x18], 0xe9a764 }
	__asm { mov dword ptr [esi + 0x1c], 0xe9a770 }
	__asm { mov dword ptr [esi + 0x64], 0xe9a780 }
	__asm { mov eax, dword ptr [g_012e0314] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009fb6fe }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0314], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003720 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007706e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e01e8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1540 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009fb6fe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e01e8 }
	__asm { inc dword ptr [g_012e4b50] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4c30[];
extern "C" char g_012e71ec[];
extern "C" void fn_007706e0();
extern "C" void fn_007cbf10();
extern "C" void fn_009fb360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009fb720
extern "C" __declspec(naked) void asm_009fb720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd430b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009fb360 }
	__asm { mov dword ptr [esi], 0xe9af34 }
	__asm { mov dword ptr [esi + 4], 0xe9afb4 }
	__asm { mov dword ptr [esi + 0x18], 0xe9afbc }
	__asm { mov dword ptr [esi + 0x1c], 0xe9afc8 }
	__asm { mov dword ptr [esi + 0x64], 0xe9afd8 }
	__asm { mov eax, dword ptr [g_012e71ec] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009fb7be }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e71ec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003744 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007706e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e70c0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009fb7be: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e70c0 }
	__asm { inc dword ptr [g_012e4c30] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_009fb2a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fb7e0
extern "C" __declspec(naked) void asm_009fb7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd430d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009fb2a0 }
	__asm { mov dword ptr [esi], 0xe9ae84 }
	__asm { mov dword ptr [esi + 4], 0xe9af04 }
	__asm { mov dword ptr [esi + 0x18], 0xe9af0c }
	__asm { mov dword ptr [esi + 0x1c], 0xe9af18 }
	__asm { mov dword ptr [esi + 0x64], 0xe9af28 }
	__asm { mov dword ptr [esi + 0x68], 0xe2 }
	__asm { mov dword ptr [esi + 0x6c], 0xe2 }
	__asm { mov dword ptr [esi + 0x70], 0xe2 }
	__asm { mov dword ptr [esi + 0x74], 0x1c }
	__asm { push 0xb }
	__asm { mov dword ptr [esi + 0x78], 0x17 }
	__asm { push 0xe9b138 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x7c], 0x17 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_009fb89a }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fb89a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008918c0();
extern "C" void fn_009d8730();
extern "C" void fn_009d8740();
extern "C" void fn_009d8ac0();
extern "C" void fn_009d8ad0();
extern "C" void fn_009d90c0();
// FUNCTION: ROBLOXSTUDIO 0x009fc0f0
extern "C" __declspec(naked) void asm_009fc0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_009d8740 }
	__asm { test eax, eax }
	__asm { je L_009fc109 }
	__asm { mov ecx, eax }
	__asm { call fn_008918c0 }
	__asm { L_009fc109: }
	__asm { mov ecx, esi }
	__asm { call fn_009d8ad0 }
	__asm { test eax, eax }
	__asm { je L_009fc11b }
	__asm { mov ecx, eax }
	__asm { call fn_008918c0 }
	__asm { L_009fc11b: }
	__asm { mov ecx, esi }
	__asm { call fn_009d90c0 }
	__asm { test eax, eax }
	__asm { je L_009fc12d }
	__asm { mov ecx, eax }
	__asm { call fn_008918c0 }
	__asm { L_009fc12d: }
	__asm { mov ecx, esi }
	__asm { call fn_009d8730 }
	__asm { test eax, eax }
	__asm { je L_009fc13f }
	__asm { mov ecx, eax }
	__asm { call fn_008918c0 }
	__asm { L_009fc13f: }
	__asm { mov ecx, esi }
	__asm { call fn_009d8ac0 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_009fc152 }
	__asm { mov ecx, eax }
	__asm { call fn_008918c0 }
	__asm { L_009fc152: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00981340();
extern "C" void fn_009cfb30();
extern "C" void fn_009d90c0();
// FUNCTION: ROBLOXSTUDIO 0x009fc160
extern "C" __declspec(naked) void asm_009fc160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_009d90c0 }
	__asm { test eax, eax }
	__asm { je L_009fc1b3 }
	__asm { mov ecx, eax }
	__asm { call fn_009cfb30 }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { je L_009fc1b3 }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { add edi, 0x68 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_00981340 }
	__asm { L_009fc1b3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01306674[];
extern "C" char g_01306678[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x009fc460
extern "C" __declspec(naked) void asm_009fc460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd42fce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x9fb150 }
	__asm { push 0x1306664 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01306678] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009fc4c2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01306678], eax }
	__asm { push 0xe9a61c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01306674], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009fc4c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01306674] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130666c[];
extern "C" char g_01306670[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x009fc4e0
extern "C" __declspec(naked) void asm_009fc4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4318e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x9fb100 }
	__asm { push 0x130665c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01306670] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009fc542 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01306670], eax }
	__asm { push 0xe9a628 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130666c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009fc542: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130666c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4790();
extern "C" void fn_009d9c50();
// FUNCTION: ROBLOXSTUDIO 0x009fc700
extern "C" __declspec(naked) void asm_009fc700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_007b4790 }
	__asm { cmp dword ptr [edi], esi }
	__asm { jne L_009fc74c }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { test eax, eax }
	__asm { je L_009fc730 }
	__asm { push eax }
	__asm { call fn_009d9c50 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009fc730 }
	__asm { mov edx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 0x78] }
	__asm { L_009fc730: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { test eax, eax }
	__asm { je L_009fc74c }
	__asm { push eax }
	__asm { call fn_009d9c50 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009fc74c }
	__asm { mov edx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 0x78] }
	__asm { L_009fc74c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130649c[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fc760
extern "C" __declspec(naked) void asm_009fc760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009fc789 }
	__asm { lea edx, [ecx + 0x1c] }
	__asm { jmp L_009fc78b }
	__asm { L_009fc789: }
	__asm { xor edx, edx }
	__asm { L_009fc78b: }
	__asm { mov ecx, dword ptr [g_0130649c] }
	__asm { lea esi, [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { push edx }
	__asm { call dword ptr [eax + 0xc] }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009fc7ac }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fc7ac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_013064c8[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fc7c0
extern "C" __declspec(naked) void asm_009fc7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009fc7e9 }
	__asm { lea edx, [ecx + 0x1c] }
	__asm { jmp L_009fc7eb }
	__asm { L_009fc7e9: }
	__asm { xor edx, edx }
	__asm { L_009fc7eb: }
	__asm { mov ecx, dword ptr [g_013064c8] }
	__asm { lea esi, [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { push edx }
	__asm { call dword ptr [eax + 0xc] }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009fc80c }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fc80c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_008918c0();
extern "C" void fn_009d8730();
extern "C" void fn_009d8740();
extern "C" void fn_009d8ac0();
extern "C" void fn_009d8ad0();
extern "C" void fn_009d8ed0();
// FUNCTION: ROBLOXSTUDIO 0x009fcff0
extern "C" __declspec(naked) void asm_009fcff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_009d8740 }
	__asm { test eax, eax }
	__asm { je L_009fd009 }
	__asm { mov ecx, eax }
	__asm { call fn_008918c0 }
	__asm { L_009fd009: }
	__asm { mov ecx, esi }
	__asm { call fn_009d8ad0 }
	__asm { test eax, eax }
	__asm { je L_009fd01b }
	__asm { mov ecx, eax }
	__asm { call fn_008918c0 }
	__asm { L_009fd01b: }
	__asm { mov ecx, esi }
	__asm { call fn_009d8ed0 }
	__asm { test eax, eax }
	__asm { je L_009fd02d }
	__asm { mov ecx, eax }
	__asm { call fn_008918c0 }
	__asm { L_009fd02d: }
	__asm { mov ecx, esi }
	__asm { call fn_009d8730 }
	__asm { test eax, eax }
	__asm { je L_009fd03f }
	__asm { mov ecx, eax }
	__asm { call fn_008918c0 }
	__asm { L_009fd03f: }
	__asm { mov ecx, esi }
	__asm { call fn_009d8ac0 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_009fd052 }
	__asm { mov ecx, eax }
	__asm { call fn_008918c0 }
	__asm { L_009fd052: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01306738[];
extern "C" char g_01306748[];
extern "C" char g_0130674c[];
extern "C" char g_01306750[];
extern "C" char g_01306754[];
extern "C" void fn_00403540();
extern "C" void fn_007cb440();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009fd300
extern "C" __declspec(naked) void asm_009fd300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd432d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01306754] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test al, 1 }
	__asm { jne L_009fd375 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01306754], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130674c], 0xf }
	__asm { mov dword ptr [g_01306748], 0 }
	__asm { mov byte ptr [g_01306738], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007cb440 }
	__asm { push 0xdfbcc0 }
	__asm { mov dword ptr [g_01306750], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009fd375: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0x1306738 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [g_01306750] }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009fe0f0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009fd8a0
extern "C" __declspec(naked) void asm_009fd8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd432f0 }
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
	__asm { je L_009fd8f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe9b7e8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_009fd8fa }
	__asm { L_009fd8f8: }
	__asm { xor eax, eax }
	__asm { L_009fd8fa: }
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
	__asm { call fn_009fe0f0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009fd930
extern "C" __declspec(naked) void asm_009fd930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43300 }
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
	__asm { je L_009fd988 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe9b7c8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_009fd98a }
	__asm { L_009fd988: }
	__asm { xor eax, eax }
	__asm { L_009fd98a: }
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
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_009fd9ae }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_009fd9ae: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_01306764[];
extern "C" char g_01306768[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x009fe0a0
extern "C" __declspec(naked) void asm_009fe0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4338e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01306768] }
	__asm { test al, 1 }
	__asm { jne L_009fe0e2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01306768], eax }
	__asm { push 0xe9b3f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01306764], eax }
	__asm { L_009fe0e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4c14[];
extern "C" char g_012e6d2c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009fe800
extern "C" __declspec(naked) void asm_009fe800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43496 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe9b414 }
	__asm { mov dword ptr [esi + 4], 0xe9b48c }
	__asm { mov dword ptr [esi + 0x18], 0xe9b494 }
	__asm { mov dword ptr [esi + 0x1c], 0xe9b4a0 }
	__asm { mov eax, dword ptr [g_012e6d2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009fe899 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e6d2c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9b3f4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6c00 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7650 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009fe899: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e6c00 }
	__asm { inc dword ptr [g_012e4c14] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403110();
extern "C" void fn_00b26510();
// FUNCTION: ROBLOXSTUDIO 0x009fe8c0
extern "C" __declspec(naked) void asm_009fe8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [edi], 0xe9b568 }
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
	__asm { jne L_009fe918 }
	__asm { sub eax, 4 }
	__asm { L_009fe918: }
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

extern "C" void fn_009ff600();
// FUNCTION: ROBLOXSTUDIO 0x009ff7a0
extern "C" __declspec(naked) void asm_009ff7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { je L_009ff7ed }
	__asm { mov edi, dword ptr [edi + 4] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi] }
	__asm { cmp esi, edi }
	__asm { je L_009ff7dc }
	__asm { L_009ff7c1: }
	__asm { push dword ptr [esi + 0x20] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { lea eax, [esi + 0x24] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [edx + 4] }
	__asm { mov esi, dword ptr [esi] }
	__asm { cmp esi, edi }
	__asm { jne L_009ff7c1 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { L_009ff7dc: }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { call fn_009ff600 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009ff7ed: }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306764[];
extern "C" char g_01306768[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x009ff990
extern "C" __declspec(naked) void asm_009ff990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4338e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x9fe0a0 }
	__asm { push 0x130675c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01306768] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009ff9f2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01306768], eax }
	__asm { push 0xe9b3f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01306764], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009ff9f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01306764] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004030b0();
extern "C" void fn_0095a840();
extern "C" void fn_009ffc50();
extern "C" void fn_00b28c90();
// FUNCTION: ROBLOXSTUDIO 0x00a00020
extern "C" __declspec(naked) void asm_00a00020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009ffc50 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp eax, dword ptr [esi + 0x28] }
	__asm { jbe L_00a00080 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { movzx eax, byte ptr [esi + 0xc] }
	__asm { lea edi, [esi + 0xc] }
	__asm { inc eax }
	__asm { add ecx, 8 }
	__asm { add eax, edi }
	__asm { je L_00a00055 }
	__asm { inc eax }
	__asm { jmp L_00a00057 }
	__asm { L_00a00055: }
	__asm { xor eax, eax }
	__asm { L_00a00057: }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0095a840 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { pop edi }
	__asm { je L_00a00080 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b28c90 }
	__asm { L_00a00080: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009b53d0();
// FUNCTION: ROBLOXSTUDIO 0x00a00b20
extern "C" __declspec(naked) void asm_00a00b20()
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
	__asm { je L_00a00b81 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_00a00b40: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_00a00b4b }
	__asm { add esi, -0x18 }
	__asm { jmp L_00a00b4d }
	__asm { L_00a00b4b: }
	__asm { xor esi, esi }
	__asm { L_00a00b4d: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_00a00b68 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x18] }
	__asm { jmp L_00a00b7a }
	__asm { L_00a00b68: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { lea edx, [esi + 0x18] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_00a00b7a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00a00b40 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00a00b81: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004030b0();
extern "C" void fn_0095a840();
extern "C" void fn_00b28c90();
// FUNCTION: ROBLOXSTUDIO 0x00a00ce0
extern "C" __declspec(naked) void asm_00a00ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea edi, [esi + 0xc] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { movzx eax, byte ptr [edi] }
	__asm { inc eax }
	__asm { add edx, 8 }
	__asm { add eax, edi }
	__asm { je L_00a00cff }
	__asm { inc eax }
	__asm { jmp L_00a00d01 }
	__asm { L_00a00cff: }
	__asm { xor eax, eax }
	__asm { L_00a00d01: }
	__asm { push eax }
	__asm { push edx }
	__asm { push edx }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_0095a840 }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { je L_00a00d29 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b28c90 }
	__asm { L_00a00d29: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b53d0();
extern "C" void fn_00a00b20();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x00a01040
extern "C" __declspec(naked) void asm_00a01040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_00a01074 }
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
	__asm { L_00a01074: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_00a010aa }
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
	__asm { je L_00a010aa }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00a00b20 }
	__asm { L_00a010aa: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012dce30[];
extern "C" char g_012dce34[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00a01d10
extern "C" __declspec(naked) void asm_00a01d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd437de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x63b280 }
	__asm { push 0x12dca60 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012dce34] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a01d72 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce34], eax }
	__asm { push 0xe9b7fc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dce30], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a01d72: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012dce30] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a020f0();
// FUNCTION: ROBLOXSTUDIO 0x00a02220
extern "C" __declspec(naked) void asm_00a02220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0x14], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00a0223d }
	__asm { mov dword ptr [esi + 0x68], 0xe9bba8 }
	__asm { mov dword ptr [esi + 0xb4], 0xe780c8 }
	__asm { L_00a0223d: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, esi }
	__asm { call fn_00a020f0 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe9bbb4 }
	__asm { mov dword ptr [esi + 4], 0xe9bcc0 }
	__asm { mov dword ptr [esi + 0x18], 0xe9bcc8 }
	__asm { mov dword ptr [esi + 0x1c], 0xe9bcd4 }
	__asm { mov dword ptr [esi + 0x64], 0xe9bce4 }
	__asm { mov dword ptr [esi + 0x70], 0xe9bcec }
	__asm { mov dword ptr [esi + 0x98], 0xe9bd0c }
	__asm { mov dword ptr [esi + 0xb0], 0xe9bd40 }
	__asm { mov dword ptr [esi + 0xc4], 0xe9bd6c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe9bd74 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xac] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a022d0
extern "C" __declspec(naked) void asm_00a022d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00a02317 }
	__asm { mov dword ptr [edx], 0xe9c474 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_00a02319 }
	__asm { L_00a02317: }
	__asm { xor edx, edx }
	__asm { L_00a02319: }
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

extern "C" void fn_0064add0();
extern "C" void fn_00665970();
extern "C" void fn_008e9590();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a06500
extern "C" __declspec(naked) void asm_00a06500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd438a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_008e9590 }
	__asm { test al, al }
	__asm { je L_00a06558 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [esi] }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_0064add0 }
	__asm { lea eax, [ebx + edi*4] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_00a06558: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00665970 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}
