// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10ebc[];
extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e110e4[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e111a0[];
extern "C" char g_00e12298[];
// FUNCTION: ROBLOXSTUDIO 0x004f2df0
extern "C" __declspec(naked) void asm_004f2df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd851ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push 0 }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov dword ptr [esp + 0x10], ebx }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { mov dword ptr [esp + 0x10], 0x1029570 }
	__asm { push 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [esp + 0x3c], 0 }
	__asm { call dword ptr [g_00e111a0] }
	__asm { mov byte ptr [esp + 0x34], 1 }
	__asm { mov ebx, dword ptr [g_00e10ebc] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { call ebx }
	__asm { push 0x1020de8 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov byte ptr [esp + 0x38], 2 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov byte ptr [esp + 0x3c], 3 }
	__asm { call dword ptr [g_00e10fd4] }
	__asm { lea ecx, [esp + 4] }
	__asm { mov byte ptr [esp + 0x34], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov byte ptr [esp + 0x34], 1 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [esp + 8] }
	__asm { mov byte ptr [esp + 0x34], 0 }
	__asm { call dword ptr [g_00e110e4] }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12298] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { mov byte ptr [esp + 0x38], 4 }
	__asm { call ebx }
	__asm { push 0x1020e2c }
	__asm { lea ecx, [esp + 8] }
	__asm { mov byte ptr [esp + 0x38], 5 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov byte ptr [esp + 0x3c], 6 }
	__asm { call dword ptr [g_00e10fd4] }
	__asm { lea ecx, [esp + 4] }
	__asm { mov byte ptr [esp + 0x34], 5 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov byte ptr [esp + 0x34], 4 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [esp + 8] }
	__asm { mov byte ptr [esp + 0x34], 0 }
	__asm { call dword ptr [g_00e110e4] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x34], 0xffffffff }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e12378[];
extern "C" char g_0131eb88[];
extern "C" char g_0131eb9c[];
extern "C" void fn_00403410();
extern "C" void fn_00478c30();
extern "C" void fn_004a4c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004f3640
extern "C" __declspec(naked) void asm_004f3640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8742b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { sub esp, 0x14 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, 1 }
	__asm { jne L_004f368f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004f368f: }
	__asm { mov ecx, dword ptr [g_0131eb9c] }
	__asm { test ecx, ecx }
	__asm { je L_004f3744 }
	__asm { cmp dword ptr [edi + 0x410], 0 }
	__asm { je L_004f3744 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { lea edx, [ebp - 0x20] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x14] }
	__asm { mov esi, eax }
	__asm { push 0x1011cb0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 0x100b0ec }
	__asm { mov edx, eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00403410 }
	__asm { push esi }
	__asm { mov edx, eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00478c30 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e12378] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004f3744: }
	__asm { push 0x1011cb0 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e12378] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110a0[];
extern "C" char g_00e11110[];
extern "C" char g_00e123b0[];
extern "C" char g_0131c762[];
extern "C" void fn_004140a0();
extern "C" void fn_004a4c30();
extern "C" void fn_004c5a30();
extern "C" void fn_004e9990();
extern "C" void fn_004f2f50();
extern "C" void fn_00774ba0();
// FUNCTION: ROBLOXSTUDIO 0x004f37c0
extern "C" __declspec(naked) void asm_004f37c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd83782 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { cmp byte ptr [g_0131c762], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { jne L_004f3930 }
	__asm { mov byte ptr [g_0131c762], 1 }
	__asm { call fn_004f2f50 }
	__asm { call fn_004140a0 }
	__asm { cmp byte ptr [eax + 0xa0], 0 }
	__asm { je L_004f38ea }
	__asm { inc dword ptr [edi + 0x41c] }
	__asm { mov dword ptr [esp + 0xc], 1 }
	__asm { call fn_004140a0 }
	__asm { add eax, 0xa4 }
	__asm { lea esi, [esp + 0xc] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { cmovge esi, eax }
	__asm { mov esi, dword ptr [esi] }
	__asm { call fn_004140a0 }
	__asm { mov dword ptr [eax + 0xa4], esi }
	__asm { cmp dword ptr [edi + 0x41c], esi }
	__asm { jl L_004f38ea }
	__asm { mov dword ptr [edi + 0x41c], 0 }
	__asm { call fn_004a4c30 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_004f38ea }
	__asm { push 0 }
	__asm { call fn_004c5a30 }
	__asm { test al, al }
	__asm { jne L_004f38ea }
	__asm { push ecx }
	__asm { mov edx, 0x1020e98 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { call fn_004e9990 }
	__asm { mov esi, eax }
	__asm { mov edx, 0x1020e80 }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { call fn_004e9990 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push esi }
	__asm { push eax }
	__asm { mov byte ptr [esp + 0x34], 1 }
	__asm { push edi }
	__asm { mov dword ptr [ecx], 0x14000 }
	__asm { call dword ptr [g_00e123b0] }
	__asm { add esp, 0x14 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov esi, eax }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov dword ptr [esp + 0x24], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { cmp esi, 0x4000 }
	__asm { jne L_004f38ea }
	__asm { call fn_004140a0 }
	__asm { mov byte ptr [eax + 0xa0], 0 }
	__asm { L_004f38ea: }
	__asm { mov esi, dword ptr [g_00e110a0] }
	__asm { lea ecx, [edi + 0x40c] }
	__asm { call esi }
	__asm { cmp eax, 0xea60 }
	__asm { jle L_004f3929 }
	__asm { lea ecx, [edi + 0x408] }
	__asm { call esi }
	__asm { cmp eax, 0x4e20 }
	__asm { jge L_004f3929 }
	__asm { push 0 }
	__asm { push 0xf12990 }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { push 0xf12f2d }
	__asm { call fn_00774ba0 }
	__asm { add esp, 0x14 }
	__asm { L_004f3929: }
	__asm { mov byte ptr [g_0131c762], 0 }
	__asm { L_004f3930: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10ec4[];
extern "C" char g_00e10fc0[];
extern "C" char g_00e10fc8[];
extern "C" char g_00e10fd4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10fe8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x004f39f0
extern "C" __declspec(naked) void asm_004f39f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd85256 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [esp + 0xc], ecx }
	__asm { push 0 }
	__asm { lea ecx, [esp + 0x14] }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esp + 0x44], 0 }
	__asm { mov edi, dword ptr [g_00e10ffc] }
	__asm { cmp esi, 2 }
	__asm { jne L_004f3aaa }
	__asm { push 1 }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { call dword ptr [g_00e10fc0] }
	__asm { push 0x1020edc }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov byte ptr [esp + 0x48], 1 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x30] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { mov byte ptr [esp + 0x50], 2 }
	__asm { call dword ptr [g_00e10fe8] }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [esp + 0x48], 3 }
	__asm { call dword ptr [g_00e10fc8] }
	__asm { lea ecx, [esp + 0x28] }
	__asm { mov esi, eax }
	__asm { mov byte ptr [esp + 0x44], 2 }
	__asm { call edi }
	__asm { lea ecx, [esp + 8] }
	__asm { mov byte ptr [esp + 0x44], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov byte ptr [esp + 0x44], 0 }
	__asm { call edi }
	__asm { L_004f3aaa: }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { push esi }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { mov dword ptr [eax + 0x410], esi }
	__asm { call dword ptr [g_00e10fc0] }
	__asm { push 0x1020edc }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov byte ptr [esp + 0x48], 4 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov byte ptr [esp + 0x4c], 5 }
	__asm { call dword ptr [g_00e10fd4] }
	__asm { lea ecx, [esp + 8] }
	__asm { mov byte ptr [esp + 0x44], 4 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov byte ptr [esp + 0x44], 0 }
	__asm { call edi }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x44], 0xffffffff }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { mov ecx, dword ptr [esp + 0x3c] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e111a8[];
extern "C" char g_01320164[];
extern "C" void fn_004140a0();
extern "C" void fn_0057e360();
extern "C" void fn_005831f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004f3c10
extern "C" __declspec(naked) void asm_004f3c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_004140a0 }
	__asm { cmp dword ptr [eax + 0x74], 0 }
	__asm { mov esi, dword ptr [g_00e111a8] }
	__asm { mov ecx, edi }
	__asm { jne L_004f3c5d }
	__asm { push 4 }
	__asm { push 0 }
	__asm { call esi }
	__asm { push 4 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call esi }
	__asm { push 8 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call esi }
	__asm { push 8 }
	__asm { jmp L_004f3c75 }
	__asm { L_004f3c5d: }
	__asm { push 1 }
	__asm { push 0 }
	__asm { call esi }
	__asm { push 2 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call esi }
	__asm { push 1 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call esi }
	__asm { push 2 }
	__asm { L_004f3c75: }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call esi }
	__asm { call fn_004140a0 }
	__asm { cmp byte ptr [eax + 0x159], 0 }
	__asm { je L_004f3cc6 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_004f3cbc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x14], 0xffffffff }
	__asm { L_004f3cbc: }
	__asm { mov ecx, 0x1320168 }
	__asm { call fn_005831f0 }
	__asm { L_004f3cc6: }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10ebc[];
extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e110e4[];
extern "C" char g_00e11110[];
extern "C" char g_00e12298[];
extern "C" char g_00e1239c[];
// FUNCTION: ROBLOXSTUDIO 0x004f43f0
extern "C" __declspec(naked) void asm_004f43f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd82a20 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], 0x101ad54 }
	__asm { mov dword ptr [edi + 8], 0x101ae2c }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e12298] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e10ebc] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea esi, [edi + 0x14] }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e10fd4] }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e110e4] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e1239c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
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
extern "C" void fn_0044b730();
// FUNCTION: ROBLOXSTUDIO 0x004f47b0
extern "C" __declspec(naked) void asm_004f47b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_004f47fb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_004f47fb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_004f484e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe4dde8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x101ad10 }
	__asm { mov dword ptr [esi + 8], 0x101acf8 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x101ad38 }
	__asm { mov dword ptr [esi + 8], 0x101ad48 }
	__asm { jmp L_004f4850 }
	__asm { L_004f484e: }
	__asm { xor esi, esi }
	__asm { L_004f4850: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044b730 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_004f486d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_004f486d: }
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
// FUNCTION: ROBLOXSTUDIO 0x004f4890
extern "C" __declspec(naked) void asm_004f4890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_004f48db }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_004f48db: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_004f492e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x101ad00 }
	__asm { mov dword ptr [esi + 8], 0x101acf0 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x101ad20 }
	__asm { mov dword ptr [esi + 8], 0x101ad30 }
	__asm { jmp L_004f4930 }
	__asm { L_004f492e: }
	__asm { xor esi, esi }
	__asm { L_004f4930: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_004f494d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_004f494d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e11024[];
extern "C" char g_00e11a34[];
extern "C" char g_00e125cc[];
extern "C" void fn_004f4b10();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004f4970
extern "C" __declspec(naked) void asm_004f4970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd82ca2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { cmp dword ptr [eax], 1 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { je L_004f49e9 }
	__asm { sub esp, 8 }
	__asm { call fn_004f4b10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_004f49c5 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11a34] }
	__asm { L_004f49c5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 0 }
	__asm { dec dword ptr [eax + 0xc] }
	__asm { call fn_00cf67ec }
	__asm { L_004f49e9: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 9 }
	__asm { call dword ptr [g_00e11a34] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xa }
	__asm { call dword ptr [g_00e11024] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e125cc] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10a74[];
extern "C" char g_00e10b8c[];
extern "C" char g_00e10b98[];
extern "C" char g_00e10bb4[];
extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10fdc[];
extern "C" char g_00e10fe8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" void fn_00414df0();
// FUNCTION: ROBLOXSTUDIO 0x004f4f10
extern "C" __declspec(naked) void asm_004f4f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd8755d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea ecx, [esp + 0x14] }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { push 0x1021330 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x48], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov byte ptr [esp + 0x48], 1 }
	__asm { call dword ptr [g_00e10bb4] }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov byte ptr [esp + 0x44], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x14] }
	__asm { call dword ptr [g_00e10b8c] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { lea ecx, [esp + 0xc] }
	__asm { setne bl }
	__asm { call fn_00414df0 }
	__asm { test bl, bl }
	__asm { je L_004f5013 }
	__asm { push 0x1021324 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea ecx, [esp + 0x28] }
	__asm { mov byte ptr [esp + 0x44], 2 }
	__asm { call dword ptr [g_00e10fdc] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { mov byte ptr [esp + 0x50], 3 }
	__asm { call dword ptr [g_00e10fe8] }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [esp + 0x48], 4 }
	__asm { call dword ptr [g_00e10a74] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov byte ptr [esp + 0x44], 3 }
	__asm { mov esi, dword ptr [g_00e10ffc] }
	__asm { lea ecx, [esp + 0x18] }
	__asm { call esi }
	__asm { lea ecx, [esp + 0x28] }
	__asm { mov byte ptr [esp + 0x44], 2 }
	__asm { call esi }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov byte ptr [esp + 0x44], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_004f5013: }
	__asm { lea ecx, [esp + 0x10] }
	__asm { call dword ptr [g_00e10b98] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x44], 0xffffffff }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { mov ecx, dword ptr [esp + 0x3c] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10b90[];
extern "C" char g_00e10b98[];
extern "C" char g_00e10bb4[];
extern "C" char g_00e10cf0[];
extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x004f5040
extern "C" __declspec(naked) void asm_004f5040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd875a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push 0 }
	__asm { lea ecx, [esp + 0xc] }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { push 0x1021330 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 0x30], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [esp + 4] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov byte ptr [esp + 0x30], 1 }
	__asm { call dword ptr [g_00e10bb4] }
	__asm { lea ecx, [esp + 4] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [esp + 8] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [esp + 4] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov byte ptr [esp + 0x30], 2 }
	__asm { call dword ptr [g_00e10b90] }
	__asm { lea ecx, [esp + 4] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [esp + 8] }
	__asm { call dword ptr [g_00e10b98] }
	__asm { push 0x1021330 }
	__asm { lea ecx, [esp + 8] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [esp + 4] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov byte ptr [esp + 0x30], 3 }
	__asm { call dword ptr [g_00e10bb4] }
	__asm { lea ecx, [esp + 4] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { push dword ptr [ebx] }
	__asm { lea ecx, [esp + 0x14] }
	__asm { call dword ptr [g_00e10cf0] }
	__asm { push 0x1021324 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov byte ptr [esp + 0x30], 4 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x34], 5 }
	__asm { call dword ptr [g_00e10fd4] }
	__asm { lea ecx, [esp + 4] }
	__asm { mov byte ptr [esp + 0x2c], 4 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [esp + 8] }
	__asm { call dword ptr [g_00e10b98] }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1128c[];
// FUNCTION: ROBLOXSTUDIO 0x004f5220
extern "C" __declspec(naked) void asm_004f5220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_004f52a4 }
	__asm { push ebx }
	__asm { xor bl, bl }
	__asm { test al, 4 }
	__asm { je L_004f5248 }
	__asm { cmp dword ptr [ebp + 0xc], 2 }
	__asm { jne L_004f5248 }
	__asm { mov eax, 1 }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { movzx ebx, bl }
	__asm { cmove ebx, eax }
	__asm { L_004f5248: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1128c] }
	__asm { add esp, 4 }
	__asm { test bl, bl }
	__asm { pop ebx }
	__asm { je L_004f52a4 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { cmp ecx, 4 }
	__asm { jne L_004f5280 }
	__asm { cmp dword ptr [ebp + 0xc], 2 }
	__asm { jne L_004f5270 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { je L_004f5280 }
	__asm { L_004f5270: }
	__asm { test eax, 0xe000000 }
	__asm { jne L_004f5280 }
	__asm { L_004f5277: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004f5280: }
	__asm { test cl, 8 }
	__asm { je L_004f528c }
	__asm { test eax, 0x2000000 }
	__asm { jne L_004f5277 }
	__asm { L_004f528c: }
	__asm { test cl, 0x10 }
	__asm { je L_004f5298 }
	__asm { test eax, 0x8000000 }
	__asm { jne L_004f5277 }
	__asm { L_004f5298: }
	__asm { test cl, 0x20 }
	__asm { je L_004f52a4 }
	__asm { test eax, 0x4000000 }
	__asm { jne L_004f5277 }
	__asm { L_004f52a4: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10f6c[];
extern "C" char g_00e110cc[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11100[];
extern "C" char g_00e11110[];
extern "C" char g_00e12f00[];
extern "C" void fn_004794a0();
extern "C" void fn_00547580();
extern "C" void fn_005479e0();
// FUNCTION: ROBLOXSTUDIO 0x004f5940
extern "C" __declspec(naked) void asm_004f5940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8767c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_00547580 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_005479e0 }
	__asm { add esi, 8 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11100] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_004794a0 }
	__asm { push 0x102157c }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e110cc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10f6c] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12f00] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004f60c0
extern "C" __declspec(naked) void asm_004f60c0()
{
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0x12be4b0 }
	__asm { push 0x12be620 }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_004f60e5 }
	__asm { mov eax, 6 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_004f60e5: }
	__asm { push 0 }
	__asm { push 0x12bc0a4 }
	__asm { push 0x12be620 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_004f6107 }
	__asm { mov eax, 5 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_004f6107: }
	__asm { push 0 }
	__asm { push 0x12c9074 }
	__asm { push 0x12be620 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_004f6129 }
	__asm { mov eax, 4 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_004f6129: }
	__asm { push 0 }
	__asm { push 0x12c9044 }
	__asm { push 0x12be620 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_004f614b }
	__asm { mov eax, 3 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_004f614b: }
	__asm { push 0 }
	__asm { push 0x12bc38c }
	__asm { push 0x12be620 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_004f616d }
	__asm { mov eax, 2 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_004f616d: }
	__asm { push 0 }
	__asm { push 0x12c90dc }
	__asm { push 0x12be620 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_004f618f }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_004f618f: }
	__asm { push 0 }
	__asm { push 0x12be104 }
	__asm { push 0x12be620 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { and eax, 0xffffff9c }
	__asm { add eax, 0x64 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10f70[];
extern "C" char g_00e11110[];
extern "C" char g_00e11fb8[];
extern "C" void fn_004f60c0();
// FUNCTION: ROBLOXSTUDIO 0x004f6610
extern "C" __declspec(naked) void asm_004f6610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd757c2 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebx + 0x18] }
	__asm { mov esi, dword ptr [esi + 0x18] }
	__asm { push edi }
	__asm { call fn_004f60c0 }
	__asm { mov ecx, esi }
	__asm { mov edi, eax }
	__asm { call fn_004f60c0 }
	__asm { mov ecx, eax }
	__asm { cmp edi, ecx }
	__asm { je L_004f6663 }
	__asm { xor eax, eax }
	__asm { cmp edi, ecx }
	__asm { setl al }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004f6663: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11fb8] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11fb8] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10f70] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e110dc[];
extern "C" char g_00e1110c[];
extern "C" char g_00e11110[];
extern "C" void fn_0049bb20();
// FUNCTION: ROBLOXSTUDIO 0x004f67c0
extern "C" __declspec(naked) void asm_004f67c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8773b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0x10223a0 }
	__asm { mov dword ptr [edi + 8], 0x10223d4 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov ecx, dword ptr [edi + 0x30] }
	__asm { mov esi, dword ptr [g_00e110dc] }
	__asm { call esi }
	__asm { mov ecx, dword ptr [edi + 0x34] }
	__asm { call esi }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { call esi }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { call esi }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { test eax, eax }
	__asm { je L_004f6843 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { L_004f6843: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 8], 0x1014354 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xc] }
	__asm { call fn_0049bb20 }
	__asm { push dword ptr [edi + 0xc] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e1110c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e125e0[];
extern "C" char g_00e12680[];
extern "C" char g_0131a2e8[];
extern "C" void fn_004f7040();
extern "C" void fn_004f7190();
extern "C" void fn_004f8bb0();
extern "C" void fn_00794980();
extern "C" void fn_007949d0();
extern "C" void fn_007cbce0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004f6f00
extern "C" __declspec(naked) void asm_004f6f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8786e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, dword ptr [g_0131a2e8] }
	__asm { test al, 1 }
	__asm { jne L_004f6f61 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2e8], eax }
	__asm { mov ecx, 0x131a2f0 }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { call fn_007cbce0 }
	__asm { push 0xddc160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x24], 0xffffffff }
	__asm { L_004f6f61: }
	__asm { push 0x131a2f0 }
	__asm { mov ecx, edi }
	__asm { call fn_004f7040 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { call fn_007949d0 }
	__asm { mov ebx, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { call fn_00794980 }
	__asm { mov esi, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { cmp esi, ebx }
	__asm { je L_004f6fa0 }
	__asm { nop }
	__asm { L_004f6f90: }
	__asm { push dword ptr [esi] }
	__asm { mov ecx, edi }
	__asm { call fn_004f7190 }
	__asm { add esi, 4 }
	__asm { cmp esi, ebx }
	__asm { jne L_004f6f90 }
	__asm { L_004f6fa0: }
	__asm { mov edx, dword ptr [edi + 0x18] }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { mov eax, edx }
	__asm { sub eax, ecx }
	__asm { sar eax, 2 }
	__asm { push 0x4f6610 }
	__asm { push eax }
	__asm { call fn_004f8bb0 }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { add esp, 8 }
	__asm { cmp esi, dword ptr [edi + 0x18] }
	__asm { je L_004f6fd5 }
	__asm { L_004f6fc3: }
	__asm { push dword ptr [esi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e125e0] }
	__asm { add esi, 4 }
	__asm { cmp esi, dword ptr [edi + 0x18] }
	__asm { jne L_004f6fc3 }
	__asm { L_004f6fd5: }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12680] }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11f78[];
extern "C" char g_00e11f80[];
extern "C" char g_00e125b4[];
extern "C" char g_00e125ec[];
extern "C" char g_00e125f0[];
extern "C" void fn_004085f0();
extern "C" void fn_00478ce0();
extern "C" void fn_004f61c0();
// FUNCTION: ROBLOXSTUDIO 0x004f7190
extern "C" __declspec(naked) void asm_004f7190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd878d0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { test edi, edi }
	__asm { je L_004f727f }
	__asm { push 0x1c }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_004f71fa }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11f80] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov edx, edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0x1021e40 }
	__asm { mov dword ptr [esi + 0x18], edi }
	__asm { call fn_004f61c0 }
	__asm { jmp L_004f71fc }
	__asm { L_004f71fa: }
	__asm { xor esi, esi }
	__asm { L_004f71fc: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push 0x100a854 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 1 }
	__asm { push ecx }
	__asm { push 9 }
	__asm { lea edx, [ebp + 8] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00478ce0 }
	__asm { add esp, 0xc }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e125ec] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e11f78] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e125b4] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e125f0] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x14] }
	__asm { call fn_004085f0 }
	__asm { L_004f727f: }
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
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11f78[];
extern "C" char g_00e11f80[];
extern "C" char g_00e125b4[];
extern "C" char g_00e125ec[];
extern "C" char g_00e125f0[];
extern "C" void fn_004085f0();
extern "C" void fn_00478ce0();
extern "C" void fn_004f61c0();
// FUNCTION: ROBLOXSTUDIO 0x004f7e30
extern "C" __declspec(naked) void asm_004f7e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd878d0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { test edi, edi }
	__asm { je L_004f7f1f }
	__asm { push 0x1c }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_004f7e9a }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11f80] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov edx, edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0x1021e40 }
	__asm { mov dword ptr [esi + 0x18], edi }
	__asm { call fn_004f61c0 }
	__asm { jmp L_004f7e9c }
	__asm { L_004f7e9a: }
	__asm { xor esi, esi }
	__asm { L_004f7e9c: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push 0x100a854 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 1 }
	__asm { push ecx }
	__asm { push 0xa }
	__asm { lea edx, [ebp + 8] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00478ce0 }
	__asm { add esp, 0xc }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e125ec] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e11f78] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e125b4] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e125f0] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x14] }
	__asm { call fn_004085f0 }
	__asm { L_004f7f1f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e113ac[];
extern "C" char g_00e113b0[];
extern "C" char g_00e11e10[];
extern "C" char g_00e11eb4[];
extern "C" char g_00e122f4[];
extern "C" char g_00e129c4[];
extern "C" char g_00e12a60[];
extern "C" char g_00e12ab4[];
// FUNCTION: ROBLOXSTUDIO 0x004f9b80
extern "C" __declspec(naked) void asm_004f9b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd87d82 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call dword ptr [g_00e129c4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0x1022f50 }
	__asm { call dword ptr [g_00e11e10] }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [eax], 0x20 }
	__asm { call dword ptr [g_00e12ab4] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e113ac] }
	__asm { push 0x4b }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11eb4] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e113b0] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { push 0 }
	__asm { call dword ptr [g_00e12a60] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e122f4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11d08[];
extern "C" char g_00e11dfc[];
extern "C" char g_00e122b8[];
extern "C" char g_00e12b20[];
extern "C" char g_00e12b24[];
extern "C" char g_00e12b28[];
extern "C" char g_00e12b2c[];
extern "C" char g_00e12b34[];
extern "C" char g_00e12b38[];
extern "C" char g_00e12b3c[];
extern "C" char g_00e12b70[];
// FUNCTION: ROBLOXSTUDIO 0x004f9ea0
extern "C" __declspec(naked) void asm_004f9ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd882e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x9c }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esp + 0x24] }
	__asm { call dword ptr [g_00e12b70] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [esp + 0x24] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0xb8], 0 }
	__asm { call dword ptr [g_00e12b20] }
	__asm { and dword ptr [esp + 0x48], 0xfffffff0 }
	__asm { call dword ptr [g_00e11dfc] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [esp + 0x28] }
	__asm { push ecx }
	__asm { push 0x22 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x74] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x14] }
	__asm { call dword ptr [g_00e11d08] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12b24] }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x10] }
	__asm { call dword ptr [g_00e12b2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esp + 0xb0], 1 }
	__asm { call dword ptr [g_00e12b28] }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov byte ptr [esp + 0xac], 0 }
	__asm { call dword ptr [g_00e12b34] }
	__asm { push dword ptr [esp + 0x3c] }
	__asm { mov eax, dword ptr [esp + 0x3c] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x3c] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { call dword ptr [g_00e12b38] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12b3c] }
	__asm { lea ecx, [esp + 0x20] }
	__asm { mov dword ptr [esp + 0xac], 0xffffffff }
	__asm { call dword ptr [g_00e122b8] }
	__asm { mov ecx, dword ptr [esp + 0xa4] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x004fa160
extern "C" __declspec(naked) void asm_004fa160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x210] }
	__asm { sub esp, 0x10 }
	__asm { sub eax, 0 }
	__asm { je L_004fa1d7 }
	__asm { dec eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { je L_004fa1a7 }
	__asm { fld qword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fst qword ptr [ecx + 0x218] }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { fstp qword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004fa1a7: }
	__asm { fld qword ptr [ecx + 0x218] }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { fadd qword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fstp qword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004fa1d7: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_004fa218 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004fa207 }
	__asm { push 0x112 }
	__asm { push 0x1022610 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004fa218 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004fa207: }
	__asm { movzx eax, al }
	__asm { push 0x1022678 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004fa218: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fldz }
	__asm { fstp qword ptr [eax] }
	__asm { mov byte ptr [eax + 8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00409690();
extern "C" void fn_004fe2c0();
extern "C" void fn_004fe3b0();
extern "C" void fn_006b9e50();
// FUNCTION: ROBLOXSTUDIO 0x004fa9e0
extern "C" __declspec(naked) void asm_004fa9e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 0x4c] }
	__asm { push edi }
	__asm { mov esi, dword ptr [eax] }
	__asm { cmp esi, eax }
	__asm { je L_004faa3f }
	__asm { L_004fa9f2: }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_006b9e50 }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { jne L_004faa3a }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_004faa1f }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_004faa3a }
	__asm { L_004faa13: }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_004faa13 }
	__asm { jmp L_004faa3a }
	__asm { L_004faa1f: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_004faa38 }
	__asm { L_004faa28: }
	__asm { cmp esi, dword ptr [eax + 8] }
	__asm { jne L_004faa38 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_004faa28 }
	__asm { L_004faa38: }
	__asm { mov esi, eax }
	__asm { L_004faa3a: }
	__asm { cmp esi, dword ptr [ebx + 0x4c] }
	__asm { jne L_004fa9f2 }
	__asm { L_004faa3f: }
	__asm { mov eax, dword ptr [ebx + 0x4c] }
	__asm { lea ecx, [ebx + 0x4c] }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_004fe2c0 }
	__asm { mov eax, dword ptr [ebx + 0x4c] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov eax, dword ptr [ebx + 0x4c] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [ebx + 0x4c] }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { mov dword ptr [ebx + 0x50], 0 }
	__asm { mov eax, dword ptr [ebx + 0x3c] }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { mov esi, edi }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { jne L_004faa92 }
	__asm { L_004faa73: }
	__asm { push dword ptr [esi + 8] }
	__asm { lea ecx, [ebx + 0x3c] }
	__asm { call fn_00409690 }
	__asm { mov esi, dword ptr [esi] }
	__asm { push edi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov edi, esi }
	__asm { je L_004faa73 }
	__asm { L_004faa92: }
	__asm { mov eax, dword ptr [ebx + 0x3c] }
	__asm { mov esi, ebx }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov eax, dword ptr [ebx + 0x3c] }
	__asm { lea ecx, [esi + 0x44] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [ebx + 0x3c] }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { mov dword ptr [ebx + 0x40], 0 }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_004fe3b0 }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00470530();
extern "C" void fn_007cd690();
extern "C" void fn_00847040();
extern "C" void fn_00848ef0();
// FUNCTION: ROBLOXSTUDIO 0x004fae20
extern "C" __declspec(naked) void asm_004fae20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88348 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { test ebx, ebx }
	__asm { je L_004faee3 }
	__asm { cmp dword ptr [ebx + 0x28], 0 }
	__asm { je L_004faee3 }
	__asm { push 1 }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_00470530 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call fn_00847040 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [esi + 0x1c], 0 }
	__asm { je L_004fae88 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_004fae88 }
	__asm { add eax, -0x4c }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_004fae8f }
	__asm { L_004fae88: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_004fae8f: }
	__asm { lea esi, [ebp + 8] }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_004faed4 }
	__asm { L_004fae98: }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_004faec8 }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { add eax, 0x1c }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { je L_004faec8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_004faeb9 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { jmp L_004faebb }
	__asm { L_004faeb9: }
	__asm { xor edi, edi }
	__asm { L_004faebb: }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push eax }
	__asm { push edi }
	__asm { call dword ptr [edx + 0x14] }
	__asm { L_004faec8: }
	__asm { mov esi, dword ptr [esi + 0x4c] }
	__asm { test esi, esi }
	__asm { je L_004faed4 }
	__asm { add esi, -0x4c }
	__asm { jne L_004fae98 }
	__asm { L_004faed4: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00848ef0 }
	__asm { L_004faee3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f54[];
extern "C" char g_00e10f58[];
extern "C" char g_0131a21b[];
extern "C" void fn_00408d90();
extern "C" void fn_004fa0b0();
extern "C" void fn_004fed60();
// FUNCTION: ROBLOXSTUDIO 0x004fb410
extern "C" __declspec(naked) void asm_004fb410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd882c2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [esp + 0xc] }
	__asm { lea eax, [edi + 0x64] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10f58] }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { cmp byte ptr [edi + 0x75], 0 }
	__asm { jne L_004fb4c8 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x34] }
	__asm { call fn_00408d90 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [edi + 0x34] }
	__asm { je L_004fb4c8 }
	__asm { lea ecx, [eax + 0x14] }
	__asm { movzx eax, byte ptr [g_0131a21b] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ecx }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { call fn_004fed60 }
	__asm { mov ecx, dword ptr [edi + 0x54] }
	__asm { mov byte ptr [edi + 0x74], 1 }
	__asm { test ecx, ecx }
	__asm { je L_004fb492 }
	__asm { call fn_004fa0b0 }
	__asm { jmp L_004fb4c8 }
	__asm { L_004fb492: }
	__asm { lea eax, [edi + 0x68] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0xc] }
	__asm { call dword ptr [g_00e10f58] }
	__asm { mov byte ptr [esp + 0x24], 1 }
	__asm { cmp byte ptr [edi + 0x76], 0 }
	__asm { jne L_004fb4b9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x180] }
	__asm { mov byte ptr [edi + 0x76], 1 }
	__asm { L_004fb4b9: }
	__asm { lea ecx, [esp + 8] }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { call dword ptr [g_00e10f54] }
	__asm { L_004fb4c8: }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x24], 0xffffffff }
	__asm { call dword ptr [g_00e10f54] }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f54[];
extern "C" char g_00e10f58[];
extern "C" char g_00e10fcc[];
extern "C" char g_00e12670[];
extern "C" char g_00e12760[];
extern "C" void fn_004fb730();
// FUNCTION: ROBLOXSTUDIO 0x004fb570
extern "C" __declspec(naked) void asm_004fb570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { movzx eax, word ptr [esi + 8] }
	__asm { mov edi, ecx }
	__asm { mov ecx, 0x3ee }
	__asm { cmp ax, cx }
	__asm { mov ecx, edi }
	__asm { jne L_004fb5b8 }
	__asm { call fn_004fb730 }
	__asm { lea eax, [edi + 0x68] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10f58] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [edi + 0x76], 0 }
	__asm { mov bl, 1 }
	__asm { call dword ptr [g_00e10f54] }
	__asm { L_004fb5ad: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004fb5b8: }
	__asm { push esi }
	__asm { cmp eax, 0x33 }
	__asm { jne L_004fb60d }
	__asm { call dword ptr [g_00e12760] }
	__asm { mov cx, word ptr [esi + 0x14] }
	__asm { mov bl, al }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov word ptr [ebp + 8], cx }
	__asm { cmp eax, 0x1000030 }
	__asm { jl L_004fb5df }
	__asm { cmp eax, 0x1000052 }
	__asm { jle L_004fb5ad }
	__asm { L_004fb5df: }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10fcc] }
	__asm { test al, al }
	__asm { je L_004fb5ad }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12670] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { jne L_004fb5ad }
	__asm { or word ptr [esi + 0xa], 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004fb60d: }
	__asm { call dword ptr [g_00e12760] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" void fn_004ade70();
// FUNCTION: ROBLOXSTUDIO 0x004fb620
extern "C" __declspec(naked) void asm_004fb620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd883a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { lea edi, [esi + 0x78] }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { test eax, eax }
	__asm { je L_004fb698 }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { test al, 1 }
	__asm { je L_004fb684 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { jmp L_004fb698 }
	__asm { L_004fb684: }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push ecx }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004fb698: }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004ade70 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { test eax, eax }
	__asm { je L_004fb6d0 }
	__asm { test al, 1 }
	__asm { jne L_004fb6c9 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004fb6c9 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004fb6c9: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_004fb6d0: }
	__asm { push 0 }
	__asm { push 0x1022a00 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e110ac] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_004fb718 }
	__asm { test al, 1 }
	__asm { jne L_004fb718 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004fb718 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004fb718: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e11e14[];
extern "C" char g_012bfacd[];
extern "C" void fn_004033d0();
extern "C" void fn_004084f0();
extern "C" void fn_004223a0();
extern "C" void fn_00476450();
extern "C" void fn_0048ca10();
extern "C" void fn_004fbb00();
extern "C" void fn_007cc1b0();
// FUNCTION: ROBLOXSTUDIO 0x004fb9f0
extern "C" __declspec(naked) void asm_004fb9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8b758 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { test esi, esi }
	__asm { je L_004fbad0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_004fbad0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push eax }
	__asm { call fn_007cc1b0 }
	__asm { test al, al }
	__asm { jne L_004fbad0 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { call fn_004223a0 }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push esi }
	__asm { call fn_0048ca10 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [esp + 0x24], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { test byte ptr [esi + 0x1c], 1 }
	__asm { je L_004fbad0 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { shr ecx, 1 }
	__asm { test cl, 1 }
	__asm { je L_004fbad0 }
	__asm { cmp dword ptr [esi + 0x18], 0 }
	__asm { je L_004fba8f }
	__asm { test edi, edi }
	__asm { je L_004fbad0 }
	__asm { cmp byte ptr [edi + 0x64], 0 }
	__asm { je L_004fbad0 }
	__asm { cmp byte ptr [g_012bfacd], 0 }
	__asm { je L_004fbad0 }
	__asm { L_004fba8f: }
	__asm { test edi, edi }
	__asm { je L_004fba99 }
	__asm { cmp byte ptr [edi + 0x65], 0 }
	__asm { jne L_004fbad0 }
	__asm { L_004fba99: }
	__asm { mov al, byte ptr [esi + 6] }
	__asm { test al, al }
	__asm { jne L_004fbad0 }
	__asm { mov ecx, esi }
	__asm { call fn_00476450 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_004fbad0 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_004fbb00 }
	__asm { test eax, eax }
	__asm { je L_004fbac2 }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11e14] }
	__asm { L_004fbac2: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x34] }
	__asm { call fn_004084f0 }
	__asm { mov dword ptr [eax], edi }
	__asm { L_004fbad0: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e11110[];
extern "C" char g_00e1268c[];
extern "C" void fn_004f9cc0();
// FUNCTION: ROBLOXSTUDIO 0x004fbd40
extern "C" __declspec(naked) void asm_004fbd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd88e39 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1268c] }
	__asm { mov edi, dword ptr [ebx + 0x2c] }
	__asm { mov esi, dword ptr [edi] }
	__asm { cmp esi, edi }
	__asm { je L_004fbdcb }
	__asm { L_004fbd75: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_004fbd85 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004f9cc0 }
	__asm { L_004fbd85: }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { jne L_004fbdc7 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_004fbdac }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_004fbdc7 }
	__asm { mov edi, edi }
	__asm { L_004fbda0: }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_004fbda0 }
	__asm { jmp L_004fbdc7 }
	__asm { L_004fbdac: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_004fbdc5 }
	__asm { L_004fbdb5: }
	__asm { cmp esi, dword ptr [eax + 8] }
	__asm { jne L_004fbdc5 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_004fbdb5 }
	__asm { L_004fbdc5: }
	__asm { mov esi, eax }
	__asm { L_004fbdc7: }
	__asm { cmp esi, edi }
	__asm { jne L_004fbd75 }
	__asm { L_004fbdcb: }
	__asm { push 1 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e1268c] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11000[];
extern "C" char g_00e11110[];
extern "C" void fn_004fc4e0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004fc410
extern "C" __declspec(naked) void asm_004fc410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd718ca }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 0x77], 0 }
	__asm { je L_004fc4ca }
	__asm { push 0 }
	__asm { push 0x12cf2b0 }
	__asm { push 0x12c39ac }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf67f8 }
	__asm { mov edi, eax }
	__asm { add esp, 0x14 }
	__asm { test edi, edi }
	__asm { je L_004fc4ca }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call dword ptr [g_00e11000] }
	__asm { push edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004fc4e0 }
	__asm { mov esi, eax }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { mov dword ptr [ebp - 0x18], 0x1029570 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10fd4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { L_004fc4ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e4c[];
extern "C" char g_00e11050[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e12ac4[];
extern "C" void fn_00403410();
extern "C" void fn_00478c30();
// FUNCTION: ROBLOXSTUDIO 0x004fc4e0
extern "C" __declspec(naked) void asm_004fc4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8822b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { test ecx, ecx }
	__asm { je L_004fc587 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12ac4] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10e4c] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11050] }
	__asm { push 0x1018f8c }
	__asm { mov edx, eax }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00403410 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov edx, eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00478c30 }
	__asm { add esp, 8 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { jmp L_004fc595 }
	__asm { L_004fc587: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0xf12f2d }
	__asm { call dword ptr [g_00e110fc] }
	__asm { L_004fc595: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004226b0();
extern "C" void fn_004fef90();
extern "C" void fn_004ff050();
// FUNCTION: ROBLOXSTUDIO 0x004fd910
extern "C" __declspec(naked) void asm_004fd910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd88040 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push esi }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { push edi }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { mov esi, eax }
	__asm { jne L_004fd956 }
	__asm { mov edi, dword ptr [ecx] }
	__asm { L_004fd942: }
	__asm { cmp dword ptr [edx + 0x10], edi }
	__asm { jae L_004fd94c }
	__asm { mov edx, dword ptr [edx + 8] }
	__asm { jmp L_004fd950 }
	__asm { L_004fd94c: }
	__asm { mov esi, edx }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_004fd950: }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { je L_004fd942 }
	__asm { L_004fd956: }
	__asm { cmp esi, eax }
	__asm { je L_004fd961 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { jae L_004fd9b5 }
	__asm { L_004fd961: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004fef90 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_004ff050 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { test eax, eax }
	__asm { je L_004fd9b5 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_004fd9b5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x14] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f70[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_0049bf60();
extern "C" void fn_0049bff0();
// FUNCTION: ROBLOXSTUDIO 0x004fdc40
extern "C" __declspec(naked) void asm_004fdc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88078 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { jne L_004fdc99 }
	__asm { L_004fdc77: }
	__asm { push ebx }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call edx }
	__asm { test al, al }
	__asm { je L_004fdc86 }
	__asm { mov edi, dword ptr [edi + 8] }
	__asm { jmp L_004fdc8a }
	__asm { L_004fdc86: }
	__asm { mov esi, edi }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_004fdc8a: }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { je L_004fdc77 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { L_004fdc99: }
	__asm { cmp esi, dword ptr [eax] }
	__asm { je L_004fdca9 }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call edx }
	__asm { test al, al }
	__asm { je L_004fdcf2 }
	__asm { L_004fdca9: }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0049bf60 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0049bff0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_004fdcf2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x14] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f70[];
// FUNCTION: ROBLOXSTUDIO 0x004fdd10
extern "C" __declspec(naked) void asm_004fdd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { jne L_004fdd52 }
	__asm { L_004fdd30: }
	__asm { push ebx }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call edx }
	__asm { test al, al }
	__asm { je L_004fdd3f }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { jmp L_004fdd43 }
	__asm { L_004fdd3f: }
	__asm { mov edi, esi }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_004fdd43: }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { je L_004fdd30 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { L_004fdd52: }
	__asm { cmp edi, dword ptr [eax] }
	__asm { je L_004fdd7b }
	__asm { lea eax, [edi + 0x10] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call edx }
	__asm { test al, al }
	__asm { jne L_004fdd78 }
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
	__asm { L_004fdd78: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { L_004fdd7b: }
	__asm { mov eax, dword ptr [eax] }
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

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0044b730();
// FUNCTION: ROBLOXSTUDIO 0x004feb20
extern "C" __declspec(naked) void asm_004feb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_004feb6b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_004feb6b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_004febbe }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe4dde8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1022c00 }
	__asm { mov dword ptr [esi + 8], 0x1022c10 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x1022c30 }
	__asm { mov dword ptr [esi + 8], 0x1022c40 }
	__asm { jmp L_004febc0 }
	__asm { L_004febbe: }
	__asm { xor esi, esi }
	__asm { L_004febc0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044b730 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_004febdd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_004febdd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_0041bf30();
extern "C" void fn_00421060();
extern "C" void fn_00421110();
// FUNCTION: ROBLOXSTUDIO 0x004fec00
extern "C" __declspec(naked) void asm_004fec00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_004fec4b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_004fec4b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_004fec9e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe69690 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1022be8 }
	__asm { mov dword ptr [esi + 8], 0x1022bf8 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x1022c18 }
	__asm { mov dword ptr [esi + 8], 0x1022c28 }
	__asm { jmp L_004feca0 }
	__asm { L_004fec9e: }
	__asm { xor esi, esi }
	__asm { L_004feca0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0041bf30 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_004fecbd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_004fecbd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004ff510();
// FUNCTION: ROBLOXSTUDIO 0x004fece0
extern "C" __declspec(naked) void asm_004fece0()
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
	__asm { call fn_004ff510 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_004fed46 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_004fed21 }
	__asm { L_004fed17: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_004fed17 }
	__asm { L_004fed21: }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_004fed3c }
	__asm { L_004fed31: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_004fed31 }
	__asm { L_004fed3c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004fed46: }
	__asm { mov dword ptr [edx], edx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0040d6f0();
extern "C" void fn_004ff5c0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004fed60
extern "C" __declspec(naked) void asm_004fed60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd87ca0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dl, 1 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov esi, ebx }
	__asm { mov byte ptr [ebp - 0x14], dl }
	__asm { jne L_004fedc1 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { L_004feda2: }
	__asm { cmp ecx, dword ptr [eax + 0x10] }
	__asm { mov esi, eax }
	__asm { setb dl }
	__asm { mov byte ptr [ebp - 0x14], dl }
	__asm { test dl, dl }
	__asm { je L_004fedb5 }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp L_004fedb8 }
	__asm { L_004fedb5: }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { L_004fedb8: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_004feda2 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { L_004fedc1: }
	__asm { mov eax, esi }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { test dl, dl }
	__asm { je L_004fee07 }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { jne L_004fedfc }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push edi }
	__asm { push esi }
	__asm { push 1 }
	__asm { L_004fedd8: }
	__asm { push eax }
	__asm { call fn_004ff5c0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_004fedfc: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_0040d6f0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { L_004fee07: }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { cmp ecx, dword ptr [edi] }
	__asm { jae L_004fee27 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { jmp L_004fedd8 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_004fee27: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov byte ptr [ecx + 4], 0 }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10508[];
extern "C" void fn_0040d520();
extern "C" void fn_00421060();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004fef90
extern "C" __declspec(naked) void asm_004fef90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd87c21 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_0040d520 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea edx, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { mov dword ptr [ebp - 0x1c], edx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edx, edx }
	__asm { je L_004ff019 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { test eax, eax }
	__asm { je L_004ff019 }
	__asm { lea ecx, [eax + 5] }
	__asm { test ecx, ecx }
	__asm { je L_004feffa }
	__asm { add ecx, -5 }
	__asm { jmp L_004feffc }
	__asm { L_004feffa: }
	__asm { xor ecx, ecx }
	__asm { L_004feffc: }
	__asm { cmp dword ptr [ecx - 8], 0 }
	__asm { je L_004ff019 }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_004ff00e }
	__asm { add eax, 5 }
	__asm { jmp L_004ff010 }
	__asm { L_004ff00e: }
	__asm { xor eax, eax }
	__asm { L_004ff010: }
	__asm { push eax }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_004ff019: }
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
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10508[];
extern "C" void fn_0043a460();
extern "C" void fn_004cd4a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004ff260
extern "C" __declspec(naked) void asm_004ff260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd87c41 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_004cd4a0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov word ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004ff2df }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [esi], eax }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { call fn_0043a460 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [ebx + 8], ecx }
	__asm { L_004ff2df: }
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
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00409690();
extern "C" void fn_00500130();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004ff510
extern "C" __declspec(naked) void asm_004ff510()
{
	__asm { L_004ff510: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd87c50 }
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
	__asm { jne L_004ff58f }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { call fn_00500130 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ebx, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov al, byte ptr [ecx + 0xc] }
	__asm { mov byte ptr [ebx + 0xc], al }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { cmovne edi, ebx }
	__asm { push ebx }
	__asm { push dword ptr [ecx] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { call L_004ff510 }
	__asm { mov dword ptr [ebx], eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push dword ptr [eax + 8] }
	__asm { mov ecx, esi }
	__asm { call L_004ff510 }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { L_004ff58f: }
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
	__asm { call fn_00409690 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10508[];
extern "C" void fn_0043db60();
extern "C" void fn_004788c0();
extern "C" void fn_004fff60();
extern "C" void fn_00500080();
extern "C" void fn_00500200();
extern "C" void fn_00500270();
// FUNCTION: ROBLOXSTUDIO 0x004ffb90
extern "C" __declspec(naked) void asm_004ffb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd87ce8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx] }
	__asm { push edi }
	__asm { push ecx }
	__asm { shr esi, 3 }
	__asm { add esi, dword ptr [edx] }
	__asm { push edx }
	__asm { push esi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_0043db60 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_004ffbe7 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_004ffbe7: }
	__asm { lea eax, [edi + 3] }
	__asm { test eax, eax }
	__asm { je L_004ffbf1 }
	__asm { inc eax }
	__asm { jmp L_004ffbf3 }
	__asm { L_004ffbf1: }
	__asm { xor eax, eax }
	__asm { L_004ffbf3: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00500200 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { call fn_00500270 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { add esp, 4 }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 0xf], 1 }
	__asm { call fn_00500080 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004fff60 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov byte ptr [edi + 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004ffc70 }
	__asm { cmp byte ptr [ebp - 0xf], 0 }
	__asm { je L_004ffc66 }
	__asm { mov ecx, esi }
	__asm { call fn_004788c0 }
	__asm { L_004ffc66: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004ffc70: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0040d6f0();
extern "C" void fn_004ff7c0();
extern "C" void fn_004ffc90();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004ffe60
extern "C" __declspec(naked) void asm_004ffe60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd87c90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov dl, 1 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov edi, ebx }
	__asm { mov byte ptr [ebp - 0x18], dl }
	__asm { jne L_004ffec1 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_004ffea2: }
	__asm { cmp ecx, dword ptr [eax + 0x10] }
	__asm { mov edi, eax }
	__asm { setb dl }
	__asm { mov byte ptr [ebp - 0x18], dl }
	__asm { test dl, dl }
	__asm { je L_004ffeb5 }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp L_004ffeb8 }
	__asm { L_004ffeb5: }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { L_004ffeb8: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_004ffea2 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { L_004ffec1: }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test dl, dl }
	__asm { je L_004fff07 }
	__asm { cmp edi, dword ptr [ebx] }
	__asm { jne L_004ffefc }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 1 }
	__asm { L_004ffed8: }
	__asm { push eax }
	__asm { call fn_004ffc90 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_004ffefc: }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_0040d6f0 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_004fff07: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jae L_004fff32 }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push edi }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { jmp L_004ffed8 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_004ff7c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_004fff32: }
	__asm { call fn_004ff7c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x004fff60
extern "C" __declspec(naked) void asm_004fff60()
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
	__asm { mov dword ptr [ebx + 0x50], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_004fffbd }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_004fffb0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0x4c] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_004fffb0: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0x4c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_004fffc8 }
	__asm { L_004fffbd: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0x4c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_004fffc8: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_004fffde }
	__asm { add ecx, -0x4c }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_004fffde: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e34[];
extern "C" char g_00e10f9c[];
extern "C" char g_00e10fdc[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11110[];
extern "C" char g_00e119e0[];
extern "C" char g_00e119e4[];
extern "C" char g_00e11afc[];
extern "C" char g_00e11cb4[];
extern "C" char g_00e125b4[];
// FUNCTION: ROBLOXSTUDIO 0x00500510
extern "C" __declspec(naked) void asm_00500510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88914 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0050063c }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 3 }
	__asm { jne L_00500585 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11cb4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10e34] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00500585: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { cmp edx, 1 }
	__asm { jne L_005005d4 }
	__asm { test eax, eax }
	__asm { jne L_0050063c }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e119e4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10e34] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_005005d4: }
	__asm { test edx, edx }
	__asm { jne L_0050063c }
	__asm { cmp eax, 1 }
	__asm { jne L_0050063c }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e119e0] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11afc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e10f9c] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e125b4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0050063c: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10fdc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10504[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e113f8[];
extern "C" char g_00e113fc[];
extern "C" char g_00e11400[];
extern "C" char g_00e12600[];
extern "C" char g_00e1260c[];
extern "C" char g_00e12a2c[];
extern "C" char g_00e12a34[];
extern "C" char g_00e12a3c[];
extern "C" char g_00e12a40[];
extern "C" char g_00e12a48[];
extern "C" char g_00e12a74[];
extern "C" char g_00e12a78[];
extern "C" char g_00e12bc4[];
// FUNCTION: ROBLOXSTUDIO 0x005008f0
extern "C" __declspec(naked) void asm_005008f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd885ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { call dword ptr [g_00e12a34] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi], 0x102477c }
	__asm { mov dword ptr [edi + 8], 0x1024760 }
	__asm { call dword ptr [g_00e1260c] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12a40] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12a3c] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e113f8] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x18], 0x10 }
	__asm { mov dword ptr [ebp - 0x14], 0x10 }
	__asm { call dword ptr [g_00e113fc] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12600] }
	__asm { mov esi, dword ptr [g_00e12a74] }
	__asm { mov ecx, edi }
	__asm { call esi }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call esi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11400] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call esi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12a78] }
	__asm { push 8 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_005009d2 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12a2c] }
	__asm { mov dword ptr [esi], 0x102494c }
	__asm { jmp L_005009d4 }
	__asm { L_005009d2: }
	__asm { xor esi, esi }
	__asm { L_005009d4: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12a48] }
	__asm { push 0x1022fb0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e12bc4] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e12984[];
extern "C" char g_00e129cc[];
extern "C" void fn_00503f60();
// FUNCTION: ROBLOXSTUDIO 0x00500a20
extern "C" __declspec(naked) void asm_00500a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { call dword ptr [g_00e129cc] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test eax, eax }
	__asm { jle L_00500a88 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { L_00500a40: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12984] }
	__asm { mov edi, eax }
	__asm { inc esi }
	__asm { test edi, edi }
	__asm { je L_00500a73 }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { cmp eax, ebx }
	__asm { je L_00500a7d }
	__asm { push eax }
	__asm { mov ecx, 0x12bfdc0 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { je L_00500a73 }
	__asm { push ebx }
	__asm { mov ecx, eax }
	__asm { call fn_00503f60 }
	__asm { test al, al }
	__asm { jne L_00500a7d }
	__asm { L_00500a73: }
	__asm { cmp esi, dword ptr [ebp - 4] }
	__asm { jge L_00500a88 }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { jmp L_00500a40 }
	__asm { L_00500a7d: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00500a88: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11394[];
extern "C" char g_00e11fe8[];
extern "C" char g_00e11ff4[];
extern "C" char g_00e122b8[];
extern "C" char g_00e129d0[];
extern "C" char g_00e12b70[];
extern "C" char g_00e12bb4[];
// FUNCTION: ROBLOXSTUDIO 0x00500aa0
extern "C" __declspec(naked) void asm_00500aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd88a1c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x98 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { call dword ptr [g_00e12b70] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esp + 0xa8], 0 }
	__asm { call dword ptr [g_00e129d0] }
	__asm { test eax, eax }
	__asm { jne L_00500b2f }
	__asm { push 0xff }
	__asm { push 0xe9 }
	__asm { push 0xe9 }
	__asm { push 0xe9 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { call dword ptr [g_00e11ff4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e11fe8] }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { push 0x10 }
	__asm { lea ecx, [esp + 0x44] }
	__asm { call dword ptr [g_00e11394] }
	__asm { L_00500b2f: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12bb4] }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0xa4], 0xffffffff }
	__asm { call dword ptr [g_00e122b8] }
	__asm { mov ecx, dword ptr [esp + 0x9c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10dc0[];
extern "C" char g_00e11050[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11404[];
extern "C" char g_00e119e4[];
// FUNCTION: ROBLOXSTUDIO 0x00500b70
extern "C" __declspec(naked) void asm_00500b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88b08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test esi, esi }
	__asm { je L_00500c34 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e119e4] }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ebx, 1 }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { je L_00500c34 }
	__asm { push 0x1011d48 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], 3 }
	__asm { call dword ptr [g_00e119e4] }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov ebx, 7 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call dword ptr [g_00e10dc0] }
	__asm { test al, al }
	__asm { jne L_00500c34 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11050] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ebx, 0xf }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { je L_00500c34 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11404] }
	__asm { mov byte ptr [ebp + 0xb], 1 }
	__asm { test al, al }
	__asm { jne L_00500c38 }
	__asm { L_00500c34: }
	__asm { mov byte ptr [ebp + 0xb], 0 }
	__asm { L_00500c38: }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test bl, 8 }
	__asm { je L_00500c53 }
	__asm { and ebx, 0xfffffff7 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00500c53: }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test bl, 4 }
	__asm { je L_00500c6e }
	__asm { and ebx, 0xfffffffb }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00500c6e: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test bl, 2 }
	__asm { je L_00500c89 }
	__asm { and ebx, 0xfffffffd }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00500c89: }
	__asm { pop esi }
	__asm { test bl, 1 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00500ca0 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00500ca0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f4c[];
extern "C" char g_00e11408[];
extern "C" char g_00e11a38[];
extern "C" char g_00e11b5c[];
extern "C" char g_00e129cc[];
extern "C" char g_00e12a50[];
extern "C" char g_00e12b44[];
// FUNCTION: ROBLOXSTUDIO 0x005025b0
extern "C" __declspec(naked) void asm_005025b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10f4c] }
	__asm { cmp eax, dword ptr [esi + 0x2c] }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { sete byte ptr [ebp - 1] }
	__asm { call dword ptr [g_00e11a38] }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { call dword ptr [g_00e11408] }
	__asm { cmp dword ptr [ebp - 8], 0 }
	__asm { mov edi, eax }
	__asm { je L_00502634 }
	__asm { cmp byte ptr [ebp - 1], 0 }
	__asm { je L_005025fd }
	__asm { test edi, edi }
	__asm { jg L_0050260a }
	__asm { pop edi }
	__asm { mov byte ptr [esi + 0x38], 1 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005025fd: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e129cc] }
	__asm { dec eax }
	__asm { cmp edi, eax }
	__asm { jge L_00502634 }
	__asm { L_0050260a: }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e11b5c] }
	__asm { cmp byte ptr [ebp - 1], 0 }
	__asm { je L_0050261c }
	__asm { dec edi }
	__asm { jmp L_0050261d }
	__asm { L_0050261c: }
	__asm { inc edi }
	__asm { L_0050261d: }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, ebx }
	__asm { push edi }
	__asm { call dword ptr [g_00e12b44] }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e12a50] }
	__asm { L_00502634: }
	__asm { pop edi }
	__asm { mov byte ptr [esi + 0x38], 1 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e128ec[];
extern "C" char g_00e12b04[];
extern "C" char g_00e12b08[];
extern "C" char g_00e12b0c[];
extern "C" char g_00e12b10[];
extern "C" char g_00e12bcc[];
extern "C" void fn_00479a60();
extern "C" void fn_005014f0();
// FUNCTION: ROBLOXSTUDIO 0x00502640
extern "C" __declspec(naked) void asm_00502640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd88871 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x38], 0 }
	__asm { je L_005026ec }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_00479a60 }
	__asm { push 0x1023930 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e12b04] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [eax], 0x800400 }
	__asm { call dword ptr [g_00e12b08] }
	__asm { push 0x400 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call dword ptr [g_00e12b0c] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call dword ptr [g_00e128ec] }
	__asm { cmp eax, 0x400 }
	__asm { jne L_005026dc }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { call fn_005014f0 }
	__asm { L_005026dc: }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12b10] }
	__asm { L_005026ec: }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x38], 0 }
	__asm { call dword ptr [g_00e12bcc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10a48[];
extern "C" char g_00e10c88[];
extern "C" char g_00e10e58[];
extern "C" char g_00e134a8[];
extern "C" void fn_00504690();
// FUNCTION: ROBLOXSTUDIO 0x00503660
extern "C" __declspec(naked) void asm_00503660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test ebx, ebx }
	__asm { je L_00503726 }
	__asm { cmp dword ptr [eax + 0xc], 0 }
	__asm { je L_00503726 }
	__asm { lea edi, [eax + 0x14] }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_00503699 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_00504690 }
	__asm { L_00503699: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov esi, dword ptr [ecx + 8] }
	__asm { add esi, 5 }
	__asm { lea esi, [ecx + esi*4] }
	__asm { L_005036a4: }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_005036b7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_00504690 }
	__asm { L_005036b7: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { add eax, 5 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { cmp esi, eax }
	__asm { je L_005036f4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax], ebx }
	__asm { je L_005036d1 }
	__asm { add esi, 4 }
	__asm { jmp L_005036a4 }
	__asm { L_005036d1: }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test eax, eax }
	__asm { je L_005036eb }
	__asm { push eax }
	__asm { call dword ptr [g_00e10c88] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 8 }
	__asm { L_005036eb: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10a48] }
	__asm { L_005036f4: }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push 0x12bfdb0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { add esp, 0x10 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e134a8] }
	__asm { L_00503726: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e1104c[];
extern "C" char g_00e11050[];
extern "C" char g_00e11110[];
extern "C" void fn_00478c30();
extern "C" void fn_00503a10();
extern "C" void fn_00503cb0();
extern "C" void fn_00503da0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00503730
extern "C" __declspec(naked) void asm_00503730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd88bfe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0x12cf418 }
	__asm { push 0x12cdff8 }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { jne L_00503780 }
	__asm { L_0050376b: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00503780: }
	__asm { push 0 }
	__asm { push 0x12cf3f0 }
	__asm { push 0x12cdff8 }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_00503a10 }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { mov esi, eax }
	__asm { add esp, 0x14 }
	__asm { test esi, esi }
	__asm { jne L_00503829 }
	__asm { cmp byte ptr [ebp + 0xc], al }
	__asm { je L_0050376b }
	__asm { push 0x10 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { test eax, eax }
	__asm { je L_005037d1 }
	__asm { push dword ptr [ebx + 8] }
	__asm { mov ecx, eax }
	__asm { call fn_00503cb0 }
	__asm { mov esi, eax }
	__asm { jmp L_005037d3 }
	__asm { L_005037d1: }
	__asm { xor esi, esi }
	__asm { L_005037d3: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11050] }
	__asm { push 0x1319ffc }
	__asm { mov edx, eax }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00478c30 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e1104c] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00503829: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00503da0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e11098[];
extern "C" char g_00e110a8[];
extern "C" void fn_00503a10();
extern "C" void fn_00503fd0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00503850
extern "C" __declspec(naked) void asm_00503850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push 0 }
	__asm { push 0x12cf3f0 }
	__asm { push 0x12cdff8 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00503a10 }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { mov ebx, eax }
	__asm { add esp, 0x14 }
	__asm { test ebx, ebx }
	__asm { jne L_0050387e }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0050387e: }
	__asm { cmp dword ptr [ebx + 0xc], 0 }
	__asm { je L_005038cf }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_00e110a8] }
	__asm { push 0x1023dc8 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0xc] }
	__asm { push 0x1023d68 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { call dword ptr [g_00e11098] }
	__asm { push 0x1023e88 }
	__asm { call edi }
	__asm { add esp, 0x14 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push 0x1023e28 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0xc] }
	__asm { call dword ptr [g_00e11098] }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { L_005038cf: }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebx + 0xc], 0 }
	__asm { call fn_00503fd0 }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11150[];
extern "C" char g_00e11404[];
extern "C" char g_00e119e0[];
extern "C" char g_00e11b58[];
extern "C" char g_00e120dc[];
extern "C" char g_00e125b4[];
extern "C" char g_00e125b8[];
extern "C" char g_00e128c4[];
extern "C" char g_00e128c8[];
// FUNCTION: ROBLOXSTUDIO 0x00503fd0
extern "C" __declspec(naked) void asm_00503fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88c59 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00503ffb }
	__asm { call dword ptr [g_00e11150] }
	__asm { jmp L_00503ffd }
	__asm { L_00503ffb: }
	__asm { xor al, al }
	__asm { L_00503ffd: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e128c4] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00504015 }
	__asm { call dword ptr [g_00e120dc] }
	__asm { jmp L_00504017 }
	__asm { L_00504015: }
	__asm { xor al, al }
	__asm { L_00504017: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11b58] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_0050402f }
	__asm { call dword ptr [g_00e11404] }
	__asm { jmp L_00504034 }
	__asm { L_0050402f: }
	__asm { mov eax, 1 }
	__asm { L_00504034: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e128c8] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_0050406e }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e119e0] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e125b8] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e125b4] }
	__asm { L_0050406e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10ec0[];
extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10fdc[];
extern "C" char g_00e10fe8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e110e4[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" char g_00e122a0[];
extern "C" char g_00e12398[];
// FUNCTION: ROBLOXSTUDIO 0x005041a0
extern "C" __declspec(naked) void asm_005041a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88562 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0x3000 }
	__asm { call dword ptr [g_00e12398] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { lea esi, [edi + 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edi], 0x101ad54 }
	__asm { mov dword ptr [edi + 8], 0x101ae2c }
	__asm { call dword ptr [g_00e11108] }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e10fdc] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e10fe8] }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e10ec0] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call dword ptr [g_00e122a0] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e110e4] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov esi, dword ptr [g_00e10ffc] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call esi }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call esi }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10ea8[];
extern "C" char g_00e11004[];
extern "C" void fn_004cc2e0();
// FUNCTION: ROBLOXSTUDIO 0x00504320
extern "C" __declspec(naked) void asm_00504320()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jne L_00504342 }
	__asm { push 0x2e }
	__asm { push 0x1024240 }
	__asm { push 0x1024228 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00504342: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_00504358 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax + 8] }
	__asm { call fn_004cc2e0 }
	__asm { L_00504358: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov ebx, dword ptr [eax + edx*4 + 0xc] }
	__asm { lea edi, [edx - 1] }
	__asm { cmp edi, ecx }
	__asm { jg L_0050437d }
	__asm { test byte ptr [eax + 0xc], 2 }
	__asm { jne L_0050438f }
	__asm { cmp edi, edx }
	__asm { jge L_0050438f }
	__asm { mov eax, ecx }
	__asm { sar eax, 1 }
	__asm { cmp edi, eax }
	__asm { jge L_0050438f }
	__asm { L_0050437d: }
	__asm { push 0 }
	__asm { push 4 }
	__asm { push edi }
	__asm { push 0x14 }
	__asm { call dword ptr [g_00e10ea8] }
	__asm { add esp, 0x10 }
	__asm { mov ecx, eax }
	__asm { L_0050438f: }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_004cc2e0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_0041f450();
extern "C" void fn_005047d0();
// FUNCTION: ROBLOXSTUDIO 0x00504400
extern "C" __declspec(naked) void asm_00504400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov edi, ecx }
	__asm { call fn_005047d0 }
	__asm { mov esi, eax }
	__asm { cmp esi, -1 }
	__asm { jne L_00504422 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00504422: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ebx, dword ptr [ebx] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_00504437 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_0041f450 }
	__asm { L_00504437: }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { add eax, esi }
	__asm { add ecx, 5 }
	__asm { lea eax, [edx + eax*4] }
	__asm { lea esi, [edx + ecx*4] }
	__asm { lea ecx, [eax + 0x14] }
	__asm { add eax, 0x18 }
	__asm { cmp eax, esi }
	__asm { je L_00504466 }
	__asm { L_00504454: }
	__asm { mov edx, dword ptr [eax] }
	__asm { cmp edx, ebx }
	__asm { je L_0050445f }
	__asm { mov dword ptr [ecx], edx }
	__asm { add ecx, 4 }
	__asm { L_0050445f: }
	__asm { add eax, 4 }
	__asm { cmp eax, esi }
	__asm { jne L_00504454 }
	__asm { L_00504466: }
	__asm { sub esi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { sar esi, 2 }
	__asm { sub dword ptr [ecx + 0xc], esi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10c8c[];
extern "C" void fn_0049b670();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00504830
extern "C" __declspec(naked) void asm_00504830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88c1c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_0050485e: }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { je L_005048ed }
	__asm { push 8 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_005048b4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { push esi }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 4 }
	__asm { movzx eax, byte ptr [ecx + 4] }
	__asm { mov byte ptr [esi + 4], al }
	__asm { movzx eax, byte ptr [ecx + 5] }
	__asm { mov byte ptr [esi + 5], al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], esi }
	__asm { add edi, 4 }
	__asm { add ebx, 4 }
	__asm { jmp L_0050485e }
	__asm { L_005048b4: }
	__asm { xor esi, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], esi }
	__asm { add edi, 4 }
	__asm { add ebx, 4 }
	__asm { jmp L_0050485e }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp esi, edi }
	__asm { je L_005048e4 }
	__asm { mov edi, edi }
	__asm { L_005048d0: }
	__asm { mov ecx, dword ptr [esi - 4] }
	__asm { sub esi, 4 }
	__asm { test ecx, ecx }
	__asm { je L_005048e0 }
	__asm { push ecx }
	__asm { call fn_0049b670 }
	__asm { L_005048e0: }
	__asm { cmp esi, edi }
	__asm { jne L_005048d0 }
	__asm { L_005048e4: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_005048ed: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e113ac[];
extern "C" char g_00e113b0[];
extern "C" char g_00e11418[];
extern "C" char g_00e11eb4[];
extern "C" char g_00e122f4[];
extern "C" char g_00e12350[];
extern "C" char g_00e129c4[];
extern "C" char g_00e12ab4[];
// FUNCTION: ROBLOXSTUDIO 0x00504900
extern "C" __declspec(naked) void asm_00504900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88dc2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e129c4] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [esi], 0x1024b40 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [eax], 0x20 }
	__asm { call dword ptr [g_00e12ab4] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e113ac] }
	__asm { push 0x4b }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11eb4] }
	__asm { push 9 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call dword ptr [g_00e12350] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e113b0] }
	__asm { push 0x88 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11418] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e122f4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e4c[];
extern "C" char g_00e122bc[];
extern "C" char g_00e129d0[];
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x005049b0
extern "C" __declspec(naked) void asm_005049b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e122bc] }
	__asm { push 0 }
	__asm { push 0x12cf484 }
	__asm { push 0x12bc018 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10e4c] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { mov ecx, eax }
	__asm { push 0 }
	__asm { push 0x12cf460 }
	__asm { push 0x12c39ac }
	__asm { push 0 }
	__asm { push edi }
	__asm { call dword ptr [g_00e129d0] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00504a2f }
	__asm { mov esi, dword ptr [ebx + 0x10] }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { mov edi, dword ptr [ebx + 0x14] }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov edx, ecx }
	__asm { sub edx, esi }
	__asm { add edx, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [ebx + 0x10], ecx }
	__asm { mov dword ptr [ebx + 0x14], edi }
	__asm { add eax, 3 }
	__asm { mov dword ptr [ebx + 0x18], edx }
	__asm { mov dword ptr [ebx + 0x1c], eax }
	__asm { L_00504a2f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e1141c[];
extern "C" char g_00e11b64[];
extern "C" char g_00e1260c[];
extern "C" char g_00e12a2c[];
extern "C" char g_00e12a34[];
extern "C" char g_00e12a48[];
// FUNCTION: ROBLOXSTUDIO 0x00504ab0
extern "C" __declspec(naked) void asm_00504ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88de5 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e12a34] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [esi], 0x10249bc }
	__asm { mov dword ptr [esi + 8], 0x10249a0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { call dword ptr [g_00e11b64] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1260c] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1141c] }
	__asm { push 8 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00504b3c }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12a2c] }
	__asm { mov dword ptr [edi], 0x1024b64 }
	__asm { jmp L_00504b3e }
	__asm { L_00504b3c: }
	__asm { xor edi, edi }
	__asm { L_00504b3e: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12a48] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11394[];
extern "C" char g_00e1142c[];
extern "C" char g_00e11430[];
extern "C" char g_00e11438[];
extern "C" char g_00e11fe8[];
extern "C" char g_00e129d0[];
extern "C" char g_00e12bb4[];
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00504ce0
extern "C" __declspec(naked) void asm_00504ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88e19 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x6c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x78] }
	__asm { call dword ptr [g_00e1142c] }
	__asm { push 0 }
	__asm { push 0x12cf460 }
	__asm { push 0x12c39ac }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e129d0] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00504d7d }
	__asm { push 4 }
	__asm { lea ecx, [ebx + 0x24] }
	__asm { call dword ptr [g_00e11438] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov ax, word ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov word ptr [ebp - 0x10], ax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebx + 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11fe8] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push 0x10 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { call dword ptr [g_00e11394] }
	__asm { L_00504d7d: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x78] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12bb4] }
	__asm { lea ecx, [ebp - 0x78] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11430] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10f34[];
extern "C" char g_00e1104c[];
extern "C" char g_00e134b0[];
extern "C" char g_00e134dc[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00505580
extern "C" __declspec(naked) void asm_00505580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_00e134b0] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { push esi }
	__asm { call dword ptr [g_00e10f34] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00505607 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { cmove ecx, edi }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e134dc] }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov esi, eax }
	__asm { test cl, cl }
	__asm { je L_005055fc }
	__asm { test esi, esi }
	__asm { jne L_005055fc }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005055eb }
	__asm { push 0xcd }
	__asm { push 0x1024ee8 }
	__asm { push 0x1025004 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005055fc }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_005055eb: }
	__asm { movzx eax, cl }
	__asm { push 0x1025030 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005055fc: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1104c] }
	__asm { mov eax, esi }
	__asm { L_00505607: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10a34[];
extern "C" char g_00e11064[];
extern "C" char g_00e11074[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e122fc[];
extern "C" void fn_00403410();
// FUNCTION: ROBLOXSTUDIO 0x00505c40
extern "C" __declspec(naked) void asm_00505c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd89205 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov esi, ecx }
	__asm { push 1 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x20], esi }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { call dword ptr [g_00e122fc] }
	__asm { add esp, 8 }
	__asm { push 0x1025188 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11064] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e10a34] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11074] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { push 0x1025180 }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov ecx, esi }
	__asm { call fn_00403410 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10af4[];
extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10fdc[];
extern "C" char g_00e10fe8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x00505d00
extern "C" __declspec(naked) void asm_00505d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8931c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { push 0x101eb28 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10fdc] }
	__asm { mov esi, eax }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { mov dword ptr [ebp - 0x20], 0x1029570 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e10fe8] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10af4] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov esi, dword ptr [g_00e10ffc] }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { call esi }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call esi }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f34[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e1104c[];
extern "C" char g_00e11050[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" char g_00e11110[];
extern "C" char g_00e114c0[];
extern "C" char g_00e119b4[];
extern "C" char g_00e129b4[];
extern "C" char g_00e13640[];
extern "C" void fn_0050eb40();
// FUNCTION: ROBLOXSTUDIO 0x0050bc20
extern "C" __declspec(naked) void asm_0050bc20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88f12 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0050bd26 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { test ebx, ebx }
	__asm { je L_0050bd25 }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { call dword ptr [g_00e13640] }
	__asm { mov edi, dword ptr [g_00e11050] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call edi }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1104c] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e119b4] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { push dword ptr [g_00e129b4] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [g_00e10f34] }
	__asm { mov edi, eax }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { test edi, edi }
	__asm { je L_0050bd23 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x33c] }
	__asm { call fn_0050eb40 }
	__asm { mov ecx, dword ptr [g_00e114c0] }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { je L_0050bd23 }
	__asm { mov esi, dword ptr [g_00e110a8] }
	__asm { push 0 }
	__asm { push 0x1026a40 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0x10269e0 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { call dword ptr [g_00e110ac] }
	__asm { add esp, 0x14 }
	__asm { L_0050bd23: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_0050bd25: }
	__asm { pop ebx }
	__asm { L_0050bd26: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10f4c[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e11050[];
extern "C" char g_00e11110[];
extern "C" char g_00e114c4[];
extern "C" char g_00e125b0[];
extern "C" char g_0131eb88[];
extern "C" char g_0131eb9c[];
extern "C" void fn_004a4c90();
extern "C" void fn_0050e5e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0050c260
extern "C" __declspec(naked) void asm_0050c260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8959e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10f4c] }
	__asm { mov ecx, dword ptr [g_00e114c4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_0050c377 }
	__asm { mov ecx, dword ptr [g_0131eb88] }
	__asm { test cl, 1 }
	__asm { jne L_0050c2cf }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [g_0131eb88], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0050c2cf: }
	__asm { cmp dword ptr [g_0131eb9c], 0 }
	__asm { je L_0050c377 }
	__asm { mov edi, dword ptr [g_00e11050] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { push eax }
	__asm { call fn_0050e5e0 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_0050c33b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0050c33b: }
	__asm { mov ebx, dword ptr [g_0131eb9c] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call edi }
	__asm { mov edi, eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov esi, dword ptr [ebx] }
	__asm { call dword ptr [g_00e125b0] }
	__asm { movzx edx, al }
	__asm { push edx }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [esi + 0x48] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0050c377: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f4c[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e11050[];
extern "C" char g_00e11110[];
extern "C" char g_00e120dc[];
extern "C" char g_00e129b8[];
extern "C" char g_0131eb88[];
extern "C" char g_0131eb9c[];
extern "C" void fn_004a4c90();
extern "C" void fn_0050e5e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0050c710
extern "C" __declspec(naked) void asm_0050c710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8959e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10f4c] }
	__asm { mov ecx, dword ptr [g_00e129b8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_0050c827 }
	__asm { mov ecx, dword ptr [g_0131eb88] }
	__asm { test cl, 1 }
	__asm { jne L_0050c77f }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [g_0131eb88], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0050c77f: }
	__asm { cmp dword ptr [g_0131eb9c], 0 }
	__asm { je L_0050c827 }
	__asm { mov edi, dword ptr [g_00e11050] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { push eax }
	__asm { call fn_0050e5e0 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_0050c7eb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0050c7eb: }
	__asm { mov ebx, dword ptr [g_0131eb9c] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call edi }
	__asm { mov edi, eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov esi, dword ptr [ebx] }
	__asm { call dword ptr [g_00e120dc] }
	__asm { movzx edx, al }
	__asm { push edx }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [esi + 0x48] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0050c827: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10a60[];
extern "C" char g_00e10b88[];
extern "C" char g_00e10f4c[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11474[];
extern "C" char g_00e12c64[];
extern "C" void fn_0050cd60();
// FUNCTION: ROBLOXSTUDIO 0x0050cee0
extern "C" __declspec(naked) void asm_0050cee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd89852 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { call dword ptr [g_00e10f4c] }
	__asm { mov ecx, dword ptr [g_00e12c64] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_0050cf79 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11474] }
	__asm { test eax, eax }
	__asm { je L_0050cf79 }
	__asm { push 0x1025cb4 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11474] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10a60] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10b88] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0050cd60 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { L_0050cf79: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10a24[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_00414b50();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0050e980
extern "C" __declspec(naked) void asm_0050e980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8a722 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { cmp dword ptr [eax], 1 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { je L_0050e9f9 }
	__asm { push ecx }
	__asm { push 0 }
	__asm { call fn_00414b50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_0050e9d5 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { L_0050e9d5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 0 }
	__asm { inc dword ptr [eax + 8] }
	__asm { call fn_00cf67ec }
	__asm { L_0050e9f9: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 9 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xa }
	__asm { call dword ptr [g_00e10a24] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e11110] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10f74[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_004149b0();
extern "C" void fn_004672d0();
// FUNCTION: ROBLOXSTUDIO 0x0050ea50
extern "C" __declspec(naked) void asm_0050ea50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88e39 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push ecx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_004672d0 }
	__asm { mov edi, eax }
	__asm { cmp edi, -1 }
	__asm { jne L_0050ea97 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0050ea97: }
	__asm { push esi }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_0050eabb }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_004149b0 }
	__asm { L_0050eabb: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov ebx, dword ptr [ecx + 0xc] }
	__asm { add eax, edi }
	__asm { lea esi, [ecx + eax*4] }
	__asm { add ecx, 0x14 }
	__asm { lea edi, [esi + 0x14] }
	__asm { lea ebx, [ecx + ebx*4] }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call dword ptr [g_00e11110] }
	__asm { add esi, 0x18 }
	__asm { cmp esi, ebx }
	__asm { je L_0050eb09 }
	__asm { L_0050eae1: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10f74] }
	__asm { test al, al }
	__asm { je L_0050eafb }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11110] }
	__asm { jmp L_0050eb02 }
	__asm { L_0050eafb: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { add edi, 4 }
	__asm { L_0050eb02: }
	__asm { add esi, 4 }
	__asm { cmp esi, ebx }
	__asm { jne L_0050eae1 }
	__asm { L_0050eb09: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { sub ebx, edi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { sar ebx, 2 }
	__asm { sub dword ptr [ecx + 0xc], ebx }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
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

extern "C" char g_00e10f34[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e129b8[];
extern "C" char g_012e0eb0[];
extern "C" char g_012e0eb2[];
extern "C" char g_0131dfac[];
extern "C" char g_01320164[];
extern "C" char g_01320184[];
extern "C" void fn_0043fd60();
extern "C" void fn_00511ad0();
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0050f340
extern "C" __declspec(naked) void asm_0050f340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8ac95 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { xor cl, cl }
	__asm { call fn_00511ad0 }
	__asm { cmp byte ptr [g_012e0eb0], 0 }
	__asm { je L_0050f3a6 }
	__asm { cmp dword ptr [esi + 0x410], 0 }
	__asm { je L_0050f3a6 }
	__asm { mov eax, dword ptr [g_0131dfac] }
	__asm { test al, 1 }
	__asm { jne L_0050f3a6 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dfac], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0043fd60 }
	__asm { push 0xddc6d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0050f3a6: }
	__asm { cmp byte ptr [g_012e0eb2], 0 }
	__asm { je L_0050f3b8 }
	__asm { cmp dword ptr [esi + 0x410], 0 }
	__asm { jne L_0050f437 }
	__asm { L_0050f3b8: }
	__asm { push 0x101caa0 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [g_012e0eb2], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_0050f3ff }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0050f3ff: }
	__asm { push dword ptr [g_00e129b8] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [g_01320184] }
	__asm { call dword ptr [g_00e10f34] }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { test esi, esi }
	__asm { je L_0050f437 }
	__asm { mov edx, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 0xc] }
	__asm { L_0050f437: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_01318fba[];
extern "C" char g_01320164[];
extern "C" char g_01320184[];
extern "C" void fn_0057e360();
extern "C" void fn_005812a0();
extern "C" void fn_00581c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00511e20
extern "C" __declspec(naked) void asm_00511e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8acbc }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp byte ptr [g_01318fba], 0 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { push esi }
	__asm { jne L_00511ec0 }
	__asm { test al, 1 }
	__asm { jne L_00511e95 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp byte ptr [g_01318fba], 0 }
	__asm { je L_00511e95 }
	__asm { mov ecx, 0x1320168 }
	__asm { call fn_005812a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00511e95: }
	__asm { push 0x1035b00 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { push eax }
	__asm { push 0x1320168 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { add esp, 0x10 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00511ec0: }
	__asm { test al, 1 }
	__asm { jne L_00511eec }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00511eec: }
	__asm { mov esi, dword ptr [g_01320184] }
	__asm { cmp byte ptr [esi + 0x420], 0 }
	__asm { je L_00511f1b }
	__asm { push dword ptr [esi + 0x190] }
	__asm { mov ecx, 0x1320168 }
	__asm { call fn_00581c90 }
	__asm { push dword ptr [esi + 0x194] }
	__asm { mov ecx, 0x1320168 }
	__asm { call fn_00581c90 }
	__asm { L_00511f1b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_004cab00();
// FUNCTION: ROBLOXSTUDIO 0x00512170
extern "C" __declspec(naked) void asm_00512170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_005121bb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_005121bb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0051220e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3a38c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1028d58 }
	__asm { mov dword ptr [esi + 8], 0x1028d68 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x1028d90 }
	__asm { mov dword ptr [esi + 8], 0x1028d78 }
	__asm { jmp L_00512210 }
	__asm { L_0051220e: }
	__asm { xor esi, esi }
	__asm { L_00512210: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_004cab00 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0051222d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0051222d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00512250
extern "C" __declspec(naked) void asm_00512250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_0051229b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0051229b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_005122ee }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe4dde8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1028d40 }
	__asm { mov dword ptr [esi + 8], 0x1028d50 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x1028d80 }
	__asm { mov dword ptr [esi + 8], 0x1028d70 }
	__asm { jmp L_005122f0 }
	__asm { L_005122ee: }
	__asm { xor esi, esi }
	__asm { L_005122f0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044b730 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0051230d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0051230d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
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
// FUNCTION: ROBLOXSTUDIO 0x00512580
extern "C" __declspec(naked) void asm_00512580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x218] }
	__asm { sub eax, 0 }
	__asm { je L_00512648 }
	__asm { dec eax }
	__asm { je L_00512614 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_005125e0 }
	__asm { cmp byte ptr [esi + 0x214], 0 }
	__asm { jne L_005125e0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005125cb }
	__asm { push 0x59 }
	__asm { push 0x1028e48 }
	__asm { push 0x1028f10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005125e0 }
	__asm { L_005125cb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1028ea8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005125e0: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { fld qword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fst qword ptr [esi + 0x220] }
	__asm { pop esi }
	__asm { fstp qword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00512614: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { fld qword ptr [esi + 0x220] }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { fadd qword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { fstp qword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00512648: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00512686 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00512675 }
	__asm { push 0x6a }
	__asm { push 0x1028e48 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00512686 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00512675: }
	__asm { movzx eax, al }
	__asm { push 0x1028f88 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00512686: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fldz }
	__asm { fstp qword ptr [eax] }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10fbc[];
extern "C" char g_00e10ff4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006bca40();
extern "C" void fn_006bca60();
// FUNCTION: ROBLOXSTUDIO 0x005126a0
extern "C" __declspec(naked) void asm_005126a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8763c }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { fld qword ptr [eax + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { fadd qword ptr [edi + 0x220] }
	__asm { mov eax, dword ptr [edi + 0x218] }
	__asm { fstp qword ptr [edi + 0x228] }
	__asm { sub eax, 0 }
	__asm { je L_005127a2 }
	__asm { dec eax }
	__asm { je L_00512780 }
	__asm { dec eax }
	__asm { jne L_005127e0 }
	__asm { cmp byte ptr [g_012de657], al }
	__asm { je L_0051272e }
	__asm { cmp byte ptr [edi + 0x214], al }
	__asm { jne L_0051272e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00512719 }
	__asm { push 0x76 }
	__asm { push 0x1028e48 }
	__asm { push 0x1028f10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0051272e }
	__asm { L_00512719: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1028f20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0051272e: }
	__asm { push 0xc }
	__asm { mov dword ptr [edi + 0x218], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00512768 }
	__asm { push 0x3f1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10ff4] }
	__asm { mov dword ptr [esi], 0x1022f70 }
	__asm { jmp L_0051276a }
	__asm { L_00512768: }
	__asm { xor esi, esi }
	__asm { L_0051276a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x208] }
	__asm { call dword ptr [g_00e10fbc] }
	__asm { jmp L_005127dd }
	__asm { L_00512780: }
	__asm { lea ecx, [edi + 0x20c] }
	__asm { call fn_006bca40 }
	__asm { lea ecx, [edi + 0x210] }
	__asm { call fn_006bca60 }
	__asm { mov dword ptr [edi + 0x218], 2 }
	__asm { jmp L_005127e0 }
	__asm { L_005127a2: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_005127e0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005127cf }
	__asm { push 0x7c }
	__asm { push 0x1028e48 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005127e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005127cf: }
	__asm { movzx eax, al }
	__asm { push 0x1028ff0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { L_005127dd: }
	__asm { add esp, 8 }
	__asm { L_005127e0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10fbc[];
extern "C" char g_00e10ff4[];
extern "C" char g_00e11f38[];
extern "C" char g_00e12760[];
extern "C" char g_01318f8c[];
extern "C" void fn_00513290();
// FUNCTION: ROBLOXSTUDIO 0x00513510
extern "C" __declspec(naked) void asm_00513510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8763c }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, 0x3f1 }
	__asm { cmp word ptr [eax + 8], cx }
	__asm { mov ecx, edi }
	__asm { je L_00513555 }
	__asm { push eax }
	__asm { call dword ptr [g_00e12760] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00513555: }
	__asm { call dword ptr [g_00e11f38] }
	__asm { test al, al }
	__asm { je L_0051357a }
	__asm { mov ecx, edi }
	__asm { call fn_00513290 }
	__asm { mov al, 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0051357a: }
	__asm { cmp byte ptr [g_01318f8c], 0 }
	__asm { je L_005135c7 }
	__asm { push 0xc }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_005135b3 }
	__asm { push 0x3f1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10ff4] }
	__asm { mov dword ptr [esi], 0x1022f70 }
	__asm { jmp L_005135b5 }
	__asm { L_005135b3: }
	__asm { xor esi, esi }
	__asm { L_005135b5: }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10fbc] }
	__asm { add esp, 8 }
	__asm { L_005135c7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00402fd0();
extern "C" void fn_00403540();
extern "C" void fn_00513a40();
extern "C" void fn_00513f10();
extern "C" void fn_00513f50();
// FUNCTION: ROBLOXSTUDIO 0x00513840
extern "C" __declspec(naked) void asm_00513840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7e4f8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { je L_0051388f }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_0051387d }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0051387d: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, edi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jns L_005138ed }
	__asm { L_0051388f: }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00513f10 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00513f50 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { jb L_005138ed }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005138ed: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x28] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00513a40
extern "C" __declspec(naked) void asm_00513a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { jne L_00513b0f }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { L_00513a64: }
	__asm { cmp dword ptr [edx + 0x14], 0x10 }
	__asm { lea eax, [edi + 0x10] }
	__asm { jb L_00513a71 }
	__asm { mov esi, dword ptr [edx] }
	__asm { jmp L_00513a73 }
	__asm { L_00513a71: }
	__asm { mov esi, edx }
	__asm { L_00513a73: }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ebx, dword ptr [eax + 0x10] }
	__asm { jb L_00513a7e }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00513a7e: }
	__asm { cmp ebx, ecx }
	__asm { mov edx, ecx }
	__asm { cmovb edx, ebx }
	__asm { test edx, edx }
	__asm { je L_00513ae3 }
	__asm { sub edx, 4 }
	__asm { jb L_00513aa1 }
	__asm { mov edi, edi }
	__asm { L_00513a90: }
	__asm { mov ecx, dword ptr [eax] }
	__asm { cmp ecx, dword ptr [esi] }
	__asm { jne L_00513aa6 }
	__asm { add eax, 4 }
	__asm { add esi, 4 }
	__asm { sub edx, 4 }
	__asm { jae L_00513a90 }
	__asm { L_00513aa1: }
	__asm { cmp edx, -4 }
	__asm { je L_00513ada }
	__asm { L_00513aa6: }
	__asm { mov cl, byte ptr [eax] }
	__asm { cmp cl, byte ptr [esi] }
	__asm { jne L_00513ad3 }
	__asm { cmp edx, -3 }
	__asm { je L_00513ada }
	__asm { mov cl, byte ptr [eax + 1] }
	__asm { cmp cl, byte ptr [esi + 1] }
	__asm { jne L_00513ad3 }
	__asm { cmp edx, -2 }
	__asm { je L_00513ada }
	__asm { mov cl, byte ptr [eax + 2] }
	__asm { cmp cl, byte ptr [esi + 2] }
	__asm { jne L_00513ad3 }
	__asm { cmp edx, -1 }
	__asm { je L_00513ada }
	__asm { mov al, byte ptr [eax + 3] }
	__asm { cmp al, byte ptr [esi + 3] }
	__asm { je L_00513ada }
	__asm { L_00513ad3: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { jmp L_00513adc }
	__asm { L_00513ada: }
	__asm { xor eax, eax }
	__asm { L_00513adc: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { test eax, eax }
	__asm { jne L_00513af0 }
	__asm { L_00513ae3: }
	__asm { cmp ebx, ecx }
	__asm { jb L_00513afb }
	__asm { xor eax, eax }
	__asm { cmp ebx, ecx }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { L_00513af0: }
	__asm { js L_00513afb }
	__asm { mov ebx, edi }
	__asm { mov edi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { jmp L_00513b01 }
	__asm { L_00513afb: }
	__asm { mov edi, dword ptr [edi + 8] }
	__asm { mov ebx, dword ptr [ebp - 8] }
	__asm { L_00513b01: }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { je L_00513a64 }
	__asm { pop esi }
	__asm { L_00513b0f: }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10e34[];
extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" void fn_00775320();
extern "C" void fn_008f54d0();
// FUNCTION: ROBLOXSTUDIO 0x00514d40
extern "C" __declspec(naked) void asm_00514d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b456 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { mov dword ptr [ebp - 0x1c], 0x1029570 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00775320 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00514d81 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00514d81: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10e34] }
	__asm { push 0x10294c4 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e10fd4] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call fn_008f54d0 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00514dff }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00514dff: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e10e34] }
	__asm { push 0x10294b4 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call dword ptr [g_00e10fd4] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e11110] }
	__asm { cmp dword ptr [ebp - 0x34], 0x10 }
	__asm { jb L_00514e77 }
	__asm { push dword ptr [ebp - 0x48] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00514e77: }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x34], 0xf }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov byte ptr [ebp - 0x48], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11070[];
extern "C" char g_00e11110[];
extern "C" char g_0131eda8[];
extern "C" void fn_005146a0();
extern "C" void fn_005146f0();
extern "C" void fn_00514720();
extern "C" void fn_00775cd0();
extern "C" void fn_008fa620();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00514eb0
extern "C" __declspec(naked) void asm_00514eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8b3fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131eda8] }
	__asm { sub esp, 0x24 }
	__asm { test al, 1 }
	__asm { jne L_00514efc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eda8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00514720 }
	__asm { push 0xdde5b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00514efc: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, 0x131edac }
	__asm { call fn_005146f0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11070] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00775cd0 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00514f41 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00514f41: }
	__asm { mov eax, dword ptr [g_0131eda8] }
	__asm { test al, 1 }
	__asm { jne L_00514f6c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eda8], eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00514720 }
	__asm { push 0xdde5b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00514f6c: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x131edac }
	__asm { call fn_005146a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e11070] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00514f97 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00514f97: }
	__asm { push eax }
	__asm { call fn_008fa620 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00514fb2 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00514fb2: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01318f7d[];
extern "C" char g_01318f7e[];
extern "C" char g_01318f7f[];
extern "C" char g_0131eda8[];
extern "C" char g_0131edbc[];
extern "C" char g_0131edbd[];
extern "C" char g_0131edbe[];
extern "C" void fn_00514720();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00515280
extern "C" __declspec(naked) void asm_00515280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b3aa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [g_0131eda8] }
	__asm { test cl, 1 }
	__asm { jne L_005152d3 }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [g_0131eda8], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00514720 }
	__asm { push 0xdde5b0 }
	__asm { call fn_00cf6609 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [g_0131eda8] }
	__asm { add esp, 4 }
	__asm { L_005152d3: }
	__asm { mov al, byte ptr [g_0131edbc] }
	__asm { mov byte ptr [g_01318f7e], al }
	__asm { test cl, 1 }
	__asm { jne L_00515311 }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [g_0131eda8], ecx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00514720 }
	__asm { push 0xdde5b0 }
	__asm { call fn_00cf6609 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [g_0131eda8] }
	__asm { add esp, 4 }
	__asm { L_00515311: }
	__asm { mov al, byte ptr [g_0131edbd] }
	__asm { mov byte ptr [g_01318f7f], al }
	__asm { test cl, 1 }
	__asm { jne L_00515342 }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [g_0131eda8], ecx }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00514720 }
	__asm { push 0xdde5b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00515342: }
	__asm { mov al, byte ptr [g_0131edbe] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [g_01318f7d], al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bb80();
// FUNCTION: ROBLOXSTUDIO 0x00516ff0
extern "C" __declspec(naked) void asm_00516ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_0051703b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0051703b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0051708e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3cb14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x10299fc }
	__asm { mov dword ptr [esi + 8], 0x10299dc }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x1029a24 }
	__asm { mov dword ptr [esi + 8], 0x1029a0c }
	__asm { jmp L_00517090 }
	__asm { L_0051708e: }
	__asm { xor esi, esi }
	__asm { L_00517090: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_005170ad }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_005170ad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_0041bf30();
extern "C" void fn_00421060();
extern "C" void fn_00421110();
// FUNCTION: ROBLOXSTUDIO 0x005170d0
extern "C" __declspec(naked) void asm_005170d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_0051711b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0051711b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0051716e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe69690 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x10299e4 }
	__asm { mov dword ptr [esi + 8], 0x10299d4 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x1029a14 }
	__asm { mov dword ptr [esi + 8], 0x10299f4 }
	__asm { jmp L_00517170 }
	__asm { L_0051716e: }
	__asm { xor esi, esi }
	__asm { L_00517170: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0041bf30 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0051718d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0051718d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10fb8[];
extern "C" char g_01320164[];
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00517d70
extern "C" __declspec(naked) void asm_00517d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00517dc5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x14], 0xffffffff }
	__asm { L_00517dc5: }
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
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x1007d54 }
	__asm { push esi }
	__asm { push 0x1007d54 }
	__asm { push edi }
	__asm { push 4 }
	__asm { push 0x102a0d4 }
	__asm { push 0x1320168 }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { mov ecx, dword ptr [esp + 0x68] }
	__asm { add esp, 0x5c }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301e64[];
extern "C" void fn_004033d0();
extern "C" void fn_0041f760();
extern "C" void fn_00421600();
extern "C" void fn_0048c3f0();
extern "C" void fn_0052a150();
extern "C" void fn_0052a740();
extern "C" void fn_0082ea90();
// FUNCTION: ROBLOXSTUDIO 0x0051b570
extern "C" __declspec(naked) void asm_0051b570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd8d989 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [esp + 8], ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [g_01301e64], bl }
	__asm { jne L_0051b5b3 }
	__asm { L_0051b5a0: }
	__asm { xor al, al }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0051b5b3: }
	__asm { call fn_0082ea90 }
	__asm { test al, al }
	__asm { je L_0051b5a0 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0051b64c }
	__asm { call fn_0041f760 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_0051b64c }
	__asm { mov ecx, esi }
	__asm { call fn_00421600 }
	__asm { test eax, eax }
	__asm { je L_0051b61a }
	__asm { mov ecx, esi }
	__asm { call fn_00421600 }
	__asm { cmp eax, 1 }
	__asm { jne L_0051b645 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0048c3f0 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [esp + 0x24] }
	__asm { push eax }
	__asm { call fn_0052a150 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { cmp dword ptr [eax], 0 }
	__asm { mov ebx, 1 }
	__asm { mov dword ptr [esp + 0xc], ebx }
	__asm { je L_0051b645 }
	__asm { L_0051b61a: }
	__asm { mov ecx, esi }
	__asm { call fn_00421600 }
	__asm { cmp eax, 1 }
	__asm { jne L_0051b64c }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0048c3f0 }
	__asm { mov edx, dword ptr [eax] }
	__asm { lea ecx, [esp + 0x18] }
	__asm { call fn_0052a740 }
	__asm { or ebx, 2 }
	__asm { cmp dword ptr [eax], 0 }
	__asm { je L_0051b64c }
	__asm { L_0051b645: }
	__asm { mov byte ptr [esp + 0xb], 1 }
	__asm { jmp L_0051b651 }
	__asm { L_0051b64c: }
	__asm { mov byte ptr [esp + 0xb], 0 }
	__asm { L_0051b651: }
	__asm { test bl, 2 }
	__asm { je L_0051b666 }
	__asm { and ebx, 0xfffffffd }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0xc], ebx }
	__asm { call fn_004033d0 }
	__asm { L_0051b666: }
	__asm { mov dword ptr [esp + 0x34], 0xffffffff }
	__asm { test bl, 1 }
	__asm { je L_0051b67c }
	__asm { lea ecx, [esp + 0x20] }
	__asm { call fn_004033d0 }
	__asm { L_0051b67c: }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { mov al, byte ptr [esp + 0xb] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_01301e64[];
extern "C" char g_01320164[];
extern "C" void fn_0052a870();
extern "C" void fn_0057e360();
extern "C" void fn_00582c80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0051c090
extern "C" __declspec(naked) void asm_0051c090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8d6df }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [g_01301e64], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_0051c14f }
	__asm { push 0x101e21c }
	__asm { lea ecx, [esp + 0xc] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esp + 0x2c], esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x51b6a0 }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { call fn_0052a870 }
	__asm { mov byte ptr [esp + 0x3c], 1 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_0051c129 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov byte ptr [esp + 0x3c], 2 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [esp + 0x3c], 1 }
	__asm { L_0051c129: }
	__asm { lea eax, [esp + 0x28] }
	__asm { push eax }
	__asm { mov ecx, 0x1320168 }
	__asm { mov byte ptr [esp + 0x40], 0 }
	__asm { call fn_00582c80 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0051c14f: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_008288f0();
// FUNCTION: ROBLOXSTUDIO 0x0051d1a0
extern "C" __declspec(naked) void asm_0051d1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8c4b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_0051d1cf }
	__asm { lea ebx, [edi + 0x88] }
	__asm { jmp L_0051d1d1 }
	__asm { L_0051d1cf: }
	__asm { xor ebx, ebx }
	__asm { L_0051d1d1: }
	__asm { push 3 }
	__asm { push 0x101cf20 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_008288f0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [esi], 0xed58f4 }
	__asm { jb L_0051d23d }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0051d23d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x102c238 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
extern "C" void fn_0082bf60();
extern "C" void fn_00960b90();
// FUNCTION: ROBLOXSTUDIO 0x0051d260
extern "C" __declspec(naked) void asm_0051d260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7e4f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push edi }
	__asm { push 4 }
	__asm { mov ebx, ecx }
	__asm { push 0x1009444 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x24], 0xf }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { mov byte ptr [esp + 0x10], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [esp + 8] }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { push eax }
	__asm { call fn_00960b90 }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { cmp dword ptr [esp + 0x1c], 0x10 }
	__asm { mov edi, eax }
	__asm { jb L_0051d2da }
	__asm { push dword ptr [esp + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0051d2da: }
	__asm { mov dword ptr [esp + 0x1c], 0xf }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { mov byte ptr [esp + 8], 0 }
	__asm { test edi, edi }
	__asm { je L_0051d307 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_0082bf60 }
	__asm { L_0051d307: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" char g_00e11104[];
extern "C" char g_00e12b48[];
extern "C" char g_01318fae[];
extern "C" void fn_004038a0();
extern "C" void fn_0051dbd0();
extern "C" void fn_009609c0();
// FUNCTION: ROBLOXSTUDIO 0x0051da40
extern "C" __declspec(naked) void asm_0051da40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c26c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e11104] }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov edx, 0x102a5bc }
	__asm { mov eax, 0x101cf5c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmove edx, eax }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { jne L_0051da9e }
	__asm { xor ecx, ecx }
	__asm { jmp L_0051daac }
	__asm { L_0051da9e: }
	__asm { mov ecx, edx }
	__asm { lea esi, [ecx + 1] }
	__asm { L_0051daa3: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_0051daa3 }
	__asm { sub ecx, esi }
	__asm { L_0051daac: }
	__asm { push ecx }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_004038a0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0051dac9 }
	__asm { lea eax, [esi + 0x88] }
	__asm { jmp L_0051dacb }
	__asm { L_0051dac9: }
	__asm { xor eax, eax }
	__asm { L_0051dacb: }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_009609c0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0051daee }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0051daee: }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0x102c1c0 }
	__asm { mov dword ptr [edi + 8], 0x102c1f0 }
	__asm { mov dword ptr [edi + 0x14], esi }
	__asm { mov byte ptr [edi + 0x18], al }
	__asm { cmp byte ptr [g_01318fae], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { jne L_0051db5c }
	__asm { call fn_0051dbd0 }
	__asm { mov byte ptr [edi + 0x19], al }
	__asm { call dword ptr [g_00e12b48] }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { je L_0051db5c }
	__asm { mov esi, dword ptr [g_00e110a8] }
	__asm { push 0 }
	__asm { push 0x102a558 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0x102a5d8 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { call dword ptr [g_00e110ac] }
	__asm { add esp, 0x14 }
	__asm { L_0051db5c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11514[];
extern "C" char g_00e12b48[];
// FUNCTION: ROBLOXSTUDIO 0x0051dbd0
extern "C" __declspec(naked) void asm_0051dbd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8d9ba }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call dword ptr [g_00e12b48] }
	__asm { test eax, eax }
	__asm { je L_0051dc69 }
	__asm { push esi }
	__asm { push ebx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11514] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_0051dc38 }
	__asm { push 0x1027870 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push ecx }
	__asm { mov ebx, 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call eax }
	__asm { mov byte ptr [ebp - 0xd], bl }
	__asm { test al, al }
	__asm { jne L_0051dc3c }
	__asm { L_0051dc38: }
	__asm { mov byte ptr [ebp - 0xd], 0 }
	__asm { L_0051dc3c: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test bl, 1 }
	__asm { je L_0051dc52 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0051dc52: }
	__asm { cmp byte ptr [ebp - 0xd], 0 }
	__asm { je L_0051dc69 }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0051dc69: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012e07f0[];
extern "C" void fn_0041fe80();
extern "C" void fn_0051ddb0();
extern "C" void fn_0051df80();
extern "C" void fn_00790e70();
extern "C" void fn_00846f90();
extern "C" void fn_00848ef0();
extern "C" void fn_00c54280();
// FUNCTION: ROBLOXSTUDIO 0x0051dc80
extern "C" __declspec(naked) void asm_0051dc80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8cfe0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00c54280 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0051dd91 }
	__asm { mov dword ptr [esp + 0xc], 0 }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { call fn_0051ddb0 }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { cmp eax, ecx }
	__asm { je L_0051dd68 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi - 8] }
	__asm { call fn_0051df80 }
	__asm { cmp byte ptr [g_012e07f0], 0 }
	__asm { je L_0051dd3d }
	__asm { push 1 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { call fn_00846f90 }
	__asm { mov byte ptr [esp + 0x24], 1 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0051dd21 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0051dd21: }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push eax }
	__asm { call fn_00790e70 }
	__asm { add esp, 8 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { call fn_00848ef0 }
	__asm { jmp L_0051dd57 }
	__asm { L_0051dd3d: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0051dd4b }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0051dd4b: }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push eax }
	__asm { call fn_00790e70 }
	__asm { add esp, 8 }
	__asm { L_0051dd57: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { L_0051dd68: }
	__asm { mov dword ptr [esp + 0x24], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0051dd91 }
	__asm { push dword ptr [esp + 8] }
	__asm { lea edx, [esp + 0xb] }
	__asm { push edx }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 0x14 }
	__asm { L_0051dd91: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_01320164[];
extern "C" void fn_0040c260();
extern "C" void fn_0057e360();
extern "C" void fn_00582c80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0051e8a0
extern "C" __declspec(naked) void asm_0051e8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd8d66f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xf13244 }
	__asm { lea ecx, [esp + 0xc] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { sub esp, 0x20 }
	__asm { mov dword ptr [esp + 0x3c], eax }
	__asm { mov esi, esp }
	__asm { lea eax, [esp + 0x30] }
	__asm { mov dword ptr [esp + 0x2c], esp }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esp + 0x34], 0x7919f0 }
	__asm { mov dword ptr [esp + 0x38], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0051e945 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0051e939 }
	__asm { mov eax, dword ptr [esp + 0x30] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esp + 0x34] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esp + 0x38] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esp + 0x3c] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_0051e939: }
	__asm { mov eax, 0x102ba10 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_0051e94b }
	__asm { L_0051e945: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0051e94b: }
	__asm { mov byte ptr [esp + 0x4c], 1 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_0051e97d }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov byte ptr [esp + 0x4c], 2 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [esp + 0x4c], 1 }
	__asm { L_0051e97d: }
	__asm { lea eax, [esp + 0x28] }
	__asm { push eax }
	__asm { mov ecx, 0x1320168 }
	__asm { mov byte ptr [esp + 0x50], 0 }
	__asm { call fn_00582c80 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00410e50();
extern "C" void fn_00451670();
extern "C" void fn_0078edd0();
// FUNCTION: ROBLOXSTUDIO 0x0051ea40
extern "C" __declspec(naked) void asm_0051ea40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd8d758 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { mov dword ptr [esp + 4], 0 }
	__asm { mov dword ptr [esp + 0x1c], 0xf }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { mov byte ptr [esp + 8], 0 }
	__asm { push 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x48], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { push eax }
	__asm { call fn_0078edd0 }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x24] }
	__asm { push 0x102a690 }
	__asm { push eax }
	__asm { call fn_00451670 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00410e50 }
	__asm { cmp dword ptr [esp + 0x34], 0x10 }
	__asm { jb L_0051eac9 }
	__asm { push dword ptr [esp + 0x20] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0051eac9: }
	__asm { cmp dword ptr [esp + 0x1c], 0x10 }
	__asm { mov dword ptr [esp + 0x34], 0xf }
	__asm { mov dword ptr [esp + 0x30], 0 }
	__asm { mov byte ptr [esp + 0x20], 0 }
	__asm { jb L_0051eaf2 }
	__asm { push dword ptr [esp + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0051eaf2: }
	__asm { mov ecx, dword ptr [esp + 0x3c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_01320164[];
extern "C" void fn_0040c260();
extern "C" void fn_0057e360();
extern "C" void fn_00582c80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0051ecb0
extern "C" __declspec(naked) void asm_0051ecb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd8d66f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x1018400 }
	__asm { lea ecx, [esp + 0xc] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { sub esp, 0x20 }
	__asm { mov dword ptr [esp + 0x3c], eax }
	__asm { mov esi, esp }
	__asm { lea eax, [esp + 0x30] }
	__asm { mov dword ptr [esp + 0x2c], esp }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esp + 0x34], 0x78ff70 }
	__asm { mov dword ptr [esp + 0x38], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0051ed55 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0051ed49 }
	__asm { mov eax, dword ptr [esp + 0x30] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esp + 0x34] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esp + 0x38] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esp + 0x3c] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_0051ed49: }
	__asm { mov eax, 0x102ba10 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_0051ed5b }
	__asm { L_0051ed55: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0051ed5b: }
	__asm { mov byte ptr [esp + 0x4c], 1 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_0051ed8d }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov byte ptr [esp + 0x4c], 2 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [esp + 0x4c], 1 }
	__asm { L_0051ed8d: }
	__asm { lea eax, [esp + 0x28] }
	__asm { push eax }
	__asm { mov ecx, 0x1320168 }
	__asm { mov byte ptr [esp + 0x50], 0 }
	__asm { call fn_00582c80 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00410e50();
extern "C" void fn_00451670();
extern "C" void fn_0078ecb0();
// FUNCTION: ROBLOXSTUDIO 0x0051ee50
extern "C" __declspec(naked) void asm_0051ee50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd8d758 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { mov dword ptr [esp + 4], 0 }
	__asm { mov dword ptr [esp + 0x1c], 0xf }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { mov byte ptr [esp + 8], 0 }
	__asm { push 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x48], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { push eax }
	__asm { call fn_0078ecb0 }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x24] }
	__asm { push 0x102a798 }
	__asm { push eax }
	__asm { call fn_00451670 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00410e50 }
	__asm { cmp dword ptr [esp + 0x34], 0x10 }
	__asm { jb L_0051eed9 }
	__asm { push dword ptr [esp + 0x20] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0051eed9: }
	__asm { cmp dword ptr [esp + 0x1c], 0x10 }
	__asm { mov dword ptr [esp + 0x34], 0xf }
	__asm { mov dword ptr [esp + 0x30], 0 }
	__asm { mov byte ptr [esp + 0x20], 0 }
	__asm { jb L_0051ef02 }
	__asm { push dword ptr [esp + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0051ef02: }
	__asm { mov ecx, dword ptr [esp + 0x3c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0051ef20
extern "C" __declspec(naked) void asm_0051ef20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c290 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { mov bl, byte ptr [ebp + 0xc] }
	__asm { test bl, bl }
	__asm { mov edx, 0x102a780 }
	__asm { mov eax, 0x102a7b4 }
	__asm { push esi }
	__asm { cmove edx, eax }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [edx], 0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { jne L_0051ef70 }
	__asm { xor ecx, ecx }
	__asm { jmp L_0051ef7e }
	__asm { L_0051ef70: }
	__asm { mov ecx, edx }
	__asm { lea edi, [ecx + 1] }
	__asm { L_0051ef75: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_0051ef75 }
	__asm { sub ecx, edi }
	__asm { L_0051ef7e: }
	__asm { push ecx }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009609c0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0051efb4 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0051efb4: }
	__asm { push 0 }
	__asm { push 0x12d2058 }
	__asm { push 0x12d2038 }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [esi], 0x102c110 }
	__asm { call fn_00cf67f8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov byte ptr [esi + 0x10], bl }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0051f560
extern "C" __declspec(naked) void asm_0051f560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c3d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x13 }
	__asm { push 0x102a878 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009609c0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_0051f5cd }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0051f5cd: }
	__asm { push 0 }
	__asm { push 0x12d2058 }
	__asm { push 0x12d2038 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [esi], 0x102c0f0 }
	__asm { call fn_00cf67f8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0041ace0();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00829ff0();
extern "C" void fn_00846f90();
extern "C" void fn_00848ef0();
extern "C" void fn_00906f60();
// FUNCTION: ROBLOXSTUDIO 0x00520670
extern "C" __declspec(naked) void asm_00520670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8e521 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00906f60 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 1 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_00846f90 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [eax + 0xba0] }
	__asm { test ecx, ecx }
	__asm { je L_0052071b }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_005206ec }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_005206ee }
	__asm { call fn_0043ee40 }
	__asm { jmp L_005206ee }
	__asm { L_005206ec: }
	__asm { mov eax, ecx }
	__asm { L_005206ee: }
	__asm { test eax, eax }
	__asm { je L_0052071b }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0052071b }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0052071b }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0052071b }
	__asm { call fn_0041ace0 }
	__asm { jmp L_0052071d }
	__asm { L_0052071b: }
	__asm { xor eax, eax }
	__asm { L_0052071d: }
	__asm { push 1 }
	__asm { push eax }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00829ff0 }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00848ef0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00520750
extern "C" __declspec(naked) void asm_00520750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c290 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x15 }
	__asm { push 0x10175d8 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009609c0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_005207bd }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005207bd: }
	__asm { push 0 }
	__asm { push 0x12d2058 }
	__asm { push 0x12d2038 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [esi], 0x102c0d0 }
	__asm { call fn_00cf67f8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00521450
extern "C" __declspec(naked) void asm_00521450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c290 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x1c }
	__asm { push 0x102a8ec }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009609c0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_005214bd }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005214bd: }
	__asm { push 0 }
	__asm { push 0x12d2058 }
	__asm { push 0x12d2038 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [esi], 0x102c0b0 }
	__asm { call fn_00cf67f8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00522010
extern "C" __declspec(naked) void asm_00522010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c290 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x13 }
	__asm { push 0x102a9bc }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009609c0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0052207d }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0052207d: }
	__asm { push 0 }
	__asm { push 0x12d2058 }
	__asm { push 0x12d2038 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [esi], 0x102c090 }
	__asm { call fn_00cf67f8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10fe8[];
extern "C" char g_00e10fec[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11000[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x00522df0
extern "C" __declspec(naked) void asm_00522df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd8d963 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push 1 }
	__asm { lea ecx, [esp + 0x14] }
	__asm { call dword ptr [g_00e11000] }
	__asm { push 0x102a0bc }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 0x40], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 0 }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov byte ptr [esp + 0x40], 1 }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { mov dword ptr [esp + 8], 0x1029570 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x28] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov byte ptr [esp + 0x48], 2 }
	__asm { call dword ptr [g_00e10fe8] }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [esp + 0x3c], 3 }
	__asm { call dword ptr [g_00e10fec] }
	__asm { lea ecx, [esp + 0x20] }
	__asm { mov bl, al }
	__asm { mov byte ptr [esp + 0x3c], 2 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [esp + 8] }
	__asm { mov byte ptr [esp + 0x3c], 1 }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { lea ecx, [esp + 4] }
	__asm { mov byte ptr [esp + 0x3c], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x3c], 0xffffffff }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { mov ecx, dword ptr [esp + 0x34] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00522fe0
extern "C" __declspec(naked) void asm_00522fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c3d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xc }
	__asm { push 0x102aa34 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009609c0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_0052304d }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0052304d: }
	__asm { push 0 }
	__asm { push 0x12d2058 }
	__asm { push 0x12d2038 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [esi], 0x102c010 }
	__asm { call fn_00cf67f8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00523640
extern "C" __declspec(naked) void asm_00523640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c3d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xf }
	__asm { push 0x102aa24 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009609c0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_005236ad }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005236ad: }
	__asm { push 0 }
	__asm { push 0x12d2058 }
	__asm { push 0x12d2038 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [esi], 0x102bfb0 }
	__asm { call fn_00cf67f8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00523990
extern "C" __declspec(naked) void asm_00523990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c3d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xf }
	__asm { push 0x102aa58 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009609c0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_005239fd }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005239fd: }
	__asm { push 0 }
	__asm { push 0x12d2058 }
	__asm { push 0x12d2038 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [esi], 0x102bfd0 }
	__asm { call fn_00cf67f8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10fb8[];
extern "C" char g_00e120dc[];
extern "C" char g_01320164[];
extern "C" char g_01320184[];
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00523ba0
extern "C" __declspec(naked) void asm_00523ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { test al, 1 }
	__asm { jne L_00523bf2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x14], 0xffffffff }
	__asm { L_00523bf2: }
	__asm { mov eax, dword ptr [g_01320184] }
	__asm { mov esi, dword ptr [eax + 0x18c] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e120dc] }
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
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { test al, al }
	__asm { push 0x1007e30 }
	__asm { lea eax, [esp + 0x53] }
	__asm { push eax }
	__asm { push 2 }
	__asm { push 0x1025168 }
	__asm { push esi }
	__asm { sete byte ptr [esp + 0x63] }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { mov ecx, dword ptr [esp + 0x68] }
	__asm { add esp, 0x5c }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10fb8[];
extern "C" char g_01320164[];
extern "C" char g_01320184[];
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00523c60
extern "C" __declspec(naked) void asm_00523c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_00523caf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [esp + 0xc], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0xc], 0xffffffff }
	__asm { L_00523caf: }
	__asm { mov eax, dword ptr [g_01320184] }
	__asm { test eax, eax }
	__asm { je L_00523cf1 }
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
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 2 }
	__asm { push 0x102abdc }
	__asm { push eax }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { L_00523cf1: }
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10fb8[];
extern "C" char g_01320164[];
extern "C" char g_01320184[];
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00523d10
extern "C" __declspec(naked) void asm_00523d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_00523d5f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [esp + 0xc], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0xc], 0xffffffff }
	__asm { L_00523d5f: }
	__asm { mov eax, dword ptr [g_01320184] }
	__asm { test eax, eax }
	__asm { je L_00523da1 }
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
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 2 }
	__asm { push 0x102abf8 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { L_00523da1: }
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10fb8[];
extern "C" char g_0131eb88[];
extern "C" char g_0131eba0[];
extern "C" char g_01320164[];
extern "C" char g_01320184[];
extern "C" void fn_004a4c90();
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00523dc0
extern "C" __declspec(naked) void asm_00523dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd8ce6c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_00523e0f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [esp + 0xc], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0xc], 0xffffffff }
	__asm { L_00523e0f: }
	__asm { cmp dword ptr [g_0131eba0], 0 }
	__asm { je L_00523e89 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_00523e4b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [esp + 0xc], 1 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0xc], 0xffffffff }
	__asm { L_00523e4b: }
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
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 2 }
	__asm { push 0x102abe8 }
	__asm { push dword ptr [g_01320184] }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { L_00523e89: }
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_01320164[];
extern "C" void fn_004038a0();
extern "C" void fn_0057e360();
extern "C" void fn_00583f40();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00523ea0
extern "C" __declspec(naked) void asm_00523ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c4ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0x10 }
	__asm { push 0x102ac18 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00523ef9 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_00523efb }
	__asm { L_00523ef9: }
	__asm { xor eax, eax }
	__asm { L_00523efb: }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00523f1d }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00523f1d: }
	__asm { mov dword ptr [esi], 0x102bf10 }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov edi, dword ptr [edi + 0xba0] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { test edi, edi }
	__asm { je L_00523f78 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_00523f6d }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { L_00523f6d: }
	__asm { call fn_00583f40 }
	__asm { mov byte ptr [edi + 0x1d9], al }
	__asm { L_00523f78: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_01320164[];
extern "C" void fn_004038a0();
extern "C" void fn_0057e360();
extern "C" void fn_005840d0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00524040
extern "C" __declspec(naked) void asm_00524040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c4ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0xc }
	__asm { push 0x102ac08 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00524099 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_0052409b }
	__asm { L_00524099: }
	__asm { xor eax, eax }
	__asm { L_0052409b: }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_005240bd }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005240bd: }
	__asm { mov dword ptr [esi], 0x102bef0 }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov edi, dword ptr [edi + 0xba0] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { test edi, edi }
	__asm { je L_00524118 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_0052410d }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { L_0052410d: }
	__asm { call fn_005840d0 }
	__asm { mov byte ptr [edi + 0x1d8], al }
	__asm { L_00524118: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10fe8[];
extern "C" char g_00e10fec[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11000[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_011edc10[];
extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
// FUNCTION: ROBLOXSTUDIO 0x00524210
extern "C" __declspec(naked) void asm_00524210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c533 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x18 }
	__asm { push 0x102ac44 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x40], 0xf }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov byte ptr [ebp - 0x54], 0 }
	__asm { call fn_004038a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00524267 }
	__asm { add eax, 0x88 }
	__asm { jmp L_00524269 }
	__asm { L_00524267: }
	__asm { xor eax, eax }
	__asm { L_00524269: }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_009609c0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp dword ptr [ebp - 0x40], 0x10 }
	__asm { jb L_0052428b }
	__asm { push dword ptr [ebp - 0x54] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0052428b: }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x40], 0xf }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov byte ptr [ebp - 0x54], 0 }
	__asm { mov dword ptr [edi], 0x102beb0 }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { mov dword ptr [ebp - 0x1c], 0x1029570 }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e11000] }
	__asm { push 0x102a064 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e10fe8] }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call dword ptr [g_00e10fec] }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [g_011edc10], al }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" char g_00e105bc[];
extern "C" char g_011edc11[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e357d[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x005247e0
extern "C" __declspec(naked) void asm_005247e0()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00524834 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00524834 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00524823 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00524834 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00524823: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00524834: }
	__asm { mov esi, dword ptr [esi + 0x1b8] }
	__asm { test esi, esi }
	__asm { jne L_00524842 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00524842: }
	__asm { push esi }
	__asm { call dword ptr [g_00e105bc] }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12d1fc0 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00524863 }
	__asm { mov al, byte ptr [g_011edc11] }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00524863: }
	__asm { push esi }
	__asm { call dword ptr [g_00e105bc] }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12d1fa0 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { neg al }
	__asm { sbb al, al }
	__asm { and al, byte ptr [g_012e357d] }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10a00[];
extern "C" char g_00e10dcc[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11654[];
extern "C" char g_00e11658[];
extern "C" char g_00e1165c[];
extern "C" char g_00e11c20[];
extern "C" char g_00e11de4[];
extern "C" char g_00e12b48[];
// FUNCTION: ROBLOXSTUDIO 0x00524cb0
extern "C" __declspec(naked) void asm_00524cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8cbbe }
	__asm { push eax }
	__asm { add ecx, 0x1c }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { sub esp, 0x20 }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { je L_00524d7f }
	__asm { push 0 }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call dword ptr [g_00e11c20] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11658] }
	__asm { test al, al }
	__asm { jne L_00524d6f }
	__asm { call dword ptr [g_00e12b48] }
	__asm { test eax, eax }
	__asm { je L_00524d6f }
	__asm { push esi }
	__asm { push 8 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00524d2d }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10dcc] }
	__asm { mov dword ptr [esi], 0x100e2ac }
	__asm { jmp L_00524d2f }
	__asm { L_00524d2d: }
	__asm { xor esi, esi }
	__asm { L_00524d2f: }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1165c] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10a00] }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { push 0 }
	__asm { push esi }
	__asm { call dword ptr [g_00e12b48] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11654] }
	__asm { pop esi }
	__asm { L_00524d6f: }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11de4] }
	__asm { L_00524d7f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_01318fba[];
extern "C" char g_01320164[];
extern "C" void fn_0057e360();
extern "C" void fn_005812a0();
extern "C" void fn_006bc920();
extern "C" void fn_006bc950();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00525640
extern "C" __declspec(naked) void asm_00525640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x1318fb4 }
	__asm { jne L_0052567b }
	__asm { call fn_006bc950 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0052567b: }
	__asm { call fn_006bc920 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { add esp, 4 }
	__asm { test al, 1 }
	__asm { jne L_005256b4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_005256b4: }
	__asm { cmp byte ptr [g_01318fba], 0 }
	__asm { je L_005256d7 }
	__asm { mov ecx, 0x1320168 }
	__asm { call fn_005812a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005256d7: }
	__asm { push 0x1035b00 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push 0x1320168 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e110bc[];
extern "C" char g_00e11100[];
extern "C" char g_00e11110[];
extern "C" void fn_00517390();
extern "C" void fn_008560b0();
// FUNCTION: ROBLOXSTUDIO 0x00525710
extern "C" __declspec(naked) void asm_00525710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8d73b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x14] }
	__asm { push eax }
	__asm { call fn_008560b0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [g_00e110bc] }
	__asm { add esp, 8 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { jb L_00525778 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00525778: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { jne L_005257bb }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_00517390 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11100] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_005257bb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e1110c[];
extern "C" char g_00e131b0[];
extern "C" void fn_00574fa0();
extern "C" void fn_006bc9a0();
extern "C" void fn_006bca40();
extern "C" void fn_006bca60();
extern "C" void fn_00960a40();
// FUNCTION: ROBLOXSTUDIO 0x00525ba0
extern "C" __declspec(naked) void asm_00525ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c724 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebx], 0x102bd34 }
	__asm { mov dword ptr [ebx + 8], 0x102bd64 }
	__asm { mov dword ptr [ebp - 4], 7 }
	__asm { lea ecx, [ebx + 0x40] }
	__asm { mov byte ptr [ebx + 0x4c], 1 }
	__asm { call fn_006bca40 }
	__asm { lea ecx, [ebx + 0x48] }
	__asm { call fn_006bca60 }
	__asm { lea ecx, [ebx + 0x48] }
	__asm { call fn_006bc9a0 }
	__asm { lea ecx, [ebx + 0x44] }
	__asm { call fn_006bc9a0 }
	__asm { lea ecx, [ebx + 0x40] }
	__asm { call fn_006bc9a0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov eax, dword ptr [ebx + 0x20] }
	__asm { test eax, eax }
	__asm { je L_00525c2e }
	__asm { test al, 1 }
	__asm { jne L_00525c27 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [ebx + 0x28] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00525c27 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00525c27: }
	__asm { mov dword ptr [ebx + 0x20], 0 }
	__asm { L_00525c2e: }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov esi, dword ptr [ebx + 0x18] }
	__asm { mov edi, dword ptr [g_00e10508] }
	__asm { test esi, esi }
	__asm { je L_00525c4d }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e131b0] }
	__asm { push esi }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_00525c4d: }
	__asm { mov esi, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { test esi, esi }
	__asm { je L_00525c91 }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { mov eax, dword ptr [esi + 0x10c] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test eax, eax }
	__asm { je L_00525c77 }
	__asm { mov ecx, eax }
	__asm { call fn_00574fa0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_00525c77: }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [esi + 0x108] }
	__asm { test ecx, ecx }
	__asm { je L_00525c8b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00525c8b: }
	__asm { push esi }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_00525c91: }
	__asm { lea ecx, [ebx + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00960a40 }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e1110c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00403540();
extern "C" void fn_0047ec70();
extern "C" void fn_0049a3f0();
extern "C" void fn_0052d5c0();
extern "C" void fn_005751d0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00525cf0
extern "C" __declspec(naked) void asm_00525cf0()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov ecx, dword ptr [eax + 0x108] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { jmp eax }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00525d1a }
	__asm { call fn_0052d5c0 }
	__asm { mov edi, eax }
	__asm { jmp L_00525d1c }
	__asm { L_00525d1a: }
	__asm { xor edi, edi }
	__asm { L_00525d1c: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00525d61 }
	__asm { test edi, edi }
	__asm { jne L_00525d61 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00525d50 }
	__asm { push 0xa37 }
	__asm { push 0x102a648 }
	__asm { push 0x102afb0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00525d61 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00525d50: }
	__asm { movzx eax, al }
	__asm { push 0x102b030 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00525d61: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push edi }
	__asm { call fn_005751d0 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [eax + 0x108] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x1c] }
	__asm { cmp eax, 0x12c0888 }
	__asm { je L_00525d8e }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, 0x12c0888 }
	__asm { call fn_00403540 }
	__asm { L_00525d8e: }
	__asm { push 1 }
	__asm { call fn_0047ec70 }
	__asm { lea ecx, [eax + 0x88] }
	__asm { call fn_0049a3f0 }
	__asm { pop edi }
	__asm { mov byte ptr [esi + 0x4d], 0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_01318fba[];
extern "C" char g_01320164[];
extern "C" void fn_00424480();
extern "C" void fn_0047ec70();
extern "C" void fn_0049a3f0();
extern "C" void fn_00575490();
extern "C" void fn_0057e360();
extern "C" void fn_005812a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00525db0
extern "C" __declspec(naked) void asm_00525db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { call fn_00575490 }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_00525dff }
	__asm { call fn_00424480 }
	__asm { cmp dword ptr [eax + 0x84], 0 }
	__asm { je L_00525dff }
	__asm { push 0x102afd0 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push esi }
	__asm { jmp L_00525e5f }
	__asm { L_00525dff: }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { mov byte ptr [esi + 0x4d], 0 }
	__asm { test al, 1 }
	__asm { jne L_00525e36 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x14], 0xffffffff }
	__asm { L_00525e36: }
	__asm { cmp byte ptr [g_01318fba], 0 }
	__asm { je L_00525e4b }
	__asm { mov ecx, 0x1320168 }
	__asm { call fn_005812a0 }
	__asm { jmp L_00525e6a }
	__asm { L_00525e4b: }
	__asm { push 0x1035b00 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push 0x1320168 }
	__asm { L_00525e5f: }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { add esp, 0xc }
	__asm { L_00525e6a: }
	__asm { push 0 }
	__asm { call fn_0047ec70 }
	__asm { lea ecx, [eax + 0x88] }
	__asm { call fn_0049a3f0 }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" void fn_00464960();
extern "C" void fn_0052bab0();
extern "C" void fn_0052bb70();
extern "C" void fn_006bca40();
extern "C" void fn_006bca60();
// FUNCTION: ROBLOXSTUDIO 0x00525e90
extern "C" __declspec(naked) void asm_00525e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x45], 0 }
	__asm { jne L_00525f5e }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov byte ptr [esi + 0x45], 1 }
	__asm { mov ecx, dword ptr [eax + 0x108] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00525eec }
	__asm { sub esp, 0x10 }
	__asm { mov eax, esp }
	__asm { lea edx, [esi - 8] }
	__asm { mov dword ptr [eax], 0x525db0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov byte ptr [esp + 0x1c], 1 }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_0052bab0 }
	__asm { jmp L_00525f4e }
	__asm { L_00525eec: }
	__asm { call fn_00464960 }
	__asm { cmp dword ptr [eax + 0x6c], 1 }
	__asm { je L_00525f27 }
	__asm { call fn_00464960 }
	__asm { cmp dword ptr [eax + 0x6c], 3 }
	__asm { je L_00525f27 }
	__asm { push 0x102b110 }
	__asm { add esi, -8 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00525f27: }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { lea eax, [esi - 8] }
	__asm { mov dword ptr [ecx], 0x525d00 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_0052bb70 }
	__asm { L_00525f4e: }
	__asm { lea ecx, [esi + 0x38] }
	__asm { call fn_006bca40 }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { call fn_006bca60 }
	__asm { L_00525f5e: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e128ec[];
extern "C" char g_00e12b04[];
extern "C" char g_00e12b08[];
extern "C" char g_00e12b0c[];
extern "C" char g_00e12b10[];
extern "C" char g_01318fba[];
extern "C" char g_01320164[];
extern "C" void fn_00479a60();
extern "C" void fn_0057e360();
extern "C" void fn_005812a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00525f70
extern "C" __declspec(naked) void asm_00525f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8dd5f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_00479a60 }
	__asm { push 0x102b098 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e12b04] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [eax], 0x400 }
	__asm { call dword ptr [g_00e12b08] }
	__asm { push 0x400 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call dword ptr [g_00e12b0c] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call dword ptr [g_00e128ec] }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { mov byte ptr [esi + 0x4d], 0 }
	__asm { test al, 1 }
	__asm { jne L_00526022 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_00526022: }
	__asm { cmp byte ptr [g_01318fba], 0 }
	__asm { je L_00526037 }
	__asm { mov ecx, 0x1320168 }
	__asm { call fn_005812a0 }
	__asm { jmp L_00526053 }
	__asm { L_00526037: }
	__asm { push 0x1035b00 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { push eax }
	__asm { push 0x1320168 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { add esp, 0x10 }
	__asm { L_00526053: }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12b10] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11104[];
extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
// FUNCTION: ROBLOXSTUDIO 0x005262d0
extern "C" __declspec(naked) void asm_005262d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c191 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call dword ptr [g_00e11104] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x13 }
	__asm { push 0x102b178 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00526336 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_00526338 }
	__asm { L_00526336: }
	__asm { xor eax, eax }
	__asm { L_00526338: }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00526357 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00526357: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x102bd04 }
	__asm { mov dword ptr [esi + 8], 0x102bcb4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11104[];
extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
// FUNCTION: ROBLOXSTUDIO 0x00526420
extern "C" __declspec(naked) void asm_00526420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c191 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call dword ptr [g_00e11104] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0xf }
	__asm { push 0x102b23c }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00526486 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_00526488 }
	__asm { L_00526486: }
	__asm { xor eax, eax }
	__asm { L_00526488: }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_005264a7 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005264a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x102bcd4 }
	__asm { mov dword ptr [esi + 8], 0x102bc74 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10f60[];
extern "C" void fn_004038a0();
extern "C" void fn_004226b0();
extern "C" void fn_0052bc30();
extern "C" void fn_009609c0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x005265d0
extern "C" __declspec(naked) void asm_005265d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c2bc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x13 }
	__asm { push 0x1011d9c }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { jb L_0052663d }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0052663d: }
	__asm { push 0 }
	__asm { push 0x12d2058 }
	__asm { push 0x12d2038 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [esi], 0x102bc94 }
	__asm { mov byte ptr [esi + 0xc], 0 }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { call dword ptr [g_00e10f60] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { add ecx, 0xd10 }
	__asm { mov dword ptr [ebp - 0x18], 0x526730 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_0052bc30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_005266bd }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_005266bd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e11098[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_01320164[];
extern "C" char g_01320190[];
extern "C" void fn_0057e360();
extern "C" void fn_005839f0();
extern "C" void fn_005849e0();
extern "C" void fn_00960a40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x005270b0
extern "C" __declspec(naked) void asm_005270b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c67f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [edi], 0x102bc54 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_0052710b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_0052710b: }
	__asm { push 0x1019794 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov esi, dword ptr [g_01320190] }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { cmp dword ptr [esi + 0x3c], 0 }
	__asm { je L_0052715b }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, 0x1320190 }
	__asm { call fn_005849e0 }
	__asm { mov edx, eax }
	__asm { cmp edx, esi }
	__asm { je L_0052715b }
	__asm { mov eax, dword ptr [edx - 8] }
	__asm { mov ecx, dword ptr [edx - 0xc] }
	__asm { mov ebx, dword ptr [edx - 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [edx - 4] }
	__asm { mov dword ptr [ebp - 0x24], ecx }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { jmp L_0052715e }
	__asm { L_0052715b: }
	__asm { mov ebx, dword ptr [ebp - 0x28] }
	__asm { L_0052715e: }
	__asm { mov esi, dword ptr [g_00e110a8] }
	__asm { push 0x102b518 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1320168 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_005839f0 }
	__asm { push eax }
	__asm { push 0x102b5e8 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { call dword ptr [g_00e11098] }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00960a40 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12194[];
extern "C" char g_01320164[];
extern "C" char g_01320190[];
extern "C" void fn_0057e360();
extern "C" void fn_005849e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x005271c0
extern "C" __declspec(naked) void asm_005271c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8acbc }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_01320164] }
	__asm { push esi }
	__asm { test bl, 1 }
	__asm { jne L_00527217 }
	__asm { or ebx, 1 }
	__asm { mov dword ptr [g_01320164], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ebx, dword ptr [g_01320164] }
	__asm { add esp, 4 }
	__asm { L_00527217: }
	__asm { mov esi, dword ptr [g_01320190] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x3c], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { je L_00527256 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x1320190 }
	__asm { call fn_005849e0 }
	__asm { mov edx, eax }
	__asm { cmp edx, esi }
	__asm { je L_00527256 }
	__asm { mov eax, dword ptr [edx - 8] }
	__asm { mov ecx, dword ptr [edx - 0xc] }
	__asm { mov edi, dword ptr [edx - 0x10] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edx - 4] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { jmp L_00527259 }
	__asm { L_00527256: }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { L_00527259: }
	__asm { test edi, edi }
	__asm { pop edi }
	__asm { je L_005272d5 }
	__asm { test bl, 1 }
	__asm { jne L_00527292 }
	__asm { or ebx, 1 }
	__asm { mov dword ptr [g_01320164], ebx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [g_01320190] }
	__asm { add esp, 4 }
	__asm { L_00527292: }
	__asm { cmp dword ptr [esi + 0x3c], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { je L_005272ca }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x1320190 }
	__asm { call fn_005849e0 }
	__asm { mov edx, eax }
	__asm { cmp edx, esi }
	__asm { je L_005272ca }
	__asm { mov eax, dword ptr [edx - 8] }
	__asm { mov ecx, dword ptr [edx - 0xc] }
	__asm { mov esi, dword ptr [edx - 0x10] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edx - 4] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { jmp L_005272cd }
	__asm { L_005272ca: }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { L_005272cd: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12194] }
	__asm { L_005272d5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12c8c[];
extern "C" char g_01320164[];
extern "C" char g_01320194[];
extern "C" void fn_0044cb30();
extern "C" void fn_0044cc00();
extern "C" void fn_0044cc90();
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x005272f0
extern "C" __declspec(naked) void asm_005272f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { sub esp, 0x38 }
	__asm { test al, 1 }
	__asm { jne L_0052733c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0052733c: }
	__asm { mov eax, dword ptr [g_01320194] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { je L_00527358 }
	__asm { mov ecx, 0x1320194 }
	__asm { call fn_0044cb30 }
	__asm { L_00527358: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov ecx, 0x1320194 }
	__asm { call fn_0044cc00 }
	__asm { mov ecx, dword ptr [g_01320194] }
	__asm { cmp eax, ecx }
	__asm { jne L_0052738d }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_0044cc90 }
	__asm { L_0052738d: }
	__asm { mov ecx, dword ptr [eax - 4] }
	__asm { call dword ptr [g_00e12c8c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00527bd0();
extern "C" void fn_00828a60();
// FUNCTION: ROBLOXSTUDIO 0x00527990
extern "C" __declspec(naked) void asm_00527990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c4a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xf }
	__asm { push 0x102b694 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_00828a60 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov dword ptr [esi], 0xed59b8 }
	__asm { jb L_00527a1e }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00527a1e: }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0x102bbf4 }
	__asm { call fn_00527bd0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11098[];
extern "C" char g_00e110a8[];
extern "C" char g_00e1110c[];
extern "C" char g_01320164[];
extern "C" char g_01320194[];
extern "C" void fn_0044cb30();
extern "C" void fn_0044cc00();
extern "C" void fn_0044cc90();
extern "C" void fn_0057e360();
extern "C" void fn_00960a40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00527fa0
extern "C" __declspec(naked) void asm_00527fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c6b2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { mov dword ptr [ebx], 0x102bba0 }
	__asm { mov dword ptr [ebx + 8], 0x102bbd4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_00528002 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00528002: }
	__asm { mov eax, dword ptr [g_01320194] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { je L_0052801e }
	__asm { mov ecx, 0x1320194 }
	__asm { call fn_0044cb30 }
	__asm { L_0052801e: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov ecx, 0x1320194 }
	__asm { call fn_0044cc00 }
	__asm { mov ecx, dword ptr [g_01320194] }
	__asm { cmp eax, ecx }
	__asm { jne L_00528053 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_0044cc90 }
	__asm { L_00528053: }
	__asm { mov esi, dword ptr [g_00e110a8] }
	__asm { mov edi, dword ptr [eax - 4] }
	__asm { push 0x102b738 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push 0x102b838 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { call dword ptr [g_00e11098] }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebx + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00960a40 }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e1110c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f34[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11410[];
extern "C" char g_00e11664[];
extern "C" char g_00e11670[];
extern "C" char g_00e119e0[];
extern "C" char g_00e125b4[];
extern "C" char g_00e129b8[];
extern "C" char g_01320164[];
extern "C" char g_01320184[];
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00528da0
extern "C" __declspec(naked) void asm_00528da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8e437 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push 0x1019854 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_00528dfb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_00528dfb: }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [g_00e129b8] }
	__asm { mov esi, dword ptr [g_00e10f34] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [g_01320184] }
	__asm { call esi }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { push 0x1019854 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov ecx, dword ptr [g_01320164] }
	__asm { test cl, 1 }
	__asm { jne L_00528e6d }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [g_01320164], ecx }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { L_00528e6d: }
	__asm { push dword ptr [g_00e11410] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push dword ptr [g_01320184] }
	__asm { call esi }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { test ebx, ebx }
	__asm { je L_00528edc }
	__asm { test esi, esi }
	__asm { je L_00528edc }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11670] }
	__asm { test eax, eax }
	__asm { je L_00528edc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11670] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e119e0] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e11664] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e125b4] }
	__asm { L_00528edc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
