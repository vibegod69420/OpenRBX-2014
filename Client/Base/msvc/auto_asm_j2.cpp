// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00420870
extern "C" __declspec(naked) void asm_00420870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70ad0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_004208c9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b358 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004208cb }
	__asm { L_004208c9: }
	__asm { xor eax, eax }
	__asm { L_004208cb: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00420900
extern "C" __declspec(naked) void asm_00420900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70a50 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00420959 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b3e8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0042095b }
	__asm { L_00420959: }
	__asm { xor eax, eax }
	__asm { L_0042095b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00420990
extern "C" __declspec(naked) void asm_00420990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70a40 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_004209e9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b340 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004209eb }
	__asm { L_004209e9: }
	__asm { xor eax, eax }
	__asm { L_004209eb: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00420a20
extern "C" __declspec(naked) void asm_00420a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70a60 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00420a79 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b328 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00420a7b }
	__asm { L_00420a79: }
	__asm { xor eax, eax }
	__asm { L_00420a7b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00420ab0
extern "C" __declspec(naked) void asm_00420ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70a90 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00420b09 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3615c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00420b0b }
	__asm { L_00420b09: }
	__asm { xor eax, eax }
	__asm { L_00420b0b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00420b40
extern "C" __declspec(naked) void asm_00420b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70ae0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00420b99 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe36174 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00420b9b }
	__asm { L_00420b99: }
	__asm { xor eax, eax }
	__asm { L_00420b9b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00420bd0
extern "C" __declspec(naked) void asm_00420bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70a80 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00420c29 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3618c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00420c2b }
	__asm { L_00420c29: }
	__asm { xor eax, eax }
	__asm { L_00420c2b: }
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

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00420d50
extern "C" __declspec(naked) void asm_00420d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_00420d99 }
	__asm { cmp eax, 1 }
	__asm { je L_00420d99 }
	__asm { cmp eax, 2 }
	__asm { je L_00420db3 }
	__asm { cmp eax, 3 }
	__asm { jne L_00420d89 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12bf780 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00420d89: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12bf780 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00420d99: }
	__asm { test esi, esi }
	__asm { je L_00420db3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_00420db3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00420dc0
extern "C" __declspec(naked) void asm_00420dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70aa0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00420e19 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3b074 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00420e1b }
	__asm { L_00420e19: }
	__asm { xor eax, eax }
	__asm { L_00420e1b: }
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

extern "C" char g_0131a8b0[];
extern "C" char g_0131a8b4[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x004211c0
extern "C" __declspec(naked) void asm_004211c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70bae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131a8b0] }
	__asm { test al, 1 }
	__asm { jne L_00421202 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a8b0], eax }
	__asm { push 0xe68f10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131a8b4], eax }
	__asm { L_00421202: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e68f10[];
extern "C" char g_0131a8b0[];
extern "C" char g_0131a8b4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00421210
extern "C" __declspec(naked) void asm_00421210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70bae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_00e68f10], 0 }
	__asm { jne L_00421245 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00421245: }
	__asm { push 0x4211c0 }
	__asm { push 0x131a8b8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131a8b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0042128f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a8b0], eax }
	__asm { push 0xe68f10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131a8b4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0042128f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131a8b4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6a9d4[];
extern "C" char g_0131a8e4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004212b0
extern "C" __declspec(naked) void asm_004212b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7150e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131a8e4] }
	__asm { test al, 1 }
	__asm { jne L_0042131c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a8e4], eax }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push dword ptr [g_00e6a9d4] }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131a8e8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc400 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0042131c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131a8e8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_004218f0();
// FUNCTION: ROBLOXSTUDIO 0x004219f0
extern "C" __declspec(naked) void asm_004219f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e0ac }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x2c }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00421a59 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [esi - 0x28] }
	__asm { push eax }
	__asm { call fn_004218f0 }
	__asm { test eax, eax }
	__asm { je L_00421a59 }
	__asm { mov ecx, dword ptr [eax + 0x20] }
	__asm { add eax, 0x20 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { add eax, ecx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00421a59: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00421ce0
extern "C" __declspec(naked) void asm_00421ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6ffa8 }
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
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe1b804 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00421d20 }
	__asm { add edi, 0xc }
	__asm { jmp L_00421d22 }
	__asm { L_00421d20: }
	__asm { xor edi, edi }
	__asm { L_00421d22: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00421d38 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00421d38: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe1c680 }
	__asm { mov dword ptr [esi + 0xc], 0xe1c68c }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00422180();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004221f0
extern "C" __declspec(naked) void asm_004221f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0042220a }
	__asm { push eax }
	__asm { call fn_00422180 }
	__asm { test al, al }
	__asm { jne L_0042220a }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0042220a: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00422210: }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x80] }
	__asm { test eax, eax }
	__asm { jne L_00422265 }
	__asm { push eax }
	__asm { push 0x12bfa08 }
	__asm { push 0x12bdbf4 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x38] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00422263 }
	__asm { push 0 }
	__asm { push 0x12bfa08 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x38] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { mov ecx, eax }
	__asm { call L_00422210 }
	__asm { test eax, eax }
	__asm { je L_00422263 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00422263: }
	__asm { xor eax, eax }
	__asm { L_00422265: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_0131ab50[];
extern "C" char g_0131ab54[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00422420
extern "C" __declspec(naked) void asm_00422420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70c8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131ab50] }
	__asm { test al, 1 }
	__asm { jne L_00422462 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ab50], eax }
	__asm { push 0xe5d038 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131ab54], eax }
	__asm { L_00422462: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e5d038[];
extern "C" char g_0131ab50[];
extern "C" char g_0131ab54[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00422470
extern "C" __declspec(naked) void asm_00422470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70c8e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_00e5d038], 0 }
	__asm { jne L_004224a5 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004224a5: }
	__asm { push 0x422420 }
	__asm { push 0x131ab58 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131ab50] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004224ef }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ab50], eax }
	__asm { push 0xe5d038 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131ab54], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004224ef: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131ab54] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00422510
extern "C" __declspec(naked) void asm_00422510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [esi] }
	__asm { test edx, edx }
	__asm { je L_00422561 }
	__asm { mov dword ptr [ecx], edx }
	__asm { test dl, 1 }
	__asm { je L_0042254d }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0042254d: }
	__asm { lea eax, [ecx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00422561: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00422570
extern "C" __declspec(naked) void asm_00422570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { test ecx, ecx }
	__asm { je L_004225cb }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_004225b7 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004225b7: }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004225cb: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004105d0();
// FUNCTION: ROBLOXSTUDIO 0x00422a00
extern "C" __declspec(naked) void asm_00422a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd71d58 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { je L_00422a2c }
	__asm { push 0 }
	__asm { jmp L_00422a2e }
	__asm { L_00422a2c: }
	__asm { push 1 }
	__asm { L_00422a2e: }
	__asm { call fn_004105d0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00422a5a }
	__asm { test al, 1 }
	__asm { jne L_00422a5a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00422a5a }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00422a5a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e102d8[];
extern "C" char g_00e10318[];
extern "C" char g_00e10508[];
extern "C" void fn_00426140();
// FUNCTION: ROBLOXSTUDIO 0x00424630
extern "C" __declspec(naked) void asm_00424630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx - 0x68] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ebx, [ecx - 0x68] }
	__asm { push esi }
	__asm { mov dword ptr [eax + ebx], 0xe18340 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x68] }
	__asm { mov dword ptr [ecx + ebx - 4], eax }
	__asm { lea ecx, [ebx + 0x18] }
	__asm { mov dword ptr [ebx + 0x18], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [ebx + 0x18] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [ebx + 0x20] }
	__asm { call dword ptr [g_00e102d8] }
	__asm { lea ecx, [ebx + 0x68] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0042468c }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0042468c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" void fn_004258f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004251e0
extern "C" __declspec(naked) void asm_004251e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd719e0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00425239 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe8192c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0042523b }
	__asm { L_00425239: }
	__asm { xor eax, eax }
	__asm { L_0042523b: }
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
	__asm { call fn_004258f0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10504[];
extern "C" void fn_004259f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00425300
extern "C" __declspec(naked) void asm_00425300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd719d0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00425359 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe51790 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0042535b }
	__asm { L_00425359: }
	__asm { xor eax, eax }
	__asm { L_0042535b: }
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
	__asm { call fn_004259f0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0131ab60[];
extern "C" char g_0131ab64[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00425910
extern "C" __declspec(naked) void asm_00425910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd71c1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131ab64] }
	__asm { test al, 1 }
	__asm { jne L_0042594a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ab64], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_0131ab60], eax }
	__asm { L_0042594a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00422570();
extern "C" void fn_00425ac0();
// FUNCTION: ROBLOXSTUDIO 0x00425960
extern "C" __declspec(naked) void asm_00425960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71b08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { call fn_00425ac0 }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_004259d0 }
	__asm { test al, 1 }
	__asm { jne L_004259d0 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004259d0 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004259d0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" char g_0131ab70[];
extern "C" char g_0131ab74[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00425e20
extern "C" __declspec(naked) void asm_00425e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd71bfe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131ab70] }
	__asm { test al, 1 }
	__asm { jne L_00425e62 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ab70], eax }
	__asm { push 0xeee748 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131ab74], eax }
	__asm { L_00425e62: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eee748[];
extern "C" char g_0131ab70[];
extern "C" char g_0131ab74[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00425e70
extern "C" __declspec(naked) void asm_00425e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71bfe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_00eee748], 0 }
	__asm { jne L_00425ea5 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00425ea5: }
	__asm { push 0x425e20 }
	__asm { push 0x131ab78 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131ab70] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00425eef }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ab70], eax }
	__asm { push 0xeee748 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131ab74], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00425eef: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131ab74] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00425f40
extern "C" __declspec(naked) void asm_00425f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd719c0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00425f99 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe4e778 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00425f9b }
	__asm { L_00425f99: }
	__asm { xor eax, eax }
	__asm { L_00425f9b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00425f40();
extern "C" void fn_008bb020();
// FUNCTION: ROBLOXSTUDIO 0x00425fe0
extern "C" __declspec(naked) void asm_00425fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xc4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0042602f }
	__asm { mov ecx, eax }
	__asm { call fn_008bb020 }
	__asm { mov esi, eax }
	__asm { jmp L_00426031 }
	__asm { L_0042602f: }
	__asm { xor esi, esi }
	__asm { L_00426031: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00425f40 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00426062 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00426062 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00426062: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004263a0
extern "C" __declspec(naked) void asm_004263a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { je L_004263ef }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { cmp esi, dword ptr [eax] }
	__asm { jbe L_004263ef }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp ecx, -1 }
	__asm { je L_004263c9 }
	__asm { cmp cl, byte ptr [esi - 1] }
	__asm { je L_004263c9 }
	__asm { test byte ptr [edx + 0x3c], 2 }
	__asm { jne L_004263ef }
	__asm { L_004263c9: }
	__asm { mov eax, dword ptr [edx + 0x2c] }
	__asm { inc dword ptr [eax] }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { dec dword ptr [eax] }
	__asm { cmp ecx, -1 }
	__asm { je L_004263e6 }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov byte ptr [eax], cl }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004263e6: }
	__asm { xor ecx, ecx }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004263ef: }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00426400
extern "C" __declspec(naked) void asm_00426400()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x1c] }
	__asm { mov edx, dword ptr [esi] }
	__asm { test edx, edx }
	__asm { jne L_0042640f }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0042640f: }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0x2c] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, edx }
	__asm { cmp edx, eax }
	__asm { jae L_00426421 }
	__asm { movzx eax, byte ptr [edx] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00426421: }
	__asm { test byte ptr [ecx + 0x3c], 4 }
	__asm { jne L_00426453 }
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00426453 }
	__asm { cmp eax, edx }
	__asm { ja L_00426439 }
	__asm { cmp dword ptr [ecx + 0x38], edx }
	__asm { jbe L_00426453 }
	__asm { L_00426439: }
	__asm { cmp dword ptr [ecx + 0x38], eax }
	__asm { jae L_00426441 }
	__asm { mov dword ptr [ecx + 0x38], eax }
	__asm { L_00426441: }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { sub eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { movzx eax, byte ptr [eax] }
	__asm { ret }
	__asm { L_00426453: }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00426930
extern "C" __declspec(naked) void asm_00426930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edx] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ebx, [edx + 4] }
	__asm { lea edi, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { cmp ebx, edi }
	__asm { je L_0042697b }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_00426961 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_00426961: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { test ecx, ecx }
	__asm { je L_0042697b }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { lea eax, [ebx + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [edi], eax }
	__asm { L_0042697b: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004268f0();
extern "C" void fn_00426990();
extern "C" void fn_00426f10();
// FUNCTION: ROBLOXSTUDIO 0x00426a00
extern "C" __declspec(naked) void asm_00426a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jne L_00426a27 }
	__asm { cmp edx, dword ptr [edi + 4] }
	__asm { jne L_00426a27 }
	__asm { call fn_004268f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00426a27: }
	__asm { cmp eax, edx }
	__asm { je L_00426a5a }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push edx }
	__asm { call fn_00426990 }
	__asm { add esp, 0x10 }
	__asm { push dword ptr [edi + 4] }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00426f10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00426a5a: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x00426fa0
extern "C" __declspec(naked) void asm_00426fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd809d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { sub esp, 0x14 }
	__asm { test edx, edx }
	__asm { jne L_00426fec }
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
	__asm { L_00426fec: }
	__asm { lea eax, [ecx + 8] }
	__asm { and edx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10270[];
extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00427560
extern "C" __declspec(naked) void asm_00427560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10270] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { mov edx, 0x1005004 }
	__asm { cmovne edx, eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { jne L_004275af }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004275af: }
	__asm { mov ecx, edx }
	__asm { push edi }
	__asm { lea edi, [ecx + 1] }
	__asm { L_004275b5: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_004275b5 }
	__asm { sub ecx, edi }
	__asm { pop edi }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0042ba00
extern "C" __declspec(naked) void asm_0042ba00()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { test eax, eax }
	__asm { je L_0042ba19 }
	__asm { L_0042ba0c: }
	__asm { dec eax }
	__asm { jne L_0042ba12 }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_0042ba12: }
	__asm { test eax, eax }
	__asm { jne L_0042ba0c }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_0042ba19: }
	__asm { mov edi, dword ptr [esi + 8] }
	__asm { mov ebx, dword ptr [g_00e10508] }
	__asm { test edi, edi }
	__asm { je L_0042ba3b }
	__asm { L_0042ba26: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { dec edi }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { test eax, eax }
	__asm { je L_0042ba37 }
	__asm { push eax }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0042ba37: }
	__asm { test edi, edi }
	__asm { jne L_0042ba26 }
	__asm { L_0042ba3b: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_0042ba48 }
	__asm { push eax }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0042ba48: }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e102d8[];
extern "C" char g_00e10318[];
extern "C" void fn_0042e5f0();
// FUNCTION: ROBLOXSTUDIO 0x0042d1a0
extern "C" __declspec(naked) void asm_0042d1a0()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi - 0x78] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edi - 0x78], 0xf1129c }
	__asm { mov eax, dword ptr [edi - 0x78] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { lea eax, [edx - 0x78] }
	__asm { mov dword ptr [edx + edi - 0x7c], eax }
	__asm { cmp dword ptr [edi - 0x10], 0 }
	__asm { mov dword ptr [edi - 0x60], 0xe3addc }
	__asm { je L_0042d1eb }
	__asm { mov edx, dword ptr [edi - 0x54] }
	__asm { lea eax, [edi - 0x1c] }
	__asm { cmp dword ptr [edx], eax }
	__asm { jne L_0042d1eb }
	__asm { mov eax, dword ptr [edi - 0x28] }
	__asm { mov ecx, dword ptr [edi - 0x24] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi - 0x44] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [edi - 0x34] }
	__asm { sub ecx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_0042d1eb: }
	__asm { cmp byte ptr [edi - 0x14], 0 }
	__asm { je L_0042d1f9 }
	__asm { lea ecx, [edi - 0x60] }
	__asm { call fn_0042e5f0 }
	__asm { L_0042d1f9: }
	__asm { lea ecx, [edi - 0x60] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [edi - 0x58] }
	__asm { call dword ptr [g_00e102d8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e102e0[];
extern "C" char g_00e10318[];
extern "C" char g_00e10508[];
extern "C" void fn_00426140();
// FUNCTION: ROBLOXSTUDIO 0x0042d210
extern "C" __declspec(naked) void asm_0042d210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx - 0x60] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ebx, [ecx - 0x60] }
	__asm { push esi }
	__asm { mov dword ptr [eax + ebx], 0xe1b728 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x60] }
	__asm { mov dword ptr [ecx + ebx - 4], eax }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [ebx + 0x18] }
	__asm { call dword ptr [g_00e102e0] }
	__asm { lea ecx, [ebx + 0x60] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0042d26c }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0042d26c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10318[];
extern "C" char g_00e10508[];
extern "C" void fn_0042e5f0();
// FUNCTION: ROBLOXSTUDIO 0x0042d880
extern "C" __declspec(naked) void asm_0042d880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x50], 0 }
	__asm { mov dword ptr [esi], 0xe3addc }
	__asm { je L_0042d8b0 }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { lea eax, [esi + 0x44] }
	__asm { cmp dword ptr [edx], eax }
	__asm { jne L_0042d8b0 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { sub ecx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_0042d8b0: }
	__asm { cmp byte ptr [esi + 0x4c], 0 }
	__asm { je L_0042d8bd }
	__asm { mov ecx, esi }
	__asm { call fn_0042e5f0 }
	__asm { L_0042d8bd: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10318] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0042d8d5 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0042d8d5: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0042d9d0
extern "C" __declspec(naked) void asm_0042d9d0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_0042d9ec }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, ecx }
	__asm { cmp ecx, eax }
	__asm { jae L_0042d9ec }
	__asm { movzx eax, byte ptr [ecx] }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0042d9ec: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x1c] }
	__asm { mov edi, eax }
	__asm { cmp edi, -1 }
	__asm { jne L_0042da00 }
	__asm { pop edi }
	__asm { or eax, eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0042da00: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10580[];
extern "C" char g_00e12ff0[];
extern "C" void fn_0042ea80();
extern "C" void fn_0042ee70();
// FUNCTION: ROBLOXSTUDIO 0x0042e880
extern "C" __declspec(naked) void asm_0042e880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, 1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { sub edx, dword ptr [eax - 4] }
	__asm { mov eax, dword ptr [eax - 8] }
	__asm { sub eax, 0x104 }
	__asm { or edx, eax }
	__asm { jge L_0042e8a7 }
	__asm { push 0x104 }
	__asm { call fn_0042ea80 }
	__asm { L_0042e8a7: }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e12ff0] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edi, eax }
	__asm { test ecx, ecx }
	__asm { je L_0042e8cd }
	__asm { push dword ptr [ecx - 8] }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10580] }
	__asm { mov ecx, eax }
	__asm { add esp, 8 }
	__asm { test ecx, ecx }
	__asm { js L_0042e8e5 }
	__asm { L_0042e8cd: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp ecx, dword ptr [eax - 8] }
	__asm { jg L_0042e8e5 }
	__asm { mov dword ptr [eax - 0xc], ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ecx + eax], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0042e8e5: }
	__asm { push 0x80070057 }
	__asm { call fn_0042ee70 }
}

extern "C" char g_00e10580[];
extern "C" char g_00e12ff4[];
extern "C" void fn_0042ea80();
extern "C" void fn_0042ee70();
// FUNCTION: ROBLOXSTUDIO 0x0042e8f0
extern "C" __declspec(naked) void asm_0042e8f0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax - 0xc] }
	__asm { test edx, edx }
	__asm { js L_0042e94e }
	__asm { mov ecx, 1 }
	__asm { sub ecx, dword ptr [eax - 4] }
	__asm { mov eax, dword ptr [eax - 8] }
	__asm { sub eax, edx }
	__asm { or ecx, eax }
	__asm { jge L_0042e916 }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_0042ea80 }
	__asm { L_0042e916: }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e12ff4] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edi, eax }
	__asm { test ecx, ecx }
	__asm { je L_0042e939 }
	__asm { push dword ptr [ecx - 8] }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10580] }
	__asm { mov ecx, eax }
	__asm { add esp, 8 }
	__asm { test ecx, ecx }
	__asm { js L_0042e94e }
	__asm { L_0042e939: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp ecx, dword ptr [eax - 8] }
	__asm { jg L_0042e94e }
	__asm { mov dword ptr [eax - 0xc], ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ecx + eax], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0042e94e: }
	__asm { push 0x80070057 }
	__asm { call fn_0042ee70 }
}

extern "C" char g_00e10580[];
extern "C" char g_00e12ff8[];
extern "C" void fn_0042ea80();
extern "C" void fn_0042ee70();
// FUNCTION: ROBLOXSTUDIO 0x0042e960
extern "C" __declspec(naked) void asm_0042e960()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax - 0xc] }
	__asm { test edx, edx }
	__asm { js L_0042e9bc }
	__asm { mov ecx, 1 }
	__asm { sub ecx, dword ptr [eax - 4] }
	__asm { mov eax, dword ptr [eax - 8] }
	__asm { sub eax, edx }
	__asm { or ecx, eax }
	__asm { jge L_0042e985 }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_0042ea80 }
	__asm { L_0042e985: }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e12ff8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { jne L_0042e997 }
	__asm { xor ecx, ecx }
	__asm { jmp L_0042e9aa }
	__asm { L_0042e997: }
	__asm { push dword ptr [eax - 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10580] }
	__asm { mov ecx, eax }
	__asm { add esp, 8 }
	__asm { test ecx, ecx }
	__asm { js L_0042e9bc }
	__asm { L_0042e9aa: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp ecx, dword ptr [eax - 8] }
	__asm { jg L_0042e9bc }
	__asm { mov dword ptr [eax - 0xc], ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop esi }
	__asm { mov byte ptr [ecx + eax], 0 }
	__asm { ret }
	__asm { L_0042e9bc: }
	__asm { push 0x80070057 }
	__asm { call fn_0042ee70 }
}

extern "C" void fn_0042ebb0();
extern "C" void fn_0042ec30();
// FUNCTION: ROBLOXSTUDIO 0x0042ea80
extern "C" __declspec(naked) void asm_0042ea80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp dword ptr [ecx - 0xc], esi }
	__asm { cmovg esi, dword ptr [ecx - 0xc] }
	__asm { cmp dword ptr [ecx - 4], 1 }
	__asm { jle L_0042eaa7 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0042ebb0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0042eaa7: }
	__asm { mov ecx, dword ptr [ecx - 8] }
	__asm { cmp ecx, esi }
	__asm { jge L_0042eae5 }
	__asm { cmp ecx, 0x40000000 }
	__asm { jle L_0042eacf }
	__asm { add ecx, 0x100000 }
	__asm { cmp ecx, esi }
	__asm { cmovl ecx, esi }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_0042ec30 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0042eacf: }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { add ecx, eax }
	__asm { cmp ecx, esi }
	__asm { cmovl ecx, esi }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_0042ec30 }
	__asm { L_0042eae5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131ddcc[];
extern "C" void fn_0042f6d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0042f4a0
extern "C" __declspec(naked) void asm_0042f4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7333e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131ddcc] }
	__asm { test al, 1 }
	__asm { jne L_0042f4e3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ddcc], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0042f6d0 }
	__asm { push 0xddc5e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0042f4e3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131ddd0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f5c[];
extern "C" void fn_007abc80();
// FUNCTION: ROBLOXSTUDIO 0x0042fe40
extern "C" __declspec(naked) void asm_0042fe40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push 0x1006618 }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10f5c] }
	__asm { test al, al }
	__asm { je L_0042fe76 }
	__asm { call fn_007abc80 }
	__asm { cmp dword ptr [eax + 0xa0], 0 }
	__asm { L_0042fe61: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sete cl }
	__asm { mov byte ptr [eax], cl }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov byte ptr [eax], 1 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042fe76: }
	__asm { push 0x1006638 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10f5c] }
	__asm { test al, al }
	__asm { je L_0042fe95 }
	__asm { call fn_007abc80 }
	__asm { cmp dword ptr [eax + 0xa0], 1 }
	__asm { jmp L_0042fe61 }
	__asm { L_0042fe95: }
	__asm { push 0x1006658 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10f5c] }
	__asm { test al, al }
	__asm { je L_0042feb4 }
	__asm { call fn_007abc80 }
	__asm { cmp dword ptr [eax + 0xa0], 2 }
	__asm { jmp L_0042fe61 }
	__asm { L_0042feb4: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10f54[];
extern "C" char g_00e10f58[];
extern "C" void fn_004085f0();
// FUNCTION: ROBLOXSTUDIO 0x004300b0
extern "C" __declspec(naked) void asm_004300b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd769e9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x44], 0 }
	__asm { je L_00430119 }
	__asm { lea eax, [esi + 0x64] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e10f58] }
	__asm { lea ecx, [esi + 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [esi + 0x3c] }
	__asm { cmp eax, edx }
	__asm { je L_00430100 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_004300f5: }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_00430109 }
	__asm { add eax, 4 }
	__asm { cmp eax, edx }
	__asm { jne L_004300f5 }
	__asm { L_00430100: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004085f0 }
	__asm { L_00430109: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10f54] }
	__asm { L_00430119: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
extern "C" char g_00e10f54[];
extern "C" char g_00e10f58[];
// FUNCTION: ROBLOXSTUDIO 0x00430130
extern "C" __declspec(naked) void asm_00430130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_004301a8 }
	__asm { lea eax, [esi + 0x64] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10f58] }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { cmp eax, ecx }
	__asm { je L_0043019f }
	__asm { L_00430155: }
	__asm { cmp dword ptr [eax], edi }
	__asm { je L_0043016f }
	__asm { add eax, 4 }
	__asm { cmp eax, ecx }
	__asm { jne L_00430155 }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10f54] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0043016f: }
	__asm { cmp edi, dword ptr [esi + 0x58] }
	__asm { jne L_0043017b }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { L_0043017b: }
	__asm { cmp edi, dword ptr [esi + 0x5c] }
	__asm { jne L_00430187 }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { L_00430187: }
	__asm { lea edx, [eax + 4] }
	__asm { sub ecx, edx }
	__asm { and ecx, 0xfffffffc }
	__asm { push ecx }
	__asm { push edx }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { add dword ptr [esi + 0x3c], -4 }
	__asm { L_0043019f: }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10f54] }
	__asm { L_004301a8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131ddcc[];
extern "C" char g_0131de2c[];
extern "C" void fn_0042f6d0();
extern "C" void fn_004350c0();
extern "C" void fn_0043f040();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00432970
extern "C" __declspec(naked) void asm_00432970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7333e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x5d], 0 }
	__asm { je L_004329e6 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { test ecx, ecx }
	__asm { je L_0043299d }
	__asm { call fn_004350c0 }
	__asm { L_0043299d: }
	__asm { mov eax, dword ptr [g_0131ddcc] }
	__asm { test al, 1 }
	__asm { jne L_004329ce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ddcc], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0042f6d0 }
	__asm { push 0xddc5e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004329ce: }
	__asm { mov ecx, 0x131dddc }
	__asm { mov dword ptr [g_0131de2c], 0 }
	__asm { call fn_0043f040 }
	__asm { mov byte ptr [esi + 0x5d], 0 }
	__asm { L_004329e6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00432d20
extern "C" __declspec(naked) void asm_00432d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00432d6f }
	__asm { cmp esi, edi }
	__asm { jne L_00432d73 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00432d5e }
	__asm { push 0x36f }
	__asm { push 0x1006bc0 }
	__asm { push 0x1006c04 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00432d6f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00432d5e: }
	__asm { movzx eax, al }
	__asm { push 0x1006c20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00432d6f: }
	__asm { cmp esi, edi }
	__asm { je L_00432d80 }
	__asm { L_00432d73: }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi + 0x24], esi }
	__asm { test eax, eax }
	__asm { je L_00432d80 }
	__asm { mov dword ptr [eax + 0xc], esi }
	__asm { L_00432d80: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10fb8[];
// FUNCTION: ROBLOXSTUDIO 0x00433170
extern "C" __declspec(naked) void asm_00433170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { sub esp, 8 }
	__asm { test ecx, ecx }
	__asm { je L_004331c6 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x1007d5c }
	__asm { mov dword ptr [esp + 0x50], eax }
	__asm { lea eax, [esp + 0x50] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x10079c8 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { L_004331c6: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10fb8[];
// FUNCTION: ROBLOXSTUDIO 0x00433500
extern "C" __declspec(naked) void asm_00433500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { test ecx, ecx }
	__asm { je L_0043354f }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x1007d5c }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x10079f4 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { L_0043354f: }
	__asm { pop ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e0eb2[];
extern "C" char g_0131ddcc[];
extern "C" void fn_0042f6d0();
extern "C" void fn_0042fec0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00434d20
extern "C" __declspec(naked) void asm_00434d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7333e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131ddcc] }
	__asm { test al, 1 }
	__asm { jne L_00434d6a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ddcc], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0042f6d0 }
	__asm { push 0xddc5e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00434d6a: }
	__asm { cmp byte ptr [g_012e0eb2], 0 }
	__asm { je L_00434d91 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_0042fec0 }
	__asm { test al, al }
	__asm { je L_00434d91 }
	__asm { mov al, 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00434d91: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor al, al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e110dc[];
extern "C" char g_00e1110c[];
// FUNCTION: ROBLOXSTUDIO 0x00434e70
extern "C" __declspec(naked) void asm_00434e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c809 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x1007d64 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { call dword ptr [g_00e110dc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e1110c] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00434ed2 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00434ed2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12918[];
extern "C" char g_00e1291c[];
extern "C" char g_00e12920[];
extern "C" char g_00e12924[];
extern "C" void fn_00433fb0();
extern "C" void fn_004360c0();
// FUNCTION: ROBLOXSTUDIO 0x004353f0
extern "C" __declspec(naked) void asm_004353f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91999 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1291c] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12918] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12920] }
	__asm { cmp dword ptr [ebp - 0x18], 0 }
	__asm { je L_00435470 }
	__asm { cmp dword ptr [ebp - 0x14], 0 }
	__asm { je L_00435470 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e12924] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { call fn_00433fb0 }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e12924] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004360c0 }
	__asm { L_00435470: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12918[];
extern "C" char g_00e1291c[];
extern "C" char g_00e12920[];
extern "C" char g_00e12924[];
extern "C" void fn_00433fb0();
extern "C" void fn_004360c0();
// FUNCTION: ROBLOXSTUDIO 0x00435480
extern "C" __declspec(naked) void asm_00435480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91999 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1291c] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12918] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12920] }
	__asm { cmp dword ptr [ebp - 0x18], 0 }
	__asm { je L_00435500 }
	__asm { cmp dword ptr [ebp - 0x14], 0 }
	__asm { je L_00435500 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e12924] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { call fn_00433fb0 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e12924] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004360c0 }
	__asm { L_00435500: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12918[];
extern "C" char g_00e1291c[];
extern "C" char g_00e12920[];
extern "C" char g_00e12924[];
extern "C" void fn_00434190();
// FUNCTION: ROBLOXSTUDIO 0x00435510
extern "C" __declspec(naked) void asm_00435510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91999 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1291c] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12918] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12920] }
	__asm { cmp dword ptr [ebp - 0x18], 0 }
	__asm { je L_0043557d }
	__asm { cmp dword ptr [ebp - 0x14], 0 }
	__asm { je L_0043557d }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e12924] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { call fn_00434190 }
	__asm { L_0043557d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12904[];
extern "C" char g_00e12908[];
extern "C" char g_00e12910[];
extern "C" void fn_00435930();
// FUNCTION: ROBLOXSTUDIO 0x00435800
extern "C" __declspec(naked) void asm_00435800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0043584f }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { js L_0043584f }
	__asm { call dword ptr [g_00e12904] }
	__asm { cmp edi, eax }
	__asm { jg L_0043584f }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { push edi }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12908] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12910] }
	__asm { cmp dword ptr [ebp - 0xc], 0 }
	__asm { je L_0043584f }
	__asm { cmp dword ptr [ebp - 8], 0 }
	__asm { je L_0043584f }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00435930 }
	__asm { L_0043584f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12908[];
extern "C" char g_00e1290c[];
extern "C" char g_00e12910[];
extern "C" char g_00e12934[];
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004360c0
extern "C" __declspec(naked) void asm_004360c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 8] }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12908] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12910] }
	__asm { cmp dword ptr [ebp - 8], 0 }
	__asm { je L_00436124 }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { je L_00436124 }
	__asm { push 0 }
	__asm { push 0x12c31ac }
	__asm { push 0x12c3188 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 8] }
	__asm { call dword ptr [g_00e12934] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00436124 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00436124 }
	__asm { call dword ptr [g_00e1290c] }
	__asm { L_00436124: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e12908[];
extern "C" char g_00e12934[];
extern "C" char g_00e129ac[];
extern "C" char g_00e129b0[];
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00436930
extern "C" __declspec(naked) void asm_00436930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, dword ptr [ecx + 0x1c] }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12908] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e129ac] }
	__asm { mov esi, dword ptr [g_00e12934] }
	__asm { mov edi, dword ptr [g_00e129b0] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { nop }
	__asm { L_00436960: }
	__asm { test ecx, ecx }
	__asm { je L_004369a5 }
	__asm { test eax, eax }
	__asm { je L_004369a5 }
	__asm { push 0 }
	__asm { push 0x12c31ac }
	__asm { push 0x12c3188 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 8] }
	__asm { call esi }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0043698f }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { L_0043698f: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 8] }
	__asm { call edi }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jmp L_00436960 }
	__asm { L_004369a5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_00438030();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x00436f60
extern "C" __declspec(naked) void asm_00436f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd92aa8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00438030 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_00436fd2 }
	__asm { add esi, 5 }
	__asm { je L_00436fa2 }
	__asm { add esi, -5 }
	__asm { jmp L_00436fa4 }
	__asm { L_00436fa2: }
	__asm { xor esi, esi }
	__asm { L_00436fa4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00436fd1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00436fd1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00436fd1: }
	__asm { pop edi }
	__asm { L_00436fd2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_00438580();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x00437300
extern "C" __declspec(naked) void asm_00437300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd92aa8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00438580 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_00437371 }
	__asm { add esi, 5 }
	__asm { je L_00437343 }
	__asm { add esi, -5 }
	__asm { jmp L_00437345 }
	__asm { L_00437343: }
	__asm { xor esi, esi }
	__asm { L_00437345: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00437371 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00437371 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00437371: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_00438a40();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x00437460
extern "C" __declspec(naked) void asm_00437460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd92aa8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00438a40 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_004374d1 }
	__asm { add esi, 5 }
	__asm { je L_004374a3 }
	__asm { add esi, -5 }
	__asm { jmp L_004374a5 }
	__asm { L_004374a3: }
	__asm { xor esi, esi }
	__asm { L_004374a5: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_004374d1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_004374d1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_004374d1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_00438fa0();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x00437620
extern "C" __declspec(naked) void asm_00437620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd92aa8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00438fa0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_00437691 }
	__asm { add esi, 5 }
	__asm { je L_00437663 }
	__asm { add esi, -5 }
	__asm { jmp L_00437665 }
	__asm { L_00437663: }
	__asm { xor esi, esi }
	__asm { L_00437665: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00437691 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00437691 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00437691: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_004393f0();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x004377e0
extern "C" __declspec(naked) void asm_004377e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd92aa8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004393f0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_00437851 }
	__asm { add esi, 5 }
	__asm { je L_00437823 }
	__asm { add esi, -5 }
	__asm { jmp L_00437825 }
	__asm { L_00437823: }
	__asm { xor esi, esi }
	__asm { L_00437825: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00437851 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00437851 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00437851: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" char g_00e10504[];
// FUNCTION: ROBLOXSTUDIO 0x00437c60
extern "C" __declspec(naked) void asm_00437c60()
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
	__asm { jne L_00437c88 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00437c88: }
	__asm { cmp eax, 0x2222222 }
	__asm { jbe L_00437c9a }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00437c9a: }
	__asm { push edi }
	__asm { mov edi, eax }
	__asm { shl edi, 4 }
	__asm { sub edi, eax }
	__asm { shl edi, 3 }
	__asm { push edi }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00437cc5 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00437cc5: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" char g_00e10508[];
extern "C" void fn_00436bf0();
extern "C" void fn_0043e620();
// FUNCTION: ROBLOXSTUDIO 0x004384f0
extern "C" __declspec(naked) void asm_004384f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd73838 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, edx }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00438533 }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00436bf0 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { lea ecx, [esi + 8] }
	__asm { push edi }
	__asm { call dword ptr [eax] }
	__asm { L_00438533: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00438563 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_00438559 }
	__asm { L_00438548: }
	__asm { mov ecx, esi }
	__asm { call fn_0043e620 }
	__asm { add esi, 0x78 }
	__asm { cmp esi, edi }
	__asm { jne L_00438548 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_00438559: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00438563: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" char g_012de6c8[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x004388b0
extern "C" __declspec(naked) void asm_004388b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd809d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012de6c8] }
	__asm { sub esp, 0x14 }
	__asm { test eax, eax }
	__asm { jne L_004388ff }
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
	__asm { L_004388ff: }
	__asm { and eax, 0xfffffffe }
	__asm { push ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x12de6d0 }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" char g_012de6c8[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x00438d70
extern "C" __declspec(naked) void asm_00438d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd809d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012de6c8] }
	__asm { sub esp, 0x10 }
	__asm { test eax, eax }
	__asm { jne L_00438dbf }
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
	__asm { L_00438dbf: }
	__asm { and eax, 0xfffffffe }
	__asm { push ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x12de6d0 }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e5220c[];
extern "C" char g_0131b144[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00439d00
extern "C" __declspec(naked) void asm_00439d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd734be }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131b144] }
	__asm { test al, 1 }
	__asm { jne L_00439d6c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b144], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { push dword ptr [g_00e5220c] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131b018 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc640 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00439d6c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131b018 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e52218[];
extern "C" char g_0131b004[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00439ec0
extern "C" __declspec(naked) void asm_00439ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7349e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131b004] }
	__asm { test al, 1 }
	__asm { jne L_00439f2c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b004], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e52218] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131aed8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc630 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00439f2c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131aed8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" void fn_0043e310();
// FUNCTION: ROBLOXSTUDIO 0x0043a260
extern "C" __declspec(naked) void asm_0043a260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov ebx, ecx }
	__asm { test edi, edi }
	__asm { je L_0043a296 }
	__asm { cmp edi, 0x1fffffff }
	__asm { ja L_0043a290 }
	__asm { lea eax, [edi*8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { jne L_0043a296 }
	__asm { L_0043a290: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0043a296: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { call fn_0043e310 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test ecx, ecx }
	__asm { je L_0043a2c5 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0043a2c5: }
	__asm { lea eax, [esi + edi*8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [ebx], esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11008[];
extern "C" void fn_004149b0();
// FUNCTION: ROBLOXSTUDIO 0x0043a6e0
extern "C" __declspec(naked) void asm_0043a6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { js L_0043a6fa }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax + 0xc] }
	__asm { sub edx, dword ptr [eax + 8] }
	__asm { cmp edi, edx }
	__asm { jl L_0043a717 }
	__asm { L_0043a6fa: }
	__asm { push 0x1c7 }
	__asm { push 0x1002fd0 }
	__asm { push 0x1002fbc }
	__asm { push 0x1002fa4 }
	__asm { call dword ptr [g_00e11008] }
	__asm { add esp, 0x10 }
	__asm { L_0043a717: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_0043a72a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_004149b0 }
	__asm { L_0043a72a: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add edi, 5 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add eax, edi }
	__asm { pop edi }
	__asm { lea eax, [ecx + eax*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11024[];
extern "C" void fn_0043d5e0();
extern "C" void fn_0043d730();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0043b3a0
extern "C" __declspec(naked) void asm_0043b3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd733e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { cmp dword ptr [eax], 1 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { je L_0043b3ed }
	__asm { sub esp, 8 }
	__asm { call fn_0043d5e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jmp L_0043b3fa }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 0 }
	__asm { dec dword ptr [eax + 0xc] }
	__asm { call fn_00cf67ec }
	__asm { L_0043b3ed: }
	__asm { call dword ptr [g_00e11024] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { L_0043b3fa: }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0043d730 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_0043dfa0();
extern "C" void fn_008cf1c0();
// FUNCTION: ROBLOXSTUDIO 0x0043b440
extern "C" __declspec(naked) void asm_0043b440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x290 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0043b48f }
	__asm { mov ecx, eax }
	__asm { call fn_008cf1c0 }
	__asm { mov esi, eax }
	__asm { jmp L_0043b491 }
	__asm { L_0043b48f: }
	__asm { xor esi, esi }
	__asm { L_0043b491: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_0043dfa0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0043b4c2 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0043b4c2 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0043b4c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_0042eea0();
extern "C" void fn_0043e030();
// FUNCTION: ROBLOXSTUDIO 0x0043b4e0
extern "C" __declspec(naked) void asm_0043b4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x170 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0043b52f }
	__asm { mov ecx, eax }
	__asm { call fn_0042eea0 }
	__asm { mov esi, eax }
	__asm { jmp L_0043b531 }
	__asm { L_0043b52f: }
	__asm { xor esi, esi }
	__asm { L_0043b531: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_0043e030 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0043b562 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0043b562 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0043b562: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_0043e1f0();
extern "C" void fn_0079ea20();
// FUNCTION: ROBLOXSTUDIO 0x0043b5b0
extern "C" __declspec(naked) void asm_0043b5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x84 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0043b5ff }
	__asm { mov ecx, eax }
	__asm { call fn_0079ea20 }
	__asm { mov esi, eax }
	__asm { jmp L_0043b601 }
	__asm { L_0043b5ff: }
	__asm { xor esi, esi }
	__asm { L_0043b601: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_0043e1f0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0043b632 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0043b632 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0043b632: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6f660[];
extern "C" char g_0131abcc[];
extern "C" char g_0131abd0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0043b740
extern "C" __declspec(naked) void asm_0043b740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72ace }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_00e6f660], 0 }
	__asm { jne L_0043b775 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043b775: }
	__asm { push 0x43da20 }
	__asm { push 0x131ae78 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131abd0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0043b7bf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131abd0], eax }
	__asm { push 0xe6f660 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131abcc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043b7bf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131abcc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e5220c[];
extern "C" char g_0131abc4[];
extern "C" char g_0131abc8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0043b7e0
extern "C" __declspec(naked) void asm_0043b7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd72bbe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e5220c], 0 }
	__asm { jne L_0043b814 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043b814: }
	__asm { push 0x43da70 }
	__asm { push 0x131ae70 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131abc8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0043b85e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131abc8], eax }
	__asm { push 0xe5220c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131abc4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043b85e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131abc4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e52214[];
extern "C" char g_0131abbc[];
extern "C" char g_0131abc0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0043b880
extern "C" __declspec(naked) void asm_0043b880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd72b7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e52214], 0 }
	__asm { jne L_0043b8b4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043b8b4: }
	__asm { push 0x43dac0 }
	__asm { push 0x131ae68 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131abc0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0043b8fe }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131abc0], eax }
	__asm { push 0xe52214 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131abbc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043b8fe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131abbc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e52218[];
extern "C" char g_0131abb4[];
extern "C" char g_0131abb8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0043b920
extern "C" __declspec(naked) void asm_0043b920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd72aae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e52218], 0 }
	__asm { jne L_0043b954 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043b954: }
	__asm { push 0x43db10 }
	__asm { push 0x131ae60 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131abb8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0043b99e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131abb8], eax }
	__asm { push 0xe52218 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131abb4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043b99e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131abb4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e5d038[];
extern "C" char g_0131ae5c[];
extern "C" void fn_0043ec00();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0043bf70
extern "C" __declspec(naked) void asm_0043bf70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7345e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131ae5c] }
	__asm { test al, 1 }
	__asm { jne L_0043bfdc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ae5c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e5d038] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, 0x131ad30 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc6a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0043bfdc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131ad30 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e52214[];
extern "C" char g_0131de68[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0043c990
extern "C" __declspec(naked) void asm_0043c990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7347e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131de68] }
	__asm { test al, 1 }
	__asm { jne L_0043c9fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131de68], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { push dword ptr [g_00e52214] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131de70 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc690 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0043c9fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131de70 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_0043e340();
// FUNCTION: ROBLOXSTUDIO 0x0043d440
extern "C" __declspec(naked) void asm_0043d440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { xor edi, edi }
	__asm { L_0043d451: }
	__asm { test eax, eax }
	__asm { je L_0043d45a }
	__asm { lea esi, [eax - 0x4c] }
	__asm { jmp L_0043d45c }
	__asm { L_0043d45a: }
	__asm { xor esi, esi }
	__asm { L_0043d45c: }
	__asm { mov eax, dword ptr [esi + 0x4c] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebx], eax }
	__asm { call fn_0043e340 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [ecx + 8] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { inc edi }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_0043d451 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_0043e590();
extern "C" void fn_008c3230();
// FUNCTION: ROBLOXSTUDIO 0x0043d530
extern "C" __declspec(naked) void asm_0043d530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xc0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0043d57f }
	__asm { mov ecx, eax }
	__asm { call fn_008c3230 }
	__asm { mov esi, eax }
	__asm { jmp L_0043d581 }
	__asm { L_0043d57f: }
	__asm { xor esi, esi }
	__asm { L_0043d581: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_0043e590 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0043d5b2 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0043d5b2 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0043d5b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e129bc[];
extern "C" char g_00e129c0[];
// FUNCTION: ROBLOXSTUDIO 0x0043d730
extern "C" __declspec(naked) void asm_0043d730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd73af5 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 0xc }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0043d79a }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e129bc] }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e129c0] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0043d79a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131abd4[];
extern "C" char g_0131abd8[];
extern "C" char g_0131abdc[];
extern "C" char g_0131abe0[];
extern "C" void fn_00403540();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0043d7c0
extern "C" __declspec(naked) void asm_0043d7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f971 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0043d815 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { L_0043d815: }
	__asm { mov eax, dword ptr [g_0131abd4] }
	__asm { test al, 1 }
	__asm { jne L_0043d851 }
	__asm { or eax, 1 }
	__asm { push 0xddc6b0 }
	__asm { mov dword ptr [g_0131abd4], eax }
	__asm { mov dword ptr [g_0131abd8], 0x12be0b8 }
	__asm { mov dword ptr [g_0131abe0], 0x43eb70 }
	__asm { mov dword ptr [g_0131abdc], 0x43ebd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0043d851: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0x131abd8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131abac[];
extern "C" char g_0131abb0[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x0043ddd0
extern "C" __declspec(naked) void asm_0043ddd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd72aee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131abb0] }
	__asm { test al, 1 }
	__asm { jne L_0043de0a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131abb0], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_0131abac], eax }
	__asm { L_0043de0a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e12920[];
extern "C" char g_00e12974[];
// FUNCTION: ROBLOXSTUDIO 0x0043de50
extern "C" __declspec(naked) void asm_0043de50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd73b29 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp ebx, edi }
	__asm { je L_0043deaf }
	__asm { L_0043de75: }
	__asm { mov esi, dword ptr [edi - 4] }
	__asm { sub edi, 4 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_0043deab }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12974] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12920] }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0043deab: }
	__asm { cmp edi, ebx }
	__asm { jne L_0043de75 }
	__asm { L_0043deaf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0043dfa0
extern "C" __declspec(naked) void asm_0043dfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72a20 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0043dff9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe54b10 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0043dffb }
	__asm { L_0043dff9: }
	__asm { xor eax, eax }
	__asm { L_0043dffb: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0043e030
extern "C" __declspec(naked) void asm_0043e030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72a30 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0043e089 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe54a70 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0043e08b }
	__asm { L_0043e089: }
	__asm { xor eax, eax }
	__asm { L_0043e08b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0043e1f0
extern "C" __declspec(naked) void asm_0043e1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd729f0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0043e249 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe54ac0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0043e24b }
	__asm { L_0043e249: }
	__asm { xor eax, eax }
	__asm { L_0043e24b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0043e280
extern "C" __declspec(naked) void asm_0043e280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72a00 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0043e2d9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe54a88 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0043e2db }
	__asm { L_0043e2d9: }
	__asm { xor eax, eax }
	__asm { L_0043e2db: }
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

extern "C" char g_00e10508[];
extern "C" void fn_0043e620();
extern "C" void fn_008c0570();
// FUNCTION: ROBLOXSTUDIO 0x0043e340
extern "C" __declspec(naked) void asm_0043e340()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x44], 0x10 }
	__asm { jb L_0043e356 }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0043e356: }
	__asm { mov dword ptr [edi + 0x44], 0xf }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov byte ptr [edi + 0x30], 0 }
	__asm { mov esi, dword ptr [edi + 0x24] }
	__asm { test esi, esi }
	__asm { je L_0043e3a7 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [edi + 0x28] }
	__asm { cmp esi, ebx }
	__asm { je L_0043e385 }
	__asm { L_0043e377: }
	__asm { mov ecx, esi }
	__asm { call fn_0043e620 }
	__asm { add esi, 0x78 }
	__asm { cmp esi, ebx }
	__asm { jne L_0043e377 }
	__asm { L_0043e385: }
	__asm { push dword ptr [edi + 0x24] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { pop ebx }
	__asm { L_0043e3a7: }
	__asm { lea ecx, [edi + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jmp fn_008c0570 }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0043e590
extern "C" __declspec(naked) void asm_0043e590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72a10 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0043e5e9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe51988 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0043e5eb }
	__asm { L_0043e5e9: }
	__asm { xor eax, eax }
	__asm { L_0043e5eb: }
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

extern "C" char g_00e10504[];
extern "C" char g_0131ab8c[];
extern "C" char g_0131ab90[];
// FUNCTION: ROBLOXSTUDIO 0x0043e830
extern "C" __declspec(naked) void asm_0043e830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd73fce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131ab90] }
	__asm { test al, 1 }
	__asm { jne L_0043e8a4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ab90], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0043e88f }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0131ab8c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043e88f: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131ab8c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043e8a4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131ab8c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_0131ab9c[];
extern "C" char g_0131aba0[];
// FUNCTION: ROBLOXSTUDIO 0x0043e990
extern "C" __declspec(naked) void asm_0043e990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7400e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131aba0] }
	__asm { test al, 1 }
	__asm { jne L_0043ea04 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131aba0], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0043e9ef }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0131ab9c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043e9ef: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131ab9c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043ea04: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131ab9c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00421060();
// FUNCTION: ROBLOXSTUDIO 0x0043eb10
extern "C" __declspec(naked) void asm_0043eb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0043eb5d }
	__asm { lea ecx, [eax + 5] }
	__asm { test ecx, ecx }
	__asm { je L_0043eb31 }
	__asm { add ecx, -5 }
	__asm { jmp L_0043eb33 }
	__asm { L_0043eb31: }
	__asm { xor ecx, ecx }
	__asm { L_0043eb33: }
	__asm { cmp dword ptr [ecx - 8], 0 }
	__asm { je L_0043eb5d }
	__asm { mov dword ptr [esi], eax }
	__asm { test eax, eax }
	__asm { je L_0043eb52 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0043eb52: }
	__asm { xor eax, eax }
	__asm { push eax }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0043eb5d: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0043eb70
extern "C" __declspec(naked) void asm_0043eb70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd73551 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0043ebba }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { L_0043ebba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131ae80[];
extern "C" char g_0131ae84[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0043ec90
extern "C" __declspec(naked) void asm_0043ec90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd72b9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131ae80] }
	__asm { test al, 1 }
	__asm { jne L_0043ecd2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ae80], eax }
	__asm { push 0xe6f214 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131ae84], eax }
	__asm { L_0043ecd2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6f214[];
extern "C" char g_0131ae80[];
extern "C" char g_0131ae84[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0043ece0
extern "C" __declspec(naked) void asm_0043ece0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b9e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_00e6f214], 0 }
	__asm { jne L_0043ed15 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043ed15: }
	__asm { push 0x43ec90 }
	__asm { push 0x131ae88 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131ae80] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0043ed5f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ae80], eax }
	__asm { push 0xe6f214 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131ae84], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043ed5f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131ae84] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0043ed80
extern "C" __declspec(naked) void asm_0043ed80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { je L_0043ede0 }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { call dword ptr [g_00e10524] }
	__asm { movzx ecx, al }
	__asm { xor eax, eax }
	__asm { cmp esi, edi }
	__asm { sete al }
	__asm { cmp ecx, eax }
	__asm { je L_0043ede0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0043edcb }
	__asm { push 0x2c }
	__asm { push 0xf13ed0 }
	__asm { push 0x1007d90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0043ede0 }
	__asm { L_0043edcb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1007db8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0043ede0: }
	__asm { xor eax, eax }
	__asm { cmp esi, edi }
	__asm { pop edi }
	__asm { sete al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_0131b190[];
extern "C" char g_0131b194[];
// FUNCTION: ROBLOXSTUDIO 0x0043f140
extern "C" __declspec(naked) void asm_0043f140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd73f2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131b194] }
	__asm { test al, 1 }
	__asm { jne L_0043f1b4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b194], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0043f19f }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0131b190], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043f19f: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131b190], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043f1b4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131b190] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_0131b1a0[];
extern "C" char g_0131b1a4[];
// FUNCTION: ROBLOXSTUDIO 0x0043f5a0
extern "C" __declspec(naked) void asm_0043f5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd73f6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131b1a4] }
	__asm { test al, 1 }
	__asm { jne L_0043f614 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b1a4], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0043f5ff }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0131b1a0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043f5ff: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131b1a0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043f614: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131b1a0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0043f960
extern "C" __declspec(naked) void asm_0043f960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd92aa8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0043f630 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_0043f9d1 }
	__asm { add esi, 5 }
	__asm { je L_0043f9a3 }
	__asm { add esi, -5 }
	__asm { jmp L_0043f9a5 }
	__asm { L_0043f9a3: }
	__asm { xor esi, esi }
	__asm { L_0043f9a5: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0043f9d1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0043f9d1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0043f9d1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_008c03b0();
// FUNCTION: ROBLOXSTUDIO 0x0043fa70
extern "C" __declspec(naked) void asm_0043fa70()
{
	__asm { L_0043fa70: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_0043fabd }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jg L_0043fabd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0043faac }
	__asm { push 0x9b }
	__asm { push 0x10027e0 }
	__asm { push 0x1007e84 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0043fabd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0043faac: }
	__asm { movzx eax, al }
	__asm { push 0x1007e90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0043fabd: }
	__asm { mov ecx, esi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0043fadd }
	__asm { test esi, esi }
	__asm { je L_0043fadd }
	__asm { mov ecx, esi }
	__asm { call fn_008c03b0 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0043fadd: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_0043faed }
	__asm { push eax }
	__asm { call L_0043fa70 }
	__asm { pop ecx }
	__asm { L_0043faed: }
	__asm { ret }
}

extern "C" char g_0131dfac[];
extern "C" void fn_0043fd60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0043fc30
extern "C" __declspec(naked) void asm_0043fc30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd74a9e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131dfac] }
	__asm { test al, 1 }
	__asm { jne L_0043fc73 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dfac], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0043fd60 }
	__asm { push 0xddc6d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0043fc73: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131dfb0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12a50[];
extern "C" void fn_004425c0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00442af0
extern "C" __declspec(naked) void asm_00442af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0x12c398c }
	__asm { push 0x12c39ac }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00442b1d }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { call fn_004425c0 }
	__asm { L_00442b1d: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0x12c39cc }
	__asm { push 0x12c39ac }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00442b42 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x1c] }
	__asm { L_00442b42: }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { call dword ptr [g_00e12a50] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12abc[];
// FUNCTION: ROBLOXSTUDIO 0x00443e00
extern "C" __declspec(naked) void asm_00443e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74f18 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { cmp byte ptr [ecx + 0x2c], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { jne L_00443e60 }
	__asm { cmp dword ptr [ebp + 8], 0x12e1654 }
	__asm { jne L_00443e60 }
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { mov bl, byte ptr [ecx + 0x2d] }
	__asm { mov dl, byte ptr [eax + 0x64] }
	__asm { lea esi, [ecx + 0x2d] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 0x10], bl }
	__asm { mov byte ptr [esi], 1 }
	__asm { xor eax, eax }
	__asm { test dl, dl }
	__asm { mov edi, 2 }
	__asm { cmovne eax, edi }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12abc] }
	__asm { mov byte ptr [esi], bl }
	__asm { L_00443e60: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_00e12a50[];
extern "C" char g_00e12acc[];
extern "C" char g_00e12ad0[];
extern "C" void fn_004445c0();
// FUNCTION: ROBLOXSTUDIO 0x004450d0
extern "C" __declspec(naked) void asm_004450d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x14] }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jns L_004450ec }
	__asm { call dword ptr [g_00e12acc] }
	__asm { jmp L_0044510c }
	__asm { L_004450ec: }
	__asm { push eax }
	__asm { call fn_004445c0 }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { je L_0044510c }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12ad0] }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12a50] }
	__asm { L_0044510c: }
	__asm { cmp byte ptr [esi + 0x28], 0 }
	__asm { jne L_00445131 }
	__asm { push 0x100a258 }
	__asm { mov byte ptr [esi + 0x28], 1 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { add esp, 0xc }
	__asm { L_00445131: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e110bc[];
extern "C" char g_00e11110[];
extern "C" char g_00e12a60[];
extern "C" void fn_00405b90();
// FUNCTION: ROBLOXSTUDIO 0x00445aa0
extern "C" __declspec(naked) void asm_00445aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74ff1 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x2c], 0 }
	__asm { jne L_00445b29 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { test eax, eax }
	__asm { je L_00445b29 }
	__asm { cmp dword ptr [ebp + 8], 0x12e16ac }
	__asm { jne L_00445b29 }
	__asm { add eax, 0x1c }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, 0x12e16ac }
	__asm { call fn_00405b90 }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110bc] }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e12a60] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00445b29 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00445b29: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11110[];
extern "C" char g_00e12a38[];
// FUNCTION: ROBLOXSTUDIO 0x004477c0
extern "C" __declspec(naked) void asm_004477c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd74a85 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { test ecx, ecx }
	__asm { je L_004477f9 }
	__asm { lea eax, [esi + 0x28] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_004477f9: }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12a38] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00447825 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00447825: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00436bf0();
extern "C" void fn_0043e620();
extern "C" void fn_0044d130();
// FUNCTION: ROBLOXSTUDIO 0x0044c1c0
extern "C" __declspec(naked) void asm_0044c1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd74f98 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { sub esp, 0xc }
	__asm { lea esi, [ecx + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00436bf0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_0044d130 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { je L_0044c230 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_0044c226 }
	__asm { L_0044c215: }
	__asm { mov ecx, esi }
	__asm { call fn_0043e620 }
	__asm { add esi, 0x78 }
	__asm { cmp esi, edi }
	__asm { jne L_0044c215 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { L_0044c226: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0044c230: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00436bf0();
extern "C" void fn_0043e620();
// FUNCTION: ROBLOXSTUDIO 0x0044d130
extern "C" __declspec(naked) void asm_0044d130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd74a58 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00436bf0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { test esi, esi }
	__asm { je L_0044d19c }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { cmp esi, edi }
	__asm { je L_0044d192 }
	__asm { L_0044d181: }
	__asm { mov ecx, esi }
	__asm { call fn_0043e620 }
	__asm { add esi, 0x78 }
	__asm { cmp esi, edi }
	__asm { jne L_0044d181 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_0044d192: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0044d19c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x0044d1b0
extern "C" __declspec(naked) void asm_0044d1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0044d1d9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d1de }
	__asm { L_0044d1d9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d1de: }
	__asm { cmp ecx, 0x12c37f4 }
	__asm { je L_0044d227 }
	__asm { test eax, eax }
	__asm { je L_0044d1ee }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d1f3 }
	__asm { L_0044d1ee: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d1f3: }
	__asm { push 0x12c37f4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0044d227 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0044d227: }
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
// FUNCTION: ROBLOXSTUDIO 0x0044d240
extern "C" __declspec(naked) void asm_0044d240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0044d269 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d26e }
	__asm { L_0044d269: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d26e: }
	__asm { cmp ecx, 0x12c37d8 }
	__asm { je L_0044d2b7 }
	__asm { test eax, eax }
	__asm { je L_0044d27e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d283 }
	__asm { L_0044d27e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d283: }
	__asm { push 0x12c37d8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0044d2b7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0044d2b7: }
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
// FUNCTION: ROBLOXSTUDIO 0x0044d2d0
extern "C" __declspec(naked) void asm_0044d2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0044d2f9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d2fe }
	__asm { L_0044d2f9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d2fe: }
	__asm { cmp ecx, 0x12c37b8 }
	__asm { je L_0044d347 }
	__asm { test eax, eax }
	__asm { je L_0044d30e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d313 }
	__asm { L_0044d30e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d313: }
	__asm { push 0x12c37b8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0044d347 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0044d347: }
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
// FUNCTION: ROBLOXSTUDIO 0x0044d360
extern "C" __declspec(naked) void asm_0044d360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0044d389 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d38e }
	__asm { L_0044d389: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d38e: }
	__asm { cmp ecx, 0x12c3798 }
	__asm { je L_0044d3d7 }
	__asm { test eax, eax }
	__asm { je L_0044d39e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d3a3 }
	__asm { L_0044d39e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d3a3: }
	__asm { push 0x12c3798 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0044d3d7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0044d3d7: }
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
// FUNCTION: ROBLOXSTUDIO 0x0044d3f0
extern "C" __declspec(naked) void asm_0044d3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0044d419 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d41e }
	__asm { L_0044d419: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d41e: }
	__asm { cmp ecx, 0x12c377c }
	__asm { je L_0044d467 }
	__asm { test eax, eax }
	__asm { je L_0044d42e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d433 }
	__asm { L_0044d42e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d433: }
	__asm { push 0x12c377c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0044d467 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0044d467: }
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
// FUNCTION: ROBLOXSTUDIO 0x0044d480
extern "C" __declspec(naked) void asm_0044d480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0044d4a9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d4ae }
	__asm { L_0044d4a9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d4ae: }
	__asm { cmp ecx, 0x12c375c }
	__asm { je L_0044d4f7 }
	__asm { test eax, eax }
	__asm { je L_0044d4be }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d4c3 }
	__asm { L_0044d4be: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d4c3: }
	__asm { push 0x12c375c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0044d4f7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0044d4f7: }
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
// FUNCTION: ROBLOXSTUDIO 0x0044d510
extern "C" __declspec(naked) void asm_0044d510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0044d539 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d53e }
	__asm { L_0044d539: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d53e: }
	__asm { cmp ecx, 0x12c3884 }
	__asm { je L_0044d587 }
	__asm { test eax, eax }
	__asm { je L_0044d54e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d553 }
	__asm { L_0044d54e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d553: }
	__asm { push 0x12c3884 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0044d587 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0044d587: }
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
// FUNCTION: ROBLOXSTUDIO 0x0044d5a0
extern "C" __declspec(naked) void asm_0044d5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0044d5c9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d5ce }
	__asm { L_0044d5c9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d5ce: }
	__asm { cmp ecx, 0x12c3744 }
	__asm { je L_0044d617 }
	__asm { test eax, eax }
	__asm { je L_0044d5de }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d5e3 }
	__asm { L_0044d5de: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d5e3: }
	__asm { push 0x12c3744 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0044d617 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0044d617: }
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
// FUNCTION: ROBLOXSTUDIO 0x0044d630
extern "C" __declspec(naked) void asm_0044d630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0044d659 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d65e }
	__asm { L_0044d659: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d65e: }
	__asm { cmp ecx, 0x12c372c }
	__asm { je L_0044d6a7 }
	__asm { test eax, eax }
	__asm { je L_0044d66e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d673 }
	__asm { L_0044d66e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d673: }
	__asm { push 0x12c372c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0044d6a7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0044d6a7: }
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
// FUNCTION: ROBLOXSTUDIO 0x0044d6c0
extern "C" __declspec(naked) void asm_0044d6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0044d6e9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d6ee }
	__asm { L_0044d6e9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d6ee: }
	__asm { cmp ecx, 0x12c35e0 }
	__asm { je L_0044d737 }
	__asm { test eax, eax }
	__asm { je L_0044d6fe }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d703 }
	__asm { L_0044d6fe: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d703: }
	__asm { push 0x12c35e0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0044d737 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0044d737: }
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
// FUNCTION: ROBLOXSTUDIO 0x0044d750
extern "C" __declspec(naked) void asm_0044d750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0044d779 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d77e }
	__asm { L_0044d779: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d77e: }
	__asm { cmp ecx, 0x12c3428 }
	__asm { je L_0044d7c7 }
	__asm { test eax, eax }
	__asm { je L_0044d78e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d793 }
	__asm { L_0044d78e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d793: }
	__asm { push 0x12c3428 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0044d7c7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0044d7c7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x0044d7e0
extern "C" __declspec(naked) void asm_0044d7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0044d809 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d80e }
	__asm { L_0044d809: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d80e: }
	__asm { cmp ecx, 0x12c33a8 }
	__asm { je L_0044d857 }
	__asm { test eax, eax }
	__asm { je L_0044d81e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d823 }
	__asm { L_0044d81e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d823: }
	__asm { push 0x12c33a8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0044d857 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0044d857: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x0044d870
extern "C" __declspec(naked) void asm_0044d870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0044d899 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d89e }
	__asm { L_0044d899: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d89e: }
	__asm { cmp ecx, 0x12c3310 }
	__asm { je L_0044d8e7 }
	__asm { test eax, eax }
	__asm { je L_0044d8ae }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d8b3 }
	__asm { L_0044d8ae: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d8b3: }
	__asm { push 0x12c3310 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0044d8e7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0044d8e7: }
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
// FUNCTION: ROBLOXSTUDIO 0x0044d900
extern "C" __declspec(naked) void asm_0044d900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0044d929 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d92e }
	__asm { L_0044d929: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d92e: }
	__asm { cmp ecx, 0x12c32cc }
	__asm { je L_0044d977 }
	__asm { test eax, eax }
	__asm { je L_0044d93e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044d943 }
	__asm { L_0044d93e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044d943: }
	__asm { push 0x12c32cc }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0044d977 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0044d977: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x0044d9d0
extern "C" __declspec(naked) void asm_0044d9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd73551 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0044da1d }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { pop esi }
	__asm { L_0044da1d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
// FUNCTION: ROBLOXSTUDIO 0x0044dae0
extern "C" __declspec(naked) void asm_0044dae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { je L_0044db3e }
	__asm { test eax, eax }
	__asm { je L_0044db3e }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_0044db3e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0044db29 }
	__asm { push 0x100 }
	__asm { push 0xf14248 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0044db3e }
	__asm { L_0044db29: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x10080d0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0044db3e: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x0044db70
extern "C" __declspec(naked) void asm_0044db70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0044db99 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044db9e }
	__asm { L_0044db99: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044db9e: }
	__asm { cmp ecx, 0x12be0b8 }
	__asm { je L_0044dbe7 }
	__asm { test eax, eax }
	__asm { je L_0044dbae }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044dbb3 }
	__asm { L_0044dbae: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044dbb3: }
	__asm { push 0x12be0b8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0044dbe7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0044dbe7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x0044dd60
extern "C" __declspec(naked) void asm_0044dd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0044dd89 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044dd8e }
	__asm { L_0044dd89: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044dd8e: }
	__asm { cmp ecx, 0x12c38a0 }
	__asm { je L_0044ddd7 }
	__asm { test eax, eax }
	__asm { je L_0044dd9e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044dda3 }
	__asm { L_0044dd9e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044dda3: }
	__asm { push 0x12c38a0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0044ddd7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0044ddd7: }
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
// FUNCTION: ROBLOXSTUDIO 0x0044dee0
extern "C" __declspec(naked) void asm_0044dee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0044df09 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044df0e }
	__asm { L_0044df09: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044df0e: }
	__asm { cmp ecx, 0x12c38c0 }
	__asm { je L_0044df57 }
	__asm { test eax, eax }
	__asm { je L_0044df1e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044df23 }
	__asm { L_0044df1e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044df23: }
	__asm { push 0x12c38c0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0044df57 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0044df57: }
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
// FUNCTION: ROBLOXSTUDIO 0x0044e0d0
extern "C" __declspec(naked) void asm_0044e0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0044e0f9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044e0fe }
	__asm { L_0044e0f9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044e0fe: }
	__asm { cmp ecx, 0x12c38e4 }
	__asm { je L_0044e147 }
	__asm { test eax, eax }
	__asm { je L_0044e10e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0044e113 }
	__asm { L_0044e10e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0044e113: }
	__asm { push 0x12c38e4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0044e147 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0044e147: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131b23c[];
extern "C" char g_0131b240[];
extern "C" void fn_007cb490();
// FUNCTION: ROBLOXSTUDIO 0x0044e340
extern "C" __declspec(naked) void asm_0044e340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd74efe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131b23c] }
	__asm { test al, 1 }
	__asm { jne L_0044e38e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b23c], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0x10082cc }
	__asm { call fn_007cb490 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b240], edx }
	__asm { jmp L_0044e394 }
	__asm { L_0044e38e: }
	__asm { mov edx, dword ptr [g_0131b240] }
	__asm { L_0044e394: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 0xc], edx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { sete al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1104c[];
extern "C" char g_00e110f4[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" char g_00e12378[];
extern "C" void fn_0044f7a0();
// FUNCTION: ROBLOXSTUDIO 0x0044f170
extern "C" __declspec(naked) void asm_0044f170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd757c2 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { je L_0044f1d5 }
	__asm { push ecx }
	__asm { mov edx, 0x100b0ec }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_0044f7a0 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e110f4] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0044f1d5: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12378] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1104c] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131eb88[];
extern "C" char g_0131ebb0[];
extern "C" char g_0131ebb4[];
extern "C" void fn_0044e770();
extern "C" void fn_0044fd00();
extern "C" void fn_004a4c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0044f210
extern "C" __declspec(naked) void asm_0044f210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7579e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0044f25c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0044f25c: }
	__asm { mov esi, dword ptr [esi + 0x1c] }
	__asm { mov ecx, dword ptr [g_0131ebb4] }
	__asm { push esi }
	__asm { call fn_0044e770 }
	__asm { test al, al }
	__asm { je L_0044f27b }
	__asm { mov ecx, dword ptr [g_0131ebb0] }
	__asm { push esi }
	__asm { call fn_0044fd00 }
	__asm { L_0044f27b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1229c[];
extern "C" char g_00e12b98[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004ecb70();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0044f290
extern "C" __declspec(naked) void asm_0044f290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_0044f2df }
	__asm { call dword ptr [g_00e1229c] }
	__asm { test eax, eax }
	__asm { jne L_0044f2df }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0044f2ca }
	__asm { push 0x95 }
	__asm { push 0x100ad40 }
	__asm { push 0x100b0f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0044f2df }
	__asm { L_0044f2ca: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x100b100 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0044f2df: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push 1 }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call fn_004ecb70 }
	__asm { test al, al }
	__asm { je L_0044f300 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12b98] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0044f300: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, 0xfffb }
	__asm { and word ptr [eax + 0xa], cx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1229c[];
extern "C" char g_0131eb88[];
extern "C" void fn_004a4c90();
extern "C" void fn_004a5d70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0044f690
extern "C" __declspec(naked) void asm_0044f690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7579e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e1229c] }
	__asm { test eax, eax }
	__asm { je L_0044f6f3 }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_0044f6e6 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0044f6e6: }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { mov ecx, 0x131eb8c }
	__asm { call fn_004a5d70 }
	__asm { L_0044f6f3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12220[];
extern "C" void fn_00450a60();
// FUNCTION: ROBLOXSTUDIO 0x0044ff90
extern "C" __declspec(naked) void asm_0044ff90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { test eax, eax }
	__asm { jle L_0044ffbd }
	__asm { add eax, 4 }
	__asm { lea esi, [edx + 0x10] }
	__asm { lea eax, [edx + eax*4] }
	__asm { cmp esi, eax }
	__asm { je L_0044ffbd }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { L_0044ffb2: }
	__asm { cmp dword ptr [esi], ecx }
	__asm { je L_0044ffc6 }
	__asm { add esi, 4 }
	__asm { cmp esi, eax }
	__asm { jne L_0044ffb2 }
	__asm { L_0044ffbd: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0044ffc6: }
	__asm { sub esi, edx }
	__asm { sub esi, 0x10 }
	__asm { sar esi, 2 }
	__asm { cmp esi, -1 }
	__asm { je L_0044ffbd }
	__asm { push esi }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00450a60 }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { push esi }
	__asm { call dword ptr [g_00e12220] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1221c[];
extern "C" char g_00e12228[];
// FUNCTION: ROBLOXSTUDIO 0x0044fff0
extern "C" __declspec(naked) void asm_0044fff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { test eax, eax }
	__asm { jle L_0045001c }
	__asm { add eax, 4 }
	__asm { lea esi, [edx + 0x10] }
	__asm { lea eax, [edx + eax*4] }
	__asm { cmp esi, eax }
	__asm { je L_0045001c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { L_00450011: }
	__asm { cmp dword ptr [esi], ecx }
	__asm { je L_00450024 }
	__asm { add esi, 4 }
	__asm { cmp esi, eax }
	__asm { jne L_00450011 }
	__asm { L_0045001c: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00450024: }
	__asm { sub esi, edx }
	__asm { sub esi, 0x10 }
	__asm { sar esi, 2 }
	__asm { cmp esi, -1 }
	__asm { je L_0045001c }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { push esi }
	__asm { call dword ptr [g_00e1221c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { push esi }
	__asm { call dword ptr [g_00e12228] }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e12218[];
// FUNCTION: ROBLOXSTUDIO 0x00450060
extern "C" __declspec(naked) void asm_00450060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { jle L_0045008c }
	__asm { add eax, 4 }
	__asm { lea edx, [esi + eax*4] }
	__asm { lea eax, [esi + 0x10] }
	__asm { cmp eax, edx }
	__asm { je L_0045008c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { L_00450081: }
	__asm { cmp dword ptr [eax], ecx }
	__asm { je L_00450094 }
	__asm { add eax, 4 }
	__asm { cmp eax, edx }
	__asm { jne L_00450081 }
	__asm { L_0045008c: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00450094: }
	__asm { sub eax, esi }
	__asm { sub eax, 0x10 }
	__asm { sar eax, 2 }
	__asm { cmp eax, -1 }
	__asm { je L_0045008c }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12218] }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11008[];
extern "C" void fn_00450b70();
extern "C" void fn_004ecb70();
// FUNCTION: ROBLOXSTUDIO 0x004501f0
extern "C" __declspec(naked) void asm_004501f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { cmp edi, -1 }
	__asm { jne L_00450207 }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00450207: }
	__asm { push esi }
	__asm { test edi, edi }
	__asm { js L_00450214 }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { cmp edi, dword ptr [eax + 8] }
	__asm { jl L_00450231 }
	__asm { L_00450214: }
	__asm { push 0x151 }
	__asm { push 0x100b998 }
	__asm { push 0x1002fbc }
	__asm { push 0x100b980 }
	__asm { call dword ptr [g_00e11008] }
	__asm { add esp, 0x10 }
	__asm { L_00450231: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_0045024a }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { lea ecx, [ebx + 8] }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax + 8] }
	__asm { call fn_00450b70 }
	__asm { L_0045024a: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { push 1 }
	__asm { push dword ptr [eax + edi*4 + 0x10] }
	__asm { call fn_004ecb70 }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}
