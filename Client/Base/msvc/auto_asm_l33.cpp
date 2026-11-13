// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x008eaad0
extern "C" __declspec(naked) void asm_008eaad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { movsx eax, word ptr [edx + 4] }
	__asm { movss xmm1, dword ptr [edx] }
	__asm { mulss xmm1, dword ptr [ebp + 0xc] }
	__asm { movsx ecx, word ptr [edx + 0xc] }
	__asm { cvtsi2ss xmm0, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x10] }
	__asm { mulss xmm0, dword ptr [edx + 8] }
	__asm { movss dword ptr [eax], xmm1 }
	__asm { cvtsi2ss xmm1, ecx }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [eax + 4], xmm1 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x008eabd0
extern "C" __declspec(naked) void asm_008eabd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov cx, word ptr [ecx + 4] }
	__asm { subss xmm0, dword ptr [edx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub cx, word ptr [edx + 4] }
	__asm { mov word ptr [eax + 4], cx }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_010385f0[];
// FUNCTION: ROBLOXSTUDIO 0x008eac00
extern "C" __declspec(naked) void asm_008eac00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov cx, word ptr [ecx + 4] }
	__asm { xorps xmm0, xmmword ptr [g_010385f0] }
	__asm { neg cx }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { mov word ptr [eax + 4], cx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x008eac90
extern "C" __declspec(naked) void asm_008eac90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [edx] }
	__asm { addss xmm0, dword ptr [ecx] }
	__asm { mov dx, word ptr [edx + 4] }
	__asm { add dx, word ptr [ecx + 4] }
	__asm { mov word ptr [eax + 4], dx }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008f3930();
// FUNCTION: ROBLOXSTUDIO 0x008f3b90
extern "C" __declspec(naked) void asm_008f3b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008f3930 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_008f3bbd }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_008f3bbd: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00900080
extern "C" __declspec(naked) void asm_00900080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ecx + 0x6c], xmm0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00900130
extern "C" __declspec(naked) void asm_00900130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ecx + 0x70], xmm0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00914ec0
extern "C" __declspec(naked) void asm_00914ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x8c] }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [eax + 0xcc], xmm0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00b8f8d0();
// FUNCTION: ROBLOXSTUDIO 0x00914f90
extern "C" __declspec(naked) void asm_00914f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x8c] }
	__asm { ucomiss xmm0, dword ptr [ecx + 0x98] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00914fc6 }
	__asm { fld dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00b8f8d0 }
	__asm { push 0x12fedac }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00914fc6: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009152f0
extern "C" __declspec(naked) void asm_009152f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 0x8c] }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, dword ptr [edx + 0xd0] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00915320 }
	__asm { movss dword ptr [edx + 0xd0], xmm0 }
	__asm { mov dword ptr [ebp + 8], 0x12fed54 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00915320: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00915330
extern "C" __declspec(naked) void asm_00915330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 0x8c] }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, dword ptr [edx + 0xa8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00915360 }
	__asm { movss dword ptr [edx + 0xa8], xmm0 }
	__asm { mov dword ptr [ebp + 8], 0x12fed54 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00915360: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0091b930
extern "C" __declspec(naked) void asm_0091b930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x1fc] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0091b95e }
	__asm { movss dword ptr [ecx + 0x1fc], xmm1 }
	__asm { mov dword ptr [ebp + 8], 0x12fefcc }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0091b95e: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0091ba30
extern "C" __declspec(naked) void asm_0091ba30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x204] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0091ba5e }
	__asm { movss dword ptr [ecx + 0x204], xmm1 }
	__asm { mov dword ptr [ebp + 8], 0x12ff024 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0091ba5e: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0091ba70
extern "C" __declspec(naked) void asm_0091ba70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x200] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0091ba9e }
	__asm { movss dword ptr [ecx + 0x200], xmm1 }
	__asm { mov dword ptr [ebp + 8], 0x12feff8 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0091ba9e: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_0091ca30();
extern "C" void fn_0091d330();
// FUNCTION: ROBLOXSTUDIO 0x0091cbc0
extern "C" __declspec(naked) void asm_0091cbc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movss xmm0, dword ptr [esi + 0x98] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0091cc00 }
	__asm { push 0x12ff228 }
	__asm { movss dword ptr [esi + 0x98], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { call fn_0091ca30 }
	__asm { test eax, eax }
	__asm { je L_0091cc00 }
	__asm { mov ecx, eax }
	__asm { call fn_0091d330 }
	__asm { L_0091cc00: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_0091ca30();
extern "C" void fn_0091d330();
// FUNCTION: ROBLOXSTUDIO 0x0091cc10
extern "C" __declspec(naked) void asm_0091cc10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movss xmm0, dword ptr [esi + 0x94] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0091cc50 }
	__asm { push 0x12ff1fc }
	__asm { movss dword ptr [esi + 0x94], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { call fn_0091ca30 }
	__asm { test eax, eax }
	__asm { je L_0091cc50 }
	__asm { mov ecx, eax }
	__asm { call fn_0091d330 }
	__asm { L_0091cc50: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010385f0[];
extern "C" void fn_006d1e60();
// FUNCTION: ROBLOXSTUDIO 0x009245c0
extern "C" __declspec(naked) void asm_009245c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 2 }
	__asm { push eax }
	__asm { add ecx, 0x1c4 }
	__asm { call fn_006d1e60 }
	__asm { movss xmm1, dword ptr [g_010385f0] }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { xorps xmm0, xmm1 }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 4] }
	__asm { xorps xmm0, xmm1 }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { xorps xmm0, xmm1 }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00924710
extern "C" __declspec(naked) void asm_00924710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0x40] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ecx + 0x44] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0092473a }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_0092473a: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0092b6b0();
// FUNCTION: ROBLOXSTUDIO 0x00928bb0
extern "C" __declspec(naked) void asm_00928bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], 0x41200000 }
	__asm { mov dword ptr [ebp - 4], 0x41200000 }
	__asm { call fn_0092b6b0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0093c7b0
extern "C" __declspec(naked) void asm_0093c7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 0xf4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0093c7da }
	__asm { movss dword ptr [ecx + 0xf4], xmm0 }
	__asm { mov dword ptr [ebp + 8], 0x1300568 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0093c7da: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038034[];
// FUNCTION: ROBLOXSTUDIO 0x0093d580
extern "C" __declspec(naked) void asm_0093d580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { movss xmm1, dword ptr [ecx] }
	__asm { comiss xmm1, dword ptr [g_01038034] }
	__asm { jbe L_0093d5a6 }
	__asm { cvtsi2ss xmm0, dword ptr [ecx + 8] }
	__asm { divss xmm0, xmm1 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0093d5a6: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038034[];
// FUNCTION: ROBLOXSTUDIO 0x0093d6d0
extern "C" __declspec(naked) void asm_0093d6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { movss xmm1, dword ptr [ecx + 4] }
	__asm { comiss xmm1, dword ptr [g_01038034] }
	__asm { jbe L_0093d6f7 }
	__asm { cvtsi2ss xmm0, dword ptr [ecx + 8] }
	__asm { divss xmm0, xmm1 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0093d6f7: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0093d710
extern "C" __declspec(naked) void asm_0093d710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { test eax, eax }
	__asm { jle L_0093d734 }
	__asm { movss xmm1, dword ptr [ecx + 4] }
	__asm { cvtsi2ss xmm0, eax }
	__asm { divss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0093d734: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009438f0
extern "C" __declspec(naked) void asm_009438f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0x6c] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ecx + 0x70] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094391a }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_0094391a: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00955610
extern "C" __declspec(naked) void asm_00955610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00955636 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00955636: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [edx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0095ecd0
extern "C" __declspec(naked) void asm_0095ecd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0x68] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ecx + 0x6c] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0095ecfa }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_0095ecfa: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00963570
extern "C" __declspec(naked) void asm_00963570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0096359c }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_0096359c: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00970700
extern "C" __declspec(naked) void asm_00970700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 0x1a0] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0097072a }
	__asm { movss dword ptr [ecx + 0x1a0], xmm0 }
	__asm { mov dword ptr [ebp + 8], 0x13014bc }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0097072a: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00970730
extern "C" __declspec(naked) void asm_00970730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 0x19c] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0097075a }
	__asm { movss dword ptr [ecx + 0x19c], xmm0 }
	__asm { mov dword ptr [ebp + 8], 0x1301490 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0097075a: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0097c350
extern "C" __declspec(naked) void asm_0097c350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ecx + 0x108], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [ecx + 0x10c], xmm0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e57038[];
extern "C" char g_010381e4[];
// FUNCTION: ROBLOXSTUDIO 0x0097e060
extern "C" __declspec(naked) void asm_0097e060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm2, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [ecx + 0x100] }
	__asm { addss xmm2, dword ptr [ecx + 0xfc] }
	__asm { addss xmm0, dword ptr [ebp + 0xc] }
	__asm { movss xmm1, dword ptr [g_00e57038] }
	__asm { comiss xmm1, xmm2 }
	__asm { movss dword ptr [ecx + 0xfc], xmm2 }
	__asm { movss dword ptr [ecx + 0x100], xmm0 }
	__asm { jae L_0097e0aa }
	__asm { movss xmm1, dword ptr [g_010381e4] }
	__asm { comiss xmm2, xmm1 }
	__asm { jae L_0097e0aa }
	__asm { movaps xmm1, xmm2 }
	__asm { L_0097e0aa: }
	__asm { movss dword ptr [ecx + 0xfc], xmm1 }
	__asm { movss dword ptr [ecx + 0x100], xmm0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0097ec60
extern "C" __declspec(naked) void asm_0097ec60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { addss xmm0, dword ptr [ecx + 0x110] }
	__asm { movss dword ptr [ecx + 0x110], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0xc] }
	__asm { addss xmm0, dword ptr [ecx + 0x114] }
	__asm { movss dword ptr [ecx + 0x114], xmm0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01038034[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00981240
extern "C" __declspec(naked) void asm_00981240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0xa0] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00981277 }
	__asm { comiss xmm1, dword ptr [g_01038034] }
	__asm { jbe L_00981277 }
	__asm { movss dword ptr [ecx + 0xa0], xmm1 }
	__asm { mov dword ptr [ebp + 8], 0x1301c98 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00981277: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038034[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00981280
extern "C" __declspec(naked) void asm_00981280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x9c] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_009812b7 }
	__asm { comiss xmm1, dword ptr [g_01038034] }
	__asm { jb L_009812b7 }
	__asm { movss dword ptr [ecx + 0x9c], xmm1 }
	__asm { mov dword ptr [ebp + 8], 0x1301c6c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_009812b7: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038034[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009812c0
extern "C" __declspec(naked) void asm_009812c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0xa8] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_009812f7 }
	__asm { comiss xmm1, dword ptr [g_01038034] }
	__asm { jbe L_009812f7 }
	__asm { movss dword ptr [ecx + 0xa8], xmm1 }
	__asm { mov dword ptr [ebp + 8], 0x1301cf0 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_009812f7: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038034[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00981300
extern "C" __declspec(naked) void asm_00981300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0xac] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00981337 }
	__asm { comiss xmm1, dword ptr [g_01038034] }
	__asm { jbe L_00981337 }
	__asm { movss dword ptr [ecx + 0xac], xmm1 }
	__asm { mov dword ptr [ebp + 8], 0x1301d1c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00981337: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009813d0
extern "C" __declspec(naked) void asm_009813d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 0xa4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_009813fa }
	__asm { movss dword ptr [ecx + 0xa4], xmm0 }
	__asm { mov dword ptr [ebp + 8], 0x1301cc4 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_009813fa: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0099c730
extern "C" __declspec(naked) void asm_0099c730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [ecx + 0x14] }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00998870();
// FUNCTION: ROBLOXSTUDIO 0x0099e220
extern "C" __declspec(naked) void asm_0099e220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 0x11c] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0099e252 }
	__asm { mov eax, dword ptr [ecx + 0xe0] }
	__asm { movss dword ptr [ecx + 0x11c], xmm0 }
	__asm { test eax, eax }
	__asm { je L_0099e252 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_00998870 }
	__asm { L_0099e252: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00998870();
// FUNCTION: ROBLOXSTUDIO 0x0099e320
extern "C" __declspec(naked) void asm_0099e320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 0x118] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0099e352 }
	__asm { mov eax, dword ptr [ecx + 0xe0] }
	__asm { movss dword ptr [ecx + 0x118], xmm0 }
	__asm { test eax, eax }
	__asm { je L_0099e352 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_00998870 }
	__asm { L_0099e352: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00998ae0();
// FUNCTION: ROBLOXSTUDIO 0x0099e8b0
extern "C" __declspec(naked) void asm_0099e8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0xe0] }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ecx + 0x114], xmm0 }
	__asm { test eax, eax }
	__asm { je L_0099e8d5 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_00998ae0 }
	__asm { L_0099e8d5: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009a1bb0
extern "C" __declspec(naked) void asm_009a1bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea edx, [ecx + 0xac] }
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

extern "C" void fn_009c6b70();
// FUNCTION: ROBLOXSTUDIO 0x009c7510
extern "C" __declspec(naked) void asm_009c7510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { add ecx, 0x10 }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x10] }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { call fn_009c6b70 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x009c8e00
extern "C" __declspec(naked) void asm_009c8e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { je L_009c8e35 }
	__asm { movss xmm0, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { add ecx, 8 }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x10] }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x14] }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { L_009c8e35: }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009dd700
extern "C" __declspec(naked) void asm_009dd700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { xorps xmm0, xmm0 }
	__asm { comiss xmm0, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea eax, [ebp - 4] }
	__asm { ja L_009dd71a }
	__asm { lea eax, [ebp + 8] }
	__asm { L_009dd71a: }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { movss xmm0, dword ptr [ecx + 0x230] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_009dd737 }
	__asm { movss dword ptr [ecx + 0x230], xmm1 }
	__asm { L_009dd737: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009dda50
extern "C" __declspec(naked) void asm_009dda50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { xorps xmm0, xmm0 }
	__asm { comiss xmm0, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea eax, [ebp - 4] }
	__asm { ja L_009dda6a }
	__asm { lea eax, [ebp + 8] }
	__asm { L_009dda6a: }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { movss xmm0, dword ptr [ecx + 0x22c] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_009dda87 }
	__asm { movss dword ptr [ecx + 0x22c], xmm1 }
	__asm { L_009dda87: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010380e4[];
// FUNCTION: ROBLOXSTUDIO 0x009ddac0
extern "C" __declspec(naked) void asm_009ddac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { xorps xmm0, xmm0 }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { comiss xmm0, xmm1 }
	__asm { jae L_009ddae0 }
	__asm { movss xmm0, dword ptr [g_010380e4] }
	__asm { comiss xmm1, xmm0 }
	__asm { jae L_009ddae0 }
	__asm { movaps xmm0, xmm1 }
	__asm { L_009ddae0: }
	__asm { mov ecx, dword ptr [ecx + 0x1fc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { xor eax, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { ucomiss xmm0, dword ptr [ebp + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_009ddb03 }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { mov eax, ecx }
	__asm { xor eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_009ddb03: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009de140
extern "C" __declspec(naked) void asm_009de140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ecx + 0x1f8] }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { xor eax, edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { ucomiss xmm0, dword ptr [ebp - 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_009de176 }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { mov eax, edx }
	__asm { xor eax, dword ptr [ebp + 8] }
	__asm { push 0x1305190 }
	__asm { mov dword ptr [edx], eax }
	__asm { call fn_007b4f50 }
	__asm { L_009de176: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0068a0d0();
// FUNCTION: ROBLOXSTUDIO 0x009ed290
extern "C" __declspec(naked) void asm_009ed290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_009ed2b7 }
	__asm { add eax, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { L_009ed2b7: }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, esi }
	__asm { call fn_0068a0d0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010380e4[];
extern "C" char g_01038248[];
extern "C" void fn_00cf6e2e();
// FUNCTION: ROBLOXSTUDIO 0x009f2300
extern "C" __declspec(naked) void asm_009f2300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { comiss xmm1, dword ptr [g_010380e4] }
	__asm { movss dword ptr [ebp + 8], xmm1 }
	__asm { jb L_009f2325 }
	__asm { mov dword ptr [ebp + 8], 0x3fc90fdb }
	__asm { fld dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f2325: }
	__asm { movss xmm0, dword ptr [g_01038248] }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_009f233e }
	__asm { mov dword ptr [ebp + 8], 0xbfc90fdb }
	__asm { fld dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f233e: }
	__asm { fld dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { jmp fn_00cf6e2e }
}

// FUNCTION: ROBLOXSTUDIO 0x009f3c40
extern "C" __declspec(naked) void asm_009f3c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { and ecx, 0x7f800000 }
	__asm { xor eax, eax }
	__asm { cmp ecx, 0x7f800000 }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009f3d70
extern "C" __declspec(naked) void asm_009f3d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { comiss xmm0, dword ptr [ecx] }
	__asm { jbe L_009f3d9c }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { comiss xmm0, dword ptr [ecx + 4] }
	__asm { jbe L_009f3d9c }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { comiss xmm0, dword ptr [ecx + 8] }
	__asm { jbe L_009f3d9c }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f3d9c: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038034[];
// FUNCTION: ROBLOXSTUDIO 0x009f4a10
extern "C" __declspec(naked) void asm_009f4a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { comiss xmm0, dword ptr [g_01038034] }
	__asm { mov dword ptr [ebp + 8], 0x3f800000 }
	__asm { jae L_009f4a2f }
	__asm { mov dword ptr [ebp + 8], 0xbf800000 }
	__asm { L_009f4a2f: }
	__asm { fld dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038178[];
extern "C" char g_01306164[];
extern "C" char g_01306168[];
// FUNCTION: ROBLOXSTUDIO 0x009f4d10
extern "C" __declspec(naked) void asm_009f4d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movzx eax, byte ptr [ebp + 8] }
	__asm { cvtsi2ss xmm0, eax }
	__asm { mov eax, dword ptr [g_01306168] }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { test al, 1 }
	__asm { jne L_009f4d3b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01306168], eax }
	__asm { mov dword ptr [g_01306164], 0x3cc90fdb }
	__asm { L_009f4d3b: }
	__asm { fld dword ptr [g_01306164] }
	__asm { fmul dword ptr [ebp + 8] }
	__asm { fsub dword ptr [g_01038178] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d1e60();
extern "C" void fn_009f4b20();
// FUNCTION: ROBLOXSTUDIO 0x009f63e0
extern "C" __declspec(naked) void asm_009f63e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 2 }
	__asm { push eax }
	__asm { call fn_006d1e60 }
	__asm { fld dword ptr [eax] }
	__asm { push ecx }
	__asm { fchs }
	__asm { fld dword ptr [eax + 8] }
	__asm { fchs }
	__asm { fxch st(1) }
	__asm { fchs }
	__asm { fxch st(1) }
	__asm { fchs }
	__asm { fpatan }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_009f4b20 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009fa740
extern "C" __declspec(naked) void asm_009fa740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ecx + 0x90], xmm0 }
	__asm { mov dword ptr [ebp + 8], 0x13063b4 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009fa760
extern "C" __declspec(naked) void asm_009fa760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ecx + 0x98], xmm0 }
	__asm { mov dword ptr [ebp + 8], 0x130640c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009fa780
extern "C" __declspec(naked) void asm_009fa780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ecx + 0x94], xmm0 }
	__asm { mov dword ptr [ebp + 8], 0x13063e0 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
}

extern "C" char g_010380e4[];
// FUNCTION: ROBLOXSTUDIO 0x00a0b0c0
extern "C" __declspec(naked) void asm_00a0b0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { movss xmm1, dword ptr [ecx + 0x7c] }
	__asm { xorps xmm0, xmm0 }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00a0b0df }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0b0df: }
	__asm { comiss xmm1, dword ptr [g_010380e4] }
	__asm { jb L_00a0b0f6 }
	__asm { mov dword ptr [ebp - 4], 0x3f800000 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0b0f6: }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9d1ec[];
extern "C" char g_00e9d1f0[];
// FUNCTION: ROBLOXSTUDIO 0x00a0b110
extern "C" __declspec(naked) void asm_00a0b110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { movss xmm1, dword ptr [ecx + 0x80] }
	__asm { movss xmm0, dword ptr [g_00e9d1f0] }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00a0b137 }
	__asm { mov dword ptr [ebp - 4], 0xc1c80000 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0b137: }
	__asm { comiss xmm1, dword ptr [g_00e9d1ec] }
	__asm { jb L_00a0b14e }
	__asm { mov dword ptr [ebp - 4], 0x41c80000 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0b14e: }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038080[];
extern "C" char g_010381e4[];
// FUNCTION: ROBLOXSTUDIO 0x00a0b160
extern "C" __declspec(naked) void asm_00a0b160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { movss xmm1, dword ptr [ecx + 0x78] }
	__asm { movss xmm0, dword ptr [g_01038080] }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00a0b184 }
	__asm { mov dword ptr [ebp - 4], 0x3dcccccd }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0b184: }
	__asm { comiss xmm1, dword ptr [g_010381e4] }
	__asm { jb L_00a0b19b }
	__asm { mov dword ptr [ebp - 4], 0x42c80000 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0b19b: }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a0b270
extern "C" __declspec(naked) void asm_00a0b270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movss xmm0, dword ptr [esi + 0x7c] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0b2a4 }
	__asm { push 0x1306978 }
	__asm { movss dword ptr [esi + 0x7c], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { push 0x13068f4 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00a0b2a4: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a0b320
extern "C" __declspec(naked) void asm_00a0b320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movss xmm0, dword ptr [esi + 0x80] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0b35a }
	__asm { push 0x13069a4 }
	__asm { movss dword ptr [esi + 0x80], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { push 0x1306920 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00a0b35a: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e3ca4c[];
extern "C" char g_00e9d45c[];
extern "C" char g_010381e8[];
// FUNCTION: ROBLOXSTUDIO 0x00a0baf0
extern "C" __declspec(naked) void asm_00a0baf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x6c] }
	__asm { fld dword ptr [ecx + 0x74] }
	__asm { mulss xmm0, dword ptr [g_010381e8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mulss xmm0, dword ptr [g_00e9d45c] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x70] }
	__asm { mulss xmm0, dword ptr [g_010381e8] }
	__asm { mulss xmm0, dword ptr [g_00e3ca4c] }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e9d1ec[];
extern "C" char g_00e9d1f0[];
// FUNCTION: ROBLOXSTUDIO 0x00a0c450
extern "C" __declspec(naked) void asm_00a0c450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { movss xmm1, dword ptr [ecx + 0x88] }
	__asm { movss xmm0, dword ptr [g_00e9d1f0] }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00a0c477 }
	__asm { mov dword ptr [ebp - 4], 0xc1c80000 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0c477: }
	__asm { comiss xmm1, dword ptr [g_00e9d1ec] }
	__asm { jb L_00a0c48e }
	__asm { mov dword ptr [ebp - 4], 0x41c80000 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0c48e: }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038120[];
extern "C" char g_010381c8[];
// FUNCTION: ROBLOXSTUDIO 0x00a0c4a0
extern "C" __declspec(naked) void asm_00a0c4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { movss xmm1, dword ptr [ecx + 0x84] }
	__asm { movss xmm0, dword ptr [g_01038120] }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00a0c4c7 }
	__asm { mov dword ptr [ebp - 4], 0x40000000 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0c4c7: }
	__asm { comiss xmm1, dword ptr [g_010381c8] }
	__asm { jb L_00a0c4de }
	__asm { mov dword ptr [ebp - 4], 0x41f00000 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0c4de: }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a0c5d0
extern "C" __declspec(naked) void asm_00a0c5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movss xmm0, dword ptr [esi + 0x88] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0c60a }
	__asm { push 0x1306b90 }
	__asm { movss dword ptr [esi + 0x88], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { push 0x1306b38 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00a0c60a: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}
