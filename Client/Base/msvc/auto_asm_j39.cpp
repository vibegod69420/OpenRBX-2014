// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00c93a10();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c93980
extern "C" __declspec(naked) void asm_00c93980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd695e0 }
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
	__asm { je L_00c939d8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef9ee8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c939da }
	__asm { L_00c939d8: }
	__asm { xor eax, eax }
	__asm { L_00c939da: }
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
	__asm { call fn_00c93a10 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_01312444[];
extern "C" char g_01312a84[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c93a30
extern "C" __declspec(naked) void asm_00c93a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69606 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xef9dac }
	__asm { mov dword ptr [esi + 4], 0xef9e24 }
	__asm { mov dword ptr [esi + 0x18], 0xef9e2c }
	__asm { mov dword ptr [esi + 0x1c], 0xef9e38 }
	__asm { mov eax, dword ptr [g_01312a84] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00c93ac9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312a84], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xef9d94 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1312958 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0c410 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c93ac9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x1312958 }
	__asm { inc dword ptr [g_01312444] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bfdcb0();
extern "C" void fn_00c938e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c93cf0
extern "C" __declspec(naked) void asm_00c93cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69643 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x14 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00c93d61 }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { lea ecx, [edi + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { call fn_00bfdcb0 }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { jmp L_00c93d63 }
	__asm { L_00c93d61: }
	__asm { xor edi, edi }
	__asm { L_00c93d63: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c938e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310cf0[];
extern "C" char g_01310cf4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c93db0
extern "C" __declspec(naked) void asm_00c93db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6965e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc22a70 }
	__asm { push 0x131093c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01310cf4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c93e12 }
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
	__asm { L_00c93e12: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01310cf0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c93ef0
extern "C" __declspec(naked) void asm_00c93ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69670 }
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
	__asm { je L_00c93f48 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefa760 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c93f4a }
	__asm { L_00c93f48: }
	__asm { xor eax, eax }
	__asm { L_00c93f4a: }
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

extern "C" char g_01310bb4[];
extern "C" char g_0131241c[];
extern "C" void fn_007cbf10();
extern "C" void fn_00c2cc50();
extern "C" void fn_00c9f030();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c94b70
extern "C" __declspec(naked) void asm_00c94b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69766 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c9f030 }
	__asm { mov dword ptr [esi], 0xef9f94 }
	__asm { mov dword ptr [esi + 4], 0xefa010 }
	__asm { mov dword ptr [esi + 0x18], 0xefa018 }
	__asm { mov dword ptr [esi + 0x1c], 0xefa024 }
	__asm { mov dword ptr [esi + 0x64], 0xefa034 }
	__asm { mov eax, dword ptr [g_01310bb4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00c94c0e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310bb4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xef9f7c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_00c2cc50 }
	__asm { push eax }
	__asm { mov ecx, 0x1310a88 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08f50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c94c0e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x1310a88 }
	__asm { inc dword ptr [g_0131241c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310bb4[];
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00c2cc50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c95030
extern "C" __declspec(naked) void asm_00c95030()
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
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c950a5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310bb4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xef9f7c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_00c2cc50 }
	__asm { push eax }
	__asm { mov ecx, 0x1310a88 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08f50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c950a5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x1310a88 }
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
extern "C" void fn_00c96b50();
// FUNCTION: ROBLOXSTUDIO 0x00c95480
extern "C" __declspec(naked) void asm_00c95480()
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
	__asm { call fn_00c96b50 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c954f2 }
	__asm { add esi, 5 }
	__asm { je L_00c954c2 }
	__asm { add esi, -5 }
	__asm { jmp L_00c954c4 }
	__asm { L_00c954c2: }
	__asm { xor esi, esi }
	__asm { L_00c954c4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c954f1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c954f1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c954f1: }
	__asm { pop edi }
	__asm { L_00c954f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c97460
extern "C" __declspec(naked) void asm_00c97460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd69a90 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00c974a9 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c974a9: }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_00c974cc }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c974cc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c988a0
extern "C" __declspec(naked) void asm_00c988a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69b80 }
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
	__asm { je L_00c988f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefb24c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c988fa }
	__asm { L_00c988f8: }
	__asm { xor eax, eax }
	__asm { L_00c988fa: }
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
// FUNCTION: ROBLOXSTUDIO 0x00c989d0
extern "C" __declspec(naked) void asm_00c989d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69ba0 }
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
	__asm { je L_00c98a28 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefb234 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c98a2a }
	__asm { L_00c98a28: }
	__asm { xor eax, eax }
	__asm { L_00c98a2a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00c98a60
extern "C" __declspec(naked) void asm_00c98a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69bb0 }
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
	__asm { je L_00c98ab8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefb1fc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c98aba }
	__asm { L_00c98ab8: }
	__asm { xor eax, eax }
	__asm { L_00c98aba: }
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

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c98c50
extern "C" __declspec(naked) void asm_00c98c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69bc0 }
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
	__asm { je L_00c98ca8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefb214 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c98caa }
	__asm { L_00c98ca8: }
	__asm { xor eax, eax }
	__asm { L_00c98caa: }
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
	__asm { je L_00c98cce }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00c98cce: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_01314140[];
extern "C" char g_01314144[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00c99090
extern "C" __declspec(naked) void asm_00c99090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd69bde }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01314144] }
	__asm { test al, 1 }
	__asm { jne L_00c990ca }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01314144], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_01314140], eax }
	__asm { L_00c990ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c98800();
extern "C" void fn_00c98ef0();
extern "C" void fn_00c9acb0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c99350
extern "C" __declspec(naked) void asm_00c99350()
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
	__asm { push 0x9c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c9939e }
	__asm { mov ecx, eax }
	__asm { call fn_00c9acb0 }
	__asm { mov esi, eax }
	__asm { jmp L_00c993a0 }
	__asm { L_00c9939e: }
	__asm { xor esi, esi }
	__asm { L_00c993a0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00c98800 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00c993d1 }
	__asm { lea ecx, [esi + 0x54] }
	__asm { test ecx, ecx }
	__asm { je L_00c993d1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c98ef0 }
	__asm { L_00c993d1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_00c5a250();
extern "C" void fn_00c988a0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c99540
extern "C" __declspec(naked) void asm_00c99540()
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
	__asm { push 0x98 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c9958e }
	__asm { mov ecx, eax }
	__asm { call fn_00c5a250 }
	__asm { mov esi, eax }
	__asm { jmp L_00c99590 }
	__asm { L_00c9958e: }
	__asm { xor esi, esi }
	__asm { L_00c99590: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00c988a0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00c995c1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00c995c1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00c995c1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c98930();
extern "C" void fn_00c98ef0();
extern "C" void fn_00c9add0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c99730
extern "C" __declspec(naked) void asm_00c99730()
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
	__asm { push 0x9c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c9977e }
	__asm { mov ecx, eax }
	__asm { call fn_00c9add0 }
	__asm { mov esi, eax }
	__asm { jmp L_00c99780 }
	__asm { L_00c9977e: }
	__asm { xor esi, esi }
	__asm { L_00c99780: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00c98930 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00c997b1 }
	__asm { lea ecx, [esi + 0x54] }
	__asm { test ecx, ecx }
	__asm { je L_00c997b1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c98ef0 }
	__asm { L_00c997b1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_00c5a390();
extern "C" void fn_00c989d0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c99920
extern "C" __declspec(naked) void asm_00c99920()
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
	__asm { push 0x98 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c9996e }
	__asm { mov ecx, eax }
	__asm { call fn_00c5a390 }
	__asm { mov esi, eax }
	__asm { jmp L_00c99970 }
	__asm { L_00c9996e: }
	__asm { xor esi, esi }
	__asm { L_00c99970: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00c989d0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00c999a1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00c999a1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00c999a1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312420[];
extern "C" char g_013126f4[];
extern "C" void fn_007cbf10();
extern "C" void fn_00c2cc50();
extern "C" void fn_00c9f030();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c9a610
extern "C" __declspec(naked) void asm_00c9a610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69cf6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c9f030 }
	__asm { mov dword ptr [esi], 0xefa7dc }
	__asm { mov dword ptr [esi + 4], 0xefa858 }
	__asm { mov dword ptr [esi + 0x18], 0xefa860 }
	__asm { mov dword ptr [esi + 0x1c], 0xefa86c }
	__asm { mov dword ptr [esi + 0x64], 0xefa87c }
	__asm { mov eax, dword ptr [g_013126f4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00c9a6ae }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013126f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xefa77c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_00c2cc50 }
	__asm { push eax }
	__asm { mov ecx, 0x13125c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0c440 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c9a6ae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x13125c8 }
	__asm { inc dword ptr [g_01312420] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013126f4[];
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00c2cc50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c9aa80
extern "C" __declspec(naked) void asm_00c9aa80()
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
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c9aaf5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013126f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xefa77c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_00c2cc50 }
	__asm { push eax }
	__asm { mov ecx, 0x13125c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0c440 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c9aaf5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x13125c8 }
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

extern "C" char g_00e1025c[];
extern "C" void fn_00c9cb50();
extern "C" void fn_00c9cbd0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c9ac40
extern "C" __declspec(naked) void asm_00c9ac40()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea edi, [ebx + 0x18] }
	__asm { test edi, edi }
	__asm { je L_00c9ac51 }
	__asm { lea eax, [edi + 9] }
	__asm { jmp L_00c9ac53 }
	__asm { L_00c9ac51: }
	__asm { xor eax, eax }
	__asm { L_00c9ac53: }
	__asm { push 0x34 }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00c9ac6a }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00c9ac6a: }
	__asm { lea esi, [edi + 9] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { call fn_00c9cbd0 }
	__asm { mov ecx, esi }
	__asm { call fn_00c9cb50 }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { cmovne eax, esi }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebx + 0x34], eax }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { cmovne eax, esi }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 0x48], eax }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { ret 4 }
}

extern "C" void fn_00c9c5e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c9b280
extern "C" __declspec(naked) void asm_00c9b280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69e8b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea esi, [ecx + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 9] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c9b2b3 }
	__asm { lea eax, [ecx - 9] }
	__asm { jmp L_00c9b2b5 }
	__asm { L_00c9b2b3: }
	__asm { xor eax, eax }
	__asm { L_00c9b2b5: }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { and eax, 0xfffffffe }
	__asm { je L_00c9b2c5 }
	__asm { add eax, -0x28 }
	__asm { jmp L_00c9b2c7 }
	__asm { L_00c9b2c5: }
	__asm { xor eax, eax }
	__asm { L_00c9b2c7: }
	__asm { push eax }
	__asm { call fn_00c9c5e0 }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00c9c790();
// FUNCTION: ROBLOXSTUDIO 0x00c9b310
extern "C" __declspec(naked) void asm_00c9b310()
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
	__asm { call fn_00c9c790 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c9b382 }
	__asm { add esi, 5 }
	__asm { je L_00c9b352 }
	__asm { add esi, -5 }
	__asm { jmp L_00c9b354 }
	__asm { L_00c9b352: }
	__asm { xor esi, esi }
	__asm { L_00c9b354: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c9b381 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c9b381 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c9b381: }
	__asm { pop edi }
	__asm { L_00c9b382: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00c5d730();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c9bd10
extern "C" __declspec(naked) void asm_00c9bd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69fe8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x34] }
	__asm { mov dword ptr [esi], 0xefaae8 }
	__asm { mov dword ptr [ecx], 0xefaaf4 }
	__asm { mov dword ptr [esi + 0x38], 0xefab6c }
	__asm { mov dword ptr [esi + 0x4c], 0xefab74 }
	__asm { mov dword ptr [esi + 0x50], 0xefab80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c5d730 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c9bd7c }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c9bd7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00c5d7f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c9bd90
extern "C" __declspec(naked) void asm_00c9bd90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a008 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x34] }
	__asm { mov dword ptr [esi], 0xefacd0 }
	__asm { mov dword ptr [ecx], 0xefacdc }
	__asm { mov dword ptr [esi + 0x38], 0xefad54 }
	__asm { mov dword ptr [esi + 0x4c], 0xefad5c }
	__asm { mov dword ptr [esi + 0x50], 0xefad68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c5d7f0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c9bdfc }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c9bdfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c9c5e0
extern "C" __declspec(naked) void asm_00c9c5e0()
{
	__asm { L_00c9c5e0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_00c9c642 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { test eax, eax }
	__asm { je L_00c9c5fa }
	__asm { add eax, -0x28 }
	__asm { jmp L_00c9c5fc }
	__asm { L_00c9c5fa: }
	__asm { xor eax, eax }
	__asm { L_00c9c5fc: }
	__asm { push eax }
	__asm { call L_00c9c5e0 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { test eax, eax }
	__asm { je L_00c9c60e }
	__asm { add eax, -0x28 }
	__asm { jmp L_00c9c610 }
	__asm { L_00c9c60e: }
	__asm { xor eax, eax }
	__asm { L_00c9c610: }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call L_00c9c5e0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00c9c628 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c9c628: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c9c642: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403a30();
extern "C" void fn_00c9b780();
// FUNCTION: ROBLOXSTUDIO 0x00c9cfa0
extern "C" __declspec(naked) void asm_00c9cfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea esi, [ecx + 0xb34] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00403a30 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c9b780 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_00c9cfd2 }
	__asm { add eax, -9 }
	__asm { jmp L_00c9cfd4 }
	__asm { L_00c9cfd2: }
	__asm { xor eax, eax }
	__asm { L_00c9cfd4: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [eax], 0 }
	__asm { je L_00c9cff1 }
	__asm { lea edx, [eax + 4] }
	__asm { test edx, edx }
	__asm { je L_00c9cfee }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [edx], ecx }
	__asm { L_00c9cfee: }
	__asm { mov byte ptr [eax], 1 }
	__asm { L_00c9cff1: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01314120[];
extern "C" char g_01314124[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c9e340
extern "C" __declspec(naked) void asm_00c9e340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6a25e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01314124] }
	__asm { test al, 1 }
	__asm { jne L_00c9e3b3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01314124], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c9e39e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01314120], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c9e39e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01314120], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c9e3b3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01314120] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c9e830
extern "C" __declspec(naked) void asm_00c9e830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a2c0 }
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
	__asm { je L_00c9e888 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefb918 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c9e88a }
	__asm { L_00c9e888: }
	__asm { xor eax, eax }
	__asm { L_00c9e88a: }
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

extern "C" void fn_00c9ea80();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c9e960
extern "C" __declspec(naked) void asm_00c9e960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a2d0 }
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
	__asm { je L_00c9e9b8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefb930 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c9e9ba }
	__asm { L_00c9e9b8: }
	__asm { xor eax, eax }
	__asm { L_00c9e9ba: }
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
	__asm { call fn_00c9ea80 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c9e9f0
extern "C" __declspec(naked) void asm_00c9e9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a2e0 }
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
	__asm { je L_00c9ea48 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefb900 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c9ea4a }
	__asm { L_00c9ea48: }
	__asm { xor eax, eax }
	__asm { L_00c9ea4a: }
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
	__asm { je L_00c9ea6e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00c9ea6e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_0083cf30();
// FUNCTION: ROBLOXSTUDIO 0x00c9eb40
extern "C" __declspec(naked) void asm_00c9eb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00c9eb91 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c9eb60 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c9eb62 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c9eb62 }
	__asm { L_00c9eb60: }
	__asm { mov eax, ecx }
	__asm { L_00c9eb62: }
	__asm { test eax, eax }
	__asm { je L_00c9eb91 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c9eb91 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c9eb91 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c9eb91 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_0083cf30 }
	__asm { L_00c9eb91: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310ce4[];
extern "C" char g_01312430[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c9ece0
extern "C" __declspec(naked) void asm_00c9ece0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a306 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov eax, dword ptr [g_01310ce4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00c9ed5e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310ce4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xefb3d0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1310bb8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08f60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c9ed5e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x1310bb8 }
	__asm { inc dword ptr [g_01312430] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00ca0290
extern "C" __declspec(naked) void asm_00ca0290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a530 }
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
	__asm { je L_00ca02e8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefd6a4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00ca02ea }
	__asm { L_00ca02e8: }
	__asm { xor eax, eax }
	__asm { L_00ca02ea: }
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
// FUNCTION: ROBLOXSTUDIO 0x00ca0320
extern "C" __declspec(naked) void asm_00ca0320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a540 }
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
	__asm { je L_00ca0378 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefd62c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00ca037a }
	__asm { L_00ca0378: }
	__asm { xor eax, eax }
	__asm { L_00ca037a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00ca03b0
extern "C" __declspec(naked) void asm_00ca03b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a550 }
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
	__asm { je L_00ca0408 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefd614 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00ca040a }
	__asm { L_00ca0408: }
	__asm { xor eax, eax }
	__asm { L_00ca040a: }
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

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00ca0760
extern "C" __declspec(naked) void asm_00ca0760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a590 }
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
	__asm { je L_00ca07b8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefd6bc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00ca07ba }
	__asm { L_00ca07b8: }
	__asm { xor eax, eax }
	__asm { L_00ca07ba: }
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
	__asm { je L_00ca07de }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00ca07de: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00ca07f0
extern "C" __declspec(naked) void asm_00ca07f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a5a0 }
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
	__asm { je L_00ca0848 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefd6ec }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00ca084a }
	__asm { L_00ca0848: }
	__asm { xor eax, eax }
	__asm { L_00ca084a: }
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
	__asm { je L_00ca086e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00ca086e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00ca0880
extern "C" __declspec(naked) void asm_00ca0880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a5b0 }
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
	__asm { je L_00ca08d8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefd6d4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00ca08da }
	__asm { L_00ca08d8: }
	__asm { xor eax, eax }
	__asm { L_00ca08da: }
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
	__asm { je L_00ca08fe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00ca08fe: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00ca0f40();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00ca0910
extern "C" __declspec(naked) void asm_00ca0910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a5c0 }
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
	__asm { je L_00ca0968 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefd65c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00ca096a }
	__asm { L_00ca0968: }
	__asm { xor eax, eax }
	__asm { L_00ca096a: }
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
	__asm { call fn_00ca0f40 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00ca0f60();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00ca09a0
extern "C" __declspec(naked) void asm_00ca09a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a5d0 }
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
	__asm { je L_00ca09f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefd644 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00ca09fa }
	__asm { L_00ca09f8: }
	__asm { xor eax, eax }
	__asm { L_00ca09fa: }
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
	__asm { call fn_00ca0f60 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00ca0fa0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00ca0a30
extern "C" __declspec(naked) void asm_00ca0a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a5e0 }
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
	__asm { je L_00ca0a88 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefd68c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00ca0a8a }
	__asm { L_00ca0a88: }
	__asm { xor eax, eax }
	__asm { L_00ca0a8a: }
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
	__asm { call fn_00ca0fa0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00ca1000();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00ca0ac0
extern "C" __declspec(naked) void asm_00ca0ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a5f0 }
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
	__asm { je L_00ca0b18 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefd674 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00ca0b1a }
	__asm { L_00ca0b18: }
	__asm { xor eax, eax }
	__asm { L_00ca0b1a: }
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
	__asm { call fn_00ca1000 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_013142d4[];
extern "C" char g_013142d8[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00ca0ef0
extern "C" __declspec(naked) void asm_00ca0ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6a61e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013142d8] }
	__asm { test al, 1 }
	__asm { jne L_00ca0f32 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013142d8], eax }
	__asm { push 0xefb99c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013142d4], eax }
	__asm { L_00ca0f32: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007bb2a0();
extern "C" void fn_007cd560();
extern "C" void fn_009d8ed0();
extern "C" void fn_00c85190();
// FUNCTION: ROBLOXSTUDIO 0x00ca6700
extern "C" __declspec(naked) void asm_00ca6700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push ebx }
	__asm { call fn_00c85190 }
	__asm { cmp byte ptr [esi + 0x45dc], 0 }
	__asm { mov edi, eax }
	__asm { je L_00ca6749 }
	__asm { test edi, edi }
	__asm { jne L_00ca6749 }
	__asm { mov esi, dword ptr [ebx + 0x28] }
	__asm { call fn_007bb2a0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00ca6749 }
	__asm { mov ecx, ebx }
	__asm { test ecx, ecx }
	__asm { je L_00ca6749 }
	__asm { call fn_009d8ed0 }
	__asm { test eax, eax }
	__asm { lea eax, [edi + 1] }
	__asm { je L_00ca674b }
	__asm { L_00ca6749: }
	__asm { mov eax, edi }
	__asm { L_00ca674b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00ca9020
extern "C" __declspec(naked) void asm_00ca9020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00ca9068 }
	__asm { cmp eax, 1 }
	__asm { je L_00ca9068 }
	__asm { cmp eax, 2 }
	__asm { je L_00ca907c }
	__asm { cmp eax, 3 }
	__asm { jne L_00ca9057 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x12ac668 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ca9057: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12ac668 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ca9068: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_00ca907c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_00ca907c: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b53d0();
// FUNCTION: ROBLOXSTUDIO 0x00caa160
extern "C" __declspec(naked) void asm_00caa160()
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
	__asm { je L_00caa1c1 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_00caa180: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_00caa18b }
	__asm { add esi, -0x28 }
	__asm { jmp L_00caa18d }
	__asm { L_00caa18b: }
	__asm { xor esi, esi }
	__asm { L_00caa18d: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_00caa1a8 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x28] }
	__asm { jmp L_00caa1ba }
	__asm { L_00caa1a8: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { lea edx, [esi + 0x28] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_00caa1ba: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00caa180 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00caa1c1: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f8550[];
extern "C" void fn_00a0a470();
// FUNCTION: ROBLOXSTUDIO 0x00cabb50
extern "C" __declspec(naked) void asm_00cabb50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6ae48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov bl, byte ptr [ecx + 0x20a9] }
	__asm { push esi }
	__asm { lea esi, [ecx + 0x20a9] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 0x10], bl }
	__asm { mov byte ptr [esi], 1 }
	__asm { mov ecx, dword ptr [ecx + 0x2050] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00cabbae }
	__asm { movzx eax, byte ptr [g_012f8550] }
	__asm { push 0xff }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0x140 }
	__asm { call fn_00a0a470 }
	__asm { L_00cabbae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [esi], bl }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004033d0();
extern "C" void fn_00500320();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_00c91d30();
// FUNCTION: ROBLOXSTUDIO 0x00cabbd0
extern "C" __declspec(naked) void asm_00cabbd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x1205], 0 }
	__asm { jne L_00cabc58 }
	__asm { mov ecx, dword ptr [esi + 0x1190] }
	__asm { test ecx, ecx }
	__asm { je L_00cabc58 }
	__asm { call fn_00500320 }
	__asm { cmp eax, 1 }
	__asm { jne L_00cabc58 }
	__asm { mov eax, dword ptr [esi + 0x131c] }
	__asm { cmp byte ptr [eax + 0x70], 0 }
	__asm { je L_00cabc62 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { push 0xefca88 }
	__asm { push 2 }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00773930 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cabc58: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00c91d30 }
	__asm { L_00cabc62: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
extern "C" void fn_0092dd20();
// FUNCTION: ROBLOXSTUDIO 0x00cabd40
extern "C" __declspec(naked) void asm_00cabd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd16098 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 0x88] }
	__asm { test edx, edx }
	__asm { jne L_00cabd93 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x24], 0xe19198 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_00cabd93: }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 0x90] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { call fn_0092dd20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00cad5c0
extern "C" __declspec(naked) void asm_00cad5c0()
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
	__asm { je L_00cad63b }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00cad634 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edi + 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00cad634: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { pop edi }
	__asm { L_00cad63b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00cae630
extern "C" __declspec(naked) void asm_00cae630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6b060 }
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
	__asm { je L_00cae688 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefed80 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00cae68a }
	__asm { L_00cae688: }
	__asm { xor eax, eax }
	__asm { L_00cae68a: }
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

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00caf1a0
extern "C" __declspec(naked) void asm_00caf1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6b0e0 }
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
	__asm { je L_00caf1f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefed98 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00caf1fa }
	__asm { L_00caf1f8: }
	__asm { xor eax, eax }
	__asm { L_00caf1fa: }
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
	__asm { je L_00caf21e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00caf21e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00caf700
extern "C" __declspec(naked) void asm_00caf700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6b170 }
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
	__asm { je L_00caf758 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefedb0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00caf75a }
	__asm { L_00caf758: }
	__asm { xor eax, eax }
	__asm { L_00caf75a: }
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
	__asm { je L_00caf77e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00caf77e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_01312824[];
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00c2ccd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00cb0a90
extern "C" __declspec(naked) void asm_00cb0a90()
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
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00cb0b05 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312824], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xefd73c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_00c2ccd0 }
	__asm { push eax }
	__asm { mov ecx, 0x13126f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0c450 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00cb0b05: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x13126f8 }
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

extern "C" void fn_00891b10();
extern "C" void fn_008929a0();
extern "C" void fn_00b49710();
extern "C" void fn_00b5ca50();
extern "C" void fn_00c72ac0();
// FUNCTION: ROBLOXSTUDIO 0x00cb2ec0
extern "C" __declspec(naked) void asm_00cb2ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebx + 0xe0] }
	__asm { mov esi, ecx }
	__asm { call fn_00b5ca50 }
	__asm { push eax }
	__asm { call fn_00891b10 }
	__asm { lea ecx, [esi + 0xeb0] }
	__asm { mov edi, eax }
	__asm { push ecx }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_00c72ac0 }
	__asm { add esp, 0x10 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_008929a0 }
	__asm { mov ecx, eax }
	__asm { call fn_00b49710 }
	__asm { cmp edi, ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jne L_00cb2f1a }
	__asm { test al, al }
	__asm { je L_00cb2f1a }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cb2f1a: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005451a0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00cb5400
extern "C" __declspec(naked) void asm_00cb5400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00cb544f }
	__asm { add edi, 0x1c }
	__asm { je L_00cb544f }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_005451a0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00cb544f }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00cb544f }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, 0x1310ff4 }
	__asm { je L_00cb5448 }
	__asm { cmp eax, 0x12e1de0 }
	__asm { je L_00cb5448 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cb5448: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cb544f: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, 0x12e3aa8 }
	__asm { jne L_00cb5460 }
	__asm { L_00cb5459: }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cb5460: }
	__asm { cmp eax, 0x12e3ad4 }
	__asm { je L_00cb5459 }
	__asm { cmp eax, 0x12f6d24 }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004118e0();
extern "C" void fn_007cd560();
extern "C" void fn_00ca6830();
// FUNCTION: ROBLOXSTUDIO 0x00cb61e0
extern "C" __declspec(naked) void asm_00cb61e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { test edi, edi }
	__asm { je L_00cb622e }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00cb622e }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00cb622e }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { L_00cb622e: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 8] }
	__asm { call fn_00ca6830 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { je L_00cb624d }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0x24], ecx }
	__asm { L_00cb624d: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_013146f4[];
extern "C" char g_013146f8[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00cb71e0
extern "C" __declspec(naked) void asm_00cb71e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6ba6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013146f8] }
	__asm { test al, 1 }
	__asm { jne L_00cb7253 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013146f8], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00cb723e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013146f4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cb723e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013146f4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cb7253: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013146f4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403160();
extern "C" void fn_009004e0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00cb7e30
extern "C" __declspec(naked) void asm_00cb7e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd30f5b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00cb7e86 }
	__asm { push 4 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00cb7e7b }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_009004e0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_00cb7e88 }
	__asm { L_00cb7e7b: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_00cb7e88 }
	__asm { L_00cb7e86: }
	__asm { xor eax, eax }
	__asm { L_00cb7e88: }
	__asm { mov esi, dword ptr [edi + 0x4658] }
	__asm { mov dword ptr [edi + 0x4658], eax }
	__asm { test esi, esi }
	__asm { je L_00cb7ea8 }
	__asm { mov ecx, esi }
	__asm { call fn_00403160 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cb7ea8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131470c[];
extern "C" char g_01314710[];
extern "C" void fn_00cb8eb0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00cb9080
extern "C" __declspec(naked) void asm_00cb9080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01314710] }
	__asm { inc eax }
	__asm { mov dword ptr [g_01314710], eax }
	__asm { cmp eax, 1 }
	__asm { jne L_00cb90e2 }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00cb90db }
	__asm { mov ecx, eax }
	__asm { call fn_00cb8eb0 }
	__asm { mov dword ptr [g_0131470c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cb90db: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131470c], eax }
	__asm { L_00cb90e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012afa4c[];
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00cb9620
extern "C" __declspec(naked) void asm_00cb9620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6bc58 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [esi + 4], edi }
	__asm { jbe L_00cb9672 }
	__asm { mov edi, edi }
	__asm { L_00cb9650: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp byte ptr [eax + edi*8 + 4], 0 }
	__asm { je L_00cb966c }
	__asm { push 0x1d }
	__asm { push 0xefee38 }
	__asm { push dword ptr [eax + edi*8] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { add esp, 0xc }
	__asm { L_00cb966c: }
	__asm { inc edi }
	__asm { cmp edi, dword ptr [esi + 4] }
	__asm { jb L_00cb9650 }
	__asm { L_00cb9672: }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_00cb96a6 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { jbe L_00cb96a6 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00cb96a6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131472c[];
extern "C" char g_01314730[];
extern "C" void fn_00cb9620();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00cb96c0
extern "C" __declspec(naked) void asm_00cb96c0()
{
	__asm { mov eax, dword ptr [g_01314730] }
	__asm { inc eax }
	__asm { mov dword ptr [g_01314730], eax }
	__asm { cmp eax, 1 }
	__asm { jne L_00cb96ff }
	__asm { push 0xc }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00cb96f8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0131472c], eax }
	__asm { ret }
	__asm { L_00cb96f8: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131472c], eax }
	__asm { L_00cb96ff: }
	__asm { ret }
	__asm { mov eax, dword ptr [g_01314730] }
	__asm { test eax, eax }
	__asm { jle L_00cb9737 }
	__asm { dec eax }
	__asm { mov dword ptr [g_01314730], eax }
	__asm { jne L_00cb9737 }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0131472c] }
	__asm { test esi, esi }
	__asm { je L_00cb972c }
	__asm { mov ecx, esi }
	__asm { call fn_00cb9620 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cb972c: }
	__asm { mov dword ptr [g_0131472c], 0 }
	__asm { pop esi }
	__asm { L_00cb9737: }
	__asm { ret }
}

extern "C" void fn_007b1940();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00cb98d0
extern "C" __declspec(naked) void asm_00cb98d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { je L_00cb9906 }
	__asm { L_00cb98dd: }
	__asm { lea ebx, [esi + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00cb98ff }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { call fn_007b1940 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00cb98ff }
	__asm { lea eax, [ebx - 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_00cb990d }
	__asm { L_00cb98ff: }
	__asm { mov esi, dword ptr [esi + 0x38] }
	__asm { test esi, esi }
	__asm { jne L_00cb98dd }
	__asm { L_00cb9906: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cb990d: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b19c0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00cb9920
extern "C" __declspec(naked) void asm_00cb9920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { je L_00cb9956 }
	__asm { L_00cb992d: }
	__asm { lea ebx, [esi + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00cb994f }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { call fn_007b19c0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00cb994f }
	__asm { lea eax, [ebx - 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_00cb995d }
	__asm { L_00cb994f: }
	__asm { mov esi, dword ptr [esi + 0x38] }
	__asm { test esi, esi }
	__asm { jne L_00cb992d }
	__asm { L_00cb9956: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cb995d: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cd560();
extern "C" void fn_00813b90();
// FUNCTION: ROBLOXSTUDIO 0x00cb9970
extern "C" __declspec(naked) void asm_00cb9970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { je L_00cb99a6 }
	__asm { L_00cb997d: }
	__asm { lea ebx, [esi + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00cb999f }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { call fn_00813b90 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00cb999f }
	__asm { lea eax, [ebx - 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_00cb99ad }
	__asm { L_00cb999f: }
	__asm { mov esi, dword ptr [esi + 0x38] }
	__asm { test esi, esi }
	__asm { jne L_00cb997d }
	__asm { L_00cb99a6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cb99ad: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312c58[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_00cb9ca0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00cba1b0
extern "C" __declspec(naked) void asm_00cba1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd650ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00cba1d4 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00cba1d4: }
	__asm { push 0xc53cf0 }
	__asm { push 0x1312a98 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312c58] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00cba21c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312c58], eax }
	__asm { mov ecx, 0x1312bd0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cb9ca0 }
	__asm { push 0xe0c460 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00cba21c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1312bd0 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131474c[];
extern "C" char g_0131479c[];
extern "C" void fn_004030b0();
extern "C" void fn_0044e2e0();
extern "C" void fn_00794610();
extern "C" void fn_009fe3b0();
// FUNCTION: ROBLOXSTUDIO 0x00cba350
extern "C" __declspec(naked) void asm_00cba350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, 0x12e1e0c }
	__asm { jne L_00cba366 }
	__asm { L_00cba35f: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cba366: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { shr eax, 5 }
	__asm { test al, 1 }
	__asm { jne L_00cba38f }
	__asm { cmp byte ptr [g_0131474c], 0 }
	__asm { je L_00cba35f }
	__asm { mov ecx, esi }
	__asm { call fn_0044e2e0 }
	__asm { test al, al }
	__asm { jne L_00cba38f }
	__asm { mov ecx, esi }
	__asm { call fn_00794610 }
	__asm { test al, al }
	__asm { je L_00cba35f }
	__asm { L_00cba38f: }
	__asm { movzx ecx, byte ptr [g_0131479c] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { add eax, 4 }
	__asm { add ecx, 0x131479d }
	__asm { je L_00cba3a7 }
	__asm { inc ecx }
	__asm { jmp L_00cba3a9 }
	__asm { L_00cba3a7: }
	__asm { xor ecx, ecx }
	__asm { L_00cba3a9: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x131479c }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_009fe3b0 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp + 0xc], eax }
	__asm { pop esi }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00532480();
// FUNCTION: ROBLOXSTUDIO 0x00cba3f0
extern "C" __declspec(naked) void asm_00cba3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x90] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00cba443 }
	__asm { mov edx, dword ptr [esi + 0x64] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test edx, edx }
	__asm { je L_00cba42a }
	__asm { cmp edx, ecx }
	__asm { je L_00cba423 }
	__asm { test ecx, ecx }
	__asm { je L_00cba443 }
	__asm { push edx }
	__asm { call fn_00532480 }
	__asm { test al, al }
	__asm { je L_00cba443 }
	__asm { L_00cba423: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cba42a: }
	__asm { cmp esi, ecx }
	__asm { je L_00cba423 }
	__asm { test ecx, ecx }
	__asm { je L_00cba443 }
	__asm { push esi }
	__asm { call fn_00532480 }
	__asm { test al, al }
	__asm { je L_00cba443 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cba443: }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01314768[];
extern "C" void fn_004030b0();
extern "C" void fn_009fe3b0();
// FUNCTION: ROBLOXSTUDIO 0x00cba450
extern "C" __declspec(naked) void asm_00cba450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00cba4a5 }
	__asm { movzx ecx, byte ptr [g_01314768] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { add eax, 4 }
	__asm { add ecx, 0x1314769 }
	__asm { je L_00cba47c }
	__asm { inc ecx }
	__asm { jmp L_00cba47e }
	__asm { L_00cba47c: }
	__asm { xor ecx, ecx }
	__asm { L_00cba47e: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1314768 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_009fe3b0 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp + 0xc], eax }
	__asm { pop esi }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cba4a5: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00532480();
// FUNCTION: ROBLOXSTUDIO 0x00cba950
extern "C" __declspec(naked) void asm_00cba950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x90] }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_00cba9a9 }
	__asm { mov eax, dword ptr [edi + 0x64] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00cba989 }
	__asm { cmp esi, eax }
	__asm { je L_00cba9a2 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00532480 }
	__asm { test al, al }
	__asm { jne L_00cba9a2 }
	__asm { L_00cba989: }
	__asm { cmp esi, edi }
	__asm { je L_00cba9a2 }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { cmp edi, ecx }
	__asm { je L_00cba9a2 }
	__asm { test ecx, ecx }
	__asm { je L_00cba9a8 }
	__asm { push edi }
	__asm { call fn_00532480 }
	__asm { test al, al }
	__asm { je L_00cba9a8 }
	__asm { L_00cba9a2: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { L_00cba9a8: }
	__asm { pop esi }
	__asm { L_00cba9a9: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01314808[];
extern "C" char g_0131480c[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00cba9b0
extern "C" __declspec(naked) void asm_00cba9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6be0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131480c] }
	__asm { test al, 1 }
	__asm { jne L_00cba9f2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131480c], eax }
	__asm { push 0xeff078 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01314808], eax }
	__asm { L_00cba9f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312434[];
extern "C" char g_01312954[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00cbaa00
extern "C" __declspec(naked) void asm_00cbaa00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6bd86 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xeff094 }
	__asm { mov dword ptr [esi + 4], 0xeff10c }
	__asm { mov dword ptr [esi + 0x18], 0xeff114 }
	__asm { mov dword ptr [esi + 0x1c], 0xeff120 }
	__asm { mov eax, dword ptr [g_01312954] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00cbaa99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312954], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeff07c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1312828 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0c420 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00cbaa99: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x1312828 }
	__asm { inc dword ptr [g_01312434] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312954[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00cbaac0
extern "C" __declspec(naked) void asm_00cbaac0()
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
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00cbab35 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312954], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeff07c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1312828 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0c420 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00cbab35: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x1312828 }
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

extern "C" char g_01314808[];
extern "C" char g_0131480c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00cbad10
extern "C" __declspec(naked) void asm_00cbad10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6be0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xcba9b0 }
	__asm { push 0x1314800 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131480c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00cbad72 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131480c], eax }
	__asm { push 0xeff078 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01314808], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cbad72: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01314808] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cbd170
extern "C" __declspec(naked) void asm_00cbd170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, 0x18 }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { cmp eax, 2 }
	__asm { je L_00cbd197 }
	__asm { cmp eax, 4 }
	__asm { je L_00cbd197 }
	__asm { cmp eax, 3 }
	__asm { je L_00cbd197 }
	__asm { cmp eax, 6 }
	__asm { je L_00cbd197 }
	__asm { cmp eax, 7 }
	__asm { jne L_00cbd19c }
	__asm { L_00cbd197: }
	__asm { mov ecx, 0x30 }
	__asm { L_00cbd19c: }
	__asm { cmp eax, 1 }
	__asm { je L_00cbd1a6 }
	__asm { cmp eax, 4 }
	__asm { jne L_00cbd1a9 }
	__asm { L_00cbd1a6: }
	__asm { add ecx, 0x18 }
	__asm { L_00cbd1a9: }
	__asm { cmp eax, 1 }
	__asm { je L_00cbd1bd }
	__asm { cmp eax, 4 }
	__asm { je L_00cbd1bd }
	__asm { cmp eax, 3 }
	__asm { je L_00cbd1bd }
	__asm { cmp eax, 7 }
	__asm { jne L_00cbd1c0 }
	__asm { L_00cbd1bd: }
	__asm { add ecx, 0x20 }
	__asm { L_00cbd1c0: }
	__asm { cmp dword ptr [edx + 0x14], 0 }
	__asm { lea eax, [ecx + 0x50] }
	__asm { ja L_00cbd1cb }
	__asm { mov eax, ecx }
	__asm { L_00cbd1cb: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00cbeec0
extern "C" __declspec(naked) void asm_00cbeec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { jne L_00cbef20 }
	__asm { test eax, eax }
	__asm { jne L_00cbeedb }
	__asm { mov dword ptr [esi + 8], 0x10 }
	__asm { jmp L_00cbeee0 }
	__asm { L_00cbeedb: }
	__asm { add eax, eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_00cbeee0: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { jne L_00cbeeec }
	__asm { xor edi, edi }
	__asm { jmp L_00cbeef7 }
	__asm { L_00cbeeec: }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { mov edi, eax }
	__asm { L_00cbeef7: }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00cbef1d }
	__asm { xor ecx, ecx }
	__asm { cmp dword ptr [esi + 4], ecx }
	__asm { jbe L_00cbef13 }
	__asm { L_00cbef03: }
	__asm { mov eax, dword ptr [esi] }
	__asm { inc ecx }
	__asm { mov al, byte ptr [ecx + eax - 1] }
	__asm { mov byte ptr [ecx + edi - 1], al }
	__asm { cmp ecx, dword ptr [esi + 4] }
	__asm { jb L_00cbef03 }
	__asm { L_00cbef13: }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00cbef1d: }
	__asm { mov dword ptr [esi], edi }
	__asm { pop edi }
	__asm { L_00cbef20: }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cb92e0();
extern "C" void fn_00cbebc0();
extern "C" void fn_00cbec80();
// FUNCTION: ROBLOXSTUDIO 0x00cbef40
extern "C" __declspec(naked) void asm_00cbef40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { lea eax, [ebp + 0x1f] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_00cb92e0 }
	__asm { cmp byte ptr [ebp + 0x1f], 0 }
	__asm { mov edi, eax }
	__asm { je L_00cbef67 }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_00cbef67: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { cmp edi, dword ptr [esi + 4] }
	__asm { jb L_00cbef86 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cbec80 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { pop edi }
	__asm { dec eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_00cbef86: }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cbebc0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00cbeec0();
extern "C" void fn_00ceaff0();
// FUNCTION: ROBLOXSTUDIO 0x00cbfba0
extern "C" __declspec(naked) void asm_00cbfba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0xf20], 0 }
	__asm { jbe L_00cbfc23 }
	__asm { mov eax, dword ptr [esi + 0xee8] }
	__asm { push 0xd36 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push 0xeff248 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xefc] }
	__asm { call fn_00ceaff0 }
	__asm { push 0xd37 }
	__asm { push 0xeff248 }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xf08] }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { call fn_00cbeec0 }
	__asm { mov eax, dword ptr [esi + 0xf20] }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { push 0xd39 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push 0xeff248 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xf14] }
	__asm { call fn_00ceaff0 }
	__asm { mov dword ptr [esi + 0xf20], 0 }
	__asm { L_00cbfc23: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040f890();
extern "C" void fn_006b98c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cc29e0
extern "C" __declspec(naked) void asm_00cc29e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00cc2a06 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00cc2a06: }
	__asm { fld qword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xeff4a4 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0x14 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040f890 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00cc2a46 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cc2a46: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040f890();
extern "C" void fn_006b98c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cc2cb0
extern "C" __declspec(naked) void asm_00cc2cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00cc2cd6 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00cc2cd6: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_00cc2ce1 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_00cc2ce1: }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xeff4b4 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0x10 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040f890 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00cc2d19 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cc2d19: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e13140[];
extern "C" void fn_00c688b0();
extern "C" void fn_00c68c30();
// FUNCTION: ROBLOXSTUDIO 0x00cc4910
extern "C" __declspec(naked) void asm_00cc4910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0x10 }
	__asm { call dword ptr [g_00e13140] }
	__asm { test eax, eax }
	__asm { je L_00cc4951 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push 0x131484c }
	__asm { call fn_00c688b0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cc4951: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp - 0x12] }
	__asm { mov ecx, esi }
	__asm { call fn_00c68c30 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e13154[];
extern "C" void fn_00c68c30();
extern "C" void fn_00ccfe60();
// FUNCTION: ROBLOXSTUDIO 0x00cc4a20
extern "C" __declspec(naked) void asm_00cc4a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x5d4 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0x10 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x14], 2 }
	__asm { call dword ptr [g_00e13154] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { test eax, eax }
	__asm { jle L_00cc4a88 }
	__asm { push esi }
	__asm { call fn_00ccfe60 }
	__asm { mov ecx, dword ptr [ebp + 0x24] }
	__asm { mov esi, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp - 0x12] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { mov ecx, esi }
	__asm { call fn_00c68c30 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { L_00cc4a88: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1316c[];
extern "C" char g_01314844[];
extern "C" void fn_00cc4bf0();
// FUNCTION: ROBLOXSTUDIO 0x00cc4a90
extern "C" __declspec(naked) void asm_00cc4a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [g_01314844] }
	__asm { test ecx, ecx }
	__asm { je L_00cc4aba }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 4] }
	__asm { xor ecx, ecx }
	__asm { cmp eax, -1 }
	__asm { sete cl }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cc4aba: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, -1 }
	__asm { jne L_00cc4ac6 }
	__asm { or eax, eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cc4ac6: }
	__asm { cmp word ptr [ebp + 0x18], 0 }
	__asm { jne L_00cc4af1 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00cc4bf0 }
	__asm { add esp, 0x18 }
	__asm { cmp eax, -1 }
	__asm { jne L_00cc4af1 }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e1316c] }
	__asm { L_00cc4af1: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1054c[];
extern "C" char g_00e13158[];
// FUNCTION: ROBLOXSTUDIO 0x00cc4bf0
extern "C" __declspec(naked) void asm_00cc4bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { xor esi, esi }
	__asm { mov edi, edi }
	__asm { L_00cc4c00: }
	__asm { cmp word ptr [edi], 2 }
	__asm { jne L_00cc4c1a }
	__asm { push 0x10 }
	__asm { push edi }
	__asm { push 0 }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e13158] }
	__asm { mov esi, eax }
	__asm { L_00cc4c1a: }
	__asm { test esi, esi }
	__asm { jns L_00cc4c37 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { movsx ecx, byte ptr [eax] }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0xeff680 }
	__asm { call dword ptr [g_00e1054c] }
	__asm { add esp, 0x10 }
	__asm { test esi, esi }
	__asm { L_00cc4c37: }
	__asm { je L_00cc4c00 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cc5240();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
// FUNCTION: ROBLOXSTUDIO 0x00cc4e00
extern "C" __declspec(naked) void asm_00cc4e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_00cc5240 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp ecx, 0x12af9a0 }
	__asm { je L_00cc4e4d }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call fn_00cf40a0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { jne L_00cc4e3f }
	__asm { mov dword ptr [esi], 0x12af9a0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call fn_00cf40b0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cc4e3f: }
	__asm { mov dword ptr [esi], eax }
	__asm { inc dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call fn_00cf40b0 }
	__asm { L_00cc4e4d: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cc4e60();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00cc5010
extern "C" __declspec(naked) void asm_00cc5010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { test edi, edi }
	__asm { je L_00cc5053 }
	__asm { cmp byte ptr [edi], 0 }
	__asm { je L_00cc5053 }
	__asm { mov eax, edi }
	__asm { lea edx, [eax + 1] }
	__asm { L_00cc5028: }
	__asm { mov cl, byte ptr [eax] }
	__asm { inc eax }
	__asm { test cl, cl }
	__asm { jne L_00cc5028 }
	__asm { sub eax, edx }
	__asm { push esi }
	__asm { lea esi, [eax + 1] }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00cc4e60 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [eax + 0x10] }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cc5053: }
	__asm { pop edi }
	__asm { mov dword ptr [ebx], 0x12af9a0 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_013148a0[];
extern "C" void fn_00cf4090();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00cc53c0
extern "C" __declspec(naked) void asm_00cc53c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6c3be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013148a0] }
	__asm { test al, 1 }
	__asm { jne L_00cc540e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013148a0], eax }
	__asm { mov ecx, 0x1314888 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf4090 }
	__asm { push 0xe0ee20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00cc540e: }
	__asm { mov ecx, 0x1314888 }
	__asm { call fn_00cf40a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013148a0[];
extern "C" void fn_00cf4090();
extern "C" void fn_00cf40b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00cc5500
extern "C" __declspec(naked) void asm_00cc5500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6c3be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013148a0] }
	__asm { test al, 1 }
	__asm { jne L_00cc554e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013148a0], eax }
	__asm { mov ecx, 0x1314888 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf4090 }
	__asm { push 0xe0ee20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00cc554e: }
	__asm { mov ecx, 0x1314888 }
	__asm { call fn_00cf40b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c71fa0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cc5d40
extern "C" __declspec(naked) void asm_00cc5d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, 0xc0c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c71fa0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { test edx, edx }
	__asm { je L_00cc5d9e }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea esi, [ebp - 0x24] }
	__asm { push esi }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x28] }
	__asm { pop esi }
	__asm { L_00cc5d9e: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00cc5daf }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cc5daf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cc5bf0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cc5de0
extern "C" __declspec(naked) void asm_00cc5de0()
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
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, 0xc0c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cc5bf0 }
	__asm { test al, al }
	__asm { jne L_00cc5e2f }
	__asm { xor bl, bl }
	__asm { jmp L_00cc5e49 }
	__asm { L_00cc5e2f: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { test edx, edx }
	__asm { je L_00cc5e47 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea esi, [ebp - 0x24] }
	__asm { push esi }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x28] }
	__asm { pop esi }
	__asm { L_00cc5e47: }
	__asm { mov bl, 1 }
	__asm { L_00cc5e49: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00cc5e5a }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cc5e5a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cc6360();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cc6520
extern "C" __declspec(naked) void asm_00cc6520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push dword ptr [eax + 4] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x24] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cc6360 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop esi }
	__asm { jb L_00cc6576 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cc6576: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009b53d0();
// FUNCTION: ROBLOXSTUDIO 0x00cc6ac0
extern "C" __declspec(naked) void asm_00cc6ac0()
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
	__asm { je L_00cc6b21 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_00cc6ae0: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_00cc6aeb }
	__asm { add esi, -0x30 }
	__asm { jmp L_00cc6aed }
	__asm { L_00cc6aeb: }
	__asm { xor esi, esi }
	__asm { L_00cc6aed: }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_00cc6b08 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x30] }
	__asm { jmp L_00cc6b1a }
	__asm { L_00cc6b08: }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { lea edx, [esi + 0x30] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_00cc6b1a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00cc6ae0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00cc6b21: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009b53d0();
extern "C" void fn_00c876a0();
extern "C" void fn_00cc6ac0();
// FUNCTION: ROBLOXSTUDIO 0x00cc6b30
extern "C" __declspec(naked) void asm_00cc6b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_00cc6b64 }
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
	__asm { L_00cc6b64: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_00cc6b9a }
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
	__asm { je L_00cc6b9a }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00cc6ac0 }
	__asm { L_00cc6b9a: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006c54a0();
extern "C" void fn_006c5500();
// FUNCTION: ROBLOXSTUDIO 0x00cc7340
extern "C" __declspec(naked) void asm_00cc7340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { add ecx, 4 }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00cc7384 }
	__asm { cmp eax, ecx }
	__asm { je L_00cc7384 }
	__asm { test eax, eax }
	__asm { je L_00cc735d }
	__asm { add eax, -8 }
	__asm { jmp L_00cc735f }
	__asm { L_00cc735d: }
	__asm { xor eax, eax }
	__asm { L_00cc735f: }
	__asm { add eax, 0x18 }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_006c54a0 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c5500 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cc7384: }
	__asm { fldz }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fstp qword ptr [eax] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6c7a0();
extern "C" void fn_00c85d70();
extern "C" void fn_00ca6930();
// FUNCTION: ROBLOXSTUDIO 0x00cc76f0
extern "C" __declspec(naked) void asm_00cc76f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 2 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_00c6c7a0 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00cc7740 }
	__asm { call fn_00c85d70 }
	__asm { test al, al }
	__asm { jne L_00cc7734 }
	__asm { call fn_00ca6930 }
	__asm { test al, al }
	__asm { jne L_00cc7734 }
	__asm { push 1 }
	__asm { push 4 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c6c7a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cc7734: }
	__asm { push 1 }
	__asm { push 5 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c6c7a0 }
	__asm { L_00cc7740: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00cc9ab0
extern "C" __declspec(naked) void asm_00cc9ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6c8c0 }
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
	__asm { je L_00cc9b08 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xf00fc0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00cc9b0a }
	__asm { L_00cc9b08: }
	__asm { xor eax, eax }
	__asm { L_00cc9b0a: }
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

extern "C" char g_01314b70[];
extern "C" char g_01314b74[];
extern "C" char g_01314b80[];
extern "C" char g_01314b84[];
extern "C" void fn_007cb250();
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00cca1c0
extern "C" __declspec(naked) void asm_00cca1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6c94e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01314b74] }
	__asm { test al, 1 }
	__asm { jne L_00cca202 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01314b74], eax }
	__asm { push 0xef3f78 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01314b70], eax }
	__asm { L_00cca202: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6c90e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01314b84] }
	__asm { test al, 1 }
	__asm { jne L_00cca24a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01314b84], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_01314b80], eax }
	__asm { L_00cca24a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_00cc9ab0();
extern "C" void fn_00ccb070();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00cca500
extern "C" __declspec(naked) void asm_00cca500()
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
	__asm { push 0x88 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00cca54e }
	__asm { mov ecx, eax }
	__asm { call fn_00ccb070 }
	__asm { mov esi, eax }
	__asm { jmp L_00cca550 }
	__asm { L_00cca54e: }
	__asm { xor esi, esi }
	__asm { L_00cca550: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00cc9ab0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00cca581 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00cca581 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00cca581: }
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
extern "C" void fn_00cca5a0();
// FUNCTION: ROBLOXSTUDIO 0x00cca6f0
extern "C" __declspec(naked) void asm_00cca6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00cca741 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00cca710 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00cca712 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00cca712 }
	__asm { L_00cca710: }
	__asm { mov eax, ecx }
	__asm { L_00cca712: }
	__asm { test eax, eax }
	__asm { je L_00cca741 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00cca741 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00cca741 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00cca741 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00cca5a0 }
	__asm { L_00cca741: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ef3f78[];
extern "C" char g_01314b70[];
extern "C" char g_01314b74[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00cca750
extern "C" __declspec(naked) void asm_00cca750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6c94e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ef3f78], 0 }
	__asm { jne L_00cca784 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cca784: }
	__asm { push 0xcca1c0 }
	__asm { push 0x1314b68 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01314b74] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00cca7ce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01314b74], eax }
	__asm { push 0xef3f78 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01314b70], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cca7ce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01314b70] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00cccdb0
extern "C" __declspec(naked) void asm_00cccdb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jne L_00ccce06 }
	__asm { push 0x14 }
	__asm { mov word ptr [esi + 8], 0 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_00cccddb }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00cccddb: }
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
	__asm { L_00ccce06: }
	__asm { cmp byte ptr [esi + 9], 0 }
	__asm { je L_00ccce10 }
	__asm { mov byte ptr [esi + 9], 0 }
	__asm { L_00ccce10: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004199f0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00ccd330
extern "C" __declspec(naked) void asm_00ccd330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00ccd379 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { push edi }
	__asm { L_00ccd343: }
	__asm { lea ebx, [esi + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00ccd366 }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { je L_00ccd366 }
	__asm { add ebx, -0x1c }
	__asm { jmp L_00ccd368 }
	__asm { L_00ccd366: }
	__asm { xor ebx, ebx }
	__asm { L_00ccd368: }
	__asm { mov esi, dword ptr [esi + 0x38] }
	__asm { test ebx, ebx }
	__asm { cmovne eax, ebx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { test esi, esi }
	__asm { jne L_00ccd343 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00ccd379: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ccaa90();
extern "C" void fn_00ccd390();
extern "C" void fn_00d0ce00();
// FUNCTION: ROBLOXSTUDIO 0x00ccd630
extern "C" __declspec(naked) void asm_00ccd630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { xor bl, bl }
	__asm { lea eax, [esi + 0x23c] }
	__asm { L_00ccd647: }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00ccd390 }
	__asm { test al, al }
	__asm { je L_00ccd695 }
	__asm { movzx eax, byte ptr [esi + 0x214] }
	__asm { add esi, 0x214 }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_00ccd668 }
	__asm { inc eax }
	__asm { jmp L_00ccd66a }
	__asm { L_00ccd668: }
	__asm { xor eax, eax }
	__asm { L_00ccd66a: }
	__asm { push eax }
	__asm { push edi }
	__asm { push edi }
	__asm { call fn_00d0ce00 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00ccaa90 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { sete bl }
	__asm { lea eax, [esi + 0x23c] }
	__asm { test bl, bl }
	__asm { je L_00ccd647 }
	__asm { L_00ccd695: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004033d0();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_00865d20();
extern "C" void fn_00a8b200();
// FUNCTION: ROBLOXSTUDIO 0x00cced70
extern "C" __declspec(naked) void asm_00cced70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 0x208] }
	__asm { call fn_00865d20 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00ccedff }
	__asm { mov eax, dword ptr [eax + 0x148] }
	__asm { test eax, eax }
	__asm { je L_00ccedff }
	__asm { mov eax, dword ptr [eax + 0xb4] }
	__asm { mov eax, dword ptr [eax + 0x24] }
	__asm { mov dword ptr [esi + 0x2b4], eax }
	__asm { test eax, eax }
	__asm { je L_00ccedff }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { push 0xf0096c }
	__asm { push 1 }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00773930 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { mov ecx, dword ptr [esi + 0x2b4] }
	__asm { lea eax, [esi + 0x210] }
	__asm { push eax }
	__asm { call fn_00a8b200 }
	__asm { L_00ccedff: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00ccf830
extern "C" __declspec(naked) void asm_00ccf830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00ccf888 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, dword ptr [esi + 0x10] }
	__asm { jl L_00ccf87d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ccf86c }
	__asm { push 0x3b }
	__asm { push 0xf00ffc }
	__asm { push 0xf01038 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ccf87d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ccf86c: }
	__asm { movzx eax, al }
	__asm { push 0xf01050 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ccf87d: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ccf888: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [ecx + eax*4] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cd04a0();
// FUNCTION: ROBLOXSTUDIO 0x00cd0430
extern "C" __declspec(naked) void asm_00cd0430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { test ecx, ecx }
	__asm { jle L_00cd0479 }
	__asm { test edx, edx }
	__asm { jne L_00cd0450 }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { L_00cd0450: }
	__asm { mov eax, edx }
	__asm { sub eax, dword ptr [esi] }
	__asm { sar eax, 5 }
	__asm { cmp ecx, eax }
	__asm { jle L_00cd0465 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { sub eax, dword ptr [esi] }
	__asm { sar eax, 5 }
	__asm { sub ecx, eax }
	__asm { L_00cd0465: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { shl ecx, 5 }
	__asm { sub edx, ecx }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cd0479: }
	__asm { jns L_00cd048c }
	__asm { neg ecx }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_00cd04a0 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { L_00cd048c: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cd0500();
// FUNCTION: ROBLOXSTUDIO 0x00cd04a0
extern "C" __declspec(naked) void asm_00cd04a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test edx, edx }
	__asm { jle L_00cd04e7 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov eax, ecx }
	__asm { sub eax, ebx }
	__asm { sar eax, 5 }
	__asm { cmp edx, eax }
	__asm { jl L_00cd04c9 }
	__asm { sub ecx, dword ptr [edi] }
	__asm { sar ecx, 5 }
	__asm { sub edx, ecx }
	__asm { L_00cd04c9: }
	__asm { shl edx, 5 }
	__asm { lea eax, [edx + ebx] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { cmp eax, dword ptr [edi + 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov eax, esi }
	__asm { jne L_00cd04f3 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cd04e7: }
	__asm { jns L_00cd04f1 }
	__asm { neg edx }
	__asm { push edx }
	__asm { call fn_00cd0500 }
	__asm { L_00cd04f1: }
	__asm { mov eax, esi }
	__asm { L_00cd04f3: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cd04a0();
// FUNCTION: ROBLOXSTUDIO 0x00cd0500
extern "C" __declspec(naked) void asm_00cd0500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test edx, edx }
	__asm { jle L_00cd0541 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { jne L_00cd0519 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { L_00cd0519: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov eax, ecx }
	__asm { sub eax, dword ptr [edi] }
	__asm { sar eax, 5 }
	__asm { cmp edx, eax }
	__asm { jle L_00cd0531 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, dword ptr [edi] }
	__asm { sar eax, 5 }
	__asm { sub edx, eax }
	__asm { L_00cd0531: }
	__asm { shl edx, 5 }
	__asm { sub ecx, edx }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cd0541: }
	__asm { jns L_00cd054b }
	__asm { neg edx }
	__asm { push edx }
	__asm { call fn_00cd04a0 }
	__asm { L_00cd054b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10528[];
extern "C" void fn_0067b220();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00cd07b0
extern "C" __declspec(naked) void asm_00cd07b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0e688 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { cmp eax, 0x7ffffff }
	__asm { jbe L_00cd0800 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 8], 0xe3b868 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe3b758 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0067b220 }
	__asm { L_00cd0800: }
	__asm { test eax, eax }
	__asm { jne L_00cd0814 }
	__asm { L_00cd0804: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cd0814: }
	__asm { cmp eax, 0x7ffffff }
	__asm { ja L_00cd082b }
	__asm { shl eax, 5 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00cd0804 }
	__asm { L_00cd082b: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cd2a80
extern "C" __declspec(naked) void asm_00cd2a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { xor ecx, ecx }
	__asm { cmp dword ptr [esi + 0x10], ecx }
	__asm { jbe L_00cd2aa6 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { L_00cd2a90: }
	__asm { add eax, 0x20 }
	__asm { inc ecx }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { jne L_00cd2aa1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_00cd2aa1: }
	__asm { cmp ecx, dword ptr [esi + 0x10] }
	__asm { jb L_00cd2a90 }
	__asm { L_00cd2aa6: }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00cd2ab5 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cd2ab5: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, ecx }
	__asm { sar eax, 5 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { shl eax, 5 }
	__asm { add eax, ecx }
	__asm { cmp edx, eax }
	__asm { cmove edx, ecx }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi + 0xc], edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cd31b0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00cd2f80
extern "C" __declspec(naked) void asm_00cd2f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6ce80 }
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
	__asm { je L_00cd2fd8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xf01ee8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00cd2fda }
	__asm { L_00cd2fd8: }
	__asm { xor eax, eax }
	__asm { L_00cd2fda: }
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
	__asm { call fn_00cd31b0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00cd3010
extern "C" __declspec(naked) void asm_00cd3010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6ce90 }
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
	__asm { je L_00cd3068 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xf01f00 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00cd306a }
	__asm { L_00cd3068: }
	__asm { xor eax, eax }
	__asm { L_00cd306a: }
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
	__asm { je L_00cd308e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00cd308e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cd4900();
extern "C" void fn_00cd9f00();
// FUNCTION: ROBLOXSTUDIO 0x00cd41f0
extern "C" __declspec(naked) void asm_00cd41f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test ecx, ecx }
	__asm { je L_00cd41fc }
	__asm { lea eax, [ecx - 0xc] }
	__asm { jmp L_00cd41fe }
	__asm { L_00cd41fc: }
	__asm { xor eax, eax }
	__asm { L_00cd41fe: }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00cd420a }
	__asm { lea eax, [ecx - 0xc] }
	__asm { jmp L_00cd420c }
	__asm { L_00cd420a: }
	__asm { xor eax, eax }
	__asm { L_00cd420c: }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00cd421a }
	__asm { lea eax, [ecx - 0xc] }
	__asm { jmp L_00cd421c }
	__asm { L_00cd421a: }
	__asm { xor eax, eax }
	__asm { L_00cd421c: }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add eax, 0x20 }
	__asm { test esi, esi }
	__asm { je L_00cd422e }
	__asm { lea ecx, [esi + 0x20] }
	__asm { jmp L_00cd4230 }
	__asm { L_00cd422e: }
	__asm { xor ecx, ecx }
	__asm { L_00cd4230: }
	__asm { add edx, 0x28 }
	__asm { push edx }
	__asm { lea edx, [edi + 0x24] }
	__asm { push edx }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00cd4900 }
	__asm { add esp, 0x10 }
	__asm { mov ecx, esi }
	__asm { call fn_00cd9f00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00cd6290
extern "C" __declspec(naked) void asm_00cd6290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6d1a0 }
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
	__asm { je L_00cd62e8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xf026ac }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00cd62ea }
	__asm { L_00cd62e8: }
	__asm { xor eax, eax }
	__asm { L_00cd62ea: }
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
	__asm { je L_00cd630e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00cd630e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00cd6320
extern "C" __declspec(naked) void asm_00cd6320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6d1b0 }
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
	__asm { je L_00cd6378 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xf026c4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00cd637a }
	__asm { L_00cd6378: }
	__asm { xor eax, eax }
	__asm { L_00cd637a: }
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
	__asm { je L_00cd639e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00cd639e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00c99d30();
// FUNCTION: ROBLOXSTUDIO 0x00cd9660
extern "C" __declspec(naked) void asm_00cd9660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00cd96b1 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00cd9680 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00cd9682 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00cd9682 }
	__asm { L_00cd9680: }
	__asm { mov eax, ecx }
	__asm { L_00cd9682: }
	__asm { test eax, eax }
	__asm { je L_00cd96b1 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00cd96b1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00cd96b1 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00cd96b1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00c99d30 }
	__asm { L_00cd96b1: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cdb4d0
extern "C" __declspec(naked) void asm_00cdb4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp esi, ecx }
	__asm { jne L_00cdb4fb }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { jmp L_00cdb522 }
	__asm { L_00cdb4fb: }
	__asm { cmp byte ptr [eax], 0 }
	__asm { mov eax, dword ptr [edx] }
	__asm { je L_00cdb513 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp esi, dword ptr [ecx + 4] }
	__asm { jne L_00cdb522 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { jmp L_00cdb522 }
	__asm { L_00cdb513: }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp esi, dword ptr [ecx + 8] }
	__asm { jne L_00cdb522 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { L_00cdb522: }
	__asm { mov eax, dword ptr [edx] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [edx] }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cdb720
extern "C" __declspec(naked) void asm_00cdb720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { je L_00cdb773 }
	__asm { test ecx, ecx }
	__asm { je L_00cdb75f }
	__asm { test edx, edx }
	__asm { je L_00cdb747 }
	__asm { cmp ecx, edx }
	__asm { je L_00cdb773 }
	__asm { cmp dword ptr [ecx], eax }
	__asm { jne L_00cdb773 }
	__asm { cmp dword ptr [edx], eax }
	__asm { jne L_00cdb773 }
	__asm { L_00cdb747: }
	__asm { test ecx, ecx }
	__asm { je L_00cdb75f }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { test eax, eax }
	__asm { je L_00cdb75b }
	__asm { L_00cdb752: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { jne L_00cdb752 }
	__asm { L_00cdb75b: }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cdb75f: }
	__asm { mov ecx, dword ptr [eax] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jne L_00cdb75b }
	__asm { L_00cdb766: }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { je L_00cdb766 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cdb773: }
	__asm { mov eax, edx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b53d0();
// FUNCTION: ROBLOXSTUDIO 0x00cdbad0
extern "C" __declspec(naked) void asm_00cdbad0()
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
	__asm { je L_00cdbb31 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_00cdbaf0: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_00cdbafb }
	__asm { add esi, -0x70 }
	__asm { jmp L_00cdbafd }
	__asm { L_00cdbafb: }
	__asm { xor esi, esi }
	__asm { L_00cdbafd: }
	__asm { mov eax, dword ptr [esi + 0x74] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_00cdbb18 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x70] }
	__asm { jmp L_00cdbb2a }
	__asm { L_00cdbb18: }
	__asm { mov eax, dword ptr [esi + 0x70] }
	__asm { lea edx, [esi + 0x70] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_00cdbb2a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00cdbaf0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00cdbb31: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009b53d0();
extern "C" void fn_00c876a0();
extern "C" void fn_00cdbad0();
// FUNCTION: ROBLOXSTUDIO 0x00cdbc90
extern "C" __declspec(naked) void asm_00cdbc90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_00cdbcc4 }
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
	__asm { L_00cdbcc4: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_00cdbcfa }
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
	__asm { je L_00cdbcfa }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00cdbad0 }
	__asm { L_00cdbcfa: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cdbd10
extern "C" __declspec(naked) void asm_00cdbd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { cmp dword ptr [edx + 4], eax }
	__asm { mov edi, dword ptr [ecx + 4] }
	__asm { sete bl }
	__asm { mov dword ptr [eax + 8], edi }
	__asm { test edi, edi }
	__asm { je L_00cdbd34 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { L_00cdbd34: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { jne L_00cdbd51 }
	__asm { mov dword ptr [edi], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cdbd51: }
	__asm { test bl, bl }
	__asm { je L_00cdbd5d }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cdbd5d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cdbd70
extern "C" __declspec(naked) void asm_00cdbd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp dword ptr [edx + 4], eax }
	__asm { mov edi, dword ptr [ecx + 8] }
	__asm { sete bl }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { test edi, edi }
	__asm { je L_00cdbd94 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { L_00cdbd94: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { jne L_00cdbdb1 }
	__asm { mov dword ptr [edi], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cdbdb1: }
	__asm { test bl, bl }
	__asm { je L_00cdbdbd }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cdbdbd: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
// FUNCTION: ROBLOXSTUDIO 0x00cdd950
extern "C" __declspec(naked) void asm_00cdd950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, edx }
	__asm { je L_00cdd983 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 4] }
	__asm { mov eax, 0x15555554 }
	__asm { sub eax, edi }
	__asm { cmp eax, esi }
	__asm { jae L_00cdd978 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00cdd978: }
	__asm { lea eax, [edi + esi] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { sub dword ptr [edx + 4], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00cdd983: }
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

extern "C" char g_00e10260[];
// FUNCTION: ROBLOXSTUDIO 0x00cdd9d0
extern "C" __declspec(naked) void asm_00cdd9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, edx }
	__asm { je L_00cdda03 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 4] }
	__asm { mov eax, 0x6666665 }
	__asm { sub eax, edi }
	__asm { cmp eax, esi }
	__asm { jae L_00cdd9f8 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00cdd9f8: }
	__asm { lea eax, [edi + esi] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { sub dword ptr [edx + 4], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00cdda03: }
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

extern "C" void fn_00876070();
extern "C" void fn_009b53d0();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x00cde850
extern "C" __declspec(naked) void asm_00cde850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_00cde884 }
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
	__asm { L_00cde884: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_00cde8ba }
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
	__asm { je L_00cde8ba }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00876070 }
	__asm { L_00cde8ba: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c0fbf0();
extern "C" void fn_00cd7450();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cdfd40
extern "C" __declspec(naked) void asm_00cdfd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6d908 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c0fbf0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00cd7450 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00cdfd8e }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cdfd8e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10344[];
extern "C" char g_00e10348[];
// FUNCTION: ROBLOXSTUDIO 0x00ce10d0
extern "C" __declspec(naked) void asm_00ce10d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ce111d }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { jne L_00ce1119 }
	__asm { push 3 }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10348] }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10344] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { inc ecx }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce1119: }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [esi], ecx }
	__asm { L_00ce111d: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { inc ecx }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009b53d0();
// FUNCTION: ROBLOXSTUDIO 0x00ce19c0
extern "C" __declspec(naked) void asm_00ce19c0()
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
	__asm { je L_00ce1a21 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_00ce19e0: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_00ce19eb }
	__asm { add esi, -0x60 }
	__asm { jmp L_00ce19ed }
	__asm { L_00ce19eb: }
	__asm { xor esi, esi }
	__asm { L_00ce19ed: }
	__asm { mov eax, dword ptr [esi + 0x64] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_00ce1a08 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x60] }
	__asm { jmp L_00ce1a1a }
	__asm { L_00ce1a08: }
	__asm { mov eax, dword ptr [esi + 0x60] }
	__asm { lea edx, [esi + 0x60] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_00ce1a1a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00ce19e0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00ce1a21: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009b53d0();
extern "C" void fn_00c876a0();
extern "C" void fn_00ce19c0();
// FUNCTION: ROBLOXSTUDIO 0x00ce1a30
extern "C" __declspec(naked) void asm_00ce1a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_00ce1a64 }
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
	__asm { L_00ce1a64: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_00ce1a9a }
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
	__asm { je L_00ce1a9a }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00ce19c0 }
	__asm { L_00ce1a9a: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004033d0();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_00865d20();
extern "C" void fn_00a8b200();
// FUNCTION: ROBLOXSTUDIO 0x00ce5940
extern "C" __declspec(naked) void asm_00ce5940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 0x208] }
	__asm { call fn_00865d20 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00ce59cf }
	__asm { mov eax, dword ptr [eax + 0x148] }
	__asm { test eax, eax }
	__asm { je L_00ce59cf }
	__asm { mov eax, dword ptr [eax + 0xb4] }
	__asm { mov eax, dword ptr [eax + 0x24] }
	__asm { mov dword ptr [esi + 0x214], eax }
	__asm { test eax, eax }
	__asm { je L_00ce59cf }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { push 0xf04000 }
	__asm { push 1 }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00773930 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { mov ecx, dword ptr [esi + 0x214] }
	__asm { lea eax, [esi + 0x210] }
	__asm { push eax }
	__asm { call fn_00a8b200 }
	__asm { L_00ce59cf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf4e70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ce5eb0
extern "C" __declspec(naked) void asm_00ce5eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00ce5f01 }
	__asm { mov eax, dword ptr [esi + 0x148] }
	__asm { test eax, eax }
	__asm { je L_00ce5ef8 }
	__asm { dec dword ptr [eax] }
	__asm { jne L_00ce5ef8 }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x144] }
	__asm { test edi, edi }
	__asm { je L_00ce5ee4 }
	__asm { mov ecx, edi }
	__asm { call fn_00cf4e70 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ce5ee4: }
	__asm { mov eax, dword ptr [esi + 0x148] }
	__asm { pop edi }
	__asm { test eax, eax }
	__asm { je L_00ce5ef8 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ce5ef8: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ce5f01: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c68890();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ce5f10
extern "C" __declspec(naked) void asm_00ce5f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x150 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ce5f73 }
	__asm { mov ecx, esi }
	__asm { call fn_00c68890 }
	__asm { mov dword ptr [esi + 0x144], 0 }
	__asm { mov dword ptr [esi + 0x148], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ce5f73: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00427a20();
extern "C" void fn_00ce8180();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00ce6a10
extern "C" __declspec(naked) void asm_00ce6a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6df9e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00427a20 }
	__asm { cmp dword ptr [esi + 0x38], 0 }
	__asm { jbe L_00ce6a4f }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ce6a4f: }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00427a20 }
	__asm { push 0x53 }
	__asm { push 0xeff408 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00ce8180 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cbb5c0();
extern "C" void fn_00cf4e70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ce6d70
extern "C" __declspec(naked) void asm_00ce6d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6df6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x11f8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ce6dd3 }
	__asm { dec dword ptr [eax] }
	__asm { jne L_00ce6dd3 }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x11f4] }
	__asm { test edi, edi }
	__asm { je L_00ce6dbf }
	__asm { mov ecx, edi }
	__asm { call fn_00cf4e70 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ce6dbf: }
	__asm { mov eax, dword ptr [esi + 0x11f8] }
	__asm { pop edi }
	__asm { test eax, eax }
	__asm { je L_00ce6dd3 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ce6dd3: }
	__asm { lea ecx, [esi + 0xf8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00cbb5c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00ce7540();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
// FUNCTION: ROBLOXSTUDIO 0x00ce7880
extern "C" __declspec(naked) void asm_00ce7880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e1d1 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00cf40a0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ce7540 }
	__asm { mov ebx, eax }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov dword ptr [ebp + 0xc], ebx }
	__asm { call fn_00cf40b0 }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00ce78f2 }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { call fn_00c687d0 }
	__asm { lea ecx, [ebx + 0x20] }
	__asm { call fn_00c68890 }
	__asm { mov eax, ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce78f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00ce8350();
extern "C" void fn_00ceecf0();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
// FUNCTION: ROBLOXSTUDIO 0x00ce8680
extern "C" __declspec(naked) void asm_00ce8680()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea esi, [ecx + 0x364] }
	__asm { L_00ce8689: }
	__asm { lea edi, [esi + 0x3c] }
	__asm { mov ecx, edi }
	__asm { call fn_00cf40a0 }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { cmp ecx, dword ptr [esi + 0x34] }
	__asm { je L_00ce86ea }
	__asm { inc ecx }
	__asm { mov dword ptr [esi + 0x30], ecx }
	__asm { cmp ecx, dword ptr [esi + 0x38] }
	__asm { jne L_00ce86ad }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { jmp L_00ce86b1 }
	__asm { L_00ce86ad: }
	__asm { test ecx, ecx }
	__asm { jne L_00ce86b4 }
	__asm { L_00ce86b1: }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { L_00ce86b4: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov ebx, dword ptr [eax + ecx*4 - 4] }
	__asm { mov ecx, edi }
	__asm { call fn_00cf40b0 }
	__asm { test ebx, ebx }
	__asm { je L_00ce86f1 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00cf40a0 }
	__asm { push 0xfeb }
	__asm { push 0xf045f0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00ceecf0 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00cf40b0 }
	__asm { jmp L_00ce8689 }
	__asm { L_00ce86ea: }
	__asm { mov ecx, edi }
	__asm { call fn_00cf40b0 }
	__asm { L_00ce86f1: }
	__asm { push 0xfed }
	__asm { push 0xf045f0 }
	__asm { mov ecx, esi }
	__asm { call fn_00ce8350 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00ce9f00();
extern "C" void fn_00cf1610();
// FUNCTION: ROBLOXSTUDIO 0x00ce8c90
extern "C" __declspec(naked) void asm_00ce8c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00ce8cee }
	__asm { cmp byte ptr [esi + 4], 0 }
	__asm { jne L_00ce8cee }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { cmp eax, dword ptr [esi + 0x430] }
	__asm { jae L_00ce8cee }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00ce9f00 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov ecx, 0xff }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { cmp edx, ecx }
	__asm { cmovg edx, ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { xor ebx, ebx }
	__asm { push ebx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { test ecx, ecx }
	__asm { cmove edx, ebx }
	__asm { push edx }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf1610 }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x24 }
	__asm { L_00ce8cee: }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012afa4c[];
extern "C" void fn_00ceec00();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
// FUNCTION: ROBLOXSTUDIO 0x00ce8de0
extern "C" __declspec(naked) void asm_00ce8de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { test edi, edi }
	__asm { je L_00ce8e52 }
	__asm { cmp byte ptr [edi + 0x34], 0 }
	__asm { je L_00ce8e3e }
	__asm { push esi }
	__asm { push 0x591 }
	__asm { push 0xf045f0 }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebx + 0x574] }
	__asm { call fn_00cf40a0 }
	__asm { push 0x594 }
	__asm { push 0xf045f0 }
	__asm { push edi }
	__asm { lea ecx, [ebx + 0x58c] }
	__asm { call fn_00ceec00 }
	__asm { lea ecx, [ebx + 0x574] }
	__asm { call fn_00cf40b0 }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ce8e3e: }
	__asm { push 0x599 }
	__asm { push 0xf045f0 }
	__asm { push edi }
	__asm { call dword ptr [g_012afa4c] }
	__asm { add esp, 0xc }
	__asm { L_00ce8e52: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00ccfe60();
extern "C" void fn_00cf4080();
// FUNCTION: ROBLOXSTUDIO 0x00ce9070
extern "C" __declspec(naked) void asm_00ce9070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00ccfe60 }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { xor edi, edi }
	__asm { L_00ce9088: }
	__asm { call fn_00ccfe60 }
	__asm { push 1 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { call fn_00cf4080 }
	__asm { push 0 }
	__asm { call fn_00cf4080 }
	__asm { add esp, 8 }
	__asm { call fn_00ccfe60 }
	__asm { sub eax, esi }
	__asm { shl eax, 0x1c }
	__asm { and eax, 0xf0000000 }
	__asm { mov ecx, edi }
	__asm { shr eax, cl }
	__asm { add edi, 4 }
	__asm { lea ebx, [ebx + 1] }
	__asm { xor byte ptr [ebp + ebx - 9], al }
	__asm { cmp edi, 0x20 }
	__asm { jl L_00ce9088 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b1ef8[];
extern "C" char g_012b1efc[];
extern "C" char g_012b1f00[];
extern "C" char g_012b1f04[];
// FUNCTION: ROBLOXSTUDIO 0x00ce9630
extern "C" __declspec(naked) void asm_00ce9630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { js L_00ce9686 }
	__asm { movzx eax, word ptr [ecx + 0xe] }
	__asm { cmp edx, eax }
	__asm { jge L_00ce9686 }
	__asm { imul edx, edx, 0x1208 }
	__asm { add edx, dword ptr [ecx + 0x22c] }
	__asm { cmp byte ptr [edx], 0 }
	__asm { je L_00ce9686 }
	__asm { cmp dword ptr [edx + 0x1200], 7 }
	__asm { jne L_00ce9686 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx + 0x11e0] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 0x11e4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 0x11e8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx + 0x11ec] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce9686: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_012b1ef8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [g_012b1efc] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [g_012b1f00] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [g_012b1f04] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}
