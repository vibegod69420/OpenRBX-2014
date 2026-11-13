// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x006974a0
extern "C" __declspec(naked) void asm_006974a0()
{
	__asm { mov eax, dword ptr [ecx + 0x3c] }
	__asm { test eax, eax }
	__asm { je L_006974ab }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { ret }
	__asm { L_006974ab: }
	__asm { xor eax, eax }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006974b0
extern "C" __declspec(naked) void asm_006974b0()
{
	__asm { mov eax, dword ptr [ecx + 0x3c] }
	__asm { test eax, eax }
	__asm { je L_006974bb }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { ret }
	__asm { L_006974bb: }
	__asm { xor eax, eax }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006974c0
extern "C" __declspec(naked) void asm_006974c0()
{
	__asm { mov eax, dword ptr [ecx + 0x3c] }
	__asm { test eax, eax }
	__asm { je L_006974cb }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { ret }
	__asm { L_006974cb: }
	__asm { xor eax, eax }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006974d0
extern "C" __declspec(naked) void asm_006974d0()
{
	__asm { mov eax, dword ptr [ecx + 0x3c] }
	__asm { test eax, eax }
	__asm { je L_006974db }
	__asm { mov eax, dword ptr [eax + 0x30] }
	__asm { ret }
	__asm { L_006974db: }
	__asm { xor eax, eax }
	__asm { ret }
}

extern "C" void fn_00698250();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00698490
extern "C" __declspec(naked) void asm_00698490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { test esi, esi }
	__asm { je L_006984af }
	__asm { mov ecx, esi }
	__asm { call fn_00698250 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006984af: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006999b0
extern "C" __declspec(naked) void asm_006999b0()
{
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { cmp eax, dword ptr [ecx + 0x48] }
	__asm { jne L_006999c9 }
	__asm { mov eax, dword ptr [ecx + 0x50] }
	__asm { cmp eax, dword ptr [ecx + 0x54] }
	__asm { jne L_006999c9 }
	__asm { cmp dword ptr [ecx + 0x68], 0 }
	__asm { jne L_006999c9 }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_006999c9: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" void fn_006106e0();
// FUNCTION: ROBLOXSTUDIO 0x0069b5b0
extern "C" __declspec(naked) void asm_0069b5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0069b5cf }
	__asm { push dword ptr [eax + 0x34] }
	__asm { push dword ptr [eax + 0x30] }
	__asm { push dword ptr [eax + 0x2c] }
	__asm { call fn_006106e0 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0069b5cf: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006a9d70
extern "C" __declspec(naked) void asm_006a9d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, 0x20 }
	__asm { je L_006a9d82 }
	__asm { cmp al, 9 }
	__asm { je L_006a9d82 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a9d82: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006aa0a0
extern "C" __declspec(naked) void asm_006aa0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe42778 }
	__asm { je L_006aa0bb }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006aa0bb: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007cb0e0();
// FUNCTION: ROBLOXSTUDIO 0x006ad6a0
extern "C" __declspec(naked) void asm_006ad6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { je L_006ad6bf }
	__asm { push eax }
	__asm { add ecx, 0x210 }
	__asm { call fn_007cb0e0 }
	__asm { mov dword ptr [eax + 0x18], 2 }
	__asm { L_006ad6bf: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b0420
extern "C" __declspec(naked) void asm_006b0420()
{
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { test eax, eax }
	__asm { jne L_006b0430 }
	__asm { mov eax, 0x80004003 }
	__asm { ret 0xc }
	__asm { L_006b0430: }
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { mov dword ptr [eax], edx }
	__asm { xor eax, eax }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x006b13b0
extern "C" __declspec(naked) void asm_006b13b0()
{
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { test eax, eax }
	__asm { jne L_006b13c0 }
	__asm { mov eax, 0x80004003 }
	__asm { ret 8 }
	__asm { L_006b13c0: }
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [eax], edx }
	__asm { xor eax, eax }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b16d0
extern "C" __declspec(naked) void asm_006b16d0()
{
	__asm { cmp dword ptr [ecx + 0x9c], 0 }
	__asm { jne L_006b16e1 }
	__asm { mov eax, 0x80040209 }
	__asm { ret 4 }
	__asm { L_006b16e1: }
	__asm { mov eax, dword ptr [ecx + 0x9c] }
	__asm { mov edx, dword ptr [esp + 4] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push edx }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { call eax }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b1700
extern "C" __declspec(naked) void asm_006b1700()
{
	__asm { cmp dword ptr [ecx + 0x18], 0 }
	__asm { jne L_006b170c }
	__asm { mov eax, 0x80040209 }
	__asm { ret }
	__asm { L_006b170c: }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 0x38] }
	__asm { push eax }
	__asm { call edx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006b1760
extern "C" __declspec(naked) void asm_006b1760()
{
	__asm { cmp dword ptr [ecx + 0x18], 0 }
	__asm { jne L_006b176c }
	__asm { mov eax, 0x80040209 }
	__asm { ret }
	__asm { L_006b176c: }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 0x3c] }
	__asm { push eax }
	__asm { call edx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006b1780
extern "C" __declspec(naked) void asm_006b1780()
{
	__asm { cmp dword ptr [ecx + 0x18], 0 }
	__asm { jne L_006b178c }
	__asm { mov eax, 0x80040209 }
	__asm { ret }
	__asm { L_006b178c: }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 0x40] }
	__asm { push eax }
	__asm { call edx }
	__asm { ret }
}

extern "C" void fn_006b0880();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b1df0
extern "C" __declspec(naked) void asm_006b1df0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_006b0880 }
	__asm { test byte ptr [esp + 8], 1 }
	__asm { je L_006b1e08 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b1e08: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b2a90
extern "C" __declspec(naked) void asm_006b2a90()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { test eax, eax }
	__asm { jne L_006b2a9e }
	__asm { mov dword ptr [ecx + 0x20], eax }
	__asm { ret 4 }
	__asm { L_006b2a9e: }
	__asm { mov dword ptr [ecx + 0x20], 1 }
	__asm { mov dword ptr [ecx + 0x28], eax }
	__asm { ret 4 }
}

extern "C" char g_00e1012c[];
extern "C" char g_00e10188[];
extern "C" char g_00e10194[];
// FUNCTION: ROBLOXSTUDIO 0x006b2c60
extern "C" __declspec(naked) void asm_006b2c60()
{
	__asm { push esi }
	__asm { push 0 }
	__asm { add ecx, 0x14 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e1012c] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_006b2c83 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10188] }
	__asm { push esi }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_006b2c83: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006b2d20();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b3690
extern "C" __declspec(naked) void asm_006b3690()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_006b2d20 }
	__asm { test byte ptr [esp + 8], 1 }
	__asm { je L_006b36a8 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b36a8: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_006b3090();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b3760
extern "C" __declspec(naked) void asm_006b3760()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_006b3090 }
	__asm { test byte ptr [esp + 8], 1 }
	__asm { je L_006b3778 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b3778: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e10194[];
// FUNCTION: ROBLOXSTUDIO 0x006b37c0
extern "C" __declspec(naked) void asm_006b37c0()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_006b37cd }
	__asm { push eax }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_006b37cd: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006b3af0
extern "C" __declspec(naked) void asm_006b3af0()
{
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { movzx eax, word ptr [ecx + 0xe] }
	__asm { imul eax, dword ptr [ecx + 4] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { add eax, 0x1f }
	__asm { shr eax, 3 }
	__asm { and eax, 0x1ffffffc }
	__asm { imul eax, edx }
	__asm { test edx, edx }
	__asm { jge L_006b3b13 }
	__asm { neg eax }
	__asm { L_006b3b13: }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b3df0
extern "C" __declspec(naked) void asm_006b3df0()
{
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_006b3e00 }
	__asm { mov eax, 0x80004003 }
	__asm { ret 8 }
	__asm { L_006b3e00: }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { push eax }
	__asm { call edx }
	__asm { xor eax, eax }
	__asm { ret 8 }
}

extern "C" char g_00e100d4[];
// FUNCTION: ROBLOXSTUDIO 0x006b3e20
extern "C" __declspec(naked) void asm_006b3e20()
{
	__asm { push esi }
	__asm { push 0x12de5ec }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e100d4] }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { test eax, eax }
	__asm { jne L_006b3e38 }
	__asm { mov eax, esi }
	__asm { L_006b3e38: }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 8 }
}

extern "C" char g_00e100d4[];
// FUNCTION: ROBLOXSTUDIO 0x006b3ea0
extern "C" __declspec(naked) void asm_006b3ea0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { add esi, 8 }
	__asm { push esi }
	__asm { call dword ptr [g_00e100d4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop esi }
	__asm { cmp eax, 1 }
	__asm { ja L_006b3ebc }
	__asm { mov eax, 1 }
	__asm { L_006b3ebc: }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b6460
extern "C" __declspec(naked) void asm_006b6460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ax, word ptr [ebp + 8] }
	__asm { cmp ax, 0x2f }
	__asm { je L_006b6477 }
	__asm { cmp ax, 0x5c }
	__asm { je L_006b6477 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b6477: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b8840
extern "C" __declspec(naked) void asm_006b8840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe43740 }
	__asm { je L_006b885b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b885b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006bbdc0
extern "C" __declspec(naked) void asm_006bbdc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [ebp + 8] }
	__asm { fstp qword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { and eax, 0x7ff00000 }
	__asm { xor ecx, ecx }
	__asm { jne L_006bbde0 }
	__asm { cmp eax, 0x7ff00000 }
	__asm { jne L_006bbde0 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006bbde0: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_006bca00();
// FUNCTION: ROBLOXSTUDIO 0x006bca40
extern "C" __declspec(naked) void asm_006bca40()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_006bca55 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { test eax, eax }
	__asm { je fn_006bca00 }
	__asm { L_006bca55: }
	__asm { ret }
}

extern "C" char g_012de788[];
extern "C" void fn_006bd060();
// FUNCTION: ROBLOXSTUDIO 0x006bcfa0
extern "C" __declspec(naked) void asm_006bcfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [g_012de788], 0 }
	__asm { jle L_006bcfc0 }
	__asm { call fn_006bd060 }
	__asm { add eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [g_012de788] }
	__asm { jle L_006bcfc0 }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006bcfc0: }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006be8f0
extern "C" __declspec(naked) void asm_006be8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4397c }
	__asm { je L_006be90b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006be90b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006c01a0();
// FUNCTION: ROBLOXSTUDIO 0x006c0170
extern "C" __declspec(naked) void asm_006c0170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_006c0184 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_006c01a0 }
	__asm { L_006c0184: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11dce70 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006c2a00();
// FUNCTION: ROBLOXSTUDIO 0x006c2710
extern "C" __declspec(naked) void asm_006c2710()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x220] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0x224] }
	__asm { cmp esi, edi }
	__asm { je L_006c2730 }
	__asm { L_006c2722: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_006c2a00 }
	__asm { add esi, 8 }
	__asm { cmp esi, edi }
	__asm { jne L_006c2722 }
	__asm { L_006c2730: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006c31e0();
// FUNCTION: ROBLOXSTUDIO 0x006c31b0
extern "C" __declspec(naked) void asm_006c31b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_006c31c4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_006c31e0 }
	__asm { L_006c31c4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11dd1f0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006c32c0();
// FUNCTION: ROBLOXSTUDIO 0x006c34f0
extern "C" __declspec(naked) void asm_006c34f0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x220] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0x224] }
	__asm { cmp esi, edi }
	__asm { je L_006c3510 }
	__asm { L_006c3502: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_006c32c0 }
	__asm { add esi, 8 }
	__asm { cmp esi, edi }
	__asm { jne L_006c3502 }
	__asm { L_006c3510: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006cf3e0
extern "C" __declspec(naked) void asm_006cf3e0()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { test eax, eax }
	__asm { je L_006cf3ef }
	__asm { mov eax, dword ptr [eax + 0xe0] }
	__asm { ret }
	__asm { L_006cf3ef: }
	__asm { xor eax, eax }
	__asm { ret }
}

extern "C" char g_00e46868[];
extern "C" char g_01038214[];
// FUNCTION: ROBLOXSTUDIO 0x006d9340
extern "C" __declspec(naked) void asm_006d9340()
{
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [esp], eax }
	__asm { fild dword ptr [esp] }
	__asm { test eax, eax }
	__asm { jns L_006d9356 }
	__asm { fadd dword ptr [g_01038214] }
	__asm { L_006d9356: }
	__asm { fmul dword ptr [g_00e46868] }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006dd000
extern "C" __declspec(naked) void asm_006dd000()
{
	__asm { test byte ptr [esp + 4], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4687c }
	__asm { je L_006dd019 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006dd019: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006dd020
extern "C" __declspec(naked) void asm_006dd020()
{
	__asm { test byte ptr [esp + 4], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe46884 }
	__asm { je L_006dd039 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006dd039: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_006e8500();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006e88d0
extern "C" __declspec(naked) void asm_006e88d0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_006e8500 }
	__asm { test byte ptr [esp + 8], 1 }
	__asm { je L_006e88e8 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006e88e8: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_006ee7b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006f0cb0
extern "C" __declspec(naked) void asm_006f0cb0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_006ee7b0 }
	__asm { test byte ptr [esp + 8], 1 }
	__asm { je L_006f0cc8 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f0cc8: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_012dff90[];
extern "C" char g_012dff94[];
extern "C" char g_012dff98[];
// FUNCTION: ROBLOXSTUDIO 0x006f67b0
extern "C" __declspec(naked) void asm_006f67b0()
{
	__asm { mov eax, dword ptr [g_012dff98] }
	__asm { test al, 1 }
	__asm { jne L_006f67ce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dff98], eax }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012dff90], eax }
	__asm { mov word ptr [g_012dff94], ax }
	__asm { L_006f67ce: }
	__asm { mov eax, 0x12dff90 }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00700170
extern "C" __declspec(naked) void asm_00700170()
{
	__asm { test byte ptr [esp + 4], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe475fc }
	__asm { je L_00700189 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00700189: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_00708ae0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00708f50
extern "C" __declspec(naked) void asm_00708f50()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00708ae0 }
	__asm { test byte ptr [esp + 8], 1 }
	__asm { je L_00708f68 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00708f68: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_00708b90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00709090
extern "C" __declspec(naked) void asm_00709090()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00708b90 }
	__asm { test byte ptr [esp + 8], 1 }
	__asm { je L_007090a8 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007090a8: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_00717540();
// FUNCTION: ROBLOXSTUDIO 0x00717520
extern "C" __declspec(naked) void asm_00717520()
{
	__asm { cmp dword ptr [ecx + 0x30], 3 }
	__asm { jne L_00717530 }
	__asm { push ecx }
	__asm { call fn_00717540 }
	__asm { add esp, 4 }
	__asm { ret }
	__asm { L_00717530: }
	__asm { fldz }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007179f0
extern "C" __declspec(naked) void asm_007179f0()
{
	__asm { mov edx, dword ptr [ecx + 0x24] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { lea eax, [edx + esi] }
	__asm { cmp eax, dword ptr [ecx + 0x18] }
	__asm { jl L_00717a07 }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_00717a07: }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { add eax, edx }
	__asm { movzx eax, byte ptr [eax + esi] }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_0071ae40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0071af70
extern "C" __declspec(naked) void asm_0071af70()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_0071ae40 }
	__asm { test byte ptr [esp + 8], 1 }
	__asm { je L_0071af88 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0071af88: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_0071aec0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0071af90
extern "C" __declspec(naked) void asm_0071af90()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_0071aec0 }
	__asm { test byte ptr [esp + 8], 1 }
	__asm { je L_0071afa8 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0071afa8: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_00717980();
// FUNCTION: ROBLOXSTUDIO 0x0071b3e0
extern "C" __declspec(naked) void asm_0071b3e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00717980 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { cmp ecx, dword ptr [esi + 0x18] }
	__asm { jl L_0071b3f5 }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0071b3f5: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { pop esi }
	__asm { movzx eax, byte ptr [eax + ecx] }
	__asm { ret }
}

extern "C" void fn_0071c420();
// FUNCTION: ROBLOXSTUDIO 0x0071c320
extern "C" __declspec(naked) void asm_0071c320()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { jbe L_0071c341 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0071c332 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0071c332: }
	__asm { push eax }
	__asm { push 0xe4820c }
	__asm { push ecx }
	__asm { call fn_0071c420 }
	__asm { add esp, 0xc }
	__asm { L_0071c341: }
	__asm { ret 4 }
}

extern "C" char g_00e4b680[];
// FUNCTION: ROBLOXSTUDIO 0x0072a990
extern "C" __declspec(naked) void asm_0072a990()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { test eax, eax }
	__asm { js L_0072a9a8 }
	__asm { cmp eax, dword ptr [g_00e4b680] }
	__asm { jge L_0072a9a8 }
	__asm { mov eax, dword ptr [eax*4 + 0xe4b688] }
	__asm { ret }
	__asm { L_0072a9a8: }
	__asm { xor eax, eax }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00731d90
extern "C" __declspec(naked) void asm_00731d90()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { test eax, eax }
	__asm { je L_00731da3 }
	__asm { or dword ptr [eax + 0x70], 0x2001000 }
	__asm { and dword ptr [eax + 0x6c], 0xffffffbf }
	__asm { L_00731da3: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007371a0
extern "C" __declspec(naked) void asm_007371a0()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { test eax, eax }
	__asm { je L_007371ac }
	__asm { or dword ptr [eax + 0x70], 1 }
	__asm { L_007371ac: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00737260
extern "C" __declspec(naked) void asm_00737260()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { test eax, eax }
	__asm { je L_00737275 }
	__asm { cmp byte ptr [eax + 0x127], 0x10 }
	__asm { jne L_00737275 }
	__asm { or dword ptr [eax + 0x70], 0x10 }
	__asm { L_00737275: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00737280
extern "C" __declspec(naked) void asm_00737280()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { test eax, eax }
	__asm { je L_0073729c }
	__asm { cmp byte ptr [eax + 0x127], 8 }
	__asm { jae L_0073729c }
	__asm { or dword ptr [eax + 0x70], 4 }
	__asm { mov byte ptr [eax + 0x128], 8 }
	__asm { L_0073729c: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007372a0
extern "C" __declspec(naked) void asm_007372a0()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { test eax, eax }
	__asm { je L_007372b8 }
	__asm { cmp byte ptr [eax + 0x127], 8 }
	__asm { jae L_007372b8 }
	__asm { or dword ptr [eax + 0x70], 0x10000 }
	__asm { L_007372b8: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007372c0
extern "C" __declspec(naked) void asm_007372c0()
{
	__asm { mov edx, dword ptr [esp + 4] }
	__asm { test edx, edx }
	__asm { je L_007372e1 }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { or dword ptr [edx + 0x70], 8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx + 0x181], eax }
	__asm { mov al, byte ptr [ecx + 4] }
	__asm { mov byte ptr [edx + 0x185], al }
	__asm { L_007372e1: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007372f0
extern "C" __declspec(naked) void asm_007372f0()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { test eax, eax }
	__asm { je L_0073730b }
	__asm { cmp byte ptr [eax + 0x123], 0 }
	__asm { je L_0073730b }
	__asm { or dword ptr [eax + 0x70], 2 }
	__asm { mov eax, 7 }
	__asm { ret }
	__asm { L_0073730b: }
	__asm { mov eax, 1 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007379a0
extern "C" __declspec(naked) void asm_007379a0()
{
	__asm { cmp dword ptr [esp + 4], 0 }
	__asm { je L_007379b7 }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { test eax, eax }
	__asm { je L_007379b7 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { and eax, dword ptr [esp + 0xc] }
	__asm { ret }
	__asm { L_007379b7: }
	__asm { xor eax, eax }
	__asm { ret }
}

extern "C" char g_00e104f4[];
// FUNCTION: ROBLOXSTUDIO 0x00739b00
extern "C" __declspec(naked) void asm_00739b00()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { test eax, eax }
	__asm { je L_00739b12 }
	__asm { mov dword ptr [esp + 4], eax }
	__asm { jmp dword ptr [g_00e104f4] }
	__asm { L_00739b12: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0073a4a0
extern "C" __declspec(naked) void asm_0073a4a0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_0073a4b5 }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073a4b5: }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0076f050
extern "C" __declspec(naked) void asm_0076f050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_0076f067 }
	__asm { cmp dword ptr [ebp + 8], 2 }
	__asm { setne al }
	__asm { mov byte ptr [ecx + 0x11], al }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0076f067: }
	__asm { cmp dword ptr [ebp + 8], 1 }
	__asm { sete al }
	__asm { mov byte ptr [ecx + 0x11], al }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00773d80();
extern "C" void fn_00774940();
// FUNCTION: ROBLOXSTUDIO 0x00774920
extern "C" __declspec(naked) void asm_00774920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { call fn_00773d80 }
	__asm { test al, al }
	__asm { je L_00774932 }
	__asm { pop ebp }
	__asm { jmp fn_00774940 }
	__asm { L_00774932: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00775cd0
extern "C" __declspec(naked) void asm_00775cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, 0x11df140 }
	__asm { je L_00775cec }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, 0x11df140 }
	__asm { call fn_00403540 }
	__asm { L_00775cec: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007760f0();
// FUNCTION: ROBLOXSTUDIO 0x007760c0
extern "C" __declspec(naked) void asm_007760c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_007760d4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_007760f0 }
	__asm { L_007760d4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11df158 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101c0[];
extern "C" void fn_0077a660();
// FUNCTION: ROBLOXSTUDIO 0x0077a610
extern "C" __declspec(naked) void asm_0077a610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { add ecx, 0x1c }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_0077a61e }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_0077a61e: }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_0077a628 }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0077a628: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { call dword ptr [g_00e101c0] }
	__asm { push eax }
	__asm { call fn_0077a660 }
}

extern "C" char g_00e101c0[];
extern "C" void fn_0077a660();
// FUNCTION: ROBLOXSTUDIO 0x0077a640
extern "C" __declspec(naked) void asm_0077a640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_0077a64b }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0077a64b: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e101c0] }
	__asm { push eax }
	__asm { call fn_0077a660 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00783910
extern "C" __declspec(naked) void asm_00783910()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x30], 0x10 }
	__asm { jb L_00783924 }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00783924: }
	__asm { mov dword ptr [esi + 0x30], 0xf }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov byte ptr [esi + 0x1c], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00783940
extern "C" __declspec(naked) void asm_00783940()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x18], 0x10 }
	__asm { jb L_00783954 }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00783954: }
	__asm { mov dword ptr [esi + 0x18], 0xf }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00785220
extern "C" __declspec(naked) void asm_00785220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4faac }
	__asm { je L_0078523b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0078523b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00783a60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007852a0
extern "C" __declspec(naked) void asm_007852a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00783a60 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x5c], 0xe1822c }
	__asm { je L_007852c1 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007852c1: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00783ac0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007852d0
extern "C" __declspec(naked) void asm_007852d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00783ac0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x2c], 0xe1822c }
	__asm { je L_007852f1 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007852f1: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00785430
extern "C" __declspec(naked) void asm_00785430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4fa2c }
	__asm { je L_0078544b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0078544b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007856d0
extern "C" __declspec(naked) void asm_007856d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4f850 }
	__asm { je L_007856eb }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007856eb: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007857e0
extern "C" __declspec(naked) void asm_007857e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4f020 }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00785801 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00785801: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00785810
extern "C" __declspec(naked) void asm_00785810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4efc8 }
	__asm { je L_0078582b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0078582b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00785880
extern "C" __declspec(naked) void asm_00785880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4efdc }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_007858a1 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007858a1: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00786a60
extern "C" __declspec(naked) void asm_00786a60()
{
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00786a6e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00786a6e: }
	__asm { ret }
}

extern "C" void fn_0078ce80();
// FUNCTION: ROBLOXSTUDIO 0x0078cf60
extern "C" __declspec(naked) void asm_0078cf60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, 0x12e1e0c }
	__asm { je L_0078cf78 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_0078ce80 }
	__asm { L_0078cf78: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0078f140();
// FUNCTION: ROBLOXSTUDIO 0x0078f0e0
extern "C" __declspec(naked) void asm_0078f0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0078f0f4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_0078f140 }
	__asm { L_0078f0f4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11e57d8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0078f1b0();
// FUNCTION: ROBLOXSTUDIO 0x0078f110
extern "C" __declspec(naked) void asm_0078f110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0078f124 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_0078f1b0 }
	__asm { L_0078f124: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11e5870 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00792cf0
extern "C" __declspec(naked) void asm_00792cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00792d0b }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { nop }
	__asm { L_00792d00: }
	__asm { cmp dword ptr [eax + 0x10], ecx }
	__asm { je L_00792d0d }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { jne L_00792d00 }
	__asm { L_00792d0b: }
	__asm { xor eax, eax }
	__asm { L_00792d0d: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007a0f70
extern "C" __declspec(naked) void asm_007a0f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe52450 }
	__asm { je L_007a0f8b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007a0f8b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00426f50();
// FUNCTION: ROBLOXSTUDIO 0x007a29f0
extern "C" __declspec(naked) void asm_007a29f0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_007a2a05 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00426f50 }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { L_007a2a05: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012e0eb8[];
extern "C" void fn_007a7e90();
extern "C" void fn_008d9ca0();
// FUNCTION: ROBLOXSTUDIO 0x007a5bf0
extern "C" __declspec(naked) void asm_007a5bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax], 3 }
	__asm { jne L_007a5c04 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { pop ebp }
	__asm { jmp fn_008d9ca0 }
	__asm { L_007a5c04: }
	__asm { mov ecx, dword ptr [g_012e0eb8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007a7e90 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007a6660();
// FUNCTION: ROBLOXSTUDIO 0x007a63b0
extern "C" __declspec(naked) void asm_007a63b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_007a63c4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_007a6660 }
	__asm { L_007a63c4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11e81a8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007a6770();
// FUNCTION: ROBLOXSTUDIO 0x007a63e0
extern "C" __declspec(naked) void asm_007a63e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_007a63f4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_007a6770 }
	__asm { L_007a63f4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11e6c40 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007a67d0();
// FUNCTION: ROBLOXSTUDIO 0x007a6410
extern "C" __declspec(naked) void asm_007a6410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_007a6424 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_007a67d0 }
	__asm { L_007a6424: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11e6df0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007a6830();
// FUNCTION: ROBLOXSTUDIO 0x007a6480
extern "C" __declspec(naked) void asm_007a6480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_007a6494 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_007a6830 }
	__asm { L_007a6494: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11e7310 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007a6920();
// FUNCTION: ROBLOXSTUDIO 0x007a64b0
extern "C" __declspec(naked) void asm_007a64b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_007a64c4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_007a6920 }
	__asm { L_007a64c4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11e7220 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007b0cb0
extern "C" __declspec(naked) void asm_007b0cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe54b80 }
	__asm { je L_007b0ccb }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007b0ccb: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007b0e30
extern "C" __declspec(naked) void asm_007b0e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe54b88 }
	__asm { je L_007b0e4b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007b0e4b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007b0ee0
extern "C" __declspec(naked) void asm_007b0ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe33a38 }
	__asm { je L_007b0efb }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007b0efb: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x007b1070
extern "C" __declspec(naked) void asm_007b1070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test edx, edx }
	__asm { jne L_007b1087 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007b1087: }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4250();
// FUNCTION: ROBLOXSTUDIO 0x007b4150
extern "C" __declspec(naked) void asm_007b4150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_007b4164 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_007b4250 }
	__asm { L_007b4164: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11eb644 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b42d0();
// FUNCTION: ROBLOXSTUDIO 0x007b41c0
extern "C" __declspec(naked) void asm_007b41c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_007b41d4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_007b42d0 }
	__asm { L_007b41d4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11eb8e0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b43c0();
// FUNCTION: ROBLOXSTUDIO 0x007b41f0
extern "C" __declspec(naked) void asm_007b41f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_007b4204 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_007b43c0 }
	__asm { L_007b4204: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11eb7d8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b44b0();
// FUNCTION: ROBLOXSTUDIO 0x007b4220
extern "C" __declspec(naked) void asm_007b4220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_007b4234 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_007b44b0 }
	__asm { L_007b4234: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11eb668 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007bd790();
// FUNCTION: ROBLOXSTUDIO 0x007bd760
extern "C" __declspec(naked) void asm_007bd760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_007bd774 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_007bd790 }
	__asm { L_007bd774: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11ecef8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007c23c0
extern "C" __declspec(naked) void asm_007c23c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_007c23d9 }
	__asm { add ecx, 0x1c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp + 8], 1 }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax] }
	__asm { L_007c23d9: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x007c2d20
extern "C" __declspec(naked) void asm_007c2d20()
{
	__asm { cmp dword ptr [ecx + 0x64], 8 }
	__asm { jne L_007c2d36 }
	__asm { mov eax, dword ptr [ecx + 0x68] }
	__asm { cmp eax, 2 }
	__asm { je L_007c2d36 }
	__asm { cmp eax, 3 }
	__asm { je L_007c2d36 }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_007c2d36: }
	__asm { xor al, al }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007c2d40
extern "C" __declspec(naked) void asm_007c2d40()
{
	__asm { cmp dword ptr [ecx + 0x68], 0 }
	__asm { jne L_007c2d4f }
	__asm { cmp dword ptr [ecx + 0x64], 0 }
	__asm { jne L_007c2d4f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_007c2d4f: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x007c8250
extern "C" __declspec(naked) void asm_007c8250()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x11ef0a4 }
	__asm { jne L_007c825f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_007c825f: }
	__asm { push eax }
	__asm { mov ecx, 0x11ef0a4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c8bf0
extern "C" __declspec(naked) void asm_007c8bf0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_007c8c03 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c8c03: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_007b6ee0();
// FUNCTION: ROBLOXSTUDIO 0x007caf30
extern "C" __declspec(naked) void asm_007caf30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ecx + 0xa0], 0 }
	__asm { je L_007caf4b }
	__asm { cmp byte ptr [ecx + 0xa1], 0 }
	__asm { jne L_007caf4b }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007caf4b: }
	__asm { pop ebp }
	__asm { jmp fn_007b6ee0 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007d64f0
extern "C" __declspec(naked) void asm_007d64f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe33a28 }
	__asm { je L_007d650b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007d650b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x007d6b70
extern "C" __declspec(naked) void asm_007d6b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_007d6b87 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { L_007d6b87: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00823e30();
// FUNCTION: ROBLOXSTUDIO 0x00823e00
extern "C" __declspec(naked) void asm_00823e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00823e14 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00823e30 }
	__asm { L_00823e14: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11f1440 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011edc12[];
extern "C" char g_011edc13[];
// FUNCTION: ROBLOXSTUDIO 0x0082e5f0
extern "C" __declspec(naked) void asm_0082e5f0()
{
	__asm { cmp byte ptr [g_011edc12], 0 }
	__asm { je L_0082e605 }
	__asm { cmp byte ptr [g_011edc13], 0 }
	__asm { je L_0082e605 }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0082e605: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" void fn_009d8750();
extern "C" void fn_00a48380();
// FUNCTION: ROBLOXSTUDIO 0x0082eb00
extern "C" __declspec(naked) void asm_0082eb00()
{
	__asm { push dword ptr [ecx + 0xc] }
	__asm { call fn_009d8750 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0082eb1a }
	__asm { lea ecx, [eax + 0x128] }
	__asm { jmp fn_00a48380 }
	__asm { L_0082eb1a: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" void fn_0082f160();
// FUNCTION: ROBLOXSTUDIO 0x0082f130
extern "C" __declspec(naked) void asm_0082f130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0082f144 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_0082f160 }
	__asm { L_0082f144: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11f9d18 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006bc9a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00835d60
extern "C" __declspec(naked) void asm_00835d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00835d83 }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_006bc9a0 }
	__asm { mov ecx, esi }
	__asm { call fn_006bc9a0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00835d83: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00848dc0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00848ef0
extern "C" __declspec(naked) void asm_00848ef0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_00848f07 }
	__asm { mov ecx, esi }
	__asm { call fn_00848dc0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00848f07: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00847c10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00849e60
extern "C" __declspec(naked) void asm_00849e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00847c10 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { je L_00849e81 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00849e81: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00847c70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00849e90
extern "C" __declspec(naked) void asm_00849e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00847c70 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { je L_00849eb1 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00849eb1: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00847cd0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00849ec0
extern "C" __declspec(naked) void asm_00849ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00847cd0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { je L_00849ee1 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00849ee1: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00847d30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00849ef0
extern "C" __declspec(naked) void asm_00849ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00847d30 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { je L_00849f11 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00849f11: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10514[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0084a240
extern "C" __declspec(naked) void asm_0084a240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe5d3b8 }
	__asm { call dword ptr [g_00e10514] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0084a261 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0084a261: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006bc9a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0084fda0
extern "C" __declspec(naked) void asm_0084fda0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_0084fdc0 }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_006bc9a0 }
	__asm { mov ecx, esi }
	__asm { call fn_006bc9a0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0084fdc0: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00857d10
extern "C" __declspec(naked) void asm_00857d10()
{
	__asm { cmp dword ptr [ecx + 0x64], 8 }
	__asm { jne L_00857d1f }
	__asm { cmp dword ptr [ecx + 0x68], 2 }
	__asm { jne L_00857d1f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_00857d1f: }
	__asm { xor al, al }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00857d30
extern "C" __declspec(naked) void asm_00857d30()
{
	__asm { mov eax, dword ptr [ecx + 0x64] }
	__asm { test eax, eax }
	__asm { js L_00857d3f }
	__asm { cmp eax, 4 }
	__asm { jg L_00857d3f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_00857d3f: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" void fn_00859840();
// FUNCTION: ROBLOXSTUDIO 0x008596a0
extern "C" __declspec(naked) void asm_008596a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008596b4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00859840 }
	__asm { L_008596b4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11fac50 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00859920();
// FUNCTION: ROBLOXSTUDIO 0x00859750
extern "C" __declspec(naked) void asm_00859750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00859764 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00859920 }
	__asm { L_00859764: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11fad30 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00859a00();
// FUNCTION: ROBLOXSTUDIO 0x00859780
extern "C" __declspec(naked) void asm_00859780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00859794 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00859a00 }
	__asm { L_00859794: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11fb4d8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00859ae0();
// FUNCTION: ROBLOXSTUDIO 0x008597b0
extern "C" __declspec(naked) void asm_008597b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008597c4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00859ae0 }
	__asm { L_008597c4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11fabb8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00859bc0();
// FUNCTION: ROBLOXSTUDIO 0x008597e0
extern "C" __declspec(naked) void asm_008597e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008597f4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00859bc0 }
	__asm { L_008597f4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11faf88 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00859cb0();
// FUNCTION: ROBLOXSTUDIO 0x00859810
extern "C" __declspec(naked) void asm_00859810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00859824 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00859cb0 }
	__asm { L_00859824: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11fb270 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0085f890
extern "C" __declspec(naked) void asm_0085f890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0xe10], eax }
	__asm { je L_0085f8b1 }
	__asm { mov dword ptr [ecx + 0xe10], eax }
	__asm { mov dword ptr [ebp + 8], 0x12f9128 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0085f8b1: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00873c50
extern "C" __declspec(naked) void asm_00873c50()
{
	__asm { cmp dword ptr [ecx + 0x68], 0 }
	__asm { jne L_00873c5f }
	__asm { cmp dword ptr [ecx + 0x64], 1 }
	__asm { jne L_00873c5f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_00873c5f: }
	__asm { xor al, al }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00873c70
extern "C" __declspec(naked) void asm_00873c70()
{
	__asm { cmp dword ptr [ecx + 0x68], 2 }
	__asm { jne L_00873c7f }
	__asm { cmp dword ptr [ecx + 0x64], 1 }
	__asm { jne L_00873c7f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_00873c7f: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" void fn_008adec0();
// FUNCTION: ROBLOXSTUDIO 0x00873ce0
extern "C" __declspec(naked) void asm_00873ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x38], 0 }
	__asm { jne L_00873d03 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [eax + 0x90] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_008adec0 }
	__asm { L_00873d03: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00873f50();
// FUNCTION: ROBLOXSTUDIO 0x00873d10
extern "C" __declspec(naked) void asm_00873d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00873d24 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00873f50 }
	__asm { L_00873d24: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11ff180 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00873fb0();
// FUNCTION: ROBLOXSTUDIO 0x00873e00
extern "C" __declspec(naked) void asm_00873e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00873e14 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00873fb0 }
	__asm { L_00873e14: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11ff368 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008740a0();
// FUNCTION: ROBLOXSTUDIO 0x00873e30
extern "C" __declspec(naked) void asm_00873e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00873e44 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_008740a0 }
	__asm { L_00873e44: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11ff290 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00874190();
// FUNCTION: ROBLOXSTUDIO 0x00873e60
extern "C" __declspec(naked) void asm_00873e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00873e74 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00874190 }
	__asm { L_00873e74: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11ff1b0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00874280();
// FUNCTION: ROBLOXSTUDIO 0x00873e90
extern "C" __declspec(naked) void asm_00873e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00873ea4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00874280 }
	__asm { L_00873ea4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11ff730 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00874370();
// FUNCTION: ROBLOXSTUDIO 0x00873ec0
extern "C" __declspec(naked) void asm_00873ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00873ed4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00874370 }
	__asm { L_00873ed4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11ff630 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00874460();
// FUNCTION: ROBLOXSTUDIO 0x00873ef0
extern "C" __declspec(naked) void asm_00873ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00873f04 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00874460 }
	__asm { L_00873f04: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11ff4a8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00874550();
// FUNCTION: ROBLOXSTUDIO 0x00873f20
extern "C" __declspec(naked) void asm_00873f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00873f34 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00874550 }
	__asm { L_00873f34: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11ff898 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008780b0
extern "C" __declspec(naked) void asm_008780b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x384], al }
	__asm { je L_008780d1 }
	__asm { mov byte ptr [ecx + 0x384], al }
	__asm { mov dword ptr [ebp + 8], 0x12fa280 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_008780d1: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00878370
extern "C" __declspec(naked) void asm_00878370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x211], al }
	__asm { je L_00878391 }
	__asm { mov byte ptr [ecx + 0x211], al }
	__asm { mov dword ptr [ebp + 8], 0x12f9af4 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00878391: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008783a0
extern "C" __declspec(naked) void asm_008783a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0xc8], al }
	__asm { je L_008783c1 }
	__asm { mov byte ptr [ecx + 0xc8], al }
	__asm { mov dword ptr [ebp + 8], 0x12f9ac8 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_008783c1: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00878750
extern "C" __declspec(naked) void asm_00878750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x386], al }
	__asm { je L_00878771 }
	__asm { mov byte ptr [ecx + 0x386], al }
	__asm { mov dword ptr [ebp + 8], 0x12fa2d8 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00878771: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008788e0
extern "C" __declspec(naked) void asm_008788e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x385], al }
	__asm { je L_00878901 }
	__asm { mov byte ptr [ecx + 0x385], al }
	__asm { mov dword ptr [ebp + 8], 0x12fa2ac }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00878901: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008830a0
extern "C" __declspec(naked) void asm_008830a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [ecx + 0x2eb] }
	__asm { je L_008830c1 }
	__asm { mov byte ptr [ecx + 0x2eb], al }
	__asm { mov dword ptr [ebp + 8], 0x12fab68 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_008830c1: }
	__asm { pop ebp }
	__asm { ret 4 }
}
