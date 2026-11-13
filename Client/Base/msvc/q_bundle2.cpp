// Bundled inline-assembly functions (merged from asmify14).

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_010380b8[];
extern "C" void fn_006dea00();
extern "C" void fn_006e0dc0();
extern "C" void fn_006fc690();
// FUNCTION: ROBLOXSTUDIO 0x00d04c10
extern "C" __declspec(naked) void asm_00d04c10()
{
	__asm { push -1 }
	__asm { push 0xd6eae8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, dword ptr [esp + 0x2c] }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mulss xmm0, dword ptr [esp + 0x38] }
	__asm { mulss xmm0, dword ptr [g_010380b8] }
	__asm { movss dword ptr [esp + 0x2c], xmm0 }
	__asm { call fn_006dea00 }
	__asm { mov dword ptr [esp + 0xc], 0 }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { mov dword ptr [esp + 8], 0xe32df8 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [esp + 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [esp + 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss dword ptr [esp + 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [esp + 0x2c] }
	__asm { movss dword ptr [esp + 0x18], xmm0 }
	__asm { mov ecx, dword ptr [esp + 0x30] }
	__asm { push 0 }
	__asm { push 0x12e0038 }
	__asm { push dword ptr [esp + 0x3c] }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { lea eax, [ecx + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x3c], 0 }
	__asm { call fn_006fc690 }
	__asm { fstp qword ptr [esp + 0x18] }
	__asm { add esp, 0x18 }
	__asm { call fn_006e0dc0 }
	__asm { fld qword ptr [esp] }
	__asm { fucomip st(0), st(1) }
	__asm { fstp st(0) }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00d04ce9 }
	__asm { mov al, 1 }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x28 }
	__asm { ret }
	__asm { L_00d04ce9: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { xor al, al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x28 }
	__asm { ret }
}

extern "C" char g_010380b8[];
extern "C" void fn_006dea00();
extern "C" void fn_006e0dc0();
extern "C" void fn_006fcc20();
extern "C" void fn_007148c0();
// FUNCTION: ROBLOXSTUDIO 0x00d04d00
extern "C" __declspec(naked) void asm_00d04d00()
{
	__asm { sub esp, 0x30 }
	__asm { mov eax, dword ptr [esp + 0x34] }
	__asm { push 0x12e0038 }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { fmul dword ptr [esp + 0x44] }
	__asm { mulss xmm0, dword ptr [esp + 0x44] }
	__asm { push dword ptr [esp + 0x40] }
	__asm { lea eax, [esp + 0x10] }
	__asm { fmul dword ptr [g_010380b8] }
	__asm { mulss xmm0, dword ptr [g_010380b8] }
	__asm { push ecx }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { movss dword ptr [esp + 0x14], xmm0 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { call fn_006dea00 }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x28] }
	__asm { call fn_007148c0 }
	__asm { mov ecx, dword ptr [esp + 0x40] }
	__asm { push eax }
	__asm { lea eax, [ecx + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { call fn_006fcc20 }
	__asm { fstp qword ptr [esp + 0x14] }
	__asm { add esp, 0x14 }
	__asm { call fn_006e0dc0 }
	__asm { fld qword ptr [esp] }
	__asm { fucomip st(0), st(1) }
	__asm { fstp st(0) }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00d04d8f }
	__asm { mov al, 1 }
	__asm { add esp, 0x30 }
	__asm { ret }
	__asm { L_00d04d8f: }
	__asm { xor al, al }
	__asm { add esp, 0x30 }
	__asm { ret }
}

extern "C" void fn_00d063c0();
// FUNCTION: ROBLOXSTUDIO 0x00d07c00
extern "C" __declspec(naked) void asm_00d07c00()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00d063c0 }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { movss dword ptr [esp + 0xc], xmm1 }
	__asm { fld dword ptr [esp + 0xc] }
	__asm { movss dword ptr [esp + 0x10], xmm3 }
	__asm { fmul st(0), st(0) }
	__asm { movss dword ptr [esp + 4], xmm2 }
	__asm { fld dword ptr [esp + 0x10] }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { fmul st(0), st(0) }
	__asm { mov eax, esi }
	__asm { faddp st(1), st(0) }
	__asm { fld dword ptr [esp + 4] }
	__asm { fmul st(0), st(0) }
	__asm { faddp st(1), st(0) }
	__asm { fsqrt }
	__asm { fld1 }
	__asm { fdivrp st(1), st(0) }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { movss xmm0, dword ptr [esp + 0xc] }
	__asm { mulss xmm1, xmm0 }
	__asm { mulss xmm3, xmm0 }
	__asm { movss dword ptr [esi], xmm1 }
	__asm { mulss xmm2, xmm0 }
	__asm { movss dword ptr [esi + 4], xmm3 }
	__asm { movss dword ptr [esi + 8], xmm2 }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [esi + 0x3c] }
	__asm { fld dword ptr [ecx + 4] }
	__asm { fstp dword ptr [esi + 0x40] }
	__asm { fld dword ptr [ecx + 8] }
	__asm { mov cl, byte ptr [esp + 0x18] }
	__asm { fstp dword ptr [esi + 0x44] }
	__asm { mov byte ptr [esi + 0x49], cl }
	__asm { mov cl, byte ptr [esp + 0x1c] }
	__asm { mov byte ptr [esi + 0x4a], cl }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00d063c0 }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov cl, byte ptr [esp + 0x20] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { movss dword ptr [esi], xmm0 }
	__asm { movss xmm0, dword ptr [esp + 0x14] }
	__asm { movss dword ptr [esi + 4], xmm1 }
	__asm { movss dword ptr [esi + 8], xmm2 }
	__asm { mov dword ptr [esi + 0xc], 0x3f800000 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi + 0x3c] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0x40] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { fstp dword ptr [esi + 0x44] }
	__asm { movss dword ptr [esi + 0x30], xmm0 }
	__asm { movss xmm0, dword ptr [esp + 0x18] }
	__asm { movss dword ptr [esi + 0x34], xmm0 }
	__asm { movss xmm0, dword ptr [esp + 0x1c] }
	__asm { movss dword ptr [esi + 0x38], xmm0 }
	__asm { mov byte ptr [esi + 0x49], cl }
	__asm { mov cl, byte ptr [esp + 0x24] }
	__asm { mov byte ptr [esi + 0x4a], cl }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fc992[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b8aae();
extern "C" void fn_006b9740();
extern "C" void fn_00b5b160();
// FUNCTION: ROBLOXSTUDIO 0x00d08560
extern "C" __declspec(naked) void asm_00d08560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f03e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov al, byte ptr [g_012fc992] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test al, al }
	__asm { je L_00d085c4 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xf11474 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { mov al, byte ptr [g_012fc992] }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00d085c4 }
	__asm { push dword ptr [esi + 0x24] }
	__asm { movzx eax, al }
	__asm { push dword ptr [esi + 0x14] }
	__asm { push dword ptr [esi + 4] }
	__asm { push 0xf11494 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00d085c4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00d0868e }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { je L_00d0860a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d085f5 }
	__asm { push 0x28 }
	__asm { push 0xf114c0 }
	__asm { push 0xf11510 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d0860a }
	__asm { L_00d085f5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf11530 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d0860a: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00d0868e }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { je L_00d0864c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d08637 }
	__asm { push 0x29 }
	__asm { push 0xf114c0 }
	__asm { push 0xf115a8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d0864c }
	__asm { L_00d08637: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf115c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d0864c: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00d0868e }
	__asm { cmp dword ptr [esi + 0x24], 0 }
	__asm { je L_00d0868e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d08679 }
	__asm { push 0x2a }
	__asm { push 0xf114c0 }
	__asm { push 0xf11640 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d0868e }
	__asm { L_00d08679: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf11660 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d0868e: }
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b5b160 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b5b160 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b5b160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
