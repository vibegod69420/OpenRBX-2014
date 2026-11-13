// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00883210
extern "C" __declspec(naked) void asm_00883210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [ecx + 0x338] }
	__asm { je L_00883231 }
	__asm { mov byte ptr [ecx + 0x338], al }
	__asm { mov dword ptr [ebp + 8], 0x12fab3c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00883231: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00968f00();
extern "C" void fn_009962d0();
// FUNCTION: ROBLOXSTUDIO 0x00890c90
extern "C" __declspec(naked) void asm_00890c90()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { call fn_00968f00 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00890caf }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0xe0] }
	__asm { mov ecx, eax }
	__asm { call fn_009962d0 }
	__asm { L_00890caf: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00968f00();
extern "C" void fn_009962d0();
// FUNCTION: ROBLOXSTUDIO 0x00890cc0
extern "C" __declspec(naked) void asm_00890cc0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { call fn_00968f00 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00890cdf }
	__asm { push 1 }
	__asm { push dword ptr [esi + 0xe0] }
	__asm { mov ecx, eax }
	__asm { call fn_009962d0 }
	__asm { L_00890cdf: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00891b10
extern "C" __declspec(naked) void asm_00891b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00891b29 }
	__asm { mov eax, dword ptr [eax + 0x108] }
	__asm { test eax, eax }
	__asm { je L_00891b29 }
	__asm { add eax, -0x70 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00891b29: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e39be4[];
// FUNCTION: ROBLOXSTUDIO 0x00892940
extern "C" __declspec(naked) void asm_00892940()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc8] }
	__asm { cmp eax, 3 }
	__asm { je L_00892950 }
	__asm { fld1 }
	__asm { ret }
	__asm { L_00892950: }
	__asm { fld dword ptr [g_00e39be4] }
	__asm { ret }
}

extern "C" void fn_00968f00();
extern "C" void fn_00995cd0();
// FUNCTION: ROBLOXSTUDIO 0x008940e0
extern "C" __declspec(naked) void asm_008940e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { call fn_00968f00 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008940fd }
	__asm { push dword ptr [esi + 0xe0] }
	__asm { mov ecx, eax }
	__asm { call fn_00995cd0 }
	__asm { L_008940fd: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00894330();
// FUNCTION: ROBLOXSTUDIO 0x00894300
extern "C" __declspec(naked) void asm_00894300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00894314 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00894330 }
	__asm { L_00894314: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1209638 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00894960
extern "C" __declspec(naked) void asm_00894960()
{
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [eax + 0x74] }
	__asm { test ecx, ecx }
	__asm { je L_00894972 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { add eax, -0x70 }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x30] }
	__asm { L_00894972: }
	__asm { ret }
}

extern "C" void fn_008a8a40();
// FUNCTION: ROBLOXSTUDIO 0x008a89e0
extern "C" __declspec(naked) void asm_008a89e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008a89f4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_008a8a40 }
	__asm { L_008a89f4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x120d3e8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008a8b30();
// FUNCTION: ROBLOXSTUDIO 0x008a8a10
extern "C" __declspec(naked) void asm_008a8a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008a8a24 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_008a8b30 }
	__asm { L_008a8a24: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x120d4a0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008a9240
extern "C" __declspec(naked) void asm_008a9240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0xa4], eax }
	__asm { je L_008a9261 }
	__asm { mov dword ptr [ecx + 0xa4], eax }
	__asm { mov dword ptr [ebp + 8], 0x12fc2c4 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_008a9261: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008aa680
extern "C" __declspec(naked) void asm_008aa680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0xc8], eax }
	__asm { je L_008aa6a1 }
	__asm { mov dword ptr [ecx + 0xc8], eax }
	__asm { mov dword ptr [ebp + 8], 0x12fc3c0 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_008aa6a1: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008bbef0
extern "C" __declspec(naked) void asm_008bbef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0xa8], al }
	__asm { je L_008bbf11 }
	__asm { mov byte ptr [ecx + 0xa8], al }
	__asm { mov dword ptr [ebp + 8], 0x12fc790 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_008bbf11: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008bc040
extern "C" __declspec(naked) void asm_008bc040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x70], eax }
	__asm { je L_008bc05b }
	__asm { mov dword ptr [ecx + 0x70], eax }
	__asm { mov dword ptr [ebp + 8], 0x12fc5f0 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_008bc05b: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x008bc060
extern "C" __declspec(naked) void asm_008bc060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add ecx, 0xac }
	__asm { cmp ecx, eax }
	__asm { je L_008bc07a }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_008bc07a: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008bc090
extern "C" __declspec(naked) void asm_008bc090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x88], eax }
	__asm { je L_008bc0b1 }
	__asm { mov dword ptr [ecx + 0x88], eax }
	__asm { mov dword ptr [ebp + 8], 0x12fc8f8 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_008bc0b1: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008bc0c0
extern "C" __declspec(naked) void asm_008bc0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x74], eax }
	__asm { je L_008bc0db }
	__asm { mov dword ptr [ecx + 0x74], eax }
	__asm { mov dword ptr [ebp + 8], 0x12fc6c0 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_008bc0db: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008bc270
extern "C" __declspec(naked) void asm_008bc270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x84], eax }
	__asm { je L_008bc291 }
	__asm { mov dword ptr [ecx + 0x84], eax }
	__asm { mov dword ptr [ebp + 8], 0x12fc68c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_008bc291: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008c14a0();
// FUNCTION: ROBLOXSTUDIO 0x008c1470
extern "C" __declspec(naked) void asm_008c1470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008c1484 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_008c14a0 }
	__asm { L_008c1484: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1210708 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008c56c0
extern "C" __declspec(naked) void asm_008c56c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { je L_008c56dd }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { fld qword ptr [ebp + 0xc] }
	__asm { add ecx, 8 }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { call dword ptr [eax] }
	__asm { L_008c56dd: }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008c56e0
extern "C" __declspec(naked) void asm_008c56e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { je L_008c5704 }
	__asm { fld qword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { sub esp, 0x10 }
	__asm { add ecx, 8 }
	__asm { fstp qword ptr [esp + 8] }
	__asm { fld qword ptr [ebp + 0xc] }
	__asm { fstp qword ptr [esp] }
	__asm { call dword ptr [eax] }
	__asm { L_008c5704: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008c5cf0();
// FUNCTION: ROBLOXSTUDIO 0x008c5c90
extern "C" __declspec(naked) void asm_008c5c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008c5ca4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_008c5cf0 }
	__asm { L_008c5ca4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1210ac0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008c5de0();
// FUNCTION: ROBLOXSTUDIO 0x008c5cc0
extern "C" __declspec(naked) void asm_008c5cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008c5cd4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_008c5de0 }
	__asm { L_008c5cd4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12109e0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006c4630();
// FUNCTION: ROBLOXSTUDIO 0x008c6960
extern "C" __declspec(naked) void asm_008c6960()
{
	__asm { mov ecx, dword ptr [ecx + 0x68] }
	__asm { test ecx, ecx }
	__asm { jne fn_006c4630 }
	__asm { fldz }
	__asm { ret }
}

extern "C" void fn_008ccfc0();
// FUNCTION: ROBLOXSTUDIO 0x008cc910
extern "C" __declspec(naked) void asm_008cc910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008cc928 }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_008cc928: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x008d85e0
extern "C" __declspec(naked) void asm_008d85e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_008d85f2 }
	__asm { mov eax, dword ptr [eax - 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008d85f2: }
	__asm { xor eax, eax }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008db400();
// FUNCTION: ROBLOXSTUDIO 0x008db170
extern "C" __declspec(naked) void asm_008db170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008db184 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_008db400 }
	__asm { L_008db184: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1211678 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008db460();
// FUNCTION: ROBLOXSTUDIO 0x008db260
extern "C" __declspec(naked) void asm_008db260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008db274 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_008db460 }
	__asm { L_008db274: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12121d0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008db540();
// FUNCTION: ROBLOXSTUDIO 0x008db290
extern "C" __declspec(naked) void asm_008db290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008db2a4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_008db540 }
	__asm { L_008db2a4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1212100 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008db630();
// FUNCTION: ROBLOXSTUDIO 0x008db300
extern "C" __declspec(naked) void asm_008db300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008db314 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_008db630 }
	__asm { L_008db314: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12117d0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008db6a0();
// FUNCTION: ROBLOXSTUDIO 0x008db330
extern "C" __declspec(naked) void asm_008db330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008db344 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_008db6a0 }
	__asm { L_008db344: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12115d8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008db790();
// FUNCTION: ROBLOXSTUDIO 0x008db3a0
extern "C" __declspec(naked) void asm_008db3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008db3b4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_008db790 }
	__asm { L_008db3b4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1211cc8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008db880();
// FUNCTION: ROBLOXSTUDIO 0x008db3d0
extern "C" __declspec(naked) void asm_008db3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008db3e4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_008db880 }
	__asm { L_008db3e4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1211b78 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008d01b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008e1fa0
extern "C" __declspec(naked) void asm_008e1fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { test esi, esi }
	__asm { je L_008e1fbf }
	__asm { mov ecx, esi }
	__asm { call fn_008d01b0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008e1fbf: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008f1380();
// FUNCTION: ROBLOXSTUDIO 0x008f1180
extern "C" __declspec(naked) void asm_008f1180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008f1194 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_008f1380 }
	__asm { L_008f1194: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12145e0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008f1400();
// FUNCTION: ROBLOXSTUDIO 0x008f11b0
extern "C" __declspec(naked) void asm_008f11b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008f11c4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_008f1400 }
	__asm { L_008f11c4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1214588 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008f1480();
// FUNCTION: ROBLOXSTUDIO 0x008f12a0
extern "C" __declspec(naked) void asm_008f12a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008f12b4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_008f1480 }
	__asm { L_008f12b4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1214d18 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008f1560();
// FUNCTION: ROBLOXSTUDIO 0x008f1350
extern "C" __declspec(naked) void asm_008f1350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008f1364 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_008f1560 }
	__asm { L_008f1364: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1214b48 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008f1ee0
extern "C" __declspec(naked) void asm_008f1ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { cmp eax, dword ptr [edx + 4] }
	__asm { jne L_008f1efa }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [edx] }
	__asm { jne L_008f1efa }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008f1efa: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e131b8[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f5200
extern "C" __declspec(naked) void asm_008f5200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e131b8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_008f521b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f521b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e131b0[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f6830
extern "C" __declspec(naked) void asm_008f6830()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_008f6849 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e131b0] }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f6849: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_008f8b80();
// FUNCTION: ROBLOXSTUDIO 0x008f8a90
extern "C" __declspec(naked) void asm_008f8a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008f8aa4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_008f8b80 }
	__asm { L_008f8aa4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12159a0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008fec30
extern "C" __declspec(naked) void asm_008fec30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [eax + 0x200], 0 }
	__asm { je L_008fec45 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008fec45: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp byte ptr [eax + 0x200], 0 }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00900020
extern "C" __declspec(naked) void asm_00900020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ecx + 0x78] }
	__asm { je L_0090003b }
	__asm { mov dword ptr [ecx + 0x78], eax }
	__asm { mov dword ptr [ebp + 8], 0x12fe198 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0090003b: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00908710
extern "C" __declspec(naked) void asm_00908710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x90], eax }
	__asm { je L_00908731 }
	__asm { mov dword ptr [ecx + 0x90], eax }
	__asm { mov dword ptr [ebp + 8], 0x12fe7f4 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00908731: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b5ea0();
// FUNCTION: ROBLOXSTUDIO 0x0090a770
extern "C" __declspec(naked) void asm_0090a770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0090a786 }
	__asm { push 0 }
	__asm { push dword ptr [eax + 0x7c] }
	__asm { call fn_007b5ea0 }
	__asm { L_0090a786: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00d086d0();
// FUNCTION: ROBLOXSTUDIO 0x0090a7a0
extern "C" __declspec(naked) void asm_0090a7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ecx + 0x98], 0 }
	__asm { je L_0090a7b5 }
	__asm { mov ecx, dword ptr [ecx + 0x70] }
	__asm { pop ebp }
	__asm { jmp fn_00d086d0 }
	__asm { L_0090a7b5: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0090bce0();
// FUNCTION: ROBLOXSTUDIO 0x0090bcb0
extern "C" __declspec(naked) void asm_0090bcb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0090bcc4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_0090bce0 }
	__asm { L_0090bcc4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1219890 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00d09110();
// FUNCTION: ROBLOXSTUDIO 0x0090c540
extern "C" __declspec(naked) void asm_0090c540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ecx + 0x98], 0 }
	__asm { je L_0090c555 }
	__asm { mov ecx, dword ptr [ecx + 0x70] }
	__asm { pop ebp }
	__asm { jmp fn_00d09110 }
	__asm { L_0090c555: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00d091b0();
// FUNCTION: ROBLOXSTUDIO 0x0090c570
extern "C" __declspec(naked) void asm_0090c570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ecx + 0x98], 0 }
	__asm { je L_0090c585 }
	__asm { mov ecx, dword ptr [ecx + 0x70] }
	__asm { pop ebp }
	__asm { jmp fn_00d091b0 }
	__asm { L_0090c585: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0090ca50
extern "C" __declspec(naked) void asm_0090ca50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x99], al }
	__asm { je L_0090ca71 }
	__asm { mov byte ptr [ecx + 0x99], al }
	__asm { mov dword ptr [ebp + 8], 0x12fe8b8 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0090ca71: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0090ca80
extern "C" __declspec(naked) void asm_0090ca80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x98], al }
	__asm { je L_0090caa1 }
	__asm { mov byte ptr [ecx + 0x98], al }
	__asm { mov dword ptr [ebp + 8], 0x12fe88c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0090caa1: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009103a0
extern "C" __declspec(naked) void asm_009103a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ecx + 0x118], 1 }
	__asm { je L_009103b5 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { L_009103b5: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0091b900
extern "C" __declspec(naked) void asm_0091b900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x208], al }
	__asm { je L_0091b921 }
	__asm { mov byte ptr [ecx + 0x208], al }
	__asm { mov dword ptr [ebp + 8], 0x12ff050 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0091b921: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0091bb70
extern "C" __declspec(naked) void asm_0091bb70()
{
	__asm { mov ecx, dword ptr [ecx + 0x1b4] }
	__asm { test ecx, ecx }
	__asm { je L_0091bb85 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { xor eax, eax }
	__asm { test ecx, ecx }
	__asm { setne al }
	__asm { ret }
	__asm { L_0091bb85: }
	__asm { xor ecx, ecx }
	__asm { xor eax, eax }
	__asm { test ecx, ecx }
	__asm { setne al }
	__asm { ret }
}

extern "C" void fn_0091ca30();
extern "C" void fn_0091d330();
// FUNCTION: ROBLOXSTUDIO 0x0091cb00
extern "C" __declspec(naked) void asm_0091cb00()
{
	__asm { call fn_0091ca30 }
	__asm { test eax, eax }
	__asm { je L_0091cb10 }
	__asm { mov ecx, eax }
	__asm { call fn_0091d330 }
	__asm { L_0091cb10: }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00920a50
extern "C" __declspec(naked) void asm_00920a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0xa0], al }
	__asm { je L_00920a71 }
	__asm { mov byte ptr [ecx + 0xa0], al }
	__asm { mov dword ptr [ebp + 8], 0x12ff3c8 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00920a71: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00920a80
extern "C" __declspec(naked) void asm_00920a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0xa4], eax }
	__asm { je L_00920aa1 }
	__asm { mov dword ptr [ecx + 0xa4], eax }
	__asm { mov dword ptr [ebp + 8], 0x12ff3f4 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00920aa1: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e357e[];
extern "C" void fn_008360a0();
// FUNCTION: ROBLOXSTUDIO 0x00924af0
extern "C" __declspec(naked) void asm_00924af0()
{
	__asm { cmp byte ptr [g_012e357e], 0 }
	__asm { je L_00924b0b }
	__asm { add ecx, 0xfffffe48 }
	__asm { call fn_008360a0 }
	__asm { test eax, eax }
	__asm { jg L_00924b0b }
	__asm { xor al, al }
	__asm { ret }
	__asm { L_00924b0b: }
	__asm { mov al, 1 }
	__asm { ret }
}

extern "C" void fn_00924bb0();
// FUNCTION: ROBLOXSTUDIO 0x00924b10
extern "C" __declspec(naked) void asm_00924b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00924b24 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00924bb0 }
	__asm { L_00924b24: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12206c0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00924ca0();
// FUNCTION: ROBLOXSTUDIO 0x00924b40
extern "C" __declspec(naked) void asm_00924b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00924b54 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00924ca0 }
	__asm { L_00924b54: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12205e8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b5bb0();
extern "C" void fn_00b57280();
// FUNCTION: ROBLOXSTUDIO 0x00929c00
extern "C" __declspec(naked) void asm_00929c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_00b57280 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00929c1f }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_007b5bb0 }
	__asm { L_00929c1f: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009306f0();
// FUNCTION: ROBLOXSTUDIO 0x00930620
extern "C" __declspec(naked) void asm_00930620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00930634 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009306f0 }
	__asm { L_00930634: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1222b68 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00930750();
// FUNCTION: ROBLOXSTUDIO 0x00930650
extern "C" __declspec(naked) void asm_00930650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00930664 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00930750 }
	__asm { L_00930664: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1222bc8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009307b0();
// FUNCTION: ROBLOXSTUDIO 0x009306c0
extern "C" __declspec(naked) void asm_009306c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009306d4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009307b0 }
	__asm { L_009306d4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1222d50 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00935be0
extern "C" __declspec(naked) void asm_00935be0()
{
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { xor dl, dl }
	__asm { test eax, eax }
	__asm { je L_00935bf0 }
	__asm { mov al, byte ptr [eax + 0xd1d] }
	__asm { ret }
	__asm { L_00935bf0: }
	__asm { mov al, dl }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00939f10
extern "C" __declspec(naked) void asm_00939f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x68], al }
	__asm { je L_00939f2b }
	__asm { mov byte ptr [ecx + 0x68], al }
	__asm { mov dword ptr [ebp + 8], 0x13002f8 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00939f2b: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00939f30
extern "C" __declspec(naked) void asm_00939f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x84], eax }
	__asm { je L_00939f51 }
	__asm { mov dword ptr [ecx + 0x84], eax }
	__asm { mov dword ptr [ebp + 8], 0x130042c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00939f51: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0093a020
extern "C" __declspec(naked) void asm_0093a020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x69], al }
	__asm { je L_0093a03b }
	__asm { mov byte ptr [ecx + 0x69], al }
	__asm { mov dword ptr [ebp + 8], 0x130037c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0093a03b: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0093c4b0
extern "C" __declspec(naked) void asm_0093c4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0xdd], al }
	__asm { je L_0093c4d1 }
	__asm { mov byte ptr [ecx + 0xdd], al }
	__asm { mov dword ptr [ebp + 8], 0x13004dc }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0093c4d1: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0093c780
extern "C" __declspec(naked) void asm_0093c780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ecx + 0xe8] }
	__asm { je L_0093c7a1 }
	__asm { mov dword ptr [ecx + 0xe8], eax }
	__asm { mov dword ptr [ebp + 8], 0x1300534 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0093c7a1: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0093d330
extern "C" __declspec(naked) void asm_0093d330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x3c] }
	__asm { test ecx, ecx }
	__asm { je L_0093d34e }
	__asm { mov eax, dword ptr [ecx + 0x98] }
	__asm { add ecx, 0x98 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0x28] }
	__asm { L_0093d34e: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00951a90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00952ee0
extern "C" __declspec(naked) void asm_00952ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00951a90 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { je L_00952f01 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00952f01: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00951af0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00952f10
extern "C" __declspec(naked) void asm_00952f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00951af0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { je L_00952f31 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00952f31: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00951b50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00952f40
extern "C" __declspec(naked) void asm_00952f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00951b50 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { je L_00952f61 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00952f61: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00951d90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00953060
extern "C" __declspec(naked) void asm_00953060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00951d90 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { je L_00953081 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00953081: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00953740
extern "C" __declspec(naked) void asm_00953740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe84514 }
	__asm { je L_0095375b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0095375b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00955070
extern "C" __declspec(naked) void asm_00955070()
{
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_0095507e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0095507e: }
	__asm { ret }
}

extern "C" void fn_009557f0();
// FUNCTION: ROBLOXSTUDIO 0x009557c0
extern "C" __declspec(naked) void asm_009557c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009557d4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009557f0 }
	__asm { L_009557d4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1228870 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00960c10();
// FUNCTION: ROBLOXSTUDIO 0x00960a40
extern "C" __declspec(naked) void asm_00960a40()
{
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { test eax, eax }
	__asm { je L_00960a4f }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00960c10 }
	__asm { L_00960a4f: }
	__asm { ret }
}

extern "C" void fn_00968e80();
// FUNCTION: ROBLOXSTUDIO 0x00968f00
extern "C" __declspec(naked) void asm_00968f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00968e80 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00968f1a }
	__asm { mov eax, dword ptr [eax + 0x148] }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00968f1a: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00969740
extern "C" __declspec(naked) void asm_00969740()
{
	__asm { cmp dword ptr [ecx + 0x68], 0 }
	__asm { jne L_0096974f }
	__asm { cmp dword ptr [ecx + 0x64], 2 }
	__asm { jne L_0096974f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0096974f: }
	__asm { xor al, al }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00969760
extern "C" __declspec(naked) void asm_00969760()
{
	__asm { cmp dword ptr [ecx + 0x68], 2 }
	__asm { jne L_0096976f }
	__asm { cmp dword ptr [ecx + 0x64], 2 }
	__asm { jne L_0096976f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0096976f: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" void fn_00969d30();
// FUNCTION: ROBLOXSTUDIO 0x00969c10
extern "C" __declspec(naked) void asm_00969c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00969c24 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00969d30 }
	__asm { L_00969c24: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x122ada8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00969da0();
// FUNCTION: ROBLOXSTUDIO 0x00969c40
extern "C" __declspec(naked) void asm_00969c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00969c54 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00969da0 }
	__asm { L_00969c54: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x122ac70 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00969e00();
// FUNCTION: ROBLOXSTUDIO 0x00969c70
extern "C" __declspec(naked) void asm_00969c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00969c84 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00969e00 }
	__asm { L_00969c84: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x122ace8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00969e70();
// FUNCTION: ROBLOXSTUDIO 0x00969ca0
extern "C" __declspec(naked) void asm_00969ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00969cb4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00969e70 }
	__asm { L_00969cb4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x122abf8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00969ed0();
// FUNCTION: ROBLOXSTUDIO 0x00969cd0
extern "C" __declspec(naked) void asm_00969cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00969ce4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00969ed0 }
	__asm { L_00969ce4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x122ab70 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00969f40();
// FUNCTION: ROBLOXSTUDIO 0x00969d00
extern "C" __declspec(naked) void asm_00969d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00969d14 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00969f40 }
	__asm { L_00969d14: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x122ae28 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00969fc0
extern "C" __declspec(naked) void asm_00969fc0()
{
	__asm { cmp dword ptr [ecx + 0x70], 1 }
	__asm { jne L_00969fd2 }
	__asm { cmp byte ptr [ecx + 0x80], 0 }
	__asm { je L_00969fd2 }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_00969fd2: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0096c2f0
extern "C" __declspec(naked) void asm_0096c2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_0096c304 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0096c304: }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_0097bdb0();
// FUNCTION: ROBLOXSTUDIO 0x0097bc90
extern "C" __declspec(naked) void asm_0097bc90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0097bca4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_0097bdb0 }
	__asm { L_0097bca4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x122cc98 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0097bea0();
// FUNCTION: ROBLOXSTUDIO 0x0097bcc0
extern "C" __declspec(naked) void asm_0097bcc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0097bcd4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_0097bea0 }
	__asm { L_0097bcd4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x122cb98 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0097bf90();
// FUNCTION: ROBLOXSTUDIO 0x0097bcf0
extern "C" __declspec(naked) void asm_0097bcf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0097bd04 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_0097bf90 }
	__asm { L_0097bd04: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x122d090 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0097c080();
// FUNCTION: ROBLOXSTUDIO 0x0097bd20
extern "C" __declspec(naked) void asm_0097bd20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0097bd34 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_0097c080 }
	__asm { L_0097bd34: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x122cf80 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0097c170();
// FUNCTION: ROBLOXSTUDIO 0x0097bd50
extern "C" __declspec(naked) void asm_0097bd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0097bd64 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_0097c170 }
	__asm { L_0097bd64: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x122cde8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0097c260();
// FUNCTION: ROBLOXSTUDIO 0x0097bd80
extern "C" __declspec(naked) void asm_0097bd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0097bd94 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_0097c260 }
	__asm { L_0097bd94: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x122d208 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0097e940
extern "C" __declspec(naked) void asm_0097e940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x7e], al }
	__asm { je L_0097e95b }
	__asm { mov byte ptr [ecx + 0x7e], al }
	__asm { mov dword ptr [ebp + 8], 0x13017f8 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0097e95b: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0097e960
extern "C" __declspec(naked) void asm_0097e960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [ecx + 0x75] }
	__asm { je L_0097e97b }
	__asm { mov byte ptr [ecx + 0x75], al }
	__asm { mov dword ptr [ebp + 8], 0x1301678 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0097e97b: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0097ea50
extern "C" __declspec(naked) void asm_0097ea50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x78], al }
	__asm { je L_0097ea6b }
	__asm { mov byte ptr [ecx + 0x78], al }
	__asm { mov dword ptr [ebp + 8], 0x13016fc }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0097ea6b: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0097ea70
extern "C" __declspec(naked) void asm_0097ea70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [ecx + 0x76] }
	__asm { je L_0097ea8b }
	__asm { mov byte ptr [ecx + 0x76], al }
	__asm { mov dword ptr [ebp + 8], 0x13016a4 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0097ea8b: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00424480();
extern "C" void fn_00c2bee0();
// FUNCTION: ROBLOXSTUDIO 0x00984290
extern "C" __declspec(naked) void asm_00984290()
{
	__asm { push 1 }
	__asm { push ecx }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_009842b2 }
	__asm { call fn_00424480 }
	__asm { cmp byte ptr [eax + 0x8d], 0 }
	__asm { jne L_009842b2 }
	__asm { xor al, al }
	__asm { ret 4 }
	__asm { L_009842b2: }
	__asm { mov al, 1 }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0098e400
extern "C" __declspec(naked) void asm_0098e400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { test edx, edx }
	__asm { je L_0098e415 }
	__asm { fld dword ptr [edx + eax - 0x1c] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0098e415: }
	__asm { xor edx, edx }
	__asm { fld dword ptr [edx + eax] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403040();
// FUNCTION: ROBLOXSTUDIO 0x00990120
extern "C" __declspec(naked) void asm_00990120()
{
	__asm { mov edx, dword ptr [ecx + 0x64] }
	__asm { test edx, edx }
	__asm { je L_0099013e }
	__asm { lea eax, [ecx + 0x70] }
	__asm { push eax }
	__asm { lea eax, [edx + 0xc] }
	__asm { push eax }
	__asm { call fn_00403040 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0099013e }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0099013e: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" void fn_00b9ed20();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00992eb0
extern "C" __declspec(naked) void asm_00992eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { test esi, esi }
	__asm { je L_00992ecf }
	__asm { mov ecx, esi }
	__asm { call fn_00b9ed20 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00992ecf: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009977d0
extern "C" __declspec(naked) void asm_009977d0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xbc] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp eax, 7 }
	__asm { je L_009977f2 }
	__asm { L_009977e3: }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp eax, 7 }
	__asm { jne L_009977e3 }
	__asm { L_009977f2: }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00997800
extern "C" __declspec(naked) void asm_00997800()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xbc] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp eax, 7 }
	__asm { je L_00997822 }
	__asm { L_00997813: }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp eax, 7 }
	__asm { jne L_00997813 }
	__asm { L_00997822: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00b587f0();
extern "C" void fn_00b58c10();
// FUNCTION: ROBLOXSTUDIO 0x0099af80
extern "C" __declspec(naked) void asm_0099af80()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x18], 0 }
	__asm { je L_0099af95 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00b58c10 }
	__asm { add esp, 4 }
	__asm { L_0099af95: }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00b587f0 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [esi + 0x14], 0 }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0099c810
extern "C" __declspec(naked) void asm_0099c810()
{
	__asm { cmp dword ptr [ecx + 0xc0], 0 }
	__asm { jle L_0099c822 }
	__asm { mov eax, dword ptr [ecx + 0xbc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { ret }
	__asm { L_0099c822: }
	__asm { xor eax, eax }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0099cca0
extern "C" __declspec(naked) void asm_0099cca0()
{
	__asm { cmp dword ptr [ecx + 0x9c], 0 }
	__asm { jle L_0099ccb2 }
	__asm { mov eax, dword ptr [ecx + 0x98] }
	__asm { mov eax, dword ptr [eax] }
	__asm { ret }
	__asm { L_0099ccb2: }
	__asm { xor eax, eax }
	__asm { ret }
}

extern "C" void fn_0099cd20();
// FUNCTION: ROBLOXSTUDIO 0x0099ccf0
extern "C" __declspec(naked) void asm_0099ccf0()
{
	__asm { cmp dword ptr [ecx + 0xc0], 0 }
	__asm { jle L_0099cd08 }
	__asm { mov eax, dword ptr [ecx + 0xbc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push eax }
	__asm { call fn_0099cd20 }
	__asm { ret }
	__asm { L_0099cd08: }
	__asm { xor eax, eax }
	__asm { push eax }
	__asm { call fn_0099cd20 }
	__asm { ret }
}

extern "C" void fn_0099dd50();
// FUNCTION: ROBLOXSTUDIO 0x0099cd80
extern "C" __declspec(naked) void asm_0099cd80()
{
	__asm { cmp dword ptr [ecx + 0xb8], 0 }
	__asm { jle L_0099cd9b }
	__asm { mov eax, dword ptr [ecx + 0xb4] }
	__asm { add ecx, -8 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push eax }
	__asm { call fn_0099dd50 }
	__asm { ret }
	__asm { L_0099cd9b: }
	__asm { xor eax, eax }
	__asm { push eax }
	__asm { add ecx, -8 }
	__asm { call fn_0099dd50 }
	__asm { ret }
}

extern "C" void fn_0099c2c0();
// FUNCTION: ROBLOXSTUDIO 0x0099d3b0
extern "C" __declspec(naked) void asm_0099d3b0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x8c], 0 }
	__asm { jne L_0099d3c1 }
	__asm { call fn_0099c2c0 }
	__asm { L_0099d3c1: }
	__asm { mov eax, dword ptr [esi + 0x8c] }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0099e570
extern "C" __declspec(naked) void asm_0099e570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [ecx + 0x78] }
	__asm { je L_0099e589 }
	__asm { mov byte ptr [ecx + 0x78], al }
	__asm { mov ecx, dword ptr [ecx + 0x108] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0099e589: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0099ea70
extern "C" __declspec(naked) void asm_0099ea70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [ecx + eax*4 + 0x120], edx }
	__asm { je L_0099ea89 }
	__asm { mov dword ptr [ecx + eax*4 + 0x120], edx }
	__asm { L_0099ea89: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e357e[];
// FUNCTION: ROBLOXSTUDIO 0x009a10a0
extern "C" __declspec(naked) void asm_009a10a0()
{
	__asm { cmp byte ptr [g_012e357e], 0 }
	__asm { je L_009a10b8 }
	__asm { mov eax, dword ptr [ecx - 0x34] }
	__asm { add ecx, -0x34 }
	__asm { call dword ptr [eax] }
	__asm { test eax, eax }
	__asm { jne L_009a10b8 }
	__asm { xor al, al }
	__asm { ret }
	__asm { L_009a10b8: }
	__asm { mov al, 1 }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009a3820
extern "C" __declspec(naked) void asm_009a3820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x88], eax }
	__asm { je L_009a3841 }
	__asm { mov dword ptr [ecx + 0x88], eax }
	__asm { mov dword ptr [ebp + 8], 0x13036d4 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_009a3841: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009a3850
extern "C" __declspec(naked) void asm_009a3850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x8c], eax }
	__asm { je L_009a3871 }
	__asm { mov dword ptr [ecx + 0x8c], eax }
	__asm { mov dword ptr [ebp + 8], 0x1303708 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_009a3871: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009a3e60
extern "C" __declspec(naked) void asm_009a3e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x7c], eax }
	__asm { je L_009a3e7b }
	__asm { mov dword ptr [ecx + 0x7c], eax }
	__asm { mov dword ptr [ebp + 8], 0x13037d4 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_009a3e7b: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009b07b0();
// FUNCTION: ROBLOXSTUDIO 0x009b06f0
extern "C" __declspec(naked) void asm_009b06f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009b0704 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009b07b0 }
	__asm { L_009b0704: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1234f10 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b08a0();
// FUNCTION: ROBLOXSTUDIO 0x009b0720
extern "C" __declspec(naked) void asm_009b0720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009b0734 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009b08a0 }
	__asm { L_009b0734: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1234dd0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b0990();
// FUNCTION: ROBLOXSTUDIO 0x009b0750
extern "C" __declspec(naked) void asm_009b0750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009b0764 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009b0990 }
	__asm { L_009b0764: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1234b80 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b0a80();
// FUNCTION: ROBLOXSTUDIO 0x009b0780
extern "C" __declspec(naked) void asm_009b0780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009b0794 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009b0a80 }
	__asm { L_009b0794: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1234ca8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b6410();
// FUNCTION: ROBLOXSTUDIO 0x009b63e0
extern "C" __declspec(naked) void asm_009b63e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009b63f4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009b6410 }
	__asm { L_009b63f4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1238e78 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009bfe00();
// FUNCTION: ROBLOXSTUDIO 0x009bfd00
extern "C" __declspec(naked) void asm_009bfd00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009bfd14 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009bfe00 }
	__asm { L_009bfd14: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x123a988 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009bff50();
// FUNCTION: ROBLOXSTUDIO 0x009bfd30
extern "C" __declspec(naked) void asm_009bfd30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009bfd44 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009bff50 }
	__asm { L_009bfd44: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x123a798 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009c0010();
// FUNCTION: ROBLOXSTUDIO 0x009bfd60
extern "C" __declspec(naked) void asm_009bfd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009bfd74 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009c0010 }
	__asm { L_009bfd74: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x123ab08 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009c0100();
// FUNCTION: ROBLOXSTUDIO 0x009bfd90
extern "C" __declspec(naked) void asm_009bfd90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009bfda4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009c0100 }
	__asm { L_009bfda4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x123ac18 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009c8f20
extern "C" __declspec(naked) void asm_009c8f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { test edx, edx }
	__asm { je L_009c8f35 }
	__asm { fld qword ptr [edx + eax - 0x1c] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009c8f35: }
	__asm { xor edx, edx }
	__asm { fld qword ptr [edx + eax] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009c9c60();
// FUNCTION: ROBLOXSTUDIO 0x009c9b40
extern "C" __declspec(naked) void asm_009c9b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009c9b54 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009c9c60 }
	__asm { L_009c9b54: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x123c108 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009c9d50();
// FUNCTION: ROBLOXSTUDIO 0x009c9b70
extern "C" __declspec(naked) void asm_009c9b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009c9b84 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009c9d50 }
	__asm { L_009c9b84: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x123c578 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009c9e40();
// FUNCTION: ROBLOXSTUDIO 0x009c9ba0
extern "C" __declspec(naked) void asm_009c9ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009c9bb4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009c9e40 }
	__asm { L_009c9bb4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x123c4a0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009c9f30();
// FUNCTION: ROBLOXSTUDIO 0x009c9bd0
extern "C" __declspec(naked) void asm_009c9bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009c9be4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009c9f30 }
	__asm { L_009c9be4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x123c3c0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009ca020();
// FUNCTION: ROBLOXSTUDIO 0x009c9c00
extern "C" __declspec(naked) void asm_009c9c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009c9c14 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009ca020 }
	__asm { L_009c9c14: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x123c2e8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009ca110();
// FUNCTION: ROBLOXSTUDIO 0x009c9c30
extern "C" __declspec(naked) void asm_009c9c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009c9c44 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009ca110 }
	__asm { L_009c9c44: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x123c210 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009ccfd0
extern "C" __declspec(naked) void asm_009ccfd0()
{
	__asm { mov eax, dword ptr [ecx + 0x84] }
	__asm { cmp eax, 0xd }
	__asm { je L_009ccfe5 }
	__asm { cmp eax, 0x10f }
	__asm { je L_009ccfe5 }
	__asm { xor al, al }
	__asm { ret }
	__asm { L_009ccfe5: }
	__asm { mov al, 1 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009cd030
extern "C" __declspec(naked) void asm_009cd030()
{
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 0x84], 0x114 }
	__asm { sete al }
	__asm { ret }
	__asm { mov eax, dword ptr [ecx + 0x64] }
	__asm { cmp eax, 5 }
	__asm { je L_009cd050 }
	__asm { cmp eax, 6 }
	__asm { je L_009cd050 }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_009cd050: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009cd0e0
extern "C" __declspec(naked) void asm_009cd0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x68], eax }
	__asm { je L_009cd0fb }
	__asm { mov dword ptr [ecx + 0x68], eax }
	__asm { mov dword ptr [ebp + 8], 0x1304d80 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_009cd0fb: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009cd100
extern "C" __declspec(naked) void asm_009cd100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x64], eax }
	__asm { je L_009cd11b }
	__asm { mov dword ptr [ecx + 0x64], eax }
	__asm { mov dword ptr [ebp + 8], 0x1304d4c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_009cd11b: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009cd120
extern "C" __declspec(naked) void asm_009cd120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x84], eax }
	__asm { je L_009cd141 }
	__asm { mov dword ptr [ecx + 0x84], eax }
	__asm { mov dword ptr [ebp + 8], 0x1304e0c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_009cd141: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009ceb50
extern "C" __declspec(naked) void asm_009ceb50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_009ceb65 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { add ecx, 4 }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_009ceb65: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bba8c0();
// FUNCTION: ROBLOXSTUDIO 0x009d51e0
extern "C" __declspec(naked) void asm_009d51e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x328] }
	__asm { test ecx, ecx }
	__asm { je L_009d51f3 }
	__asm { pop ebp }
	__asm { jmp fn_00bba8c0 }
	__asm { L_009d51f3: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009d7f50
extern "C" __declspec(naked) void asm_009d7f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { je L_009d7f6b }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { add ecx, 8 }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { call dword ptr [eax] }
	__asm { L_009d7f6b: }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009d8480
extern "C" __declspec(naked) void asm_009d8480()
{
	__asm { mov ecx, dword ptr [ecx + 0x328] }
	__asm { test ecx, ecx }
	__asm { je L_009d848f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax + 0x34] }
	__asm { L_009d848f: }
	__asm { mov eax, 0x12 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009d8f70
extern "C" __declspec(naked) void asm_009d8f70()
{
	__asm { mov eax, dword ptr [ecx + 0x268] }
	__asm { test eax, eax }
	__asm { jne L_009d8f85 }
	__asm { mov eax, dword ptr [ecx + 0x298] }
	__asm { test eax, eax }
	__asm { jne L_009d8f85 }
	__asm { ret }
	__asm { L_009d8f85: }
	__asm { mov eax, dword ptr [eax + 0xe0] }
	__asm { ret }
}

extern "C" void fn_009d9980();
// FUNCTION: ROBLOXSTUDIO 0x009d98f0
extern "C" __declspec(naked) void asm_009d98f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009d9904 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009d9980 }
	__asm { L_009d9904: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x123fd00 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d9a70();
// FUNCTION: ROBLOXSTUDIO 0x009d9920
extern "C" __declspec(naked) void asm_009d9920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009d9934 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009d9a70 }
	__asm { L_009d9934: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x123fec8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d9b60();
// FUNCTION: ROBLOXSTUDIO 0x009d9950
extern "C" __declspec(naked) void asm_009d9950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009d9964 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_009d9b60 }
	__asm { L_009d9964: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x123fdd0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}
