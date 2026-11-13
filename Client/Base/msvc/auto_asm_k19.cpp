// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_004033d0();
extern "C" void fn_0041f760();
extern "C" void fn_00421440();
extern "C" void fn_00421600();
extern "C" void fn_0082a7c0();
extern "C" void fn_00a8d4d0();
// FUNCTION: ROBLOXSTUDIO 0x0082eb20
extern "C" __declspec(naked) void asm_0082eb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1f180 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { test ecx, ecx }
	__asm { je L_0082ebd1 }
	__asm { call fn_0041f760 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_0082ebd1 }
	__asm { mov ecx, esi }
	__asm { call fn_00421600 }
	__asm { cmp eax, 2 }
	__asm { jne L_0082ebd1 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00421440 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0082a7c0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00a8d4d0 }
	__asm { add esp, 8 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { test al, al }
	__asm { je L_0082ebbd }
	__asm { call fn_004033d0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0082ebbd: }
	__asm { call fn_004033d0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { L_0082ebd1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_0048b090();
extern "C" void fn_007b3490();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0082ebf0
extern "C" __declspec(naked) void asm_0082ebf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xbc8] }
	__asm { push edi }
	__asm { push 0xc }
	__asm { push 0x101887c }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b3490 }
	__asm { test eax, eax }
	__asm { je L_0082ec6e }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0082ec6e }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0082ec6e }
	__asm { add edi, -0x1c }
	__asm { jmp L_0082ec70 }
	__asm { L_0082ec6e: }
	__asm { xor edi, edi }
	__asm { L_0082ec70: }
	__asm { test edi, edi }
	__asm { setne bl }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_0082ec86 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0082ec86: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_0048b090();
extern "C" void fn_007b3490();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0082ee00
extern "C" __declspec(naked) void asm_0082ee00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xbc8] }
	__asm { push edi }
	__asm { push 9 }
	__asm { push 0xe5c844 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b3490 }
	__asm { test eax, eax }
	__asm { je L_0082ee7e }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0082ee7e }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0082ee7e }
	__asm { add edi, -0x1c }
	__asm { jmp L_0082ee80 }
	__asm { L_0082ee7e: }
	__asm { xor edi, edi }
	__asm { L_0082ee80: }
	__asm { test edi, edi }
	__asm { setne bl }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_0082ee96 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0082ee96: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_0048b090();
extern "C" void fn_007b3490();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0082efd0
extern "C" __declspec(naked) void asm_0082efd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xbc8] }
	__asm { push edi }
	__asm { push 0xc }
	__asm { push 0x10188a8 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b3490 }
	__asm { test eax, eax }
	__asm { je L_0082f04e }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0082f04e }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0082f04e }
	__asm { add edi, -0x1c }
	__asm { jmp L_0082f050 }
	__asm { L_0082f04e: }
	__asm { xor edi, edi }
	__asm { L_0082f050: }
	__asm { test edi, edi }
	__asm { setne bl }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_0082f066 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0082f066: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131ae5c[];
extern "C" void fn_0043ec00();
extern "C" void fn_0048d4a0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0083f610();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0082f6d0
extern "C" __declspec(naked) void asm_0082f6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd258c6 }
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
	__asm { call fn_0083f610 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131ae5c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0082f78c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ae5c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5d03c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, 0x131ad30 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc6a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0082f78c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131ad30 }
	__asm { call fn_0048d4a0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe5e410 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0082f80a }
	__asm { push 0x12d2058 }
	__asm { mov ecx, 0x12d2058 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0082f80a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0082f7f5 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0082f80a }
	__asm { L_0082f7f5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0082f80a: }
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
extern "C" char g_0131ae5c[];
extern "C" void fn_0040bac0();
extern "C" void fn_0043ec00();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0083f750();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0082fe50
extern "C" __declspec(naked) void asm_0082fe50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd258c6 }
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
	__asm { call fn_0083f750 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131ae5c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0082ff0c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ae5c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5d03c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, 0x131ad30 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc6a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0082ff0c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131ad30 }
	__asm { call fn_0040bac0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe5e228 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0082ff8a }
	__asm { push 0x12d2058 }
	__asm { mov ecx, 0x12d2058 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0082ff8a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0082ff75 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0082ff8a }
	__asm { L_0082ff75: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0082ff8a: }
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
extern "C" char g_0131ae5c[];
extern "C" void fn_0040ba00();
extern "C" void fn_0043ec00();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0083f840();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00830320
extern "C" __declspec(naked) void asm_00830320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd258c6 }
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
	__asm { call fn_0083f840 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131ae5c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_008303dc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ae5c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5d03c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, 0x131ad30 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc6a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_008303dc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131ad30 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe5df08 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0083045a }
	__asm { push 0x12d2058 }
	__asm { mov ecx, 0x12d2058 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0083045a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00830445 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0083045a }
	__asm { L_00830445: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0083045a: }
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
extern "C" char g_0131ae5c[];
extern "C" void fn_0040ba00();
extern "C" void fn_0043ec00();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0083f890();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00830470
extern "C" __declspec(naked) void asm_00830470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25a66 }
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
	__asm { call fn_0083f890 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131ae5c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0083052f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ae5c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5d03c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, 0x131ad30 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc6a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0083052f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131ad30 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe5df08 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008305ad }
	__asm { push 0x12d2058 }
	__asm { mov ecx, 0x12d2058 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008305ad }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00830598 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008305ad }
	__asm { L_00830598: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008305ad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

// FUNCTION: ROBLOXSTUDIO 0x008306d0
extern "C" __declspec(naked) void asm_008306d0()
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
	__asm { mov dword ptr [esi + 8], 0xe516f0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe613e8 }
	__asm { mov dword ptr [esi + 8], 0xe613f8 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0083077a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00830766 }
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
	__asm { L_00830766: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0083077a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x00831630
extern "C" __declspec(naked) void asm_00831630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd211e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe51be0 }
	__asm { mov dword ptr [esi + 0x10], 0x11fa820 }
	__asm { call fn_007cb250 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008316d3 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_008316d3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008316be }
	__asm { push 0x52 }
	__asm { push 0xe51be8 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008316d3 }
	__asm { L_008316be: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe549d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008316d3: }
	__asm { mov ecx, esi }
	__asm { call fn_00825770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00831820();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00831780
extern "C" __declspec(naked) void asm_00831780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25c48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { sub esp, 0x10 }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { cmp eax, 8 }
	__asm { ja L_008317c3 }
	__asm { mov eax, esi }
	__asm { lea ecx, [ebp + 8] }
	__asm { jmp L_008317d1 }
	__asm { L_008317c3: }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { L_008317d1: }
	__asm { push dword ptr [esi + 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { add esp, 0xc }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { call fn_00831820 }
	__asm { cmp dword ptr [ebp + 0x10], 8 }
	__asm { jbe L_00831801 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00831801 }
	__asm { push eax }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00831801: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_008338c0();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00831820
extern "C" __declspec(naked) void asm_00831820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25c48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 0x10 }
	__asm { mov edi, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { cmp eax, 8 }
	__asm { ja L_00831867 }
	__asm { mov eax, edi }
	__asm { lea ecx, [ebp + 8] }
	__asm { jmp L_00831875 }
	__asm { L_00831867: }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { L_00831875: }
	__asm { push dword ptr [edi + 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { add esp, 0xc }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { call fn_008338c0 }
	__asm { cmp dword ptr [ebp + 0x10], 8 }
	__asm { jbe L_008318a5 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_008318a5 }
	__asm { push eax }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_008318a5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00833a10();
extern "C" void fn_00844770();
// FUNCTION: ROBLOXSTUDIO 0x008319f0
extern "C" __declspec(naked) void asm_008319f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25d20 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00844770 }
	__asm { sub esp, 0x28 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_00844770 }
	__asm { mov ecx, esi }
	__asm { call fn_00833a10 }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00831a6b }
	__asm { test al, 1 }
	__asm { jne L_00831a64 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00831a64 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00831a64: }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { L_00831a6b: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00831a92 }
	__asm { test al, 1 }
	__asm { jne L_00831a92 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00831a92 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00831a92: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00833f10();
extern "C" void fn_00869390();
// FUNCTION: ROBLOXSTUDIO 0x00831b30
extern "C" __declspec(naked) void asm_00831b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25d88 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x38 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00869390 }
	__asm { mov al, byte ptr [ebp + 0x38] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esi + 0x28], al }
	__asm { call fn_00833f10 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00831ba6 }
	__asm { test al, 1 }
	__asm { jne L_00831ba6 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00831ba6 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00831ba6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x3c }
}

extern "C" void fn_008341c0();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00831da0
extern "C" __declspec(naked) void asm_00831da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b25b30 }
	__asm { sub esp, 0x28 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_00b25b30 }
	__asm { mov ecx, esi }
	__asm { call fn_008341c0 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00831e1b }
	__asm { test al, 1 }
	__asm { jne L_00831e14 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00831e14 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00831e14: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_00831e1b: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00831e42 }
	__asm { test al, 1 }
	__asm { jne L_00831e42 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00831e42 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00831e42: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00834290();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00831e60
extern "C" __declspec(naked) void asm_00831e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b25b30 }
	__asm { sub esp, 0x28 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_00b25b30 }
	__asm { mov ecx, esi }
	__asm { call fn_00834290 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00831edb }
	__asm { test al, 1 }
	__asm { jne L_00831ed4 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00831ed4 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00831ed4: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_00831edb: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00831f02 }
	__asm { test al, 1 }
	__asm { jne L_00831f02 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00831f02 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00831f02: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" char g_0131ae5c[];
extern "C" void fn_0043ec00();
extern "C" void fn_007cbf10();
extern "C" void fn_007d5d30();
extern "C" void fn_00b489e0();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008325c0
extern "C" __declspec(naked) void asm_008325c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25c8e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0131ae5c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0083263a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ae5c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5d03c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, 0x131ad30 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc6a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0083263a: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x131ad30 }
	__asm { call fn_00b489e0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe5df90 }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi], 0xe5dfa0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008326a5 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe61398 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { jmp L_008326a7 }
	__asm { L_008326a5: }
	__asm { xor eax, eax }
	__asm { L_008326a7: }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { test ecx, ecx }
	__asm { je L_008326b7 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_008326b7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

// FUNCTION: ROBLOXSTUDIO 0x00832890
extern "C" __declspec(naked) void asm_00832890()
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
	__asm { mov edx, dword ptr [esi + 0x20] }
	__asm { test edx, edx }
	__asm { je L_00832904 }
	__asm { mov dword ptr [ecx], edx }
	__asm { test dl, 1 }
	__asm { je L_008328f0 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { jmp L_00832904 }
	__asm { L_008328f0: }
	__asm { lea eax, [ecx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 0x28] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00832904: }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { test edx, edx }
	__asm { je L_0083295d }
	__asm { mov dword ptr [ecx], edx }
	__asm { test dl, 1 }
	__asm { je L_00832949 }
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
	__asm { jmp L_0083295d }
	__asm { L_00832949: }
	__asm { lea eax, [ecx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0083295d: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [ecx] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x48 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00832990
extern "C" __declspec(naked) void asm_00832990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd315a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { test edx, edx }
	__asm { je L_00832a2d }
	__asm { mov dword ptr [ecx], edx }
	__asm { test dl, 1 }
	__asm { je L_00832a19 }
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
	__asm { jmp L_00832a2d }
	__asm { L_00832a19: }
	__asm { lea eax, [ecx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00832a2d: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x38 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x00832a50
extern "C" __declspec(naked) void asm_00832a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov esi, ecx }
	__asm { movzx eax, byte ptr [eax] }
	__asm { push eax }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_00832abe }
	__asm { mov dword ptr [edx], ecx }
	__asm { test cl, 1 }
	__asm { je L_00832aaa }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 0x24 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00832aaa: }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00832abe: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 0x24 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10500[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00832bf0
extern "C" __declspec(naked) void asm_00832bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ecx + 0x30] }
	__asm { push eax }
	__asm { lea eax, [ecx + 0x18] }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { add esp, 0x10 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_00832c46 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_00832c50 }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00832c50 }
	__asm { L_00832c46: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00832c50: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp dword ptr [ebp - 8], 0x10 }
	__asm { jb L_00832c7e }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00832c7e: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10500[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00832c90
extern "C" __declspec(naked) void asm_00832c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push edi }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { add esp, 8 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_00832cde }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_00832ce8 }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00832ce8 }
	__asm { L_00832cde: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00832ce8: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp dword ptr [ebp - 8], 0x10 }
	__asm { jb L_00832d16 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00832d16: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_008455f0();
extern "C" void fn_00847e90();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008332d0
extern "C" __declspec(naked) void asm_008332d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25ce1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00833304: }
	__asm { test edi, edi }
	__asm { je L_00833349 }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0083331b }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_008455f0 }
	__asm { L_0083331b: }
	__asm { dec edi }
	__asm { add esi, 0x70 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { jmp L_00833304 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp esi, edi }
	__asm { je L_00833340 }
	__asm { L_00833332: }
	__asm { mov ecx, esi }
	__asm { call fn_00847e90 }
	__asm { add esi, 0x70 }
	__asm { cmp esi, edi }
	__asm { jne L_00833332 }
	__asm { L_00833340: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00833349: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008455f0();
extern "C" void fn_00847e90();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00833360
extern "C" __declspec(naked) void asm_00833360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25d01 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00833394: }
	__asm { cmp edi, ebx }
	__asm { je L_008333db }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_008333ab }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_008455f0 }
	__asm { L_008333ab: }
	__asm { add esi, 0x70 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { add edi, 0x70 }
	__asm { jmp L_00833394 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_008333d2 }
	__asm { L_008333c4: }
	__asm { mov ecx, esi }
	__asm { call fn_00847e90 }
	__asm { add esi, 0x70 }
	__asm { cmp esi, edi }
	__asm { jne L_008333c4 }
	__asm { L_008333d2: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_008333db: }
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

extern "C" void fn_00574850();
// FUNCTION: ROBLOXSTUDIO 0x00833510
extern "C" __declspec(naked) void asm_00833510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov edx, dword ptr [ecx + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { cmp edx, 0x10 }
	__asm { jb L_00833525 }
	__asm { mov esi, dword ptr [ecx] }
	__asm { jmp L_00833527 }
	__asm { L_00833525: }
	__asm { mov esi, ecx }
	__asm { L_00833527: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { add eax, esi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp edx, 0x10 }
	__asm { jb L_00833536 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_00833536: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [edx + 0x14] }
	__asm { add ebx, ecx }
	__asm { cmp esi, 0x10 }
	__asm { jb L_0083354a }
	__asm { mov eax, dword ptr [edx] }
	__asm { jmp L_0083354c }
	__asm { L_0083354a: }
	__asm { mov eax, edx }
	__asm { L_0083354c: }
	__asm { mov edi, dword ptr [edx + 0x10] }
	__asm { lea ecx, [edi + eax] }
	__asm { cmp esi, 0x10 }
	__asm { jb L_0083356d }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edx] }
	__asm { push ebx }
	__asm { push ecx }
	__asm { add eax, edi }
	__asm { push eax }
	__asm { mov ecx, edx }
	__asm { call fn_00574850 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083356d: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, edx }
	__asm { push ebx }
	__asm { push ecx }
	__asm { add eax, edi }
	__asm { push eax }
	__asm { mov ecx, edx }
	__asm { call fn_00574850 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00869390();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008336b0
extern "C" __declspec(naked) void asm_008336b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29913 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 0x38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00833703 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], ecx }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00869390 }
	__asm { mov al, byte ptr [ebp + 0x38] }
	__asm { mov byte ptr [edi + 0x30], al }
	__asm { pop esi }
	__asm { jmp L_00833705 }
	__asm { L_00833703: }
	__asm { xor edi, edi }
	__asm { L_00833705: }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [eax], edi }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { test eax, eax }
	__asm { je L_00833732 }
	__asm { test al, 1 }
	__asm { jne L_00833732 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00833732 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00833732: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00798cf0();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00833750
extern "C" __declspec(naked) void asm_00833750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25c48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_008337d7 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { sub esp, 0x10 }
	__asm { mov esi, esp }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { cmp eax, 8 }
	__asm { ja L_008337ab }
	__asm { mov eax, esi }
	__asm { lea ecx, [ebp + 8] }
	__asm { jmp L_008337b9 }
	__asm { L_008337ab: }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { L_008337b9: }
	__asm { push dword ptr [esi + 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { add esp, 0xc }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { call fn_00798cf0 }
	__asm { mov bl, 1 }
	__asm { jmp L_008337d9 }
	__asm { L_008337d7: }
	__asm { xor bl, bl }
	__asm { L_008337d9: }
	__asm { cmp dword ptr [ebp + 0x10], 8 }
	__asm { jbe L_008337ef }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_008337ef }
	__asm { push eax }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_008337ef: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00833750();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00833810
extern "C" __declspec(naked) void asm_00833810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25c48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { sub esp, 0x10 }
	__asm { mov esi, esp }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { cmp eax, 8 }
	__asm { ja L_0083385c }
	__asm { mov eax, esi }
	__asm { lea ecx, [ebp + 8] }
	__asm { jmp L_0083386a }
	__asm { L_0083385c: }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { L_0083386a: }
	__asm { push dword ptr [esi + 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { add esp, 0xc }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { call fn_00833750 }
	__asm { cmp dword ptr [ebp + 0x10], 8 }
	__asm { mov bl, al }
	__asm { jbe L_0083389c }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0083389c }
	__asm { push eax }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_0083389c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00833810();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x008338c0
extern "C" __declspec(naked) void asm_008338c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25c48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 0x10 }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { cmp eax, 8 }
	__asm { ja L_00833905 }
	__asm { mov eax, esi }
	__asm { lea ecx, [ebp + 8] }
	__asm { jmp L_00833913 }
	__asm { L_00833905: }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { L_00833913: }
	__asm { push dword ptr [esi + 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov esi, 0xe618f8 }
	__asm { add esp, 0xc }
	__asm { mov ecx, esi }
	__asm { call fn_00833810 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { cmp dword ptr [ebp + 0x10], 8 }
	__asm { mov dword ptr [edi], esi }
	__asm { jbe L_00833951 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00833951 }
	__asm { push eax }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00833951: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00833590();
extern "C" void fn_00844770();
// FUNCTION: ROBLOXSTUDIO 0x00833970
extern "C" __declspec(naked) void asm_00833970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f468 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_008339c6 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00844770 }
	__asm { mov ecx, esi }
	__asm { call fn_00833590 }
	__asm { mov bl, 1 }
	__asm { jmp L_008339c8 }
	__asm { L_008339c6: }
	__asm { xor bl, bl }
	__asm { L_008339c8: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008339ef }
	__asm { test al, 1 }
	__asm { jne L_008339ef }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008339ef }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008339ef: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_00833970();
extern "C" void fn_00844770();
// FUNCTION: ROBLOXSTUDIO 0x00833a10
extern "C" __declspec(naked) void asm_00833a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25d20 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00844770 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push esi }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00844770 }
	__asm { mov esi, 0xe61588 }
	__asm { mov ecx, esi }
	__asm { call fn_00833970 }
	__asm { mov ecx, dword ptr [ebp - 0x38] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00833a9a }
	__asm { test cl, 1 }
	__asm { jne L_00833a93 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00833a93 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00833a93: }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { L_00833a9a: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00833aca }
	__asm { test al, 1 }
	__asm { jne L_00833aca }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00833aca }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00833aca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00845e50();
extern "C" void fn_008481c0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00833ae0
extern "C" __declspec(naked) void asm_00833ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25d4b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00833b76 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { call fn_00845e50 }
	__asm { push 0x4c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00833b63 }
	__asm { mov ecx, dword ptr [ebp - 0x5c] }
	__asm { lea eax, [ebp - 0x58] }
	__asm { mov dword ptr [esi], ecx }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_00845e50 }
	__asm { mov eax, dword ptr [ebp + 0x54] }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [eax], esi }
	__asm { call fn_008481c0 }
	__asm { mov bl, 1 }
	__asm { jmp L_00833b78 }
	__asm { L_00833b63: }
	__asm { mov eax, dword ptr [ebp + 0x54] }
	__asm { xor esi, esi }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [eax], esi }
	__asm { call fn_008481c0 }
	__asm { mov bl, 1 }
	__asm { jmp L_00833b78 }
	__asm { L_00833b76: }
	__asm { xor bl, bl }
	__asm { L_00833b78: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_008481c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_00833ae0();
extern "C" void fn_00845e50();
extern "C" void fn_008481c0();
// FUNCTION: ROBLOXSTUDIO 0x00833ba0
extern "C" __declspec(naked) void asm_00833ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25d70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00845e50 }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x4c }
	__asm { mov ecx, esp }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { call fn_00845e50 }
	__asm { mov esi, 0xe614d8 }
	__asm { mov ecx, esi }
	__asm { call fn_00833ae0 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov bl, al }
	__asm { call fn_008481c0 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_008481c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" void fn_00403540();
extern "C" void fn_0040c260();
extern "C" void fn_00833620();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00833c40
extern "C" __declspec(naked) void asm_00833c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d638 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00833cb4 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, esp }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_00833620 }
	__asm { mov bl, 1 }
	__asm { jmp L_00833cb6 }
	__asm { L_00833cb4: }
	__asm { xor bl, bl }
	__asm { L_00833cb6: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00833cc7 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00833cc7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_00403540();
extern "C" void fn_00833c40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00833ce0
extern "C" __declspec(naked) void asm_00833ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ab10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, esp }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov esi, 0xe614c8 }
	__asm { mov ecx, esi }
	__asm { call fn_00833c40 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_00833d89 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00833d89: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov dword ptr [edi], esi }
	__asm { jb L_00833da3 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00833da3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_0040c260();
extern "C" void fn_008336b0();
extern "C" void fn_00869390();
// FUNCTION: ROBLOXSTUDIO 0x00833dc0
extern "C" __declspec(naked) void asm_00833dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25d88 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00833e27 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x40] }
	__asm { sub esp, 0x38 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00869390 }
	__asm { mov al, byte ptr [ebp + 0x38] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esi + 0x28], al }
	__asm { call fn_008336b0 }
	__asm { mov bl, 1 }
	__asm { jmp L_00833e29 }
	__asm { L_00833e27: }
	__asm { xor bl, bl }
	__asm { L_00833e29: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00833e50 }
	__asm { test al, 1 }
	__asm { jne L_00833e50 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00833e50 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00833e50: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" void fn_00833dc0();
extern "C" void fn_00869390();
// FUNCTION: ROBLOXSTUDIO 0x00833e70
extern "C" __declspec(naked) void asm_00833e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25d88 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x40] }
	__asm { sub esp, 0x38 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00869390 }
	__asm { mov al, byte ptr [ebp + 0x38] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esi + 0x28], al }
	__asm { call fn_00833dc0 }
	__asm { mov bl, al }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00833eed }
	__asm { test al, 1 }
	__asm { jne L_00833eed }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00833eed }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00833eed: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x3c }
}

extern "C" void fn_00833e70();
extern "C" void fn_00869390();
// FUNCTION: ROBLOXSTUDIO 0x00833f10
extern "C" __declspec(naked) void asm_00833f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25d88 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x38 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00869390 }
	__asm { mov al, byte ptr [ebp + 0x38] }
	__asm { mov byte ptr [esi + 0x28], al }
	__asm { mov esi, 0xe614d0 }
	__asm { mov ecx, esi }
	__asm { call fn_00833e70 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmove esi, ecx }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00833f92 }
	__asm { test al, 1 }
	__asm { jne L_00833f92 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00833f92 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00833f92: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" void fn_0040c260();
extern "C" void fn_008d01b0();
extern "C" void fn_009a8910();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00833fb0
extern "C" __declspec(naked) void asm_00833fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25dbb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0083403b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x58], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_009a8910 }
	__asm { push 0x48 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00834024 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { lea eax, [ebp - 0x50] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_009a8910 }
	__asm { jmp L_00834026 }
	__asm { L_00834024: }
	__asm { xor esi, esi }
	__asm { L_00834026: }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008d01b0 }
	__asm { mov bl, 1 }
	__asm { jmp L_0083403d }
	__asm { L_0083403b: }
	__asm { xor bl, bl }
	__asm { L_0083403d: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008d01b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" void fn_00833fb0();
extern "C" void fn_008d01b0();
extern "C" void fn_009a8910();
// FUNCTION: ROBLOXSTUDIO 0x00834060
extern "C" __declspec(naked) void asm_00834060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25de0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x58], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_009a8910 }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x48 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { call fn_009a8910 }
	__asm { mov esi, 0xe61620 }
	__asm { mov ecx, esi }
	__asm { call fn_00833fb0 }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008d01b0 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008d01b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" void fn_00aec810();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x008341c0
extern "C" __declspec(naked) void asm_008341c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00b25b30 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push esi }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b25b30 }
	__asm { mov esi, 0xe61650 }
	__asm { mov ecx, esi }
	__asm { call fn_00aec810 }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0083424a }
	__asm { test cl, 1 }
	__asm { jne L_00834243 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00834243 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00834243: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_0083424a: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0083427a }
	__asm { test al, 1 }
	__asm { jne L_0083427a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0083427a }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0083427a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00aec810();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00834290
extern "C" __declspec(naked) void asm_00834290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00b25b30 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push esi }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b25b30 }
	__asm { mov esi, 0xe61648 }
	__asm { mov ecx, esi }
	__asm { call fn_00aec810 }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0083431a }
	__asm { test cl, 1 }
	__asm { jne L_00834313 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00834313 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00834313: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_0083431a: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0083434a }
	__asm { test al, 1 }
	__asm { jne L_0083434a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0083434a }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0083434a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00403540();
extern "C" void fn_00845810();
extern "C" void fn_00845e50();
extern "C" void fn_008481c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008346e0
extern "C" __declspec(naked) void asm_008346e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25e20 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x58 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x40] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [ebp - 0x64] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00845810 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], ecx }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00845e50 }
	__asm { lea ecx, [ebp - 0x64] }
	__asm { call fn_008481c0 }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_008347bb }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008347bb: }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { jb L_008347de }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008347de: }
	__asm { cmp dword ptr [ebp + 0x54], 0x10 }
	__asm { mov dword ptr [ebp + 0x3c], 0xf }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { mov byte ptr [ebp + 0x28], 0 }
	__asm { jb L_00834801 }
	__asm { push dword ptr [ebp + 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00834801: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00844770();
extern "C" void fn_008447f0();
// FUNCTION: ROBLOXSTUDIO 0x00834820
extern "C" __declspec(naked) void asm_00834820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25e59 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp + 0x2f], al }
	__asm { lea eax, [ebp + 0x2f] }
	__asm { push eax }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_008348a9 }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00834892 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_008348a9 }
	__asm { L_00834892: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008348a9: }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_008447f0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00844770 }
	__asm { mov eax, dword ptr [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_008348f2 }
	__asm { test al, 1 }
	__asm { jne L_008348eb }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008348eb }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008348eb: }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { L_008348f2: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00834916 }
	__asm { test al, 1 }
	__asm { jne L_00834916 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00834916 }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00834916: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00845b40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00834bd0
extern "C" __declspec(naked) void asm_00834bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25f10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { fld qword ptr [ebp + 0x30] }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, esp }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { fstp qword ptr [eax] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { call fn_00845b40 }
	__asm { mov esi, eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { lea ecx, [edi + 0xc] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { jb L_00834c9a }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00834c9a: }
	__asm { cmp dword ptr [ebp + 0x2c], 0x10 }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { jb L_00834cbd }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00834cbd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bdb0();
// FUNCTION: ROBLOXSTUDIO 0x00835d90
extern "C" __declspec(naked) void asm_00835d90()
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
	__asm { je L_00835ddb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00835ddb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00835e2e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe51730 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe613ac }
	__asm { mov dword ptr [esi + 8], 0xe613bc }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe613c4 }
	__asm { mov dword ptr [esi + 8], 0xe613d4 }
	__asm { jmp L_00835e30 }
	__asm { L_00835e2e: }
	__asm { xor esi, esi }
	__asm { L_00835e30: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bdb0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00835e4d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00835e4d: }
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
extern "C" void fn_0078ee40();
extern "C" void fn_008306d0();
// FUNCTION: ROBLOXSTUDIO 0x00835e70
extern "C" __declspec(naked) void asm_00835e70()
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
	__asm { je L_00835ebb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00835ebb: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00835ee4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_008306d0 }
	__asm { mov dword ptr [esi], 0xe61400 }
	__asm { mov dword ptr [esi + 8], 0xe61410 }
	__asm { jmp L_00835ee6 }
	__asm { L_00835ee4: }
	__asm { xor esi, esi }
	__asm { L_00835ee6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0078ee40 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00835f0a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00835f0a: }
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
extern "C" void fn_00830a60();
extern "C" void fn_00846410();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00836f00
extern "C" __declspec(naked) void asm_00836f00()
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
	__asm { push 0xe40 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00836f51 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_00846410 }
	__asm { mov esi, eax }
	__asm { jmp L_00836f53 }
	__asm { L_00836f51: }
	__asm { xor esi, esi }
	__asm { L_00836f53: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00830a60 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00836f84 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00836f84 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00836f84: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4c04[];
extern "C" void fn_007af680();
extern "C" void fn_007de8e0();
extern "C" void fn_00812e90();
extern "C" void fn_00831360();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008391c0
extern "C" __declspec(naked) void asm_008391c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd127ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x74 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0083926e }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe5d564 }
	__asm { mov dword ptr [esi + 4], 0xe5d5dc }
	__asm { mov dword ptr [esi + 0x18], 0xe5d5e4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe5d5f0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00812e90 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4c04] }
	__asm { mov byte ptr [esi + 0x64], 1 }
	__asm { mov dword ptr [esi], 0xe5d604 }
	__asm { mov dword ptr [esi + 4], 0xe5d67c }
	__asm { mov dword ptr [esi + 0x18], 0xe5d684 }
	__asm { mov dword ptr [esi + 0x1c], 0xe5d690 }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { jmp L_00839270 }
	__asm { L_0083926e: }
	__asm { xor esi, esi }
	__asm { L_00839270: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00831360 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_008392a1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_008392a1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_008392a1: }
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
extern "C" void fn_008316f0();
extern "C" void fn_00964880();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00839bd0
extern "C" __declspec(naked) void asm_00839bd0()
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
	__asm { push 0x260 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00839c3e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00839c2e }
	__asm { add ecx, 0x98 }
	__asm { push 1 }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00964880 }
	__asm { mov esi, eax }
	__asm { jmp L_00839c40 }
	__asm { L_00839c2e: }
	__asm { xor ecx, ecx }
	__asm { push 1 }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00964880 }
	__asm { mov esi, eax }
	__asm { jmp L_00839c40 }
	__asm { L_00839c3e: }
	__asm { xor esi, esi }
	__asm { L_00839c40: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_008316f0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00839c71 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00839c71 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00839c71: }
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
extern "C" void fn_008405a0();
extern "C" void fn_00842070();
// FUNCTION: ROBLOXSTUDIO 0x0083a9b0
extern "C" __declspec(naked) void asm_0083a9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0f5a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { mov edi, dword ptr [esi + 0x24] }
	__asm { cmp ebx, edi }
	__asm { jl L_0083aa0b }
	__asm { test byte ptr [esi + 0x44], 4 }
	__asm { je L_0083aa88 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e1052c] }
	__asm { mov dword ptr [ebp - 0x20], 0xe5da54 }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00842070 }
	__asm { L_0083aa0b: }
	__asm { mov edi, dword ptr [esi] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { sub ecx, edi }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 6 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { je L_0083aa88 }
	__asm { xor ebx, ebx }
	__asm { mov edi, edi }
	__asm { L_0083aa30: }
	__asm { mov eax, dword ptr [ebx + edi] }
	__asm { lea ecx, [ebx + edi] }
	__asm { cmp eax, dword ptr [esi + 0x20] }
	__asm { jne L_0083aa63 }
	__asm { cmp byte ptr [esi + 0x90], 0 }
	__asm { je L_0083aa4c }
	__asm { lea eax, [esi + 0x94] }
	__asm { jmp L_0083aa4e }
	__asm { L_0083aa4c: }
	__asm { xor eax, eax }
	__asm { L_0083aa4e: }
	__asm { push eax }
	__asm { lea eax, [esi + 0x48] }
	__asm { push eax }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_008405a0 }
	__asm { add esp, 0x14 }
	__asm { L_0083aa63: }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { inc dword ptr [ebp + 8] }
	__asm { sub ecx, edi }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 6 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add ebx, 0x70 }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { jb L_0083aa30 }
	__asm { L_0083aa88: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00840c10();
extern "C" void fn_00842070();
// FUNCTION: ROBLOXSTUDIO 0x0083aaa0
extern "C" __declspec(naked) void asm_0083aaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0f5a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { mov edi, dword ptr [esi + 0x24] }
	__asm { cmp ebx, edi }
	__asm { jl L_0083aafb }
	__asm { test byte ptr [esi + 0x44], 4 }
	__asm { je L_0083ab78 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e1052c] }
	__asm { mov dword ptr [ebp - 0x20], 0xe5da54 }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00842070 }
	__asm { L_0083aafb: }
	__asm { mov edi, dword ptr [esi] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { sub ecx, edi }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 6 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { je L_0083ab78 }
	__asm { xor ebx, ebx }
	__asm { mov edi, edi }
	__asm { L_0083ab20: }
	__asm { mov eax, dword ptr [ebx + edi] }
	__asm { lea ecx, [ebx + edi] }
	__asm { cmp eax, dword ptr [esi + 0x20] }
	__asm { jne L_0083ab53 }
	__asm { cmp byte ptr [esi + 0x90], 0 }
	__asm { je L_0083ab3c }
	__asm { lea eax, [esi + 0x94] }
	__asm { jmp L_0083ab3e }
	__asm { L_0083ab3c: }
	__asm { xor eax, eax }
	__asm { L_0083ab3e: }
	__asm { push eax }
	__asm { lea eax, [esi + 0x48] }
	__asm { push eax }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00840c10 }
	__asm { add esp, 0x14 }
	__asm { L_0083ab53: }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { inc dword ptr [ebp + 8] }
	__asm { sub ecx, edi }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 6 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add ebx, 0x70 }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { jb L_0083ab20 }
	__asm { L_0083ab78: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00841280();
extern "C" void fn_00842070();
// FUNCTION: ROBLOXSTUDIO 0x0083ab90
extern "C" __declspec(naked) void asm_0083ab90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0f5a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { mov edi, dword ptr [esi + 0x24] }
	__asm { cmp ebx, edi }
	__asm { jl L_0083abeb }
	__asm { test byte ptr [esi + 0x44], 4 }
	__asm { je L_0083ac68 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e1052c] }
	__asm { mov dword ptr [ebp - 0x20], 0xe5da54 }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00842070 }
	__asm { L_0083abeb: }
	__asm { mov edi, dword ptr [esi] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { sub ecx, edi }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 6 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { je L_0083ac68 }
	__asm { xor ebx, ebx }
	__asm { mov edi, edi }
	__asm { L_0083ac10: }
	__asm { mov eax, dword ptr [ebx + edi] }
	__asm { lea ecx, [ebx + edi] }
	__asm { cmp eax, dword ptr [esi + 0x20] }
	__asm { jne L_0083ac43 }
	__asm { cmp byte ptr [esi + 0x90], 0 }
	__asm { je L_0083ac2c }
	__asm { lea eax, [esi + 0x94] }
	__asm { jmp L_0083ac2e }
	__asm { L_0083ac2c: }
	__asm { xor eax, eax }
	__asm { L_0083ac2e: }
	__asm { push eax }
	__asm { lea eax, [esi + 0x48] }
	__asm { push eax }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00841280 }
	__asm { add esp, 0x14 }
	__asm { L_0083ac43: }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { inc dword ptr [ebp + 8] }
	__asm { sub ecx, edi }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 6 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add ebx, 0x70 }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { jb L_0083ac10 }
	__asm { L_0083ac68: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b2270();
extern "C" void fn_004b3a00();
extern "C" void fn_00789cb0();
extern "C" void fn_00896c40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0083add0
extern "C" __declspec(naked) void asm_0083add0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6c408 }
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
	__asm { je L_0083adff }
	__asm { inc eax }
	__asm { jmp L_0083ae01 }
	__asm { L_0083adff: }
	__asm { xor eax, eax }
	__asm { L_0083ae01: }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b2270 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_0083ae31 }
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
	__asm { L_0083ae31: }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_0083ae3b }
	__asm { inc eax }
	__asm { jmp L_0083ae3d }
	__asm { L_0083ae3b: }
	__asm { xor eax, eax }
	__asm { L_0083ae3d: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00789cb0 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00896c40 }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b3a00 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [esi + 4], 1 }
	__asm { test eax, eax }
	__asm { je L_0083ae96 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0083ae96: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0083a9b0();
extern "C" void fn_0084d790();
// FUNCTION: ROBLOXSTUDIO 0x0083b1f0
extern "C" __declspec(naked) void asm_0083b1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [esi + 0x28], 0 }
	__asm { je L_0083b204 }
	__asm { mov ecx, esi }
	__asm { call fn_0084d790 }
	__asm { L_0083b204: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_0083a9b0 }
	__asm { inc dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi + 0x18], 0 }
	__asm { je L_0083b277 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi + 0x24] }
	__asm { cmp eax, ebx }
	__asm { jge L_0083b271 }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { L_0083b228: }
	__asm { test eax, eax }
	__asm { jns L_0083b247 }
	__asm { mov ecx, eax }
	__asm { neg ecx }
	__asm { je L_0083b247 }
	__asm { or ecx, 0xffffffff }
	__asm { sub ecx, eax }
	__asm { shr ecx, 5 }
	__asm { mov edi, edx }
	__asm { lea ecx, [ecx*4 + 4] }
	__asm { sub edi, ecx }
	__asm { jmp L_0083b24f }
	__asm { L_0083b247: }
	__asm { mov ecx, eax }
	__asm { shr ecx, 5 }
	__asm { lea edi, [edx + ecx*4] }
	__asm { L_0083b24f: }
	__asm { mov ecx, eax }
	__asm { and ecx, 0x1f }
	__asm { mov edx, 1 }
	__asm { shl edx, cl }
	__asm { test dword ptr [edi], edx }
	__asm { je L_0083b26a }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { cmp eax, ebx }
	__asm { jl L_0083b228 }
	__asm { L_0083b26a: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083b271: }
	__asm { pop ebx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083b277: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0083aaa0();
extern "C" void fn_0084d790();
// FUNCTION: ROBLOXSTUDIO 0x0083b280
extern "C" __declspec(naked) void asm_0083b280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [esi + 0x28], 0 }
	__asm { je L_0083b294 }
	__asm { mov ecx, esi }
	__asm { call fn_0084d790 }
	__asm { L_0083b294: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_0083aaa0 }
	__asm { inc dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi + 0x18], 0 }
	__asm { je L_0083b307 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi + 0x24] }
	__asm { cmp eax, ebx }
	__asm { jge L_0083b301 }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { L_0083b2b8: }
	__asm { test eax, eax }
	__asm { jns L_0083b2d7 }
	__asm { mov ecx, eax }
	__asm { neg ecx }
	__asm { je L_0083b2d7 }
	__asm { or ecx, 0xffffffff }
	__asm { sub ecx, eax }
	__asm { shr ecx, 5 }
	__asm { mov edi, edx }
	__asm { lea ecx, [ecx*4 + 4] }
	__asm { sub edi, ecx }
	__asm { jmp L_0083b2df }
	__asm { L_0083b2d7: }
	__asm { mov ecx, eax }
	__asm { shr ecx, 5 }
	__asm { lea edi, [edx + ecx*4] }
	__asm { L_0083b2df: }
	__asm { mov ecx, eax }
	__asm { and ecx, 0x1f }
	__asm { mov edx, 1 }
	__asm { shl edx, cl }
	__asm { test dword ptr [edi], edx }
	__asm { je L_0083b2fa }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { cmp eax, ebx }
	__asm { jl L_0083b2b8 }
	__asm { L_0083b2fa: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083b301: }
	__asm { pop ebx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083b307: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0083ab90();
extern "C" void fn_0084d790();
// FUNCTION: ROBLOXSTUDIO 0x0083b310
extern "C" __declspec(naked) void asm_0083b310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [esi + 0x28], 0 }
	__asm { je L_0083b324 }
	__asm { mov ecx, esi }
	__asm { call fn_0084d790 }
	__asm { L_0083b324: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_0083ab90 }
	__asm { inc dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi + 0x18], 0 }
	__asm { je L_0083b397 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi + 0x24] }
	__asm { cmp eax, ebx }
	__asm { jge L_0083b391 }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { L_0083b348: }
	__asm { test eax, eax }
	__asm { jns L_0083b367 }
	__asm { mov ecx, eax }
	__asm { neg ecx }
	__asm { je L_0083b367 }
	__asm { or ecx, 0xffffffff }
	__asm { sub ecx, eax }
	__asm { shr ecx, 5 }
	__asm { mov edi, edx }
	__asm { lea ecx, [ecx*4 + 4] }
	__asm { sub edi, ecx }
	__asm { jmp L_0083b36f }
	__asm { L_0083b367: }
	__asm { mov ecx, eax }
	__asm { shr ecx, 5 }
	__asm { lea edi, [edx + ecx*4] }
	__asm { L_0083b36f: }
	__asm { mov ecx, eax }
	__asm { and ecx, 0x1f }
	__asm { mov edx, 1 }
	__asm { shl edx, cl }
	__asm { test dword ptr [edi], edx }
	__asm { je L_0083b38a }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { cmp eax, ebx }
	__asm { jl L_0083b348 }
	__asm { L_0083b38a: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083b391: }
	__asm { pop ebx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083b397: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_008330f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0083dec0
extern "C" __declspec(naked) void asm_0083dec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26ee8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_008330f0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { lea ecx, [esi + 0xc] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov ecx, dword ptr [ebp + 0x44] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov dword ptr [esi + 0x30], ecx }
	__asm { jb L_0083df4c }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0083df4c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b98f0();
extern "C" void fn_007d1960();
extern "C" void fn_00825140();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0083e550
extern "C" __declspec(naked) void asm_0083e550()
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
	__asm { cmp eax, 2 }
	__asm { jb L_0083e61b }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { push ecx }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0083e5a3 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083e5a3: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0083e601 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_007d1960 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0083e5f0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0083e5f0: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083e601: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0083e61b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0083e61b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0083e635 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083e635: }
	__asm { push 2 }
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

extern "C" void fn_006b98f0();
extern "C" void fn_00825140();
extern "C" void fn_0083df60();
extern "C" void fn_00842340();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0083efb0
extern "C" __declspec(naked) void asm_0083efb0()
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
	__asm { cmp eax, 2 }
	__asm { jb L_0083f07b }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00842340 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_0083f003 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083f003: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0083f061 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_0083df60 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0083f050 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0083f050: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083f061: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0083f07b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0083f07b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0083f095 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083f095: }
	__asm { push 2 }
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

extern "C" void fn_006b98f0();
extern "C" void fn_00825140();
extern "C" void fn_0083e090();
extern "C" void fn_008420c0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0083f0c0
extern "C" __declspec(naked) void asm_0083f0c0()
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
	__asm { jb L_0083f18b }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_008420c0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_0083f113 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083f113: }
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
	__asm { je L_0083f171 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_0083e090 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0083f160 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0083f160: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083f171: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0083f18b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0083f18b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0083f1a5 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083f1a5: }
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

extern "C" void fn_006b98f0();
extern "C" void fn_00825140();
extern "C" void fn_0083e1c0();
extern "C" void fn_00842160();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0083f1d0
extern "C" __declspec(naked) void asm_0083f1d0()
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
	__asm { jb L_0083f29b }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00842160 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_0083f223 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083f223: }
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
	__asm { je L_0083f281 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_0083e1c0 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0083f270 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0083f270: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083f281: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0083f29b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0083f29b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0083f2b5 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083f2b5: }
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

extern "C" void fn_006b98f0();
extern "C" void fn_00825140();
extern "C" void fn_0083e2f0();
extern "C" void fn_00842200();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0083f2e0
extern "C" __declspec(naked) void asm_0083f2e0()
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
	__asm { jb L_0083f3ab }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00842200 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_0083f333 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083f333: }
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
	__asm { je L_0083f391 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_0083e2f0 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0083f380 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0083f380: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083f391: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0083f3ab }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0083f3ab: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0083f3c5 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083f3c5: }
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

extern "C" void fn_006b98f0();
extern "C" void fn_00825140();
extern "C" void fn_0083e420();
extern "C" void fn_008422a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0083f3f0
extern "C" __declspec(naked) void asm_0083f3f0()
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
	__asm { jb L_0083f4bb }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_008422a0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_0083f443 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083f443: }
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
	__asm { je L_0083f4a1 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_0083e420 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0083f490 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0083f490: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083f4a1: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0083f4bb }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0083f4bb: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0083f4d5 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083f4d5: }
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

extern "C" void fn_006b98f0();
extern "C" void fn_007d2bd0();
extern "C" void fn_00825140();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0083f500
extern "C" __declspec(naked) void asm_0083f500()
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
	__asm { cmp eax, 3 }
	__asm { jb L_0083f5cd }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push ecx }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0083f553 }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083f553: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0083f5b3 }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_007d2bd0 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov bl, byte ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0083f5a1 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0083f5a1: }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083f5b3: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0083f5cd }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0083f5cd: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0083f5e7 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, byte ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0083f5e7: }
	__asm { push 3 }
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

extern "C" void fn_0043d7c0();
extern "C" void fn_007b0970();
extern "C" void fn_007d5550();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00841960
extern "C" __declspec(naked) void asm_00841960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27038 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_007d5550 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_0043d7c0 }
	__asm { mov eax, dword ptr [ebp - 0x54] }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { test ecx, ecx }
	__asm { je L_008419c6 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { add esp, 8 }
	__asm { L_008419c6: }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_007b0970 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_008419e8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008419e8: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00841a13 }
	__asm { test al, 1 }
	__asm { jne L_00841a0c }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00841a0c }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00841a0c: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_00841a13: }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { jb L_00841a24 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00841a24: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079be80();
extern "C" void fn_0083f970();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00841d90
extern "C" __declspec(naked) void asm_00841d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1db98 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { sub esp, 0x10 }
	__asm { mov ebx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0xc }
	__asm { mov esi, esp }
	__asm { lea edi, [esi + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edi], eax }
	__asm { cmp eax, 8 }
	__asm { ja L_00841dd8 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { jmp L_00841de8 }
	__asm { L_00841dd8: }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 4 }
	__asm { L_00841de8: }
	__asm { push dword ptr [edi] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { push ebx }
	__asm { call fn_0079be80 }
	__asm { add esp, 0x14 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0083f970 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [ebp + 0x18], 8 }
	__asm { mov esi, eax }
	__asm { jbe L_00841e23 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00841e23 }
	__asm { push eax }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00841e23: }
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

extern "C" char g_00e103ec[];
extern "C" char g_00e104a0[];
// FUNCTION: ROBLOXSTUDIO 0x00841e40
extern "C" __declspec(naked) void asm_00841e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { je L_00841eb1 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x18] }
	__asm { L_00841e63: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, edi }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp + 0x14], al }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push 4 }
	__asm { call dword ptr [g_00e103ec] }
	__asm { test al, al }
	__asm { je L_00841eaa }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104a0] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { inc dword ptr [esi] }
	__asm { lea edx, [ecx + ecx*4] }
	__asm { movsx ecx, al }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ecx + edx*2] }
	__asm { add ecx, -0x30 }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, dword ptr [eax] }
	__asm { jne L_00841e63 }
	__asm { L_00841eaa: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00841eb1: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10344[];
extern "C" char g_00e10348[];
extern "C" char g_00e1034c[];
extern "C" char g_00e10350[];
extern "C" char g_00e104b4[];
extern "C" char g_00e10518[];
extern "C" char g_012f93fc[];
extern "C" void fn_0084aa00();
extern "C" void fn_00cf64e2();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00842540
extern "C" __declspec(naked) void asm_00842540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27139 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e10348] }
	__asm { mov ebx, dword ptr [g_012f93fc] }
	__asm { mov ecx, dword ptr [g_00e104b4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call dword ptr [g_00e10350] }
	__asm { mov edi, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp edi, dword ptr [eax + 0xc] }
	__asm { jae L_0084259d }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov esi, dword ptr [ecx + edi*4] }
	__asm { test esi, esi }
	__asm { jne L_0084260b }
	__asm { jmp L_0084259f }
	__asm { L_0084259d: }
	__asm { xor esi, esi }
	__asm { L_0084259f: }
	__asm { cmp byte ptr [eax + 0x14], 0 }
	__asm { je L_008425b6 }
	__asm { call dword ptr [g_00e1034c] }
	__asm { cmp edi, dword ptr [eax + 0xc] }
	__asm { jae L_008425ba }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov esi, dword ptr [eax + edi*4] }
	__asm { L_008425b6: }
	__asm { test esi, esi }
	__asm { jne L_0084260b }
	__asm { L_008425ba: }
	__asm { test ebx, ebx }
	__asm { je L_008425c2 }
	__asm { mov esi, ebx }
	__asm { jmp L_0084260b }
	__asm { L_008425c2: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_0084aa00 }
	__asm { add esp, 8 }
	__asm { cmp eax, -1 }
	__asm { jne L_008425f2 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e10518] }
	__asm { push 0x1179e30 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_008425f2: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [g_012f93fc], esi }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 4] }
	__asm { push esi }
	__asm { call fn_00cf64e2 }
	__asm { add esp, 4 }
	__asm { L_0084260b: }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e10344] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131ae5c[];
extern "C" void fn_0043ec00();
extern "C" void fn_007cbf10();
extern "C" void fn_007d55c0();
extern "C" void fn_00b48940();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00842730
extern "C" __declspec(naked) void asm_00842730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27306 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0131ae5c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_008427aa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ae5c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5d03c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, 0x131ad30 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc6a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008427aa: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x131ad30 }
	__asm { call fn_00b48940 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe5e52c }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { call fn_007d55c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, esi }
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
extern "C" void fn_00844400();
extern "C" void fn_0084ef50();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008429b0
extern "C" __declspec(naked) void asm_008429b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e0e6 }
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
	__asm { call fn_00844400 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe5de48 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov bl, byte ptr [ebp + 0x1c] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00842a1b }
	__asm { mov byte ptr [eax], bl }
	__asm { jmp L_00842a1d }
	__asm { L_00842a1b: }
	__asm { xor eax, eax }
	__asm { L_00842a1d: }
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
	__asm { je L_00842a43 }
	__asm { mov byte ptr [eax], bl }
	__asm { L_00842a43: }
	__asm { mov eax, dword ptr [g_0131a264] }
	__asm { test al, 1 }
	__asm { jne L_00842a7f }
	__asm { or eax, 1 }
	__asm { push 0xddc0d0 }
	__asm { mov dword ptr [g_0131a264], eax }
	__asm { mov dword ptr [g_0131a268], 0x12bdfcc }
	__asm { mov dword ptr [g_0131a270], 0x410d30 }
	__asm { mov dword ptr [g_0131a26c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00842a7f: }
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
	__asm { call fn_0084ef50 }
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
extern "C" void fn_007d5630();
extern "C" void fn_007d58d0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00844400();
// FUNCTION: ROBLOXSTUDIO 0x00842ad0
extern "C" __declspec(naked) void asm_00842ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd320bb }
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
	__asm { call fn_00844400 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe5dcf0 }
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
	__asm { call fn_007d5630 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d58d0 }
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
	__asm { je L_00842b7e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00842b7e: }
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
extern "C" void fn_00844400();
extern "C" void fn_0084f000();
// FUNCTION: ROBLOXSTUDIO 0x00842ba0
extern "C" __declspec(naked) void asm_00842ba0()
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
	__asm { call fn_00844400 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe5e048 }
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
	__asm { call fn_0084f000 }
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
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00844400();
// FUNCTION: ROBLOXSTUDIO 0x00842c50
extern "C" __declspec(naked) void asm_00842c50()
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
	__asm { call fn_00844400 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe5dd40 }
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
	__asm { je L_00842cfe }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00842cfe: }
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
extern "C" void fn_00844400();
extern "C" void fn_0084f0b0();
// FUNCTION: ROBLOXSTUDIO 0x00842d20
extern "C" __declspec(naked) void asm_00842d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd536f6 }
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
	__asm { call fn_00844400 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe5e11c }
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
	__asm { call fn_0084f0b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_0131a264[];
extern "C" char g_0131a268[];
extern "C" char g_0131a26c[];
extern "C" char g_0131a270[];
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00844400();
extern "C" void fn_0084f160();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00842dd0
extern "C" __declspec(naked) void asm_00842dd0()
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
	__asm { call fn_00844400 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe5e0e4 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov bl, byte ptr [ebp + 0x1c] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00842e3b }
	__asm { mov byte ptr [eax], bl }
	__asm { jmp L_00842e3d }
	__asm { L_00842e3b: }
	__asm { xor eax, eax }
	__asm { L_00842e3d: }
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
	__asm { je L_00842e63 }
	__asm { mov byte ptr [eax], bl }
	__asm { L_00842e63: }
	__asm { mov eax, dword ptr [g_0131a264] }
	__asm { test al, 1 }
	__asm { jne L_00842e9f }
	__asm { or eax, 1 }
	__asm { push 0xddc0d0 }
	__asm { mov dword ptr [g_0131a264], eax }
	__asm { mov dword ptr [g_0131a268], 0x12bdfcc }
	__asm { mov dword ptr [g_0131a270], 0x410d30 }
	__asm { mov dword ptr [g_0131a26c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00842e9f: }
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
	__asm { call fn_0084f160 }
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
extern "C" void fn_007d54e0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00844400();
// FUNCTION: ROBLOXSTUDIO 0x00842ef0
extern "C" __declspec(naked) void asm_00842ef0()
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
	__asm { call fn_00844400 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe5e09c }
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
	__asm { je L_00842f9e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00842f9e: }
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
extern "C" void fn_00844400();
extern "C" void fn_0084f210();
// FUNCTION: ROBLOXSTUDIO 0x00842fc0
extern "C" __declspec(naked) void asm_00842fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2721f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00844400 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe5de98 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [ebp + 0x28], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x24], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x20], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_0084f210 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00825140();
extern "C" void fn_00844400();
extern "C" void fn_00b11950();
// FUNCTION: ROBLOXSTUDIO 0x008430e0
extern "C" __declspec(naked) void asm_008430e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54d16 }
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
	__asm { call fn_00844400 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe5e4ec }
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
	__asm { call fn_00b11950 }
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
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00844400();
// FUNCTION: ROBLOXSTUDIO 0x00843190
extern "C" __declspec(naked) void asm_00843190()
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
	__asm { call fn_00844400 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe5ddd4 }
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
	__asm { je L_0084323e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0084323e: }
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
extern "C" void fn_007d58d0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00844400();
// FUNCTION: ROBLOXSTUDIO 0x00843260
extern "C" __declspec(naked) void asm_00843260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd320bb }
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
	__asm { call fn_00844400 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe5dd6c }
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
	__asm { call fn_007d58d0 }
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
	__asm { je L_0084330e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0084330e: }
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
extern "C" void fn_00844400();
extern "C" void fn_0084f380();
// FUNCTION: ROBLOXSTUDIO 0x00843330
extern "C" __declspec(naked) void asm_00843330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd536f6 }
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
	__asm { call fn_00844400 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe5e18c }
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
	__asm { call fn_0084f380 }
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
extern "C" void fn_007e9060();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00844400();
// FUNCTION: ROBLOXSTUDIO 0x008433e0
extern "C" __declspec(naked) void asm_008433e0()
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
	__asm { call fn_00844400 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe5e16c }
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
	__asm { call fn_007e9060 }
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
	__asm { je L_0084348e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0084348e: }
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
extern "C" void fn_00844400();
// FUNCTION: ROBLOXSTUDIO 0x008434b0
extern "C" __declspec(naked) void asm_008434b0()
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
	__asm { call fn_00844400 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe5dd80 }
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
	__asm { je L_0084355e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0084355e: }
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
extern "C" void fn_007e8ff0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00844400();
// FUNCTION: ROBLOXSTUDIO 0x00843580
extern "C" __declspec(naked) void asm_00843580()
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
	__asm { call fn_00844400 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe5e3ac }
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
	__asm { call fn_007e8ff0 }
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
	__asm { je L_0084362e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0084362e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00403540();
extern "C" void fn_0043d7c0();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00844510();
extern "C" void fn_0084f430();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00843650
extern "C" __declspec(naked) void asm_00843650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2727c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x3c] }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00844510 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe5de1c }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { push 0x18 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x38], esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test esi, esi }
	__asm { je L_008436e5 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { jmp L_008436e7 }
	__asm { L_008436e5: }
	__asm { xor esi, esi }
	__asm { L_008436e7: }
	__asm { mov dword ptr [edi + 0x38], esi }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [ebp + 0x38], esp }
	__asm { mov esi, esp }
	__asm { call fn_007d5550 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0x20] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_0043d7c0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_0084f430 }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { jb L_0084375f }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0084375f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x3c }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00844510();
// FUNCTION: ROBLOXSTUDIO 0x00843780
extern "C" __declspec(naked) void asm_00843780()
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
	__asm { call fn_00844510 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe5de00 }
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
	__asm { call fn_007d5550 }
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
	__asm { je L_0084382e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0084382e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_012f696c[];
extern "C" char g_012f6970[];
extern "C" char g_012f6974[];
extern "C" char g_012f6978[];
extern "C" void fn_007cb250();
extern "C" void fn_007d5d30();
extern "C" void fn_007e9450();
extern "C" void fn_00825670();
extern "C" void fn_00844510();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00843850
extern "C" __declspec(naked) void asm_00843850()
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
	__asm { call fn_00844510 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xe5dd1c }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008438b1 }
	__asm { mov dword ptr [eax], esi }
	__asm { jmp L_008438b3 }
	__asm { L_008438b1: }
	__asm { xor eax, eax }
	__asm { L_008438b3: }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007e9450 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [g_012f6978] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp - 0x4c], esi }
	__asm { test al, 1 }
	__asm { jne L_00843908 }
	__asm { or eax, 1 }
	__asm { push 0xde8920 }
	__asm { mov dword ptr [g_012f6978], eax }
	__asm { mov dword ptr [g_012f696c], 0x11f0c1c }
	__asm { mov dword ptr [g_012f6974], 0x40d810 }
	__asm { mov dword ptr [g_012f6970], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00843908: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0x12f696c }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007e9450 }
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
	__asm { je L_00843957 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00843957: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00843a30
extern "C" __declspec(naked) void asm_00843a30()
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
	__asm { push 0x11f0b74 }
	__asm { mov edi, ecx }
	__asm { push 0xe5e2d4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59a78 }
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
	__asm { push 0xe5e540 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0x101d038 }
	__asm { push 1 }
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
// FUNCTION: ROBLOXSTUDIO 0x00843b60
extern "C" __declspec(naked) void asm_00843b60()
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
	__asm { push 0x11f0bc4 }
	__asm { mov edi, ecx }
	__asm { push 0xe5e394 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59aa8 }
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
	__asm { push 0xe5e5c4 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe5e5d0 }
	__asm { push 1 }
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
// FUNCTION: ROBLOXSTUDIO 0x00843c90
extern "C" __declspec(naked) void asm_00843c90()
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
	__asm { push 0x11f0bf4 }
	__asm { mov edi, ecx }
	__asm { push 0xe5e5e4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59ac0 }
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
	__asm { push 0xe5e5f0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe5e600 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe5e610 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe5e61c }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe5e628 }
	__asm { push 4 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe5e63c }
	__asm { push 5 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe5e650 }
	__asm { push 6 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe5e65c }
	__asm { push 7 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe5e66c }
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

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00843ff0
extern "C" __declspec(naked) void asm_00843ff0()
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
	__asm { push 0x11f0c1c }
	__asm { mov edi, ecx }
	__asm { push 0xe5e678 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59ad8 }
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
	__asm { push 0xe5e684 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe5e68c }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe5e698 }
	__asm { push 1 }
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
extern "C" void fn_007d5d30();
extern "C" void fn_008251b0();
extern "C" void fn_00844350();
// FUNCTION: ROBLOXSTUDIO 0x00844280
extern "C" __declspec(naked) void asm_00844280()
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
	__asm { call fn_00844350 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe5e488 }
	__asm { call fn_007d5d30 }
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
	__asm { jae L_00844312 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00844312: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00844335 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00844335: }
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
extern "C" char g_0131ae5c[];
extern "C" void fn_0043ec00();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00844400
extern "C" __declspec(naked) void asm_00844400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd272e6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0131ae5c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0084447a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ae5c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5d03c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, 0x131ad30 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc6a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0084447a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x131ad30 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe5dc8c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_008444f2 }
	__asm { push 0x12d2058 }
	__asm { mov ecx, 0x12d2058 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008444f2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008444dd }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008444f2 }
	__asm { L_008444dd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008444f2: }
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
extern "C" char g_0131ae5c[];
extern "C" void fn_0043ec00();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00844510
extern "C" __declspec(naked) void asm_00844510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27306 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0131ae5c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0084458a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ae5c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5d03c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, 0x131ad30 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc6a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0084458a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x131ad30 }
	__asm { call fn_0092b930 }
	__asm { mov dword ptr [esi], 0xe5dd10 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00844602 }
	__asm { push 0x12d2058 }
	__asm { mov ecx, 0x12d2058 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00844602 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008445ed }
	__asm { push 0x662 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00844602 }
	__asm { L_008445ed: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe55e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00844602: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e1031c[];
extern "C" void fn_004038a0();
extern "C" void fn_0078c470();
extern "C" void fn_0085b370();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00844620
extern "C" __declspec(naked) void asm_00844620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2734f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { call fn_0078c470 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { mov byte ptr [edi + 0x28], 0 }
	__asm { mov dword ptr [edi + 0x40], 0xf }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov byte ptr [edi + 0x2c], 0 }
	__asm { lea ecx, [edi + 0x48] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [edi + 0x44], 0xff }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [edi + 0x48], 0xe60b44 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov byte ptr [edi + 0x84], 0 }
	__asm { mov dword ptr [edi + 0x88], 3 }
	__asm { mov byte ptr [edi + 0x90], 0 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test edx, edx }
	__asm { je L_00844753 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { jne L_00844719 }
	__asm { xor ecx, ecx }
	__asm { jmp L_00844729 }
	__asm { L_00844719: }
	__asm { mov ecx, edx }
	__asm { lea esi, [ecx + 1] }
	__asm { mov edi, edi }
	__asm { L_00844720: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00844720 }
	__asm { sub ecx, esi }
	__asm { L_00844729: }
	__asm { push ecx }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_0085b370 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00844753 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00844753: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x008447f0
extern "C" __declspec(naked) void asm_008447f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1f468 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00844863 }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_0084484c }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { jmp L_00844863 }
	__asm { L_0084484c: }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { L_00844863: }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [esi + 0x20], al }
	__asm { test ecx, ecx }
	__asm { je L_00844890 }
	__asm { test cl, 1 }
	__asm { jne L_00844890 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00844890 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00844890: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x008448b0
extern "C" __declspec(naked) void asm_008448b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2738c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_008448fc }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_008448fc: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe5d9b4 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0084493c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0084493c: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xe61374 }
	__asm { mov dword ptr [esi], 0xe61380 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xe61388 }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x24], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x008449a0
extern "C" __declspec(naked) void asm_008449a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2738c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_008449ec }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_008449ec: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe5d9b4 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00844a2c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00844a2c: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xe61374 }
	__asm { mov dword ptr [esi], 0xe61380 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xe61388 }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x24], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00844a90
extern "C" __declspec(naked) void asm_00844a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38784 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00844adb }
	__asm { mov dword ptr [esi + 0x28], 0x1016498 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00844adb: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe5d9b4 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00844b16 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00844b16: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xe61374 }
	__asm { mov dword ptr [esi + 0x14], 0xe61380 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x28], 0xe61388 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x24], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1051c[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x00844b70
extern "C" __declspec(naked) void asm_00844b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd273cc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00844bbc }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00844bbc: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e1051c] }
	__asm { mov dword ptr [edi], 0xe5d3b8 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00844bfc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00844bfc: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xe61568 }
	__asm { mov dword ptr [esi], 0xe61574 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xe6157c }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x24], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1051c[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x00844c60
extern "C" __declspec(naked) void asm_00844c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd273cc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00844cac }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00844cac: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e1051c] }
	__asm { mov dword ptr [edi], 0xe5d3b8 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00844cec }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00844cec: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xe61568 }
	__asm { mov dword ptr [esi], 0xe61574 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xe6157c }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x24], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1051c[];
// FUNCTION: ROBLOXSTUDIO 0x00844d50
extern "C" __declspec(naked) void asm_00844d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27404 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00844d9b }
	__asm { mov dword ptr [esi + 0x28], 0x1016498 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00844d9b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1051c] }
	__asm { mov dword ptr [esi], 0xe5d3b8 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00844dd6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00844dd6: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xe61568 }
	__asm { mov dword ptr [esi + 0x14], 0xe61574 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x28], 0xe6157c }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x24], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x00844e30
extern "C" __declspec(naked) void asm_00844e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2743c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00844e7c }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00844e7c: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe5d9f8 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00844ebc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00844ebc: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xe614f8 }
	__asm { mov dword ptr [esi], 0xe61504 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xe6150c }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x24], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x00844f20
extern "C" __declspec(naked) void asm_00844f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2743c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00844f6c }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00844f6c: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe5d9f8 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00844fac }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00844fac: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xe614f8 }
	__asm { mov dword ptr [esi], 0xe61504 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xe6150c }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x24], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00845010
extern "C" __declspec(naked) void asm_00845010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38784 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0084505b }
	__asm { mov dword ptr [esi + 0x28], 0x1016498 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0084505b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe5d9f8 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00845096 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00845096: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xe614f8 }
	__asm { mov dword ptr [esi + 0x14], 0xe61504 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x28], 0xe6150c }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x24], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x008450f0
extern "C" __declspec(naked) void asm_008450f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2747c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0084513c }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0084513c: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe5da54 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0084517c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0084517c: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xe618b8 }
	__asm { mov dword ptr [esi], 0xe618c4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xe618cc }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x24], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x008451e0
extern "C" __declspec(naked) void asm_008451e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2747c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0084522c }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0084522c: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe5da54 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0084526c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0084526c: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xe618b8 }
	__asm { mov dword ptr [esi], 0xe618c4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xe618cc }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x24], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x008452d0
extern "C" __declspec(naked) void asm_008452d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38784 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0084531b }
	__asm { mov dword ptr [esi + 0x28], 0x1016498 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0084531b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe5da54 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00845356 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00845356: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xe618b8 }
	__asm { mov dword ptr [esi + 0x14], 0xe618c4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x28], 0xe618cc }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x24], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x008455f0
extern "C" __declspec(naked) void asm_008455f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd274e6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 4] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { mov al, byte ptr [edi + 0x48] }
	__asm { mov byte ptr [esi + 0x48], al }
	__asm { mov eax, dword ptr [edi + 0x4c] }
	__asm { mov dword ptr [esi + 0x4c], eax }
	__asm { mov eax, dword ptr [edi + 0x50] }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { mov eax, dword ptr [edi + 0x54] }
	__asm { mov dword ptr [esi + 0x54], eax }
	__asm { mov byte ptr [esi + 0x58], 0 }
	__asm { cmp byte ptr [edi + 0x58], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_008456b3 }
	__asm { lea eax, [esi + 0x5c] }
	__asm { test eax, eax }
	__asm { je L_008456af }
	__asm { mov ecx, dword ptr [edi + 0x5c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { L_008456af: }
	__asm { mov byte ptr [esi + 0x58], 1 }
	__asm { L_008456b3: }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x60], eax }
	__asm { mov eax, dword ptr [edi + 0x64] }
	__asm { mov dword ptr [esi + 0x64], eax }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { mov dword ptr [esi + 0x68], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00845f00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00845810
extern "C" __declspec(naked) void asm_00845810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27518 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x38] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
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
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00845f00 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_008458c8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008458c8: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_008458eb }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008458eb: }
	__asm { cmp dword ptr [ebp + 0x4c], 0x10 }
	__asm { mov dword ptr [ebp + 0x34], 0xf }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { mov byte ptr [ebp + 0x20], 0 }
	__asm { jb L_0084590e }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0084590e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" void fn_00846010();
// FUNCTION: ROBLOXSTUDIO 0x00845930
extern "C" __declspec(naked) void asm_00845930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f468 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_008459ae }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00845997 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_008459ae }
	__asm { L_00845997: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008459ae: }
	__asm { mov ecx, esi }
	__asm { call fn_00846010 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008459dc }
	__asm { test al, 1 }
	__asm { jne L_008459dc }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008459dc }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008459dc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00403540();
extern "C" void fn_00846230();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00845b40
extern "C" __declspec(naked) void asm_00845b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27540 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 1 }
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
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00846230 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { jb L_00845bd8 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00845bd8: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_00845be9 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00845be9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00845c00
extern "C" __declspec(naked) void asm_00845c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27570 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00845c7f }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00845c7f: }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00845cc7 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00845cc7: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_00845cea }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00845cea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

// FUNCTION: ROBLOXSTUDIO 0x00845da0
extern "C" __declspec(naked) void asm_00845da0()
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
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00845e13 }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_00845dfc }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { jmp L_00845e13 }
	__asm { L_00845dfc: }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 0xc }
	__asm { L_00845e13: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00845e38 }
	__asm { test cl, 1 }
	__asm { jne L_00845e38 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00845e38 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00845e38: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00403540();
extern "C" void fn_00845c00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00845f00
extern "C" __declspec(naked) void asm_00845f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd275a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 2 }
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
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00845c00 }
	__asm { lea ecx, [esi + 0x30] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x38] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00845fb6 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00845fb6: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_00845fd9 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00845fd9: }
	__asm { cmp dword ptr [ebp + 0x4c], 0x10 }
	__asm { mov dword ptr [ebp + 0x34], 0xf }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { mov byte ptr [ebp + 0x20], 0 }
	__asm { jb L_00845ffc }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00845ffc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" void fn_00869410();
// FUNCTION: ROBLOXSTUDIO 0x00846010
extern "C" __declspec(naked) void asm_00846010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f468 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0084608b }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00846074 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_0084608b }
	__asm { L_00846074: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0084608b: }
	__asm { mov ecx, esi }
	__asm { call fn_00869410 }
	__asm { mov al, byte ptr [ebp + 0x2c] }
	__asm { mov byte ptr [esi + 0x28], al }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008460bf }
	__asm { test al, 1 }
	__asm { jne L_008460bf }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008460bf }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008460bf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00846230
extern "C" __declspec(naked) void asm_00846230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53870 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
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
	__asm { jb L_008462b2 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008462b2: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { jb L_008462cf }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008462cf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

// FUNCTION: ROBLOXSTUDIO 0x008462f0
extern "C" __declspec(naked) void asm_008462f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_00846359 }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_00846345 }
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
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00846345: }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00846359: }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006c54a0();
// FUNCTION: ROBLOXSTUDIO 0x00846370
extern "C" __declspec(naked) void asm_00846370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41938 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { test ecx, ecx }
	__asm { je L_008463df }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_008463cb }
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
	__asm { jmp L_008463df }
	__asm { L_008463cb: }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008463df: }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006c54a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_004038a0();
extern "C" void fn_007cb440();
extern "C" void fn_00826b00();
// FUNCTION: ROBLOXSTUDIO 0x008474a0
extern "C" __declspec(naked) void asm_008474a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { jne L_008474dc }
	__asm { xor ecx, ecx }
	__asm { jmp L_008474ec }
	__asm { L_008474dc: }
	__asm { mov ecx, edx }
	__asm { push edi }
	__asm { lea edi, [ecx + 1] }
	__asm { L_008474e2: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_008474e2 }
	__asm { sub ecx, edi }
	__asm { pop edi }
	__asm { L_008474ec: }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb440 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_00826b00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe5d9b4 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_00e101c8[];
extern "C" void fn_0043bf70();
extern "C" void fn_0043ee40();
extern "C" void fn_006b9b20();
extern "C" void fn_006bc930();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x008475a0
extern "C" __declspec(naked) void asm_008475a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd27a98 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_008475f4 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_008475d0 }
	__asm { call fn_0043ee40 }
	__asm { L_008475d0: }
	__asm { test eax, eax }
	__asm { je L_008475f4 }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_008475f4 }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043bf70 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_008475f4 }
	__asm { lea eax, [ebx - 0x1c] }
	__asm { jmp L_008475f6 }
	__asm { L_008475f4: }
	__asm { xor eax, eax }
	__asm { L_008475f6: }
	__asm { mov dword ptr [edi], eax }
	__asm { test eax, eax }
	__asm { je L_00847656 }
	__asm { add eax, 0xd90 }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0xcc0 }
	__asm { push 1 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006bc930 }
	__asm { add esp, 8 }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e101c8] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [ecx + 0xcc8], eax }
	__asm { test esi, esi }
	__asm { je L_0084763d }
	__asm { call fn_006b9b20 }
	__asm { L_0084763d: }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + 0xcc4], 0 }
	__asm { jle L_0084764d }
	__asm { call fn_006b9b20 }
	__asm { L_0084764d: }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e101b0] }
	__asm { L_00847656: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008476d0
extern "C" __declspec(naked) void asm_008476d0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x3c] }
	__asm { test esi, esi }
	__asm { je L_00847705 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008476eb }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008476eb: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00847705: }
	__asm { push dword ptr [edi + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { mov esi, dword ptr [edi + 0x34] }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_00847741 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00847727 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00847727: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00847741: }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { test esi, esi }
	__asm { je L_00847772 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00847758 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00847758: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00847772: }
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

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00847790
extern "C" __declspec(naked) void asm_00847790()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x40] }
	__asm { test esi, esi }
	__asm { je L_008477c5 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008477ab }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008477ab: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008477c5: }
	__asm { mov esi, dword ptr [edi + 0x3c] }
	__asm { test esi, esi }
	__asm { je L_008477f6 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008477dc }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008477dc: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008477f6: }
	__asm { mov esi, dword ptr [edi + 0x38] }
	__asm { test esi, esi }
	__asm { je L_00847827 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0084780d }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0084780d: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00847827: }
	__asm { mov esi, dword ptr [edi + 0x34] }
	__asm { test esi, esi }
	__asm { je L_00847858 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0084783e }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0084783e: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00847858: }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { test esi, esi }
	__asm { je L_00847889 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0084786f }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0084786f: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00847889: }
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

extern "C" char g_00e10510[];
extern "C" char g_00e10514[];
// FUNCTION: ROBLOXSTUDIO 0x00847c70
extern "C" __declspec(naked) void asm_00847c70()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xe61568 }
	__asm { mov dword ptr [esi + 0x14], 0xe61574 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x28], 0xe6157c }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe61554 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00847cc1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00847cc1 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00847cc1: }
	__asm { mov dword ptr [esi], 0xe5d3b8 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10514] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xe614f8 }
	__asm { mov dword ptr [esi + 0x14], 0xe61504 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x28], 0xe6150c }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe614e4 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00847d21 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00847d21 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00847d21: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
extern "C" void fn_00422570();
extern "C" void fn_004225e0();
// FUNCTION: ROBLOXSTUDIO 0x00849690
extern "C" __declspec(naked) void asm_00849690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27ef0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { jne L_008496e2 }
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
	__asm { L_008496e2: }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0x28] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { call fn_004225e0 }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00422570 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00849745 }
	__asm { test al, 1 }
	__asm { jne L_0084973e }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0084973e }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0084973e: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_00849745: }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0084976c }
	__asm { test al, 1 }
	__asm { jne L_0084976c }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0084976c }
	__asm { lea ecx, [ebp + 0x30] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0084976c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" char g_00e10474[];
extern "C" char g_00e10478[];
extern "C" char g_00e1048c[];
extern "C" char g_00e10490[];
extern "C" void fn_0084ae20();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0084aa00
extern "C" __declspec(naked) void asm_0084aa00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd281de }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { test ebx, ebx }
	__asm { je L_0084aabb }
	__asm { cmp dword ptr [ebx], 0 }
	__asm { jne L_0084aabb }
	__asm { push edi }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0084aaa7 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { jne L_0084aa62 }
	__asm { mov eax, 0xf12f2d }
	__asm { jmp L_0084aa6b }
	__asm { L_0084aa62: }
	__asm { add ecx, 0x18 }
	__asm { call dword ptr [g_00e1048c] }
	__asm { L_0084aa6b: }
	__asm { push esi }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { call dword ptr [g_00e10474] }
	__asm { mov esi, eax }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e10490] }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edi], 0xe5d04c }
	__asm { call fn_0084ae20 }
	__asm { pop esi }
	__asm { jmp L_0084aaa9 }
	__asm { L_0084aaa7: }
	__asm { xor edi, edi }
	__asm { L_0084aaa9: }
	__asm { test byte ptr [ebp - 0x10], 1 }
	__asm { mov dword ptr [ebx], edi }
	__asm { pop edi }
	__asm { je L_0084aabb }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { call dword ptr [g_00e10478] }
	__asm { L_0084aabb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 4 }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10274[];
extern "C" char g_00e10398[];
extern "C" char g_00e103e0[];
extern "C" char g_00e1045c[];
extern "C" char g_00e104a4[];
extern "C" char g_00e104a8[];
extern "C" char g_00e104ac[];
// FUNCTION: ROBLOXSTUDIO 0x0084bef0
extern "C" __declspec(naked) void asm_0084bef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, edx }
	__asm { and eax, ecx }
	__asm { cmp eax, -1 }
	__asm { je L_0084bf12 }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10274] }
	__asm { L_0084bf12: }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, edx }
	__asm { and eax, ecx }
	__asm { cmp eax, -1 }
	__asm { je L_0084bf2b }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104ac] }
	__asm { L_0084bf2b: }
	__asm { mov al, byte ptr [esi + 0x10] }
	__asm { test al, al }
	__asm { je L_0084bf3b }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e103e0] }
	__asm { L_0084bf3b: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104a8] }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10398] }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104a4] }
	__asm { cmp byte ptr [esi + 0x20], 0 }
	__asm { je L_0084bf69 }
	__asm { lea eax, [esi + 0x24] }
	__asm { jmp L_0084bf70 }
	__asm { L_0084bf69: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_0084bf95 }
	__asm { L_0084bf70: }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e1045c] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0084bf95 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_0084bf95 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_0084bf95: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_0048e3f0();
extern "C" void fn_007d5550();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0084c6b0
extern "C" __declspec(naked) void asm_0084c6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd28398 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { movzx eax, byte ptr [eax] }
	__asm { push eax }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp + 0x20], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_007d5550 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_0048e3f0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_0084c78b }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0084c78b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0084c7a0
extern "C" __declspec(naked) void asm_0084c7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd283d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x1c], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_004881d0();
extern "C" void fn_004b6780();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0084cc90
extern "C" __declspec(naked) void asm_0084cc90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_0084cd12 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0084ccb3 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_0084ccb5 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_0084ccb5 }
	__asm { L_0084ccb3: }
	__asm { mov eax, ecx }
	__asm { L_0084ccb5: }
	__asm { test eax, eax }
	__asm { je L_0084cd12 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0084cd12 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0084cd12 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0084cd12 }
	__asm { call fn_004881d0 }
	__asm { test eax, eax }
	__asm { je L_0084cd12 }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_004b6780 }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { setne bl }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { jb L_0084cd0a }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0084cd0a: }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0084cd12: }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0084d790
extern "C" __declspec(naked) void asm_0084d790()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, 0x92492493 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { sub ecx, dword ptr [esi] }
	__asm { xor ebx, ebx }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 6 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { add eax, edx }
	__asm { je L_0084d814 }
	__asm { xor edi, edi }
	__asm { L_0084d7b3: }
	__asm { cmp dword ptr [esi + 0x18], 0 }
	__asm { je L_0084d7db }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [edi + eax] }
	__asm { test ecx, ecx }
	__asm { js L_0084d7db }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { mov eax, ecx }
	__asm { shr eax, 5 }
	__asm { and ecx, 0x1f }
	__asm { lea edx, [edx + eax*4] }
	__asm { mov eax, 1 }
	__asm { shl eax, cl }
	__asm { test dword ptr [edx], eax }
	__asm { jne L_0084d7f4 }
	__asm { L_0084d7db: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 4 }
	__asm { add eax, edi }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { jb L_0084d7f1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0084d7f1: }
	__asm { mov byte ptr [eax], 0 }
	__asm { L_0084d7f4: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { sub ecx, dword ptr [esi] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 6 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { inc ebx }
	__asm { add eax, edx }
	__asm { add edi, 0x70 }
	__asm { cmp ebx, eax }
	__asm { jb L_0084d7b3 }
	__asm { L_0084d814: }
	__asm { cmp dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov byte ptr [esi + 0x28], 0 }
	__asm { je L_0084d877 }
	__asm { mov ebx, dword ptr [esi + 0x24] }
	__asm { test ebx, ebx }
	__asm { jle L_0084d877 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { nop }
	__asm { L_0084d830: }
	__asm { mov edx, dword ptr [esi + 0x20] }
	__asm { test edx, edx }
	__asm { jns L_0084d852 }
	__asm { mov eax, edx }
	__asm { neg eax }
	__asm { je L_0084d852 }
	__asm { or eax, 0xffffffff }
	__asm { sub eax, edx }
	__asm { shr eax, 5 }
	__asm { mov edi, ecx }
	__asm { lea eax, [eax*4 + 4] }
	__asm { sub edi, eax }
	__asm { jmp L_0084d85a }
	__asm { L_0084d852: }
	__asm { mov eax, edx }
	__asm { shr eax, 5 }
	__asm { lea edi, [ecx + eax*4] }
	__asm { L_0084d85a: }
	__asm { mov ecx, edx }
	__asm { and ecx, 0x1f }
	__asm { mov eax, 1 }
	__asm { shl eax, cl }
	__asm { test dword ptr [edi], eax }
	__asm { je L_0084d877 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { lea eax, [edx + 1] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { cmp eax, ebx }
	__asm { jl L_0084d830 }
	__asm { L_0084d877: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e10294[];
extern "C" char g_00e102ec[];
extern "C" char g_00e102f8[];
extern "C" char g_00e102fc[];
// FUNCTION: ROBLOXSTUDIO 0x0084dd50
extern "C" __declspec(naked) void asm_0084dd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10294] }
	__asm { mov ecx, esi }
	__asm { mov edi, eax }
	__asm { call dword ptr [g_00e102fc] }
	__asm { test edi, edi }
	__asm { je L_0084dda6 }
	__asm { cmp edi, eax }
	__asm { je L_0084dda6 }
	__asm { push 2 }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { L_0084dda6: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov ecx, esi }
	__asm { mov edi, eax }
	__asm { call dword ptr [g_00e102f8] }
	__asm { test edi, edi }
	__asm { je L_0084ddf4 }
	__asm { cmp edi, eax }
	__asm { je L_0084ddf4 }
	__asm { push 1 }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { L_0084ddf4: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_004038a0();
extern "C" void fn_00960b90();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0084e040
extern "C" __declspec(naked) void asm_0084e040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd529c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { push 4 }
	__asm { mov esi, ecx }
	__asm { push 0x101d48c }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x88] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00960b90 }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_0084e0af }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0084e0af: }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { test esi, esi }
	__asm { jne L_0084e0ee }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0xe6037c }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x1c], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_0084e0ee: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_004039a0();
extern "C" void fn_0084cc90();
extern "C" void fn_00960b90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0084e510
extern "C" __declspec(naked) void asm_0084e510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd467c0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0xc68], 0 }
	__asm { jle L_0084e61b }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_0084e5a5 }
	__asm { push esi }
	__asm { call fn_0084cc90 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_0084e5a5 }
	__asm { push 0x102abc4 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_004039a0 }
	__asm { mov ecx, dword ptr [esi + 0xba0] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { add ecx, 0x150 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00960b90 }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_0084e591 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0084e591: }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { jmp L_0084e60e }
	__asm { L_0084e5a5: }
	__asm { push 0xe }
	__asm { push 0x102aba0 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov ecx, dword ptr [esi + 0xba0] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { add ecx, 0x150 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00960b90 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_0084e5fc }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0084e5fc: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { L_0084e60e: }
	__asm { test esi, esi }
	__asm { je L_0084e61b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { L_0084e61b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101c8[];
extern "C" char g_012f945c[];
extern "C" char g_012f9464[];
extern "C" void fn_00403160();
extern "C" void fn_004115f0();
extern "C" void fn_008305c0();
extern "C" void fn_0083f8f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0084ed00
extern "C" __declspec(naked) void asm_0084ed00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2950e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x85ea30 }
	__asm { push 0x12f9468 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f9464] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0084ed7d }
	__asm { or eax, 1 }
	__asm { push esi }
	__asm { mov dword ptr [g_012f9464], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0083f8f0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { mov ecx, 0x12f9460 }
	__asm { mov dword ptr [g_012f945c], esi }
	__asm { call fn_008305c0 }
	__asm { push esi }
	__asm { push esi }
	__asm { push 0x12f945c }
	__asm { call fn_00403160 }
	__asm { push 0xdea860 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { L_0084ed7d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f945c }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e101c8] }
	__asm { mov ecx, dword ptr [esi + 0xcc8] }
	__asm { xor edx, edx }
	__asm { cmp ecx, eax }
	__asm { sete al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d5d30();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x0084ef50
extern "C" __declspec(naked) void asm_0084ef50()
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
	__asm { call fn_007d5550 }
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
	__asm { je L_0084efcd }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0084efcd: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0084efe7 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0084efe7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d54e0();
extern "C" void fn_007d5550();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x0084f000
extern "C" __declspec(naked) void asm_0084f000()
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
	__asm { call fn_007d54e0 }
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
	__asm { call fn_007d54e0 }
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
	__asm { je L_0084f07d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0084f07d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0084f097 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0084f097: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007e8dc0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x0084f0b0
extern "C" __declspec(naked) void asm_0084f0b0()
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
	__asm { call fn_007d5390 }
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
	__asm { call fn_007e8dc0 }
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
	__asm { je L_0084f12d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0084f12d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0084f147 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0084f147: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x0084f160
extern "C" __declspec(naked) void asm_0084f160()
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
	__asm { call fn_007d5390 }
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
	__asm { je L_0084f1dd }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0084f1dd: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0084f1f7 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0084f1f7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007e8f80();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x0084f380
extern "C" __declspec(naked) void asm_0084f380()
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
	__asm { call fn_007e8f80 }
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
	__asm { je L_0084f3fd }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0084f3fd: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0084f417 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0084f417: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x0084f430
extern "C" __declspec(naked) void asm_0084f430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4f1cb }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { call fn_007d5550 }
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
	__asm { call fn_007d5550 }
	__asm { lea ecx, [ebp + 0x9c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x98] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_0084f4d1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0084f4d1: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0084f4e8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0084f4e8: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0084f508 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0084f508: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e102d4[];
extern "C" char g_00e102e0[];
extern "C" char g_00e10318[];
extern "C" char g_00e1031c[];
extern "C" char g_00e1037c[];
extern "C" void fn_00402150();
extern "C" void fn_00426140();
extern "C" void fn_00426760();
extern "C" void fn_00427900();
extern "C" void fn_0077c700();
// FUNCTION: ROBLOXSTUDIO 0x00850cc0
extern "C" __declspec(naked) void asm_00850cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2877e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x100 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov dword ptr [ebp - 0xbc], 0x10065ec }
	__asm { call dword ptr [g_00e102d4] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xac] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xbc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x10], 3 }
	__asm { call dword ptr [g_00e1037c] }
	__asm { mov eax, dword ptr [ebp - 0xbc] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xbc], 0xe1b728 }
	__asm { mov eax, dword ptr [ebp - 0xbc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x60] }
	__asm { mov dword ptr [ebp + ecx - 0xc0], eax }
	__asm { lea eax, [ebp - 0xac] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 0xac], 0xe1827c }
	__asm { lea edi, [eax + 0x10] }
	__asm { jb L_00850d9c }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00850d9c: }
	__asm { push 2 }
	__asm { push dword ptr [edi] }
	__asm { lea ecx, [ebp - 0xac] }
	__asm { push eax }
	__asm { call fn_00426760 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x10c] }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { call fn_00427900 }
	__asm { mov ecx, eax }
	__asm { cmp dword ptr [edi], 0x100 }
	__asm { push 0 }
	__asm { seta al }
	__asm { movzx eax, al }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0xbc] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_0077c700 }
	__asm { lea ecx, [ebp - 0x10c] }
	__asm { call fn_00402150 }
	__asm { mov eax, dword ptr [ebp - 0xbc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xbc], 0xe1b728 }
	__asm { mov eax, dword ptr [ebp - 0xbc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x60] }
	__asm { mov dword ptr [ebp + ecx - 0xc0], eax }
	__asm { lea ecx, [ebp - 0xac] }
	__asm { mov dword ptr [ebp - 0xac], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [ebp - 0xac] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [ebp - 0xa4] }
	__asm { call dword ptr [g_00e102e0] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_00832f20();
extern "C" void fn_008331a0();
// FUNCTION: ROBLOXSTUDIO 0x00851160
extern "C" __declspec(naked) void asm_00851160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jne L_008511a4 }
	__asm { cmp edx, dword ptr [edi + 4] }
	__asm { jne L_008511a4 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00832f20 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_008511a4: }
	__asm { cmp eax, edx }
	__asm { je L_008511de }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push edx }
	__asm { call fn_008331a0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_00832f20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x20 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_008511de: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}
