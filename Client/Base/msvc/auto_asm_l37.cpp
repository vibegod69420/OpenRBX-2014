// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00ae4f60();
// FUNCTION: ROBLOXSTUDIO 0x00ae4300
extern "C" __declspec(naked) void asm_00ae4300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00ae4f60 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { subss xmm0, dword ptr [ecx] }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0xc] }
	__asm { subss xmm0, dword ptr [ecx + 4] }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00ae71a0();
// FUNCTION: ROBLOXSTUDIO 0x00ae5420
extern "C" __declspec(naked) void asm_00ae5420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { call fn_00ae71a0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00b0c570
extern "C" __declspec(naked) void asm_00b0c570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x84] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00b0c59e }
	__asm { movss dword ptr [ecx + 0x84], xmm1 }
	__asm { mov dword ptr [ebp + 8], 0x130d8a4 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00b0c59e: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010380e4[];
// FUNCTION: ROBLOXSTUDIO 0x00b0f1c0
extern "C" __declspec(naked) void asm_00b0f1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { xorps xmm1, xmm1 }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { comiss xmm1, xmm0 }
	__asm { jb L_00b0f1d9 }
	__asm { L_00b0f1d0: }
	__asm { movss dword ptr [ecx + 0x6c], xmm1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b0f1d9: }
	__asm { movss xmm1, dword ptr [g_010380e4] }
	__asm { comiss xmm0, xmm1 }
	__asm { jae L_00b0f1d0 }
	__asm { movss dword ptr [ecx + 0x6c], xmm0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130ec00[];
extern "C" char g_0130ec04[];
// FUNCTION: ROBLOXSTUDIO 0x00b4ac00
extern "C" __declspec(naked) void asm_00b4ac00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [g_0130ec00] }
	__asm { mov eax, dword ptr [g_0130ec04] }
	__asm { add eax, ecx }
	__asm { jne L_00b4ac21 }
	__asm { mov dword ptr [ebp - 4], 0xbf800000 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b4ac21: }
	__asm { cvtsi2ss xmm1, ecx }
	__asm { cvtsi2ss xmm0, eax }
	__asm { divss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ebf8[];
extern "C" char g_0130ebfc[];
// FUNCTION: ROBLOXSTUDIO 0x00b4da20
extern "C" __declspec(naked) void asm_00b4da20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [g_0130ebf8] }
	__asm { mov eax, dword ptr [g_0130ebfc] }
	__asm { add eax, ecx }
	__asm { jne L_00b4da41 }
	__asm { mov dword ptr [ebp - 4], 0xbf800000 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b4da41: }
	__asm { cvtsi2ss xmm1, ecx }
	__asm { cvtsi2ss xmm0, eax }
	__asm { divss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ec24[];
extern "C" char g_0130ec28[];
// FUNCTION: ROBLOXSTUDIO 0x00b508c0
extern "C" __declspec(naked) void asm_00b508c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [g_0130ec24] }
	__asm { mov eax, dword ptr [g_0130ec28] }
	__asm { add eax, ecx }
	__asm { jne L_00b508dc }
	__asm { mov dword ptr [ebp - 4], 0xbf800000 }
	__asm { jmp L_00b508ed }
	__asm { L_00b508dc: }
	__asm { cvtsi2ss xmm1, ecx }
	__asm { cvtsi2ss xmm0, eax }
	__asm { divss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { L_00b508ed: }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov dword ptr [g_0130ec24], 0 }
	__asm { mov dword ptr [g_0130ec28], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b59c80
extern "C" __declspec(naked) void asm_00b59c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea edx, [ecx + 8] }
	__asm { push edi }
	__asm { mov ecx, 9 }
	__asm { mov esi, eax }
	__asm { mov edi, edx }
	__asm { rep movsd }
	__asm { fld dword ptr [eax + 0x24] }
	__asm { fstp dword ptr [edx + 0x24] }
	__asm { fld dword ptr [eax + 0x28] }
	__asm { fstp dword ptr [edx + 0x28] }
	__asm { fld dword ptr [eax + 0x2c] }
	__asm { fstp dword ptr [edx + 0x2c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a356f0();
extern "C" void fn_00a38810();
// FUNCTION: ROBLOXSTUDIO 0x00b71760
extern "C" __declspec(naked) void asm_00b71760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38810 }
	__asm { fsin }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a356f0();
extern "C" void fn_00a38810();
// FUNCTION: ROBLOXSTUDIO 0x00b717c0
extern "C" __declspec(naked) void asm_00b717c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38810 }
	__asm { fcos }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a356f0();
extern "C" void fn_00a38810();
// FUNCTION: ROBLOXSTUDIO 0x00b718e0
extern "C" __declspec(naked) void asm_00b718e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38810 }
	__asm { fld1 }
	__asm { fpatan }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a356f0();
extern "C" void fn_00a38810();
// FUNCTION: ROBLOXSTUDIO 0x00b71a50
extern "C" __declspec(naked) void asm_00b71a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38810 }
	__asm { fsqrt }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b74e30
extern "C" __declspec(naked) void asm_00b74e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { test eax, eax }
	__asm { je L_00b74e59 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00b74e59: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0128e200[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b7a260
extern "C" __declspec(naked) void asm_00b7a260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0128e200] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add esp, 0xc }
	__asm { test ecx, ecx }
	__asm { je L_00b7a28e }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00b7a28e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00b7a28e: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b804c0
extern "C" __declspec(naked) void asm_00b804c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push dword ptr [edx + 0xc] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00b804e9 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00b804e9: }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b8c9e0();
// FUNCTION: ROBLOXSTUDIO 0x00b8e080
extern "C" __declspec(naked) void asm_00b8e080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push 2 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b8c9e0 }
	__asm { movss xmm0, dword ptr [ebp + 0x18] }
	__asm { movss dword ptr [esi + 0xcc], xmm0 }
	__asm { mov dword ptr [esi + 0xd0], 0 }
	__asm { mov dword ptr [esi + 0xd4], 0 }
	__asm { mov dword ptr [esi], 0xe7a4bc }
	__asm { mov dword ptr [esi + 0x1c], 0xe7a508 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x14 }
}
