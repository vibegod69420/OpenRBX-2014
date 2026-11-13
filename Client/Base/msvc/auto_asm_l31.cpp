// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x00855e70
extern "C" __declspec(naked) void asm_00855e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0x1e8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ecx + 0x1ec] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00855ea0 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00855ea0: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008781f0
extern "C" __declspec(naked) void asm_008781f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 0x27c] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0087821a }
	__asm { movss dword ptr [ecx + 0x27c], xmm0 }
	__asm { mov dword ptr [ebp + 8], 0x12f9a9c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0087821a: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0087c260
extern "C" __declspec(naked) void asm_0087c260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x2cc] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0087c28e }
	__asm { movss dword ptr [ecx + 0x2cc], xmm1 }
	__asm { mov dword ptr [ebp + 8], 0x12fa83c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0087c28e: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0087c2a0
extern "C" __declspec(naked) void asm_0087c2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x2bc] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0087c2ce }
	__asm { movss dword ptr [ecx + 0x2bc], xmm1 }
	__asm { mov dword ptr [ebp + 8], 0x12fa6a0 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0087c2ce: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_008781f0();
// FUNCTION: ROBLOXSTUDIO 0x0087c340
extern "C" __declspec(naked) void asm_0087c340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movss xmm0, dword ptr [esi + 0x2bc] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0087c36e }
	__asm { push 0x12fa6a0 }
	__asm { movss dword ptr [esi + 0x2bc], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { L_0087c36e: }
	__asm { fld dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_008781f0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0087e680
extern "C" __declspec(naked) void asm_0087e680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x3e8] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0087e6ae }
	__asm { movss dword ptr [ecx + 0x3e8], xmm1 }
	__asm { mov dword ptr [ebp + 8], 0x12faaf4 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0087e6ae: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0087e6c0
extern "C" __declspec(naked) void asm_0087e6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x3d8] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0087e6ee }
	__asm { movss dword ptr [ecx + 0x3d8], xmm1 }
	__asm { mov dword ptr [ebp + 8], 0x12fa958 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0087e6ee: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_008781f0();
// FUNCTION: ROBLOXSTUDIO 0x0087e760
extern "C" __declspec(naked) void asm_0087e760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movss xmm0, dword ptr [esi + 0x3d8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0087e78e }
	__asm { push 0x12fa958 }
	__asm { movss dword ptr [esi + 0x3d8], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { L_0087e78e: }
	__asm { fld dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_008781f0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00883560
extern "C" __declspec(naked) void asm_00883560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x2d4] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0088358e }
	__asm { movss dword ptr [ecx + 0x2d4], xmm1 }
	__asm { mov dword ptr [ebp + 8], 0x12fae78 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0088358e: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008835a0
extern "C" __declspec(naked) void asm_008835a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x2c4] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_008835ce }
	__asm { movss dword ptr [ecx + 0x2c4], xmm1 }
	__asm { mov dword ptr [ebp + 8], 0x12facdc }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_008835ce: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_008781f0();
// FUNCTION: ROBLOXSTUDIO 0x00883640
extern "C" __declspec(naked) void asm_00883640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movss xmm0, dword ptr [esi + 0x2c4] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0088366e }
	__asm { push 0x12facdc }
	__asm { movss dword ptr [esi + 0x2c4], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { L_0088366e: }
	__asm { fld dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_008781f0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00884d10
extern "C" __declspec(naked) void asm_00884d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x3d8] }
	__asm { movss xmm2, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [ebp + 0xc] }
	__asm { ucomiss xmm0, xmm2 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00884d3f }
	__asm { movss xmm0, dword ptr [ecx + 0x3dc] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00884d59 }
	__asm { L_00884d3f: }
	__asm { movss dword ptr [ecx + 0x3d8], xmm2 }
	__asm { push 0x12faefc }
	__asm { movss dword ptr [ecx + 0x3dc], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { L_00884d59: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00884d60
extern "C" __declspec(naked) void asm_00884d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x3e0] }
	__asm { movss xmm2, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [ebp + 0xc] }
	__asm { ucomiss xmm0, xmm2 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00884d8f }
	__asm { movss xmm0, dword ptr [ecx + 0x3e4] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00884da9 }
	__asm { L_00884d8f: }
	__asm { movss dword ptr [ecx + 0x3e0], xmm2 }
	__asm { push 0x12faf28 }
	__asm { movss dword ptr [ecx + 0x3e4], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { L_00884da9: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_010380e4[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00884db0
extern "C" __declspec(naked) void asm_00884db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { xorps xmm0, xmm0 }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { comiss xmm0, xmm1 }
	__asm { jae L_00884dcd }
	__asm { movss xmm0, dword ptr [g_010380e4] }
	__asm { comiss xmm1, xmm0 }
	__asm { jb L_00884dd0 }
	__asm { L_00884dcd: }
	__asm { movaps xmm1, xmm0 }
	__asm { L_00884dd0: }
	__asm { movss xmm0, dword ptr [ecx + 0x3c8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00884df6 }
	__asm { movss dword ptr [ecx + 0x3c8], xmm1 }
	__asm { mov dword ptr [ebp + 8], 0x12faf54 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00884df6: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010380e4[];
extern "C" void fn_00872760();
extern "C" void fn_00876c30();
// FUNCTION: ROBLOXSTUDIO 0x00885b40
extern "C" __declspec(naked) void asm_00885b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [g_010380e4] }
	__asm { sub esp, 0x10 }
	__asm { comiss xmm0, dword ptr [ecx + 0x214] }
	__asm { jbe L_00885b72 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x68] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00872760 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00876c30 }
	__asm { pop esi }
	__asm { L_00885b72: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00885c80
extern "C" __declspec(naked) void asm_00885c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x2bc] }
	__asm { movss xmm2, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [ebp + 0xc] }
	__asm { ucomiss xmm0, xmm2 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00885caf }
	__asm { movss xmm0, dword ptr [ecx + 0x2c0] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00885cc9 }
	__asm { L_00885caf: }
	__asm { movss dword ptr [ecx + 0x2bc], xmm2 }
	__asm { push 0x12fafe8 }
	__asm { movss dword ptr [ecx + 0x2c0], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { L_00885cc9: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00885cd0
extern "C" __declspec(naked) void asm_00885cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x2c4] }
	__asm { movss xmm2, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [ebp + 0xc] }
	__asm { ucomiss xmm0, xmm2 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00885cff }
	__asm { movss xmm0, dword ptr [ecx + 0x2c8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00885d19 }
	__asm { L_00885cff: }
	__asm { movss dword ptr [ecx + 0x2c4], xmm2 }
	__asm { push 0x12fb014 }
	__asm { movss dword ptr [ecx + 0x2c8], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { L_00885d19: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_010380e4[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00885d20
extern "C" __declspec(naked) void asm_00885d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { xorps xmm0, xmm0 }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { comiss xmm0, xmm1 }
	__asm { jae L_00885d3d }
	__asm { movss xmm0, dword ptr [g_010380e4] }
	__asm { comiss xmm1, xmm0 }
	__asm { jb L_00885d40 }
	__asm { L_00885d3d: }
	__asm { movaps xmm1, xmm0 }
	__asm { L_00885d40: }
	__asm { movss xmm0, dword ptr [ecx + 0x2ac] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00885d66 }
	__asm { movss dword ptr [ecx + 0x2ac], xmm1 }
	__asm { mov dword ptr [ebp + 8], 0x12fb040 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00885d66: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_008973b0();
// FUNCTION: ROBLOXSTUDIO 0x00897700
extern "C" __declspec(naked) void asm_00897700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { lea edx, [esi + 0x48] }
	__asm { add ecx, 0x44 }
	__asm { ucomiss xmm0, dword ptr [ecx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00897733 }
	__asm { push edx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_008973b0 }
	__asm { push 0x12fb5cc }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00897733: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_008973b0();
// FUNCTION: ROBLOXSTUDIO 0x00898420
extern "C" __declspec(naked) void asm_00898420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { lea edx, [esi + 0x48] }
	__asm { add ecx, 0x40 }
	__asm { ucomiss xmm0, dword ptr [ecx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00898453 }
	__asm { push edx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_008973b0 }
	__asm { push 0x12fb5f8 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00898453: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_008973b0();
extern "C" void fn_00d09250();
// FUNCTION: ROBLOXSTUDIO 0x008988f0
extern "C" __declspec(naked) void asm_008988f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { lea edx, [esi + 0x48] }
	__asm { add ecx, 0x3c }
	__asm { ucomiss xmm0, dword ptr [ecx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0089892e }
	__asm { push edx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_008973b0 }
	__asm { push 0x12fb5a0 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { lea ecx, [esi + 0x98] }
	__asm { call fn_00d09250 }
	__asm { L_0089892e: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038120[];
// FUNCTION: ROBLOXSTUDIO 0x008a1b20
extern "C" __declspec(naked) void asm_008a1b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movsx eax, word ptr [ebp + 0xc] }
	__asm { movss xmm0, dword ptr [g_01038120] }
	__asm { shl eax, 2 }
	__asm { cvtsi2ss xmm3, eax }
	__asm { movsx eax, word ptr [ebp + 0x10] }
	__asm { shl eax, 2 }
	__asm { cvtsi2ss xmm2, eax }
	__asm { movsx eax, word ptr [ebp + 0x14] }
	__asm { shl eax, 2 }
	__asm { cvtsi2ss xmm1, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { addss xmm3, xmm0 }
	__asm { addss xmm2, xmm0 }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [eax], xmm3 }
	__asm { movss dword ptr [eax + 4], xmm2 }
	__asm { movss dword ptr [eax + 8], xmm1 }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x008a1b70
extern "C" __declspec(naked) void asm_008a1b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movsx eax, word ptr [ebp + 0xc] }
	__asm { movsx ecx, word ptr [ebp + 0x10] }
	__asm { shl eax, 2 }
	__asm { cvtsi2ss xmm0, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { shl ecx, 2 }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { movsx ecx, word ptr [ebp + 0x14] }
	__asm { shl ecx, 2 }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_008a4af0();
// FUNCTION: ROBLOXSTUDIO 0x008a49c0
extern "C" __declspec(naked) void asm_008a49c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008a4af0 }
	__asm { movsx eax, word ptr [ebp - 8] }
	__asm { movsx ecx, word ptr [ebp - 6] }
	__asm { cvtsi2ss xmm0, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { movsx ecx, word ptr [ebp - 4] }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_008a4af0();
// FUNCTION: ROBLOXSTUDIO 0x008a4a10
extern "C" __declspec(naked) void asm_008a4a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 1 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008a4af0 }
	__asm { movsx eax, word ptr [ebp - 8] }
	__asm { movsx ecx, word ptr [ebp - 6] }
	__asm { cvtsi2ss xmm0, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { movsx ecx, word ptr [ebp - 4] }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_010381e4[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008a91a0
extern "C" __declspec(naked) void asm_008a91a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { xorps xmm1, xmm1 }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { comiss xmm1, xmm0 }
	__asm { jae L_008a91c0 }
	__asm { movss xmm1, dword ptr [g_010381e4] }
	__asm { comiss xmm0, xmm1 }
	__asm { jae L_008a91c0 }
	__asm { movaps xmm1, xmm0 }
	__asm { L_008a91c0: }
	__asm { movss xmm0, dword ptr [ecx + 0x98] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_008a91e6 }
	__asm { movss dword ptr [ecx + 0x98], xmm1 }
	__asm { mov dword ptr [ebp + 8], 0x12fc214 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_008a91e6: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010380e4[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008a91f0
extern "C" __declspec(naked) void asm_008a91f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { xorps xmm1, xmm1 }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { comiss xmm1, xmm0 }
	__asm { jae L_008a9210 }
	__asm { movss xmm1, dword ptr [g_010380e4] }
	__asm { comiss xmm0, xmm1 }
	__asm { jae L_008a9210 }
	__asm { movaps xmm1, xmm0 }
	__asm { L_008a9210: }
	__asm { movss xmm0, dword ptr [ecx + 0xa0] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_008a9236 }
	__asm { movss dword ptr [ecx + 0xa0], xmm1 }
	__asm { mov dword ptr [ebp + 8], 0x12fc240 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_008a9236: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x008b1630
extern "C" __declspec(naked) void asm_008b1630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_008b1649 }
	__asm { lea edx, [eax - 0x18] }
	__asm { jmp L_008b164b }
	__asm { L_008b1649: }
	__asm { xor edx, edx }
	__asm { L_008b164b: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_008b1666 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_008b1666: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008bc0e0
extern "C" __declspec(naked) void asm_008bc0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x90] }
	__asm { movss xmm2, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [ebp + 0xc] }
	__asm { ucomiss xmm0, xmm2 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_008bc10f }
	__asm { movss xmm0, dword ptr [ecx + 0x94] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_008bc129 }
	__asm { L_008bc10f: }
	__asm { movss dword ptr [ecx + 0x90], xmm2 }
	__asm { push 0x12fc7e8 }
	__asm { movss dword ptr [ecx + 0x94], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { L_008bc129: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008bc130
extern "C" __declspec(naked) void asm_008bc130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x98] }
	__asm { movss xmm2, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [ebp + 0xc] }
	__asm { ucomiss xmm0, xmm2 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_008bc15f }
	__asm { movss xmm0, dword ptr [ecx + 0x9c] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_008bc179 }
	__asm { L_008bc15f: }
	__asm { movss dword ptr [ecx + 0x98], xmm2 }
	__asm { push 0x12fc7bc }
	__asm { movss dword ptr [ecx + 0x9c], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { L_008bc179: }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x008da460
extern "C" __declspec(naked) void asm_008da460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_008da489 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_008da489: }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008da4a0
extern "C" __declspec(naked) void asm_008da4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push dword ptr [edx + 0xc] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_008da4cc }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_008da4cc: }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008e9850();
// FUNCTION: ROBLOXSTUDIO 0x008e9800
extern "C" __declspec(naked) void asm_008e9800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { movss xmm0, dword ptr [ebp + 0xc] }
	__asm { movss xmm1, dword ptr [ebp + 0x10] }
	__asm { movss xmm2, dword ptr [ebp + 0x14] }
	__asm { sub esp, 0x10 }
	__asm { mov eax, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { movss dword ptr [eax + 4], xmm1 }
	__asm { movss dword ptr [eax + 8], xmm2 }
	__asm { movss dword ptr [eax + 0xc], xmm0 }
	__asm { call fn_008e9850 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x14 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008e99c0();
// FUNCTION: ROBLOXSTUDIO 0x008e9950
extern "C" __declspec(naked) void asm_008e9950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_008e99c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
