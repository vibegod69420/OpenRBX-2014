// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10508[];
extern "C" char g_00e10c88[];
extern "C" char g_00e11034[];
// FUNCTION: ROBLOXSTUDIO 0x0049b590
extern "C" __declspec(naked) void asm_0049b590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { add esi, 5 }
	__asm { add ebx, 5 }
	__asm { lea esi, [ecx + esi*4] }
	__asm { lea ebx, [ecx + ebx*4] }
	__asm { cmp ebx, esi }
	__asm { je L_0049b5d3 }
	__asm { push edi }
	__asm { nop }
	__asm { L_0049b5b0: }
	__asm { mov edi, dword ptr [esi - 4] }
	__asm { sub esi, 4 }
	__asm { test edi, edi }
	__asm { je L_0049b5cb }
	__asm { push edi }
	__asm { call dword ptr [g_00e10c88] }
	__asm { push edi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 8 }
	__asm { L_0049b5cb: }
	__asm { cmp esi, ebx }
	__asm { jne L_0049b5b0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { L_0049b5d3: }
	__asm { push ecx }
	__asm { call dword ptr [g_00e11034] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10c8c[];
// FUNCTION: ROBLOXSTUDIO 0x0049b5f0
extern "C" __declspec(naked) void asm_0049b5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ccfc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 4 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0049b64c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [esi], ecx }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0049b64c: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e11110[];
extern "C" void fn_0049ba50();
// FUNCTION: ROBLOXSTUDIO 0x0049b8d0
extern "C" __declspec(naked) void asm_0049b8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd788c9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_0049b944 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ebx }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebp + 8] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { sete bl }
	__asm { call dword ptr [g_00e11110] }
	__asm { test bl, bl }
	__asm { pop ebx }
	__asm { jne L_0049b944 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0049ba50 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0049b944: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131eb88[];
extern "C" void fn_004a4c90();
extern "C" void fn_004a5f10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0049b9d0
extern "C" __declspec(naked) void asm_0049b9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7579e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x64] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0049ba3e }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_0049ba24 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0049ba24: }
	__asm { mov ecx, 0x131eb8c }
	__asm { call fn_004a5f10 }
	__asm { mov al, 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0049ba3e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor al, al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11108[];
extern "C" void fn_0040d520();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0049bf60
extern "C" __declspec(naked) void asm_0049bf60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7c1f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_0040d520 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov word ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0049bfbb }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_0049bfbb: }
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

extern "C" char g_00e10508[];
extern "C" char g_00e1110c[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x0049cf70
extern "C" __declspec(naked) void asm_0049cf70()
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
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e1110c] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0049cfbe }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0049cfbe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e10f6c[];
extern "C" char g_00e110d0[];
extern "C" char g_01318f98[];
// FUNCTION: ROBLOXSTUDIO 0x0049d090
extern "C" __declspec(naked) void asm_0049d090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [g_01318f98], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_0049d0e0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea ecx, [edi + 8] }
	__asm { call dword ptr [g_00e110d0] }
	__asm { test al, al }
	__asm { je L_0049d0de }
	__asm { push esi }
	__asm { lea ecx, [edi + 8] }
	__asm { call dword ptr [g_00e10f6c] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12bfee8 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { L_0049d0de: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_0049d0e0: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11110[];
extern "C" char g_00e125d0[];
// FUNCTION: ROBLOXSTUDIO 0x0049d220
extern "C" __declspec(naked) void asm_0049d220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd76859 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e125d0] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0049d26e }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0049d26e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110ec[];
extern "C" char g_00e110f0[];
extern "C" char g_00e12e88[];
extern "C" char g_00e12ef8[];
extern "C" void fn_0049c9f0();
// FUNCTION: ROBLOXSTUDIO 0x0049d830
extern "C" __declspec(naked) void asm_0049d830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7c3a9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x28] }
	__asm { cmp byte ptr [edi + 0x20], 0 }
	__asm { je L_0049d88b }
	__asm { lea eax, [edi + 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110f0] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12ef8] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e110ec] }
	__asm { mov byte ptr [edi + 0x20], 0 }
	__asm { L_0049d88b: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12e88] }
	__asm { mov ecx, esi }
	__asm { call fn_0049c9f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e12de4[];
extern "C" void fn_0049d930();
// FUNCTION: ROBLOXSTUDIO 0x0049d8c0
extern "C" __declspec(naked) void asm_0049d8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7c499 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x101530c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0049d930 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12de4] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0049d910 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0049d910: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" char g_0131b3d8[];
extern "C" void fn_004021e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0049eeb0
extern "C" __declspec(naked) void asm_0049eeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7c5ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131b3d8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0049eefc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b3d8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004021e0 }
	__asm { push 0xddc850 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0049eefc: }
	__asm { push 0 }
	__asm { push 0x10152a8 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0x1015240 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push 0x131b3c8 }
	__asm { call dword ptr [g_00e110ac] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11bc4[];
extern "C" char g_00e11bc8[];
extern "C" char g_00e12c54[];
extern "C" void fn_004a0b80();
extern "C" void fn_004a2150();
// FUNCTION: ROBLOXSTUDIO 0x004a0b20
extern "C" __declspec(naked) void asm_004a0b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp word ptr [esi + 8], 0x6e }
	__asm { mov edi, ecx }
	__asm { jne L_004a0b70 }
	__asm { lea eax, [esi + 0xc] }
	__asm { push eax }
	__asm { call fn_004a0b80 }
	__asm { test eax, eax }
	__asm { js L_004a0b62 }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x18] }
	__asm { call fn_004a2150 }
	__asm { add eax, 0x30 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11bc8] }
	__asm { add esp, 0xc }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004a0b62: }
	__asm { call dword ptr [g_00e11bc4] }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004a0b70: }
	__asm { push esi }
	__asm { call dword ptr [g_00e12c54] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11bc4[];
extern "C" char g_00e11bc8[];
extern "C" char g_00e12c54[];
extern "C" void fn_0043a6e0();
extern "C" void fn_004a1810();
// FUNCTION: ROBLOXSTUDIO 0x004a17b0
extern "C" __declspec(naked) void asm_004a17b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp word ptr [esi + 8], 0x6e }
	__asm { mov edi, ecx }
	__asm { jne L_004a17fd }
	__asm { lea eax, [esi + 0xc] }
	__asm { push eax }
	__asm { call fn_004a1810 }
	__asm { test eax, eax }
	__asm { js L_004a17ef }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x18] }
	__asm { call fn_0043a6e0 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11bc8] }
	__asm { add esp, 0xc }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004a17ef: }
	__asm { call dword ptr [g_00e11bc4] }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004a17fd: }
	__asm { push esi }
	__asm { call dword ptr [g_00e12c54] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10ef8[];
extern "C" char g_00e12c84[];
// FUNCTION: ROBLOXSTUDIO 0x004a1810
extern "C" __declspec(naked) void asm_004a1810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push edi }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e12c84] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10ef8] }
	__asm { test al, al }
	__asm { je L_004a1868 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, 4 }
	__asm { cdq }
	__asm { and edx, 0x1f }
	__asm { lea ecx, [edx + eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { sub eax, 4 }
	__asm { cdq }
	__asm { and edx, 0x1f }
	__asm { add eax, edx }
	__asm { sar ecx, 5 }
	__asm { sar eax, 5 }
	__asm { lea eax, [eax + ecx*4] }
	__asm { test eax, eax }
	__asm { js L_004a1868 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov edx, dword ptr [ecx + 0xc] }
	__asm { sub edx, dword ptr [ecx + 8] }
	__asm { cmp eax, edx }
	__asm { jl L_004a186b }
	__asm { L_004a1868: }
	__asm { or eax, 0xffffffff }
	__asm { L_004a186b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" void fn_004a0c30();
// FUNCTION: ROBLOXSTUDIO 0x004a1d60
extern "C" __declspec(naked) void asm_004a1d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8832c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x14], 0 }
	__asm { jne L_004a1dde }
	__asm { push 0x24 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004a1da5 }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_004a0c30 }
	__asm { jmp L_004a1da7 }
	__asm { L_004a1da5: }
	__asm { xor eax, eax }
	__asm { L_004a1da7: }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push 0x1015448 }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0x1015448 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call dword ptr [g_00e110ac] }
	__asm { add esp, 0x14 }
	__asm { L_004a1dde: }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11008[];
extern "C" void fn_004a2730();
// FUNCTION: ROBLOXSTUDIO 0x004a2150
extern "C" __declspec(naked) void asm_004a2150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { js L_004a216a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax + 0xc] }
	__asm { sub edx, dword ptr [eax + 8] }
	__asm { cmp edi, edx }
	__asm { jl L_004a2187 }
	__asm { L_004a216a: }
	__asm { push 0x1c7 }
	__asm { push 0x1002fd0 }
	__asm { push 0x1002fbc }
	__asm { push 0x1002fa4 }
	__asm { call dword ptr [g_00e11008] }
	__asm { add esp, 0x10 }
	__asm { L_004a2187: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_004a219a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_004a2730 }
	__asm { L_004a219a: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add eax, edi }
	__asm { pop edi }
	__asm { mov eax, dword ptr [ecx + eax*4 + 0x14] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11024[];
extern "C" void fn_004a2300();
extern "C" void fn_004a2490();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004a21b0
extern "C" __declspec(naked) void asm_004a21b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7cbd0 }
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
	__asm { je L_004a21fd }
	__asm { sub esp, 8 }
	__asm { call fn_004a2300 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jmp L_004a220a }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 0 }
	__asm { dec dword ptr [eax + 0xc] }
	__asm { call fn_00cf67ec }
	__asm { L_004a21fd: }
	__asm { call dword ptr [g_00e11024] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { L_004a220a: }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004a2490 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11034[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x004a2430
extern "C" __declspec(naked) void asm_004a2430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { add esi, 5 }
	__asm { add ebx, 5 }
	__asm { lea esi, [ecx + esi*4] }
	__asm { lea ebx, [ecx + ebx*4] }
	__asm { cmp ebx, esi }
	__asm { je L_004a2475 }
	__asm { push edi }
	__asm { nop }
	__asm { L_004a2450: }
	__asm { mov edi, dword ptr [esi - 4] }
	__asm { sub esi, 4 }
	__asm { test edi, edi }
	__asm { je L_004a246d }
	__asm { lea ecx, [edi + 0x30] }
	__asm { call dword ptr [g_00e11110] }
	__asm { push edi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004a246d: }
	__asm { cmp esi, ebx }
	__asm { jne L_004a2450 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { L_004a2475: }
	__asm { push ecx }
	__asm { call dword ptr [g_00e11034] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e11b84[];
// FUNCTION: ROBLOXSTUDIO 0x004a2660
extern "C" __declspec(naked) void asm_004a2660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ccfc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0xc }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_004a26bc }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11b84] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0x101566c }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004a26bc: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e11008[];
extern "C" char g_00e11cdc[];
extern "C" char g_00e11ce0[];
extern "C" char g_00e12288[];
// FUNCTION: ROBLOXSTUDIO 0x004a29e0
extern "C" __declspec(naked) void asm_004a29e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7cb79 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e11ce0] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_004a2a1a }
	__asm { lea ebx, [edi + 8] }
	__asm { jmp L_004a2a36 }
	__asm { L_004a2a1a: }
	__asm { push 0x29 }
	__asm { push 0x10157a0 }
	__asm { push 0x1015830 }
	__asm { push 0x1015810 }
	__asm { xor ebx, ebx }
	__asm { call dword ptr [g_00e11008] }
	__asm { add esp, 0x10 }
	__asm { L_004a2a36: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { call dword ptr [g_00e12288] }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { call dword ptr [g_00e11cdc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10d6c[];
extern "C" char g_00e10f00[];
extern "C" char g_00e123b8[];
extern "C" void fn_0093d8c0();
extern "C" void fn_0093d9a0();
// FUNCTION: ROBLOXSTUDIO 0x004a3b90
extern "C" __declspec(naked) void asm_004a3b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_004a3bcb }
	__asm { call fn_0093d8c0 }
	__asm { mov byte ptr [esi + 0x30], al }
	__asm { test al, al }
	__asm { jne L_004a3bb2 }
	__asm { push 1 }
	__asm { call fn_0093d9a0 }
	__asm { add esp, 4 }
	__asm { L_004a3bb2: }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { call dword ptr [g_00e10d6c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e123b8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004a3bcb: }
	__asm { movzx eax, byte ptr [esi + 0x30] }
	__asm { push eax }
	__asm { call fn_0093d9a0 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { add esp, 4 }
	__asm { call dword ptr [g_00e10f00] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e123b8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e809e4[];
extern "C" char g_0131c5b4[];
extern "C" char g_0131c5b8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004a42b0
extern "C" __declspec(naked) void asm_004a42b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ceae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_00e809e4], 0 }
	__asm { jne L_004a42e5 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004a42e5: }
	__asm { push 0x4a4760 }
	__asm { push 0x131c5bc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c5b8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004a432f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c5b8], eax }
	__asm { push 0xe809e4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c5b4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004a432f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c5b4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x004a43f0
extern "C" __declspec(naked) void asm_004a43f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ecx, dword ptr [g_00e10508] }
	__asm { xor ebx, ebx }
	__asm { L_004a4405: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_004a4410 }
	__asm { add esi, -0x20 }
	__asm { jmp L_004a4412 }
	__asm { L_004a4410: }
	__asm { xor esi, esi }
	__asm { L_004a4412: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [edi], eax }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_004a442a }
	__asm { push dword ptr [esi] }
	__asm { call ecx }
	__asm { mov ecx, dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004a442a: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call ecx }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [g_00e10508] }
	__asm { dec dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { inc ebx }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_004a4405 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131c5b4[];
extern "C" char g_0131c5b8[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x004a4760
extern "C" __declspec(naked) void asm_004a4760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7ceae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c5b8] }
	__asm { test al, 1 }
	__asm { jne L_004a47a2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c5b8], eax }
	__asm { push 0xe809e4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c5b4], eax }
	__asm { L_004a47a2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e809e4[];
extern "C" char g_0131c480[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004a47b0
extern "C" __declspec(naked) void asm_004a47b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d0fe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131c480] }
	__asm { test al, 1 }
	__asm { jne L_004a481c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c480], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { push dword ptr [g_00e809e4] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131c488 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddd860 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_004a481c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131c488 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c470[];
extern "C" char g_0131c474[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x004a4ab0
extern "C" __declspec(naked) void asm_004a4ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7cece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c470] }
	__asm { test al, 1 }
	__asm { jne L_004a4aea }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c470], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_0131c474], eax }
	__asm { L_004a4aea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004a4b00
extern "C" __declspec(naked) void asm_004a4b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ce90 }
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
	__asm { je L_004a4b59 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3ca38 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004a4b5b }
	__asm { L_004a4b59: }
	__asm { xor eax, eax }
	__asm { L_004a4b5b: }
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

extern "C" char g_0131eb88[];
extern "C" void fn_004a4c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004a4c30
extern "C" __declspec(naked) void asm_004a4c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7579e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_004a4c72 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_004a4c72: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131eb8c }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004781c0();
extern "C" void fn_004a5a90();
extern "C" void fn_004ed7a0();
// FUNCTION: ROBLOXSTUDIO 0x004a5010
extern "C" __declspec(naked) void asm_004a5010()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push edi }
	__asm { cmp dword ptr [eax + 0x3c], 0 }
	__asm { je L_004a5055 }
	__asm { mov edi, edi }
	__asm { L_004a5020: }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { je L_004a502e }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { call fn_004781c0 }
	__asm { L_004a502e: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [esi - 4] }
	__asm { push esi }
	__asm { call fn_004ed7a0 }
	__asm { test al, al }
	__asm { je L_004a505b }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_004a5a90 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { cmp dword ptr [eax + 0x3c], 0 }
	__asm { jne L_004a5020 }
	__asm { L_004a5055: }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_004a505b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_004781c0();
extern "C" void fn_004a5d70();
// FUNCTION: ROBLOXSTUDIO 0x004a61d0
extern "C" __declspec(naked) void asm_004a61d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push edi }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { je L_004a61e9 }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { call fn_004781c0 }
	__asm { L_004a61e9: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { test eax, eax }
	__asm { jle L_004a61fe }
	__asm { L_004a61f6: }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { dec eax }
	__asm { jne L_004a61f6 }
	__asm { jmp L_004a6207 }
	__asm { L_004a61fe: }
	__asm { je L_004a6207 }
	__asm { neg eax }
	__asm { L_004a6202: }
	__asm { mov esi, dword ptr [esi] }
	__asm { dec eax }
	__asm { jne L_004a6202 }
	__asm { L_004a6207: }
	__asm { cmp dword ptr [ecx + 0x34], 1 }
	__asm { je L_004a6215 }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { call fn_004781c0 }
	__asm { L_004a6215: }
	__asm { cmp esi, dword ptr [ebx + 0xc] }
	__asm { je L_004a6224 }
	__asm { push dword ptr [esi - 4] }
	__asm { mov ecx, ebx }
	__asm { call fn_004a5d70 }
	__asm { L_004a6224: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10fdc[];
extern "C" void fn_004b12f0();
// FUNCTION: ROBLOXSTUDIO 0x004a6cf0
extern "C" __declspec(naked) void asm_004a6cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7eb62 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10fdc] }
	__asm { lea edx, [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_004b12f0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_004a6d5a }
	__asm { test al, 1 }
	__asm { jne L_004a6d5a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004a6d5a }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004a6d5a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
extern "C" void fn_004ae8f0();
// FUNCTION: ROBLOXSTUDIO 0x004a7e90
extern "C" __declspec(naked) void asm_004a7e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7e4f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 9 }
	__asm { mov esi, ecx }
	__asm { push 0x1016cb8 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x2c], 0xf }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { mov byte ptr [esp + 0x18], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x3c], 0 }
	__asm { call fn_004ae8f0 }
	__asm { cmp byte ptr [eax], 0 }
	__asm { mov byte ptr [esp + 8], 0 }
	__asm { setne bl }
	__asm { cmp dword ptr [esp + 0x24], 0x10 }
	__asm { jb L_004a7f0f }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004a7f0f: }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
extern "C" void fn_004ae9b0();
// FUNCTION: ROBLOXSTUDIO 0x004a8040
extern "C" __declspec(naked) void asm_004a8040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94658 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push 0x19 }
	__asm { mov esi, ecx }
	__asm { push 0x1016cc4 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004ae9b0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_004a80a7 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004a80a7: }
	__asm { cmp byte ptr [ebp - 0x14], 0 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { lea eax, [ebp - 0x13] }
	__asm { cmove eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [ebp - 0xd], 0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11110[];
extern "C" char g_00e125b4[];
// FUNCTION: ROBLOXSTUDIO 0x004aa4f0
extern "C" __declspec(naked) void asm_004aa4f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7dda0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { test eax, eax }
	__asm { je L_004aa53d }
	__asm { test al, 1 }
	__asm { jne L_004aa536 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x28] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004aa536 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004aa536: }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_004aa53d: }
	__asm { cmp dword ptr [esi + 0x1c], 0x10 }
	__asm { jb L_004aa54f }
	__asm { push dword ptr [esi + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004aa54f: }
	__asm { mov dword ptr [esi + 0x1c], 0xf }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { lea ecx, [esi + 4] }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e125b4] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004af8e0();
extern "C" void fn_004b6560();
// FUNCTION: ROBLOXSTUDIO 0x004ad9b0
extern "C" __declspec(naked) void asm_004ad9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7e3b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { sub esp, 0x1c }
	__asm { test ecx, ecx }
	__asm { jne L_004ad9eb }
	__asm { lea ecx, [esp + 4] }
	__asm { call fn_004b6560 }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { call fn_004af8e0 }
	__asm { L_004ad9eb: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x14] }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004adfe0();
extern "C" void fn_004b3270();
// FUNCTION: ROBLOXSTUDIO 0x004adba0
extern "C" __declspec(naked) void asm_004adba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_004adbe1 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_004adbe1 }
	__asm { sub edi, ecx }
	__asm { sar edi, 3 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_004adbc9 }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_004adfe0 }
	__asm { L_004adbc9: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea eax, [eax + edi*8] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_004b3270 }
	__asm { add dword ptr [esi + 4], 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004adbe1: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_004adbee }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_004adfe0 }
	__asm { L_004adbee: }
	__asm { push edi }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_004b3270 }
	__asm { add dword ptr [esi + 4], 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_004ae260();
// FUNCTION: ROBLOXSTUDIO 0x004adfe0
extern "C" __declspec(naked) void asm_004adfe0()
{
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { sar eax, 3 }
	__asm { cmp eax, 1 }
	__asm { jae L_004ae041 }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov edi, 0x1fffffff }
	__asm { sar esi, 3 }
	__asm { mov eax, edi }
	__asm { sub eax, esi }
	__asm { cmp eax, 1 }
	__asm { jae L_004ae012 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_004ae012: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { inc esi }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub edi, eax }
	__asm { cmp edi, edx }
	__asm { pop edi }
	__asm { jae L_004ae034 }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { cmovb edx, esi }
	__asm { push edx }
	__asm { call fn_004ae260 }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_004ae034: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { cmovb edx, esi }
	__asm { push edx }
	__asm { call fn_004ae260 }
	__asm { L_004ae041: }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_00403070();
extern "C" void fn_004b1ea0();
// FUNCTION: ROBLOXSTUDIO 0x004ae420
extern "C" __declspec(naked) void asm_004ae420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movzx eax, byte ptr [esi] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_004ae434 }
	__asm { lea ebx, [eax + 1] }
	__asm { jmp L_004ae436 }
	__asm { L_004ae434: }
	__asm { xor ebx, ebx }
	__asm { L_004ae436: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edx, dword ptr [ecx + 0x14] }
	__asm { cmp edx, 0x10 }
	__asm { jb L_004ae446 }
	__asm { mov edi, dword ptr [ecx] }
	__asm { jmp L_004ae448 }
	__asm { L_004ae446: }
	__asm { mov edi, ecx }
	__asm { L_004ae448: }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { add eax, edi }
	__asm { pop edi }
	__asm { cmp edx, 0x10 }
	__asm { jb L_004ae457 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { jmp L_004ae459 }
	__asm { L_004ae457: }
	__asm { mov edx, ecx }
	__asm { L_004ae459: }
	__asm { push ebx }
	__asm { push ecx }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_00403070 }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_004b1ea0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0040c260();
// FUNCTION: ROBLOXSTUDIO 0x004af1b0
extern "C" __declspec(naked) void asm_004af1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esp + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { mov esi, ecx }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_004af208 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_004af1f5 }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_004af1f5: }
	__asm { mov eax, 0x1016450 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_004af208: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0040c260();
// FUNCTION: ROBLOXSTUDIO 0x004af5a0
extern "C" __declspec(naked) void asm_004af5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_004af5fc }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_004af5e9 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { L_004af5e9: }
	__asm { mov eax, 0x1016438 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_004af5fc: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x004afab0
extern "C" __declspec(naked) void asm_004afab0()
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
	__asm { mov dword ptr [esi], 0xe8455c }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi], 0xefb298 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test ecx, ecx }
	__asm { je L_004afb0f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_004afb0f: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xefb39c }
	__asm { mov dword ptr [esi + 0x14], 0xefb3a8 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" void fn_004b0b80();
// FUNCTION: ROBLOXSTUDIO 0x004b0450
extern "C" __declspec(naked) void asm_004b0450()
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
	__asm { push 0x34 }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_004b04b9 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [esi - 0x30] }
	__asm { push eax }
	__asm { call fn_004b0b80 }
	__asm { test eax, eax }
	__asm { je L_004b04b9 }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add eax, 0x28 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { add eax, ecx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b04b9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x004b09e0
extern "C" __declspec(naked) void asm_004b09e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_004b0a37 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10508] }
	__asm { je L_004b0a20 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { lea edi, [ecx + eax*4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_004b0a09 }
	__asm { L_004b0a04: }
	__asm { lea ecx, [eax - 4] }
	__asm { jmp L_004b0a0b }
	__asm { L_004b0a09: }
	__asm { xor ecx, ecx }
	__asm { L_004b0a0b: }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { push ecx }
	__asm { mov dword ptr [edi], eax }
	__asm { call ebx }
	__asm { dec dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_004b0a04 }
	__asm { pop edi }
	__asm { L_004b0a20: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { pop ebx }
	__asm { L_004b0a37: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00402c40();
extern "C" void fn_00402ce0();
extern "C" void fn_004b2320();
// FUNCTION: ROBLOXSTUDIO 0x004b0f30
extern "C" __declspec(naked) void asm_004b0f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_004b0f6d }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00402c40 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [esp + 0xc] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_00402ce0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004b0f6d: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_004b0fa3 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { lea eax, [esp + 0xc] }
	__asm { cmp edx, ecx }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [esp + 0xc], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_00402c40 }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_004b0fa3 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b2320 }
	__asm { L_004b0fa3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004b2390();
extern "C" void fn_004b2400();
extern "C" void fn_004b2490();
// FUNCTION: ROBLOXSTUDIO 0x004b0fb0
extern "C" __declspec(naked) void asm_004b0fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_004b0fe6 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004b2400 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [ebp + 8] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_004b2490 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004b0fe6: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_004b101a }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { cmp edx, ecx }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_004b2400 }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_004b101a }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b2390 }
	__asm { L_004b101a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004b2400();
extern "C" void fn_004b2490();
extern "C" void fn_004b2530();
// FUNCTION: ROBLOXSTUDIO 0x004b1030
extern "C" __declspec(naked) void asm_004b1030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_004b106d }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004b2400 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [esp + 0xc] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_004b2490 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004b106d: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_004b10a3 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { lea eax, [esp + 0xc] }
	__asm { cmp edx, ecx }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [esp + 0xc], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_004b2400 }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_004b10a3 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b2530 }
	__asm { L_004b10a3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004b2400();
extern "C" void fn_004b2490();
extern "C" void fn_004b25a0();
// FUNCTION: ROBLOXSTUDIO 0x004b18c0
extern "C" __declspec(naked) void asm_004b18c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_004b18fd }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004b2400 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [esp + 0xc] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_004b2490 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004b18fd: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_004b1933 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { lea eax, [esp + 0xc] }
	__asm { cmp edx, ecx }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [esp + 0xc], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_004b2400 }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_004b1933 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b25a0 }
	__asm { L_004b1933: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x004b1d80
extern "C" __declspec(naked) void asm_004b1d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e0c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_004b1df5 }
	__asm { cmp byte ptr [edi + 9], 0 }
	__asm { je L_004b1de9 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_004b1dc7 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_004b1dc7: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_004b1dd8 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004b1dd8: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_004b1de9: }
	__asm { push dword ptr [edi + 4] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004b1df5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_004b35b0();
extern "C" void fn_00825140();
// FUNCTION: ROBLOXSTUDIO 0x004b1e10
extern "C" __declspec(naked) void asm_004b1e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d922 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_004b35b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_004b1e69 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { L_004b1e69: }
	__asm { add esi, 0x18 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_004b1e89 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { L_004b1e89: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [edi + 9], 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402ce0();
// FUNCTION: ROBLOXSTUDIO 0x004b2320
extern "C" __declspec(naked) void asm_004b2320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_00402ce0 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_004b237f }
	__asm { nop }
	__asm { L_004b2340: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_004b234b }
	__asm { add esi, -0x5c }
	__asm { jmp L_004b234d }
	__asm { L_004b234b: }
	__asm { xor esi, esi }
	__asm { L_004b234d: }
	__asm { mov eax, dword ptr [esi + 0x60] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_004b2368 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x5c] }
	__asm { jmp L_004b237a }
	__asm { L_004b2368: }
	__asm { mov eax, dword ptr [esi + 0x5c] }
	__asm { lea edx, [esi + 0x5c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_004b237a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_004b2340 }
	__asm { L_004b237f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004b2490();
// FUNCTION: ROBLOXSTUDIO 0x004b2390
extern "C" __declspec(naked) void asm_004b2390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_004b2490 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_004b23ef }
	__asm { nop }
	__asm { L_004b23b0: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_004b23bb }
	__asm { add esi, -0x48 }
	__asm { jmp L_004b23bd }
	__asm { L_004b23bb: }
	__asm { xor esi, esi }
	__asm { L_004b23bd: }
	__asm { mov eax, dword ptr [esi + 0x4c] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_004b23d8 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x48] }
	__asm { jmp L_004b23ea }
	__asm { L_004b23d8: }
	__asm { mov eax, dword ptr [esi + 0x48] }
	__asm { lea edx, [esi + 0x48] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_004b23ea: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_004b23b0 }
	__asm { L_004b23ef: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00402ef0();
extern "C" void fn_004b2710();
// FUNCTION: ROBLOXSTUDIO 0x004b2490
extern "C" __declspec(naked) void asm_004b2490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e0e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea eax, [esi + 3] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea eax, [edi + 1] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_00402ef0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov ebx, dword ptr [ebp - 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_004b250b }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx + eax*4] }
	__asm { mov dword ptr [ebx + edi*4], eax }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004b250b: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { mov dword ptr [esi + 0x14], ebx }
	__asm { call fn_004b2710 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004b2490();
// FUNCTION: ROBLOXSTUDIO 0x004b2530
extern "C" __declspec(naked) void asm_004b2530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_004b2490 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_004b258f }
	__asm { nop }
	__asm { L_004b2550: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_004b255b }
	__asm { add esi, -0xc }
	__asm { jmp L_004b255d }
	__asm { L_004b255b: }
	__asm { xor esi, esi }
	__asm { L_004b255d: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_004b2578 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0xc] }
	__asm { jmp L_004b258a }
	__asm { L_004b2578: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { lea edx, [esi + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_004b258a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_004b2550 }
	__asm { L_004b258f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004b2490();
// FUNCTION: ROBLOXSTUDIO 0x004b25a0
extern "C" __declspec(naked) void asm_004b25a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_004b2490 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_004b25ff }
	__asm { nop }
	__asm { L_004b25c0: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_004b25cb }
	__asm { add esi, -0x28 }
	__asm { jmp L_004b25cd }
	__asm { L_004b25cb: }
	__asm { xor esi, esi }
	__asm { L_004b25cd: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_004b25e8 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x28] }
	__asm { jmp L_004b25fa }
	__asm { L_004b25e8: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { lea edx, [esi + 0x28] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_004b25fa: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_004b25c0 }
	__asm { L_004b25ff: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" void fn_004b4ba0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004b2850
extern "C" __declspec(naked) void asm_004b2850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d460 }
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
	__asm { je L_004b28a9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5babc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004b28ab }
	__asm { L_004b28a9: }
	__asm { xor eax, eax }
	__asm { L_004b28ab: }
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
	__asm { call fn_004b4ba0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10504[];
extern "C" void fn_004259f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004b28e0
extern "C" __declspec(naked) void asm_004b28e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d470 }
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
	__asm { je L_004b2939 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5baa4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004b293b }
	__asm { L_004b2939: }
	__asm { xor eax, eax }
	__asm { L_004b293b: }
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

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x004b2ab0
extern "C" __declspec(naked) void asm_004b2ab0()
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
	__asm { je L_004b2ad9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_004b2ade }
	__asm { L_004b2ad9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_004b2ade: }
	__asm { cmp ecx, 0x12be4a4 }
	__asm { je L_004b2b27 }
	__asm { test eax, eax }
	__asm { je L_004b2aee }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_004b2af3 }
	__asm { L_004b2aee: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_004b2af3: }
	__asm { push 0x12be4a4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_004b2b27 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_004b2b27: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x004b2b40
extern "C" __declspec(naked) void asm_004b2b40()
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
	__asm { je L_004b2b69 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_004b2b6e }
	__asm { L_004b2b69: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_004b2b6e: }
	__asm { cmp ecx, 0x12bdfcc }
	__asm { je L_004b2bb7 }
	__asm { test eax, eax }
	__asm { je L_004b2b7e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_004b2b83 }
	__asm { L_004b2b7e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_004b2b83: }
	__asm { push 0x12bdfcc }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_004b2bb7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_004b2bb7: }
	__asm { mov al, byte ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" void fn_004b5210();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004b2bd0
extern "C" __declspec(naked) void asm_004b2bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d480 }
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
	__asm { je L_004b2c29 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0x101641c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004b2c2b }
	__asm { L_004b2c29: }
	__asm { xor eax, eax }
	__asm { L_004b2c2b: }
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
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_004b2c5a }
	__asm { mov ecx, esi }
	__asm { call fn_004b5210 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004b2c5a: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x004b3990
extern "C" __declspec(naked) void asm_004b3990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e0c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_004b39c9 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_004b39c9: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_004b39da }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004b39da: }
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

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x004b3ee0
extern "C" __declspec(naked) void asm_004b3ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7e028 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { jne L_004b3f31 }
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
	__asm { L_004b3f31: }
	__asm { push dword ptr [eax + 0x20] }
	__asm { add eax, 8 }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x004b41a0
extern "C" __declspec(naked) void asm_004b41a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_004b41e9 }
	__asm { cmp eax, 1 }
	__asm { je L_004b41e9 }
	__asm { cmp eax, 2 }
	__asm { je L_004b41f7 }
	__asm { cmp eax, 3 }
	__asm { jne L_004b41d9 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12cc460 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b41d9: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12cc460 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b41e9: }
	__asm { test esi, esi }
	__asm { je L_004b41f7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_004b41f7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x004b4200
extern "C" __declspec(naked) void asm_004b4200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_004b4249 }
	__asm { cmp eax, 1 }
	__asm { je L_004b4249 }
	__asm { cmp eax, 2 }
	__asm { je L_004b4257 }
	__asm { cmp eax, 3 }
	__asm { jne L_004b4239 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12cc080 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b4239: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12cc080 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b4249: }
	__asm { test esi, esi }
	__asm { je L_004b4257 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_004b4257: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x004b4260
extern "C" __declspec(naked) void asm_004b4260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_004b42a9 }
	__asm { cmp eax, 1 }
	__asm { je L_004b42a9 }
	__asm { cmp eax, 2 }
	__asm { je L_004b42b7 }
	__asm { cmp eax, 3 }
	__asm { jne L_004b4299 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12cc0c0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b4299: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12cc0c0 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b42a9: }
	__asm { test esi, esi }
	__asm { je L_004b42b7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_004b42b7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x004b42c0
extern "C" __declspec(naked) void asm_004b42c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_004b4309 }
	__asm { cmp eax, 1 }
	__asm { je L_004b4309 }
	__asm { cmp eax, 2 }
	__asm { je L_004b431d }
	__asm { cmp eax, 3 }
	__asm { jne L_004b42f9 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12cbd50 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b42f9: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12cbd50 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b4309: }
	__asm { test esi, esi }
	__asm { je L_004b431d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_004b431d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x004b4770
extern "C" __declspec(naked) void asm_004b4770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_004b47b9 }
	__asm { cmp eax, 1 }
	__asm { je L_004b47b9 }
	__asm { cmp eax, 2 }
	__asm { je L_004b47d3 }
	__asm { cmp eax, 3 }
	__asm { jne L_004b47a9 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12cc338 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b47a9: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12cc338 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b47b9: }
	__asm { test esi, esi }
	__asm { je L_004b47d3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_004b47d3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x004b47e0
extern "C" __declspec(naked) void asm_004b47e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_004b4829 }
	__asm { cmp eax, 1 }
	__asm { je L_004b4829 }
	__asm { cmp eax, 2 }
	__asm { je L_004b4843 }
	__asm { cmp eax, 3 }
	__asm { jne L_004b4819 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12cc3d0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b4819: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12cc3d0 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b4829: }
	__asm { test esi, esi }
	__asm { je L_004b4843 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_004b4843: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00422570();
extern "C" void fn_004b5780();
// FUNCTION: ROBLOXSTUDIO 0x004b5080
extern "C" __declspec(naked) void asm_004b5080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d598 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00422570 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { call fn_004b5780 }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_004b50f0 }
	__asm { test al, 1 }
	__asm { jne L_004b50f0 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004b50f0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004b50f0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_004b2400();
extern "C" void fn_004b2490();
extern "C" void fn_004b5350();
// FUNCTION: ROBLOXSTUDIO 0x004b5110
extern "C" __declspec(naked) void asm_004b5110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_004b5146 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004b2400 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [ebp + 8] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_004b2490 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004b5146: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_004b517a }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { cmp edx, ecx }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_004b2400 }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_004b517a }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b5350 }
	__asm { L_004b517a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x004b52e0
extern "C" __declspec(naked) void asm_004b52e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7e028 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { sub esp, 0xc }
	__asm { test edx, edx }
	__asm { jne L_004b532c }
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
	__asm { L_004b532c: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ecx + 8] }
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

extern "C" void fn_004b2490();
// FUNCTION: ROBLOXSTUDIO 0x004b5350
extern "C" __declspec(naked) void asm_004b5350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_004b2490 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_004b53af }
	__asm { nop }
	__asm { L_004b5370: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_004b537b }
	__asm { add esi, -4 }
	__asm { jmp L_004b537d }
	__asm { L_004b537b: }
	__asm { xor esi, esi }
	__asm { L_004b537d: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_004b5398 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { jmp L_004b53aa }
	__asm { L_004b5398: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea edx, [esi + 4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_004b53aa: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_004b5370 }
	__asm { L_004b53af: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x004b5ae0
extern "C" __declspec(naked) void asm_004b5ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d8b9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_004b5b5d }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_004b5b56 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edi + 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_004b5b56: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { pop edi }
	__asm { L_004b5b5d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_004b6020();
// FUNCTION: ROBLOXSTUDIO 0x004b6120
extern "C" __declspec(naked) void asm_004b6120()
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
	__asm { je L_004b6189 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [esi - 0x28] }
	__asm { push eax }
	__asm { call fn_004b6020 }
	__asm { test eax, eax }
	__asm { je L_004b6189 }
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
	__asm { L_004b6189: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x004b6410
extern "C" __declspec(naked) void asm_004b6410()
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
	__asm { mov dword ptr [esi], 0xe3b764 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_004b6450 }
	__asm { add edi, 0xc }
	__asm { jmp L_004b6452 }
	__asm { L_004b6450: }
	__asm { xor edi, edi }
	__asm { L_004b6452: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_004b6468 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_004b6468: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe75ff4 }
	__asm { mov dword ptr [esi + 0xc], 0xe76000 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10528[];
extern "C" char g_00e131a4[];
extern "C" void fn_0040f980();
// FUNCTION: ROBLOXSTUDIO 0x004b6560
extern "C" __declspec(naked) void asm_004b6560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7e4f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e131a4] }
	__asm { mov edi, eax }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov dword ptr [esp + 0x14], 4 }
	__asm { mov dword ptr [esp + 0x18], edi }
	__asm { call fn_0040f980 }
	__asm { mov dword ptr [esp + 0x3c], 0 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_004b65b4 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_004b65b4: }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10528] }
	__asm { cmp dword ptr [esp + 0x2c], 0x10 }
	__asm { mov dword ptr [esi], 0xe3b74c }
	__asm { jb L_004b65df }
	__asm { push dword ptr [esp + 0x18] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004b65df: }
	__asm { mov ecx, dword ptr [esp + 0x34] }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov dword ptr [esi + 0xc], 4 }
	__asm { mov dword ptr [esi], 0xefb298 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c754[];
extern "C" void fn_0053f860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004b67c0
extern "C" __declspec(naked) void asm_004b67c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94f9e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131c754] }
	__asm { test al, 1 }
	__asm { jne L_004b6803 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c754], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0053f860 }
	__asm { push 0xddd980 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_004b6803: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131c748 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131eb88[];
extern "C" char g_0131ebac[];
extern "C" void fn_004a4c90();
extern "C" void fn_00511470();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004b6e40
extern "C" __declspec(naked) void asm_004b6e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7579e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { test al, 1 }
	__asm { jne L_004b6e92 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x14], 0xffffffff }
	__asm { L_004b6e92: }
	__asm { mov eax, dword ptr [g_0131ebac] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { cmp esi, eax }
	__asm { je L_004b6eb3 }
	__asm { mov edi, edi }
	__asm { L_004b6ea0: }
	__asm { mov ecx, dword ptr [esi - 0xc] }
	__asm { call fn_00511470 }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { cmp esi, dword ptr [g_0131ebac] }
	__asm { jne L_004b6ea0 }
	__asm { L_004b6eb3: }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10cb0[];
extern "C" char g_00e110e4[];
extern "C" char g_01318f8a[];
extern "C" void fn_00455380();
extern "C" void fn_0056ed60();
extern "C" void fn_00846f90();
extern "C" void fn_00848ef0();
// FUNCTION: ROBLOXSTUDIO 0x004b74d0
extern "C" __declspec(naked) void asm_004b74d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd804b1 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [g_01318f8a], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_004b7566 }
	__asm { call fn_00455380 }
	__asm { test eax, eax }
	__asm { je L_004b7566 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00455380 }
	__asm { add esp, 4 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { push eax }
	__asm { call fn_00846f90 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { call fn_00455380 }
	__asm { mov edx, eax }
	__asm { lea ecx, [esp + 8] }
	__asm { call fn_0056ed60 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xb8] }
	__asm { mov byte ptr [esp + 0x20], 1 }
	__asm { call dword ptr [g_00e10cb0] }
	__asm { lea ecx, [esp + 8] }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { call dword ptr [g_00e110e4] }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { call fn_00848ef0 }
	__asm { L_004b7566: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" void fn_004c58b0();
extern "C" void fn_00520890();
// FUNCTION: ROBLOXSTUDIO 0x004bb070
extern "C" __declspec(naked) void asm_004bb070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd788c9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x1018230 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004c58b0 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { test esi, esi }
	__asm { je L_004bb0cb }
	__asm { mov ecx, esi }
	__asm { call fn_00520890 }
	__asm { L_004bb0cb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10b40[];
extern "C" char g_00e10b54[];
extern "C" char g_00e10b58[];
extern "C" char g_00e11108[];
// FUNCTION: ROBLOXSTUDIO 0x004bb0e0
extern "C" __declspec(naked) void asm_004bb0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8ac63 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { lea edx, [ecx + 0x94] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [edx] }
	__asm { push esi }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jne L_004bb135 }
	__asm { lea eax, [ecx + 0x98] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004bb135: }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e10b58] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10b40] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10b54] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00467900();
extern "C" void fn_004781c0();
extern "C" void fn_004782a0();
// FUNCTION: ROBLOXSTUDIO 0x004bd510
extern "C" __declspec(naked) void asm_004bd510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { je L_004bd52b }
	__asm { lea ecx, [esi + 0xc] }
	__asm { call fn_004781c0 }
	__asm { L_004bd52b: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc] }
	__asm { call fn_00467900 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { pop esi }
	__asm { cmp ecx, eax }
	__asm { jne L_004bd568 }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { call fn_004782a0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax - 4], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_004bd568: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10ea8[];
extern "C" void fn_004cc2e0();
// FUNCTION: ROBLOXSTUDIO 0x004c8f50
extern "C" __declspec(naked) void asm_004c8f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { jne L_004c8f7d }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { lea eax, [edx + 1] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jg L_004c8f7d }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + edx*4 + 0x10], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { inc dword ptr [eax + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004c8f7d: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push 4 }
	__asm { inc eax }
	__asm { push eax }
	__asm { push 0x14 }
	__asm { call dword ptr [g_00e10ea8] }
	__asm { add esp, 0x10 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { push dword ptr [eax + 8] }
	__asm { call fn_004cc2e0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ecx + eax*4 + 0x10], esi }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop esi }
	__asm { inc dword ptr [eax + 8] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f74[];
// FUNCTION: ROBLOXSTUDIO 0x004c9040
extern "C" __declspec(naked) void asm_004c9040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 8] }
	__asm { add edi, 5 }
	__asm { add esi, 5 }
	__asm { lea edi, [ecx + edi*4] }
	__asm { lea esi, [ecx + esi*4] }
	__asm { cmp esi, edi }
	__asm { je L_004c9075 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { L_004c9061: }
	__asm { sub esi, 4 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10f74] }
	__asm { test al, al }
	__asm { jne L_004c9082 }
	__asm { cmp esi, edi }
	__asm { jne L_004c9061 }
	__asm { L_004c9075: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [eax], 0 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004c9082: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [eax], 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0040c260();
// FUNCTION: ROBLOXSTUDIO 0x004c9ed0
extern "C" __declspec(naked) void asm_004c9ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_004c9f38 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_004c9f25 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_004c9f25: }
	__asm { mov eax, 0x1017af4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_004c9f38: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_0040c260();
// FUNCTION: ROBLOXSTUDIO 0x004c9f50
extern "C" __declspec(naked) void asm_004c9f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_004c9fb8 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_004c9fa5 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_004c9fa5: }
	__asm { mov eax, 0x1017aec }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_004c9fb8: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_0040c260();
// FUNCTION: ROBLOXSTUDIO 0x004c9fd0
extern "C" __declspec(naked) void asm_004c9fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_004ca038 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_004ca025 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_004ca025: }
	__asm { mov eax, 0x1017ae4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_004ca038: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_0040c260();
// FUNCTION: ROBLOXSTUDIO 0x004ca050
extern "C" __declspec(naked) void asm_004ca050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_004ca0b8 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_004ca0a5 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_004ca0a5: }
	__asm { mov eax, 0x1017adc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_004ca0b8: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_004ce240();
extern "C" void fn_00980c50();
// FUNCTION: ROBLOXSTUDIO 0x004ca4c0
extern "C" __declspec(naked) void asm_004ca4c0()
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
	__asm { push 0xa8 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004ca50f }
	__asm { mov ecx, eax }
	__asm { call fn_00980c50 }
	__asm { mov esi, eax }
	__asm { jmp L_004ca511 }
	__asm { L_004ca50f: }
	__asm { xor esi, esi }
	__asm { L_004ca511: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_004ce240 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004ca542 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_004ca542 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_004ca542: }
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
extern "C" void fn_004ce2d0();
extern "C" void fn_00980d50();
// FUNCTION: ROBLOXSTUDIO 0x004ca560
extern "C" __declspec(naked) void asm_004ca560()
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
	__asm { push 0xb0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004ca5af }
	__asm { mov ecx, eax }
	__asm { call fn_00980d50 }
	__asm { mov esi, eax }
	__asm { jmp L_004ca5b1 }
	__asm { L_004ca5af: }
	__asm { xor esi, esi }
	__asm { L_004ca5b1: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_004ce2d0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004ca5e2 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_004ca5e2 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_004ca5e2: }
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
extern "C" void fn_004ce360();
extern "C" void fn_009818b0();
// FUNCTION: ROBLOXSTUDIO 0x004ca600
extern "C" __declspec(naked) void asm_004ca600()
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
	__asm { push 0x310 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004ca64f }
	__asm { mov ecx, eax }
	__asm { call fn_009818b0 }
	__asm { mov esi, eax }
	__asm { jmp L_004ca651 }
	__asm { L_004ca64f: }
	__asm { xor esi, esi }
	__asm { L_004ca651: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_004ce360 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004ca682 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_004ca682 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_004ca682: }
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
extern "C" void fn_004ce3f0();
extern "C" void fn_00982270();
// FUNCTION: ROBLOXSTUDIO 0x004ca6a0
extern "C" __declspec(naked) void asm_004ca6a0()
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
	__asm { push 0x360 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004ca6ef }
	__asm { mov ecx, eax }
	__asm { call fn_00982270 }
	__asm { mov esi, eax }
	__asm { jmp L_004ca6f1 }
	__asm { L_004ca6ef: }
	__asm { xor esi, esi }
	__asm { L_004ca6f1: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_004ce3f0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004ca722 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_004ca722 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_004ca722: }
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
extern "C" void fn_004ce480();
extern "C" void fn_00983070();
// FUNCTION: ROBLOXSTUDIO 0x004ca740
extern "C" __declspec(naked) void asm_004ca740()
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
	__asm { push 0x2a4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004ca78f }
	__asm { mov ecx, eax }
	__asm { call fn_00983070 }
	__asm { mov esi, eax }
	__asm { jmp L_004ca791 }
	__asm { L_004ca78f: }
	__asm { xor esi, esi }
	__asm { L_004ca791: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_004ce480 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004ca7c2 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_004ca7c2 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_004ca7c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e88940[];
extern "C" char g_0131c6a8[];
extern "C" char g_0131c6ac[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004ca7e0
extern "C" __declspec(naked) void asm_004ca7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7f1ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e88940], 0 }
	__asm { jne L_004ca814 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004ca814: }
	__asm { push 0x4cd200 }
	__asm { push 0x131c730 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c6a8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004ca85e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c6a8], eax }
	__asm { push 0xe88940 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c6ac], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004ca85e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c6ac] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e8893c[];
extern "C" char g_0131c6a0[];
extern "C" char g_0131c6a4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004ca880
extern "C" __declspec(naked) void asm_004ca880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7eebe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e8893c], 0 }
	__asm { jne L_004ca8b4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004ca8b4: }
	__asm { push 0x4cd250 }
	__asm { push 0x131c728 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c6a0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004ca8fe }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c6a0], eax }
	__asm { push 0xe8893c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c6a4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004ca8fe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c6a4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e88db8[];
extern "C" char g_0131ec28[];
extern "C" char g_0131ec2c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004ca920
extern "C" __declspec(naked) void asm_004ca920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7eede }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e88db8], 0 }
	__asm { jne L_004ca954 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004ca954: }
	__asm { push 0x4cd2a0 }
	__asm { push 0x131c720 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131ec28] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004ca99e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ec28], eax }
	__asm { push 0xe88db8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131ec2c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004ca99e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131ec2c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e89264[];
extern "C" char g_0131ec30[];
extern "C" char g_0131ec34[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004ca9c0
extern "C" __declspec(naked) void asm_004ca9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7ef1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e89264], 0 }
	__asm { jne L_004ca9f4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004ca9f4: }
	__asm { push 0x4cd2f0 }
	__asm { push 0x131c718 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131ec30] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004caa3e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ec30], eax }
	__asm { push 0xe89264 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131ec34], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004caa3e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131ec34] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e894e0[];
extern "C" char g_0131ec38[];
extern "C" char g_0131ec3c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004caa60
extern "C" __declspec(naked) void asm_004caa60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7eefe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e894e0], 0 }
	__asm { jne L_004caa94 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004caa94: }
	__asm { push 0x4cd340 }
	__asm { push 0x131c710 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131ec38] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004caade }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ec38], eax }
	__asm { push 0xe894e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131ec3c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004caade: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131ec3c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10500[];
extern "C" void fn_004cc2e0();
// FUNCTION: ROBLOXSTUDIO 0x004cc260
extern "C" __declspec(naked) void asm_004cc260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { sub edi, eax }
	__asm { sub esi, eax }
	__asm { sub edi, 0x10 }
	__asm { sub esi, 0x10 }
	__asm { sar edi, 2 }
	__asm { sar esi, 2 }
	__asm { mov ecx, edi }
	__asm { sub ecx, esi }
	__asm { cmp dword ptr [eax], 1 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { je L_004cc29b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax + 8] }
	__asm { call fn_004cc2e0 }
	__asm { L_004cc29b: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { lea esi, [esi*4 + 0x10] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { sub eax, edi }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { add edi, 4 }
	__asm { lea eax, [ecx + edi*4] }
	__asm { push eax }
	__asm { lea eax, [esi + ecx] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub dword ptr [eax + 8], ecx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0xc }
	__asm { add eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131c630[];
extern "C" char g_0131c63c[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x004cd9f0
extern "C" __declspec(naked) void asm_004cd9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7efbe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c63c] }
	__asm { test al, 1 }
	__asm { jne L_004cda2a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c63c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_0131c630], eax }
	__asm { L_004cda2a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c620[];
extern "C" char g_0131c624[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x004cdbb0
extern "C" __declspec(naked) void asm_004cdbb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7f08e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c620] }
	__asm { test al, 1 }
	__asm { jne L_004cdbea }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c620], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_0131c624], eax }
	__asm { L_004cdbea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c618[];
extern "C" char g_0131c61c[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x004cde40
extern "C" __declspec(naked) void asm_004cde40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7f02e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c61c] }
	__asm { test al, 1 }
	__asm { jne L_004cde7a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c61c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_0131c618], eax }
	__asm { L_004cde7a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004ce240
extern "C" __declspec(naked) void asm_004ce240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ecd0 }
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
	__asm { je L_004ce299 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe35058 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004ce29b }
	__asm { L_004ce299: }
	__asm { xor eax, eax }
	__asm { L_004ce29b: }
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
// FUNCTION: ROBLOXSTUDIO 0x004ce2d0
extern "C" __declspec(naked) void asm_004ce2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ece0 }
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
	__asm { je L_004ce329 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe35070 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004ce32b }
	__asm { L_004ce329: }
	__asm { xor eax, eax }
	__asm { L_004ce32b: }
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
// FUNCTION: ROBLOXSTUDIO 0x004ce360
extern "C" __declspec(naked) void asm_004ce360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ecf0 }
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
	__asm { je L_004ce3b9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b370 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004ce3bb }
	__asm { L_004ce3b9: }
	__asm { xor eax, eax }
	__asm { L_004ce3bb: }
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
// FUNCTION: ROBLOXSTUDIO 0x004ce3f0
extern "C" __declspec(naked) void asm_004ce3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ed20 }
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
	__asm { je L_004ce449 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b388 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004ce44b }
	__asm { L_004ce449: }
	__asm { xor eax, eax }
	__asm { L_004ce44b: }
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
extern "C" char g_00e131b8[];
extern "C" void fn_004a6c90();
// FUNCTION: ROBLOXSTUDIO 0x004cea40
extern "C" __declspec(naked) void asm_004cea40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd95d69 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a6c90 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e131b8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_004cea8d }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004cea8d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x004ceaa0
extern "C" __declspec(naked) void asm_004ceaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_004ceae9 }
	__asm { cmp eax, 1 }
	__asm { je L_004ceae9 }
	__asm { cmp eax, 2 }
	__asm { je L_004ceb03 }
	__asm { cmp eax, 3 }
	__asm { jne L_004cead9 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12ccd48 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004cead9: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12ccd48 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004ceae9: }
	__asm { test esi, esi }
	__asm { je L_004ceb03 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_004ceb03: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x004ceb10
extern "C" __declspec(naked) void asm_004ceb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_004ceb59 }
	__asm { cmp eax, 1 }
	__asm { je L_004ceb59 }
	__asm { cmp eax, 2 }
	__asm { je L_004ceb73 }
	__asm { cmp eax, 3 }
	__asm { jne L_004ceb49 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12ccc38 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004ceb49: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12ccc38 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004ceb59: }
	__asm { test esi, esi }
	__asm { je L_004ceb73 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_004ceb73: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x004ceb80
extern "C" __declspec(naked) void asm_004ceb80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_004cebc9 }
	__asm { cmp eax, 1 }
	__asm { je L_004cebc9 }
	__asm { cmp eax, 2 }
	__asm { je L_004cebe3 }
	__asm { cmp eax, 3 }
	__asm { jne L_004cebb9 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12cccb8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004cebb9: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12cccb8 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004cebc9: }
	__asm { test esi, esi }
	__asm { je L_004cebe3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_004cebe3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x004cebf0
extern "C" __declspec(naked) void asm_004cebf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_004cec39 }
	__asm { cmp eax, 1 }
	__asm { je L_004cec39 }
	__asm { cmp eax, 2 }
	__asm { je L_004cec53 }
	__asm { cmp eax, 3 }
	__asm { jne L_004cec29 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12ccab0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004cec29: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12ccab0 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004cec39: }
	__asm { test esi, esi }
	__asm { je L_004cec53 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_004cec53: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131ec58[];
extern "C" char g_0131ec5c[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x004ced80
extern "C" __declspec(naked) void asm_004ced80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7f06e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131ec58] }
	__asm { test al, 1 }
	__asm { jne L_004cedba }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ec58], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_0131ec5c], eax }
	__asm { L_004cedba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131ec60[];
extern "C" char g_0131ec64[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x004cedd0
extern "C" __declspec(naked) void asm_004cedd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7f00e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131ec60] }
	__asm { test al, 1 }
	__asm { jne L_004cee0a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ec60], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_0131ec64], eax }
	__asm { L_004cee0a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004cee20
extern "C" __declspec(naked) void asm_004cee20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ed90 }
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
	__asm { je L_004cee79 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0x1017aa0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004cee7b }
	__asm { L_004cee79: }
	__asm { xor eax, eax }
	__asm { L_004cee7b: }
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
	__asm { je L_004cee9f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_004cee9f: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0131ec68[];
extern "C" char g_0131ec6c[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x004ceeb0
extern "C" __declspec(naked) void asm_004ceeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7efde }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131ec68] }
	__asm { test al, 1 }
	__asm { jne L_004ceeea }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ec68], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_0131ec6c], eax }
	__asm { L_004ceeea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c654[];
extern "C" char g_0131c658[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x004cf4e0
extern "C" __declspec(naked) void asm_004cf4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7ef5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c654] }
	__asm { test al, 1 }
	__asm { jne L_004cf522 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c654], eax }
	__asm { push 0xe89728 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c658], eax }
	__asm { L_004cf522: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e89728[];
extern "C" char g_0131c654[];
extern "C" char g_0131c658[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004cf530
extern "C" __declspec(naked) void asm_004cf530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ef5e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_00e89728], 0 }
	__asm { jne L_004cf565 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004cf565: }
	__asm { push 0x4cf4e0 }
	__asm { push 0x131c65c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c654] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004cf5af }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c654], eax }
	__asm { push 0xe89728 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c658], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004cf5af: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c658] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c668[];
extern "C" char g_0131c66c[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x004cfab0
extern "C" __declspec(naked) void asm_004cfab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7ef3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c66c] }
	__asm { test al, 1 }
	__asm { jne L_004cfaf2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c66c], eax }
	__asm { push 0xe89afc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c668], eax }
	__asm { L_004cfaf2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e89afc[];
extern "C" char g_0131c668[];
extern "C" char g_0131c66c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004cfb00
extern "C" __declspec(naked) void asm_004cfb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ef3e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_00e89afc], 0 }
	__asm { jne L_004cfb35 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004cfb35: }
	__asm { push 0x4cfab0 }
	__asm { push 0x131c670 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c66c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004cfb7f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c66c], eax }
	__asm { push 0xe89afc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c668], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004cfb7f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c668] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c67c[];
extern "C" char g_0131c680[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x004d0080
extern "C" __declspec(naked) void asm_004d0080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7ef7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c67c] }
	__asm { test al, 1 }
	__asm { jne L_004d00c2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c67c], eax }
	__asm { push 0xe899bc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c680], eax }
	__asm { L_004d00c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e899bc[];
extern "C" char g_0131c67c[];
extern "C" char g_0131c680[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004d00d0
extern "C" __declspec(naked) void asm_004d00d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ef7e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_00e899bc], 0 }
	__asm { jne L_004d0105 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004d0105: }
	__asm { push 0x4d0080 }
	__asm { push 0x131c684 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c67c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004d014f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c67c], eax }
	__asm { push 0xe899bc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c680], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004d014f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c680] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c690[];
extern "C" char g_0131c694[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x004d0650
extern "C" __declspec(naked) void asm_004d0650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7f1ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c690] }
	__asm { test al, 1 }
	__asm { jne L_004d0692 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c690], eax }
	__asm { push 0xe873ec }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c694], eax }
	__asm { L_004d0692: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e873ec[];
extern "C" char g_0131c690[];
extern "C" char g_0131c694[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004d06a0
extern "C" __declspec(naked) void asm_004d06a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7f1ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_00e873ec], 0 }
	__asm { jne L_004d06d5 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004d06d5: }
	__asm { push 0x4d0650 }
	__asm { push 0x131c698 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c690] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004d071f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c690], eax }
	__asm { push 0xe873ec }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c694], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004d071f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c694] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004d07a0
extern "C" __declspec(naked) void asm_004d07a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ed00 }
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
	__asm { je L_004d07f9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3c998 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004d07fb }
	__asm { L_004d07f9: }
	__asm { xor eax, eax }
	__asm { L_004d07fb: }
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
extern "C" void fn_004d07a0();
extern "C" void fn_0096f780();
// FUNCTION: ROBLOXSTUDIO 0x004d0830
extern "C" __declspec(naked) void asm_004d0830()
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
	__asm { push 0x1f8 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004d087f }
	__asm { mov ecx, eax }
	__asm { call fn_0096f780 }
	__asm { mov esi, eax }
	__asm { jmp L_004d0881 }
	__asm { L_004d087f: }
	__asm { xor esi, esi }
	__asm { L_004d0881: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_004d07a0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004d08b2 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_004d08b2 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_004d08b2: }
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
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004d08d0
extern "C" __declspec(naked) void asm_004d08d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ed30 }
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
	__asm { je L_004d0929 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe56140 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004d092b }
	__asm { L_004d0929: }
	__asm { xor eax, eax }
	__asm { L_004d092b: }
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
extern "C" void fn_004d08d0();
extern "C" void fn_009843e0();
// FUNCTION: ROBLOXSTUDIO 0x004d0960
extern "C" __declspec(naked) void asm_004d0960()
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
	__asm { push 0x68 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004d09ac }
	__asm { mov ecx, eax }
	__asm { call fn_009843e0 }
	__asm { mov esi, eax }
	__asm { jmp L_004d09ae }
	__asm { L_004d09ac: }
	__asm { xor esi, esi }
	__asm { L_004d09ae: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_004d08d0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004d09df }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_004d09df }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_004d09df: }
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
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004d0a00
extern "C" __declspec(naked) void asm_004d0a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ed50 }
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
	__asm { je L_004d0a59 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe56128 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004d0a5b }
	__asm { L_004d0a59: }
	__asm { xor eax, eax }
	__asm { L_004d0a5b: }
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
extern "C" void fn_004d0a00();
extern "C" void fn_00984170();
// FUNCTION: ROBLOXSTUDIO 0x004d0a90
extern "C" __declspec(naked) void asm_004d0a90()
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
	__asm { push 0x68 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004d0adc }
	__asm { mov ecx, eax }
	__asm { call fn_00984170 }
	__asm { mov esi, eax }
	__asm { jmp L_004d0ade }
	__asm { L_004d0adc: }
	__asm { xor esi, esi }
	__asm { L_004d0ade: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_004d0a00 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004d0b0f }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_004d0b0f }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_004d0b0f: }
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
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004d0b30
extern "C" __declspec(naked) void asm_004d0b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ed40 }
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
	__asm { je L_004d0b89 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe561e8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004d0b8b }
	__asm { L_004d0b89: }
	__asm { xor eax, eax }
	__asm { L_004d0b8b: }
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
extern "C" void fn_004d0b30();
extern "C" void fn_00983d90();
// FUNCTION: ROBLOXSTUDIO 0x004d0bc0
extern "C" __declspec(naked) void asm_004d0bc0()
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
	__asm { push 0x6c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004d0c0c }
	__asm { mov ecx, eax }
	__asm { call fn_00983d90 }
	__asm { mov esi, eax }
	__asm { jmp L_004d0c0e }
	__asm { L_004d0c0c: }
	__asm { xor esi, esi }
	__asm { L_004d0c0e: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_004d0b30 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004d0c3f }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_004d0c3f }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_004d0c3f: }
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
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004d0d60
extern "C" __declspec(naked) void asm_004d0d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ed60 }
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
	__asm { je L_004d0db9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe561b8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004d0dbb }
	__asm { L_004d0db9: }
	__asm { xor eax, eax }
	__asm { L_004d0dbb: }
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
extern "C" void fn_004d0d60();
extern "C" void fn_009745b0();
// FUNCTION: ROBLOXSTUDIO 0x004d0df0
extern "C" __declspec(naked) void asm_004d0df0()
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
	__asm { push 0x370 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004d0e3f }
	__asm { mov ecx, eax }
	__asm { call fn_009745b0 }
	__asm { mov esi, eax }
	__asm { jmp L_004d0e41 }
	__asm { L_004d0e3f: }
	__asm { xor esi, esi }
	__asm { L_004d0e41: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_004d0d60 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004d0e72 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_004d0e72 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_004d0e72: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c6ec[];
extern "C" char g_0131c6f0[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x004d1210
extern "C" __declspec(naked) void asm_004d1210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7ef9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c6ec] }
	__asm { test al, 1 }
	__asm { jne L_004d1252 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c6ec], eax }
	__asm { push 0xe878f4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c6f0], eax }
	__asm { L_004d1252: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e878f4[];
extern "C" char g_0131c6ec[];
extern "C" char g_0131c6f0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004d1260
extern "C" __declspec(naked) void asm_004d1260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ef9e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_00e878f4], 0 }
	__asm { jne L_004d1295 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004d1295: }
	__asm { push 0x4d1210 }
	__asm { push 0x131c6f4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c6ec] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004d12df }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c6ec], eax }
	__asm { push 0xe878f4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c6f0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004d12df: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c6f0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c700[];
extern "C" char g_0131c704[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x004d17e0
extern "C" __declspec(naked) void asm_004d17e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7f18e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c700] }
	__asm { test al, 1 }
	__asm { jne L_004d1822 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c700], eax }
	__asm { push 0xe4fb08 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c704], eax }
	__asm { L_004d1822: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e4fb08[];
extern "C" char g_0131c700[];
extern "C" char g_0131c704[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004d1830
extern "C" __declspec(naked) void asm_004d1830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7f18e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_00e4fb08], 0 }
	__asm { jne L_004d1865 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004d1865: }
	__asm { push 0x4d17e0 }
	__asm { push 0x131c708 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c700] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004d18af }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c700], eax }
	__asm { push 0xe4fb08 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c704], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004d18af: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c704] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004d1930
extern "C" __declspec(naked) void asm_004d1930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ecc0 }
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
	__asm { je L_004d1989 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe517a8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004d198b }
	__asm { L_004d1989: }
	__asm { xor eax, eax }
	__asm { L_004d198b: }
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
extern "C" char g_00e10528[];
extern "C" void fn_00410540();
extern "C" void fn_00410e50();
// FUNCTION: ROBLOXSTUDIO 0x004d1e40
extern "C" __declspec(naked) void asm_004d1e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7f6b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov dword ptr [esp + 8], 0 }
	__asm { test edx, edx }
	__asm { jne L_004d1e9d }
	__asm { lea eax, [esp + 4] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 8], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [esp + 0xc], 0xe19198 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x40], 0 }
	__asm { call fn_00410540 }
	__asm { L_004d1e9d: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ecx + 8] }
	__asm { push eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { push eax }
	__asm { call fn_00410e50 }
	__asm { cmp dword ptr [esp + 0x2c], 0x10 }
	__asm { jb L_004d1ed1 }
	__asm { push dword ptr [esp + 0x18] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004d1ed1: }
	__asm { mov ecx, dword ptr [esp + 0x34] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x004d21e0
extern "C" __declspec(naked) void asm_004d21e0()
{
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov edx, dword ptr [edx] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 8] }
	__asm { cmp esi, dword ptr [edx + 8] }
	__asm { jne L_004d223f }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { mov edx, dword ptr [edx + 0xc] }
	__asm { sub esi, 4 }
	__asm { jb L_004d2209 }
	__asm { L_004d21f8: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [edx] }
	__asm { jne L_004d220e }
	__asm { add ecx, 4 }
	__asm { add edx, 4 }
	__asm { sub esi, 4 }
	__asm { jae L_004d21f8 }
	__asm { L_004d2209: }
	__asm { cmp esi, -4 }
	__asm { je L_004d223b }
	__asm { L_004d220e: }
	__asm { mov al, byte ptr [ecx] }
	__asm { cmp al, byte ptr [edx] }
	__asm { jne L_004d223f }
	__asm { cmp esi, -3 }
	__asm { je L_004d223b }
	__asm { mov al, byte ptr [ecx + 1] }
	__asm { cmp al, byte ptr [edx + 1] }
	__asm { jne L_004d223f }
	__asm { cmp esi, -2 }
	__asm { je L_004d223b }
	__asm { mov al, byte ptr [ecx + 2] }
	__asm { cmp al, byte ptr [edx + 2] }
	__asm { jne L_004d223f }
	__asm { cmp esi, -1 }
	__asm { je L_004d223b }
	__asm { mov al, byte ptr [ecx + 3] }
	__asm { cmp al, byte ptr [edx + 3] }
	__asm { jne L_004d223f }
	__asm { L_004d223b: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_004d223f: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0040f890();
extern "C" void fn_00410e50();
extern "C" void fn_00460030();
// FUNCTION: ROBLOXSTUDIO 0x004d2250
extern "C" __declspec(naked) void asm_004d2250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx + 0x10] }
	__asm { sub eax, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [ecx + 0x10], eax }
	__asm { jbe L_004d2296 }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { sub eax, dword ptr [ecx + 0x10] }
	__asm { cmp eax, esi }
	__asm { jb L_004d2296 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edx }
	__asm { push 0 }
	__asm { call fn_00460030 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00410e50 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004d2296: }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov ecx, edx }
	__asm { call fn_0040f890 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00410e50 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" char g_012f8720[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x004d22c0
extern "C" __declspec(naked) void asm_004d22c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd809d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f8720] }
	__asm { sub esp, 0x14 }
	__asm { test eax, eax }
	__asm { jne L_004d230f }
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
	__asm { L_004d230f: }
	__asm { and eax, 0xfffffffe }
	__asm { push ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x12f8728 }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e125cc[];
extern "C" char g_00e125d0[];
// FUNCTION: ROBLOXSTUDIO 0x004d3060
extern "C" __declspec(naked) void asm_004d3060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd76859 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e125cc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e125d0] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_004d30ae }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004d30ae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e119ec[];
extern "C" char g_00e11a20[];
extern "C" char g_00e125cc[];
extern "C" void fn_004d3430();
// FUNCTION: ROBLOXSTUDIO 0x004d3230
extern "C" __declspec(naked) void asm_004d3230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd81c79 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea edi, [esi + 0x18] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e119ec] }
	__asm { test al, al }
	__asm { jne L_004d32a5 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e11a20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004d3430 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e125cc] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12bff48 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { L_004d32a5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11110[];
extern "C" char g_00e119e8[];
extern "C" char g_00e11a1c[];
extern "C" char g_00e1219c[];
extern "C" char g_00e12618[];
// FUNCTION: ROBLOXSTUDIO 0x004d3430
extern "C" __declspec(naked) void asm_004d3430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd88e39 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { lea edi, [esi + 0x18] }
	__asm { push edi }
	__asm { call dword ptr [g_00e119e8] }
	__asm { test al, al }
	__asm { jne L_004d349e }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { call dword ptr [g_00e11a1c] }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12618] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1219c] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_004d349e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
