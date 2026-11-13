// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00825140();
extern "C" void fn_00a6e640();
extern "C" void fn_00a6edf0();
// FUNCTION: ROBLOXSTUDIO 0x00a6e050
extern "C" __declspec(naked) void asm_00a6e050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a1f6 }
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
	__asm { call fn_00a6e640 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xead75c }
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
	__asm { call fn_00a6edf0 }
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
// FUNCTION: ROBLOXSTUDIO 0x00a6e1c0
extern "C" __declspec(naked) void asm_00a6e1c0()
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
	__asm { push 0x11f1150 }
	__asm { mov edi, ecx }
	__asm { push 0xead7e8 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59e20 }
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
	__asm { push 0xead7f8 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0x101e40c }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xead800 }
	__asm { push 2 }
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
// FUNCTION: ROBLOXSTUDIO 0x00a6e300
extern "C" __declspec(naked) void asm_00a6e300()
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
	__asm { push 0x11f117c }
	__asm { mov edi, ecx }
	__asm { push 0xead808 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59e38 }
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
	__asm { push 0xead814 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xead81c }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xead828 }
	__asm { push 2 }
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
extern "C" char g_012e7dcc[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a6e640
extern "C" __declspec(naked) void asm_00a6e640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a256 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e7dcc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00a6e6ba }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e7dcc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xead468 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7ca0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde77a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a6e6ba: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e7ca0 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xead750 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a6e732 }
	__asm { push 0x1256638 }
	__asm { mov ecx, 0x1256638 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a6e732 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a6e71d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6e732 }
	__asm { L_00a6e71d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6e732: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00ead468[];
extern "C" void fn_004038a0();
extern "C" void fn_004115f0();
extern "C" void fn_0043f140();
extern "C" void fn_0043f5a0();
extern "C" void fn_004cc120();
extern "C" void fn_007b5bb0();
extern "C" void fn_00a6e100();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a6e750
extern "C" __declspec(naked) void asm_00a6e750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a2b7 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00a6e100 }
	__asm { mov dword ptr [edi], 0xead514 }
	__asm { mov dword ptr [edi + 4], 0xead58c }
	__asm { mov dword ptr [edi + 0x18], 0xead594 }
	__asm { mov dword ptr [edi + 0x1c], 0xead5a0 }
	__asm { mov word ptr [edi + 0x64], 1 }
	__asm { mov dword ptr [edi + 0x68], 0x41c80000 }
	__asm { mov dword ptr [edi + 0x80], 0xf }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [edi + 0x6c], 0 }
	__asm { lea eax, [edi + 0x8c] }
	__asm { mov dword ptr [edi + 0x84], 1 }
	__asm { mov dword ptr [edi + 0x88], 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f130 }
	__asm { push 0x131b198 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004115f0 }
	__asm { call fn_0043f140 }
	__asm { lea esi, [edi + 0x90] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { push 0x4cc1b0 }
	__asm { push 0x131c6d8 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_004115f0 }
	__asm { call fn_004cc120 }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_004115f0 }
	__asm { add esp, 0x18 }
	__asm { call fn_0043f5a0 }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [g_00ead468], cl }
	__asm { mov eax, 6 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xead468 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { jb L_00a6e898 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a6e898: }
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
extern "C" void fn_007b2800();
// FUNCTION: ROBLOXSTUDIO 0x00a6e9b0
extern "C" __declspec(naked) void asm_00a6e9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a308 }
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
	__asm { je L_00a6ea3d }
	__asm { add esi, 5 }
	__asm { je L_00a6ea05 }
	__asm { add esi, -5 }
	__asm { jmp L_00a6ea07 }
	__asm { L_00a6ea05: }
	__asm { xor esi, esi }
	__asm { L_00a6ea07: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6ea37 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6ea37 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00a6ea3d }
	__asm { L_00a6ea37: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a6ea3d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_007b2800 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a6ea8c }
	__asm { add esi, 5 }
	__asm { je L_00a6ea62 }
	__asm { add esi, -5 }
	__asm { jmp L_00a6ea64 }
	__asm { L_00a6ea62: }
	__asm { xor esi, esi }
	__asm { L_00a6ea64: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6ea8c }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6ea8c }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00a6ea8c: }
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
extern "C" void fn_0043f1d0();
extern "C" void fn_006b9800();
extern "C" void fn_007b00e0();
extern "C" void fn_00a6e9b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a6eaa0
extern "C" __declspec(naked) void asm_00a6eaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a349 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea ecx, [edi + 0x90] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00a6e9b0 }
	__asm { lea esi, [edi + 0x8c] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0043f1d0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00a6eb2c }
	__asm { add esi, 5 }
	__asm { je L_00a6eafc }
	__asm { add esi, -5 }
	__asm { jmp L_00a6eafe }
	__asm { L_00a6eafc: }
	__asm { xor esi, esi }
	__asm { L_00a6eafe: }
	__asm { push ebx }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6eb2b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6eb2b }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a6eb2b: }
	__asm { pop ebx }
	__asm { L_00a6eb2c: }
	__asm { cmp dword ptr [edi + 0x80], 0x10 }
	__asm { jb L_00a6eb40 }
	__asm { push dword ptr [edi + 0x6c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a6eb40: }
	__asm { mov dword ptr [edi + 0x80], 0xf }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov byte ptr [edi + 0x6c], 0 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], 0xead474 }
	__asm { mov dword ptr [edi + 4], 0xead4ec }
	__asm { mov dword ptr [edi + 0x18], 0xead4f4 }
	__asm { mov dword ptr [edi + 0x1c], 0xead500 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00a6edf0
extern "C" __declspec(naked) void asm_00a6edf0()
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
	__asm { call fn_007d5710 }
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
	__asm { je L_00a6ee6d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a6ee6d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a6ee87 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a6ee87: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e7efc[];
extern "C" void fn_004118e0();
extern "C" void fn_0048d4a0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00a6f850();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a6f700
extern "C" __declspec(naked) void asm_00a6f700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a3d6 }
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
	__asm { call fn_00a6f850 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e7efc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a6f7bf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e7efc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xead928 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7dd0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7790 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a6f7bf: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e7dd0 }
	__asm { call fn_0048d4a0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeada78 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a6f83d }
	__asm { push 0x12571cc }
	__asm { mov ecx, 0x12571cc }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a6f83d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a6f828 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6f83d }
	__asm { L_00a6f828: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6f83d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f1d0();
extern "C" void fn_006b9800();
extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a6faa0
extern "C" __declspec(naked) void asm_00a6faa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a476 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 0x94] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0043f1d0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00a6fb21 }
	__asm { add esi, 5 }
	__asm { je L_00a6faf1 }
	__asm { add esi, -5 }
	__asm { jmp L_00a6faf3 }
	__asm { L_00a6faf1: }
	__asm { xor esi, esi }
	__asm { L_00a6faf3: }
	__asm { push ebx }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6fb20 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6fb20 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a6fb20: }
	__asm { pop ebx }
	__asm { L_00a6fb21: }
	__asm { cmp dword ptr [edi + 0x90], 0x10 }
	__asm { jb L_00a6fb35 }
	__asm { push dword ptr [edi + 0x7c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a6fb35: }
	__asm { mov dword ptr [edi + 0x90], 0xf }
	__asm { mov dword ptr [edi + 0x8c], 0 }
	__asm { mov byte ptr [edi + 0x7c], 0 }
	__asm { cmp dword ptr [edi + 0x78], 0x10 }
	__asm { jb L_00a6fb5e }
	__asm { push dword ptr [edi + 0x64] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a6fb5e: }
	__asm { mov dword ptr [edi + 0x78], 0xf }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov byte ptr [edi + 0x64], 0 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], 0xead93c }
	__asm { mov dword ptr [edi + 4], 0xead9b4 }
	__asm { mov dword ptr [edi + 0x18], 0xead9bc }
	__asm { mov dword ptr [edi + 0x1c], 0xead9c8 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00403540();
extern "C" void fn_00412c00();
extern "C" void fn_004278c0();
extern "C" void fn_007b4f50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a6fe10
extern "C" __declspec(naked) void asm_00a6fe10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [ebp + 0x18], 0x30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jbe L_00a6fe92 }
	__asm { push 0x30 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_004278c0 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp + 8] }
	__asm { cmp eax, esi }
	__asm { je L_00a6fe81 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00a6fe66 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a6fe66: }
	__asm { push esi }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { call fn_00412c00 }
	__asm { L_00a6fe81: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00a6fe92 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a6fe92: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp + 8] }
	__asm { cmovae eax, dword ptr [ebp + 8] }
	__asm { lea esi, [edi + 0x64] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, esi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { je L_00a6fed3 }
	__asm { lea eax, [ebp + 8] }
	__asm { cmp esi, eax }
	__asm { je L_00a6fec7 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_00a6fec7: }
	__asm { push 0x1308940 }
	__asm { mov ecx, edi }
	__asm { call fn_007b4f50 }
	__asm { L_00a6fed3: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_00a6fee6 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a6fee6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e828c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008fe500();
extern "C" void fn_00a70410();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a70110
extern "C" __declspec(naked) void asm_00a70110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a516 }
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
	__asm { call fn_00a70410 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e828c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a701cf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e828c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeadae0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8160 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7bf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a701cf: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e8160 }
	__asm { call fn_008fe500 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeadee0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a7024d }
	__asm { push 0x12574dc }
	__asm { mov ecx, 0x12574dc }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a7024d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a70238 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a7024d }
	__asm { L_00a70238: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a7024d: }
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
extern "C" char g_012e828c[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00a70470();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a70260
extern "C" __declspec(naked) void asm_00a70260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a546 }
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
	__asm { call fn_00a70470 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e828c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a7031f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e828c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeadae0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8160 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7bf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a7031f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e8160 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeadcd8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a7039d }
	__asm { push 0x12574dc }
	__asm { mov ecx, 0x12574dc }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a7039d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a70388 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a7039d }
	__asm { L_00a70388: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a7039d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00eadae0[];
extern "C" char g_01300110[];
extern "C" void fn_004038a0();
extern "C" void fn_006b98f0();
extern "C" void fn_007b5bb0();
extern "C" void fn_00a704d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a70590
extern "C" __declspec(naked) void asm_00a70590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a580 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a704d0 }
	__asm { mov byte ptr [esi + 0x64], 1 }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [esi], 0xeadb9c }
	__asm { mov dword ptr [esi + 4], 0xeadc14 }
	__asm { mov dword ptr [esi + 0x18], 0xeadc1c }
	__asm { mov dword ptr [esi + 0x1c], 0xeadc28 }
	__asm { cmp byte ptr [g_00eadae0], cl }
	__asm { mov eax, 0xf }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xeadae0 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
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
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jb L_00a70630 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a70630: }
	__asm { cmp dword ptr [g_01300110], 0 }
	__asm { je L_00a7065d }
	__asm { push 0xeadae0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0xf13560 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00a7065d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [g_01300110], esi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a70dc0
extern "C" __declspec(naked) void asm_00a70dc0()
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
	__asm { mov dword ptr [esi + 8], 0xeaf094 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xeaf1f4 }
	__asm { mov dword ptr [esi + 8], 0xeaf204 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a70e6a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00a70e56 }
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
	__asm { L_00a70e56: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a70e6a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a70e80
extern "C" __declspec(naked) void asm_00a70e80()
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
	__asm { mov dword ptr [esi + 8], 0xeaf0a4 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xeaf224 }
	__asm { mov dword ptr [esi + 8], 0xeaf234 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a70f2a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00a70f16 }
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
	__asm { L_00a70f16: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a70f2a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00b33fa0();
// FUNCTION: ROBLOXSTUDIO 0x00a72300
extern "C" __declspec(naked) void asm_00a72300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a680 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00a72368 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, 0xeaf288 }
	__asm { or eax, 1 }
	__asm { jmp L_00a7236a }
	__asm { L_00a72368: }
	__asm { xor eax, eax }
	__asm { L_00a7236a: }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp esi, ecx }
	__asm { je L_00a723d3 }
	__asm { mov dword ptr [ebp - 0x5c], 0 }
	__asm { mov eax, ecx }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b33fa0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_00b33fa0 }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b33fa0 }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a723d0 }
	__asm { test al, 1 }
	__asm { jne L_00a723c9 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a723c9 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a723c9: }
	__asm { mov dword ptr [ebp - 0x5c], 0 }
	__asm { L_00a723d0: }
	__asm { mov eax, dword ptr [ebp - 0x3c] }
	__asm { L_00a723d3: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a723f7 }
	__asm { test al, 1 }
	__asm { jne L_00a723f7 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a723f7 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a723f7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00a7adf0();
// FUNCTION: ROBLOXSTUDIO 0x00a73560
extern "C" __declspec(naked) void asm_00a73560()
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
	__asm { je L_00a735ab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00a735ab: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00a735fe }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xeaf09c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xeaf194 }
	__asm { mov dword ptr [esi + 8], 0xeaf1a4 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xeaf1ac }
	__asm { mov dword ptr [esi + 8], 0xeaf1bc }
	__asm { jmp L_00a73600 }
	__asm { L_00a735fe: }
	__asm { xor esi, esi }
	__asm { L_00a73600: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00a7adf0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00a7361d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00a7361d: }
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
extern "C" void fn_00a7afa0();
// FUNCTION: ROBLOXSTUDIO 0x00a73670
extern "C" __declspec(naked) void asm_00a73670()
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
	__asm { je L_00a736bb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00a736bb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00a7370e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xeaf0ac }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xeaf1c4 }
	__asm { mov dword ptr [esi + 8], 0xeaf1d4 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xeaf1dc }
	__asm { mov dword ptr [esi + 8], 0xeaf1ec }
	__asm { jmp L_00a73710 }
	__asm { L_00a7370e: }
	__asm { xor esi, esi }
	__asm { L_00a73710: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00a7afa0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00a7372d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00a7372d: }
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
extern "C" void fn_00a70dc0();
extern "C" void fn_00a7adf0();
// FUNCTION: ROBLOXSTUDIO 0x00a73780
extern "C" __declspec(naked) void asm_00a73780()
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
	__asm { je L_00a737cb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00a737cb: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a737f4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00a70dc0 }
	__asm { mov dword ptr [esi], 0xeaf20c }
	__asm { mov dword ptr [esi + 8], 0xeaf21c }
	__asm { jmp L_00a737f6 }
	__asm { L_00a737f4: }
	__asm { xor esi, esi }
	__asm { L_00a737f6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a7adf0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00a7381a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00a7381a: }
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
extern "C" void fn_00a70e80();
extern "C" void fn_00a7afa0();
// FUNCTION: ROBLOXSTUDIO 0x00a73860
extern "C" __declspec(naked) void asm_00a73860()
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
	__asm { je L_00a738ab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00a738ab: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a738d4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00a70e80 }
	__asm { mov dword ptr [esi], 0xeaf23c }
	__asm { mov dword ptr [esi + 8], 0xeaf24c }
	__asm { jmp L_00a738d6 }
	__asm { L_00a738d4: }
	__asm { xor esi, esi }
	__asm { L_00a738d6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a7afa0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00a738fa }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00a738fa: }
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
extern "C" void fn_0048e3f0();
extern "C" void fn_00788700();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
// FUNCTION: ROBLOXSTUDIO 0x00a73c40
extern "C" __declspec(naked) void asm_00a73c40()
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
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_00788700 }
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

extern "C" void fn_00410d50();
extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_00788700();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_007d5d30();
// FUNCTION: ROBLOXSTUDIO 0x00a73d00
extern "C" __declspec(naked) void asm_00a73d00()
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
	__asm { push 4 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5d30 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00410d50 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_00788700 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea ecx, [esi + 0xd0] }
	__asm { mov dword ptr [esi + 0xcc], eax }
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
	__asm { ret 0x10 }
}

extern "C" void fn_006b98f0();
extern "C" void fn_007d1960();
extern "C" void fn_00825140();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a73e40
extern "C" __declspec(naked) void asm_00a73e40()
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
	__asm { cmp eax, 4 }
	__asm { jb L_00a73f0b }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { push ecx }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a73e93 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a73e93: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a73ef1 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_007d1960 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00a73ee0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00a73ee0: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a73ef1: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a73f0b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a73f0b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a73f25 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a73f25: }
	__asm { push 4 }
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

extern "C" void fn_00a74030();
extern "C" void fn_00a74130();
// FUNCTION: ROBLOXSTUDIO 0x00a741a0
extern "C" __declspec(naked) void asm_00a741a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { cmp eax, ecx }
	__asm { je L_00a74250 }
	__asm { mov bl, byte ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { L_00a741c0: }
	__asm { mov dl, byte ptr [eax] }
	__asm { cmp dl, bl }
	__asm { je L_00a7425c }
	__asm { cmp dl, 0x2c }
	__asm { je L_00a7425c }
	__asm { cmp dl, 0x27 }
	__asm { jne L_00a741ed }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00a74130 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 0xc }
	__asm { jmp L_00a74248 }
	__asm { L_00a741ed: }
	__asm { cmp dl, 0x22 }
	__asm { jne L_00a74207 }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_00a74130 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 0xc }
	__asm { jmp L_00a74248 }
	__asm { L_00a74207: }
	__asm { cmp dl, 0x28 }
	__asm { jne L_00a74227 }
	__asm { push esi }
	__asm { push 0x403160 }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_00a74030 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 0x14 }
	__asm { jmp L_00a74248 }
	__asm { L_00a74227: }
	__asm { cmp dl, 0x5b }
	__asm { jne L_00a74247 }
	__asm { push edi }
	__asm { push 0x403160 }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00a74030 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 0x14 }
	__asm { jmp L_00a74248 }
	__asm { L_00a74247: }
	__asm { inc eax }
	__asm { L_00a74248: }
	__asm { cmp eax, ecx }
	__asm { jne L_00a741c0 }
	__asm { L_00a74250: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a7425c: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0043d7c0();
extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00a75080();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a74290
extern "C" __declspec(naked) void asm_00a74290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3759e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00a75080 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 0x18 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xeae384 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x30], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00a74319 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { jmp L_00a7431b }
	__asm { L_00a74319: }
	__asm { xor esi, esi }
	__asm { L_00a7431b: }
	__asm { mov dword ptr [edi + 0x30], esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_007d5550 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_0043d7c0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp + 0x30], eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5550 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x30] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_00a7437e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a7437e: }
	__asm { cmp dword ptr [ebp + 0x2c], 0x10 }
	__asm { jb L_00a7438f }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a7438f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00a75190();
// FUNCTION: ROBLOXSTUDIO 0x00a743b0
extern "C" __declspec(naked) void asm_00a743b0()
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
	__asm { call fn_00a75190 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xeae4b0 }
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
	__asm { je L_00a7445e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a7445e: }
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
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00a75190();
// FUNCTION: ROBLOXSTUDIO 0x00a74800
extern "C" __declspec(naked) void asm_00a74800()
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
	__asm { call fn_00a75190 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xeae4c8 }
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
	__asm { je L_00a748ae }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a748ae: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a74a50
extern "C" __declspec(naked) void asm_00a74a50()
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
	__asm { push 0x11f0664 }
	__asm { mov edi, ecx }
	__asm { push 0xeae310 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe597a8 }
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
	__asm { push 0xeae328 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0x102991c }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xf12998 }
	__asm { push 2 }
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
extern "C" char g_012e887c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a75080
extern "C" __declspec(naked) void asm_00a75080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a836 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e887c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00a750fa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e887c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeadf8c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8750 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7850 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a750fa: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e8750 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xeae378 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a75172 }
	__asm { push 0x1257a54 }
	__asm { mov ecx, 0x1257a54 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a75172 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a7515d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a75172 }
	__asm { L_00a7515d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a75172: }
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
extern "C" char g_012e874c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a75190
extern "C" __declspec(naked) void asm_00a75190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a856 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e874c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00a7520a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e874c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeadf9c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8620 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a7520a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e8620 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xeae428 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a75282 }
	__asm { push 0x1257a78 }
	__asm { mov ecx, 0x1257a78 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a75282 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a7526d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a75282 }
	__asm { L_00a7526d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a75282: }
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
extern "C" char g_012e874c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a752a0
extern "C" __declspec(naked) void asm_00a752a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a876 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e874c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00a7531a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e874c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeadf9c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8620 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a7531a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e8620 }
	__asm { call fn_0092b930 }
	__asm { mov dword ptr [esi], 0xeae410 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a75392 }
	__asm { push 0x1257a78 }
	__asm { mov ecx, 0x1257a78 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a75392 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a7537d }
	__asm { push 0x662 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a75392 }
	__asm { L_00a7537d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe55e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a75392: }
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
extern "C" void fn_00a78180();
// FUNCTION: ROBLOXSTUDIO 0x00a76120
extern "C" __declspec(naked) void asm_00a76120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4aa58 }
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
	__asm { je L_00a761ad }
	__asm { add esi, 5 }
	__asm { je L_00a76175 }
	__asm { add esi, -5 }
	__asm { jmp L_00a76177 }
	__asm { L_00a76175: }
	__asm { xor esi, esi }
	__asm { L_00a76177: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a761a7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a761a7 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00a761ad }
	__asm { L_00a761a7: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a761ad: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00a78180 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a761fc }
	__asm { add esi, 5 }
	__asm { je L_00a761d2 }
	__asm { add esi, -5 }
	__asm { jmp L_00a761d4 }
	__asm { L_00a761d2: }
	__asm { xor esi, esi }
	__asm { L_00a761d4: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a761fc }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a761fc }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00a761fc: }
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
extern "C" void fn_00a78510();
// FUNCTION: ROBLOXSTUDIO 0x00a76210
extern "C" __declspec(naked) void asm_00a76210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4aa88 }
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
	__asm { je L_00a7629d }
	__asm { add esi, 5 }
	__asm { je L_00a76265 }
	__asm { add esi, -5 }
	__asm { jmp L_00a76267 }
	__asm { L_00a76265: }
	__asm { xor esi, esi }
	__asm { L_00a76267: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a76297 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a76297 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00a7629d }
	__asm { L_00a76297: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a7629d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00a78510 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a762ec }
	__asm { add esi, 5 }
	__asm { je L_00a762c2 }
	__asm { add esi, -5 }
	__asm { jmp L_00a762c4 }
	__asm { L_00a762c2: }
	__asm { xor esi, esi }
	__asm { L_00a762c4: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a762ec }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a762ec }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00a762ec: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10500[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a76a70
extern "C" __declspec(naked) void asm_00a76a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, ecx }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_00a76ac2 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_00a76acc }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00a76acc }
	__asm { L_00a76ac2: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00a76acc: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp dword ptr [ebp - 8], 0x10 }
	__asm { jb L_00a76afa }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a76afa: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00a77da0
extern "C" __declspec(naked) void asm_00a77da0()
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
	__asm { call fn_00825140 }
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
	__asm { call fn_007d5710 }
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
	__asm { call fn_007d5390 }
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
	__asm { je L_00a77e41 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a77e41: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a77e58 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a77e58: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a77e78 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a77e78: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_004033d0();
extern "C" void fn_00426fa0();
extern "C" void fn_007737e0();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_00a7dbe0();
// FUNCTION: ROBLOXSTUDIO 0x00a79ad0
extern "C" __declspec(naked) void asm_00a79ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2c590 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x88], 0 }
	__asm { je L_00a79b90 }
	__asm { cmp dword ptr [esi + 0x180], 0 }
	__asm { lea ecx, [esi + 0x180] }
	__asm { mov byte ptr [esi + 0x88], 0 }
	__asm { je L_00a79b18 }
	__asm { call fn_00426fa0 }
	__asm { jmp L_00a79b89 }
	__asm { L_00a79b18: }
	__asm { cmp dword ptr [esi + 0x94], 0 }
	__asm { jne L_00a79b47 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push 0xeae678 }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007737e0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { jmp L_00a79b7d }
	__asm { L_00a79b47: }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { push dword ptr [esi + 0x9c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { push dword ptr [esi + 0x98] }
	__asm { push dword ptr [esi + 0x94] }
	__asm { push 0xeae6a4 }
	__asm { push 1 }
	__asm { push dword ptr [eax] }
	__asm { call fn_00773930 }
	__asm { add esp, 0x1c }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { L_00a79b7d: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { L_00a79b89: }
	__asm { mov ecx, esi }
	__asm { call fn_00a7dbe0 }
	__asm { L_00a79b90: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00403540();
extern "C" void fn_00a776f0();
extern "C" void fn_00a79ad0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a79ba0
extern "C" __declspec(naked) void asm_00a79ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b060 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x64], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00a79bf4 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x10], 0xeaf078 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x20], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00a79bf4: }
	__asm { push 0 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x64] }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00a776f0 }
	__asm { mov ecx, dword ptr [esi + 0x64] }
	__asm { call fn_00a79ad0 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00a79c59 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a79c59: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412300();
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_00a76cf0();
// FUNCTION: ROBLOXSTUDIO 0x00a7a5f0
extern "C" __declspec(naked) void asm_00a7a5f0()
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
	__asm { je L_00a7a66f }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_00a7a66f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a7a65e }
	__asm { push 0x169 }
	__asm { push 0xe52268 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a7a66f }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00a7a65e: }
	__asm { movzx eax, bl }
	__asm { push 0xe72810 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a7a66f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a7a67b }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00a7a67d }
	__asm { L_00a7a67b: }
	__asm { xor edi, edi }
	__asm { L_00a7a67d: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x8c }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { add ecx, 0x44 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
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
	__asm { call fn_00a76cf0 }
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
extern "C" void fn_00410bb0();
extern "C" void fn_00412300();
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_00a76e60();
// FUNCTION: ROBLOXSTUDIO 0x00a7a7d0
extern "C" __declspec(naked) void asm_00a7a7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57380 }
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
	__asm { je L_00a7a84f }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 4 }
	__asm { je L_00a7a84f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a7a83e }
	__asm { push 0x18a }
	__asm { push 0xe52268 }
	__asm { push 0xe636c0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a7a84f }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00a7a83e: }
	__asm { movzx eax, bl }
	__asm { push 0xe636d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a7a84f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a7a85b }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00a7a85d }
	__asm { L_00a7a85b: }
	__asm { xor edi, edi }
	__asm { L_00a7a85d: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0xd0 }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { add ecx, 0x88 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { push eax }
	__asm { call fn_0079a070 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 8], esp }
	__asm { add ecx, 0x44 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004d1ca0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00410bb0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a76e60 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10528[];
extern "C" void fn_006b98f0();
extern "C" void fn_008523c0();
extern "C" void fn_00960b90();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a7ad30
extern "C" __declspec(naked) void asm_00a7ad30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008523c0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00a7ad88 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0xeaf04c }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x1c], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00a7ad88: }
	__asm { push esi }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0x88] }
	__asm { call fn_00960b90 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_00a7adc9 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { lea eax, [ebp + 8] }
	__asm { cmovae eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0xeaf060 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00a7adc9: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00a7adda }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a7adda: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_004226b0();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9cb0();
extern "C" void fn_006b9e50();
extern "C" void fn_00a73530();
extern "C" void fn_00a73640();
// FUNCTION: ROBLOXSTUDIO 0x00a7c4c0
extern "C" __declspec(naked) void asm_00a7c4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4aff0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { je L_00a7c5d3 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x1a0] }
	__asm { mov dword ptr [ebp - 0x1c], 0xa7c090 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00a73530 }
	__asm { mov ebx, eax }
	__asm { push ebx }
	__asm { lea ecx, [esi + 0x1b0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9cb0 }
	__asm { test al, al }
	__asm { je L_00a7c53e }
	__asm { lea ecx, [esi + 0x1b0] }
	__asm { call fn_006b9e50 }
	__asm { push ebx }
	__asm { lea ecx, [esi + 0x1b0] }
	__asm { call fn_006b9b80 }
	__asm { L_00a7c53e: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a7c558 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00a7c558: }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x1a8] }
	__asm { mov dword ptr [ebp - 0x1c], 0xa7bf70 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00a73640 }
	__asm { mov edi, eax }
	__asm { add esi, 0x1b4 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_006b9cb0 }
	__asm { test al, al }
	__asm { je L_00a7c5a6 }
	__asm { mov ecx, esi }
	__asm { call fn_006b9e50 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006b9b80 }
	__asm { L_00a7c5a6: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a7c5ef }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a7c5d3: }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { je L_00a7c5ef }
	__asm { lea ecx, [esi + 0x1b0] }
	__asm { call fn_006b9e50 }
	__asm { lea ecx, [esi + 0x1b4] }
	__asm { call fn_006b9e50 }
	__asm { L_00a7c5ef: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004033d0();
extern "C" void fn_00426fa0();
extern "C" void fn_006b98c0();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_007b4f50();
extern "C" void fn_00a76940();
extern "C" void fn_00a7dbe0();
// FUNCTION: ROBLOXSTUDIO 0x00a7c610
extern "C" __declspec(naked) void asm_00a7c610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4b010 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp eax, dword ptr [esi + 0x8c] }
	__asm { jne L_00a7c71f }
	__asm { cmp byte ptr [esi + 0x88], 0 }
	__asm { je L_00a7c71f }
	__asm { inc dword ptr [esi + 0x94] }
	__asm { push 0x1309070 }
	__asm { mov byte ptr [esi + 0x88], 0 }
	__asm { call fn_007b4f50 }
	__asm { inc dword ptr [esi + 0x9c] }
	__asm { push 0x13090c8 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { cmp dword ptr [esi + 0x120], 0 }
	__asm { je L_00a7c6cd }
	__asm { push 0 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 8], esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { fld qword ptr [ebp + 0xc] }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xeae724 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [esi + 0x120] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a76940 }
	__asm { jmp L_00a7c704 }
	__asm { L_00a7c6cd: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { fld qword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xeae74c }
	__asm { push 3 }
	__asm { push dword ptr [eax] }
	__asm { call fn_00773930 }
	__asm { add esp, 0x14 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { L_00a7c704: }
	__asm { cmp dword ptr [esi + 0x180], 0 }
	__asm { lea ecx, [esi + 0x180] }
	__asm { je L_00a7c718 }
	__asm { call fn_00426fa0 }
	__asm { L_00a7c718: }
	__asm { mov ecx, esi }
	__asm { call fn_00a7dbe0 }
	__asm { L_00a7c71f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10528[];
extern "C" void fn_00403540();
extern "C" void fn_00a776f0();
extern "C" void fn_00a79ad0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a7c860
extern "C" __declspec(naked) void asm_00a7c860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b060 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x64], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00a7c8b4 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x10], 0xeaf078 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x20], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00a7c8b4: }
	__asm { push 0 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x64] }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00a776f0 }
	__asm { mov ecx, dword ptr [esi + 0x64] }
	__asm { call fn_00a79ad0 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00a7c919 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a7c919: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" void fn_004038a0();
extern "C" void fn_00497220();
extern "C" void fn_00936630();
extern "C" void fn_00a70820();
extern "C" void fn_00a70890();
extern "C" void fn_00a709c0();
extern "C" void fn_00a709d0();
extern "C" void fn_00a70a00();
extern "C" void fn_00a70d90();
extern "C" void fn_00a7bba0();
extern "C" void fn_00c57680();
// FUNCTION: ROBLOXSTUDIO 0x00a7d6f0
extern "C" __declspec(naked) void asm_00a7d6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd53888 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_00936630 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_00a70890 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0xa4], eax }
	__asm { call fn_00a70820 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esi + 0xa8], al }
	__asm { call fn_00a709c0 }
	__asm { mov byte ptr [esi + 0xa9], al }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov byte ptr [esi + 0xaa], al }
	__asm { call fn_00497220 }
	__asm { fld dword ptr [esi + 0xd4] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00c57680 }
	__asm { cmp byte ptr [esi + 0xd2], 0 }
	__asm { je L_00a7d770 }
	__asm { cmp byte ptr [esi + 0xd0], 0 }
	__asm { jne L_00a7d7ce }
	__asm { L_00a7d770: }
	__asm { push 0 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0x18 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xeae828 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a7bba0 }
	__asm { mov byte ptr [g_012de657], 0 }
	__asm { cmp byte ptr [esi + 0xd0], 0 }
	__asm { je L_00a7d7d2 }
	__asm { L_00a7d7ce: }
	__asm { push 0 }
	__asm { jmp L_00a7d7d4 }
	__asm { L_00a7d7d2: }
	__asm { push 1 }
	__asm { L_00a7d7d4: }
	__asm { mov ecx, edi }
	__asm { call fn_00a70a00 }
	__asm { movzx eax, byte ptr [esi + 0xd1] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00a709d0 }
	__asm { movzx eax, byte ptr [esi + 0xd2] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00a70d90 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00403540();
extern "C" void fn_00a79ad0();
extern "C" void fn_00a7df00();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a7de30
extern "C" __declspec(naked) void asm_00a7de30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b060 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x64], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00a7de84 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x10], 0xeaf078 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x20], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00a7de84: }
	__asm { push 0 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x64] }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00a7df00 }
	__asm { mov ecx, dword ptr [esi + 0x64] }
	__asm { call fn_00a79ad0 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00a7dee9 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a7dee9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e8e6c[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00a7f170();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a7e180
extern "C" __declspec(naked) void asm_00a7e180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b206 }
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
	__asm { call fn_00a7f170 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e8e6c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a7e23f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e8e6c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1032afc }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8d40 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7760 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a7e23f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e8d40 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeaf800 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a7e2bd }
	__asm { push 0x125a9a4 }
	__asm { mov ecx, 0x125a9a4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a7e2bd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a7e2a8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a7e2bd }
	__asm { L_00a7e2a8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a7e2bd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x00a7e3f0
extern "C" __declspec(naked) void asm_00a7e3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [g_00e10500] }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_00a7e42e }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_00a7e438 }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call ecx }
	__asm { mov ecx, dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00a7e438 }
	__asm { L_00a7e42e: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00a7e438: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { lea ebx, [edi + 0x18] }
	__asm { add esi, 0x18 }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_00a7e482 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_00a7e48c }
	__asm { push eax }
	__asm { push esi }
	__asm { push ebx }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { jmp L_00a7e48c }
	__asm { L_00a7e482: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00a7e48c: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebx + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00402fd0();
// FUNCTION: ROBLOXSTUDIO 0x00a7e550
extern "C" __declspec(naked) void asm_00a7e550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00a7e562 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_00a7e564 }
	__asm { L_00a7e562: }
	__asm { mov eax, esi }
	__asm { L_00a7e564: }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, edi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { js L_00a7e5c2 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00a7e585 }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_00a7e587 }
	__asm { L_00a7e585: }
	__asm { mov eax, edi }
	__asm { L_00a7e587: }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { js L_00a7e5bc }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { add esi, 0x18 }
	__asm { lea ecx, [edi + 0x18] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00a7e5ac }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00a7e5ac: }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { js L_00a7e5c2 }
	__asm { L_00a7e5bc: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a7e5c2: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a7f940();
extern "C" void fn_00a7fdd0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a7ef40
extern "C" __declspec(naked) void asm_00a7ef40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b291 }
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
	__asm { L_00a7ef74: }
	__asm { cmp edi, ebx }
	__asm { je L_00a7efbb }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00a7ef8b }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00a7f940 }
	__asm { L_00a7ef8b: }
	__asm { add esi, 0x50 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { add edi, 0x50 }
	__asm { jmp L_00a7ef74 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_00a7efb2 }
	__asm { L_00a7efa4: }
	__asm { mov ecx, esi }
	__asm { call fn_00a7fdd0 }
	__asm { add esi, 0x50 }
	__asm { cmp esi, edi }
	__asm { jne L_00a7efa4 }
	__asm { L_00a7efb2: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00a7efbb: }
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

extern "C" void fn_007de8e0();
extern "C" void fn_00a7e2d0();
extern "C" void fn_00be4b60();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a7efd0
extern "C" __declspec(naked) void asm_00a7efd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57b26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xf4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00a7f02d }
	__asm { push dword ptr [ebp + 0x3c] }
	__asm { lea ecx, [ebp + 0x24] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00be4b60 }
	__asm { mov esi, eax }
	__asm { jmp L_00a7f02f }
	__asm { L_00a7f02d: }
	__asm { xor esi, esi }
	__asm { L_00a7f02f: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00a7e2d0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_00a7f05a }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00a7f05a }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00a7f05a: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00a7f06b }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a7f06b: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_00a7f08e }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a7f08e: }
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
extern "C" void fn_00a7e360();
extern "C" void fn_00be4d80();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a7f0a0
extern "C" __declspec(naked) void asm_00a7f0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57b26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xf4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00a7f0fa }
	__asm { lea ecx, [ebp + 0x24] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00be4d80 }
	__asm { mov esi, eax }
	__asm { jmp L_00a7f0fc }
	__asm { L_00a7f0fa: }
	__asm { xor esi, esi }
	__asm { L_00a7f0fc: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00a7e360 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_00a7f127 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00a7f127 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00a7f127: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00a7f138 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a7f138: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_00a7f15b }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a7f15b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0043d7c0();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00a7f4a0();
extern "C" void fn_00a80830();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a7f2e0
extern "C" __declspec(naked) void asm_00a7f2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b2d9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00a7f4a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xeaf7c8 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { push 0x18 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x34], esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_00a7f36e }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { jmp L_00a7f370 }
	__asm { L_00a7f36e: }
	__asm { xor esi, esi }
	__asm { L_00a7f370: }
	__asm { mov dword ptr [edi + 0x34], esi }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp + 0x34], esp }
	__asm { mov esi, esp }
	__asm { call fn_007d5550 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_0043d7c0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00a80830 }
	__asm { cmp dword ptr [ebp + 0x30], 0x10 }
	__asm { jb L_00a7f3cb }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a7f3cb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e8e6c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a7f4a0
extern "C" __declspec(naked) void asm_00a7f4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b326 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e8e6c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00a7f51a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e8e6c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1032afc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8d40 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7760 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a7f51a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e8d40 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xeaf79c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a7f592 }
	__asm { push 0x125a9a4 }
	__asm { mov ecx, 0x125a9a4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a7f592 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a7f57d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a7f592 }
	__asm { L_00a7f57d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a7f592: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a7fdd0
extern "C" __declspec(naked) void asm_00a7fdd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd56b83 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00a7fe1d }
	__asm { test al, 1 }
	__asm { jne L_00a7fe16 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x38] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a7fe16 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a7fe16: }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { L_00a7fe1d: }
	__asm { cmp dword ptr [esi + 0x2c], 0x10 }
	__asm { jb L_00a7fe2e }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a7fe2e: }
	__asm { mov dword ptr [esi + 0x2c], 0xf }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov byte ptr [esi + 0x18], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00a7fe50 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a7fe50: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_00a7e630();
extern "C" void fn_00a7ef40();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a802d0
extern "C" __declspec(naked) void asm_00a802d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b450 }
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
	__asm { je L_00a80325 }
	__asm { cmp ebx, 0x3333333 }
	__asm { ja L_00a8031f }
	__asm { lea eax, [ebx + ebx*4] }
	__asm { shl eax, 4 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00a80325 }
	__asm { L_00a8031f: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00a80325: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00a7ef40 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { sub ecx, dword ptr [edi] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a80383 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [edi + 4] }
	__asm { push eax }
	__asm { call fn_00a7e630 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_00a80383: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [ebx + ebx*4] }
	__asm { shl eax, 4 }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [edi], esi }
	__asm { lea eax, [eax + eax*4] }
	__asm { shl eax, 4 }
	__asm { add eax, esi }
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
extern "C" void fn_00a802d0();
// FUNCTION: ROBLOXSTUDIO 0x00a803d0
extern "C" __declspec(naked) void asm_00a803d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x66666667 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_00a8046b }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul esi }
	__asm { sar edx, 5 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x3333333 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00a80421 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00a80421: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ebx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x3333333 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_00a80458 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a802d0 }
	__asm { L_00a80458: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a802d0 }
	__asm { L_00a8046b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" char g_0129295c[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a80750
extern "C" __declspec(naked) void asm_00a80750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00a8077c }
	__asm { mov ecx, dword ptr [g_0129295c] }
	__asm { cmp eax, ecx }
	__asm { ja L_00a807a5 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00a807ce }
	__asm { cmp eax, ecx }
	__asm { ja L_00a807f7 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a8077c: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 0xc], 0xeafa6c }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00a807a5: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 0xc], 0xeafa94 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00a807ce: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 0xc], 0xeafab0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00a807f7: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 0xc], 0xeafad8 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00a80830
extern "C" __declspec(naked) void asm_00a80830()
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
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a808ad }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a808ad: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a808c7 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a808c7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00a7e630();
extern "C" void fn_00a7ee80();
// FUNCTION: ROBLOXSTUDIO 0x00a80c10
extern "C" __declspec(naked) void asm_00a80c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jne L_00a80c54 }
	__asm { cmp edx, dword ptr [edi + 4] }
	__asm { jne L_00a80c54 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00a7e630 }
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
	__asm { L_00a80c54: }
	__asm { cmp eax, edx }
	__asm { je L_00a80c8e }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push edx }
	__asm { call fn_00a7ee80 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_00a7e630 }
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
	__asm { L_00a80c8e: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0078a6b0();
extern "C" void fn_0083e860();
extern "C" void fn_00a80670();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a80cd0
extern "C" __declspec(naked) void asm_00a80cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2cec0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0083e860 }
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
	__asm { je L_00a80d2f }
	__asm { add ecx, -0x1c }
	__asm { jmp L_00a80d31 }
	__asm { L_00a80d2f: }
	__asm { xor ecx, ecx }
	__asm { L_00a80d31: }
	__asm { push ebx }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push ecx }
	__asm { call fn_00a80670 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jb L_00a80d5a }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a80d5a: }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { jb L_00a80d7d }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a80d7d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00a80750();
extern "C" void fn_00a81260();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a81170
extern "C" __declspec(naked) void asm_00a81170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b588 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp + 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00a80750 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp + 0x24] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push -1 }
	__asm { push 0 }
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
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a81260 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00a8121e }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a8121e: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_00a81241 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a81241: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" char g_013094a0[];
extern "C" void fn_004038a0();
extern "C" void fn_00a81260();
// FUNCTION: ROBLOXSTUDIO 0x00a816d0
extern "C" __declspec(naked) void asm_00a816d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd436f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { cmp byte ptr [g_013094a0], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov edx, 0xea60a4 }
	__asm { mov eax, 0xeaf87c }
	__asm { push 1 }
	__asm { cmove edx, eax }
	__asm { sub esp, 0x18 }
	__asm { mov esi, esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { jne L_00a81731 }
	__asm { xor ecx, ecx }
	__asm { jmp L_00a8173f }
	__asm { L_00a81731: }
	__asm { mov ecx, edx }
	__asm { lea edi, [ecx + 1] }
	__asm { L_00a81736: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00a81736 }
	__asm { sub ecx, edi }
	__asm { L_00a8173f: }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a81260 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" char g_0125a880[];
extern "C" void fn_00403540();
extern "C" void fn_00a80750();
extern "C" void fn_00a81260();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a817a0
extern "C" __declspec(naked) void asm_00a817a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b588 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp byte ptr [g_0125a880], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { jne L_00a817fe }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp + 8], 0xeafaf4 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x24], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00a817fe: }
	__asm { lea eax, [ebp + 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00a80750 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp + 0x24] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push -1 }
	__asm { push 0 }
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
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a81260 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00a8187e }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a8187e: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_00a818a1 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a818a1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00403540();
extern "C" void fn_006b9740();
extern "C" void fn_00b2deb0();
// FUNCTION: ROBLOXSTUDIO 0x00a81d00
extern "C" __declspec(naked) void asm_00a81d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00a81d4c }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { ja L_00a81d4c }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a81d3b }
	__asm { push 0x44 }
	__asm { push 0xeafd88 }
	__asm { push 0xeafdd4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a81d4c }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a81d3b: }
	__asm { movzx eax, al }
	__asm { push 0xeafde8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a81d4c: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { lea esi, [eax + eax*4] }
	__asm { shl esi, 4 }
	__asm { add esi, dword ptr [edi + 8] }
	__asm { cmp ebx, esi }
	__asm { je L_00a81d6a }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00403540 }
	__asm { L_00a81d6a: }
	__asm { lea eax, [esi + 0x18] }
	__asm { lea ecx, [ebx + 0x18] }
	__asm { cmp ecx, eax }
	__asm { je L_00a81d7e }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00a81d7e: }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x30] }
	__asm { call fn_00b2deb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { inc eax }
	__asm { and eax, dword ptr [edi + 0x14] }
	__asm { dec dword ptr [edi + 4] }
	__asm { mov dword ptr [edi], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd560();
extern "C" void fn_0080ff10();
extern "C" void fn_00a81f50();
// FUNCTION: ROBLOXSTUDIO 0x00a81e00
extern "C" __declspec(naked) void asm_00a81e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x38] }
	__asm { test edi, edi }
	__asm { je L_00a81e2e }
	__asm { add edi, 0x1c }
	__asm { je L_00a81e2e }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0080ff10 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00a81e2e }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { jmp L_00a81e30 }
	__asm { L_00a81e2e: }
	__asm { xor ecx, ecx }
	__asm { L_00a81e30: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { pop edi }
	__asm { test al, al }
	__asm { je L_00a81e7a }
	__asm { test ecx, ecx }
	__asm { jne L_00a81e82 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a81e65 }
	__asm { push 0x14b }
	__asm { push 0xeaf958 }
	__asm { push 0xe69738 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a81e7e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a81e65: }
	__asm { movzx eax, al }
	__asm { push 0xeafc20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a81e7a: }
	__asm { test ecx, ecx }
	__asm { jne L_00a81e82 }
	__asm { L_00a81e7e: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a81e82: }
	__asm { lea eax, [ecx + 0x90] }
	__asm { push eax }
	__asm { lea eax, [ecx + 0x9c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00a81f50 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd560();
extern "C" void fn_0080ff10();
extern "C" void fn_00a81f50();
// FUNCTION: ROBLOXSTUDIO 0x00a81ea0
extern "C" __declspec(naked) void asm_00a81ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x38] }
	__asm { test edi, edi }
	__asm { je L_00a81ece }
	__asm { add edi, 0x1c }
	__asm { je L_00a81ece }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0080ff10 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00a81ece }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { jmp L_00a81ed0 }
	__asm { L_00a81ece: }
	__asm { xor ecx, ecx }
	__asm { L_00a81ed0: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { pop edi }
	__asm { test al, al }
	__asm { je L_00a81f1a }
	__asm { test ecx, ecx }
	__asm { jne L_00a81f22 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a81f05 }
	__asm { push 0x155 }
	__asm { push 0xeaf958 }
	__asm { push 0xe69738 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a81f1e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a81f05: }
	__asm { movzx eax, al }
	__asm { push 0xeafc88 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a81f1a: }
	__asm { test ecx, ecx }
	__asm { jne L_00a81f22 }
	__asm { L_00a81f1e: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a81f22: }
	__asm { lea eax, [ecx + 0x94] }
	__asm { push eax }
	__asm { lea eax, [ecx + 0xb4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00a81f50 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd560();
extern "C" void fn_0080ff10();
extern "C" void fn_00a81f50();
// FUNCTION: ROBLOXSTUDIO 0x00a82040
extern "C" __declspec(naked) void asm_00a82040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x38] }
	__asm { test edi, edi }
	__asm { je L_00a8206e }
	__asm { add edi, 0x1c }
	__asm { je L_00a8206e }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0080ff10 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00a8206e }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { jmp L_00a82070 }
	__asm { L_00a8206e: }
	__asm { xor ecx, ecx }
	__asm { L_00a82070: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { pop edi }
	__asm { test al, al }
	__asm { je L_00a820ba }
	__asm { test ecx, ecx }
	__asm { jne L_00a820c2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a820a5 }
	__asm { push 0x15f }
	__asm { push 0xeaf958 }
	__asm { push 0xe69738 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a820be }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a820a5: }
	__asm { movzx eax, al }
	__asm { push 0xeafcf0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a820ba: }
	__asm { test ecx, ecx }
	__asm { jne L_00a820c2 }
	__asm { L_00a820be: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a820c2: }
	__asm { lea eax, [ecx + 0x98] }
	__asm { push eax }
	__asm { lea eax, [ecx + 0xcc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00a81f50 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e8f9c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008a0770();
extern "C" void fn_00a82970();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a823f0
extern "C" __declspec(naked) void asm_00a823f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b626 }
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
	__asm { call fn_00a82970 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e8f9c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a824af }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e8f9c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb000c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8e70 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a824af: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e8e70 }
	__asm { call fn_008a0770 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeb0270 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a8252d }
	__asm { push 0x125af40 }
	__asm { mov ecx, 0x125af40 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a8252d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a82518 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a8252d }
	__asm { L_00a82518: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a8252d: }
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
extern "C" char g_012e8f9c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0088d5e0();
extern "C" void fn_00a829d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a82540
extern "C" __declspec(naked) void asm_00a82540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b656 }
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
	__asm { call fn_00a829d0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e8f9c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a825fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e8f9c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb000c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8e70 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a825fc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e8e70 }
	__asm { call fn_0088d5e0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeb0198 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a8267a }
	__asm { push 0x125af40 }
	__asm { mov ecx, 0x125af40 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a8267a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a82665 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a8267a }
	__asm { L_00a82665: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a8267a: }
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
extern "C" char g_012e8f9c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00a82a20();
extern "C" void fn_00a82a80();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a82690
extern "C" __declspec(naked) void asm_00a82690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b626 }
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
	__asm { call fn_00a82a20 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e8f9c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a8274f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e8f9c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb000c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8e70 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a8274f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e8e70 }
	__asm { call fn_00a82a80 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeb021c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a827cd }
	__asm { push 0x125af40 }
	__asm { mov ecx, 0x125af40 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a827cd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a827b8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a827cd }
	__asm { L_00a827b8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a827cd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00403110();
extern "C" void fn_00a48d60();
// FUNCTION: ROBLOXSTUDIO 0x00a828a0
extern "C" __declspec(naked) void asm_00a828a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b688 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov edx, edi }
	__asm { sub edx, esi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { inc edx }
	__asm { add eax, edx }
	__asm { cmp eax, 0xb }
	__asm { lea edx, [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { cmovae ecx, edx }
	__asm { mov dword ptr [ebp - 0x10], 0xb }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00a8291c }
	__asm { sub eax, 4 }
	__asm { L_00a8291c: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov dword ptr [ebx + 8], 0 }
	__asm { mov dword ptr [ebx + 0xc], 0x3f800000 }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { mov dword ptr [ebx + 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp esi, edi }
	__asm { je L_00a82952 }
	__asm { push edi }
	__asm { push esi }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00a48d60 }
	__asm { L_00a82952: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00793ca0();
extern "C" void fn_007d5c50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a82a80
extern "C" __declspec(naked) void asm_00a82a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29d6b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5c50 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00793ca0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi], 0xeb01e0 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00a82b17 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a82b06 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_00a82b06: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a82b17 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_00a82b17: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00a08e50();
extern "C" void fn_00a827e0();
extern "C" void fn_00a83410();
// FUNCTION: ROBLOXSTUDIO 0x00a82b40
extern "C" __declspec(naked) void asm_00a82b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b6b3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0xeb000c }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00a827e0 }
	__asm { lea esi, [edi + 0x64] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xeb00fc }
	__asm { mov dword ptr [edi + 4], 0xeb0174 }
	__asm { mov dword ptr [edi + 0x18], 0xeb017c }
	__asm { mov dword ptr [edi + 0x1c], 0xeb0188 }
	__asm { call fn_00a08e50 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edi + 0x8c], eax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { mov word ptr [edi + 0x90], ax }
	__asm { mov eax, dword ptr [ecx + 6] }
	__asm { mov dword ptr [edi + 0x92], eax }
	__asm { movzx eax, word ptr [ecx + 0xa] }
	__asm { mov word ptr [edi + 0x96], ax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_00a83410 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x14 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a839b0
extern "C" __declspec(naked) void asm_00a839b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { jne L_00a839c7 }
	__asm { lea eax, [esi + 0x11] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a839c7: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { mov dx, word ptr [ecx] }
	__asm { and ax, 0xf }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { and ax, 0x1f }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ebp - 6] }
	__asm { shl eax, 5 }
	__asm { movsx ebx, ax }
	__asm { shl ecx, 0xa }
	__asm { movsx eax, cx }
	__asm { add ebx, eax }
	__asm { and dx, 0x1f }
	__asm { movsx eax, dx }
	__asm { add ebx, eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov al, byte ptr [ebx + eax] }
	__asm { and al, 0x38 }
	__asm { cmp al, 0x28 }
	__asm { jne L_00a83a1c }
	__asm { pop ebx }
	__asm { mov eax, 0x11 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a83a1c: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov ecx, ebx }
	__asm { shr ecx, 1 }
	__asm { movzx eax, byte ptr [ecx + eax] }
	__asm { mov cl, bl }
	__asm { and cl, 1 }
	__asm { shl cl, 2 }
	__asm { shr eax, cl }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { and eax, 0xf }
	__asm { inc eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_008a2d70();
// FUNCTION: ROBLOXSTUDIO 0x00a83a40
extern "C" __declspec(naked) void asm_00a83a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ax, word ptr [ecx + 0x92] }
	__asm { cmp ax, word ptr [edx] }
	__asm { jne L_00a83a6c }
	__asm { mov ax, word ptr [ecx + 0x94] }
	__asm { cmp ax, word ptr [edx + 2] }
	__asm { jne L_00a83a6c }
	__asm { mov ax, word ptr [ecx + 0x96] }
	__asm { cmp ax, word ptr [edx + 4] }
	__asm { je L_00a83a8c }
	__asm { L_00a83a6c: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx + 0x92], eax }
	__asm { mov ax, word ptr [edx + 4] }
	__asm { mov word ptr [ecx + 0x96], ax }
	__asm { mov dword ptr [ebp + 8], 0x130963c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a83a8c: }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ax, word ptr [ecx + 0x8c] }
	__asm { cmp ax, word ptr [edx] }
	__asm { jne L_00a83abc }
	__asm { mov ax, word ptr [ecx + 0x8e] }
	__asm { cmp ax, word ptr [edx + 2] }
	__asm { jne L_00a83abc }
	__asm { mov ax, word ptr [ecx + 0x90] }
	__asm { cmp ax, word ptr [edx + 4] }
	__asm { je L_00a83adc }
	__asm { L_00a83abc: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx + 0x8c], eax }
	__asm { mov ax, word ptr [edx + 4] }
	__asm { mov word ptr [ecx + 0x90], ax }
	__asm { mov dword ptr [ebp + 8], 0x1309610 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a83adc: }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ecx + 0x64] }
	__asm { push eax }
	__asm { call fn_008a2d70 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e90cc[];
extern "C" void fn_0040bb80();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00a85000();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a83d40
extern "C" __declspec(naked) void asm_00a83d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b796 }
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
	__asm { call fn_00a85000 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e90cc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a83dff }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e90cc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb032c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8fa0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7bb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a83dff: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e8fa0 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeb08a0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a83e7d }
	__asm { push 0x125b5f4 }
	__asm { mov ecx, 0x125b5f4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a83e7d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a83e68 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a83e7d }
	__asm { L_00a83e68: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a83e7d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00a847b0();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00a84180
extern "C" __declspec(naked) void asm_00a84180()
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
	__asm { call fn_00a847b0 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a841fb }
	__asm { test al, 1 }
	__asm { jne L_00a841f4 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a841f4 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a841f4: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_00a841fb: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a84222 }
	__asm { test al, 1 }
	__asm { jne L_00a84222 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a84222 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a84222: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00aec810();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00a847b0
extern "C" __declspec(naked) void asm_00a847b0()
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
	__asm { mov esi, 0xeb14d8 }
	__asm { mov ecx, esi }
	__asm { call fn_00aec810 }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a8483a }
	__asm { test cl, 1 }
	__asm { jne L_00a84833 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00a84833 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a84833: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_00a8483a: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a8486a }
	__asm { test al, 1 }
	__asm { jne L_00a8486a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a8486a }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a8486a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00a85710();
// FUNCTION: ROBLOXSTUDIO 0x00a85170
extern "C" __declspec(naked) void asm_00a85170()
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
	__asm { call fn_00a85710 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xeb093c }
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
	__asm { call fn_007d5390 }
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
	__asm { je L_00a8521e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a8521e: }
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
extern "C" void fn_00a85820();
extern "C" void fn_00a88f30();
// FUNCTION: ROBLOXSTUDIO 0x00a85240
extern "C" __declspec(naked) void asm_00a85240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4e599 }
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
	__asm { call fn_00a85820 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xeb08f4 }
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
	__asm { call fn_00a88f30 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00a854a0
extern "C" __declspec(naked) void asm_00a854a0()
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
	__asm { push 0x125b5d0 }
	__asm { mov edi, ecx }
	__asm { push 0xeb0984 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xeb0888 }
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
	__asm { push 0xeabc08 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xeb0990 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xeb09a0 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xeb09b4 }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xeb09c8 }
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
extern "C" char g_012e91fc[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a85600
extern "C" __declspec(naked) void asm_00a85600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b8d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e91fc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00a8567a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e91fc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1010c4c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e90d0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ba0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a8567a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e90d0 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xeb095c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a856f2 }
	__asm { push 0x125b61c }
	__asm { mov ecx, 0x125b61c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a856f2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a856dd }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a856f2 }
	__asm { L_00a856dd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a856f2: }
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
extern "C" char g_012e91fc[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a85710
extern "C" __declspec(naked) void asm_00a85710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b8f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e91fc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00a8578a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e91fc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1010c4c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e90d0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ba0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a8578a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e90d0 }
	__asm { call fn_0092b930 }
	__asm { mov dword ptr [esi], 0xeb0930 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a85802 }
	__asm { push 0x125b61c }
	__asm { mov ecx, 0x125b61c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a85802 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a857ed }
	__asm { push 0x662 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a85802 }
	__asm { L_00a857ed: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe55e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a85802: }
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
extern "C" char g_012e90cc[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a85820
extern "C" __declspec(naked) void asm_00a85820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b916 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e90cc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00a8589a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e90cc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb032c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8fa0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7bb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a8589a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e8fa0 }
	__asm { call fn_0092b930 }
	__asm { mov dword ptr [esi], 0xeb08e8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a85912 }
	__asm { push 0x125b5f4 }
	__asm { mov ecx, 0x125b5f4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a85912 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a858fd }
	__asm { push 0x662 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a85912 }
	__asm { L_00a858fd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe55e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a85912: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00a85cc0();
// FUNCTION: ROBLOXSTUDIO 0x00a85930
extern "C" __declspec(naked) void asm_00a85930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b988 }
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
	__asm { call fn_00a85cc0 }
	__asm { mov dword ptr [esi], 0xeb03f4 }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { mov eax, dword ptr [edi + 0x48] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov eax, dword ptr [edi + 0x4c] }
	__asm { mov dword ptr [esi + 0x4c], eax }
	__asm { mov al, byte ptr [edi + 0x50] }
	__asm { mov byte ptr [esi + 0x50], al }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { mov ecx, dword ptr [edi + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a859f2 }
	__asm { mov dword ptr [esi + 0x58], ecx }
	__asm { test cl, 1 }
	__asm { je L_00a859de }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { mov dword ptr [esi + 0x60], eax }
	__asm { mov eax, dword ptr [edi + 0x64] }
	__asm { mov dword ptr [esi + 0x64], eax }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { mov dword ptr [esi + 0x68], eax }
	__asm { mov eax, dword ptr [edi + 0x6c] }
	__asm { mov dword ptr [esi + 0x6c], eax }
	__asm { mov eax, dword ptr [edi + 0x70] }
	__asm { mov dword ptr [esi + 0x70], eax }
	__asm { mov eax, dword ptr [edi + 0x74] }
	__asm { mov dword ptr [esi + 0x74], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a859de: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x60] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 0x60] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a859f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a85cc0
extern "C" __declspec(naked) void asm_00a85cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xeb03e8 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { movzx eax, word ptr [ecx + 0xc] }
	__asm { mov word ptr [esi + 0xc], ax }
	__asm { mov eax, dword ptr [ecx + 0xe] }
	__asm { mov dword ptr [esi + 0xe], eax }
	__asm { movzx eax, word ptr [ecx + 0x12] }
	__asm { mov word ptr [esi + 0x12], ax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov edx, dword ptr [ecx + 0x18] }
	__asm { test edx, edx }
	__asm { je L_00a85d46 }
	__asm { mov dword ptr [esi + 0x18], edx }
	__asm { test dl, 1 }
	__asm { je L_00a85d32 }
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ecx + 0x2c] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ecx + 0x30] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [ecx + 0x34] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a85d32: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [ecx + 0x20] }
	__asm { and edx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a85d46: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403110();
extern "C" void fn_00a064c0();
extern "C" void fn_00a853e0();
// FUNCTION: ROBLOXSTUDIO 0x00a85d50
extern "C" __declspec(naked) void asm_00a85d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b96c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00a853e0 }
	__asm { mov byte ptr [esi + 0x6c], 1 }
	__asm { mov dword ptr [esi + 0x64], 0xeb03e0 }
	__asm { mov dword ptr [esi + 0x68], 0xe39c90 }
	__asm { mov dword ptr [esi], 0xeb0404 }
	__asm { mov dword ptr [esi + 4], 0xeb047c }
	__asm { mov dword ptr [esi + 0x18], 0xeb0484 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb0490 }
	__asm { mov dword ptr [esi + 0x64], 0xeb04a0 }
	__asm { mov dword ptr [esi + 0x68], 0xeb04a8 }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov dword ptr [esi + 0x84], 0 }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [esi + 0x8c], 0 }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [esi + 0x94], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00a85e2f }
	__asm { sub eax, 4 }
	__asm { L_00a85e2f: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x98], eax }
	__asm { mov dword ptr [esi + 0x9c], 0 }
	__asm { mov dword ptr [esi + 0xa0], 0x3f800000 }
	__asm { mov dword ptr [esi + 0xa4], 0 }
	__asm { mov dword ptr [esi + 0xa8], 0 }
	__asm { push 1 }
	__asm { push 1 }
	__asm { lea ecx, [esi + 0xac] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00a064c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xb0], 0 }
	__asm { mov dword ptr [esi + 0xb4], 0 }
	__asm { mov eax, 0x7fff }
	__asm { mov word ptr [esi + 0xbc], ax }
	__asm { mov dword ptr [esi + 0xb8], 0x7fff7fff }
	__asm { mov dword ptr [esi + 0x70], 0x3e20a0a1 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a862f0
extern "C" __declspec(naked) void asm_00a862f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a8633d }
	__asm { test al, 1 }
	__asm { jne L_00a86336 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x60] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a86336 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a86336: }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { L_00a8633d: }
	__asm { mov dword ptr [esi], 0xeb03e8 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a86371 }
	__asm { test al, 1 }
	__asm { jne L_00a8636a }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a8636a }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a8636a: }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00a86371: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a84cd0();
extern "C" void fn_00a86fc0();
extern "C" void fn_00a88830();
extern "C" void fn_00a8af20();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a866d0
extern "C" __declspec(naked) void asm_00a866d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6c408 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { movsx esi, word ptr [ebx + 4] }
	__asm { movsx eax, word ptr [ebx + 2] }
	__asm { shl esi, 5 }
	__asm { add esi, eax }
	__asm { movsx eax, word ptr [ebx] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { shl esi, 5 }
	__asm { add esi, eax }
	__asm { movzx eax, byte ptr [edi] }
	__asm { inc eax }
	__asm { add eax, edi }
	__asm { je L_00a86713 }
	__asm { inc eax }
	__asm { jmp L_00a86715 }
	__asm { L_00a86713: }
	__asm { xor eax, eax }
	__asm { L_00a86715: }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00a84cd0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_00a867be }
	__asm { lea eax, [edi + 3] }
	__asm { test eax, eax }
	__asm { je L_00a86736 }
	__asm { inc eax }
	__asm { jmp L_00a86738 }
	__asm { L_00a86736: }
	__asm { xor eax, eax }
	__asm { L_00a86738: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov bx, word ptr [ebx + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_00a88830 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { test eax, eax }
	__asm { je L_00a86770 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov word ptr [eax + 4], bx }
	__asm { L_00a86770: }
	__asm { add eax, 8 }
	__asm { je L_00a8678a }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { L_00a8678a: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 0xf], 1 }
	__asm { call fn_00a8af20 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00a86fc0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_00a867bc }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a867bc: }
	__asm { mov eax, esi }
	__asm { L_00a867be: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10598[];
extern "C" void fn_0045fe60();
extern "C" void fn_0068b160();
extern "C" void fn_0068b610();
extern "C" void fn_00a8a360();
// FUNCTION: ROBLOXSTUDIO 0x00a86990
extern "C" __declspec(naked) void asm_00a86990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4ba28 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { call fn_00a8a360 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_0068b160 }
	__asm { call fn_00a8a360 }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { je L_00a869cf }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [eax], ecx }
	__asm { jmp L_00a869d8 }
	__asm { L_00a869cf: }
	__asm { mov ecx, eax }
	__asm { call fn_0068b610 }
	__asm { mov esi, eax }
	__asm { L_00a869d8: }
	__asm { test esi, esi }
	__asm { jne L_00a86a05 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { mov dword ptr [ebp - 0x24], 0xe1815c }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_0045fe60 }
	__asm { L_00a86a05: }
	__asm { call fn_00a8a360 }
	__asm { mov dword ptr [esi], esi }
	__asm { call fn_00a8a360 }
	__asm { lea eax, [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00a86a1a }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00a86a1a: }
	__asm { call fn_00a8a360 }
	__asm { lea eax, [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_00a86a28 }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00a86a28: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov word ptr [esi + 0xc], 0x101 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10598[];
extern "C" void fn_0045fe60();
extern "C" void fn_0068b160();
extern "C" void fn_0068b610();
extern "C" void fn_00a8a360();
// FUNCTION: ROBLOXSTUDIO 0x00a86a40
extern "C" __declspec(naked) void asm_00a86a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4ba28 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00a8a360 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_0068b160 }
	__asm { call fn_00a8a360 }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { je L_00a86a82 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [eax], ecx }
	__asm { jmp L_00a86a8b }
	__asm { L_00a86a82: }
	__asm { mov ecx, eax }
	__asm { call fn_0068b610 }
	__asm { mov esi, eax }
	__asm { L_00a86a8b: }
	__asm { test esi, esi }
	__asm { jne L_00a86ab8 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { mov dword ptr [ebp - 0x24], 0xe1815c }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_0045fe60 }
	__asm { L_00a86ab8: }
	__asm { call fn_00a8a360 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00a8a360 }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00a86ad1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00a86ad1: }
	__asm { call fn_00a8a360 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00a86ae1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00a86ae1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a86fc0
extern "C" __declspec(naked) void asm_00a86fc0()
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
	__asm { mov dword ptr [ebx + 0x4020], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_00a87026 }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00a87016 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0x401c] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_00a87016: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0x401c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_00a87034 }
	__asm { L_00a87026: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0x401c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00a87034: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_00a8704d }
	__asm { add ecx, 0xffffbfe4 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a8704d: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_006942c0();
extern "C" void fn_00891b10();
extern "C" void fn_00a8a610();
extern "C" void fn_00a8a990();
// FUNCTION: ROBLOXSTUDIO 0x00a87660
extern "C" __declspec(naked) void asm_00a87660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { call fn_00891b10 }
	__asm { add esp, 4 }
	__asm { test byte ptr [eax + 0xe8], 2 }
	__asm { jne L_00a87727 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [ecx + 0x30] }
	__asm { mov ebx, dword ptr [ecx + 0x34] }
	__asm { lea edx, [ecx + 0x24] }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { inc ecx }
	__asm { shl eax, cl }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { shl ebx, cl }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { shl eax, cl }
	__asm { push edi }
	__asm { mov edi, dword ptr [edx + 0x14] }
	__asm { mov edx, dword ptr [edx + 4] }
	__asm { shl edi, cl }
	__asm { shl esi, cl }
	__asm { shl edx, cl }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { sar ebx, 4 }
	__asm { sar eax, 5 }
	__asm { sar ecx, 5 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov ebx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { sar edx, 4 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { sar edi, 5 }
	__asm { sar esi, 5 }
	__asm { push eax }
	__asm { lea ecx, [ebx - 0x64] }
	__asm { mov dword ptr [ebp - 0x20], esi }
	__asm { mov dword ptr [ebp - 0x1c], edx }
	__asm { mov dword ptr [ebp - 0xc], edi }
	__asm { call fn_00a8a990 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { jne L_00a87724 }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { cmp dword ptr [eax + 0x20], esi }
	__asm { je L_00a87724 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edi, [eax + 8] }
	__asm { push edi }
	__asm { call fn_006942c0 }
	__asm { test al, al }
	__asm { je L_00a87724 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00a8a610 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea ecx, [ebx - 0x64] }
	__asm { call fn_00a8a990 }
	__asm { L_00a87724: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_00a87727: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a87060();
extern "C" void fn_00a89100();
extern "C" void fn_00b34640();
// FUNCTION: ROBLOXSTUDIO 0x00a88e80
extern "C" __declspec(naked) void asm_00a88e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4bb68 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [edi + 3] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { inc esi }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a87060 }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { lea edx, [ebx + esi*4] }
	__asm { mov ecx, ebx }
	__asm { cmp ebx, edx }
	__asm { je L_00a88ee7 }
	__asm { L_00a88ed6: }
	__asm { test ecx, ecx }
	__asm { je L_00a88ee0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { L_00a88ee0: }
	__asm { add ecx, 4 }
	__asm { cmp ecx, edx }
	__asm { jne L_00a88ed6 }
	__asm { L_00a88ee7: }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00a88f01 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [ecx + eax*4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx + ecx*4], eax }
	__asm { mov ecx, edi }
	__asm { call fn_00a89100 }
	__asm { L_00a88f01: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edi + 0x14], ebx }
	__asm { call fn_00b34640 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5470();
extern "C" void fn_007d5710();
extern "C" void fn_007d5be0();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00a88f30
extern "C" __declspec(naked) void asm_00a88f30()
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
	__asm { call fn_007d5be0 }
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
	__asm { call fn_007d5be0 }
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
	__asm { call fn_007d5470 }
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
	__asm { je L_00a88fd1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a88fd1: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a88fe8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a88fe8: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a89008 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a89008: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_0057db00();
extern "C" void fn_00a89020();
// FUNCTION: ROBLOXSTUDIO 0x00a895d0
extern "C" __declspec(naked) void asm_00a895d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { jne L_00a895e7 }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a895e7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { movzx edx, word ptr [eax + 4] }
	__asm { push esi }
	__asm { movzx esi, word ptr [eax + 2] }
	__asm { movsx ebx, dx }
	__asm { push edi }
	__asm { movzx edi, word ptr [eax] }
	__asm { movsx eax, si }
	__asm { shl ebx, 5 }
	__asm { add ebx, eax }
	__asm { movsx eax, di }
	__asm { shl ebx, 5 }
	__asm { add ebx, eax }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { mov dword ptr [ebp - 0xc], esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { xor edx, edx }
	__asm { mov eax, ebx }
	__asm { div esi }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov edi, dword ptr [eax + edx*4] }
	__asm { test edi, edi }
	__asm { je L_00a89672 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_00a89672 }
	__asm { L_00a89633: }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { xor edx, edx }
	__asm { mov eax, esi }
	__asm { div dword ptr [ebp - 4] }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { jne L_00a89672 }
	__asm { cmp esi, ebx }
	__asm { jne L_00a8966a }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { cmp ax, word ptr [ecx - 0x401c] }
	__asm { jne L_00a8966a }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { cmp ax, word ptr [ecx - 0x401a] }
	__asm { jne L_00a8966a }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { cmp ax, word ptr [ecx - 0x4018] }
	__asm { je L_00a8967d }
	__asm { L_00a8966a: }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { jne L_00a89633 }
	__asm { L_00a89672: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a8967d: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00a8968a }
	__asm { add eax, 0xffffbfe4 }
	__asm { jmp L_00a8968c }
	__asm { L_00a8968a: }
	__asm { xor eax, eax }
	__asm { L_00a8968c: }
	__asm { push dword ptr [eax + 0x401c] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push edi }
	__asm { call fn_00a89020 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
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

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
extern "C" void fn_00a87580();
// FUNCTION: ROBLOXSTUDIO 0x00a89a70
extern "C" __declspec(naked) void asm_00a89a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0e688 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { movzx eax, byte ptr [esi + 0x68] }
	__asm { mov edx, dword ptr [esi + 0x38] }
	__asm { push eax }
	__asm { lea eax, [edx + 0x64] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x40] }
	__asm { call fn_00a87580 }
	__asm { mov ecx, eax }
	__asm { cmp ecx, -1 }
	__asm { jne L_00a89ab0 }
	__asm { or eax, eax }
	__asm { jmp L_00a89ab5 }
	__asm { L_00a89ab0: }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { add eax, ecx }
	__asm { L_00a89ab5: }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { test ecx, ecx }
	__asm { jne L_00a89ae7 }
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
	__asm { L_00a89ae7: }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [esi + 0x50] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a84cd0();
// FUNCTION: ROBLOXSTUDIO 0x00a89d60
extern "C" __declspec(naked) void asm_00a89d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { movzx ebx, word ptr [edi] }
	__asm { cmp bx, word ptr [esi + 0xb8] }
	__asm { jne L_00a89d9e }
	__asm { mov ax, word ptr [edi + 2] }
	__asm { cmp ax, word ptr [esi + 0xba] }
	__asm { jne L_00a89d9e }
	__asm { mov ax, word ptr [edi + 4] }
	__asm { cmp ax, word ptr [esi + 0xbc] }
	__asm { jne L_00a89d9e }
	__asm { mov eax, dword ptr [esi + 0xb4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a89d9e: }
	__asm { movzx eax, byte ptr [esi + 0x94] }
	__asm { lea ecx, [esi + 0x94] }
	__asm { inc eax }
	__asm { add eax, ecx }
	__asm { je L_00a89db3 }
	__asm { inc eax }
	__asm { jmp L_00a89db5 }
	__asm { L_00a89db3: }
	__asm { xor eax, eax }
	__asm { L_00a89db5: }
	__asm { movsx edx, word ptr [edi + 4] }
	__asm { push eax }
	__asm { movsx eax, word ptr [edi + 2] }
	__asm { shl edx, 5 }
	__asm { add edx, eax }
	__asm { movsx eax, bx }
	__asm { shl edx, 5 }
	__asm { push edi }
	__asm { add edx, eax }
	__asm { push edx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00a84cd0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a89de0 }
	__asm { add eax, 8 }
	__asm { L_00a89de0: }
	__asm { mov dword ptr [esi + 0xb4], eax }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [esi + 0xb8], ecx }
	__asm { mov cx, word ptr [edi + 4] }
	__asm { pop edi }
	__asm { mov word ptr [esi + 0xbc], cx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_a05300a8[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a8a010
extern "C" __declspec(naked) void asm_00a8a010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, 3 }
	__asm { ja L_00a8a065 }
	__asm { jmp dword ptr [eax*4 + 0xa8a0b4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov word ptr [eax + 4], cx }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { or ecx, 0xffffffff }
	__asm { mov word ptr [eax + 4], cx }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { mov word ptr [eax], cx }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax + 2], ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, 1 }
	__asm { mov word ptr [eax + 4], cx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a8a065: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a8a0a6 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a8a095 }
	__asm { push 0x16a }
	__asm { push 0xeb0b00 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a8a0a6 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a8a095: }
	__asm { movzx eax, al }
	__asm { push 0xeb0e90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a8a0a6: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov word ptr [eax + 4], cx }
	__asm { pop ebp }
	__asm { ret }
	__asm { nop }
	__asm { and ah, byte ptr [eax - 0x5fccff58] }
	__asm { test al, 0 }
	__asm { inc ebx }
	__asm { mov al, byte ptr [g_a05300a8] }
	__asm { test al, 0 }
}

extern "C" void fn_00a89d60();
// FUNCTION: ROBLOXSTUDIO 0x00a8a6e0
extern "C" __declspec(naked) void asm_00a8a6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { movzx ebx, word ptr [edx + 2] }
	__asm { push esi }
	__asm { push edi }
	__asm { movzx edi, word ptr [edx] }
	__asm { movzx edx, word ptr [edx + 4] }
	__asm { mov ax, di }
	__asm { sar ax, 5 }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { mov ax, bx }
	__asm { sar ax, 4 }
	__asm { mov esi, ecx }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov cx, dx }
	__asm { sar cx, 5 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { mov word ptr [ebp - 4], cx }
	__asm { and edx, 0x1f }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { and edi, 0x1f }
	__asm { and ebx, 0xf }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { call fn_00a89d60 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_00a8a749 }
	__asm { pop edi }
	__asm { lea eax, [esi + 2] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a8a749: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movsx edx, bx }
	__asm { cwde }
	__asm { shl edx, 5 }
	__asm { add edx, eax }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { shl edx, 5 }
	__asm { movsx ecx, di }
	__asm { add edx, esi }
	__asm { pop edi }
	__asm { cmp al, byte ptr [ecx + edx + 0x14] }
	__asm { pop esi }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00624200();
extern "C" void fn_0069ed70();
extern "C" void fn_00a1c130();
extern "C" void fn_00a862a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a8b020
extern "C" __declspec(naked) void asm_00a8b020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4bc30 }
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
	__asm { jbe L_00a8b07c }
	__asm { lea eax, [eax + edi*8] }
	__asm { push edx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0069ed70 }
	__asm { L_00a8b069: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a8b07c: }
	__asm { jae L_00a8b069 }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00a1c130 }
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
	__asm { call fn_00624200 }
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
	__asm { call fn_00a862a0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012e4e3c[];
extern "C" char g_012e97ec[];
extern "C" void fn_004199f0();
extern "C" void fn_007cbf10();
extern "C" void fn_0088da80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a8b250
extern "C" __declspec(naked) void asm_00a8b250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4bc56 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { cmp dword ptr [ebp + 0x14], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { je L_00a8b288 }
	__asm { mov dword ptr [esi + 0x68], 0xe9bba8 }
	__asm { mov dword ptr [esi + 0xb4], 0xe780c8 }
	__asm { L_00a8b288: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_0088da80 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xeb1514 }
	__asm { mov dword ptr [esi + 4], 0xeb1620 }
	__asm { mov dword ptr [esi + 0x18], 0xeb1628 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb1634 }
	__asm { mov dword ptr [esi + 0x64], 0xeb1644 }
	__asm { mov dword ptr [esi + 0x70], 0xeb164c }
	__asm { mov dword ptr [esi + 0x98], 0xeb166c }
	__asm { mov dword ptr [esi + 0xb0], 0xeb16a0 }
	__asm { mov dword ptr [esi + 0xc4], 0xeb16cc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xeb16d4 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xac] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov eax, dword ptr [g_012e97ec] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a8b360 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e97ec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb1500 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e96c0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a8b360: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e96c0 }
	__asm { inc dword ptr [g_012e4e3c] }
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
extern "C" char g_012eaaec[];
extern "C" void fn_0040bb80();
extern "C" void fn_006b9740();
extern "C" void fn_0078dbf0();
extern "C" void fn_007cbf10();
extern "C" void fn_00a8c7e0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a8bfe0
extern "C" __declspec(naked) void asm_00a8bfe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4bde6 }
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
	__asm { call fn_00a8c7e0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012eaaec] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a8c09f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eaaec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003780 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0078dbf0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ea9c0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7fd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a8c09f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12ea9c0 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeb2144 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a8c11d }
	__asm { push 0x125c2e4 }
	__asm { mov ecx, 0x125c2e4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a8c11d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a8c108 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a8c11d }
	__asm { L_00a8c108: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a8c11d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x00a8c300
extern "C" __declspec(naked) void asm_00a8c300()
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
	__asm { mov dword ptr [esi + 0x10], 0x125c338 }
	__asm { call fn_007cb250 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a8c3a3 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_00a8c3a3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a8c38e }
	__asm { push 0x52 }
	__asm { push 0xe51be8 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a8c3a3 }
	__asm { L_00a8c38e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe549d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a8c3a3: }
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

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_004cab00();
// FUNCTION: ROBLOXSTUDIO 0x00a8c4d0
extern "C" __declspec(naked) void asm_00a8c4d0()
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
	__asm { je L_00a8c51b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00a8c51b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00a8c56e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3a38c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xeb24d8 }
	__asm { mov dword ptr [esi + 8], 0xeb24e8 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xeb24f0 }
	__asm { mov dword ptr [esi + 8], 0xeb2500 }
	__asm { jmp L_00a8c570 }
	__asm { L_00a8c56e: }
	__asm { xor esi, esi }
	__asm { L_00a8c570: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_004cab00 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00a8c58d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00a8c58d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012ea9bc[];
extern "C" void fn_007cbf10();
extern "C" void fn_007cd560();
extern "C" void fn_00810310();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a8c5b0
extern "C" __declspec(naked) void asm_00a8c5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23e4e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ea9bc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00a8c625 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ea9bc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x10036a4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810310 }
	__asm { push eax }
	__asm { mov ecx, 0x12ea890 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7950 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a8c625: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { push 0x12ea890 }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a8c648 }
	__asm { lea eax, [esi - 0x1c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a8c648: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00a8cae0
extern "C" __declspec(naked) void asm_00a8cae0()
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
	__asm { push 0x11f09f4 }
	__asm { mov edi, ecx }
	__asm { push 0xe62888 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59988 }
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
	__asm { push 0xeb2194 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xeb219c }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe9debc }
	__asm { push 2 }
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
// FUNCTION: ROBLOXSTUDIO 0x00a8cc20
extern "C" __declspec(naked) void asm_00a8cc20()
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
	__asm { push 0x11f0a18 }
	__asm { mov edi, ecx }
	__asm { push 0xeb2188 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe599a0 }
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
	__asm { push 0x1010c94 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe9debc }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x1010c8c }
	__asm { push 2 }
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
// FUNCTION: ROBLOXSTUDIO 0x00a8cd60
extern "C" __declspec(naked) void asm_00a8cd60()
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
	__asm { push 0x11f0a40 }
	__asm { mov edi, ecx }
	__asm { push 0xeb217c }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe599b8 }
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
	__asm { push 0x1010c70 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe9debc }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x1010c74 }
	__asm { push 2 }
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

extern "C" char g_00e51a48[];
extern "C" void fn_004038a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_00a8c8a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a8cea0
extern "C" __declspec(naked) void asm_00a8cea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4becb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a8c8a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x68], 0xffffffff }
	__asm { mov dword ptr [esi + 0x6c], 0xffffffff }
	__asm { mov dword ptr [esi + 0x70], 0xffffffff }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [esi], 0xeb1b1c }
	__asm { mov dword ptr [esi + 4], 0xeb1b98 }
	__asm { mov dword ptr [esi + 0x18], 0xeb1ba0 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb1bac }
	__asm { mov dword ptr [esi + 0x64], 0xeb1bbc }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [esi + 0x80], 1 }
	__asm { mov dword ptr [esi + 0x84], 1 }
	__asm { mov dword ptr [esi + 0x88], 2 }
	__asm { cmp byte ptr [g_00e51a48], cl }
	__asm { mov eax, 7 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xe51a48 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00a8cf8b }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a8cf8b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01003780[];
extern "C" void fn_004038a0();
extern "C" void fn_00915370();
extern "C" void fn_00a8c3c0();
extern "C" void fn_00b8f460();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a8d100
extern "C" __declspec(naked) void asm_00a8d100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4bf37 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xb0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a8d145 }
	__asm { mov ecx, eax }
	__asm { call fn_00b8f460 }
	__asm { jmp L_00a8d147 }
	__asm { L_00a8d145: }
	__asm { xor eax, eax }
	__asm { L_00a8d147: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a8c3c0 }
	__asm { mov dword ptr [esi], 0xeb2024 }
	__asm { mov dword ptr [esi + 4], 0xeb209c }
	__asm { mov dword ptr [esi + 0x18], 0xeb20a4 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb20b0 }
	__asm { mov dword ptr [esi + 0x64], 0xeb20c0 }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [g_01003780], cl }
	__asm { mov eax, 0xd }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0x1003780 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00915370 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00a8d1f1 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a8d1f1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cd560();
extern "C" void fn_00810e90();
extern "C" void fn_00811b90();
// FUNCTION: ROBLOXSTUDIO 0x00a8d4d0
extern "C" __declspec(naked) void asm_00a8d4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test ebx, ebx }
	__asm { je L_00a8d526 }
	__asm { lea eax, [ebx + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00a8d526 }
	__asm { mov esi, dword ptr [eax + 0xc] }
	__asm { call fn_00810e90 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a8d526 }
	__asm { mov eax, ebx }
	__asm { test eax, eax }
	__asm { je L_00a8d526 }
	__asm { test edi, edi }
	__asm { je L_00a8d575 }
	__asm { lea eax, [edi + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00a8d526 }
	__asm { mov esi, dword ptr [eax + 0xc] }
	__asm { call fn_00811b90 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a8d526 }
	__asm { mov eax, edi }
	__asm { test eax, eax }
	__asm { jne L_00a8d56e }
	__asm { L_00a8d526: }
	__asm { test edi, edi }
	__asm { je L_00a8d575 }
	__asm { add edi, 0x1c }
	__asm { je L_00a8d575 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00810e90 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a8d575 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00a8d575 }
	__asm { test ebx, ebx }
	__asm { je L_00a8d575 }
	__asm { add ebx, 0x1c }
	__asm { je L_00a8d575 }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_00811b90 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a8d575 }
	__asm { lea eax, [ebx - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00a8d575 }
	__asm { L_00a8d56e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a8d575: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004199f0();
extern "C" void fn_006d19a0();
extern "C" void fn_006da0e0();
extern "C" void fn_007cd560();
extern "C" void fn_00a8d580();
extern "C" void fn_00af1480();
// FUNCTION: ROBLOXSTUDIO 0x00a8e1a0
extern "C" __declspec(naked) void asm_00a8e1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x98 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { test edi, edi }
	__asm { je L_00a8e1ec }
	__asm { mov ebx, dword ptr [edi + 0x38] }
	__asm { test ebx, ebx }
	__asm { je L_00a8e1ec }
	__asm { add ebx, 0x1c }
	__asm { je L_00a8e1ec }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a8e1ec }
	__asm { lea esi, [ebx - 0x1c] }
	__asm { test esi, esi }
	__asm { je L_00a8e1ec }
	__asm { mov esi, dword ptr [esi + 0xe0] }
	__asm { jmp L_00a8e1ee }
	__asm { L_00a8e1ec: }
	__asm { xor esi, esi }
	__asm { L_00a8e1ee: }
	__asm { test edi, edi }
	__asm { je L_00a8e1ff }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00a8d580 }
	__asm { jmp L_00a8e20a }
	__asm { L_00a8e1ff: }
	__asm { lea ecx, [ebp - 0x98] }
	__asm { call fn_006da0e0 }
	__asm { L_00a8e20a: }
	__asm { mov edi, eax }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov ecx, dword ptr [ebx + 0x8c] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { cmp dword ptr [ecx + edi*4 + 0xc], esi }
	__asm { je L_00a8e254 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [eax + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00a8e254 }
	__asm { mov ecx, dword ptr [ebx + 0x8c] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00af1480 }
	__asm { L_00a8e254: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012ead4c[];
extern "C" void fn_004833f0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00869000();
extern "C" void fn_00a8eb30();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a8e300
extern "C" __declspec(naked) void asm_00a8e300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4bfe6 }
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
	__asm { call fn_00a8eb30 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012ead4c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a8e3bf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ead4c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x100367c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004833f0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eac20 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde77f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a8e3bf: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12eac20 }
	__asm { call fn_00869000 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeb27f4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a8e43d }
	__asm { push 0x125d1c0 }
	__asm { mov ecx, 0x125d1c0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a8e43d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a8e428 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a8e43d }
	__asm { L_00a8e428: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a8e43d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_012e4aec[];
extern "C" char g_012ead4c[];
extern "C" void fn_004833f0();
extern "C" void fn_007cbf10();
extern "C" void fn_00922b90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a8eb90
extern "C" __declspec(naked) void asm_00a8eb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c0e6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00922b90 }
	__asm { mov dword ptr [esi], 0xeb2584 }
	__asm { mov dword ptr [esi + 4], 0xeb2644 }
	__asm { mov dword ptr [esi + 0x18], 0xeb264c }
	__asm { mov dword ptr [esi + 0x1c], 0xeb2658 }
	__asm { mov dword ptr [esi + 0x64], 0xeb2668 }
	__asm { mov dword ptr [esi + 0x190], 0xeb2670 }
	__asm { mov dword ptr [esi + 0x19c], 0xeb2678 }
	__asm { mov dword ptr [esi + 0x1b4], 0xeb26ac }
	__asm { mov dword ptr [esi + 0x1b8], 0xeb26b4 }
	__asm { mov eax, dword ptr [g_012ead4c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a8ec56 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ead4c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x100367c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004833f0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eac20 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde77f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a8ec56: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12eac20 }
	__asm { inc dword ptr [g_012e4aec] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0100367c[];
extern "C" char g_012fc96a[];
extern "C" void fn_004038a0();
extern "C" void fn_00922f50();
extern "C" void fn_00929c00();
extern "C" void fn_00a8eb90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a8ec80
extern "C" __declspec(naked) void asm_00a8ec80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c10e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a8eb90 }
	__asm { mov dword ptr [esi], 0xeb26bc }
	__asm { mov dword ptr [esi + 4], 0xeb277c }
	__asm { mov dword ptr [esi + 0x18], 0xeb2784 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb2790 }
	__asm { mov dword ptr [esi + 0x64], 0xeb27a0 }
	__asm { mov dword ptr [esi + 0x190], 0xeb27a8 }
	__asm { mov dword ptr [esi + 0x19c], 0xeb27b0 }
	__asm { mov dword ptr [esi + 0x1b4], 0xeb27e4 }
	__asm { mov dword ptr [esi + 0x1b8], 0xeb27ec }
	__asm { mov al, byte ptr [g_012fc96a] }
	__asm { test al, al }
	__asm { setne al }
	__asm { mov dword ptr [esi + 0x250], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi + 0x254], al }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [esi + 0x258], 0xc2 }
	__asm { cmp byte ptr [g_0100367c], cl }
	__asm { mov eax, 4 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0x100367c }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00929c00 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00a8ed6f }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a8ed6f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov dword ptr [ecx], 0xeb2584 }
	__asm { mov dword ptr [ecx + 4], 0xeb2644 }
	__asm { mov dword ptr [ecx + 0x18], 0xeb264c }
	__asm { mov dword ptr [ecx + 0x1c], 0xeb2658 }
	__asm { mov dword ptr [ecx + 0x64], 0xeb2668 }
	__asm { mov dword ptr [ecx + 0x190], 0xeb2670 }
	__asm { mov dword ptr [ecx + 0x19c], 0xeb2678 }
	__asm { mov dword ptr [ecx + 0x1b4], 0xeb26ac }
	__asm { mov dword ptr [ecx + 0x1b8], 0xeb26b4 }
	__asm { jmp fn_00922f50 }
}

extern "C" char g_00e77d34[];
extern "C" char g_00eb28b4[];
extern "C" char g_012eae7c[];
extern "C" char g_0131f3d4[];
extern "C" void fn_0052e9a0();
extern "C" void fn_007cbf10();
extern "C" void fn_007cd560();
extern "C" void fn_00891b10();
extern "C" void fn_00924680();
extern "C" void fn_0099ccf0();
extern "C" void fn_0099d250();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a8f020
extern "C" __declspec(naked) void asm_00a8f020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c15c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00924680 }
	__asm { test eax, eax }
	__asm { je L_00a8f161 }
	__asm { mov ebx, dword ptr [eax + 0xe0] }
	__asm { mov ecx, ebx }
	__asm { call fn_0099ccf0 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00a8f161 }
	__asm { L_00a8f060: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { cmp ebx, eax }
	__asm { jne L_00a8f06a }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { L_00a8f06a: }
	__asm { push eax }
	__asm { call fn_00891b10 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a8f14f }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00a8f14f }
	__asm { mov eax, dword ptr [g_012eae7c] }
	__asm { test al, 1 }
	__asm { jne L_00a8f137 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eae7c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { mov eax, dword ptr [g_0131f3d4] }
	__asm { test al, 1 }
	__asm { jne L_00a8f10e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f3d4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e77d34] }
	__asm { call fn_0052e9a0 }
	__asm { push eax }
	__asm { mov ecx, 0x131f3d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde890 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_00a8f10e: }
	__asm { push dword ptr [g_00eb28b4] }
	__asm { mov ecx, 0x12ead50 }
	__asm { push 0x131f3d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7800 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a8f137: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push 0x12ead50 }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a8f14f }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_00a8f163 }
	__asm { L_00a8f14f: }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_0099d250 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_00a8f060 }
	__asm { L_00a8f161: }
	__asm { xor eax, eax }
	__asm { L_00a8f163: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc96a[];
extern "C" void fn_004226b0();
extern "C" void fn_006b8aae();
extern "C" void fn_006b9da0();
extern "C" void fn_006b9e50();
extern "C" void fn_007b49a0();
extern "C" void fn_00923460();
extern "C" void fn_00924680();
extern "C" void fn_00a8e580();
extern "C" void fn_00c2bee0();
// FUNCTION: ROBLOXSTUDIO 0x00a8f390
extern "C" __declspec(naked) void asm_00a8f390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd47a08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { jne L_00a8f463 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00a8f463 }
	__asm { mov ecx, esi }
	__asm { call fn_00924680 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_00a8f463 }
	__asm { mov ecx, edi }
	__asm { call fn_007b49a0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { sub esp, 0x10 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0xa8f2c0 }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edx + 8], esi }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0x28] }
	__asm { call fn_00a8e580 }
	__asm { lea ecx, [esi + 0x250] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00923460 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a8f438 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00a8f438: }
	__asm { cmp byte ptr [g_012fc96a], 0 }
	__asm { je L_00a8f463 }
	__asm { mov ecx, edi }
	__asm { call fn_007b49a0 }
	__asm { add eax, 0x28 }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_012fc96a] }
	__asm { push edi }
	__asm { push esi }
	__asm { push 0xeb2830 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00a8f463: }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00a8f499 }
	__asm { add esi, 0x250 }
	__asm { cmp byte ptr [esi + 4], 0 }
	__asm { je L_00a8f492 }
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
	__asm { L_00a8f492: }
	__asm { mov ecx, esi }
	__asm { call fn_006b9e50 }
	__asm { L_00a8f499: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e4af0[];
extern "C" char g_012eae7c[];
extern "C" void fn_0052e710();
extern "C" void fn_007cbf10();
extern "C" void fn_0090faf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a8f9c0
extern "C" __declspec(naked) void asm_00a8f9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c1d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { je L_00a8f9f6 }
	__asm { mov dword ptr [esi + 0x68], 0xeb86d4 }
	__asm { mov dword ptr [esi + 0xb4], 0xe7c5a8 }
	__asm { L_00a8f9f6: }
	__asm { push 0 }
	__asm { call fn_0090faf0 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xeb28d4 }
	__asm { mov dword ptr [esi + 4], 0xeb29e4 }
	__asm { mov dword ptr [esi + 0x18], 0xeb29ec }
	__asm { mov dword ptr [esi + 0x1c], 0xeb29f8 }
	__asm { mov dword ptr [esi + 0x64], 0xeb2a08 }
	__asm { mov dword ptr [esi + 0x70], 0xeb2a10 }
	__asm { mov dword ptr [esi + 0x98], 0xeb2a30 }
	__asm { mov dword ptr [esi + 0xb0], 0xeb2a64 }
	__asm { mov dword ptr [esi + 0xc4], 0xeb2a90 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xeb2a98 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xbc] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov eax, dword ptr [g_012eae7c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a8fab8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eae7c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003684 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0052e710 }
	__asm { push eax }
	__asm { mov ecx, 0x12ead50 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7800 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a8fab8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ead50 }
	__asm { inc dword ptr [g_012e4af0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_008251b0();
extern "C" void fn_00a8fc70();
// FUNCTION: ROBLOXSTUDIO 0x00a8fba0
extern "C" __declspec(naked) void asm_00a8fba0()
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
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a8fc70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xeb2fc8 }
	__asm { call fn_007d5710 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x14] }
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
	__asm { jae L_00a8fc35 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00a8fc35: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00a8fc58 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a8fc58: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_012eae7c[];
extern "C" void fn_0052e710();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a8fc70
extern "C" __declspec(naked) void asm_00a8fc70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23bce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eae7c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00a8fce5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eae7c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003684 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0052e710 }
	__asm { push eax }
	__asm { mov ecx, 0x12ead50 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7800 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a8fce5: }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push 0x12ead50 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012de64e[];
extern "C" void fn_004226b0();
extern "C" void fn_006b8a90();
extern "C" void fn_006b9e50();
extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a901e0
extern "C" __declspec(naked) void asm_00a901e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c306 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xeb2ee4 }
	__asm { mov dword ptr [edi + 4], 0xeb2f5c }
	__asm { mov dword ptr [edi + 0x18], 0xeb2f64 }
	__asm { mov dword ptr [edi + 0x1c], 0xeb2f70 }
	__asm { mov dword ptr [edi + 0x64], 0xeb2f80 }
	__asm { mov al, byte ptr [g_012de64e] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test al, al }
	__asm { je L_00a90245 }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0xeb31a4 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00a90245: }
	__asm { mov eax, dword ptr [edi + 0x74] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [edi + 0x74] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { cmp ecx, dword ptr [edi + 0x74] }
	__asm { je L_00a90272 }
	__asm { nop }
	__asm { L_00a90260: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { cmp esi, dword ptr [edi + 0x74] }
	__asm { jne L_00a90260 }
	__asm { L_00a90272: }
	__asm { push dword ptr [edi + 0x74] }
	__asm { call fn_00cf6522 }
	__asm { lea esi, [edi + 0x6c] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x64], 0xe6ac4c }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00a902ac }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00a902ac: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" char g_00e105b4[];
extern "C" void fn_008bbcc0();
extern "C" void fn_00a8f180();
extern "C" void fn_00a90840();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a90670
extern "C" __declspec(naked) void asm_00a90670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c318 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, ecx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { cmp dword ptr [eax + 0x78], 0 }
	__asm { jne L_00a906a8 }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a906a8: }
	__asm { xor ecx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x24], ecx }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov eax, dword ptr [eax + 0x74] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov edi, dword ptr [eax] }
	__asm { cmp edi, eax }
	__asm { je L_00a90722 }
	__asm { push ebx }
	__asm { L_00a906c2: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [eax + 0x13c] }
	__asm { lea ebx, [edi + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00a8f180 }
	__asm { cmp esi, dword ptr [eax] }
	__asm { jne L_00a906f6 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { call fn_00a90840 }
	__asm { test eax, eax }
	__asm { jne L_00a906f6 }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_008bbcc0 }
	__asm { L_00a906f6: }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [edi] }
	__asm { cmp edi, dword ptr [eax + 0x74] }
	__asm { jne L_00a906c2 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { pop ebx }
	__asm { cmp ecx, esi }
	__asm { je L_00a90722 }
	__asm { sub esi, ecx }
	__asm { sar esi, 2 }
	__asm { call dword ptr [g_00e105b4] }
	__asm { xor edx, edx }
	__asm { div esi }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov esi, dword ptr [ecx + edx*4] }
	__asm { jmp L_00a90724 }
	__asm { L_00a90722: }
	__asm { xor esi, esi }
	__asm { L_00a90724: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00a90743 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a90743: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00eb31e4[];
extern "C" char g_012fd36c[];
extern "C" void fn_004038a0();
extern "C" void fn_006b98f0();
extern "C" void fn_007b5bb0();
extern "C" void fn_00a91800();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a918c0
extern "C" __declspec(naked) void asm_00a918c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c420 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a91800 }
	__asm { mov byte ptr [esi + 0x64], 1 }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [esi], 0xeb3294 }
	__asm { mov dword ptr [esi + 4], 0xeb330c }
	__asm { mov dword ptr [esi + 0x18], 0xeb3314 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb3320 }
	__asm { cmp byte ptr [g_00eb31e4], cl }
	__asm { mov eax, 0xb }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xeb31e4 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
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
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jb L_00a91960 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a91960: }
	__asm { cmp dword ptr [g_012fd36c], 0 }
	__asm { je L_00a9198d }
	__asm { push 0xeb31e4 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0xf13560 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00a9198d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [g_012fd36c], esi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130a3c8[];
extern "C" char g_0130aaec[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080f590();
extern "C" void fn_00a948b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a91dc0
extern "C" __declspec(naked) void asm_00a91dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c4a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a948b0 }
	__asm { mov dword ptr [esi], 0xeb43ec }
	__asm { mov dword ptr [esi + 4], 0xeb446c }
	__asm { mov dword ptr [esi + 0x18], 0xeb4474 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb4480 }
	__asm { mov dword ptr [esi + 0x64], 0xeb4494 }
	__asm { mov dword ptr [esi + 0x80], 0xeb44e4 }
	__asm { mov dword ptr [esi + 0xf8], 0xeb4500 }
	__asm { mov eax, dword ptr [g_0130aaec] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a91e73 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130aaec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb34e0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0080f590 }
	__asm { push eax }
	__asm { mov ecx, 0x130a9c0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe00750 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a91e73: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x130a9c0 }
	__asm { inc dword ptr [g_0130a3c8] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130a3b8[];
extern "C" char g_0130a62c[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080f590();
extern "C" void fn_00a948b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a91ea0
extern "C" __declspec(naked) void asm_00a91ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c4c6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a948b0 }
	__asm { mov dword ptr [esi], 0xeb3a1c }
	__asm { mov dword ptr [esi + 4], 0xeb3a9c }
	__asm { mov dword ptr [esi + 0x18], 0xeb3aa4 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb3ab0 }
	__asm { mov dword ptr [esi + 0x64], 0xeb3ac4 }
	__asm { mov dword ptr [esi + 0x80], 0xeb3b14 }
	__asm { mov dword ptr [esi + 0xf8], 0xeb3b30 }
	__asm { mov eax, dword ptr [g_0130a62c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a91f53 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130a62c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb34f4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0080f590 }
	__asm { push eax }
	__asm { mov ecx, 0x130a500 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe00760 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a91f53: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x130a500 }
	__asm { inc dword ptr [g_0130a3b8] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130a3b4[];
extern "C" char g_0130a4fc[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080f590();
extern "C" void fn_00a948b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a91f90
extern "C" __declspec(naked) void asm_00a91f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c4e6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a948b0 }
	__asm { mov dword ptr [esi], 0xeb37ac }
	__asm { mov dword ptr [esi + 4], 0xeb382c }
	__asm { mov dword ptr [esi + 0x18], 0xeb3834 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb3840 }
	__asm { mov dword ptr [esi + 0x64], 0xeb3854 }
	__asm { mov dword ptr [esi + 0x80], 0xeb38a4 }
	__asm { mov dword ptr [esi + 0xf8], 0xeb38c0 }
	__asm { mov eax, dword ptr [g_0130a4fc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a92043 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130a4fc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb34d4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0080f590 }
	__asm { push eax }
	__asm { mov ecx, 0x130a3d0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe00770 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a92043: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x130a3d0 }
	__asm { inc dword ptr [g_0130a3b4] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130a3c0[];
extern "C" char g_0130a88c[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080f590();
extern "C" void fn_00a948b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a92070
extern "C" __declspec(naked) void asm_00a92070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c506 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a948b0 }
	__asm { mov dword ptr [esi], 0xeb3efc }
	__asm { mov dword ptr [esi + 4], 0xeb3f7c }
	__asm { mov dword ptr [esi + 0x18], 0xeb3f84 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb3f90 }
	__asm { mov dword ptr [esi + 0x64], 0xeb3fa4 }
	__asm { mov dword ptr [esi + 0x80], 0xeb3ff4 }
	__asm { mov dword ptr [esi + 0xf8], 0xeb4010 }
	__asm { mov eax, dword ptr [g_0130a88c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a92123 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130a88c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb34b4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0080f590 }
	__asm { push eax }
	__asm { mov ecx, 0x130a760 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe00780 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a92123: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x130a760 }
	__asm { inc dword ptr [g_0130a3c0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130a3bc[];
extern "C" char g_0130a75c[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080f590();
extern "C" void fn_00a948b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a92150
extern "C" __declspec(naked) void asm_00a92150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c526 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a948b0 }
	__asm { mov dword ptr [esi], 0xeb3c8c }
	__asm { mov dword ptr [esi + 4], 0xeb3d0c }
	__asm { mov dword ptr [esi + 0x18], 0xeb3d14 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb3d20 }
	__asm { mov dword ptr [esi + 0x64], 0xeb3d34 }
	__asm { mov dword ptr [esi + 0x80], 0xeb3d84 }
	__asm { mov dword ptr [esi + 0xf8], 0xeb3da0 }
	__asm { mov eax, dword ptr [g_0130a75c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a92203 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130a75c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb3500 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0080f590 }
	__asm { push eax }
	__asm { mov ecx, 0x130a630 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe00790 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a92203: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x130a630 }
	__asm { inc dword ptr [g_0130a3bc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130a3c4[];
extern "C" char g_0130a9bc[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080f590();
extern "C" void fn_00a948b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a92230
extern "C" __declspec(naked) void asm_00a92230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c546 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a948b0 }
	__asm { mov dword ptr [esi], 0xeb417c }
	__asm { mov dword ptr [esi + 4], 0xeb41fc }
	__asm { mov dword ptr [esi + 0x18], 0xeb4204 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb4210 }
	__asm { mov dword ptr [esi + 0x64], 0xeb4224 }
	__asm { mov dword ptr [esi + 0x80], 0xeb4274 }
	__asm { mov dword ptr [esi + 0xf8], 0xeb4290 }
	__asm { mov eax, dword ptr [g_0130a9bc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a922e3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130a9bc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb34c4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0080f590 }
	__asm { push eax }
	__asm { mov ecx, 0x130a890 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe007a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a922e3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x130a890 }
	__asm { inc dword ptr [g_0130a3c4] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130a3cc[];
extern "C" char g_0130ac1c[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080f590();
extern "C" void fn_00a948b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a92310
extern "C" __declspec(naked) void asm_00a92310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c566 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a948b0 }
	__asm { mov dword ptr [esi], 0xeb465c }
	__asm { mov dword ptr [esi + 4], 0xeb46dc }
	__asm { mov dword ptr [esi + 0x18], 0xeb46e4 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb46f0 }
	__asm { mov dword ptr [esi + 0x64], 0xeb4704 }
	__asm { mov dword ptr [esi + 0x80], 0xeb4754 }
	__asm { mov dword ptr [esi + 0xf8], 0xeb4770 }
	__asm { mov eax, dword ptr [g_0130ac1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a923c3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130ac1c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x10036f4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0080f590 }
	__asm { push eax }
	__asm { mov ecx, 0x130aaf0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe007b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a923c3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x130aaf0 }
	__asm { inc dword ptr [g_0130a3cc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130a88c[];
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0080f590();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a94370
extern "C" __declspec(naked) void asm_00a94370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c896 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0130a88c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00a943ea }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130a88c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb34b4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0080f590 }
	__asm { push eax }
	__asm { mov ecx, 0x130a760 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe00780 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a943ea: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x130a760 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xeb5364 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a94462 }
	__asm { push 0x125dfec }
	__asm { mov ecx, 0x125dfec }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a94462 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a9444d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a94462 }
	__asm { L_00a9444d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a94462: }
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
extern "C" char g_0130a9bc[];
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0080f590();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a94480
extern "C" __declspec(naked) void asm_00a94480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c8b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0130a9bc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00a944fa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130a9bc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb34c4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0080f590 }
	__asm { push eax }
	__asm { mov ecx, 0x130a890 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe007a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a944fa: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x130a890 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xeb5470 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a94572 }
	__asm { push 0x125e00c }
	__asm { mov ecx, 0x125e00c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a94572 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a9455d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a94572 }
	__asm { L_00a9455d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a94572: }
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
extern "C" char g_0130ac1c[];
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0080f590();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a94590
extern "C" __declspec(naked) void asm_00a94590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c8d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0130ac1c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00a9460a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130ac1c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x10036f4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0080f590 }
	__asm { push eax }
	__asm { mov ecx, 0x130aaf0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe007b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a9460a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x130aaf0 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xeb47e4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a94682 }
	__asm { push 0x125dfd0 }
	__asm { mov ecx, 0x125dfd0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a94682 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a9466d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a94682 }
	__asm { L_00a9466d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a94682: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_004038a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_00a94150();
extern "C" void fn_00aefa00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a948b0
extern "C" __declspec(naked) void asm_00a948b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c949 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00a94150 }
	__asm { mov dword ptr [edi], 0xeb35d4 }
	__asm { mov dword ptr [edi + 4], 0xeb364c }
	__asm { mov dword ptr [edi + 0x18], 0xeb3654 }
	__asm { mov dword ptr [edi + 0x1c], 0xeb3660 }
	__asm { lea ecx, [edi + 0x64] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aefa00 }
	__asm { mov dword ptr [edi + 0xfc], 0xffffffff }
	__asm { mov dword ptr [edi + 0x100], 0xffffffff }
	__asm { mov dword ptr [edi + 0x104], 0xffffffff }
	__asm { mov dword ptr [edi + 0x108], 0xffffffff }
	__asm { mov dword ptr [edi + 0x10c], 0xffffffff }
	__asm { mov dword ptr [edi + 0x64], 0xe7c29c }
	__asm { mov dword ptr [edi + 0x80], 0xe7c2ec }
	__asm { mov dword ptr [edi + 0xf8], 0xe7c308 }
	__asm { mov dword ptr [edi], 0xeb3674 }
	__asm { mov dword ptr [edi + 4], 0xeb36f4 }
	__asm { mov dword ptr [edi + 0x18], 0xeb36fc }
	__asm { mov dword ptr [edi + 0x1c], 0xeb3708 }
	__asm { mov dword ptr [edi + 0x64], 0xeb371c }
	__asm { mov dword ptr [edi + 0x80], 0xeb376c }
	__asm { mov dword ptr [edi + 0xf8], 0xeb3788 }
	__asm { mov dword ptr [edi + 0x110], 0 }
	__asm { mov dword ptr [edi + 0x114], 0 }
	__asm { mov dword ptr [edi + 0x118], 0 }
	__asm { mov dword ptr [edi + 0x11c], 0 }
	__asm { mov dword ptr [edi + 0x120], 0 }
	__asm { mov dword ptr [edi + 0x124], 0 }
	__asm { mov dword ptr [edi + 0x128], 0 }
	__asm { mov dword ptr [edi + 0x12c], 0 }
	__asm { mov dword ptr [edi + 0x130], 0 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { jne L_00a94a00 }
	__asm { xor ecx, ecx }
	__asm { jmp L_00a94a0e }
	__asm { L_00a94a00: }
	__asm { mov ecx, edx }
	__asm { lea esi, [ecx + 1] }
	__asm { L_00a94a05: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00a94a05 }
	__asm { sub ecx, esi }
	__asm { L_00a94a0e: }
	__asm { push ecx }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00a94a38 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a94a38: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
