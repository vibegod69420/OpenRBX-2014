// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_0128d3b4[];
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
extern "C" void fn_00a41d20();
// FUNCTION: ROBLOXSTUDIO 0x00a42ae0
extern "C" __declspec(naked) void asm_00a42ae0()
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
	__asm { je L_00a42b4e }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a42b4e }
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
	__asm { je L_00a42b46 }
	__asm { call fn_00a35d10 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { push ebx }
	__asm { call fn_00a41d20 }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a42b46: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a42b4e: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10520[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a441a0
extern "C" __declspec(naked) void asm_00a441a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { je L_00a44200 }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { call dword ptr [g_00e10520] }
	__asm { movzx ecx, al }
	__asm { xor eax, eax }
	__asm { cmp esi, edi }
	__asm { setne al }
	__asm { cmp ecx, eax }
	__asm { je L_00a44200 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a441eb }
	__asm { push 0x30 }
	__asm { push 0xe51be8 }
	__asm { push 0xea7bb8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a44200 }
	__asm { L_00a441eb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea7be0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a44200: }
	__asm { xor eax, eax }
	__asm { cmp esi, edi }
	__asm { pop edi }
	__asm { setne al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a35150();
extern "C" void fn_00a35df0();
extern "C" void fn_00a360d0();
// FUNCTION: ROBLOXSTUDIO 0x00a451e0
extern "C" __declspec(naked) void asm_00a451e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { add esi, dword ptr [edi + 0x48] }
	__asm { call fn_00a35150 }
	__asm { add esp, 4 }
	__asm { cmp esi, eax }
	__asm { jle L_00a45204 }
	__asm { L_00a451fc: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a45204: }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { call fn_00a360d0 }
	__asm { add esp, 8 }
	__asm { dec eax }
	__asm { jne L_00a451fc }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { call fn_00a35df0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { setne cl }
	__asm { pop edi }
	__asm { mov byte ptr [eax], cl }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a35150();
extern "C" void fn_00a35fd0();
extern "C" void fn_00a360d0();
// FUNCTION: ROBLOXSTUDIO 0x00a45240
extern "C" __declspec(naked) void asm_00a45240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { add esi, dword ptr [edi + 0x48] }
	__asm { call fn_00a35150 }
	__asm { add esp, 4 }
	__asm { cmp esi, eax }
	__asm { jle L_00a45264 }
	__asm { L_00a4525c: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a45264: }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { call fn_00a360d0 }
	__asm { add esp, 8 }
	__asm { cmp eax, 3 }
	__asm { jne L_00a4525c }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { call fn_00a35fd0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add esp, 8 }
	__asm { fstp qword ptr [eax] }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004038a0();
extern "C" void fn_00a35150();
extern "C" void fn_00a35e70();
extern "C" void fn_00a360d0();
// FUNCTION: ROBLOXSTUDIO 0x00a454c0
extern "C" __declspec(naked) void asm_00a454c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { add esi, dword ptr [edi + 0x48] }
	__asm { call fn_00a35150 }
	__asm { add esp, 4 }
	__asm { cmp esi, eax }
	__asm { jle L_00a454e4 }
	__asm { L_00a454dc: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a454e4: }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { call fn_00a360d0 }
	__asm { add esp, 8 }
	__asm { cmp eax, 4 }
	__asm { jne L_00a454dc }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { call fn_00a35e70 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0xc }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004038a0 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a45db0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a45cb0
extern "C" __declspec(naked) void asm_00a45cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47af0 }
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
	__asm { je L_00a45d08 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xea8044 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a45d0a }
	__asm { L_00a45d08: }
	__asm { xor eax, eax }
	__asm { L_00a45d0a: }
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
	__asm { call fn_00a45db0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_01307a20[];
extern "C" void fn_00407e90();
extern "C" void fn_00b49920();
// FUNCTION: ROBLOXSTUDIO 0x00a48e10
extern "C" __declspec(naked) void asm_00a48e10()
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
	__asm { call fn_00b49920 }
	__asm { cmp byte ptr [g_01307a20], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00a48e7b }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 0xc], 0x1307a1c }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 0xc], 0xa50b70 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_01307a20], 1 }
	__asm { L_00a48e7b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xea8684 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01307a28[];
extern "C" void fn_00407e90();
extern "C" void fn_00b49920();
// FUNCTION: ROBLOXSTUDIO 0x00a48ea0
extern "C" __declspec(naked) void asm_00a48ea0()
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
	__asm { call fn_00b49920 }
	__asm { cmp byte ptr [g_01307a28], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00a48f0b }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 0xc], 0x1307a24 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 0xc], 0xa50bd0 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_01307a28], 1 }
	__asm { L_00a48f0b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xea8734 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01307b10[];
extern "C" void fn_00407e90();
// FUNCTION: ROBLOXSTUDIO 0x00a490b0
extern "C" __declspec(naked) void asm_00a490b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47ce8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ax, word ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov word ptr [esi], ax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { cmp byte ptr [g_01307b10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00a49131 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 8], 0x1307b0c }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 8], 0xa50c30 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_01307b10], 1 }
	__asm { L_00a49131: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b49af0();
// FUNCTION: ROBLOXSTUDIO 0x00a495a0
extern "C" __declspec(naked) void asm_00a495a0()
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
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xea8684 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00a49613 }
	__asm { cmp dword ptr [esi + 0x2c], 0 }
	__asm { je L_00a49613 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a49602 }
	__asm { push 0x93 }
	__asm { push 0xea85d0 }
	__asm { push 0xea86b4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a49613 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a49602: }
	__asm { movzx eax, al }
	__asm { push 0xea86c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a49613: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b49af0 }
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
extern "C" void fn_00b49af0();
// FUNCTION: ROBLOXSTUDIO 0x00a49630
extern "C" __declspec(naked) void asm_00a49630()
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
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xea8734 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00a496a3 }
	__asm { cmp dword ptr [esi + 0x2c], 0 }
	__asm { je L_00a496a3 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a49692 }
	__asm { push 0xba }
	__asm { push 0xea85d0 }
	__asm { push 0xea8764 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a496a3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a49692: }
	__asm { movzx eax, al }
	__asm { push 0xea8778 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a496a3: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b49af0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fbcf0[];
extern "C" void fn_006b8aae();
extern "C" void fn_0099ce30();
extern "C" void fn_00a09230();
extern "C" void fn_00a4f140();
extern "C" void fn_00a50000();
// FUNCTION: ROBLOXSTUDIO 0x00a500b0
extern "C" __declspec(naked) void asm_00a500b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov ecx, edi }
	__asm { call fn_0099ce30 }
	__asm { cmp eax, 0xa }
	__asm { jne L_00a50111 }
	__asm { push ebx }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { mov bl, byte ptr [g_012fbcf0] }
	__asm { test bl, bl }
	__asm { je L_00a500f0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00a4f140 }
	__asm { push eax }
	__asm { push esi }
	__asm { movzx eax, bl }
	__asm { push 0xea8e40 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00a500f0: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [eax + 0x108] }
	__asm { test ecx, ecx }
	__asm { je L_00a50103 }
	__asm { add ecx, -0x70 }
	__asm { jmp L_00a50105 }
	__asm { L_00a50103: }
	__asm { xor ecx, ecx }
	__asm { L_00a50105: }
	__asm { push esi }
	__asm { add ecx, 0x140 }
	__asm { call fn_00a09230 }
	__asm { L_00a50111: }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00a50000 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fbcf0[];
extern "C" void fn_006b8aae();
extern "C" void fn_0099ce30();
extern "C" void fn_00a09320();
extern "C" void fn_00a4f140();
extern "C" void fn_00a50980();
// FUNCTION: ROBLOXSTUDIO 0x00a504d0
extern "C" __declspec(naked) void asm_00a504d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_0099ce30 }
	__asm { cmp eax, 0xa }
	__asm { jne L_00a50532 }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012fbcf0] }
	__asm { test bl, bl }
	__asm { je L_00a5050a }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00a4f140 }
	__asm { push eax }
	__asm { push esi }
	__asm { movzx eax, bl }
	__asm { push 0xea8e68 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00a5050a: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { pop ebx }
	__asm { mov eax, dword ptr [eax + 0x108] }
	__asm { test eax, eax }
	__asm { je L_00a5051d }
	__asm { lea ecx, [eax - 0x70] }
	__asm { jmp L_00a5051f }
	__asm { L_00a5051d: }
	__asm { xor ecx, ecx }
	__asm { L_00a5051f: }
	__asm { push esi }
	__asm { add ecx, 0x140 }
	__asm { call fn_00a09320 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { L_00a50532: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { call fn_00a50980 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a50e20
extern "C" __declspec(naked) void asm_00a50e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00a50e6e }
	__asm { cmp word ptr [esi], -1 }
	__asm { jge L_00a50e6e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a50e5d }
	__asm { push 0x2b }
	__asm { push 0xe9c4c0 }
	__asm { push 0xe3f7f0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a50e6e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a50e5d: }
	__asm { movzx eax, al }
	__asm { push 0xea8560 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a50e6e: }
	__asm { movsx eax, word ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { add eax, 4 }
	__asm { lea eax, [eax + eax*2] }
	__asm { mov eax, dword ptr [edi + eax*4] }
	__asm { cmp dword ptr [eax + ecx*8], esi }
	__asm { lea eax, [eax + ecx*8] }
	__asm { je L_00a50e8e }
	__asm { L_00a50e85: }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, 0x18 }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_00a50e85 }
	__asm { L_00a50e8e: }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a51100
extern "C" __declspec(naked) void asm_00a51100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { test edi, edi }
	__asm { jne L_00a51119 }
	__asm { mov eax, 0x12f8550 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a51119: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { mov si, word ptr [ecx] }
	__asm { and ax, 0xf }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { and ax, 0x1f }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [ebp - 6] }
	__asm { shl eax, 5 }
	__asm { movsx ecx, ax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { add eax, ecx }
	__asm { shl edx, 0xa }
	__asm { movsx ecx, dx }
	__asm { and si, 0x1f }
	__asm { add eax, ecx }
	__asm { movsx ecx, si }
	__asm { pop esi }
	__asm { add eax, ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004226b0();
extern "C" void fn_006b9e50();
// FUNCTION: ROBLOXSTUDIO 0x00a51560
extern "C" __declspec(naked) void asm_00a51560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd480bb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xeaa350 }
	__asm { lea esi, [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a515b6 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00a515b6: }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00a515e5 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00a515e5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a53bd0
extern "C" __declspec(naked) void asm_00a53bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd482a0 }
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
	__asm { je L_00a53c28 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeaaad0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a53c2a }
	__asm { L_00a53c28: }
	__asm { xor eax, eax }
	__asm { L_00a53c2a: }
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
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a53fc0
extern "C" __declspec(naked) void asm_00a53fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd48350 }
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
	__asm { je L_00a54018 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeaab80 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a5401a }
	__asm { L_00a54018: }
	__asm { xor eax, eax }
	__asm { L_00a5401a: }
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
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
extern "C" void fn_00a54410();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a54520
extern "C" __declspec(naked) void asm_00a54520()
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
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_00a54410 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov dword ptr [edi], 0xeaadcc }
	__asm { mov dword ptr [edi + 4], 0xeaae54 }
	__asm { mov dword ptr [edi + 0x18], 0xeaae5c }
	__asm { mov dword ptr [edi + 0x1c], 0xeaae68 }
	__asm { jb L_00a545a2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a545a2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_01307b84[];
extern "C" char g_01307b88[];
extern "C" char g_01307b8c[];
extern "C" char g_01307b90[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00a546b0
extern "C" __declspec(naked) void asm_00a546b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4859e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01307b88] }
	__asm { test al, 1 }
	__asm { jne L_00a546f2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01307b88], eax }
	__asm { push 0xeaaba0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01307b84], eax }
	__asm { L_00a546f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd485be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01307b90] }
	__asm { test al, 1 }
	__asm { jne L_00a54742 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01307b90], eax }
	__asm { push 0xeaaba4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01307b8c], eax }
	__asm { L_00a54742: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3f14[];
extern "C" char g_012e4b40[];
extern "C" void fn_0041eb40();
extern "C" void fn_007c87f0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a54790
extern "C" __declspec(naked) void asm_00a54790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd483f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007c87f0 }
	__asm { mov dword ptr [esi], 0xeaabbc }
	__asm { mov dword ptr [esi + 4], 0xeaac44 }
	__asm { mov dword ptr [esi + 0x18], 0xeaac4c }
	__asm { mov dword ptr [esi + 0x1c], 0xeaac58 }
	__asm { mov eax, dword ptr [g_012e3f14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a54827 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3f14], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeaab94 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_0041eb40 }
	__asm { push eax }
	__asm { mov ecx, 0x12e3de8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde4c20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a54827: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e3de8 }
	__asm { inc dword ptr [g_012e4b40] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01307b84[];
extern "C" char g_01307b88[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00a55340
extern "C" __declspec(naked) void asm_00a55340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4859e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xa546b0 }
	__asm { push 0x1307b74 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01307b88] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a553a2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01307b88], eax }
	__asm { push 0xeaaba0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01307b84], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a553a2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01307b84] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01307b8c[];
extern "C" char g_01307b90[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00a553c0
extern "C" __declspec(naked) void asm_00a553c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd485be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xa54700 }
	__asm { push 0x1307b7c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01307b90] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a55422 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01307b90], eax }
	__asm { push 0xeaaba4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01307b8c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a55422: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01307b8c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01307b94[];
extern "C" char g_01307bb0[];
extern "C" void fn_00a55920();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a559f0
extern "C" __declspec(naked) void asm_00a559f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4869e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01307bb0] }
	__asm { test al, 1 }
	__asm { jne L_00a55a48 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01307bb0], eax }
	__asm { push 0 }
	__asm { push 0x1032f98 }
	__asm { mov ecx, 0x1307b94 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a55920 }
	__asm { push 0xdfcf80 }
	__asm { mov dword ptr [g_01307b94], 0xeab290 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a55a48: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x1307b94 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01307bb4[];
extern "C" char g_01307bd0[];
extern "C" void fn_00a56470();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a56540
extern "C" __declspec(naked) void asm_00a56540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd486be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01307bd0] }
	__asm { test al, 1 }
	__asm { jne L_00a56598 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01307bd0], eax }
	__asm { push 0 }
	__asm { push 0x1032fa0 }
	__asm { mov ecx, 0x1307bb4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a56470 }
	__asm { push 0xdfcf90 }
	__asm { mov dword ptr [g_01307bb4], 0xeab2a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a56598: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x1307bb4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b2deb0();
// FUNCTION: ROBLOXSTUDIO 0x00a582a0
extern "C" __declspec(naked) void asm_00a582a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1f468 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { add ecx, 0x100 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b2deb0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a582f5 }
	__asm { test al, 1 }
	__asm { jne L_00a582f5 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a582f5 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a582f5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_012e4ac4[];
extern "C" char g_012e6acc[];
extern "C" void fn_0048b090();
extern "C" void fn_007cbf10();
extern "C" void fn_00928040();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a58520
extern "C" __declspec(naked) void asm_00a58520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd488f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00928040 }
	__asm { mov dword ptr [esi], 0xeab73c }
	__asm { mov dword ptr [esi + 4], 0xeab7d8 }
	__asm { mov dword ptr [esi + 0x18], 0xeab7e0 }
	__asm { mov dword ptr [esi + 0x1c], 0xeab7ec }
	__asm { mov dword ptr [esi + 0x64], 0xeab7fc }
	__asm { mov eax, dword ptr [g_012e6acc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a585be }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e6acc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003658 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, 0x12e69a0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a585be: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e69a0 }
	__asm { inc dword ptr [g_012e4ac4] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4aa4[];
extern "C" char g_012e6bfc[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a59be0
extern "C" __declspec(naked) void asm_00a59be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd48a26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xeab99c }
	__asm { mov dword ptr [esi + 4], 0xeaba14 }
	__asm { mov dword ptr [esi + 0x18], 0xeaba1c }
	__asm { mov dword ptr [esi + 0x1c], 0xeaba28 }
	__asm { mov eax, dword ptr [g_012e6bfc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a59c79 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e6bfc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeab980 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6ad0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a59c79: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e6ad0 }
	__asm { inc dword ptr [g_012e4aa4] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e6bfc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a59d70
extern "C" __declspec(naked) void asm_00a59d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2388e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e6bfc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00a59de5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e6bfc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeab980 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6ad0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a59de5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12e6ad0 }
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

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_007d5550();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a5d640
extern "C" __declspec(naked) void asm_00a5d640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd508a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007d5550 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_0048e3f0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { push edi }
	__asm { call dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00426f50 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_00a5d6cd }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a5d6cd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a5d6f0
extern "C" __declspec(naked) void asm_00a5d6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { add ecx, 0x98 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, eax }
	__asm { je L_00a5d726 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00a5d726: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00a5d737 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a5d737: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x00a5dcc0
extern "C" __declspec(naked) void asm_00a5dcc0()
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
	__asm { je L_00a5dce9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a5dcee }
	__asm { L_00a5dce9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a5dcee: }
	__asm { cmp ecx, 0x11f0f18 }
	__asm { je L_00a5dd37 }
	__asm { test eax, eax }
	__asm { je L_00a5dcfe }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a5dd03 }
	__asm { L_00a5dcfe: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a5dd03: }
	__asm { push 0x11f0f18 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00a5dd37 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00a5dd37: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5220[];
extern "C" void fn_004115f0();
extern "C" void fn_00a5e4b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a5e210
extern "C" __declspec(naked) void asm_00a5e210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd229ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x820f40 }
	__asm { push 0x12f2f70 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5220] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a5e271 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5220], eax }
	__asm { mov ecx, 0x12f5198 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a5e4b0 }
	__asm { push 0xde80e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a5e271: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f5198 }
	__asm { push 3 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00a5e298 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a5e298: }
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

extern "C" char g_012e4ad4[];
extern "C" char g_012e731c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a5e3f0
extern "C" __declspec(naked) void asm_00a5e3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49176 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xeabe54 }
	__asm { mov dword ptr [esi + 4], 0xeabecc }
	__asm { mov dword ptr [esi + 0x18], 0xeabed4 }
	__asm { mov dword ptr [esi + 0x1c], 0xeabee0 }
	__asm { mov eax, dword ptr [g_012e731c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a5e489 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e731c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe77978 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e71f0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7670 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a5e489: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e71f0 }
	__asm { inc dword ptr [g_012e4ad4] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e731c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a5e7d0
extern "C" __declspec(naked) void asm_00a5e7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4918e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e731c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00a5e845 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e731c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe77978 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e71f0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7670 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a5e845: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12e71f0 }
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
extern "C" void fn_00a5f550();
// FUNCTION: ROBLOXSTUDIO 0x00a5ec70
extern "C" __declspec(naked) void asm_00a5ec70()
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
	__asm { call fn_00a5f550 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a5ece2 }
	__asm { add esi, 5 }
	__asm { je L_00a5ecb2 }
	__asm { add esi, -5 }
	__asm { jmp L_00a5ecb4 }
	__asm { L_00a5ecb2: }
	__asm { xor esi, esi }
	__asm { L_00a5ecb4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a5ece1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a5ece1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a5ece1: }
	__asm { pop edi }
	__asm { L_00a5ece2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00a5eb80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a5eee0
extern "C" __declspec(naked) void asm_00a5eee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49268 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x68] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a5eb80 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], 0xeabe54 }
	__asm { mov dword ptr [esi + 4], 0xeabecc }
	__asm { mov dword ptr [esi + 0x18], 0xeabed4 }
	__asm { mov dword ptr [esi + 0x1c], 0xeabee0 }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a5ef46 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a5ef46: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f5220[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_00a5e4b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a5f2e0
extern "C" __declspec(naked) void asm_00a5f2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd229ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00a5f304 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00a5f304: }
	__asm { push 0x820f40 }
	__asm { push 0x12f2f70 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5220] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a5f34c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5220], eax }
	__asm { mov ecx, 0x12f5198 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a5e4b0 }
	__asm { push 0xde80e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a5f34c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12f5198 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130806c[];
extern "C" char g_01308070[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a60320
extern "C" __declspec(naked) void asm_00a60320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4930e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01308070] }
	__asm { test al, 1 }
	__asm { jne L_00a60393 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01308070], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a6037e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130806c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a6037e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130806c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a60393: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130806c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4acc[];
extern "C" char g_012e744c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a60730
extern "C" __declspec(naked) void asm_00a60730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd493a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xeac12c }
	__asm { mov dword ptr [esi + 4], 0xeac1a4 }
	__asm { mov dword ptr [esi + 0x18], 0xeac1ac }
	__asm { mov dword ptr [esi + 0x1c], 0xeac1b8 }
	__asm { mov eax, dword ptr [g_012e744c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a607c9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e744c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeac114 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7320 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7680 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a607c9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e7320 }
	__asm { inc dword ptr [g_012e4acc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e744c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a608c0
extern "C" __declspec(naked) void asm_00a608c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4937e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e744c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00a60935 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e744c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeac114 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7320 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7680 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a60935: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12e7320 }
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

extern "C" void fn_004199f0();
extern "C" void fn_00532170();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00a60d60
extern "C" __declspec(naked) void asm_00a60d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00a60db3 }
	__asm { add edi, 0x1c }
	__asm { je L_00a60d8c }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a60d8c }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_00a60dab }
	__asm { L_00a60d8c: }
	__asm { test edi, edi }
	__asm { je L_00a60db3 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00532170 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a60db3 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00a60db3 }
	__asm { L_00a60dab: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a60db3: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4e00[];
extern "C" char g_012e76ac[];
extern "C" void fn_004118e0();
extern "C" void fn_007af830();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a618e0
extern "C" __declspec(naked) void asm_00a618e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49506 }
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
	__asm { mov dword ptr [esi], 0xeac384 }
	__asm { mov dword ptr [esi + 4], 0xeac3fc }
	__asm { mov dword ptr [esi + 0x18], 0xeac404 }
	__asm { mov dword ptr [esi + 0x1c], 0xeac410 }
	__asm { mov eax, dword ptr [g_012e76ac] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a6197a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e76ac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeac364 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7580 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a6197a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e7580 }
	__asm { inc dword ptr [g_012e4e00] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00618ac0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a61a40
extern "C" __declspec(naked) void asm_00a61a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49510 }
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
	__asm { je L_00a61a98 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeac660 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a61a9a }
	__asm { L_00a61a98: }
	__asm { xor eax, eax }
	__asm { L_00a61a9a: }
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
	__asm { call fn_00618ac0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012e76ac[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a61e80
extern "C" __declspec(naked) void asm_00a61e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2398e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e76ac] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00a61ef5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e76ac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeac364 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7580 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a61ef5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12e7580 }
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

extern "C" void fn_0078a6b0();
extern "C" void fn_00a62440();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a62640
extern "C" __declspec(naked) void asm_00a62640()
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
	__asm { je L_00a62688 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_00a6268a }
	__asm { L_00a62688: }
	__asm { xor ecx, ecx }
	__asm { L_00a6268a: }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push ecx }
	__asm { call fn_00a62440 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_00a626b1 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a626b1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f64cc[];
extern "C" char g_012f64d0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00a626d0
extern "C" __declspec(naked) void asm_00a626d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2212e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x7e1a40 }
	__asm { push 0x12f627c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f64d0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a62732 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f64d0], eax }
	__asm { push 0xeac378 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f64cc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a62732: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f64cc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e77dc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a62e70
extern "C" __declspec(naked) void asm_00a62e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4961e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e77dc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00a62ee5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e77dc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeac678 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e76b0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7750 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a62ee5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12e76b0 }
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

extern "C" char g_012e4adc[];
extern "C" char g_012e7a3c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a63d70
extern "C" __declspec(naked) void asm_00a63d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49776 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xeac7b4 }
	__asm { mov dword ptr [esi + 4], 0xeac82c }
	__asm { mov dword ptr [esi + 0x18], 0xeac834 }
	__asm { mov dword ptr [esi + 0x1c], 0xeac840 }
	__asm { mov eax, dword ptr [g_012e7a3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a63e09 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e7a3c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeac7a4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7910 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7fe0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a63e09: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e7910 }
	__asm { inc dword ptr [g_012e4adc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00424610();
extern "C" void fn_004276b0();
extern "C" void fn_006b9da0();
extern "C" void fn_006b9e50();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a65680
extern "C" __declspec(naked) void asm_00a65680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x120] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9da0 }
	__asm { test al, al }
	__asm { je L_00a656dc }
	__asm { lea ecx, [esi + 0x120] }
	__asm { call fn_006b9e50 }
	__asm { lea edi, [esi + 0x70] }
	__asm { test edi, edi }
	__asm { je L_00a656b7 }
	__asm { sub esi, -0x80 }
	__asm { jmp L_00a656b9 }
	__asm { L_00a656b7: }
	__asm { xor esi, esi }
	__asm { L_00a656b9: }
	__asm { push 0xeacca4 }
	__asm { push esi }
	__asm { call fn_004276b0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call fn_00424610 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a656dc: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp + 8], 0xeacc94 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10438[];
extern "C" void fn_004276b0();
extern "C" void fn_006c54a0();
extern "C" void fn_006c5500();
// FUNCTION: ROBLOXSTUDIO 0x00a65b50
extern "C" __declspec(naked) void asm_00a65b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_006c54a0 }
	__asm { lea eax, [esi + 0x70] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a65b75 }
	__asm { lea edi, [esi + 0x80] }
	__asm { jmp L_00a65b77 }
	__asm { L_00a65b75: }
	__asm { xor edi, edi }
	__asm { L_00a65b77: }
	__asm { add esi, 0x128 }
	__asm { push esi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_006c5500 }
	__asm { fld qword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { push 0xeacad0 }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xeacad4 }
	__asm { push edi }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10438] }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4cb0[];
extern "C" char g_012e7b6c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a67620
extern "C" __declspec(naked) void asm_00a67620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49a36 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xeacd14 }
	__asm { mov dword ptr [esi + 4], 0xeacd8c }
	__asm { mov dword ptr [esi + 0x18], 0xeacd94 }
	__asm { mov dword ptr [esi + 0x1c], 0xeacda0 }
	__asm { mov eax, dword ptr [g_012e7b6c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a676b9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e7b6c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeaccf8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7a40 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a676b9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e7a40 }
	__asm { inc dword ptr [g_012e4cb0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e7b6c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a67d80
extern "C" __declspec(naked) void asm_00a67d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49a4e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e7b6c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00a67df5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e7b6c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeaccf8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7a40 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a67df5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12e7a40 }
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
extern "C" void fn_00a6a150();
// FUNCTION: ROBLOXSTUDIO 0x00a68860
extern "C" __declspec(naked) void asm_00a68860()
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
	__asm { call fn_00a6a150 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a688d2 }
	__asm { add esi, 5 }
	__asm { je L_00a688a2 }
	__asm { add esi, -5 }
	__asm { jmp L_00a688a4 }
	__asm { L_00a688a2: }
	__asm { xor esi, esi }
	__asm { L_00a688a4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a688d1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a688d1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a688d1: }
	__asm { pop edi }
	__asm { L_00a688d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00a6a4e0();
// FUNCTION: ROBLOXSTUDIO 0x00a688f0
extern "C" __declspec(naked) void asm_00a688f0()
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
	__asm { call fn_00a6a4e0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a68962 }
	__asm { add esi, 5 }
	__asm { je L_00a68932 }
	__asm { add esi, -5 }
	__asm { jmp L_00a68934 }
	__asm { L_00a68932: }
	__asm { xor esi, esi }
	__asm { L_00a68934: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a68961 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a68961 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a68961: }
	__asm { pop edi }
	__asm { L_00a68962: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00a6a870();
// FUNCTION: ROBLOXSTUDIO 0x00a68980
extern "C" __declspec(naked) void asm_00a68980()
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
	__asm { call fn_00a6a870 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a689f2 }
	__asm { add esi, 5 }
	__asm { je L_00a689c2 }
	__asm { add esi, -5 }
	__asm { jmp L_00a689c4 }
	__asm { L_00a689c2: }
	__asm { xor esi, esi }
	__asm { L_00a689c4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a689f1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a689f1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a689f1: }
	__asm { pop edi }
	__asm { L_00a689f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10528[];
extern "C" void fn_0067b220();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a69430
extern "C" __declspec(naked) void asm_00a69430()
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
	__asm { cmp eax, 0x6666666 }
	__asm { jbe L_00a69480 }
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
	__asm { L_00a69480: }
	__asm { test eax, eax }
	__asm { jne L_00a69494 }
	__asm { L_00a69484: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a69494: }
	__asm { cmp eax, 0x6666666 }
	__asm { ja L_00a694ae }
	__asm { lea eax, [eax + eax*4] }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00a69484 }
	__asm { L_00a694ae: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" void fn_00403540();
extern "C" void fn_00a68b80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a694c0
extern "C" __declspec(naked) void asm_00a694c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { lea eax, [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00a68b80 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00a69521 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a69521: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00403540();
extern "C" void fn_00a68d30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a69540
extern "C" __declspec(naked) void asm_00a69540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { lea eax, [ebp + 8] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00a68d30 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00a695a4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a695a4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00a6d500();
// FUNCTION: ROBLOXSTUDIO 0x00a69820
extern "C" __declspec(naked) void asm_00a69820()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov eax, 0x66666667 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { sub edx, dword ptr [ebx] }
	__asm { push edi }
	__asm { imul edx }
	__asm { mov edi, dword ptr [ebx + 0x10] }
	__asm { sar edx, 4 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mov eax, 0xaaaaaaab }
	__asm { mul ecx }
	__asm { shr edx, 1 }
	__asm { cmp edx, edi }
	__asm { jb L_00a69868 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0x1c] }
	__asm { mov edi, edi }
	__asm { L_00a69850: }
	__asm { shr ecx, 1 }
	__asm { cmp ecx, esi }
	__asm { jbe L_00a69865 }
	__asm { mov eax, 0xaaaaaaab }
	__asm { mul ecx }
	__asm { shr edx, 1 }
	__asm { cmp edx, edi }
	__asm { jae L_00a69850 }
	__asm { jmp L_00a69867 }
	__asm { L_00a69865: }
	__asm { mov ecx, esi }
	__asm { L_00a69867: }
	__asm { pop esi }
	__asm { L_00a69868: }
	__asm { mov eax, 0xcccccccd }
	__asm { mul ecx }
	__asm { shr edx, 2 }
	__asm { add edx, edi }
	__asm { cmp edx, ecx }
	__asm { jb L_00a6987a }
	__asm { add ecx, ecx }
	__asm { L_00a6987a: }
	__asm { cmp ecx, dword ptr [ebx + 0x18] }
	__asm { cmova ecx, dword ptr [ebx + 0x18] }
	__asm { push ecx }
	__asm { mov ecx, ebx }
	__asm { call fn_00a6d500 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00a6d500();
// FUNCTION: ROBLOXSTUDIO 0x00a69890
extern "C" __declspec(naked) void asm_00a69890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, 0x66666667 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov esi, dword ptr [edi + 0x10] }
	__asm { add esi, dword ptr [ebp + 8] }
	__asm { imul edx }
	__asm { sar edx, 4 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { cmp esi, ecx }
	__asm { jbe L_00a698ec }
	__asm { test ecx, ecx }
	__asm { mov eax, 1 }
	__asm { cmove ecx, eax }
	__asm { cmp esi, ecx }
	__asm { jbe L_00a698cb }
	__asm { L_00a698c5: }
	__asm { add ecx, ecx }
	__asm { cmp esi, ecx }
	__asm { ja L_00a698c5 }
	__asm { L_00a698cb: }
	__asm { mov eax, 0xcccccccd }
	__asm { mul ecx }
	__asm { shr edx, 2 }
	__asm { add edx, esi }
	__asm { cmp edx, ecx }
	__asm { jb L_00a698dd }
	__asm { add ecx, ecx }
	__asm { L_00a698dd: }
	__asm { cmp ecx, dword ptr [edi + 0x18] }
	__asm { cmova ecx, dword ptr [edi + 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_00a6d500 }
	__asm { L_00a698ec: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a6b410
extern "C" __declspec(naked) void asm_00a6b410()
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
	__asm { je L_00a6b467 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { lea ecx, [esi + 8] }
	__asm { call dword ptr [eax] }
	__asm { L_00a6b467: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00a6b478 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a6b478: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a6b560
extern "C" __declspec(naked) void asm_00a6b560()
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
	__asm { je L_00a6b5ba }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { lea ecx, [esi + 8] }
	__asm { call dword ptr [eax] }
	__asm { L_00a6b5ba: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00a6b5cb }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a6b5cb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a6c010
extern "C" __declspec(naked) void asm_00a6c010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49f08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { lea eax, [ebp + 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00a6c055 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a6c055: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308788[];
extern "C" char g_0130878c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a6d140
extern "C" __declspec(naked) void asm_00a6d140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a03e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130878c] }
	__asm { test al, 1 }
	__asm { jne L_00a6d1b3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130878c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a6d19e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01308788], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a6d19e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01308788], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a6d1b3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01308788] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013087a0[];
extern "C" char g_013087a4[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a6d1d0
extern "C" __declspec(naked) void asm_00a6d1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a05e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013087a4] }
	__asm { test al, 1 }
	__asm { jne L_00a6d243 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013087a4], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a6d22e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013087a0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a6d22e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013087a0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a6d243: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013087a0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013087a8[];
extern "C" char g_013087ac[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a6d260
extern "C" __declspec(naked) void asm_00a6d260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a07e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013087ac] }
	__asm { test al, 1 }
	__asm { jne L_00a6d2d3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013087ac], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a6d2be }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013087a8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a6d2be: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013087a8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a6d2d3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013087a8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013087c8[];
extern "C" char g_013087cc[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a6d2f0
extern "C" __declspec(naked) void asm_00a6d2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a09e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013087cc] }
	__asm { test al, 1 }
	__asm { jne L_00a6d363 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013087cc], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a6d34e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013087c8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a6d34e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013087c8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a6d363: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013087c8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013087d0[];
extern "C" char g_013087d4[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a6d380
extern "C" __declspec(naked) void asm_00a6d380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a0be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013087d4] }
	__asm { test al, 1 }
	__asm { jne L_00a6d3f3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013087d4], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a6d3de }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013087d0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a6d3de: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013087d0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a6d3f3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013087d0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4aa8[];
extern "C" char g_012e7dcc[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a6e100
extern "C" __declspec(naked) void asm_00a6e100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a216 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xead474 }
	__asm { mov dword ptr [esi + 4], 0xead4ec }
	__asm { mov dword ptr [esi + 0x18], 0xead4f4 }
	__asm { mov dword ptr [esi + 0x1c], 0xead500 }
	__asm { mov eax, dword ptr [g_012e7dcc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a6e199 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e7dcc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xead468 }
	__asm { mov byte ptr [ebp - 4], 1 }
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
	__asm { L_00a6e199: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e7ca0 }
	__asm { inc dword ptr [g_012e4aa8] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e7dcc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a6e590
extern "C" __declspec(naked) void asm_00a6e590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a22e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e7dcc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00a6e605 }
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
	__asm { L_00a6e605: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12e7ca0 }
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

extern "C" void fn_00402fd0();
extern "C" void fn_00403540();
extern "C" void fn_007b4f50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a6f4c0
extern "C" __declspec(naked) void asm_00a6f4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp + 8] }
	__asm { cmovae eax, dword ptr [ebp + 8] }
	__asm { lea esi, [edi + 0x6c] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, esi }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { je L_00a6f524 }
	__asm { lea eax, [ebp + 8] }
	__asm { cmp esi, eax }
	__asm { je L_00a6f518 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_00a6f518: }
	__asm { push 0x13087e0 }
	__asm { mov ecx, edi }
	__asm { call fn_007b4f50 }
	__asm { L_00a6f524: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00a6f535 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a6f535: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012e4aac[];
extern "C" char g_012e7efc[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a6f8b0
extern "C" __declspec(naked) void asm_00a6f8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a3f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xead93c }
	__asm { mov dword ptr [esi + 4], 0xead9b4 }
	__asm { mov dword ptr [esi + 0x18], 0xead9bc }
	__asm { mov dword ptr [esi + 0x1c], 0xead9c8 }
	__asm { mov eax, dword ptr [g_012e7efc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a6f949 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e7efc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xead928 }
	__asm { mov byte ptr [ebp - 4], 1 }
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
	__asm { L_00a6f949: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e7dd0 }
	__asm { inc dword ptr [g_012e4aac] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cd560();
extern "C" void fn_00810090();
extern "C" void fn_00810110();
// FUNCTION: ROBLOXSTUDIO 0x00a6fc40
extern "C" __declspec(naked) void asm_00a6fc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00a6fc93 }
	__asm { add edi, 0x1c }
	__asm { je L_00a6fc6c }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00810090 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a6fc6c }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_00a6fc8b }
	__asm { L_00a6fc6c: }
	__asm { test edi, edi }
	__asm { je L_00a6fc93 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00810110 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a6fc93 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00a6fc93 }
	__asm { L_00a6fc8b: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a6fc93: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00403540();
extern "C" void fn_007b4f50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a6fd80
extern "C" __declspec(naked) void asm_00a6fd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp + 8] }
	__asm { cmovae eax, dword ptr [ebp + 8] }
	__asm { lea esi, [edi + 0x7c] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, esi }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { je L_00a6fde4 }
	__asm { lea eax, [ebp + 8] }
	__asm { cmp esi, eax }
	__asm { je L_00a6fdd8 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_00a6fdd8: }
	__asm { push 0x130896c }
	__asm { mov ecx, edi }
	__asm { call fn_007b4f50 }
	__asm { L_00a6fde4: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00a6fdf5 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a6fdf5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012e4a94[];
extern "C" char g_012e828c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a704d0
extern "C" __declspec(naked) void asm_00a704d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a566 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xeadafc }
	__asm { mov dword ptr [esi + 4], 0xeadb74 }
	__asm { mov dword ptr [esi + 0x18], 0xeadb7c }
	__asm { mov dword ptr [esi + 0x1c], 0xeadb88 }
	__asm { mov eax, dword ptr [g_012e828c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a70569 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e828c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeadae0 }
	__asm { mov byte ptr [ebp - 4], 1 }
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
	__asm { L_00a70569: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e8160 }
	__asm { inc dword ptr [g_012e4a94] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004272a0();
extern "C" void fn_004276b0();
// FUNCTION: ROBLOXSTUDIO 0x00a728f0
extern "C" __declspec(naked) void asm_00a728f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_00a72939 }
	__asm { nop }
	__asm { L_00a72900: }
	__asm { movzx eax, byte ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { call fn_004272a0 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { add esp, 8 }
	__asm { test ecx, ecx }
	__asm { je L_00a72925 }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { call fn_004276b0 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { add esp, 8 }
	__asm { L_00a72925: }
	__asm { inc esi }
	__asm { cmp esi, edi }
	__asm { jne L_00a72900 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a72939: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_008a65d0();
// FUNCTION: ROBLOXSTUDIO 0x00a73de0
extern "C" __declspec(naked) void asm_00a73de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00a73e31 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00a73e00 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00a73e02 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00a73e02 }
	__asm { L_00a73e00: }
	__asm { mov eax, ecx }
	__asm { L_00a73e02: }
	__asm { test eax, eax }
	__asm { je L_00a73e31 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00a73e31 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00a73e31 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00a73e31 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_008a65d0 }
	__asm { L_00a73e31: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4a88[];
extern "C" char g_012e887c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a748d0
extern "C" __declspec(naked) void asm_00a748d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a7d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xeae1cc }
	__asm { mov dword ptr [esi + 4], 0xeae244 }
	__asm { mov dword ptr [esi + 0x18], 0xeae24c }
	__asm { mov dword ptr [esi + 0x1c], 0xeae258 }
	__asm { mov eax, dword ptr [g_012e887c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a74969 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e887c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeadf8c }
	__asm { mov byte ptr [ebp - 4], 1 }
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
	__asm { L_00a74969: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e8750 }
	__asm { inc dword ptr [g_012e4a88] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4a84[];
extern "C" char g_012e874c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a74990
extern "C" __declspec(naked) void asm_00a74990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a7f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xeadfac }
	__asm { mov dword ptr [esi + 4], 0xeae024 }
	__asm { mov dword ptr [esi + 0x18], 0xeae02c }
	__asm { mov dword ptr [esi + 0x1c], 0xeae038 }
	__asm { mov eax, dword ptr [g_012e874c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a74a29 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e874c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeadf9c }
	__asm { mov byte ptr [ebp - 4], 1 }
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
	__asm { L_00a74a29: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e8620 }
	__asm { inc dword ptr [g_012e4a84] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e874c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a74fd0
extern "C" __declspec(naked) void asm_00a74fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a80e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e874c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00a75045 }
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
	__asm { L_00a75045: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12e8620 }
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
extern "C" void fn_00a78180();
// FUNCTION: ROBLOXSTUDIO 0x00a76300
extern "C" __declspec(naked) void asm_00a76300()
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
	__asm { call fn_00a78180 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a76372 }
	__asm { add esi, 5 }
	__asm { je L_00a76342 }
	__asm { add esi, -5 }
	__asm { jmp L_00a76344 }
	__asm { L_00a76342: }
	__asm { xor esi, esi }
	__asm { L_00a76344: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a76371 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a76371 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a76371: }
	__asm { pop edi }
	__asm { L_00a76372: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00a78510();
// FUNCTION: ROBLOXSTUDIO 0x00a76390
extern "C" __declspec(naked) void asm_00a76390()
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
	__asm { call fn_00a78510 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a76402 }
	__asm { add esi, 5 }
	__asm { je L_00a763d2 }
	__asm { add esi, -5 }
	__asm { jmp L_00a763d4 }
	__asm { L_00a763d2: }
	__asm { xor esi, esi }
	__asm { L_00a763d4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a76401 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a76401 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a76401: }
	__asm { pop edi }
	__asm { L_00a76402: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e102d8[];
extern "C" char g_00e10318[];
extern "C" void fn_00426140();
// FUNCTION: ROBLOXSTUDIO 0x00a764e0
extern "C" __declspec(naked) void asm_00a764e0()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 0xb0] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea edi, [ebx + 0x118] }
	__asm { mov dword ptr [eax + edi - 0x68], 0xe18340 }
	__asm { mov eax, dword ptr [edi - 0x68] }
	__asm { lea ecx, [edi - 0x50] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { lea eax, [edx - 0x68] }
	__asm { mov dword ptr [edx + edi - 0x6c], eax }
	__asm { mov dword ptr [edi - 0x50], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [edi - 0x50] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [edi - 0x48] }
	__asm { call dword ptr [g_00e102d8] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102c8] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + ebx], 0xe18340 }
	__asm { mov eax, dword ptr [ebx] }
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
	__asm { pop edi }
	__asm { pop esi }
	__asm { lea ecx, [ebx + 0x68] }
	__asm { pop ebx }
	__asm { jmp dword ptr [g_00e102c8] }
}

extern "C" void fn_0043d7c0();
extern "C" void fn_007d5550();
extern "C" void fn_00948430();
// FUNCTION: ROBLOXSTUDIO 0x00a77150
extern "C" __declspec(naked) void asm_00a77150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4d268 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { call fn_007d5550 }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { call fn_0043d7c0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00948430 }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a771af }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a771af: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0045f690();
extern "C" void fn_00574850();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a771c0
extern "C" __declspec(naked) void asm_00a771c0()
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
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { push eax }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00574850 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_0045f690 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00a77223 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a77223: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_008523c0();
extern "C" void fn_00a7ad30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a788a0
extern "C" __declspec(naked) void asm_00a788a0()
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
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008523c0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a788d9 }
	__asm { lea esi, [eax + 0x98] }
	__asm { jmp L_00a788db }
	__asm { L_00a788d9: }
	__asm { xor esi, esi }
	__asm { L_00a788db: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, edi }
	__asm { call fn_00a7ad30 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x18] }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00a7891e }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a7891e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a7ab90
extern "C" __declspec(naked) void asm_00a7ab90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, 0x28 }
	__asm { je L_00a7abef }
	__asm { cmp al, 0x5b }
	__asm { je L_00a7abeb }
	__asm { cmp al, 0x7b }
	__asm { je L_00a7abe7 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a7abe3 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a7abd2 }
	__asm { push 0xbf }
	__asm { push 0xeae120 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a7abe3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a7abd2: }
	__asm { movzx eax, al }
	__asm { push 0xeae168 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a7abe3: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a7abe7: }
	__asm { mov al, 0x7d }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a7abeb: }
	__asm { mov al, 0x5d }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a7abef: }
	__asm { mov al, 0x29 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00a7ad30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a7b420
extern "C" __declspec(naked) void asm_00a7b420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
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
	__asm { mov ecx, esi }
	__asm { call fn_00a7ad30 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_00a7b48a }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a7b48a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00403540();
extern "C" void fn_00a7ad30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a7b4a0
extern "C" __declspec(naked) void asm_00a7b4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
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
	__asm { mov ecx, esi }
	__asm { call fn_00a7ad30 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_00a7b50a }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a7b50a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00a7b650
extern "C" __declspec(naked) void asm_00a7b650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00a7b698 }
	__asm { cmp eax, 1 }
	__asm { je L_00a7b698 }
	__asm { cmp eax, 2 }
	__asm { je L_00a7b6b8 }
	__asm { cmp eax, 3 }
	__asm { jne L_00a7b687 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x1257fb0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a7b687: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1257fb0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a7b698: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_00a7b6b8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { L_00a7b6b8: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01309470[];
extern "C" char g_01309474[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a7d470
extern "C" __declspec(naked) void asm_00a7d470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4b10e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01309474] }
	__asm { test al, 1 }
	__asm { jne L_00a7d4e3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01309474], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a7d4ce }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01309470], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a7d4ce: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01309470], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a7d4e3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01309470] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01309478[];
extern "C" char g_0130947c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a7d500
extern "C" __declspec(naked) void asm_00a7d500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4b12e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130947c] }
	__asm { test al, 1 }
	__asm { jne L_00a7d573 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130947c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a7d55e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01309478], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a7d55e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01309478], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a7d573: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01309478] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01309490[];
extern "C" char g_01309494[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a7d590
extern "C" __declspec(naked) void asm_00a7d590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4b14e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01309494] }
	__asm { test al, 1 }
	__asm { jne L_00a7d603 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01309494], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a7d5ee }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01309490], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a7d5ee: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01309490], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a7d603: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01309490] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004033d0();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_008c3aa0();
// FUNCTION: ROBLOXSTUDIO 0x00a7db40
extern "C" __declspec(naked) void asm_00a7db40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp eax, dword ptr [ecx + 0x8c] }
	__asm { jne L_00a7dbcf }
	__asm { cmp byte ptr [ecx + 0x88], 0 }
	__asm { je L_00a7dbcf }
	__asm { add ecx, 0x160 }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { je L_00a7db98 }
	__asm { fld qword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_008c3aa0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a7db98: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { fld qword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xeae6e4 }
	__asm { push 1 }
	__asm { push dword ptr [eax] }
	__asm { call fn_00773930 }
	__asm { add esp, 0x14 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { L_00a7dbcf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" void fn_00426fa0();
extern "C" void fn_00512110();
extern "C" void fn_008c68b0();
extern "C" void fn_00936630();
extern "C" void fn_00a709d0();
extern "C" void fn_00a70a00();
extern "C" void fn_00a70d90();
extern "C" void fn_00a7dd80();
// FUNCTION: ROBLOXSTUDIO 0x00a7dbe0
extern "C" __declspec(naked) void asm_00a7dbe0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00a7dd80 }
	__asm { cmp byte ptr [edi + 0xa0], 0 }
	__asm { jne L_00a7dc08 }
	__asm { push edi }
	__asm { call fn_00512110 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a7dc08 }
	__asm { push 2 }
	__asm { mov ecx, eax }
	__asm { call fn_008c68b0 }
	__asm { L_00a7dc08: }
	__asm { mov al, byte ptr [edi + 0xaa] }
	__asm { mov byte ptr [g_012de657], al }
	__asm { call fn_00936630 }
	__asm { push dword ptr [edi + 0xa4] }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_00a70a00 }
	__asm { movzx ecx, byte ptr [edi + 0xa8] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00a709d0 }
	__asm { movzx ecx, byte ptr [edi + 0xa9] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00a70d90 }
	__asm { cmp dword ptr [edi + 0x68], 0 }
	__asm { lea ecx, [edi + 0x68] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jne fn_00426fa0 }
	__asm { ret }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a7e2d0
extern "C" __declspec(naked) void asm_00a7e2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b210 }
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
	__asm { je L_00a7e328 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeaffc8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a7e32a }
	__asm { L_00a7e328: }
	__asm { xor eax, eax }
	__asm { L_00a7e32a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a7e360
extern "C" __declspec(naked) void asm_00a7e360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b220 }
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
	__asm { je L_00a7e3b8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeaffe0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a7e3ba }
	__asm { L_00a7e3b8: }
	__asm { xor eax, eax }
	__asm { L_00a7e3ba: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a7e4c0
extern "C" __declspec(naked) void asm_00a7e4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b230 }
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
	__asm { je L_00a7e518 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeafff8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a7e51a }
	__asm { L_00a7e518: }
	__asm { xor eax, eax }
	__asm { L_00a7e51a: }
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
	__asm { je L_00a7e53e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00a7e53e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
extern "C" void fn_00b2deb0();
// FUNCTION: ROBLOXSTUDIO 0x00a7ee80
extern "C" __declspec(naked) void asm_00a7ee80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { je L_00a7eedb }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { lea ebx, [edi + 0x18] }
	__asm { L_00a7ee94: }
	__asm { cmp edi, esi }
	__asm { je L_00a7eea4 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00403540 }
	__asm { L_00a7eea4: }
	__asm { lea eax, [esi + 0x18] }
	__asm { cmp ebx, eax }
	__asm { je L_00a7eeba }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00403540 }
	__asm { lea eax, [esi + 0x18] }
	__asm { L_00a7eeba: }
	__asm { add eax, 0x18 }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x18] }
	__asm { call fn_00b2deb0 }
	__asm { add esi, 0x50 }
	__asm { add edi, 0x50 }
	__asm { add ebx, 0x50 }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { jne L_00a7ee94 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a7eedb: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4c20[];
extern "C" char g_012e8e6c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a7f3e0
extern "C" __declspec(naked) void asm_00a7f3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b306 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xeaf29c }
	__asm { mov dword ptr [esi + 4], 0xeaf314 }
	__asm { mov dword ptr [esi + 0x18], 0xeaf31c }
	__asm { mov dword ptr [esi + 0x1c], 0xeaf328 }
	__asm { mov eax, dword ptr [g_012e8e6c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a7f479 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e8e6c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1032afc }
	__asm { mov byte ptr [ebp - 4], 1 }
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
	__asm { L_00a7f479: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e8d40 }
	__asm { inc dword ptr [g_012e4c20] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a7e550();
extern "C" void fn_00a80100();
// FUNCTION: ROBLOXSTUDIO 0x00a810c0
extern "C" __declspec(naked) void asm_00a810c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { call fn_00a80100 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00a810fb }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00a7e550 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_00a810fb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a810fb: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00a818c0();
extern "C" void fn_00b2deb0();
// FUNCTION: ROBLOXSTUDIO 0x00a81da0
extern "C" __declspec(naked) void asm_00a81da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00a818c0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, dword ptr [edi + 4] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { and eax, dword ptr [edi + 0x14] }
	__asm { lea esi, [eax + eax*4] }
	__asm { shl esi, 4 }
	__asm { add esi, dword ptr [edi + 8] }
	__asm { cmp esi, ebx }
	__asm { je L_00a81dd1 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_00a81dd1: }
	__asm { lea eax, [ebx + 0x18] }
	__asm { lea ecx, [esi + 0x18] }
	__asm { cmp ecx, eax }
	__asm { je L_00a81de5 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00a81de5: }
	__asm { lea eax, [ebx + 0x30] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x30] }
	__asm { call fn_00b2deb0 }
	__asm { inc dword ptr [edi + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4e84[];
extern "C" char g_012e8f9c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af830();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a827e0
extern "C" __declspec(naked) void asm_00a827e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b676 }
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
	__asm { mov dword ptr [esi], 0xeb005c }
	__asm { mov dword ptr [esi + 4], 0xeb00d4 }
	__asm { mov dword ptr [esi + 0x18], 0xeb00dc }
	__asm { mov dword ptr [esi + 0x1c], 0xeb00e8 }
	__asm { mov eax, dword ptr [g_012e8f9c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a8287a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e8f9c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb000c }
	__asm { mov byte ptr [ebp - 4], 1 }
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
	__asm { L_00a8287a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e8e70 }
	__asm { inc dword ptr [g_012e4e84] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b00e0();
extern "C" void fn_008a0cc0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a82d10
extern "C" __declspec(naked) void asm_00a82d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b6c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xeb00fc }
	__asm { mov dword ptr [esi + 4], 0xeb0174 }
	__asm { mov dword ptr [esi + 0x18], 0xeb017c }
	__asm { mov dword ptr [esi + 0x1c], 0xeb0188 }
	__asm { lea ecx, [esi + 0x64] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a0cc0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], 0xeb005c }
	__asm { mov dword ptr [esi + 4], 0xeb00d4 }
	__asm { mov dword ptr [esi + 0x18], 0xeb00dc }
	__asm { mov dword ptr [esi + 0x1c], 0xeb00e8 }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a82d91 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a82d91: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a83760
extern "C" __declspec(naked) void asm_00a83760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { lea edx, [ebp - 0xc] }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 6] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ax, word ptr [ebp - 6] }
	__asm { pop esi }
	__asm { cmp ax, word ptr [ebp - 0xc] }
	__asm { jne L_00a837ae }
	__asm { mov ax, word ptr [ebp - 4] }
	__asm { cmp ax, word ptr [ebp - 0xa] }
	__asm { jne L_00a837ae }
	__asm { mov ax, word ptr [ebp - 2] }
	__asm { cmp ax, word ptr [ebp - 8] }
	__asm { jne L_00a837ae }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a837ae: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a83e90
extern "C" __declspec(naked) void asm_00a83e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b7a0 }
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
	__asm { je L_00a83ee8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeb1494 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a83eea }
	__asm { L_00a83ee8: }
	__asm { xor eax, eax }
	__asm { L_00a83eea: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a83fc0
extern "C" __declspec(naked) void asm_00a83fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b7b0 }
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
	__asm { je L_00a84018 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeb14ac }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a8401a }
	__asm { L_00a84018: }
	__asm { xor eax, eax }
	__asm { L_00a8401a: }
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
	__asm { je L_00a8403f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00a8403f: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a840f0
extern "C" __declspec(naked) void asm_00a840f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b7c0 }
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
	__asm { je L_00a84148 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeb14c4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a8414a }
	__asm { L_00a84148: }
	__asm { xor eax, eax }
	__asm { L_00a8414a: }
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
	__asm { je L_00a8416f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00a8416f: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a84240
extern "C" __declspec(naked) void asm_00a84240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b7d0 }
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
	__asm { je L_00a84298 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeb14e4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a8429a }
	__asm { L_00a84298: }
	__asm { xor eax, eax }
	__asm { L_00a8429a: }
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
	__asm { je L_00a842be }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00a842be: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_01309930[];
extern "C" char g_01309934[];
extern "C" char g_01309938[];
extern "C" char g_0130993c[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a842d0
extern "C" __declspec(naked) void asm_00a842d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0130993c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00a84312 }
	__asm { or eax, 1 }
	__asm { push 0xdfff80 }
	__asm { mov dword ptr [g_0130993c], eax }
	__asm { mov dword ptr [g_01309930], 0x125b5d0 }
	__asm { mov dword ptr [g_01309938], 0x40d810 }
	__asm { mov dword ptr [g_01309934], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a84312: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x1309930 }
	__asm { jne L_00a8432b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a8432b: }
	__asm { test ecx, ecx }
	__asm { je L_00a84341 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00a84341: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00a8434f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00a8434f: }
	__asm { mov dword ptr [esi], 0x1309930 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x00a84720
extern "C" __declspec(naked) void asm_00a84720()
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
	__asm { je L_00a84749 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a8474e }
	__asm { L_00a84749: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a8474e: }
	__asm { cmp ecx, 0x125b5d0 }
	__asm { je L_00a84797 }
	__asm { test eax, eax }
	__asm { je L_00a8475e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a84763 }
	__asm { L_00a8475e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a84763: }
	__asm { push 0x125b5d0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00a84797 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00a84797: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01309928[];
extern "C" char g_0130992c[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00a84880
extern "C" __declspec(naked) void asm_00a84880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4bbbe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130992c] }
	__asm { test al, 1 }
	__asm { jne L_00a848c2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130992c], eax }
	__asm { push 0xeb0324 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01309928], eax }
	__asm { L_00a848c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4c28[];
extern "C" char g_012e91fc[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a85320
extern "C" __declspec(naked) void asm_00a85320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b896 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xeb04b4 }
	__asm { mov dword ptr [esi + 4], 0xeb052c }
	__asm { mov dword ptr [esi + 0x18], 0xeb0534 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb0540 }
	__asm { mov eax, dword ptr [g_012e91fc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a853b9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e91fc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1010c4c }
	__asm { mov byte ptr [ebp - 4], 1 }
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
	__asm { L_00a853b9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e90d0 }
	__asm { inc dword ptr [g_012e4c28] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4c24[];
extern "C" char g_012e90cc[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a853e0
extern "C" __declspec(naked) void asm_00a853e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b8b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xeb0344 }
	__asm { mov dword ptr [esi + 4], 0xeb03bc }
	__asm { mov dword ptr [esi + 0x18], 0xeb03c4 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb03d0 }
	__asm { mov eax, dword ptr [g_012e90cc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a85479 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e90cc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb032c }
	__asm { mov byte ptr [ebp - 4], 1 }
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
	__asm { L_00a85479: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e8fa0 }
	__asm { inc dword ptr [g_012e4c24] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0068b160();
extern "C" void fn_00a89070();
extern "C" void fn_00a89100();
extern "C" void fn_00a891d0();
extern "C" void fn_00a8a360();
// FUNCTION: ROBLOXSTUDIO 0x00a86640
extern "C" __declspec(naked) void asm_00a86640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov edx, dword ptr [edi + 0x38] }
	__asm { test edx, edx }
	__asm { je L_00a8667e }
	__asm { cmp dword ptr [edi + 0x2c], 0 }
	__asm { je L_00a86668 }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push 0 }
	__asm { lea eax, [edx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x24] }
	__asm { call fn_00a89070 }
	__asm { L_00a86668: }
	__asm { lea ecx, [edi + 0x24] }
	__asm { call fn_00a89100 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { L_00a8667e: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { call fn_00a891d0 }
	__asm { mov esi, dword ptr [edi + 0x1c] }
	__asm { call fn_00a8a360 }
	__asm { call fn_00a8a360 }
	__asm { call fn_00a8a360 }
	__asm { call fn_00a8a360 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_0068b160 }
	__asm { call fn_00a8a360 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop edi }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10598[];
extern "C" void fn_0045fe60();
extern "C" void fn_0068b610();
extern "C" void fn_0068b8a0();
extern "C" void fn_00a8a2a0();
// FUNCTION: ROBLOXSTUDIO 0x00a87060
extern "C" __declspec(naked) void asm_00a87060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4ba48 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { call fn_00a8a2a0 }
	__asm { cmp dword ptr [ebp + 8], 1 }
	__asm { jne L_00a8709d }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_00a87094 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { jmp L_00a870a7 }
	__asm { L_00a87094: }
	__asm { mov ecx, edx }
	__asm { call fn_0068b610 }
	__asm { jmp L_00a870a7 }
	__asm { L_00a8709d: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call fn_0068b8a0 }
	__asm { L_00a870a7: }
	__asm { test eax, eax }
	__asm { jne L_00a870d8 }
	__asm { push 1 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 8], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { mov dword ptr [ebp - 0x18], 0xe1815c }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0045fe60 }
	__asm { L_00a870d8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67fe();
extern "C" void fn_00cf6a60();
// FUNCTION: ROBLOXSTUDIO 0x00a88830
extern "C" __declspec(naked) void asm_00a88830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, 0x4024 }
	__asm { call fn_00cf6a60 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jne L_00a88892 }
	__asm { push 0x4024 }
	__asm { mov word ptr [esi + 8], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00a88863 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00a88863: }
	__asm { push 0x4024 }
	__asm { lea ecx, [ebp - 0x4024] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { mov byte ptr [esi + 8], 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a88892: }
	__asm { cmp byte ptr [esi + 9], 0 }
	__asm { je L_00a8889c }
	__asm { mov byte ptr [esi + 9], 0 }
	__asm { L_00a8889c: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a88980
extern "C" __declspec(naked) void asm_00a88980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00a889cf }
	__asm { test esi, esi }
	__asm { jns L_00a889cf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a889be }
	__asm { push 0x15a }
	__asm { push 0xe51348 }
	__asm { push 0xf1477c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a889cf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a889be: }
	__asm { movzx eax, al }
	__asm { push 0xe56e28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a889cf: }
	__asm { mov eax, dword ptr [edi + 0x7c] }
	__asm { mov ecx, dword ptr [edi + 0x80] }
	__asm { sub ecx, eax }
	__asm { sar ecx, 2 }
	__asm { cmp esi, ecx }
	__asm { jae L_00a889ea }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a889ea: }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_013098f8[];
extern "C" void fn_004115f0();
extern "C" void fn_00a842d0();
extern "C" void fn_00a854a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a88a00
extern "C" __declspec(naked) void asm_00a88a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4b9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00a88a2e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00a88a30 }
	__asm { L_00a88a2e: }
	__asm { xor bl, bl }
	__asm { L_00a88a30: }
	__asm { push 0xa8a680 }
	__asm { push 0x1309848 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013098f8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a88a78 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013098f8], eax }
	__asm { mov ecx, 0x1309870 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a854a0 }
	__asm { push 0xdfff70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a88a78: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x1309870 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_00a842d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01309908[];
extern "C" char g_0130990c[];
extern "C" char g_01309910[];
extern "C" char g_01309914[];
extern "C" char g_01309918[];
extern "C" char g_0130991c[];
extern "C" char g_01309920[];
extern "C" char g_01309925[];
// FUNCTION: ROBLOXSTUDIO 0x00a89070
extern "C" __declspec(naked) void asm_00a89070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor esi, esi }
	__asm { L_00a89080: }
	__asm { mov ecx, dword ptr [edx] }
	__asm { test ecx, ecx }
	__asm { je L_00a8908b }
	__asm { add ecx, -0x20 }
	__asm { jmp L_00a8908d }
	__asm { L_00a8908b: }
	__asm { xor ecx, ecx }
	__asm { L_00a8908d: }
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { mov dword ptr [edx], eax }
	__asm { cmp byte ptr [g_01309925], 0 }
	__asm { jne L_00a890d3 }
	__asm { xor eax, eax }
	__asm { mov byte ptr [g_01309925], 1 }
	__asm { mov dword ptr [g_0130990c], eax }
	__asm { mov dword ptr [g_01309910], eax }
	__asm { mov dword ptr [g_01309914], 0x28 }
	__asm { mov dword ptr [g_01309918], 0x20 }
	__asm { mov dword ptr [g_0130991c], 0x20 }
	__asm { mov dword ptr [g_01309920], eax }
	__asm { jmp L_00a890d8 }
	__asm { L_00a890d3: }
	__asm { mov eax, dword ptr [g_01309908] }
	__asm { L_00a890d8: }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [g_01309908], ecx }
	__asm { dec dword ptr [edi + 8] }
	__asm { inc esi }
	__asm { cmp dword ptr [edx], ebx }
	__asm { jne L_00a89080 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01309828[];
extern "C" char g_0130982c[];
extern "C" char g_01309830[];
extern "C" char g_01309834[];
extern "C" char g_01309838[];
extern "C" char g_0130983c[];
extern "C" char g_01309840[];
extern "C" char g_013098fc[];
extern "C" void fn_0068b1b0();
// FUNCTION: ROBLOXSTUDIO 0x00a89100
extern "C" __declspec(naked) void asm_00a89100()
{
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { inc edx }
	__asm { cmp edx, 1 }
	__asm { jne L_00a89163 }
	__asm { cmp byte ptr [g_013098fc], 0 }
	__asm { jne L_00a89155 }
	__asm { xor ecx, ecx }
	__asm { mov byte ptr [g_013098fc], dl }
	__asm { mov dword ptr [g_0130982c], ecx }
	__asm { mov dword ptr [g_01309830], ecx }
	__asm { mov dword ptr [g_01309834], 4 }
	__asm { mov dword ptr [g_01309838], 0x20 }
	__asm { mov dword ptr [g_0130983c], 0x20 }
	__asm { mov dword ptr [g_01309840], ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [g_01309828], eax }
	__asm { ret }
	__asm { L_00a89155: }
	__asm { mov ecx, dword ptr [g_01309828] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [g_01309828], eax }
	__asm { ret }
	__asm { L_00a89163: }
	__asm { cmp byte ptr [g_013098fc], 0 }
	__asm { jne L_00a891b9 }
	__asm { mov byte ptr [g_013098fc], 1 }
	__asm { mov dword ptr [g_01309828], 0 }
	__asm { mov dword ptr [g_0130982c], 0 }
	__asm { mov dword ptr [g_01309830], 0 }
	__asm { mov dword ptr [g_01309834], 4 }
	__asm { mov dword ptr [g_01309838], 0x20 }
	__asm { mov dword ptr [g_0130983c], 0x20 }
	__asm { mov dword ptr [g_01309840], 0 }
	__asm { L_00a891b9: }
	__asm { push edx }
	__asm { push eax }
	__asm { mov ecx, 0x1309828 }
	__asm { call fn_0068b1b0 }
	__asm { ret }
}

extern "C" char g_01309928[];
extern "C" char g_0130992c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00a89f30
extern "C" __declspec(naked) void asm_00a89f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4bbbe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xa84880 }
	__asm { push 0x1309900 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130992c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a89f92 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130992c], eax }
	__asm { push 0xeb0324 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01309928], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a89f92: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01309928] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013098f8[];
extern "C" void fn_00a854a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a8a680
extern "C" __declspec(naked) void asm_00a8a680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4b9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013098f8] }
	__asm { test al, 1 }
	__asm { jne L_00a8a6c7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013098f8], eax }
	__asm { mov ecx, 0x1309870 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a854a0 }
	__asm { push 0xdfff70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a8a6c7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b53d0();
// FUNCTION: ROBLOXSTUDIO 0x00a8ae30
extern "C" __declspec(naked) void asm_00a8ae30()
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
	__asm { je L_00a8aea0 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_00a8ae50: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_00a8ae5e }
	__asm { add esi, 0xffffbfe4 }
	__asm { jmp L_00a8ae60 }
	__asm { L_00a8ae5e: }
	__asm { xor esi, esi }
	__asm { L_00a8ae60: }
	__asm { mov eax, dword ptr [esi + 0x4020] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_00a8ae81 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x401c] }
	__asm { jmp L_00a8ae99 }
	__asm { L_00a8ae81: }
	__asm { mov eax, dword ptr [esi + 0x401c] }
	__asm { lea edx, [esi + 0x401c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_00a8ae99: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00a8ae50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00a8aea0: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a88e80();
// FUNCTION: ROBLOXSTUDIO 0x00a8aeb0
extern "C" __declspec(naked) void asm_00a8aeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_00a88e80 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_00a8af11 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_00a8aed0: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_00a8aedb }
	__asm { add esi, -0x20 }
	__asm { jmp L_00a8aedd }
	__asm { L_00a8aedb: }
	__asm { xor esi, esi }
	__asm { L_00a8aedd: }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_00a8aef8 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x20] }
	__asm { jmp L_00a8af0a }
	__asm { L_00a8aef8: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { lea edx, [esi + 0x20] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_00a8af0a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00a8aed0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00a8af11: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009b53d0();
extern "C" void fn_00a8ae30();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x00a8af20
extern "C" __declspec(naked) void asm_00a8af20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_00a8af54 }
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
	__asm { L_00a8af54: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_00a8af8a }
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
	__asm { je L_00a8af8a }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00a8ae30 }
	__asm { L_00a8af8a: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a88e80();
extern "C" void fn_00a8aeb0();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x00a8afa0
extern "C" __declspec(naked) void asm_00a8afa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_00a8afd4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c876a0 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [ebp + 8] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_00a88e80 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a8afd4: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_00a8b00a }
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
	__asm { je L_00a8b00a }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00a8aeb0 }
	__asm { L_00a8b00a: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a8b250();
// FUNCTION: ROBLOXSTUDIO 0x00a8b380
extern "C" __declspec(naked) void asm_00a8b380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0x14], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00a8b39d }
	__asm { mov dword ptr [esi + 0x68], 0xe9bba8 }
	__asm { mov dword ptr [esi + 0xb4], 0xe780c8 }
	__asm { L_00a8b39d: }
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
	__asm { call fn_00a8b250 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xeb16dc }
	__asm { mov dword ptr [esi + 4], 0xeb17e8 }
	__asm { mov dword ptr [esi + 0x18], 0xeb17f0 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb17fc }
	__asm { mov dword ptr [esi + 0x64], 0xeb180c }
	__asm { mov dword ptr [esi + 0x70], 0xeb1814 }
	__asm { mov dword ptr [esi + 0x98], 0xeb1834 }
	__asm { mov dword ptr [esi + 0xb0], 0xeb1868 }
	__asm { mov dword ptr [esi + 0xc4], 0xeb1894 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xeb189c }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xac] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012e4d20[];
extern "C" char g_012eaaec[];
extern "C" void fn_0078dbf0();
extern "C" void fn_007cbf10();
extern "C" void fn_00911d20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a8c3c0
extern "C" __declspec(naked) void asm_00a8c3c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4be46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00911d20 }
	__asm { mov dword ptr [esi], 0xeb1f54 }
	__asm { mov dword ptr [esi + 4], 0xeb1fcc }
	__asm { mov dword ptr [esi + 0x18], 0xeb1fd4 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb1fe0 }
	__asm { mov dword ptr [esi + 0x64], 0xeb1ff0 }
	__asm { mov eax, dword ptr [g_012eaaec] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a8c45f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eaaec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003780 }
	__asm { mov byte ptr [ebp - 4], 1 }
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
	__asm { L_00a8c45f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ea9c0 }
	__asm { inc dword ptr [g_012e4d20] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01309af4[];
extern "C" char g_01309af8[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00a8c480
extern "C" __declspec(naked) void asm_00a8c480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4bf8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01309af8] }
	__asm { test al, 1 }
	__asm { jne L_00a8c4c2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01309af8], eax }
	__asm { push 0xeb1a68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01309af4], eax }
	__asm { L_00a8c4c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4d24[];
extern "C" char g_012ea75c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a8c8a0
extern "C" __declspec(naked) void asm_00a8c8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4be66 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xeb1a7c }
	__asm { mov dword ptr [esi + 4], 0xeb1af4 }
	__asm { mov dword ptr [esi + 0x18], 0xeb1afc }
	__asm { mov dword ptr [esi + 0x1c], 0xeb1b08 }
	__asm { mov eax, dword ptr [g_012ea75c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a8c939 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ea75c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe51a48 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ea630 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde77e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a8c939: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ea630 }
	__asm { inc dword ptr [g_012e4d24] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4e10[];
extern "C" char g_012ea9bc[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810310();
extern "C" void fn_00a8cea0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a8c960
extern "C" __declspec(naked) void asm_00a8c960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4be86 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a8cea0 }
	__asm { mov dword ptr [esi], 0xeb1da4 }
	__asm { mov dword ptr [esi + 4], 0xeb1e20 }
	__asm { mov dword ptr [esi + 0x18], 0xeb1e28 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb1e34 }
	__asm { mov dword ptr [esi + 0x64], 0xeb1e44 }
	__asm { mov eax, dword ptr [g_012ea9bc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a8c9fe }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ea9bc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x10036a4 }
	__asm { mov byte ptr [ebp - 4], 1 }
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
	__asm { L_00a8c9fe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ea890 }
	__asm { inc dword ptr [g_012e4e10] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4e0c[];
extern "C" char g_012ea88c[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810310();
extern "C" void fn_00a8cea0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a8ca20
extern "C" __declspec(naked) void asm_00a8ca20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4bea6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a8cea0 }
	__asm { mov dword ptr [esi], 0xeb1bf4 }
	__asm { mov dword ptr [esi + 4], 0xeb1c70 }
	__asm { mov dword ptr [esi + 0x18], 0xeb1c78 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb1c84 }
	__asm { mov dword ptr [esi + 0x64], 0xeb1c94 }
	__asm { mov eax, dword ptr [g_012ea88c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a8cabe }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ea88c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x10036c0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810310 }
	__asm { push eax }
	__asm { mov ecx, 0x12ea760 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7af0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a8cabe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ea760 }
	__asm { inc dword ptr [g_012e4e0c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010036a4[];
extern "C" void fn_004038a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_00a8c960();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a8cfa0
extern "C" __declspec(naked) void asm_00a8cfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4bef0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a8c960 }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [esi], 0xeb1e7c }
	__asm { mov dword ptr [esi + 4], 0xeb1ef8 }
	__asm { mov dword ptr [esi + 0x18], 0xeb1f00 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb1f0c }
	__asm { mov dword ptr [esi + 0x64], 0xeb1f1c }
	__asm { cmp byte ptr [g_010036a4], cl }
	__asm { mov eax, 4 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0x10036a4 }
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
	__asm { jb L_00a8d03f }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a8d03f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010036c0[];
extern "C" void fn_004038a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_00a8ca20();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a8d050
extern "C" __declspec(naked) void asm_00a8d050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4bef0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a8ca20 }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [esi], 0xeb1ccc }
	__asm { mov dword ptr [esi + 4], 0xeb1d48 }
	__asm { mov dword ptr [esi + 0x18], 0xeb1d50 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb1d5c }
	__asm { mov dword ptr [esi + 0x64], 0xeb1d6c }
	__asm { cmp byte ptr [g_010036c0], cl }
	__asm { mov eax, 0xc }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0x10036c0 }
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
	__asm { jb L_00a8d0ef }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a8d0ef: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
extern "C" void fn_00d08530();
// FUNCTION: ROBLOXSTUDIO 0x00a8d420
extern "C" __declspec(naked) void asm_00a8d420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x64] }
	__asm { mov dword ptr [esi], 0xeb1b1c }
	__asm { mov dword ptr [esi + 4], 0xeb1b98 }
	__asm { mov dword ptr [esi + 0x18], 0xeb1ba0 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb1bac }
	__asm { mov dword ptr [ecx], 0xeb1bbc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00d08530 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a8d48c }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a8d48c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01309af4[];
extern "C" char g_01309af8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00a8d920
extern "C" __declspec(naked) void asm_00a8d920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4bf8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xa8c480 }
	__asm { push 0x1309acc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01309af8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a8d982 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01309af8], eax }
	__asm { push 0xeb1a68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01309af4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a8d982: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01309af4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" void fn_00cf67ec();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00a8e260
extern "C" __declspec(naked) void asm_00a8e260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a8e28d }
	__asm { push 0 }
	__asm { push 0x125c320 }
	__asm { push 0x12bc2e4 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { jne L_00a8e28f }
	__asm { jmp L_00a8e2a8 }
	__asm { L_00a8e28d: }
	__asm { xor eax, eax }
	__asm { L_00a8e28f: }
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
	__asm { L_00a8e2a8: }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { call dword ptr [g_00e10518] }
	__asm { push 0x1179e30 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a8e450
extern "C" __declspec(naked) void asm_00a8e450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4bff0 }
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
	__asm { je L_00a8e4a8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeb289c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a8e4aa }
	__asm { L_00a8e4a8: }
	__asm { xor eax, eax }
	__asm { L_00a8e4aa: }
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

extern "C" char g_01309b34[];
extern "C" char g_01309b38[];
extern "C" char g_01309b44[];
extern "C" char g_01309b48[];
extern "C" void fn_007cb250();
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00a8e4e0
extern "C" __declspec(naked) void asm_00a8e4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4c08e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01309b38] }
	__asm { test al, 1 }
	__asm { jne L_00a8e522 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01309b38], eax }
	__asm { push 0xeb28b0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01309b34], eax }
	__asm { L_00a8e522: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4c00e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01309b48] }
	__asm { test al, 1 }
	__asm { jne L_00a8e56a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01309b48], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_01309b44], eax }
	__asm { L_00a8e56a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_00a8e450();
extern "C" void fn_00a8ff10();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a8e700
extern "C" __declspec(naked) void asm_00a8e700()
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
	__asm { push 0x7c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a8e74b }
	__asm { mov ecx, eax }
	__asm { call fn_00a8ff10 }
	__asm { mov esi, eax }
	__asm { jmp L_00a8e74d }
	__asm { L_00a8e74b: }
	__asm { xor esi, esi }
	__asm { L_00a8e74d: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00a8e450 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00a8e77e }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00a8e77e }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00a8e77e: }
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
extern "C" void fn_00a8e790();
// FUNCTION: ROBLOXSTUDIO 0x00a8e8e0
extern "C" __declspec(naked) void asm_00a8e8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00a8e931 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00a8e900 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00a8e902 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00a8e902 }
	__asm { L_00a8e900: }
	__asm { mov eax, ecx }
	__asm { L_00a8e902: }
	__asm { test eax, eax }
	__asm { je L_00a8e931 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00a8e931 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00a8e931 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00a8e931 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00a8e790 }
	__asm { L_00a8e931: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb28b0[];
extern "C" char g_01309b34[];
extern "C" char g_01309b38[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00a8e940
extern "C" __declspec(naked) void asm_00a8e940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4c08e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb28b0], 0 }
	__asm { jne L_00a8e974 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a8e974: }
	__asm { push 0xa8e4e0 }
	__asm { push 0x1309b2c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01309b38] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a8e9be }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01309b38], eax }
	__asm { push 0xeb28b0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01309b34], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a8e9be: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01309b34] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00a8f250
extern "C" __declspec(naked) void asm_00a8f250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00a8f298 }
	__asm { cmp eax, 1 }
	__asm { je L_00a8f298 }
	__asm { cmp eax, 2 }
	__asm { je L_00a8f2b8 }
	__asm { cmp eax, 3 }
	__asm { jne L_00a8f287 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x125d1d8 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a8f287: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x125d1d8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a8f298: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_00a8f2b8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { L_00a8f2b8: }
	__asm { pop ebp }
	__asm { ret }
}
