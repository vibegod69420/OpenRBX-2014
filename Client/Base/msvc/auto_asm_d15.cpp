// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
// FUNCTION: ROBLOXSTUDIO 0x00cead10
extern "C" __declspec(naked) void asm_00cead10()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x5c8] }
	__asm { call fn_00cf40a0 }
	__asm { mov ebx, dword ptr [esi + 0x5e0] }
	__asm { lea edx, [ebx + 1] }
	__asm { mov dword ptr [esi + 0x5e0], edx }
	__asm { test edx, edx }
	__asm { jne L_00cead3d }
	__asm { mov dword ptr [esi + 0x5e0], 1 }
	__asm { L_00cead3d: }
	__asm { lea ecx, [esi + 0x5c8] }
	__asm { call fn_00cf40b0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00c688f0();
extern "C" void fn_00c68910();
// FUNCTION: ROBLOXSTUDIO 0x00ceb740
extern "C" __declspec(naked) void asm_00ceb740()
{
	__asm { push esi }
	__asm { push 0x12b1ef8 }
	__asm { mov esi, ecx }
	__asm { call fn_00c688f0 }
	__asm { test al, al }
	__asm { je L_00ceb766 }
	__asm { push 0x131581c }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { je L_00ceb766 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00ceb766: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cec1e0();
// FUNCTION: ROBLOXSTUDIO 0x00cebfd0
extern "C" __declspec(naked) void asm_00cebfd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { sub esp, 0x14 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { call fn_00cec1e0 }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00cee3a0();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
// FUNCTION: ROBLOXSTUDIO 0x00cee480
extern "C" __declspec(naked) void asm_00cee480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { call fn_00cf40a0 }
	__asm { push 0x30 }
	__asm { push 0xf04780 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x2c] }
	__asm { call fn_00cee3a0 }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { call fn_00cf40b0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ceef30
extern "C" __declspec(naked) void asm_00ceef30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { cmp eax, edx }
	__asm { jae L_00ceef5b }
	__asm { dec edx }
	__asm { cmp eax, edx }
	__asm { jae L_00ceef58 }
	__asm { L_00ceef45: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea edx, [ecx + eax*4] }
	__asm { inc eax }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { dec ecx }
	__asm { cmp eax, ecx }
	__asm { jb L_00ceef45 }
	__asm { L_00ceef58: }
	__asm { dec dword ptr [esi + 4] }
	__asm { L_00ceef5b: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf3250
extern "C" __declspec(naked) void asm_00cf3250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fldz }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { fstp qword ptr [ecx + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x20], eax }
	__asm { mov dword ptr [ecx], 0xf047ec }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10194[];
extern "C" char g_00e13150[];
// FUNCTION: ROBLOXSTUDIO 0x00cf4e70
extern "C" __declspec(naked) void asm_00cf4e70()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, -1 }
	__asm { je L_00cf4e81 }
	__asm { push eax }
	__asm { call dword ptr [g_00e13150] }
	__asm { L_00cf4e81: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { cmp eax, -1 }
	__asm { je L_00cf4e97 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10194] }
	__asm { mov dword ptr [esi + 0x20], 0xffffffff }
	__asm { L_00cf4e97: }
	__asm { mov dword ptr [esi], 0xffffffff }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e1314c[];
extern "C" char g_01316454[];
// FUNCTION: ROBLOXSTUDIO 0x00cf4f90
extern "C" __declspec(naked) void asm_00cf4f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_01316454] }
	__asm { inc eax }
	__asm { sub esp, 0x190 }
	__asm { mov dword ptr [g_01316454], eax }
	__asm { cmp eax, 1 }
	__asm { jne L_00cf4fbb }
	__asm { lea eax, [ebp - 0x190] }
	__asm { push eax }
	__asm { push 0x202 }
	__asm { call dword ptr [g_00e1314c] }
	__asm { L_00cf4fbb: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e100ec[];
// FUNCTION: ROBLOXSTUDIO 0x00cf61b2
extern "C" __declspec(naked) void asm_00cf61b2()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { test edx, edx }
	__asm { js L_00cf61ca }
	__asm { cmp edx, dword ptr [ecx + 4] }
	__asm { jge L_00cf61ca }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea eax, [eax + edx*4] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cf61ca: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push 0xc000008c }
	__asm { call dword ptr [g_00e100ec] }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf6269
extern "C" __declspec(naked) void asm_00cf6269()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { or eax, 0xffffffff }
	__asm { sub eax, ecx }
	__asm { cmp eax, edx }
	__asm { jae L_00cf6282 }
	__asm { mov eax, 0x80070216 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cf6282: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add ecx, edx }
	__asm { mov dword ptr [eax], ecx }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf6a20
extern "C" __declspec(naked) void asm_00cf6a20()
{
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { or ecx, eax }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { jne L_00cf6a39 }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mul ecx }
	__asm { ret 0x10 }
	__asm { L_00cf6a39: }
	__asm { push ebx }
	__asm { mul ecx }
	__asm { mov ebx, eax }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { mul dword ptr [esp + 0x14] }
	__asm { add ebx, eax }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { mul ecx }
	__asm { add edx, ebx }
	__asm { pop ebx }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf7310
extern "C" __declspec(naked) void asm_00cf7310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, 0x5a4d }
	__asm { cmp word ptr [eax], cx }
	__asm { je L_00cf7324 }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cf7324: }
	__asm { mov ecx, dword ptr [eax + 0x3c] }
	__asm { add ecx, eax }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx], 0x4550 }
	__asm { jne L_00cf733f }
	__asm { mov edx, 0x10b }
	__asm { cmp word ptr [ecx + 0x18], dx }
	__asm { sete al }
	__asm { L_00cf733f: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cfd5c0();
extern "C" void fn_00cfdda0();
// FUNCTION: ROBLOXSTUDIO 0x00cfd590
extern "C" __declspec(naked) void asm_00cfd590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00cfd5c0 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_00cfd5b1 }
	__asm { push dword ptr [edi + 0x1c] }
	__asm { call fn_00cfdda0 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { L_00cfd5b1: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cfdfc0
extern "C" __declspec(naked) void asm_00cfdfc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, ebx }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr edx, 8 }
	__asm { mov byte ptr [ecx + eax], dl }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov byte ptr [ecx + eax], bl }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cff8a0();
// FUNCTION: ROBLOXSTUDIO 0x00cff860
extern "C" __declspec(naked) void asm_00cff860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00cff88f }
	__asm { mov ecx, dword ptr [eax + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00cff88f }
	__asm { mov dword ptr [ecx + 0x28], 0 }
	__asm { mov dword ptr [ecx + 0x2c], 0 }
	__asm { mov dword ptr [ecx + 0x30], 0 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00cff8a0 }
	__asm { L_00cff88f: }
	__asm { mov eax, 0xfffffffe }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00d02350
extern "C" __declspec(naked) void asm_00d02350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe844fc }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xf10de4 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00d02580
extern "C" __declspec(naked) void asm_00d02580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub eax, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { sub eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012bbccc[];
// FUNCTION: ROBLOXSTUDIO 0x00d03220
extern "C" __declspec(naked) void asm_00d03220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012bbccc] }
	__asm { mov cl, byte ptr [ebp + 8] }
	__asm { cmp cl, byte ptr [eax] }
	__asm { je L_00d03242 }
	__asm { cmp cl, 0xa }
	__asm { je L_00d03242 }
	__asm { cmp cl, 0x20 }
	__asm { je L_00d03242 }
	__asm { cmp cl, 9 }
	__asm { je L_00d03242 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d03242: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00d09260
extern "C" __declspec(naked) void asm_00d09260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { mov byte ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { mov dword ptr [ecx], 0xf11f74 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00d0be80
extern "C" __declspec(naked) void asm_00d0be80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x3c] }
	__asm { fld dword ptr [ebp + 0x18] }
	__asm { mov ecx, dword ptr [ecx + 0x1c] }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0x3c] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00d0c220
extern "C" __declspec(naked) void asm_00d0c220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xeaf04c }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_01038128[];
extern "C" char g_01038258[];
extern "C" char g_01319e78[];
extern "C" char g_01319e80[];
extern "C" char g_01319e88[];
extern "C" char g_01319e90[];
// FUNCTION: ROBLOXSTUDIO 0x00d9aee0
extern "C" __declspec(naked) void asm_00d9aee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { fld qword ptr [g_01038258] }
	__asm { fst qword ptr [g_01319e78] }
	__asm { fstp qword ptr [g_01319e80] }
	__asm { fld qword ptr [g_01038128] }
	__asm { fst qword ptr [g_01319e88] }
	__asm { fstp qword ptr [g_01319e90] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00664af0();
// FUNCTION: ROBLOXSTUDIO 0x00d9ea50
extern "C" __declspec(naked) void asm_00d9ea50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12dd374 }
	__asm { mov dword ptr [ebp - 4], 0x10004 }
	__asm { mov dword ptr [ebp - 8], 0x13c00d8 }
	__asm { mov dword ptr [ebp - 0xc], 0x1080008 }
	__asm { call fn_00664af0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00664af0();
// FUNCTION: ROBLOXSTUDIO 0x00d9ea90
extern "C" __declspec(naked) void asm_00d9ea90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12dd384 }
	__asm { mov dword ptr [ebp - 4], 0x40010 }
	__asm { mov dword ptr [ebp - 8], 0x13c00d8 }
	__asm { mov dword ptr [ebp - 0xc], 0x1080008 }
	__asm { call fn_00664af0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00664af0();
// FUNCTION: ROBLOXSTUDIO 0x00d9ead0
extern "C" __declspec(naked) void asm_00d9ead0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12dd314 }
	__asm { mov dword ptr [ebp - 4], 0x20004 }
	__asm { mov dword ptr [ebp - 8], 0xbc01f8 }
	__asm { mov dword ptr [ebp - 0xc], 0x440108 }
	__asm { call fn_00664af0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00664af0();
// FUNCTION: ROBLOXSTUDIO 0x00d9eb10
extern "C" __declspec(naked) void asm_00d9eb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12dd324 }
	__asm { mov dword ptr [ebp - 4], 0x80010 }
	__asm { mov dword ptr [ebp - 8], 0xbc01f8 }
	__asm { mov dword ptr [ebp - 0xc], 0x440108 }
	__asm { call fn_00664af0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00664af0();
// FUNCTION: ROBLOXSTUDIO 0x00d9eb50
extern "C" __declspec(naked) void asm_00d9eb50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12dd2f4 }
	__asm { mov dword ptr [ebp - 4], 0x10004 }
	__asm { mov dword ptr [ebp - 8], 0x4401f8 }
	__asm { mov dword ptr [ebp - 0xc], 0x80108 }
	__asm { call fn_00664af0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00664af0();
// FUNCTION: ROBLOXSTUDIO 0x00d9eb90
extern "C" __declspec(naked) void asm_00d9eb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12dd304 }
	__asm { mov dword ptr [ebp - 4], 0x40010 }
	__asm { mov dword ptr [ebp - 8], 0x4401f8 }
	__asm { mov dword ptr [ebp - 0xc], 0x80108 }
	__asm { call fn_00664af0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00664af0();
// FUNCTION: ROBLOXSTUDIO 0x00d9ebd0
extern "C" __declspec(naked) void asm_00d9ebd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12dd2d4 }
	__asm { mov dword ptr [ebp - 4], 0x40004 }
	__asm { mov dword ptr [ebp - 8], 0xf800f8 }
	__asm { mov dword ptr [ebp - 0xc], 0x80008 }
	__asm { call fn_00664af0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00664af0();
// FUNCTION: ROBLOXSTUDIO 0x00d9ec10
extern "C" __declspec(naked) void asm_00d9ec10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12dd2e4 }
	__asm { mov dword ptr [ebp - 4], 0x100010 }
	__asm { mov dword ptr [ebp - 8], 0xf800f8 }
	__asm { mov dword ptr [ebp - 0xc], 0x80008 }
	__asm { call fn_00664af0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00664bf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9ec50
extern "C" __declspec(naked) void asm_00d9ec50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push 2 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12dd394 }
	__asm { mov dword ptr [ebp - 4], 0x16201f8 }
	__asm { mov dword ptr [ebp - 8], 0xcc0122 }
	__asm { call fn_00664bf0 }
	__asm { push 0xde0270 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00664bf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9ec90
extern "C" __declspec(naked) void asm_00d9ec90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { push 4 }
	__asm { push 2 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12dd39c }
	__asm { mov dword ptr [ebp - 4], 0x16201f8 }
	__asm { mov dword ptr [ebp - 8], 0xcc0122 }
	__asm { call fn_00664bf0 }
	__asm { push 0xde0280 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00664af0();
// FUNCTION: ROBLOXSTUDIO 0x00d9ecd0
extern "C" __declspec(naked) void asm_00d9ecd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12dd354 }
	__asm { mov dword ptr [ebp - 4], 0x20002 }
	__asm { mov dword ptr [ebp - 8], 0x1f801f8 }
	__asm { mov dword ptr [ebp - 0xc], 0x180014c }
	__asm { call fn_00664af0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00664af0();
// FUNCTION: ROBLOXSTUDIO 0x00d9ed10
extern "C" __declspec(naked) void asm_00d9ed10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12dd364 }
	__asm { mov dword ptr [ebp - 4], 0x80008 }
	__asm { mov dword ptr [ebp - 8], 0x1f801f8 }
	__asm { mov dword ptr [ebp - 0xc], 0x180014c }
	__asm { call fn_00664af0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00664bf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9ed50
extern "C" __declspec(naked) void asm_00d9ed50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 1 }
	__asm { push 1 }
	__asm { push 2 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12dd3a4 }
	__asm { mov dword ptr [ebp - 4], 0x16201f8 }
	__asm { mov dword ptr [ebp - 8], 0xcc0122 }
	__asm { call fn_00664bf0 }
	__asm { push 0xde0290 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00664bf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9ed90
extern "C" __declspec(naked) void asm_00d9ed90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 1 }
	__asm { push 4 }
	__asm { push 2 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12dd3ac }
	__asm { mov dword ptr [ebp - 4], 0x16201f8 }
	__asm { mov dword ptr [ebp - 8], 0xcc0122 }
	__asm { call fn_00664bf0 }
	__asm { push 0xde02a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00664af0();
// FUNCTION: ROBLOXSTUDIO 0x00d9edd0
extern "C" __declspec(naked) void asm_00d9edd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12dd334 }
	__asm { mov dword ptr [ebp - 4], 0x20004 }
	__asm { mov dword ptr [ebp - 8], 0x1f800f8 }
	__asm { mov dword ptr [ebp - 0xc], 0x14c0008 }
	__asm { call fn_00664af0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0078aa20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da1570
extern "C" __declspec(naked) void asm_00da1570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e0808 }
	__asm { push 1 }
	__asm { push 0xe50278 }
	__asm { push 0xe50280 }
	__asm { push 0 }
	__asm { push 0x7915a0 }
	__asm { call fn_0078aa20 }
	__asm { push 0xde1ce0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0078a950();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da15b0
extern "C" __declspec(naked) void asm_00da15b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e0840 }
	__asm { push 1 }
	__asm { push 0x1016eb0 }
	__asm { push 0xe50298 }
	__asm { push 0 }
	__asm { push 0x790dd0 }
	__asm { call fn_0078a950 }
	__asm { push 0xde1d50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079dc20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2050
extern "C" __declspec(naked) void asm_00da2050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e154c }
	__asm { push 0 }
	__asm { push 0xe530dc }
	__asm { push 0xe530e8 }
	__asm { push 0x158 }
	__asm { call fn_0079dc20 }
	__asm { push 0xde22f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079dc20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2090
extern "C" __declspec(naked) void asm_00da2090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1578 }
	__asm { push 0 }
	__asm { push 0xe530dc }
	__asm { push 0xe530f8 }
	__asm { push 0x15c }
	__asm { call fn_0079dc20 }
	__asm { push 0xde2350 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079da80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da20d0
extern "C" __declspec(naked) void asm_00da20d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e0f7c }
	__asm { push 0 }
	__asm { push 0x1033ac4 }
	__asm { push 0xe52dc0 }
	__asm { push 0xc0 }
	__asm { call fn_0079da80 }
	__asm { push 0xde23b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079da80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2110
extern "C" __declspec(naked) void asm_00da2110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1098 }
	__asm { push 0 }
	__asm { push 0x1033ac4 }
	__asm { push 0xe52dd0 }
	__asm { push 0xc4 }
	__asm { call fn_0079da80 }
	__asm { push 0xde2410 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079db50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2150
extern "C" __declspec(naked) void asm_00da2150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e14f4 }
	__asm { push 0 }
	__asm { push 0xe52df8 }
	__asm { push 0xe5307c }
	__asm { push 0x150 }
	__asm { call fn_0079db50 }
	__asm { push 0xde2470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079dc20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2210
extern "C" __declspec(naked) void asm_00da2210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e15d0 }
	__asm { push 0 }
	__asm { push 0xe52e68 }
	__asm { push 0xe53118 }
	__asm { push 0x164 }
	__asm { call fn_0079dc20 }
	__asm { push 0xde2590 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079d2b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2250
extern "C" __declspec(naked) void asm_00da2250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e0ee8 }
	__asm { push 0 }
	__asm { push 0x1032eb8 }
	__asm { push 0xe52ce0 }
	__asm { push 0 }
	__asm { push 0x7a1550 }
	__asm { call fn_0079d2b0 }
	__asm { push 0xde25f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079d570();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2290
extern "C" __declspec(naked) void asm_00da2290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1158 }
	__asm { push 0 }
	__asm { push 0xe52e38 }
	__asm { push 0xe52e44 }
	__asm { push 0 }
	__asm { push 0x7a18b0 }
	__asm { call fn_0079d570 }
	__asm { push 0xde26c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079d380();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2550
extern "C" __declspec(naked) void asm_00da2550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e12e8 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe52eb0 }
	__asm { push 0xe52ebc }
	__asm { push 0 }
	__asm { push 0x7a4500 }
	__asm { call fn_0079d380 }
	__asm { push 0xde2950 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079d380();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2610
extern "C" __declspec(naked) void asm_00da2610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1320 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe52eb0 }
	__asm { push 0xe52ec8 }
	__asm { push 0 }
	__asm { push 0x7a4fe0 }
	__asm { call fn_0079d380 }
	__asm { push 0xde2a20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079d640();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2650
extern "C" __declspec(naked) void asm_00da2650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e11c0 }
	__asm { push 0 }
	__asm { push 0xe52e68 }
	__asm { push 0xe52e70 }
	__asm { push 0 }
	__asm { push 0x7a5250 }
	__asm { call fn_0079d640 }
	__asm { push 0xde2a90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079d4a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2810
extern "C" __declspec(naked) void asm_00da2810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e10f0 }
	__asm { push 0 }
	__asm { push 0xe52df8 }
	__asm { push 0xe52e00 }
	__asm { push 0 }
	__asm { push 0x7aa4d0 }
	__asm { call fn_0079d4a0 }
	__asm { push 0xde2c80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007aeda0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da31a0
extern "C" __declspec(naked) void asm_00da31a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x12e1e68 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1e98 }
	__asm { push 0xe553b4 }
	__asm { push 0xe553c8 }
	__asm { push 0 }
	__asm { push 0x4a4bd0 }
	__asm { call fn_007aeda0 }
	__asm { push 0xde32c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007aec40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3230
extern "C" __declspec(naked) void asm_00da3230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1f58 }
	__asm { push 0 }
	__asm { push 0xe55428 }
	__asm { push 0xe553b4 }
	__asm { push 0xe55430 }
	__asm { push 0x5c }
	__asm { call fn_007aec40 }
	__asm { push 0xde34c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007aee80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3270
extern "C" __declspec(naked) void asm_00da3270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1e68 }
	__asm { push 0 }
	__asm { push 0xe553b4 }
	__asm { push 0xe553bc }
	__asm { push 0 }
	__asm { push 0x4a4bd0 }
	__asm { call fn_007aee80 }
	__asm { push 0xde3520 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007aee80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da32b0
extern "C" __declspec(naked) void asm_00da32b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1ec8 }
	__asm { push 0 }
	__asm { push 0xe553b4 }
	__asm { push 0xe553d4 }
	__asm { push 0 }
	__asm { push 0x4a4ba0 }
	__asm { call fn_007aee80 }
	__asm { push 0xde3580 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007aee80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da32f0
extern "C" __declspec(naked) void asm_00da32f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1ef8 }
	__asm { push 0 }
	__asm { push 0xe552b4 }
	__asm { push 0xe553e4 }
	__asm { push 0 }
	__asm { push 0x517230 }
	__asm { call fn_007aee80 }
	__asm { push 0xde35e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007aee80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3330
extern "C" __declspec(naked) void asm_00da3330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1f28 }
	__asm { push 0 }
	__asm { push 0xe552b4 }
	__asm { push 0xe553f4 }
	__asm { push 0 }
	__asm { push 0x517200 }
	__asm { call fn_007aee80 }
	__asm { push 0xde3640 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007aeb60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3370
extern "C" __declspec(naked) void asm_00da3370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1f84 }
	__asm { push 0 }
	__asm { push 0xe55460 }
	__asm { push 0xe5546c }
	__asm { push 0x60 }
	__asm { call fn_007aeb60 }
	__asm { push 0xde36a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007ae610();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3550
extern "C" __declspec(naked) void asm_00da3550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1d18 }
	__asm { push 1 }
	__asm { push 4 }
	__asm { push 0xe552dc }
	__asm { push 0xe552e8 }
	__asm { push 0 }
	__asm { push 0x7b3b70 }
	__asm { call fn_007ae610 }
	__asm { push 0xde3940 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007ae9f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3710
extern "C" __declspec(naked) void asm_00da3710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1da8 }
	__asm { push 0 }
	__asm { push 0xe55360 }
	__asm { push 0xe5536c }
	__asm { push 0 }
	__asm { push 0x7b6970 }
	__asm { call fn_007ae9f0 }
	__asm { push 0xde3ad0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007ae850();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da39d0
extern "C" __declspec(naked) void asm_00da39d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1980 }
	__asm { push 0 }
	__asm { push 0xe5519c }
	__asm { push 0xe551a8 }
	__asm { push 0x1c }
	__asm { push 0x7b3dd0 }
	__asm { call fn_007ae850 }
	__asm { push 0xde3d60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007ae850();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3a10
extern "C" __declspec(naked) void asm_00da3a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e19b8 }
	__asm { push 0 }
	__asm { push 0xe5519c }
	__asm { push 0xe551ac }
	__asm { push 0x1c }
	__asm { push 0x7b3dd0 }
	__asm { call fn_007ae850 }
	__asm { push 0xde3e10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007ae920();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3a50
extern "C" __declspec(naked) void asm_00da3a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1ce0 }
	__asm { push 0 }
	__asm { push 0xe552b4 }
	__asm { push 0xe552c0 }
	__asm { push 0 }
	__asm { push 0x7b3e30 }
	__asm { call fn_007ae920 }
	__asm { push 0xde3ec0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007ae920();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3a90
extern "C" __declspec(naked) void asm_00da3a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1c70 }
	__asm { push 0 }
	__asm { push 0xe55288 }
	__asm { push 0xe55294 }
	__asm { push 0 }
	__asm { push 0x7b3ec0 }
	__asm { call fn_007ae920 }
	__asm { push 0xde3f90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3084[];
extern "C" void fn_007b9750();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3eb0
extern "C" __declspec(naked) void asm_00da3eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e3084 }
	__asm { push 0 }
	__asm { push 0xe56774 }
	__asm { push 0x6c }
	__asm { call fn_007b9750 }
	__asm { push 0xde41c0 }
	__asm { mov dword ptr [g_012e3084], 0xe56758 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b9680();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3ef0
extern "C" __declspec(naked) void asm_00da3ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e3298 }
	__asm { push 2 }
	__asm { push 0xe567ac }
	__asm { push 0xe567b8 }
	__asm { push 0x70 }
	__asm { call fn_007b9680 }
	__asm { push 0xde4220 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b8cb0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da4100
extern "C" __declspec(naked) void asm_00da4100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e31e8 }
	__asm { push 0 }
	__asm { push 0xe566f0 }
	__asm { push 0xe566f8 }
	__asm { push 0 }
	__asm { push 0x7be410 }
	__asm { call fn_007b8cb0 }
	__asm { push 0xde4430 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b8f30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da4140
extern "C" __declspec(naked) void asm_00da4140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e3178 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe566a8 }
	__asm { push 0xe566b0 }
	__asm { push 0 }
	__asm { push 0x7bef50 }
	__asm { call fn_007b8f30 }
	__asm { push 0xde44a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b8d80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da4180
extern "C" __declspec(naked) void asm_00da4180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e30b0 }
	__asm { push 0 }
	__asm { push 0xe56658 }
	__asm { push 0xe56664 }
	__asm { push 0 }
	__asm { push 0x7bf580 }
	__asm { call fn_007b8d80 }
	__asm { push 0xde4510 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b9050();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da41c0
extern "C" __declspec(naked) void asm_00da41c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e3220 }
	__asm { push 0 }
	__asm { push 0xe566f0 }
	__asm { push 0xe56710 }
	__asm { push 0 }
	__asm { push 0x7c01c0 }
	__asm { call fn_007b9050 }
	__asm { push 0xde4580 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007c4d80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da42a0
extern "C" __declspec(naked) void asm_00da42a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e35b8 }
	__asm { push 0 }
	__asm { push 0x1016eb0 }
	__asm { push 0xe57b50 }
	__asm { push 0 }
	__asm { push 0x7c60d0 }
	__asm { call fn_007c4d80 }
	__asm { push 0xde4740 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007c4e50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da4360
extern "C" __declspec(naked) void asm_00da4360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e3620 }
	__asm { push 0 }
	__asm { push 0x1016eb0 }
	__asm { push 0xe57b88 }
	__asm { push 0 }
	__asm { push 0x7c5f40 }
	__asm { call fn_007c4e50 }
	__asm { push 0xde4850 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00842730();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dad620
extern "C" __declspec(naked) void asm_00dad620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f93b8 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x85ad30 }
	__asm { push 0xcf0 }
	__asm { push 0xe5e538 }
	__asm { call fn_00842730 }
	__asm { push 0xde8fd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008434b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dad7e0
extern "C" __declspec(naked) void asm_00dad7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8c80 }
	__asm { push 5 }
	__asm { push 0xe5dfbc }
	__asm { push 0xe5dfc8 }
	__asm { push 0 }
	__asm { push 0x84e510 }
	__asm { call fn_008434b0 }
	__asm { push 0xde9210 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00843190();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dad9a0
extern "C" __declspec(naked) void asm_00dad9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8cb8 }
	__asm { push 3 }
	__asm { push 0xe5dfd8 }
	__asm { push 0xe5dfe0 }
	__asm { push 0 }
	__asm { push 0x85fb20 }
	__asm { call fn_00843190 }
	__asm { push 0xde93a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00843580();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dad9e0
extern "C" __declspec(naked) void asm_00dad9e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f9190 }
	__asm { push 0 }
	__asm { push 0xe5e3b4 }
	__asm { push 0xe5e3c0 }
	__asm { push 0 }
	__asm { push 0x857cb0 }
	__asm { call fn_00843580 }
	__asm { push 0xde9450 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008433e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dadb50
extern "C" __declspec(naked) void asm_00dadb50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8f70 }
	__asm { push 1 }
	__asm { push 0xe5e174 }
	__asm { push 0xe5e17c }
	__asm { push 0 }
	__asm { push 0x85f890 }
	__asm { call fn_008433e0 }
	__asm { push 0xde95b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00842ad0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dadc10
extern "C" __declspec(naked) void asm_00dadc10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f87a8 }
	__asm { push 1 }
	__asm { push 0xe5dcf8 }
	__asm { push 0xe5dd00 }
	__asm { push 0 }
	__asm { push 0x852130 }
	__asm { call fn_00842ad0 }
	__asm { push 0xde9680 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00842ad0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dadc50
extern "C" __declspec(naked) void asm_00dadc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8770 }
	__asm { push 3 }
	__asm { push 0xe5dcf8 }
	__asm { push 0xe5dcfc }
	__asm { push 0 }
	__asm { push 0x852130 }
	__asm { call fn_00842ad0 }
	__asm { push 0xde9730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00843780();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dadeb0
extern "C" __declspec(naked) void asm_00dadeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f89c8 }
	__asm { push 5 }
	__asm { push 0xe5dcf8 }
	__asm { push 0xe5de08 }
	__asm { push 0 }
	__asm { push 0x856bd0 }
	__asm { call fn_00843780 }
	__asm { push 0xde9a80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00842c50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae060
extern "C" __declspec(naked) void asm_00dae060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8850 }
	__asm { push 3 }
	__asm { push 0xe5dd48 }
	__asm { push 0xe5dd5c }
	__asm { push 0 }
	__asm { push 0x859100 }
	__asm { call fn_00842c50 }
	__asm { push 0xde9cc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00843190();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae460
extern "C" __declspec(naked) void asm_00dae460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f9350 }
	__asm { push 3 }
	__asm { push 0xe5e4f4 }
	__asm { push 0xe5e510 }
	__asm { push 0 }
	__asm { push 0x85d590 }
	__asm { call fn_00843190 }
	__asm { push 0xde9f00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008325c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae4a0
extern "C" __declspec(naked) void asm_00dae4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8c50 }
	__asm { push 5 }
	__asm { push 0xcd0 }
	__asm { push 0xe5dfac }
	__asm { call fn_008325c0 }
	__asm { push 0xde9fb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008434b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae4e0
extern "C" __declspec(naked) void asm_00dae4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8b30 }
	__asm { push 3 }
	__asm { push 0xe5ded4 }
	__asm { push 0xe5dee8 }
	__asm { push 0 }
	__asm { push 0x84d880 }
	__asm { call fn_008434b0 }
	__asm { push 0xdea040 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00843260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae520
extern "C" __declspec(naked) void asm_00dae520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f88c0 }
	__asm { push 6 }
	__asm { push 0xe5dcf8 }
	__asm { push 0x101d39c }
	__asm { push 0 }
	__asm { push 0x85eb30 }
	__asm { call fn_00843260 }
	__asm { push 0xdea0b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00843850();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae560
extern "C" __declspec(naked) void asm_00dae560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f87e0 }
	__asm { push 0 }
	__asm { push 2 }
	__asm { push 0xe5dd24 }
	__asm { push 0xe5dd30 }
	__asm { push 0 }
	__asm { push 0xb0adfa }
	__asm { call fn_00843850 }
	__asm { push 0xdea160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00842ef0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae740
extern "C" __declspec(naked) void asm_00dae740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8e20 }
	__asm { push 3 }
	__asm { push 0xe5e0a4 }
	__asm { push 0xe5e0ac }
	__asm { push 0 }
	__asm { push 0x85f8e0 }
	__asm { call fn_00842ef0 }
	__asm { push 0xdea390 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00842c50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae820
extern "C" __declspec(naked) void asm_00dae820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8e58 }
	__asm { push 1 }
	__asm { push 0xe5e0c8 }
	__asm { push 0xe5e0d0 }
	__asm { push 0 }
	__asm { push 0x85f990 }
	__asm { call fn_00842c50 }
	__asm { push 0xdea500 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008434b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae860
extern "C" __declspec(naked) void asm_00dae860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f88f8 }
	__asm { push 3 }
	__asm { push 0xe5dd88 }
	__asm { push 0xe5dd9c }
	__asm { push 0 }
	__asm { push 0x85fa50 }
	__asm { call fn_008434b0 }
	__asm { push 0xdea570 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00843190();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae8a0
extern "C" __declspec(naked) void asm_00dae8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f9220 }
	__asm { push 3 }
	__asm { push 0xe5e458 }
	__asm { push 0xe5e460 }
	__asm { push 0 }
	__asm { push 0x85fa60 }
	__asm { call fn_00843190 }
	__asm { push 0xdea5e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00843190();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae8e0
extern "C" __declspec(naked) void asm_00dae8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8960 }
	__asm { push 3 }
	__asm { push 0xe5dcf8 }
	__asm { push 0xe5dddc }
	__asm { push 0 }
	__asm { push 0x85fac0 }
	__asm { call fn_00843190 }
	__asm { push 0xdea690 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00843190();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae920
extern "C" __declspec(naked) void asm_00dae920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f9258 }
	__asm { push 3 }
	__asm { push 0xe5e458 }
	__asm { push 0xe5e474 }
	__asm { push 0 }
	__asm { push 0x85fba0 }
	__asm { call fn_00843190 }
	__asm { push 0xdea740 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00868990();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daefe0
extern "C" __declspec(naked) void asm_00daefe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f9e34 }
	__asm { push 0 }
	__asm { push 0xe6275c }
	__asm { push 0xe62764 }
	__asm { push 0xd4 }
	__asm { call fn_00868990 }
	__asm { push 0xdeac50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00868990();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf020
extern "C" __declspec(naked) void asm_00daf020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f9e8c }
	__asm { push 0 }
	__asm { push 0xe6275c }
	__asm { push 0xe62780 }
	__asm { push 0xdc }
	__asm { call fn_00868990 }
	__asm { push 0xdeacb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00868990();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf060
extern "C" __declspec(naked) void asm_00daf060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f9e60 }
	__asm { push 0 }
	__asm { push 0xe6275c }
	__asm { push 0xe62770 }
	__asm { push 0xd8 }
	__asm { call fn_00868990 }
	__asm { push 0xdead10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00867390();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf670
extern "C" __declspec(naked) void asm_00daf670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f9ff0 }
	__asm { push 5 }
	__asm { push 0x1033c94 }
	__asm { push 0xe62fd4 }
	__asm { push 0 }
	__asm { push 0x878d20 }
	__asm { call fn_00867390 }
	__asm { push 0xdeb3e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00880120();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db0bb0
extern "C" __declspec(naked) void asm_00db0bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fab94 }
	__asm { push 0 }
	__asm { push 0xe65050 }
	__asm { push 0xe65060 }
	__asm { push 0x340 }
	__asm { call fn_00880120 }
	__asm { push 0xdec110 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fb100[];
extern "C" char g_012fb104[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00db27b0
extern "C" __declspec(naked) void asm_00db27b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0x100a88c }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fb104], eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push 0xe66650 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fb100], eax }
	__asm { ret }
}

extern "C" void fn_00899a70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db2da0
extern "C" __declspec(naked) void asm_00db2da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fbaf0 }
	__asm { push 1 }
	__asm { push 0xe6908c }
	__asm { push 0xe69098 }
	__asm { push 0 }
	__asm { push 0x89b920 }
	__asm { call fn_00899a70 }
	__asm { push 0xded250 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0089bba0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db2ea0
extern "C" __declspec(naked) void asm_00db2ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fbb90 }
	__asm { push 0 }
	__asm { push 0xe5519c }
	__asm { push 0xe6972c }
	__asm { push 0 }
	__asm { push 0x89c500 }
	__asm { call fn_0089bba0 }
	__asm { push 0xded530 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fbc38[];
extern "C" void fn_0089bd40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db2ee0
extern "C" __declspec(naked) void asm_00db2ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fbc38 }
	__asm { push 0 }
	__asm { push 0x100bc7c }
	__asm { push 0x78 }
	__asm { call fn_0089bd40 }
	__asm { push 0xded5e0 }
	__asm { mov dword ptr [g_012fbc38], 0xe69750 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fbc64[];
extern "C" void fn_0089bd40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db2f20
extern "C" __declspec(naked) void asm_00db2f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fbc64 }
	__asm { push 3 }
	__asm { push 0xe6976c }
	__asm { push 0x7c }
	__asm { call fn_0089bd40 }
	__asm { push 0xded640 }
	__asm { mov dword ptr [g_012fbc64], 0xe69750 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0089bc70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db2f60
extern "C" __declspec(naked) void asm_00db2f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fbc90 }
	__asm { push 0 }
	__asm { push 0xe69738 }
	__asm { push 0xe69798 }
	__asm { push 0x80 }
	__asm { call fn_0089bc70 }
	__asm { push 0xded6a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008baca0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db4350
extern "C" __declspec(naked) void asm_00db4350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fc8cc }
	__asm { push 0 }
	__asm { push 0xe6d8e8 }
	__asm { push 0xe6d8f8 }
	__asm { push 0x68 }
	__asm { call fn_008baca0 }
	__asm { push 0xdee8b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008baca0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db4390
extern "C" __declspec(naked) void asm_00db4390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fc8a0 }
	__asm { push 0 }
	__asm { push 0xe6d8c4 }
	__asm { push 0xe6d8d4 }
	__asm { push 0x6c }
	__asm { call fn_008baca0 }
	__asm { push 0xdee910 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008ba580();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db43d0
extern "C" __declspec(naked) void asm_00db43d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fc720 }
	__asm { push 5 }
	__asm { push 0xe6d728 }
	__asm { push 0xe6d734 }
	__asm { push 0 }
	__asm { push 0x8bbba0 }
	__asm { call fn_008ba580 }
	__asm { push 0xdee970 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008c2ad0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db5d10
extern "C" __declspec(naked) void asm_00db5d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fce78 }
	__asm { push 0 }
	__asm { push 0xe6f404 }
	__asm { push 0xe60bc0 }
	__asm { push 0xb4 }
	__asm { call fn_008c2ad0 }
	__asm { push 0xdefb40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008cd5d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db6620
extern "C" __declspec(naked) void asm_00db6620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fd090 }
	__asm { push 3 }
	__asm { push 0x1004e08 }
	__asm { push 0xe6ff2c }
	__asm { push 0 }
	__asm { push 0x8d2f90 }
	__asm { call fn_008cd5d0 }
	__asm { push 0xdf03c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008cd9b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db6660
extern "C" __declspec(naked) void asm_00db6660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fd330 }
	__asm { push 5 }
	__asm { push 0 }
	__asm { push 0xe2f344 }
	__asm { push 0xe700b0 }
	__asm { push 0 }
	__asm { push 0x8e3550 }
	__asm { call fn_008cd9b0 }
	__asm { push 0xdf0430 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008cd4b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db66a0
extern "C" __declspec(naked) void asm_00db66a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fd270 }
	__asm { push 5 }
	__asm { push 1 }
	__asm { push 0xe70030 }
	__asm { push 0xe70044 }
	__asm { push 0 }
	__asm { push 0x8d86e0 }
	__asm { call fn_008cd4b0 }
	__asm { push 0xdf04a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008eb760();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db6a40
extern "C" __declspec(naked) void asm_00db6a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fd588 }
	__asm { push 5 }
	__asm { push 0xe5dfd8 }
	__asm { push 0xb0 }
	__asm { push 0xe73938 }
	__asm { call fn_008eb760 }
	__asm { push 0xdf0890 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008ed0f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db6a80
extern "C" __declspec(naked) void asm_00db6a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fd468 }
	__asm { push 0 }
	__asm { push 0xe7383c }
	__asm { push 0xe73844 }
	__asm { push 0 }
	__asm { push 0x8ee010 }
	__asm { call fn_008ed0f0 }
	__asm { push 0xdf0920 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008f4000();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db6e80
extern "C" __declspec(naked) void asm_00db6e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fd778 }
	__asm { push 0 }
	__asm { push 0xe74348 }
	__asm { push 0xe74354 }
	__asm { push 0 }
	__asm { push 0x8f94f0 }
	__asm { call fn_008f4000 }
	__asm { push 0xdf0cc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008f3f30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db6ec0
extern "C" __declspec(naked) void asm_00db6ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fd6d0 }
	__asm { push 3 }
	__asm { push 0xe5dcf8 }
	__asm { push 0xe742fc }
	__asm { push 0 }
	__asm { push 0x8fa880 }
	__asm { call fn_008f3f30 }
	__asm { push 0xdf0d70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008f3f30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db6f00
extern "C" __declspec(naked) void asm_00db6f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fd698 }
	__asm { push 3 }
	__asm { push 0xe5dcf8 }
	__asm { push 0xe742b4 }
	__asm { push 0 }
	__asm { push 0x8fa880 }
	__asm { call fn_008f3f30 }
	__asm { push 0xdf0e20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008f3e60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db6f40
extern "C" __declspec(naked) void asm_00db6f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fd740 }
	__asm { push 3 }
	__asm { push 0xe74314 }
	__asm { push 0xe7432c }
	__asm { push 0 }
	__asm { push 0x8fa9b0 }
	__asm { call fn_008f3e60 }
	__asm { push 0xdf0ed0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00900bf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8b50
extern "C" __declspec(naked) void asm_00db8b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fe550 }
	__asm { push 6 }
	__asm { push 0xe5dcf8 }
	__asm { push 0xe75f6c }
	__asm { push 0 }
	__asm { push 0xaf2a30 }
	__asm { call fn_00900bf0 }
	__asm { push 0xdf1ca0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00911930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db96a0
extern "C" __declspec(naked) void asm_00db96a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fedd8 }
	__asm { push 0 }
	__asm { push 0x1024d64 }
	__asm { push 0xe7a734 }
	__asm { push 0 }
	__asm { push 0x9131d0 }
	__asm { call fn_00911930 }
	__asm { push 0xdf24c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0091c600();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dba1d0
extern "C" __declspec(naked) void asm_00dba1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12ff160 }
	__asm { push 0 }
	__asm { push 0xe7d50c }
	__asm { push 0xe7d514 }
	__asm { push 0 }
	__asm { push 0x91fa70 }
	__asm { call fn_0091c600 }
	__asm { push 0xdf2a20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0091c600();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dba290
extern "C" __declspec(naked) void asm_00dba290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12ff198 }
	__asm { push 0 }
	__asm { push 0xe7d50c }
	__asm { push 0xe7d520 }
	__asm { push 0 }
	__asm { push 0x920960 }
	__asm { call fn_0091c600 }
	__asm { push 0xdf2b50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0091ce20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dba3f0
extern "C" __declspec(naked) void asm_00dba3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12ff288 }
	__asm { push 0 }
	__asm { push 0xe7d50c }
	__asm { push 0xe7d764 }
	__asm { push 0 }
	__asm { push 0x91fa70 }
	__asm { call fn_0091ce20 }
	__asm { push 0xdf2c80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0091ce20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dba4b0
extern "C" __declspec(naked) void asm_00dba4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12ff2c0 }
	__asm { push 0 }
	__asm { push 0xe7d50c }
	__asm { push 0xe7d76c }
	__asm { push 0 }
	__asm { push 0x920960 }
	__asm { call fn_0091ce20 }
	__asm { push 0xdf2db0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0091ea20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dba580
extern "C" __declspec(naked) void asm_00dba580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12ff358 }
	__asm { push 0 }
	__asm { push 0xe7d950 }
	__asm { push 0xe7d95c }
	__asm { push 0 }
	__asm { push 0x91fa70 }
	__asm { call fn_0091ea20 }
	__asm { push 0xdf2f60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0091ea20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dba640
extern "C" __declspec(naked) void asm_00dba640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12ff390 }
	__asm { push 0 }
	__asm { push 0xe7d950 }
	__asm { push 0xe7d968 }
	__asm { push 0 }
	__asm { push 0x920960 }
	__asm { call fn_0091ea20 }
	__asm { push 0xdf3090 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00922750();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dba840
extern "C" __declspec(naked) void asm_00dba840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12ff590 }
	__asm { push 0 }
	__asm { push 0xe7e330 }
	__asm { push 0xe7e338 }
	__asm { push 0x22c }
	__asm { call fn_00922750 }
	__asm { push 0xdf3280 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00927db0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbac60
extern "C" __declspec(naked) void asm_00dbac60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12ff6f4 }
	__asm { push 0 }
	__asm { push 0xe7e330 }
	__asm { push 0xe63184 }
	__asm { push 0x1a8 }
	__asm { call fn_00927db0 }
	__asm { push 0xdf3520 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0092e020();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbb3a0
extern "C" __declspec(naked) void asm_00dbb3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12ff900 }
	__asm { push 1 }
	__asm { push 1 }
	__asm { push 0xe812e4 }
	__asm { push 0xe812ec }
	__asm { push 0 }
	__asm { push 0x930490 }
	__asm { call fn_0092e020 }
	__asm { push 0xdf3890 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0092e3e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbb4b0
extern "C" __declspec(naked) void asm_00dbb4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12ff970 }
	__asm { push 5 }
	__asm { push 0 }
	__asm { push 0xe81330 }
	__asm { push 0xe8133c }
	__asm { push 0 }
	__asm { push 0x931be0 }
	__asm { call fn_0092e3e0 }
	__asm { push 0xdf3970 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00936f60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbb7c0
extern "C" __declspec(naked) void asm_00dbb7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1300218 }
	__asm { push 0 }
	__asm { push 0xe6275c }
	__asm { push 0xe82078 }
	__asm { push 0 }
	__asm { push 0x937f10 }
	__asm { call fn_00936f60 }
	__asm { push 0xdf3cd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00936e90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbb800
extern "C" __declspec(naked) void asm_00dbb800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1300250 }
	__asm { push 0 }
	__asm { push 0xe6275c }
	__asm { push 0xe82090 }
	__asm { push 0 }
	__asm { push 0x938030 }
	__asm { call fn_00936e90 }
	__asm { push 0xdf3d80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00936dc0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbb8c0
extern "C" __declspec(naked) void asm_00dbb8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1300288 }
	__asm { push 0 }
	__asm { push 0xe6275c }
	__asm { push 0xe820a8 }
	__asm { push 0 }
	__asm { push 0x938750 }
	__asm { call fn_00936dc0 }
	__asm { push 0xdf3e90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0093f7a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbc080
extern "C" __declspec(naked) void asm_00dbc080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1300640 }
	__asm { push 1 }
	__asm { push 0xe83650 }
	__asm { push 0xe83660 }
	__asm { push 0 }
	__asm { push 0x941670 }
	__asm { call fn_0093f7a0 }
	__asm { push 0xdf4360 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0093f430();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbc190
extern "C" __declspec(naked) void asm_00dbc190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1300678 }
	__asm { push 1 }
	__asm { push 0x1016eb0 }
	__asm { push 0xe83678 }
	__asm { push 0 }
	__asm { push 0x942570 }
	__asm { call fn_0093f430 }
	__asm { push 0xdf4440 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0093f500();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbc310
extern "C" __declspec(naked) void asm_00dbc310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13006e8 }
	__asm { push 1 }
	__asm { push 0xe83694 }
	__asm { push 0xe836b0 }
	__asm { push 0 }
	__asm { push 0x943930 }
	__asm { call fn_0093f500 }
	__asm { push 0xdf46b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0093f360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbc4a0
extern "C" __declspec(naked) void asm_00dbc4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1300818 }
	__asm { push 1 }
	__asm { push 0xe83778 }
	__asm { push 0xe83780 }
	__asm { push 0 }
	__asm { push 0x9446f0 }
	__asm { call fn_0093f360 }
	__asm { push 0xdf4830 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0096f4f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbd590
extern "C" __declspec(naked) void asm_00dbd590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1301254 }
	__asm { push 0 }
	__asm { push 0xe87594 }
	__asm { push 0xe875a4 }
	__asm { push 0x1e8 }
	__asm { call fn_0096f4f0 }
	__asm { push 0xdf5150 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0096f360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbd650
extern "C" __declspec(naked) void asm_00dbd650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1301398 }
	__asm { push 0 }
	__asm { push 0xe876d4 }
	__asm { push 0xe876dc }
	__asm { push 0 }
	__asm { push 0x9708a0 }
	__asm { call fn_0096f360 }
	__asm { push 0xdf5210 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00973e90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbde30
extern "C" __declspec(naked) void asm_00dbde30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1301ab8 }
	__asm { push 0 }
	__asm { push 0xe87e34 }
	__asm { push 0xe87e44 }
	__asm { push 0x360 }
	__asm { call fn_00973e90 }
	__asm { push 0xdf5a30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00973070();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbe070
extern "C" __declspec(naked) void asm_00dbe070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1301788 }
	__asm { push 5 }
	__asm { push 0xe87c44 }
	__asm { push 0xe87c54 }
	__asm { push 0 }
	__asm { push 0x97e0c0 }
	__asm { call fn_00973070 }
	__asm { push 0xdf5cd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00972fa0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbe0b0
extern "C" __declspec(naked) void asm_00dbe0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13017c0 }
	__asm { push 5 }
	__asm { push 0xe87c70 }
	__asm { push 0xe87c7c }
	__asm { push 0 }
	__asm { push 0x97eca0 }
	__asm { call fn_00972fa0 }
	__asm { push 0xdf5d40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00989cc0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbee50
extern "C" __declspec(naked) void asm_00dbee50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1301f90 }
	__asm { push 5 }
	__asm { push 0x1005384 }
	__asm { push 0xe8d13c }
	__asm { push 0 }
	__asm { push 0x9925a0 }
	__asm { call fn_00989cc0 }
	__asm { push 0xdf66a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009a73f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0510
extern "C" __declspec(naked) void asm_00dc0510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1303bb8 }
	__asm { push 0 }
	__asm { push 0x1004e08 }
	__asm { push 0xe931e4 }
	__asm { push 0 }
	__asm { push 0x403a00 }
	__asm { call fn_009a73f0 }
	__asm { push 0xdf77b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009a73f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0550
extern "C" __declspec(naked) void asm_00dc0550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1303bf0 }
	__asm { push 0 }
	__asm { push 0xe92f90 }
	__asm { push 0xe931f4 }
	__asm { push 0 }
	__asm { push 0x403a00 }
	__asm { call fn_009a73f0 }
	__asm { push 0xdf7820 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009a7850();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0590
extern "C" __declspec(naked) void asm_00dc0590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1303da0 }
	__asm { push 0 }
	__asm { push 0xe932d8 }
	__asm { push 0xe932e4 }
	__asm { push 0 }
	__asm { push 0x9aebe0 }
	__asm { call fn_009a7850 }
	__asm { push 0xdf7890 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009a7660();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0800
extern "C" __declspec(naked) void asm_00dc0800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1303e80 }
	__asm { push 0 }
	__asm { push 0x1018974 }
	__asm { push 0x100e4fc }
	__asm { push 0 }
	__asm { push 0x9af920 }
	__asm { call fn_009a7660 }
	__asm { push 0xdf7c20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009a79d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0840
extern "C" __declspec(naked) void asm_00dc0840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1303dd8 }
	__asm { push 0 }
	__asm { push 0x1004e08 }
	__asm { push 0xe93300 }
	__asm { push 0 }
	__asm { push 0x9b0350 }
	__asm { call fn_009a79d0 }
	__asm { push 0xdf7cf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009a7590();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0950
extern "C" __declspec(naked) void asm_00dc0950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1303b48 }
	__asm { push 3 }
	__asm { push 0xe931a8 }
	__asm { push 0xe742fc }
	__asm { push 0 }
	__asm { push 0x9b2a50 }
	__asm { call fn_009a7590 }
	__asm { push 0xdf7ec0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009a7590();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0990
extern "C" __declspec(naked) void asm_00dc0990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1303b80 }
	__asm { push 3 }
	__asm { push 0xe931b4 }
	__asm { push 0xe931c4 }
	__asm { push 0 }
	__asm { push 0x9b2ab0 }
	__asm { call fn_009a7590 }
	__asm { push 0xdf7f70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
