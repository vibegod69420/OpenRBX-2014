// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00825140();
extern "C" void fn_00940200();
extern "C" void fn_009427b0();
// FUNCTION: ROBLOXSTUDIO 0x0093f990
extern "C" __declspec(naked) void asm_0093f990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd375e9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00940200 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe8373c }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp + 0x20], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_009427b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012ecd5c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0093fed0
extern "C" __declspec(naked) void asm_0093fed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd376b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012ecd5c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0093ff4a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ecd5c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe64820 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ecc30 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7640 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0093ff4a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12ecc30 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe83764 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0093ffc2 }
	__asm { push 0x1225fac }
	__asm { mov ecx, 0x1225fac }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0093ffc2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0093ffad }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0093ffc2 }
	__asm { L_0093ffad: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0093ffc2: }
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
extern "C" char g_012ecfbc[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0093ffe0
extern "C" __declspec(naked) void asm_0093ffe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd376d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012ecfbc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0094005a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ecfbc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x10036e4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ece90 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0094005a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12ece90 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe83624 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009400d2 }
	__asm { push 0x1225f74 }
	__asm { mov ecx, 0x1225f74 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009400d2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009400bd }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009400d2 }
	__asm { L_009400bd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009400d2: }
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
extern "C" char g_012ed0ec[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009400f0
extern "C" __declspec(naked) void asm_009400f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd376f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012ed0ec] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0094016a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ed0ec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe70460 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ecfc0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0094016a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12ecfc0 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe835fc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009401e2 }
	__asm { push 0x1225f54 }
	__asm { mov ecx, 0x1225f54 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009401e2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009401cd }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009401e2 }
	__asm { L_009401cd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009401e2: }
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
extern "C" char g_012ece8c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00940200
extern "C" __declspec(naked) void asm_00940200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37716 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012ece8c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0094027a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ece8c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x10348b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ecd60 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0094027a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12ecd60 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe83730 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009402f2 }
	__asm { push 0x1225f90 }
	__asm { mov ecx, 0x1225f90 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009402f2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009402dd }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009402f2 }
	__asm { L_009402dd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009402f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_004115f0();
extern "C" void fn_0043f5a0();
extern "C" void fn_005e8b40();
extern "C" void fn_0093fbf0();
// FUNCTION: ROBLOXSTUDIO 0x00940a00
extern "C" __declspec(naked) void asm_00940a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37797 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_0093fbf0 }
	__asm { mov dword ptr [edi + 0x64], 0xe83068 }
	__asm { mov dword ptr [edi], 0xe834d4 }
	__asm { mov dword ptr [edi + 4], 0xe83558 }
	__asm { mov dword ptr [edi + 0x18], 0xe83560 }
	__asm { mov dword ptr [edi + 0x1c], 0xe8356c }
	__asm { mov dword ptr [edi + 0x64], 0xe8357c }
	__asm { mov dword ptr [edi + 0x7c], 0xf }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { lea ecx, [edi + 0x8c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x8c], 0 }
	__asm { mov dword ptr [edi + 0x90], 0 }
	__asm { call fn_005e8b40 }
	__asm { mov dword ptr [edi + 0x8c], eax }
	__asm { mov dword ptr [edi + 0x94], 0 }
	__asm { mov dword ptr [edi + 0x98], 0 }
	__asm { lea eax, [edi + 0x9c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043f5a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_007b00e0();
// FUNCTION: ROBLOXSTUDIO 0x00940cc0
extern "C" __declspec(naked) void asm_00940cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6bdf0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { lea esi, [ebx + 0x74] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00940d3e }
	__asm { add esi, 5 }
	__asm { je L_00940d0e }
	__asm { add esi, -5 }
	__asm { jmp L_00940d10 }
	__asm { L_00940d0e: }
	__asm { xor esi, esi }
	__asm { L_00940d10: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00940d3d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00940d3d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00940d3d: }
	__asm { pop edi }
	__asm { L_00940d3e: }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_007b00e0();
extern "C" void fn_00942d80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00940e50
extern "C" __declspec(naked) void asm_00940e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37797 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 0x9c] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_00940ed1 }
	__asm { add esi, 5 }
	__asm { je L_00940ea1 }
	__asm { add esi, -5 }
	__asm { jmp L_00940ea3 }
	__asm { L_00940ea1: }
	__asm { xor esi, esi }
	__asm { L_00940ea3: }
	__asm { push ebx }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00940ed0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00940ed0 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00940ed0: }
	__asm { pop ebx }
	__asm { L_00940ed1: }
	__asm { xor ecx, ecx }
	__asm { lea eax, [edi + 0x98] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00940ee6 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_00940ee6: }
	__asm { mov eax, dword ptr [edi + 0x8c] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x8c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00942d80 }
	__asm { push dword ptr [edi + 0x8c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [edi + 0x7c], 0x10 }
	__asm { jb L_00940f21 }
	__asm { push dword ptr [edi + 0x68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00940f21: }
	__asm { mov dword ptr [edi + 0x7c], 0xf }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
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
extern "C" void fn_006b9740();
extern "C" void fn_00846f90();
extern "C" void fn_00848ef0();
extern "C" void fn_009435c0();
// FUNCTION: ROBLOXSTUDIO 0x00941b00
extern "C" __declspec(naked) void asm_00941b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd37908 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { push edi }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { mov esi, eax }
	__asm { jne L_00941b44 }
	__asm { mov edi, edi }
	__asm { L_00941b30: }
	__asm { cmp dword ptr [edx + 0x10], edi }
	__asm { jae L_00941b3a }
	__asm { mov edx, dword ptr [edx + 8] }
	__asm { jmp L_00941b3e }
	__asm { L_00941b3a: }
	__asm { mov esi, edx }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_00941b3e: }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { je L_00941b30 }
	__asm { L_00941b44: }
	__asm { cmp esi, eax }
	__asm { je L_00941b50 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { cmp edi, dword ptr [esi + 0x10] }
	__asm { jae L_00941b53 }
	__asm { L_00941b50: }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { L_00941b53: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { lea esi, [ebp + 8] }
	__asm { mov esi, dword ptr [esi] }
	__asm { test cl, cl }
	__asm { je L_00941b9e }
	__asm { cmp esi, eax }
	__asm { jne L_00941b9e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00941b8d }
	__asm { push 0x244 }
	__asm { push 0xe838a0 }
	__asm { push 0xe838e8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00941b9e }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00941b8d: }
	__asm { movzx eax, cl }
	__asm { push 0xe83ba8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00941b9e: }
	__asm { cmp esi, dword ptr [ebx + 0x28] }
	__asm { je L_00941bcf }
	__asm { push 1 }
	__asm { push edi }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00846f90 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009435c0 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00848ef0 }
	__asm { L_00941bcf: }
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
extern "C" void fn_00403540();
extern "C" void fn_006b9740();
extern "C" void fn_009439e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009425f0
extern "C" __declspec(naked) void asm_009425f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57a18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [edi + 0x8c] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [ebx + 0x68] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edx, eax }
	__asm { jne L_00942647 }
	__asm { L_00942633: }
	__asm { cmp dword ptr [ecx + 0x10], esi }
	__asm { jae L_0094263d }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { jmp L_00942641 }
	__asm { L_0094263d: }
	__asm { mov edx, ecx }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_00942641: }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { je L_00942633 }
	__asm { L_00942647: }
	__asm { cmp edx, eax }
	__asm { je L_00942653 }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { cmp esi, dword ptr [edx + 0x10] }
	__asm { jae L_00942656 }
	__asm { L_00942653: }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { L_00942656: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { lea esi, [ebp + 0xc] }
	__asm { mov esi, dword ptr [esi] }
	__asm { test cl, cl }
	__asm { je L_009426a1 }
	__asm { cmp esi, eax }
	__asm { jne L_009426a1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00942690 }
	__asm { push 0x23d }
	__asm { push 0xe838a0 }
	__asm { push 0xe838e8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009426a1 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00942690: }
	__asm { movzx eax, cl }
	__asm { push 0xe83b38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009426a1: }
	__asm { push dword ptr [ebx + 0x68] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push dword ptr [edi + 0x88] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_009439e0 }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_009426ea }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009426ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00942700
extern "C" __declspec(naked) void asm_00942700()
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
	__asm { call fn_007d5710 }
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
	__asm { je L_0094277d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0094277d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00942797 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00942797: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x009427b0
extern "C" __declspec(naked) void asm_009427b0()
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
	__asm { call fn_007d5710 }
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
	__asm { je L_00942851 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00942851: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00942868 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00942868: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00942888 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00942888: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_0078a6b0();
extern "C" void fn_0079b1f0();
extern "C" void fn_007a1be0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00943220
extern "C" __declspec(naked) void asm_00943220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e990 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0079b1f0 }
	__asm { mov ebx, eax }
	__asm { push 0 }
	__asm { lea ecx, [esi + 0x30] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0078a6b0 }
	__asm { add esp, 0x20 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_0094327f }
	__asm { add ecx, -0x1c }
	__asm { jmp L_00943281 }
	__asm { L_0094327f: }
	__asm { xor ecx, ecx }
	__asm { L_00943281: }
	__asm { push ebx }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push ecx }
	__asm { call fn_007a1be0 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jb L_009432aa }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009432aa: }
	__asm { mov eax, dword ptr [ebp - 0x64] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009432d6 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009432d6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0078a6b0();
extern "C" void fn_0083e860();
extern "C" void fn_0083e9e0();
extern "C" void fn_00941d30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009433c0
extern "C" __declspec(naked) void asm_009433c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37a68 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x38] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0083e9e0 }
	__asm { mov ebx, eax }
	__asm { push 0 }
	__asm { lea ecx, [esi + 0x34] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0083e860 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { push 0 }
	__asm { lea ecx, [esi + 0x30] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0078a6b0 }
	__asm { add esp, 0x30 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test ecx, ecx }
	__asm { je L_00943436 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_00943438 }
	__asm { L_00943436: }
	__asm { xor ecx, ecx }
	__asm { L_00943438: }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push ecx }
	__asm { call fn_00941d30 }
	__asm { add esp, 0x1c }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jb L_00943464 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00943464: }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { jb L_00943487 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00943487: }
	__asm { cmp dword ptr [ebp - 0x40], 0x10 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { jb L_009434aa }
	__asm { push dword ptr [ebp - 0x54] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009434aa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10410[];
extern "C" void fn_00944eb0();
// FUNCTION: ROBLOXSTUDIO 0x00944e00
extern "C" __declspec(naked) void asm_00944e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37c10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 1 }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e10410] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00944e5a }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_00944e5a: }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, edi }
	__asm { call fn_00944eb0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [edx + 8] }
	__asm { test eax, eax }
	__asm { je L_00944e90 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_00944e90: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" char g_00e105ac[];
extern "C" void fn_004038a0();
extern "C" void fn_0043ee70();
extern "C" void fn_0077d070();
extern "C" void fn_00781520();
extern "C" void fn_00945210();
// FUNCTION: ROBLOXSTUDIO 0x00944eb0
extern "C" __declspec(naked) void asm_00944eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37c50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x64 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00945210 }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { je L_00944f2f }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00944f1c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00944f1c }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_00944f1c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00944f2f: }
	__asm { push 0x1c }
	__asm { push 0xe4f7e8 }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0x13164e0 }
	__asm { mov ecx, 0x12be4a4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e105ac] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { call fn_0043ee70 }
	__asm { push 0xe4f7dc }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x70] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0043ee70 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { jb L_00944f94 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00944f94: }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call dword ptr [g_00e10528] }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp - 0x28], 0xe4efe8 }
	__asm { call fn_0077d070 }
	__asm { push 0x28d }
	__asm { push 0xe4f520 }
	__asm { push 0xe83f28 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00781520 }
}

extern "C" char g_00e10528[];
extern "C" char g_00e105ac[];
extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_0043ee70();
extern "C" void fn_0077d070();
extern "C" void fn_00781520();
extern "C" void fn_009452b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00945010
extern "C" __declspec(naked) void asm_00945010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37c93 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x78 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x84] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_009452b0 }
	__asm { cmp byte ptr [ebp - 0x84], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_009450a4 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x80] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { cmp byte ptr [ebp - 0x84], 0 }
	__asm { je L_00945091 }
	__asm { cmp dword ptr [ebp - 0x6c], 0x10 }
	__asm { jb L_00945091 }
	__asm { push dword ptr [ebp - 0x80] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00945091: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009450a4: }
	__asm { push 0x1c }
	__asm { push 0xe4f7e8 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x24], 0xf }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov byte ptr [ebp - 0x38], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0x13164e0 }
	__asm { mov ecx, 0x12be0b8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e105ac] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { call fn_0043ee70 }
	__asm { push 0xe4f7dc }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0043ee70 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { jb L_00945113 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00945113: }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e10528] }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp - 0x20], 0xe4efe8 }
	__asm { call fn_0077d070 }
	__asm { push 0x28d }
	__asm { push 0xe4f520 }
	__asm { push 0xe84170 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00781520 }
}

extern "C" char g_00e10410[];
extern "C" void fn_00945210();
// FUNCTION: ROBLOXSTUDIO 0x00945160
extern "C" __declspec(naked) void asm_00945160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37cd0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 1 }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10410] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_009451c2 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_009451c2: }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_00945210 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_009451fa }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_009451fa: }
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

extern "C" void fn_00690120();
extern "C" void fn_006901e0();
// FUNCTION: ROBLOXSTUDIO 0x00945510
extern "C" __declspec(naked) void asm_00945510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { cmp dword ptr [esi + 4], ecx }
	__asm { jb L_00945552 }
	__asm { test ecx, ecx }
	__asm { jne L_00945538 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push 0x200 }
	__asm { mov dword ptr [esi + 8], 0x10 }
	__asm { call fn_00690120 }
	__asm { jmp L_00945550 }
	__asm { L_00945538: }
	__asm { lea eax, [ecx + ecx] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { shl eax, 5 }
	__asm { push eax }
	__asm { shl ecx, 5 }
	__asm { push ecx }
	__asm { push dword ptr [esi] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_006901e0 }
	__asm { L_00945550: }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00945552: }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { shl edx, 5 }
	__asm { add edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { shl edx, 5 }
	__asm { add edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { inc dword ptr [esi + 4] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10530[];
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00945ad0
extern "C" __declspec(naked) void asm_00945ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0x300005 }
	__asm { mov edx, dword ptr [ebx] }
	__asm { add edi, 4 }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { and edi, 0xfffffffc }
	__asm { add eax, edi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { cmp eax, dword ptr [edx] }
	__asm { jbe L_00945b23 }
	__asm { cmp dword ptr [ebx + 4], edi }
	__asm { mov esi, edi }
	__asm { cmova esi, dword ptr [ebx + 4] }
	__asm { lea eax, [esi + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebx], eax }
	__asm { L_00945b23: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { lea edx, [ecx + 0xc] }
	__asm { add edx, eax }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, edi }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { push edx }
	__asm { mov dword ptr [esi], edx }
	__asm { mov dword ptr [esi + 4], ebx }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 0xc }
	__asm { mov byte ptr [ebx + eax], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10638[];
extern "C" void fn_006901e0();
extern "C" void fn_009459d0();
// FUNCTION: ROBLOXSTUDIO 0x00945b60
extern "C" __declspec(naked) void asm_00945b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { sub eax, dword ptr [edi + 0xc] }
	__asm { je L_00945b9d }
	__asm { mov esi, dword ptr [edi + 0x10] }
	__asm { mov eax, dword ptr [esi - 4] }
	__asm { test eax, eax }
	__asm { je L_00945b9a }
	__asm { cmp byte ptr [esi - 8], 0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { je L_00945b87 }
	__asm { push 0x2c }
	__asm { jmp L_00945b95 }
	__asm { L_00945b87: }
	__asm { and al, 1 }
	__asm { neg al }
	__asm { sbb al, al }
	__asm { and al, 0xe }
	__asm { add al, 0x2c }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { L_00945b95: }
	__asm { call fn_009459d0 }
	__asm { L_00945b9a: }
	__asm { inc dword ptr [esi - 4] }
	__asm { L_00945b9d: }
	__asm { mov ebx, dword ptr [edi + 0x10] }
	__asm { lea eax, [ebx + 8] }
	__asm { cmp eax, dword ptr [edi + 0x14] }
	__asm { jb L_00945bd7 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov edx, dword ptr [edi + 0x18] }
	__asm { sub ebx, ecx }
	__asm { lea esi, [edx + edx] }
	__asm { lea eax, [ebx + 8] }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { call fn_006901e0 }
	__asm { lea ecx, [eax + ebx] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi + 0x18], esi }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { L_00945bd7: }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { lea eax, [ecx + 8] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { test ecx, ecx }
	__asm { je L_00945bee }
	__asm { mov byte ptr [ecx], 1 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { L_00945bee: }
	__asm { mov ebx, dword ptr [edi] }
	__asm { mov edx, dword ptr [ebx + 0xc] }
	__asm { lea eax, [edx + 1] }
	__asm { cmp eax, dword ptr [ebx + 0x10] }
	__asm { jb L_00945c2e }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { mov esi, dword ptr [ebx + 0x14] }
	__asm { sub edx, ecx }
	__asm { add esi, esi }
	__asm { lea eax, [edx + 1] }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { call dword ptr [g_00e10638] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add ecx, eax }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [ebx + 0x14], esi }
	__asm { mov dword ptr [ebx + 0xc], ecx }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { L_00945c2e: }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [ecx], 0x5b }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10638[];
extern "C" void fn_006901e0();
extern "C" void fn_009459d0();
// FUNCTION: ROBLOXSTUDIO 0x00945c50
extern "C" __declspec(naked) void asm_00945c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { sub eax, dword ptr [edi + 0xc] }
	__asm { je L_00945c8d }
	__asm { mov esi, dword ptr [edi + 0x10] }
	__asm { mov eax, dword ptr [esi - 4] }
	__asm { test eax, eax }
	__asm { je L_00945c8a }
	__asm { cmp byte ptr [esi - 8], 0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { je L_00945c77 }
	__asm { push 0x2c }
	__asm { jmp L_00945c85 }
	__asm { L_00945c77: }
	__asm { and al, 1 }
	__asm { neg al }
	__asm { sbb al, al }
	__asm { and al, 0xe }
	__asm { add al, 0x2c }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { L_00945c85: }
	__asm { call fn_009459d0 }
	__asm { L_00945c8a: }
	__asm { inc dword ptr [esi - 4] }
	__asm { L_00945c8d: }
	__asm { mov ebx, dword ptr [edi + 0x10] }
	__asm { lea eax, [ebx + 8] }
	__asm { cmp eax, dword ptr [edi + 0x14] }
	__asm { jb L_00945cc7 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov edx, dword ptr [edi + 0x18] }
	__asm { sub ebx, ecx }
	__asm { lea esi, [edx + edx] }
	__asm { lea eax, [ebx + 8] }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { call fn_006901e0 }
	__asm { lea ecx, [eax + ebx] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi + 0x18], esi }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { L_00945cc7: }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { lea eax, [ecx + 8] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { test ecx, ecx }
	__asm { je L_00945cde }
	__asm { mov byte ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { L_00945cde: }
	__asm { mov ebx, dword ptr [edi] }
	__asm { mov edx, dword ptr [ebx + 0xc] }
	__asm { lea eax, [edx + 1] }
	__asm { cmp eax, dword ptr [ebx + 0x10] }
	__asm { jb L_00945d1e }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { mov esi, dword ptr [ebx + 0x14] }
	__asm { sub edx, ecx }
	__asm { add esi, esi }
	__asm { lea eax, [edx + 1] }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { call dword ptr [g_00e10638] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add ecx, eax }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [ebx + 0x14], esi }
	__asm { mov dword ptr [ebx + 0xc], ecx }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { L_00945d1e: }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [ecx], 0x7b }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105a8[];
extern "C" char g_00e10638[];
// FUNCTION: ROBLOXSTUDIO 0x009460b0
extern "C" __declspec(naked) void asm_009460b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x70 }
	__asm { fld qword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 0x70] }
	__asm { fstp qword ptr [esp] }
	__asm { push 0x1016ac0 }
	__asm { mov esi, ecx }
	__asm { push 0x64 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { call dword ptr [g_00e105a8] }
	__asm { add esp, 0x14 }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { test eax, eax }
	__asm { jle L_00946143 }
	__asm { push edi }
	__asm { L_009460e4: }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov al, byte ptr [ebp + ebx - 0x70] }
	__asm { mov edx, dword ptr [edi + 0xc] }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { lea eax, [edx + 1] }
	__asm { cmp eax, dword ptr [edi + 0x10] }
	__asm { jb L_0094612e }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { sub edx, ecx }
	__asm { add esi, esi }
	__asm { lea eax, [edx + 1] }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { call dword ptr [g_00e10638] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add ecx, eax }
	__asm { add esp, 8 }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi + 0x14], esi }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { mov dword ptr [edi + 0xc], ecx }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { L_0094612e: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { inc ebx }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov al, byte ptr [ebp + 0xf] }
	__asm { mov byte ptr [ecx], al }
	__asm { cmp ebx, dword ptr [ebp - 0xc] }
	__asm { jl L_009460e4 }
	__asm { pop edi }
	__asm { L_00946143: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10638[];
extern "C" void fn_009466c0();
// FUNCTION: ROBLOXSTUDIO 0x00946150
extern "C" __declspec(naked) void asm_00946150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { test edi, edi }
	__asm { jg L_009461ce }
	__asm { jl L_0094616e }
	__asm { test ebx, ebx }
	__asm { jae L_009461ce }
	__asm { L_0094616e: }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { lea eax, [ecx + 1] }
	__asm { cmp eax, dword ptr [edx + 0x10] }
	__asm { jb L_009461bb }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [edx + 0x14] }
	__asm { sub eax, ecx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { inc eax }
	__asm { add esi, esi }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10638] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, eax }
	__asm { add esp, 8 }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [edx + 0x14], esi }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { L_009461bb: }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { neg ebx }
	__asm { lea eax, [ecx + 1] }
	__asm { adc edi, 0 }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov byte ptr [ecx], 0x2d }
	__asm { neg edi }
	__asm { L_009461ce: }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_009466c0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10638[];
extern "C" void fn_00946780();
// FUNCTION: ROBLOXSTUDIO 0x009461e0
extern "C" __declspec(naked) void asm_009461e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov edx, ecx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { test edi, edi }
	__asm { jns L_0094624a }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [edx] }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { lea eax, [ecx + 1] }
	__asm { cmp eax, dword ptr [ebx + 0x10] }
	__asm { jb L_0094623b }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0x14] }
	__asm { sub eax, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { inc eax }
	__asm { add esi, esi }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10638] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { add esp, 8 }
	__asm { add ecx, eax }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [ebx + 0x14], esi }
	__asm { mov dword ptr [ebx + 0xc], ecx }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { pop esi }
	__asm { L_0094623b: }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { neg edi }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov byte ptr [ecx], 0x2d }
	__asm { pop ebx }
	__asm { L_0094624a: }
	__asm { push edi }
	__asm { mov ecx, edx }
	__asm { call fn_00946780 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10638[];
// FUNCTION: ROBLOXSTUDIO 0x00946780
extern "C" __declspec(naked) void asm_00946780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { lea edi, [ebp - 0x14] }
	__asm { L_00946794: }
	__asm { mov eax, 0xcccccccd }
	__asm { mul ecx }
	__asm { shr edx, 3 }
	__asm { mov al, dl }
	__asm { shl al, 2 }
	__asm { inc edi }
	__asm { lea ebx, [eax + edx] }
	__asm { add bl, bl }
	__asm { sub cl, bl }
	__asm { add cl, 0x30 }
	__asm { mov byte ptr [edi - 1], cl }
	__asm { mov ecx, edx }
	__asm { test ecx, ecx }
	__asm { jne L_00946794 }
	__asm { L_009467b7: }
	__asm { mov ebx, dword ptr [esi] }
	__asm { mov al, byte ptr [edi - 1] }
	__asm { mov edx, dword ptr [ebx + 0xc] }
	__asm { dec edi }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { lea eax, [edx + 1] }
	__asm { cmp eax, dword ptr [ebx + 0x10] }
	__asm { jb L_00946801 }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { mov esi, dword ptr [ebx + 0x14] }
	__asm { sub edx, ecx }
	__asm { add esi, esi }
	__asm { lea eax, [edx + 1] }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { call dword ptr [g_00e10638] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add ecx, eax }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [ebx + 0x14], esi }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebx + 0xc], ecx }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { L_00946801: }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { mov byte ptr [ecx], al }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmp edi, eax }
	__asm { jne L_009467b7 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e0e2c[];
extern "C" void fn_00792cc0();
extern "C" void fn_00792cf0();
extern "C" void fn_00825140();
extern "C" void fn_00947490();
extern "C" void fn_00948430();
// FUNCTION: ROBLOXSTUDIO 0x009471f0
extern "C" __declspec(naked) void asm_009471f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d268 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [g_012e0e2c] }
	__asm { mov ecx, edi }
	__asm { call fn_00792cc0 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00947281 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { L_00947227: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00947490 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00947294 }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00948430 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00792cf0 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0094727d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0094727d: }
	__asm { test esi, esi }
	__asm { jne L_00947227 }
	__asm { L_00947281: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00947294: }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009472ae }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009472ae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1027c[];
extern "C" char g_00e10338[];
extern "C" char g_00e1033c[];
extern "C" void fn_0042ba00();
extern "C" void fn_0048b440();
extern "C" void fn_0048b5f0();
extern "C" void fn_0048eb20();
extern "C" void fn_0048eee0();
extern "C" void fn_00903cf0();
extern "C" void fn_009043e0();
extern "C" void fn_00947e60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00947d30
extern "C" __declspec(naked) void asm_00947d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37ea0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edx] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push edi }
	__asm { add ecx, edx }
	__asm { call dword ptr [g_00e1027c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_00903cf0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x34], 0xe57b18 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_0048eb20 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_009043e0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_00947dc7 }
	__asm { mov ecx, edi }
	__asm { call fn_0048b440 }
	__asm { push edi }
	__asm { call fn_0048b5f0 }
	__asm { add esp, 4 }
	__asm { L_00947dc7: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00947e60 }
	__asm { add esp, 8 }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00947ded }
	__asm { mov ecx, esi }
	__asm { call fn_0048b440 }
	__asm { push esi }
	__asm { call fn_0048b5f0 }
	__asm { add esp, 4 }
	__asm { L_00947ded: }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_0048eee0 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0042ba00 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10338] }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { call dword ptr [g_00e1033c] }
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

extern "C" void fn_00426c50();
// FUNCTION: ROBLOXSTUDIO 0x00948430
extern "C" __declspec(naked) void asm_00948430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd428b2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { cmp ebx, ecx }
	__asm { jae L_0094849d }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, ebx }
	__asm { ja L_0094849d }
	__asm { sub ebx, eax }
	__asm { mov eax, 0x78787879 }
	__asm { imul ebx }
	__asm { sar edx, 5 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_0094847f }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00426c50 }
	__asm { L_0094847f: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, edi }
	__asm { shl ecx, 4 }
	__asm { add ecx, edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { lea ebx, [eax + ecx*4] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jmp L_009484bb }
	__asm { L_0094849d: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_009484ab }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00426c50 }
	__asm { L_009484ab: }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { L_009484bb: }
	__asm { test edi, edi }
	__asm { je L_009484e7 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { test ecx, ecx }
	__asm { je L_009484e1 }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { lea eax, [ebx + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_009484e1: }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { L_009484e7: }
	__asm { add dword ptr [esi + 4], 0x44 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00948fe0();
// FUNCTION: ROBLOXSTUDIO 0x00948f60
extern "C" __declspec(naked) void asm_00948f60()
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
	__asm { call fn_00948fe0 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_00948fc6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00948fa1 }
	__asm { L_00948f97: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00948f97 }
	__asm { L_00948fa1: }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00948fbc }
	__asm { L_00948fb1: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00948fb1 }
	__asm { L_00948fbc: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00948fc6: }
	__asm { mov dword ptr [edx], edx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009415f0();
extern "C" void fn_00948f10();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00948fe0
extern "C" __declspec(naked) void asm_00948fe0()
{
	__asm { L_00948fe0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38010 }
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
	__asm { jne L_0094905f }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { call fn_00948f10 }
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
	__asm { call L_00948fe0 }
	__asm { mov dword ptr [ebx], eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push dword ptr [eax + 8] }
	__asm { mov ecx, esi }
	__asm { call L_00948fe0 }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { L_0094905f: }
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
	__asm { call fn_009415f0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10510[];
extern "C" void fn_00949900();
extern "C" void fn_0094f5a0();
extern "C" void fn_0094f640();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0094a180
extern "C" __declspec(naked) void asm_0094a180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd381b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push 0x12be40c }
	__asm { push 0x12bf8dc }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0094a21b }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_0094f640 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00949900 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x30], 0xe84698 }
	__asm { mov dword ptr [ebp - 0x24], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094a20f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { L_0094a20f: }
	__asm { mov dword ptr [ebp - 0x30], 0xe1815c }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { jmp L_0094a272 }
	__asm { L_0094a21b: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_0094f5a0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00949900 }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x50], 0xe84698 }
	__asm { mov dword ptr [ebp - 0x44], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094a268 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x40], ecx }
	__asm { L_0094a268: }
	__asm { mov dword ptr [ebp - 0x50], 0xe1815c }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { L_0094a272: }
	__asm { call dword ptr [g_00e10510] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10514[];
extern "C" void fn_00949980();
extern "C" void fn_0094f780();
extern "C" void fn_0094f820();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0094a290
extern "C" __declspec(naked) void asm_0094a290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd381d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push 0x12be40c }
	__asm { push 0x12be488 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0094a324 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_0094f820 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00949980 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x30], 0xe846ac }
	__asm { mov dword ptr [ebp - 0x24], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094a31f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { L_0094a31f: }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { jmp L_0094a374 }
	__asm { L_0094a324: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_0094f780 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00949980 }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x50], 0xe846ac }
	__asm { mov dword ptr [ebp - 0x44], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094a371 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x40], ecx }
	__asm { L_0094a371: }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { L_0094a374: }
	__asm { call dword ptr [g_00e10514] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10510[];
extern "C" void fn_00949a00();
extern "C" void fn_0094f960();
extern "C" void fn_0094fa00();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0094a390
extern "C" __declspec(naked) void asm_0094a390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd381f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push 0x12be40c }
	__asm { push 0x12d6d04 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0094a42b }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_0094fa00 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00949a00 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x30], 0xe846d4 }
	__asm { mov dword ptr [ebp - 0x24], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094a41f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { L_0094a41f: }
	__asm { mov dword ptr [ebp - 0x30], 0xe18150 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { jmp L_0094a482 }
	__asm { L_0094a42b: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_0094f960 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00949a00 }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x50], 0xe846d4 }
	__asm { mov dword ptr [ebp - 0x44], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094a478 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x40], ecx }
	__asm { L_0094a478: }
	__asm { mov dword ptr [ebp - 0x50], 0xe18150 }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { L_0094a482: }
	__asm { call dword ptr [g_00e10510] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10724[];
extern "C" void fn_00949a80();
extern "C" void fn_0094fb40();
extern "C" void fn_0094fbe0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0094a4a0
extern "C" __declspec(naked) void asm_0094a4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38210 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push 0x12be40c }
	__asm { push 0x1227410 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0094a534 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_0094fbe0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00949a80 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x30], 0xe846c0 }
	__asm { mov dword ptr [ebp - 0x24], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094a52f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { L_0094a52f: }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { jmp L_0094a584 }
	__asm { L_0094a534: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_0094fb40 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00949a80 }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x50], 0xe846c0 }
	__asm { mov dword ptr [ebp - 0x44], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094a581 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x40], ecx }
	__asm { L_0094a581: }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { L_0094a584: }
	__asm { call dword ptr [g_00e10724] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10510[];
extern "C" void fn_00949b00();
extern "C" void fn_0094fd20();
extern "C" void fn_0094fdc0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0094a5a0
extern "C" __declspec(naked) void asm_0094a5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38230 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push 0x12be40c }
	__asm { push 0x1227364 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0094a634 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_0094fdc0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00949b00 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x30], 0xe845d0 }
	__asm { mov dword ptr [ebp - 0x24], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094a62f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { L_0094a62f: }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { jmp L_0094a684 }
	__asm { L_0094a634: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_0094fd20 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00949b00 }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x50], 0xe845d0 }
	__asm { mov dword ptr [ebp - 0x44], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094a681 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x40], ecx }
	__asm { L_0094a681: }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { L_0094a684: }
	__asm { call dword ptr [g_00e10510] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10510[];
extern "C" void fn_00949b80();
extern "C" void fn_0094ff10();
extern "C" void fn_0094ffc0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0094a6a0
extern "C" __declspec(naked) void asm_0094a6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38250 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push 0x12be40c }
	__asm { push 0x1227320 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0094a734 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_0094ffc0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00949b80 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x38], 0xe84670 }
	__asm { mov dword ptr [ebp - 0x24], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094a72f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { L_0094a72f: }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { jmp L_0094a784 }
	__asm { L_0094a734: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_0094ff10 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00949b80 }
	__asm { mov ecx, dword ptr [ebp - 0x48] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x60], 0xe84670 }
	__asm { mov dword ptr [ebp - 0x4c], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094a781 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x48] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x48], ecx }
	__asm { L_0094a781: }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { L_0094a784: }
	__asm { call dword ptr [g_00e10510] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10510[];
extern "C" void fn_00949c00();
extern "C" void fn_00950110();
extern "C" void fn_009501b0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0094a7a0
extern "C" __declspec(naked) void asm_0094a7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38270 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push 0x12be40c }
	__asm { push 0x1227384 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0094a834 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_009501b0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00949c00 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x30], 0xe845e4 }
	__asm { mov dword ptr [ebp - 0x24], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094a82f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { L_0094a82f: }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { jmp L_0094a884 }
	__asm { L_0094a834: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_00950110 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00949c00 }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x50], 0xe845e4 }
	__asm { mov dword ptr [ebp - 0x44], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094a881 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x40], ecx }
	__asm { L_0094a881: }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { L_0094a884: }
	__asm { call dword ptr [g_00e10510] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10510[];
extern "C" void fn_00949c80();
extern "C" void fn_009502f0();
extern "C" void fn_00950390();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0094a8a0
extern "C" __declspec(naked) void asm_0094a8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38290 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push 0x12be40c }
	__asm { push 0x11da444 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0094a934 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_00950390 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00949c80 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x30], 0xe845f8 }
	__asm { mov dword ptr [ebp - 0x24], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094a92f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { L_0094a92f: }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { jmp L_0094a984 }
	__asm { L_0094a934: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_009502f0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00949c80 }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x50], 0xe845f8 }
	__asm { mov dword ptr [ebp - 0x44], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094a981 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x40], ecx }
	__asm { L_0094a981: }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { L_0094a984: }
	__asm { call dword ptr [g_00e10510] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10510[];
extern "C" void fn_00949d00();
extern "C" void fn_009504d0();
extern "C" void fn_00950570();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0094a9a0
extern "C" __declspec(naked) void asm_0094a9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd382b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push 0x12be40c }
	__asm { push 0x12cc980 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0094aa34 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_00950570 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00949d00 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x30], 0xe84620 }
	__asm { mov dword ptr [ebp - 0x24], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094aa2f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { L_0094aa2f: }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { jmp L_0094aa84 }
	__asm { L_0094aa34: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_009504d0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00949d00 }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x50], 0xe84620 }
	__asm { mov dword ptr [ebp - 0x44], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094aa81 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x40], ecx }
	__asm { L_0094aa81: }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { L_0094aa84: }
	__asm { call dword ptr [g_00e10510] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10510[];
extern "C" void fn_00949d80();
extern "C" void fn_009506b0();
extern "C" void fn_00950750();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0094aaa0
extern "C" __declspec(naked) void asm_0094aaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd382d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push 0x12be40c }
	__asm { push 0x12cc910 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0094ab34 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_00950750 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00949d80 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x30], 0xe8460c }
	__asm { mov dword ptr [ebp - 0x24], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094ab2f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { L_0094ab2f: }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { jmp L_0094ab84 }
	__asm { L_0094ab34: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_009506b0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00949d80 }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x50], 0xe8460c }
	__asm { mov dword ptr [ebp - 0x44], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094ab81 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x40], ecx }
	__asm { L_0094ab81: }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { L_0094ab84: }
	__asm { call dword ptr [g_00e10510] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10510[];
extern "C" void fn_00949e00();
extern "C" void fn_00950890();
extern "C" void fn_00950930();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0094aba0
extern "C" __declspec(naked) void asm_0094aba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd382f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push 0x12be40c }
	__asm { push 0x12273c8 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0094ac34 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_00950930 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00949e00 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x30], 0xe84648 }
	__asm { mov dword ptr [ebp - 0x24], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094ac2f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { L_0094ac2f: }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { jmp L_0094ac84 }
	__asm { L_0094ac34: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_00950890 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00949e00 }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x50], 0xe84648 }
	__asm { mov dword ptr [ebp - 0x44], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094ac81 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x40], ecx }
	__asm { L_0094ac81: }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { L_0094ac84: }
	__asm { call dword ptr [g_00e10510] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10510[];
extern "C" void fn_00949e80();
extern "C" void fn_00950a70();
extern "C" void fn_00950b10();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0094aca0
extern "C" __declspec(naked) void asm_0094aca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38310 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push 0x12be40c }
	__asm { push 0x12273a8 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0094ad34 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_00950b10 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00949e80 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x30], 0xe84634 }
	__asm { mov dword ptr [ebp - 0x24], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094ad2f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { L_0094ad2f: }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { jmp L_0094ad84 }
	__asm { L_0094ad34: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_00950a70 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00949e80 }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x50], 0xe84634 }
	__asm { mov dword ptr [ebp - 0x44], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094ad81 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x40], ecx }
	__asm { L_0094ad81: }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { L_0094ad84: }
	__asm { call dword ptr [g_00e10510] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10510[];
extern "C" void fn_00949f00();
extern "C" void fn_00950c50();
extern "C" void fn_00950cf0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0094ada0
extern "C" __declspec(naked) void asm_0094ada0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38330 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push 0x12be40c }
	__asm { push 0x12be4e4 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0094ae34 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_00950cf0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00949f00 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x30], 0xe84684 }
	__asm { mov dword ptr [ebp - 0x24], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094ae2f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { L_0094ae2f: }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { jmp L_0094ae84 }
	__asm { L_0094ae34: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_00950c50 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00949f00 }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x50], 0xe84684 }
	__asm { mov dword ptr [ebp - 0x44], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094ae81 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x40], ecx }
	__asm { L_0094ae81: }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { L_0094ae84: }
	__asm { call dword ptr [g_00e10510] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10510[];
extern "C" void fn_00949f80();
extern "C" void fn_00950e30();
extern "C" void fn_00950ed0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0094aea0
extern "C" __declspec(naked) void asm_0094aea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38350 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push 0x12be40c }
	__asm { push 0x12273ec }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0094af34 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_00950ed0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00949f80 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x30], 0xe8465c }
	__asm { mov dword ptr [ebp - 0x24], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094af2f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { L_0094af2f: }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { jmp L_0094af84 }
	__asm { L_0094af34: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_00950e30 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00949f80 }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x50], 0xe8465c }
	__asm { mov dword ptr [ebp - 0x44], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_0094af81 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x40], ecx }
	__asm { L_0094af81: }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { L_0094af84: }
	__asm { call dword ptr [g_00e10510] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094c090
extern "C" __declspec(naked) void asm_0094c090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd384cc }
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
	__asm { je L_0094c0dc }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094c0dc: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe8455c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xe84574 }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094c122 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094c122: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xe84790 }
	__asm { mov dword ptr [esi], 0xe8479c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xe847a4 }
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
// FUNCTION: ROBLOXSTUDIO 0x0094c190
extern "C" __declspec(naked) void asm_0094c190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd384cc }
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
	__asm { je L_0094c1dc }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094c1dc: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe8455c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xe84574 }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094c222 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094c222: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xe84790 }
	__asm { mov dword ptr [esi], 0xe8479c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xe847a4 }
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
// FUNCTION: ROBLOXSTUDIO 0x0094c290
extern "C" __declspec(naked) void asm_0094c290()
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
	__asm { je L_0094c2db }
	__asm { mov dword ptr [esi + 0x28], 0x1016498 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094c2db: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe8455c }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi], 0xe84574 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094c31c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094c31c: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xe84790 }
	__asm { mov dword ptr [esi + 0x14], 0xe8479c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x28], 0xe847a4 }
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
// FUNCTION: ROBLOXSTUDIO 0x0094c370
extern "C" __declspec(naked) void asm_0094c370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3850c }
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
	__asm { je L_0094c3bc }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094c3bc: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe8455c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xe84580 }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094c402 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094c402: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xe846fc }
	__asm { mov dword ptr [esi], 0xe84708 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xe84710 }
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
// FUNCTION: ROBLOXSTUDIO 0x0094c470
extern "C" __declspec(naked) void asm_0094c470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3850c }
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
	__asm { je L_0094c4bc }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094c4bc: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe8455c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xe84580 }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094c502 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094c502: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xe846fc }
	__asm { mov dword ptr [esi], 0xe84708 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xe84710 }
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
// FUNCTION: ROBLOXSTUDIO 0x0094c570
extern "C" __declspec(naked) void asm_0094c570()
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
	__asm { je L_0094c5bb }
	__asm { mov dword ptr [esi + 0x28], 0x1016498 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094c5bb: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe8455c }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi], 0xe84580 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094c5fc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094c5fc: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xe846fc }
	__asm { mov dword ptr [esi + 0x14], 0xe84708 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x28], 0xe84710 }
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
// FUNCTION: ROBLOXSTUDIO 0x0094c650
extern "C" __declspec(naked) void asm_0094c650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3854c }
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
	__asm { je L_0094c69c }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094c69c: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe8455c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xe8458c }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094c6e2 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094c6e2: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xe84758 }
	__asm { mov dword ptr [esi], 0xe84764 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xe8476c }
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
// FUNCTION: ROBLOXSTUDIO 0x0094c750
extern "C" __declspec(naked) void asm_0094c750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3854c }
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
	__asm { je L_0094c79c }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094c79c: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe8455c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xe8458c }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094c7e2 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094c7e2: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xe84758 }
	__asm { mov dword ptr [esi], 0xe84764 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xe8476c }
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
// FUNCTION: ROBLOXSTUDIO 0x0094c850
extern "C" __declspec(naked) void asm_0094c850()
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
	__asm { je L_0094c89b }
	__asm { mov dword ptr [esi + 0x28], 0x1016498 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094c89b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe8455c }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi], 0xe8458c }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094c8dc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094c8dc: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xe84758 }
	__asm { mov dword ptr [esi + 0x14], 0xe84764 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x28], 0xe8476c }
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
// FUNCTION: ROBLOXSTUDIO 0x0094c930
extern "C" __declspec(naked) void asm_0094c930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3858c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094c97c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094c97c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe1815c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094c99e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094c9a0 }
	__asm { L_0094c99e: }
	__asm { xor edx, edx }
	__asm { L_0094c9a0: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094c9be }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0094c9be: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe8491c }
	__asm { mov dword ptr [ebx], 0xe84928 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84930 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094ca07 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094ca09 }
	__asm { L_0094ca07: }
	__asm { xor edi, edi }
	__asm { L_0094ca09: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094ca30
extern "C" __declspec(naked) void asm_0094ca30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd385c4 }
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
	__asm { je L_0094ca7b }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094ca7b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe1815c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094ca9d }
	__asm { add edi, 0xc }
	__asm { jmp L_0094ca9f }
	__asm { L_0094ca9d: }
	__asm { xor edi, edi }
	__asm { L_0094ca9f: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094cab5 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094cab5: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe8491c }
	__asm { mov dword ptr [esi + 0xc], 0xe84928 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84930 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094cb10
extern "C" __declspec(naked) void asm_0094cb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3858c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094cb5c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094cb5c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe1815c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094cb7e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094cb80 }
	__asm { L_0094cb7e: }
	__asm { xor edx, edx }
	__asm { L_0094cb80: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094cb9e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0094cb9e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe8491c }
	__asm { mov dword ptr [ebx], 0xe84928 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84930 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094cbe7 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094cbe9 }
	__asm { L_0094cbe7: }
	__asm { xor edi, edi }
	__asm { L_0094cbe9: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1051c[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094cc10
extern "C" __declspec(naked) void asm_0094cc10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3862d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094cc5c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094cc5c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1051c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094cc78 }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094cc7a }
	__asm { L_0094cc78: }
	__asm { xor edx, edx }
	__asm { L_0094cc7a: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094cc98 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0094cc98: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84940 }
	__asm { mov dword ptr [ebx], 0xe8494c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84954 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094cce1 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094cce3 }
	__asm { L_0094cce1: }
	__asm { xor edi, edi }
	__asm { L_0094cce3: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1051c[];
// FUNCTION: ROBLOXSTUDIO 0x0094cd10
extern "C" __declspec(naked) void asm_0094cd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd385f5 }
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
	__asm { je L_0094cd5b }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094cd5b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1051c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094cd77 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094cd79 }
	__asm { L_0094cd77: }
	__asm { xor edi, edi }
	__asm { L_0094cd79: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094cd8f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094cd8f: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84940 }
	__asm { mov dword ptr [esi + 0xc], 0xe8494c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84954 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1051c[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094cde0
extern "C" __declspec(naked) void asm_0094cde0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3862d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094ce2c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094ce2c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1051c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094ce48 }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094ce4a }
	__asm { L_0094ce48: }
	__asm { xor edx, edx }
	__asm { L_0094ce4a: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094ce68 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0094ce68: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84940 }
	__asm { mov dword ptr [ebx], 0xe8494c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84954 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094ceb1 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094ceb3 }
	__asm { L_0094ceb1: }
	__asm { xor edi, edi }
	__asm { L_0094ceb3: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094cee0
extern "C" __declspec(naked) void asm_0094cee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3869c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094cf2c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094cf2c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe18150 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094cf4e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094cf50 }
	__asm { L_0094cf4e: }
	__asm { xor edx, edx }
	__asm { L_0094cf50: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094cf6e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0094cf6e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84988 }
	__asm { mov dword ptr [ebx], 0xe84994 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe8499c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094cfb7 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094cfb9 }
	__asm { L_0094cfb7: }
	__asm { xor edi, edi }
	__asm { L_0094cfb9: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094cfe0
extern "C" __declspec(naked) void asm_0094cfe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38664 }
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
	__asm { je L_0094d02b }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094d02b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe18150 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094d04d }
	__asm { add edi, 0xc }
	__asm { jmp L_0094d04f }
	__asm { L_0094d04d: }
	__asm { xor edi, edi }
	__asm { L_0094d04f: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094d065 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094d065: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84988 }
	__asm { mov dword ptr [esi + 0xc], 0xe84994 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe8499c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094d0c0
extern "C" __declspec(naked) void asm_0094d0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3869c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094d10c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094d10c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe18150 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094d12e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094d130 }
	__asm { L_0094d12e: }
	__asm { xor edx, edx }
	__asm { L_0094d130: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094d14e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0094d14e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84988 }
	__asm { mov dword ptr [ebx], 0xe84994 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe8499c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094d197 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094d199 }
	__asm { L_0094d197: }
	__asm { xor edi, edi }
	__asm { L_0094d199: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10720[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094d1c0
extern "C" __declspec(naked) void asm_0094d1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3870d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094d20c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094d20c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10720] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094d228 }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094d22a }
	__asm { L_0094d228: }
	__asm { xor edx, edx }
	__asm { L_0094d22a: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094d248 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0094d248: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84964 }
	__asm { mov dword ptr [ebx], 0xe84970 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84978 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094d291 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094d293 }
	__asm { L_0094d291: }
	__asm { xor edi, edi }
	__asm { L_0094d293: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10720[];
// FUNCTION: ROBLOXSTUDIO 0x0094d2c0
extern "C" __declspec(naked) void asm_0094d2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd386d5 }
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
	__asm { je L_0094d30b }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094d30b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10720] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094d327 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094d329 }
	__asm { L_0094d327: }
	__asm { xor edi, edi }
	__asm { L_0094d329: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094d33f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094d33f: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84964 }
	__asm { mov dword ptr [esi + 0xc], 0xe84970 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84978 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10720[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094d390
extern "C" __declspec(naked) void asm_0094d390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3870d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094d3dc }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094d3dc: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10720] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094d3f8 }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094d3fa }
	__asm { L_0094d3f8: }
	__asm { xor edx, edx }
	__asm { L_0094d3fa: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094d418 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0094d418: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84964 }
	__asm { mov dword ptr [ebx], 0xe84970 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84978 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094d461 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094d463 }
	__asm { L_0094d461: }
	__asm { xor edi, edi }
	__asm { L_0094d463: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094d490
extern "C" __declspec(naked) void asm_0094d490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3874c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094d4dc }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094d4dc: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844a4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094d4fe }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094d500 }
	__asm { L_0094d4fe: }
	__asm { xor edx, edx }
	__asm { L_0094d500: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094d51e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0094d51e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe847b4 }
	__asm { mov dword ptr [ebx], 0xe847c0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe847c8 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094d567 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094d569 }
	__asm { L_0094d567: }
	__asm { xor edi, edi }
	__asm { L_0094d569: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094d590
extern "C" __declspec(naked) void asm_0094d590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12a54 }
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
	__asm { je L_0094d5db }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094d5db: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844a4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094d5fd }
	__asm { add edi, 0xc }
	__asm { jmp L_0094d5ff }
	__asm { L_0094d5fd: }
	__asm { xor edi, edi }
	__asm { L_0094d5ff: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094d615 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094d615: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe847b4 }
	__asm { mov dword ptr [esi + 0xc], 0xe847c0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe847c8 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094d670
extern "C" __declspec(naked) void asm_0094d670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3874c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094d6bc }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094d6bc: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844a4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094d6de }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094d6e0 }
	__asm { L_0094d6de: }
	__asm { xor edx, edx }
	__asm { L_0094d6e0: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094d6fe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0094d6fe: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe847b4 }
	__asm { mov dword ptr [ebx], 0xe847c0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe847c8 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094d747 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094d749 }
	__asm { L_0094d747: }
	__asm { xor edi, edi }
	__asm { L_0094d749: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094d770
extern "C" __declspec(naked) void asm_0094d770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd387bc }
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
	__asm { je L_0094d7bc }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094d7bc: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe844fc }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xe84508 }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094d802 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094d802: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xe848d4 }
	__asm { mov dword ptr [esi], 0xe848e0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xe848e8 }
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
// FUNCTION: ROBLOXSTUDIO 0x0094d870
extern "C" __declspec(naked) void asm_0094d870()
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
	__asm { je L_0094d8bb }
	__asm { mov dword ptr [esi + 0x28], 0x1016498 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094d8bb: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844fc }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi], 0xe84508 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094d8fc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094d8fc: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xe848d4 }
	__asm { mov dword ptr [esi + 0x14], 0xe848e0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x28], 0xe848e8 }
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
// FUNCTION: ROBLOXSTUDIO 0x0094d950
extern "C" __declspec(naked) void asm_0094d950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd387bc }
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
	__asm { je L_0094d99c }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094d99c: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe844fc }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xe84508 }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094d9e2 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094d9e2: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xe848d4 }
	__asm { mov dword ptr [esi], 0xe848e0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xe848e8 }
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
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094da50
extern "C" __declspec(naked) void asm_0094da50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd387fc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094da9c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094da9c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844b0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094dabe }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094dac0 }
	__asm { L_0094dabe: }
	__asm { xor edx, edx }
	__asm { L_0094dac0: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094dade }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0094dade: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe847d8 }
	__asm { mov dword ptr [ebx], 0xe847e4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe847ec }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094db27 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094db29 }
	__asm { L_0094db27: }
	__asm { xor edi, edi }
	__asm { L_0094db29: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094db50
extern "C" __declspec(naked) void asm_0094db50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12a54 }
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
	__asm { je L_0094db9b }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094db9b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844b0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094dbbd }
	__asm { add edi, 0xc }
	__asm { jmp L_0094dbbf }
	__asm { L_0094dbbd: }
	__asm { xor edi, edi }
	__asm { L_0094dbbf: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094dbd5 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094dbd5: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe847d8 }
	__asm { mov dword ptr [esi + 0xc], 0xe847e4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe847ec }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094dc30
extern "C" __declspec(naked) void asm_0094dc30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd387fc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094dc7c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094dc7c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844b0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094dc9e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094dca0 }
	__asm { L_0094dc9e: }
	__asm { xor edx, edx }
	__asm { L_0094dca0: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094dcbe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0094dcbe: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe847d8 }
	__asm { mov dword ptr [ebx], 0xe847e4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe847ec }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094dd07 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094dd09 }
	__asm { L_0094dd07: }
	__asm { xor edi, edi }
	__asm { L_0094dd09: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094dd30
extern "C" __declspec(naked) void asm_0094dd30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3883c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094dd7c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094dd7c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b758 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094dd9e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094dda0 }
	__asm { L_0094dd9e: }
	__asm { xor edx, edx }
	__asm { L_0094dda0: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094ddbe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0094ddbe: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe847fc }
	__asm { mov dword ptr [ebx], 0xe84808 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84810 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094de07 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094de09 }
	__asm { L_0094de07: }
	__asm { xor edi, edi }
	__asm { L_0094de09: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094de30
extern "C" __declspec(naked) void asm_0094de30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12a54 }
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
	__asm { je L_0094de7b }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094de7b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b758 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094de9d }
	__asm { add edi, 0xc }
	__asm { jmp L_0094de9f }
	__asm { L_0094de9d: }
	__asm { xor edi, edi }
	__asm { L_0094de9f: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094deb5 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094deb5: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe847fc }
	__asm { mov dword ptr [esi + 0xc], 0xe84808 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84810 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094df10
extern "C" __declspec(naked) void asm_0094df10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3883c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094df5c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094df5c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b758 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094df7e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094df80 }
	__asm { L_0094df7e: }
	__asm { xor edx, edx }
	__asm { L_0094df80: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094df9e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0094df9e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe847fc }
	__asm { mov dword ptr [ebx], 0xe84808 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84810 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094dfe7 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094dfe9 }
	__asm { L_0094dfe7: }
	__asm { xor edi, edi }
	__asm { L_0094dfe9: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094e010
extern "C" __declspec(naked) void asm_0094e010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3887c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094e05c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094e05c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b74c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094e07e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094e080 }
	__asm { L_0094e07e: }
	__asm { xor edx, edx }
	__asm { L_0094e080: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094e09e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0094e09e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84844 }
	__asm { mov dword ptr [ebx], 0xe84850 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84858 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094e0e7 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094e0e9 }
	__asm { L_0094e0e7: }
	__asm { xor edi, edi }
	__asm { L_0094e0e9: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094e110
extern "C" __declspec(naked) void asm_0094e110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12a54 }
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
	__asm { je L_0094e15b }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094e15b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b74c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094e17d }
	__asm { add edi, 0xc }
	__asm { jmp L_0094e17f }
	__asm { L_0094e17d: }
	__asm { xor edi, edi }
	__asm { L_0094e17f: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094e195 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094e195: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84844 }
	__asm { mov dword ptr [esi + 0xc], 0xe84850 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84858 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094e1f0
extern "C" __declspec(naked) void asm_0094e1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3887c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094e23c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094e23c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b74c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094e25e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094e260 }
	__asm { L_0094e25e: }
	__asm { xor edx, edx }
	__asm { L_0094e260: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094e27e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0094e27e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84844 }
	__asm { mov dword ptr [ebx], 0xe84850 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84858 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094e2c7 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094e2c9 }
	__asm { L_0094e2c7: }
	__asm { xor edi, edi }
	__asm { L_0094e2c9: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094e2f0
extern "C" __declspec(naked) void asm_0094e2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd388bc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094e33c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094e33c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b764 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094e35e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094e360 }
	__asm { L_0094e35e: }
	__asm { xor edx, edx }
	__asm { L_0094e360: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094e37e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0094e37e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84820 }
	__asm { mov dword ptr [ebx], 0xe8482c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84834 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094e3c7 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094e3c9 }
	__asm { L_0094e3c7: }
	__asm { xor edi, edi }
	__asm { L_0094e3c9: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094e3f0
extern "C" __declspec(naked) void asm_0094e3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12a54 }
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
	__asm { je L_0094e43b }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094e43b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b764 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094e45d }
	__asm { add edi, 0xc }
	__asm { jmp L_0094e45f }
	__asm { L_0094e45d: }
	__asm { xor edi, edi }
	__asm { L_0094e45f: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094e475 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094e475: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84820 }
	__asm { mov dword ptr [esi + 0xc], 0xe8482c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84834 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094e4d0
extern "C" __declspec(naked) void asm_0094e4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd388bc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094e51c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094e51c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b764 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094e53e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094e540 }
	__asm { L_0094e53e: }
	__asm { xor edx, edx }
	__asm { L_0094e540: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094e55e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0094e55e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84820 }
	__asm { mov dword ptr [ebx], 0xe8482c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84834 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094e5a7 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094e5a9 }
	__asm { L_0094e5a7: }
	__asm { xor edi, edi }
	__asm { L_0094e5a9: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094e5d0
extern "C" __declspec(naked) void asm_0094e5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd388fc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094e61c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094e61c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844bc }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094e63e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094e640 }
	__asm { L_0094e63e: }
	__asm { xor edx, edx }
	__asm { L_0094e640: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094e65e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0094e65e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe8488c }
	__asm { mov dword ptr [ebx], 0xe84898 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe848a0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094e6a7 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094e6a9 }
	__asm { L_0094e6a7: }
	__asm { xor edi, edi }
	__asm { L_0094e6a9: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094e6d0
extern "C" __declspec(naked) void asm_0094e6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12a54 }
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
	__asm { je L_0094e71b }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094e71b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844bc }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094e73d }
	__asm { add edi, 0xc }
	__asm { jmp L_0094e73f }
	__asm { L_0094e73d: }
	__asm { xor edi, edi }
	__asm { L_0094e73f: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094e755 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094e755: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe8488c }
	__asm { mov dword ptr [esi + 0xc], 0xe84898 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe848a0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094e7b0
extern "C" __declspec(naked) void asm_0094e7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd388fc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094e7fc }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094e7fc: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844bc }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094e81e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094e820 }
	__asm { L_0094e81e: }
	__asm { xor edx, edx }
	__asm { L_0094e820: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094e83e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0094e83e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe8488c }
	__asm { mov dword ptr [ebx], 0xe84898 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe848a0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094e887 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094e889 }
	__asm { L_0094e887: }
	__asm { xor edi, edi }
	__asm { L_0094e889: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094e8b0
extern "C" __declspec(naked) void asm_0094e8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3893c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094e8fc }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094e8fc: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844d4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094e91e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094e920 }
	__asm { L_0094e91e: }
	__asm { xor edx, edx }
	__asm { L_0094e920: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094e93e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0094e93e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84868 }
	__asm { mov dword ptr [ebx], 0xe84874 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe8487c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094e987 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094e989 }
	__asm { L_0094e987: }
	__asm { xor edi, edi }
	__asm { L_0094e989: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094e9b0
extern "C" __declspec(naked) void asm_0094e9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12a54 }
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
	__asm { je L_0094e9fb }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094e9fb: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844d4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094ea1d }
	__asm { add edi, 0xc }
	__asm { jmp L_0094ea1f }
	__asm { L_0094ea1d: }
	__asm { xor edi, edi }
	__asm { L_0094ea1f: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094ea35 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094ea35: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84868 }
	__asm { mov dword ptr [esi + 0xc], 0xe84874 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe8487c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094ea90
extern "C" __declspec(naked) void asm_0094ea90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3893c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094eadc }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094eadc: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844d4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094eafe }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094eb00 }
	__asm { L_0094eafe: }
	__asm { xor edx, edx }
	__asm { L_0094eb00: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094eb1e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0094eb1e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84868 }
	__asm { mov dword ptr [ebx], 0xe84874 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe8487c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094eb67 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094eb69 }
	__asm { L_0094eb67: }
	__asm { xor edi, edi }
	__asm { L_0094eb69: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094eb90
extern "C" __declspec(naked) void asm_0094eb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3897c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094ebdc }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094ebdc: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe18168 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094ebfe }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094ec00 }
	__asm { L_0094ebfe: }
	__asm { xor edx, edx }
	__asm { L_0094ec00: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094ec1e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0094ec1e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe848f8 }
	__asm { mov dword ptr [ebx], 0xe84904 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe8490c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094ec67 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094ec69 }
	__asm { L_0094ec67: }
	__asm { xor edi, edi }
	__asm { L_0094ec69: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094ec90
extern "C" __declspec(naked) void asm_0094ec90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12a54 }
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
	__asm { je L_0094ecdb }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094ecdb: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe18168 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094ecfd }
	__asm { add edi, 0xc }
	__asm { jmp L_0094ecff }
	__asm { L_0094ecfd: }
	__asm { xor edi, edi }
	__asm { L_0094ecff: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094ed15 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094ed15: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe848f8 }
	__asm { mov dword ptr [esi + 0xc], 0xe84904 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe8490c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094ed70
extern "C" __declspec(naked) void asm_0094ed70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3897c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094edbc }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094edbc: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe18168 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094edde }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094ede0 }
	__asm { L_0094edde: }
	__asm { xor edx, edx }
	__asm { L_0094ede0: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094edfe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0094edfe: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe848f8 }
	__asm { mov dword ptr [ebx], 0xe84904 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe8490c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094ee47 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094ee49 }
	__asm { L_0094ee47: }
	__asm { xor edi, edi }
	__asm { L_0094ee49: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094ee70
extern "C" __declspec(naked) void asm_0094ee70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd389bc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094eebc }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094eebc: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844c8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094eede }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094eee0 }
	__asm { L_0094eede: }
	__asm { xor edx, edx }
	__asm { L_0094eee0: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094eefe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0094eefe: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe848b0 }
	__asm { mov dword ptr [ebx], 0xe848bc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe848c4 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094ef47 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094ef49 }
	__asm { L_0094ef47: }
	__asm { xor edi, edi }
	__asm { L_0094ef49: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094ef70
extern "C" __declspec(naked) void asm_0094ef70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12a54 }
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
	__asm { je L_0094efbb }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094efbb: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844c8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094efdd }
	__asm { add edi, 0xc }
	__asm { jmp L_0094efdf }
	__asm { L_0094efdd: }
	__asm { xor edi, edi }
	__asm { L_0094efdf: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094eff5 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094eff5: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe848b0 }
	__asm { mov dword ptr [esi + 0xc], 0xe848bc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe848c4 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094f050
extern "C" __declspec(naked) void asm_0094f050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd389bc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094f09c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094f09c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844c8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0094f0be }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0094f0c0 }
	__asm { L_0094f0be: }
	__asm { xor edx, edx }
	__asm { L_0094f0c0: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094f0de }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0094f0de: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe848b0 }
	__asm { mov dword ptr [ebx], 0xe848bc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe848c4 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0094f127 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094f129 }
	__asm { L_0094f127: }
	__asm { xor edi, edi }
	__asm { L_0094f129: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094f280
extern "C" __declspec(naked) void asm_0094f280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38a8c }
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
	__asm { je L_0094f2cc }
	__asm { mov dword ptr [edi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [edi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094f2cc: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094f2e4 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094f2e4: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea eax, [ebx + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [edi], 0xe845ac }
	__asm { mov dword ptr [edi + 0x14], 0xe845b4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x20], 0xe845c0 }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x1c], eax }
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
// FUNCTION: ROBLOXSTUDIO 0x0094f360
extern "C" __declspec(naked) void asm_0094f360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38a54 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094f3ab }
	__asm { mov dword ptr [edi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [edi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094f3ab: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094f3c3 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094f3c3: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea eax, [esi + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0xe845ac }
	__asm { mov dword ptr [edi + 0x14], 0xe845b4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edi + 0x20], 0xe845c0 }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edi + 0x1c], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0094f430
extern "C" __declspec(naked) void asm_0094f430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38a8c }
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
	__asm { je L_0094f47c }
	__asm { mov dword ptr [edi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [edi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094f47c: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094f494 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094f494: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea eax, [ebx + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [edi], 0xe845ac }
	__asm { mov dword ptr [edi + 0x14], 0xe845b4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x20], 0xe845c0 }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x1c], eax }
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
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x0094f640
extern "C" __declspec(naked) void asm_0094f640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38adb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe1815c }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094f691 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094f691: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe84698 }
	__asm { mov dword ptr [esi + 0xc], 0xe846a4 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1051c[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x0094f820
extern "C" __declspec(naked) void asm_0094f820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38b2c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e1051c] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094f86b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094f86b: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe846ac }
	__asm { mov dword ptr [esi + 0xc], 0xe846b8 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x0094fa00
extern "C" __declspec(naked) void asm_0094fa00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38b7b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe18150 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094fa51 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094fa51: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe846d4 }
	__asm { mov dword ptr [esi + 0xc], 0xe846e0 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10720[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x0094fbe0
extern "C" __declspec(naked) void asm_0094fbe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bcc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e10720] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094fc2b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094fc2b: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe846c0 }
	__asm { mov dword ptr [esi + 0xc], 0xe846cc }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x0094fdc0
extern "C" __declspec(naked) void asm_0094fdc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844a4 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094fe11 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094fe11: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe845d0 }
	__asm { mov dword ptr [esi + 0xc], 0xe845dc }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094b930();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x0094ffc0
extern "C" __declspec(naked) void asm_0094ffc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38c2b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844fc }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi], 0xe84508 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00950025 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00950025: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe84670 }
	__asm { mov dword ptr [esi + 0x14], 0xe8467c }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094b930 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x009501b0
extern "C" __declspec(naked) void asm_009501b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844b0 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00950201 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00950201: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe845e4 }
	__asm { mov dword ptr [esi + 0xc], 0xe845f0 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00950390
extern "C" __declspec(naked) void asm_00950390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b758 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_009503e1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_009503e1: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe845f8 }
	__asm { mov dword ptr [esi + 0xc], 0xe84604 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00950570
extern "C" __declspec(naked) void asm_00950570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b74c }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_009505c1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_009505c1: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe84620 }
	__asm { mov dword ptr [esi + 0xc], 0xe8462c }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00950750
extern "C" __declspec(naked) void asm_00950750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b764 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_009507a1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_009507a1: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe8460c }
	__asm { mov dword ptr [esi + 0xc], 0xe84618 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00950930
extern "C" __declspec(naked) void asm_00950930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844bc }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00950981 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00950981: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe84648 }
	__asm { mov dword ptr [esi + 0xc], 0xe84654 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00950b10
extern "C" __declspec(naked) void asm_00950b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844d4 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00950b61 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00950b61: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe84634 }
	__asm { mov dword ptr [esi + 0xc], 0xe84640 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00950cf0
extern "C" __declspec(naked) void asm_00950cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe18168 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00950d41 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00950d41: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe84684 }
	__asm { mov dword ptr [esi + 0xc], 0xe84690 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00950ed0
extern "C" __declspec(naked) void asm_00950ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844c8 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00950f21 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00950f21: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe8465c }
	__asm { mov dword ptr [esi + 0xc], 0xe84668 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1317c[];
extern "C" void fn_00953940();
// FUNCTION: ROBLOXSTUDIO 0x00951760
extern "C" __declspec(naked) void asm_00951760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38c9f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi], 0xe84598 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov word ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov byte ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { lea ecx, [edi + 0x2c] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { push 0 }
	__asm { add ecx, 0x1c }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e1317c] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x4c] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { call fn_00953940 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x4c], eax }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { mov byte ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1052c[];
extern "C" void fn_0094bc50();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00951930
extern "C" __declspec(naked) void asm_00951930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38cec }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0095196b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0095196b: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe84548 }
	__asm { mov dword ptr [edi + 0x14], 0xe84550 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bc50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10510[];
extern "C" char g_00e10514[];
// FUNCTION: ROBLOXSTUDIO 0x00951bb0
extern "C" __declspec(naked) void asm_00951bb0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe8491c }
	__asm { mov dword ptr [esi + 0xc], 0xe84928 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84930 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe84698 }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00951c01 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00951c01 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00951c01: }
	__asm { mov dword ptr [esi], 0xe1815c }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84940 }
	__asm { mov dword ptr [esi + 0xc], 0xe8494c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84954 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe846ac }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00951c61 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00951c61 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00951c61: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10514] }
}

extern "C" char g_00e10510[];
extern "C" char g_00e10724[];
// FUNCTION: ROBLOXSTUDIO 0x00951c70
extern "C" __declspec(naked) void asm_00951c70()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84988 }
	__asm { mov dword ptr [esi + 0xc], 0xe84994 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe8499c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe846d4 }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00951cc1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00951cc1 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00951cc1: }
	__asm { mov dword ptr [esi], 0xe18150 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe84964 }
	__asm { mov dword ptr [esi + 0xc], 0xe84970 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe84978 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe846c0 }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00951d21 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00951d21 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00951d21: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10724] }
}

extern "C" void fn_00402c40();
extern "C" void fn_00402ce0();
extern "C" void fn_00402d90();
extern "C" void fn_0094b480();
extern "C" void fn_009525b0();
// FUNCTION: ROBLOXSTUDIO 0x00953990
extern "C" __declspec(naked) void asm_00953990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd38d88 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { fld dword ptr [edi + 0xc] }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { call fn_00402d90 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_009539cd }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { je L_00953a92 }
	__asm { L_009539cd: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { jb L_009539e7 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00402c40 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00402ce0 }
	__asm { jmp L_00953a01 }
	__asm { L_009539e7: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea eax, [ecx + eax*4] }
	__asm { cmp ecx, eax }
	__asm { je L_00953a01 }
	__asm { L_009539f4: }
	__asm { mov dword ptr [ecx], 0 }
	__asm { add ecx, 4 }
	__asm { cmp ecx, eax }
	__asm { jne L_009539f4 }
	__asm { L_00953a01: }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_00953a0b }
	__asm { inc eax }
	__asm { jmp L_00953a0d }
	__asm { L_00953a0b: }
	__asm { xor eax, eax }
	__asm { L_00953a0d: }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00953a4f }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [edx + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00953a3c }
	__asm { add eax, -0x30 }
	__asm { jmp L_00953a3e }
	__asm { L_00953a3c: }
	__asm { xor eax, eax }
	__asm { L_00953a3e: }
	__asm { mov dword ptr [edx + ecx*4], 0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00953a4f: }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00953a71 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00953a71 }
	__asm { add eax, -0x30 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00953a78 }
	__asm { L_00953a71: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_00953a78: }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push esi }
	__asm { push dword ptr [eax] }
	__asm { call fn_0094b480 }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_009525b0 }
	__asm { L_00953a92: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00954440
extern "C" __declspec(naked) void asm_00954440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38dc7 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x20 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_009544f3 }
	__asm { mov dword ptr [edi + 0x14], 0xe84738 }
	__asm { add esi, -0x1c }
	__asm { mov dword ptr [edi + 0x1c], 0xe1822c }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe8455c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [edi], 0xe84720 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edi + 0x14], 0xe8472c }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add eax, 0x14 }
	__asm { add eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009544f3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00954510
extern "C" __declspec(naked) void asm_00954510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38e07 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x18 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009545b1 }
	__asm { mov dword ptr [esi + 0xc], 0xe84adc }
	__asm { mov dword ptr [esi + 0x14], 0xe1822c }
	__asm { lea eax, [edi - 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esi], 0xe84ac4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0xc], 0xe84ad0 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add eax, 0xc }
	__asm { add eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009545b1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009415f0();
extern "C" void fn_00948f60();
extern "C" void fn_00bfdcb0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00954650
extern "C" __declspec(naked) void asm_00954650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38e4c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebx], 0 }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_009546e9 }
	__asm { mov dword ptr [edi], 0xe84520 }
	__asm { lea ecx, [edi + 4] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { call fn_00bfdcb0 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edi + 0x20], 0xf }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov byte ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { jmp L_009546eb }
	__asm { L_009546e9: }
	__asm { xor edi, edi }
	__asm { L_009546eb: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00954706 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00954706 }
	__asm { mov dword ptr [ebx], 0 }
	__asm { L_00954706: }
	__asm { mov dword ptr [ebx], edi }
	__asm { test edi, edi }
	__asm { je L_00954713 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00954713: }
	__asm { add esi, 4 }
	__asm { add edi, 4 }
	__asm { cmp edi, esi }
	__asm { je L_0095474d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_009415f0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { mov dword ptr [eax], eax }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], edx }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { call fn_00948f60 }
	__asm { L_0095474d: }
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

extern "C" char g_00e10510[];
extern "C" void fn_0094a100();
extern "C" void fn_009519e0();
extern "C" void fn_00954ba0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00954cf0
extern "C" __declspec(naked) void asm_00954cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38ea8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push 0x12be40c }
	__asm { push 0x12bc054 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00954d4f }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00954ba0 }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00954d4f: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_009519e0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094a100 }
	__asm { add esp, 8 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x30], 0xe84548 }
	__asm { mov dword ptr [ebp - 0x1c], 0xe84550 }
	__asm { call dword ptr [g_00e10510] }
	__asm { mov ecx, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { test ecx, ecx }
	__asm { je L_00954d9d }
	__asm { mov edx, dword ptr [ecx] }
	__asm { call dword ptr [edx + 0x10] }
	__asm { L_00954d9d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040edb0();
extern "C" void fn_004225e0();
extern "C" void fn_00426fa0();
extern "C" void fn_006bc760();
// FUNCTION: ROBLOXSTUDIO 0x009550a0
extern "C" __declspec(naked) void asm_009550a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd38f50 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { lea eax, [ecx + 0x58] }
	__asm { sub esp, 0x28 }
	__asm { cmp dword ptr [eax], 0 }
	__asm { je L_0095512a }
	__asm { cmp byte ptr [ecx + 0x18], 0 }
	__asm { jne L_0095512a }
	__asm { push esi }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_004225e0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_006bc760 }
	__asm { mov byte ptr [ebp - 0x10], 1 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00426fa0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_0095512a }
	__asm { test al, 1 }
	__asm { jne L_0095512a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0095512a }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0095512a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1071c[];
// FUNCTION: ROBLOXSTUDIO 0x00955140
extern "C" __declspec(naked) void asm_00955140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [g_00e1071c] }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { jne L_0095517f }
	__asm { nop }
	__asm { L_00955160: }
	__asm { push dword ptr [ebx] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00955170 }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { jmp L_00955174 }
	__asm { L_00955170: }
	__asm { mov edi, esi }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00955174: }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov eax, dword ptr [g_00e1071c] }
	__asm { je L_00955160 }
	__asm { L_0095517f: }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { cmp edi, dword ptr [esi] }
	__asm { je L_009551a7 }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_009551a7 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009551a7: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00955570
extern "C" __declspec(naked) void asm_00955570()
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
	__asm { push edi }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009555c6 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { jmp L_009555c8 }
	__asm { L_009555c6: }
	__asm { xor esi, esi }
	__asm { L_009555c8: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov dword ptr [eax], esi }
	__asm { test edi, edi }
	__asm { je L_009555fd }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_009555e3 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009555e3: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009555fd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00955cb0
extern "C" __declspec(naked) void asm_00955cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd294a1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x30] }
	__asm { mov dword ptr [ebp - 0x1c], 0x1016498 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov dword ptr [ebp - 0x44], 0xe84574 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00955d2c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00955d2c: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x44], 0xe84790 }
	__asm { mov dword ptr [ebp - 0x30], 0xe8479c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x112f7d8 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe847a4 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00955d90
extern "C" __declspec(naked) void asm_00955d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd294a1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x30] }
	__asm { mov dword ptr [ebp - 0x1c], 0x1016498 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov dword ptr [ebp - 0x44], 0xe84580 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00955e0c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00955e0c: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x44], 0xe846fc }
	__asm { mov dword ptr [ebp - 0x30], 0xe84708 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x112f648 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe84710 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00955e70
extern "C" __declspec(naked) void asm_00955e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd294a1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x30] }
	__asm { mov dword ptr [ebp - 0x1c], 0x1016498 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov dword ptr [ebp - 0x44], 0xe8458c }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00955eec }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00955eec: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x44], 0xe84758 }
	__asm { mov dword ptr [ebp - 0x30], 0xe84764 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x112f750 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe8476c }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00955f50
extern "C" __declspec(naked) void asm_00955f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39051 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf139e8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe1815c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00955fb3 }
	__asm { add esi, 0xc }
	__asm { jmp L_00955fb5 }
	__asm { L_00955fb3: }
	__asm { xor esi, esi }
	__asm { L_00955fb5: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00955fcb }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00955fcb: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe8491c }
	__asm { mov dword ptr [ebp - 0x30], 0xe84928 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x112fcf8 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe84930 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e1051c[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00956030
extern "C" __declspec(naked) void asm_00956030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39082 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf139e8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e1051c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0095608c }
	__asm { add esi, 0xc }
	__asm { jmp L_0095608e }
	__asm { L_0095608c: }
	__asm { xor esi, esi }
	__asm { L_0095608e: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_009560a4 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_009560a4: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe84940 }
	__asm { mov dword ptr [ebp - 0x30], 0xe8494c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x112fd5c }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe84954 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00956100
extern "C" __declspec(naked) void asm_00956100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd390b1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf139e8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe18150 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00956163 }
	__asm { add esi, 0xc }
	__asm { jmp L_00956165 }
	__asm { L_00956163: }
	__asm { xor esi, esi }
	__asm { L_00956165: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0095617b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0095617b: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe84988 }
	__asm { mov dword ptr [ebp - 0x30], 0xe84994 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x112fe40 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe8499c }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10720[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009561e0
extern "C" __declspec(naked) void asm_009561e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd390e2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf139e8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e10720] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0095623c }
	__asm { add esi, 0xc }
	__asm { jmp L_0095623e }
	__asm { L_0095623c: }
	__asm { xor esi, esi }
	__asm { L_0095623e: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00956254 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00956254: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe84964 }
	__asm { mov dword ptr [ebp - 0x30], 0xe84970 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x112fdc0 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe84978 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009562b0
extern "C" __declspec(naked) void asm_009562b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12b21 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf139e8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe844a4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00956313 }
	__asm { add esi, 0xc }
	__asm { jmp L_00956315 }
	__asm { L_00956313: }
	__asm { xor esi, esi }
	__asm { L_00956315: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0095632b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0095632b: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe847b4 }
	__asm { mov dword ptr [ebp - 0x30], 0xe847c0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x112f860 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe847c8 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00956390
extern "C" __declspec(naked) void asm_00956390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd294a1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x30] }
	__asm { mov dword ptr [ebp - 0x1c], 0x1016498 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov dword ptr [ebp - 0x44], 0xe84508 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0095640c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0095640c: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x44], 0xe848d4 }
	__asm { mov dword ptr [ebp - 0x30], 0xe848e0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x112fc28 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe848e8 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00956470
extern "C" __declspec(naked) void asm_00956470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12b21 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf139e8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe844b0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_009564d3 }
	__asm { add esi, 0xc }
	__asm { jmp L_009564d5 }
	__asm { L_009564d3: }
	__asm { xor esi, esi }
	__asm { L_009564d5: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_009564eb }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_009564eb: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe847d8 }
	__asm { mov dword ptr [ebp - 0x30], 0xe847e4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x112f8e4 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe847ec }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00956550
extern "C" __declspec(naked) void asm_00956550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12b21 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf139e8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe3b758 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_009565b3 }
	__asm { add esi, 0xc }
	__asm { jmp L_009565b5 }
	__asm { L_009565b3: }
	__asm { xor esi, esi }
	__asm { L_009565b5: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_009565cb }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_009565cb: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe847fc }
	__asm { mov dword ptr [ebp - 0x30], 0xe84808 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x112f968 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe84810 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00956630
extern "C" __declspec(naked) void asm_00956630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12b21 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf139e8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe3b74c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00956693 }
	__asm { add esi, 0xc }
	__asm { jmp L_00956695 }
	__asm { L_00956693: }
	__asm { xor esi, esi }
	__asm { L_00956695: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_009566ab }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_009566ab: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe84844 }
	__asm { mov dword ptr [ebp - 0x30], 0xe84850 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x112fa38 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe84858 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00956710
extern "C" __declspec(naked) void asm_00956710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12b21 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf139e8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe3b764 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00956773 }
	__asm { add esi, 0xc }
	__asm { jmp L_00956775 }
	__asm { L_00956773: }
	__asm { xor esi, esi }
	__asm { L_00956775: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0095678b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0095678b: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe84820 }
	__asm { mov dword ptr [ebp - 0x30], 0xe8482c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x112f9d0 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe84834 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009567f0
extern "C" __declspec(naked) void asm_009567f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12b21 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf139e8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe844bc }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00956853 }
	__asm { add esi, 0xc }
	__asm { jmp L_00956855 }
	__asm { L_00956853: }
	__asm { xor esi, esi }
	__asm { L_00956855: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0095686b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0095686b: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe8488c }
	__asm { mov dword ptr [ebp - 0x30], 0xe84898 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x112fb20 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe848a0 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009568d0
extern "C" __declspec(naked) void asm_009568d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12b21 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf139e8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe844d4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00956933 }
	__asm { add esi, 0xc }
	__asm { jmp L_00956935 }
	__asm { L_00956933: }
	__asm { xor esi, esi }
	__asm { L_00956935: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0095694b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0095694b: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe84868 }
	__asm { mov dword ptr [ebp - 0x30], 0xe84874 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x112fa9c }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe8487c }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}
