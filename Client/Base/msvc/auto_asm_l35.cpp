// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a0c6e0
extern "C" __declspec(naked) void asm_00a0c6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movss xmm0, dword ptr [esi + 0x84] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0c71a }
	__asm { push 0x1306b64 }
	__asm { movss dword ptr [esi + 0x84], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { push 0x1306ae0 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00a0c71a: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a1abb0();
// FUNCTION: ROBLOXSTUDIO 0x00a1ac60
extern "C" __declspec(naked) void asm_00a1ac60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a1abb0 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a1ac8d }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00a1ac8d: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a3ba10
extern "C" __declspec(naked) void asm_00a3ba10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a3ba3a }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00a3ba3a: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0044d6c0();
// FUNCTION: ROBLOXSTUDIO 0x00a427c0
extern "C" __declspec(naked) void asm_00a427c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0044d6c0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a427f4 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00a427f4: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0044d870();
// FUNCTION: ROBLOXSTUDIO 0x00a42800
extern "C" __declspec(naked) void asm_00a42800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0044d870 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a42834 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00a42834: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a424a0();
// FUNCTION: ROBLOXSTUDIO 0x00a42840
extern "C" __declspec(naked) void asm_00a42840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a424a0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a42874 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00a42874: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a42530();
// FUNCTION: ROBLOXSTUDIO 0x00a42880
extern "C" __declspec(naked) void asm_00a42880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a42530 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a428b4 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00a428b4: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e464f0[];
// FUNCTION: ROBLOXSTUDIO 0x00a48570
extern "C" __declspec(naked) void asm_00a48570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 0x3c] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a485a4 }
	__asm { movss xmm1, dword ptr [ecx + 0x38] }
	__asm { comiss xmm1, xmm0 }
	__asm { jbe L_00a4858f }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00a4858f: }
	__asm { movss xmm1, dword ptr [g_00e464f0] }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_00a4859f }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00a4859f: }
	__asm { movss dword ptr [ecx + 0x3c], xmm0 }
	__asm { L_00a485a4: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010380b8[];
// FUNCTION: ROBLOXSTUDIO 0x00a485b0
extern "C" __declspec(naked) void asm_00a485b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 0x38] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a485e4 }
	__asm { movss xmm1, dword ptr [ecx + 0x3c] }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_00a485cf }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00a485cf: }
	__asm { movss xmm1, dword ptr [g_010380b8] }
	__asm { comiss xmm1, xmm0 }
	__asm { jbe L_00a485df }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00a485df: }
	__asm { movss dword ptr [ecx + 0x38], xmm0 }
	__asm { L_00a485e4: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a54750
extern "C" __declspec(naked) void asm_00a54750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00a54769 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a5476b }
	__asm { L_00a54769: }
	__asm { xor edx, edx }
	__asm { L_00a5476b: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a54786 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00a54786: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010380b8[];
// FUNCTION: ROBLOXSTUDIO 0x00a55c70
extern "C" __declspec(naked) void asm_00a55c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { movss xmm1, dword ptr [ecx + 0x34] }
	__asm { movss xmm3, dword ptr [ecx + 0x30] }
	__asm { movss xmm2, dword ptr [ecx + 0x38] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mulss xmm1, xmm0 }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x28] }
	__asm { addss xmm3, dword ptr [ecx + 0x24] }
	__asm { addss xmm0, xmm1 }
	__asm { movss dword ptr [eax], xmm3 }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x2c] }
	__asm { addss xmm0, xmm2 }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010380b8[];
// FUNCTION: ROBLOXSTUDIO 0x00a55cd0
extern "C" __declspec(naked) void asm_00a55cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { movss xmm1, dword ptr [ecx + 0x30] }
	__asm { movss xmm2, dword ptr [ecx + 0x34] }
	__asm { movss xmm3, dword ptr [ecx + 0x38] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mulss xmm1, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm3, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x24] }
	__asm { subss xmm0, xmm1 }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x28] }
	__asm { subss xmm0, xmm2 }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x2c] }
	__asm { subss xmm0, xmm3 }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a57c2a
extern "C" __declspec(naked) void asm_00a57c2a()
{
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a57c50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00a57c50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a57c50: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a6bfd0
extern "C" __declspec(naked) void asm_00a6bfd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { lea edx, [esi + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 0x2c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00a6bffc }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a6bffc: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a6f410
extern "C" __declspec(naked) void asm_00a6f410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x68] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a6f438 }
	__asm { movss dword ptr [ecx + 0x68], xmm1 }
	__asm { mov dword ptr [ebp + 8], 0x1308874 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a6f438: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" char g_010380e4[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a8b0f0
extern "C" __declspec(naked) void asm_00a8b0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { xorps xmm0, xmm0 }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { comiss xmm0, xmm1 }
	__asm { ja L_00a8b117 }
	__asm { comiss xmm1, dword ptr [g_010380e4] }
	__asm { ja L_00a8b117 }
	__asm { movss dword ptr [ecx + 0x70], xmm1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a8b117: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 8], 0xeb0a54 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00b8f8d0();
// FUNCTION: ROBLOXSTUDIO 0x00a8dee0
extern "C" __declspec(naked) void asm_00a8dee0()
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
	__asm { jnp L_00a8df16 }
	__asm { fld dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00b8f8d0 }
	__asm { push 0x13099cc }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00a8df16: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a8df20
extern "C" __declspec(naked) void asm_00a8df20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 0x8c] }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, dword ptr [edx + 0xac] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a8df50 }
	__asm { movss dword ptr [edx + 0xac], xmm0 }
	__asm { mov dword ptr [ebp + 8], 0x13099a0 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a8df50: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a8e160
extern "C" __declspec(naked) void asm_00a8e160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 0x8c] }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { ucomiss xmm0, dword ptr [edx + 0xa8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a8e190 }
	__asm { movss dword ptr [edx + 0xa8], xmm0 }
	__asm { mov dword ptr [ebp + 8], 0x1309974 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a8e190: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b678d0();
// FUNCTION: ROBLOXSTUDIO 0x00aa6000
extern "C" __declspec(naked) void asm_00aa6000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0x30] }
	__asm { test esi, esi }
	__asm { je L_00aa605c }
	__asm { cmp byte ptr [esi + 8], 0 }
	__asm { je L_00aa601b }
	__asm { mov ecx, esi }
	__asm { call fn_00b678d0 }
	__asm { L_00aa601b: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [esi + 0xcc] }
	__asm { addss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [esi + 0xcc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { addss xmm0, dword ptr [esi + 0xd0] }
	__asm { movss dword ptr [esi + 0xd0], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { addss xmm0, dword ptr [esi + 0xd4] }
	__asm { movss dword ptr [esi + 0xd4], xmm0 }
	__asm { L_00aa605c: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00aa61d0
extern "C" __declspec(naked) void asm_00aa61d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { addss xmm0, dword ptr [ecx + 0x224] }
	__asm { movss dword ptr [ecx + 0x224], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x228] }
	__asm { addss xmm0, dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [ecx + 0x228], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x22c] }
	__asm { addss xmm0, dword ptr [ebp + 0x10] }
	__asm { movss dword ptr [ecx + 0x22c], xmm0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00aa6220
extern "C" __declspec(naked) void asm_00aa6220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { addss xmm0, dword ptr [ecx + 0x224] }
	__asm { movss dword ptr [ecx + 0x224], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x228] }
	__asm { addss xmm0, dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [ecx + 0x228], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x22c] }
	__asm { addss xmm0, dword ptr [ebp + 0x10] }
	__asm { movss dword ptr [ecx + 0x22c], xmm0 }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009c6de0();
// FUNCTION: ROBLOXSTUDIO 0x00aab2b0
extern "C" __declspec(naked) void asm_00aab2b0()
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
	__asm { jnp L_00aab301 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { movss dword ptr [esi + 0x94], xmm1 }
	__asm { push 5 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xe7ce30 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [esi + 0xa0] }
	__asm { call fn_009c6de0 }
	__asm { L_00aab301: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009c6de0();
// FUNCTION: ROBLOXSTUDIO 0x00aab310
extern "C" __declspec(naked) void asm_00aab310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movss xmm0, dword ptr [esi + 0x90] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00aab361 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { movss dword ptr [esi + 0x90], xmm1 }
	__asm { push 8 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xe608fc }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [esi + 0xa0] }
	__asm { call fn_009c6de0 }
	__asm { L_00aab361: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00aaf2f0
extern "C" __declspec(naked) void asm_00aaf2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00aaf31b }
	__asm { fldz }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_00aaf2ff: }
	__asm { test eax, eax }
	__asm { je L_00aaf313 }
	__asm { mov dword ptr [eax], 0 }
	__asm { fst qword ptr [eax + 0x10] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { L_00aaf313: }
	__asm { add eax, 0x18 }
	__asm { dec ecx }
	__asm { jne L_00aaf2ff }
	__asm { fstp st(0) }
	__asm { L_00aaf31b: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006a5f50();
// FUNCTION: ROBLOXSTUDIO 0x00ac2190
extern "C" __declspec(naked) void asm_00ac2190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00ac21b9 }
	__asm { add eax, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { L_00ac21b9: }
	__asm { mov ecx, esi }
	__asm { call fn_006a5f50 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00ac2320
extern "C" __declspec(naked) void asm_00ac2320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00ac234c }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00ac234c: }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00acb440
extern "C" __declspec(naked) void asm_00acb440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ecx + 0xc4], xmm0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00accd80
extern "C" __declspec(naked) void asm_00accd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ecx + 0xc8], xmm0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00accea0
extern "C" __declspec(naked) void asm_00accea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ecx + 0xb8], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [ecx + 0xbc], xmm0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00accef0
extern "C" __declspec(naked) void asm_00accef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ecx + 0xc0], xmm0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00accf10
extern "C" __declspec(naked) void asm_00accf10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ecx + 0xcc], xmm0 }
	__asm { pop ebp }
	__asm { ret 4 }
}
