// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00780c30();
// FUNCTION: ROBLOXSTUDIO 0x00786c50
extern "C" __declspec(naked) void asm_00786c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00780c30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007899b0();
// FUNCTION: ROBLOXSTUDIO 0x007899f0
extern "C" __declspec(naked) void asm_007899f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007899b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0078d660
extern "C" __declspec(naked) void asm_0078d660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { add ecx, dword ptr [eax + 0x14] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x007929c0
extern "C" __declspec(naked) void asm_007929c0()
{
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 4], 2 }
	__asm { sete al }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007929d0
extern "C" __declspec(naked) void asm_007929d0()
{
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 4], 3 }
	__asm { sete al }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00794940
extern "C" __declspec(naked) void asm_00794940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [eax], 1 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00794960
extern "C" __declspec(naked) void asm_00794960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov byte ptr [eax], 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007a1010();
// FUNCTION: ROBLOXSTUDIO 0x0079e3c0
extern "C" __declspec(naked) void asm_0079e3c0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_007a1010 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00797800();
// FUNCTION: ROBLOXSTUDIO 0x007a5eb0
extern "C" __declspec(naked) void asm_007a5eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00797800 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007a6100
extern "C" __declspec(naked) void asm_007a6100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { add ecx, dword ptr [edx + 8] }
	__asm { lea eax, [edx + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00425f10();
// FUNCTION: ROBLOXSTUDIO 0x007b39a0
extern "C" __declspec(naked) void asm_007b39a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0x3c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00425f10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x007b3d20
extern "C" __declspec(naked) void asm_007b3d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4b50();
// FUNCTION: ROBLOXSTUDIO 0x007b4ec0
extern "C" __declspec(naked) void asm_007b4ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { jmp fn_007b4b50 }
}

extern "C" void fn_007b5640();
extern "C" void fn_0097efd0();
// FUNCTION: ROBLOXSTUDIO 0x007b56c0
extern "C" __declspec(naked) void asm_007b56c0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_0097efd0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007b5640 }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007bc570
extern "C" __declspec(naked) void asm_007bc570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x007bc700
extern "C" __declspec(naked) void asm_007bc700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fsub dword ptr [eax + 4] }
	__asm { fmul dword ptr [ecx + 0x1c8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x007bcdc0
extern "C" __declspec(naked) void asm_007bcdc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007bec90();
// FUNCTION: ROBLOXSTUDIO 0x007bed60
extern "C" __declspec(naked) void asm_007bed60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_007bec90 }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { mov byte ptr [esi + 0x1cc], al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007bf1e0();
// FUNCTION: ROBLOXSTUDIO 0x007bf1c0
extern "C" __declspec(naked) void asm_007bf1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 8] }
	__asm { lea eax, [ecx + 0xa8] }
	__asm { push eax }
	__asm { lea eax, [ecx + 0x78] }
	__asm { push eax }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_007bf1e0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c0a5c0();
// FUNCTION: ROBLOXSTUDIO 0x007c2fa0
extern "C" __declspec(naked) void asm_007c2fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c0a5c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e357c[];
extern "C" void fn_007c2650();
// FUNCTION: ROBLOXSTUDIO 0x007c3880
extern "C" __declspec(naked) void asm_007c3880()
{
	__asm { mov byte ptr [g_012e357c], 1 }
	__asm { call fn_007c2650 }
	__asm { ret 4 }
}

extern "C" void fn_007c4b50();
// FUNCTION: ROBLOXSTUDIO 0x007c6930
extern "C" __declspec(naked) void asm_007c6930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0x7c6950 }
	__asm { call fn_007c4b50 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007ca2c0();
// FUNCTION: ROBLOXSTUDIO 0x007ca2a0
extern "C" __declspec(naked) void asm_007ca2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007ca2c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007cc1a0
extern "C" __declspec(naked) void asm_007cc1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { xor eax, eax }
	__asm { cmp ecx, dword ptr [ebp + 8] }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x007cc1b0
extern "C" __declspec(naked) void asm_007cc1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { xor eax, eax }
	__asm { cmp ecx, dword ptr [ebp + 8] }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007d6110();
// FUNCTION: ROBLOXSTUDIO 0x007d6010
extern "C" __declspec(naked) void asm_007d6010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007d6110 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007d6e40
extern "C" __declspec(naked) void asm_007d6e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00405b90();
// FUNCTION: ROBLOXSTUDIO 0x007d6fb0
extern "C" __declspec(naked) void asm_007d6fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00405b90 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x007d7ec0
extern "C" __declspec(naked) void asm_007d7ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x007d7f60
extern "C" __declspec(naked) void asm_007d7f60()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x20] }
	__asm { xor al, al }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x007df8f0
extern "C" __declspec(naked) void asm_007df8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
}

// FUNCTION: ROBLOXSTUDIO 0x0080e870
extern "C" __declspec(naked) void asm_0080e870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { add ecx, dword ptr [eax + 0x14] }
	__asm { fstp dword ptr [esp] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f6c70[];
// FUNCTION: ROBLOXSTUDIO 0x00825850
extern "C" __declspec(naked) void asm_00825850()
{
	__asm { mov eax, dword ptr [g_012f6c70] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008258f0
extern "C" __declspec(naked) void asm_008258f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [eax], 1 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00825950
extern "C" __declspec(naked) void asm_00825950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00886380();
// FUNCTION: ROBLOXSTUDIO 0x00826460
extern "C" __declspec(naked) void asm_00826460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0x78] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00886380 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006d19a0();
extern "C" void fn_009f4160();
// FUNCTION: ROBLOXSTUDIO 0x0082dcf0
extern "C" __declspec(naked) void asm_0082dcf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { call fn_009f4160 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007baf90();
// FUNCTION: ROBLOXSTUDIO 0x0082e830
extern "C" __declspec(naked) void asm_0082e830()
{
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { add ecx, 0x128 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_007baf90 }
	__asm { ret }
}

extern "C" void fn_007baf90();
// FUNCTION: ROBLOXSTUDIO 0x0082e850
extern "C" __declspec(naked) void asm_0082e850()
{
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { add ecx, 0x128 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { push -1 }
	__asm { mov ecx, eax }
	__asm { call fn_007baf90 }
	__asm { ret }
}

extern "C" void fn_007bb030();
// FUNCTION: ROBLOXSTUDIO 0x0082e9a0
extern "C" __declspec(naked) void asm_0082e9a0()
{
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { add ecx, 0x128 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_007bb030 }
	__asm { ret }
}

extern "C" void fn_007bb030();
// FUNCTION: ROBLOXSTUDIO 0x0082e9c0
extern "C" __declspec(naked) void asm_0082e9c0()
{
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { add ecx, 0x128 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { call fn_007bb030 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0082f080
extern "C" __declspec(naked) void asm_0082f080()
{
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { add ecx, 0xa0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x18] }
	__asm { xor ecx, ecx }
	__asm { test eax, eax }
	__asm { setg al }
	__asm { ret }
}

extern "C" void fn_008449a0();
// FUNCTION: ROBLOXSTUDIO 0x0083aeb0
extern "C" __declspec(naked) void asm_0083aeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008449a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00844c60();
// FUNCTION: ROBLOXSTUDIO 0x0083aed0
extern "C" __declspec(naked) void asm_0083aed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00844c60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00844f20();
// FUNCTION: ROBLOXSTUDIO 0x0083aef0
extern "C" __declspec(naked) void asm_0083aef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00844f20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008451e0();
// FUNCTION: ROBLOXSTUDIO 0x0083af10
extern "C" __declspec(naked) void asm_0083af10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008451e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00858ba0();
// FUNCTION: ROBLOXSTUDIO 0x0083fd70
extern "C" __declspec(naked) void asm_0083fd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00858ba0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0083ac80();
// FUNCTION: ROBLOXSTUDIO 0x00841b50
extern "C" __declspec(naked) void asm_00841b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0083ac80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00847580
extern "C" __declspec(naked) void asm_00847580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe5d97c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10320[];
// FUNCTION: ROBLOXSTUDIO 0x0084a9d2
extern "C" __declspec(naked) void asm_0084a9d2()
{
	__asm { sub ecx, dword ptr [ecx - 4] }
	__asm { sub ecx, 8 }
	__asm { jmp dword ptr [g_00e10320] }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x0084dd30
extern "C" __declspec(naked) void asm_0084dd30()
{
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { add ecx, 0xbdc }
	__asm { call fn_004038a0 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00856980
extern "C" __declspec(naked) void asm_00856980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0x14] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00849480();
// FUNCTION: ROBLOXSTUDIO 0x008578e0
extern "C" __declspec(naked) void asm_008578e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp fn_00849480 }
}

extern "C" void fn_006c0d90();
extern "C" void fn_006c3990();
// FUNCTION: ROBLOXSTUDIO 0x0085f8e0
extern "C" __declspec(naked) void asm_0085f8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_006c0d90 }
	__asm { mov ecx, eax }
	__asm { call fn_006c3990 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x0085fb80
extern "C" __declspec(naked) void asm_0085fb80()
{
	__asm { push 0xe }
	__asm { push 0xe5f4c8 }
	__asm { add ecx, 0xbdc }
	__asm { call fn_004038a0 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0086efa0
extern "C" __declspec(naked) void asm_0086efa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00872400
extern "C" __declspec(naked) void asm_00872400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [edx + 0x88] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0087b980
extern "C" __declspec(naked) void asm_0087b980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx + 0x20] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 0x24] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { fld dword ptr [ecx + 0x28] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0087e0e0
extern "C" __declspec(naked) void asm_0087e0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0x1c] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00884780
extern "C" __declspec(naked) void asm_00884780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx + 0x2c] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 0x30] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00886285
extern "C" __declspec(naked) void asm_00886285()
{
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12fb0b8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00888310
extern "C" __declspec(naked) void asm_00888310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx - 0x1c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add ecx, -0x1c }
	__asm { add ecx, eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { call dword ptr [edx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0099ff60();
// FUNCTION: ROBLOXSTUDIO 0x00888330
extern "C" __declspec(naked) void asm_00888330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0xffffff7c }
	__asm { call fn_0099ff60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00425f10();
// FUNCTION: ROBLOXSTUDIO 0x00888350
extern "C" __declspec(naked) void asm_00888350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0x68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00425f10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008875a0();
// FUNCTION: ROBLOXSTUDIO 0x00888940
extern "C" __declspec(naked) void asm_00888940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008875a0 }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_008875a0();
// FUNCTION: ROBLOXSTUDIO 0x00888960
extern "C" __declspec(naked) void asm_00888960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008875a0 }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

// FUNCTION: ROBLOXSTUDIO 0x00889850
extern "C" __declspec(naked) void asm_00889850()
{
	__asm { xor al, al }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x00891b50
extern "C" __declspec(naked) void asm_00891b50()
{
	__asm { mov eax, dword ptr [ecx + 0xe0] }
	__asm { mov al, byte ptr [eax + 0x111] }
	__asm { ret }
}

extern "C" void fn_008bbcc0();
// FUNCTION: ROBLOXSTUDIO 0x00891b70
extern "C" __declspec(naked) void asm_00891b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0x30] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_008bbcc0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00891b90
extern "C" __declspec(naked) void asm_00891b90()
{
	__asm { mov ecx, dword ptr [ecx + 0xe0] }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ecx + 0x112], al }
	__asm { sete al }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00891d10
extern "C" __declspec(naked) void asm_00891d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, 0xffff }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { mov word ptr [eax + 4], cx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00892460
extern "C" __declspec(naked) void asm_00892460()
{
	__asm { mov eax, dword ptr [ecx + 0xe0] }
	__asm { mov al, byte ptr [eax + 0x110] }
	__asm { ret }
}

extern "C" void fn_0099c980();
// FUNCTION: ROBLOXSTUDIO 0x00892710
extern "C" __declspec(naked) void asm_00892710()
{
	__asm { mov ecx, dword ptr [ecx + 0xe0] }
	__asm { call fn_0099c980 }
	__asm { add eax, 0x30 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00892990
extern "C" __declspec(naked) void asm_00892990()
{
	__asm { mov eax, dword ptr [ecx + 0xe0] }
	__asm { mov al, byte ptr [eax + 0x78] }
	__asm { ret }
}

extern "C" void fn_0088fc80();
// FUNCTION: ROBLOXSTUDIO 0x00892e00
extern "C" __declspec(naked) void asm_00892e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0xffffff50 }
	__asm { call fn_0088fc80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0099c980();
// FUNCTION: ROBLOXSTUDIO 0x008930f0
extern "C" __declspec(naked) void asm_008930f0()
{
	__asm { mov ecx, dword ptr [ecx + 0xe0] }
	__asm { call fn_0099c980 }
	__asm { add eax, 0x3c }
	__asm { ret }
}

extern "C" void fn_007a4fa0();
// FUNCTION: ROBLOXSTUDIO 0x00893190
extern "C" __declspec(naked) void asm_00893190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007a4fa0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00893320
extern "C" __declspec(naked) void asm_00893320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0xe0] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + eax*4 + 0x120] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00573ed0();
// FUNCTION: ROBLOXSTUDIO 0x00897a40
extern "C" __declspec(naked) void asm_00897a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { add ecx, 0x50 }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00573ed0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008bbcc0();
// FUNCTION: ROBLOXSTUDIO 0x0089a370
extern "C" __declspec(naked) void asm_0089a370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { add ecx, 0x70 }
	__asm { call fn_008bbcc0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009004e0();
// FUNCTION: ROBLOXSTUDIO 0x008a3970
extern "C" __declspec(naked) void asm_008a3970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { call fn_009004e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a0a240();
// FUNCTION: ROBLOXSTUDIO 0x008a3e00
extern "C" __declspec(naked) void asm_008a3e00()
{
	__asm { add ecx, 0x140 }
	__asm { jmp fn_00a0a240 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008acd80
extern "C" __declspec(naked) void asm_008acd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x170], eax }
	__asm { mov dword ptr [ebp + 8], 0x12fc4f0 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008ad000
extern "C" __declspec(naked) void asm_008ad000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { mov byte ptr [ecx + 0x16c], al }
	__asm { mov dword ptr [ebp + 8], 0x12fc4c4 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
}

extern "C" void fn_008b1630();
// FUNCTION: ROBLOXSTUDIO 0x008b1610
extern "C" __declspec(naked) void asm_008b1610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008b1630 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b2870();
// FUNCTION: ROBLOXSTUDIO 0x008b1ec0
extern "C" __declspec(naked) void asm_008b1ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008b2870 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b2870();
// FUNCTION: ROBLOXSTUDIO 0x008b1ee0
extern "C" __declspec(naked) void asm_008b1ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008b2870 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b53c0();
// FUNCTION: ROBLOXSTUDIO 0x008b4f10
extern "C" __declspec(naked) void asm_008b4f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008b53c0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008bbb60
extern "C" __declspec(naked) void asm_008bbb60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx + 0x90] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 0x94] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x008bbb80
extern "C" __declspec(naked) void asm_008bbb80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx + 0x98] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 0x9c] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00d02cca();
// FUNCTION: ROBLOXSTUDIO 0x008bd800
extern "C" __declspec(naked) void asm_008bd800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00d02cca }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012fc984[];
extern "C" void fn_00d02ee0();
// FUNCTION: ROBLOXSTUDIO 0x008bd820
extern "C" __declspec(naked) void asm_008bd820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00d02ee0 }
	__asm { mov ecx, dword ptr [g_012fc984] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ecx + 0xc], al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105f4[];
extern "C" char g_012fc984[];
// FUNCTION: ROBLOXSTUDIO 0x008bd840
extern "C" __declspec(naked) void asm_008bd840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e105f4] }
	__asm { mov ecx, dword ptr [g_012fc984] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ecx + 0x5c], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105f4[];
extern "C" char g_012fc984[];
// FUNCTION: ROBLOXSTUDIO 0x008bd860
extern "C" __declspec(naked) void asm_008bd860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e105f4] }
	__asm { mov ecx, dword ptr [g_012fc984] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc984[];
extern "C" void fn_00d02ee0();
// FUNCTION: ROBLOXSTUDIO 0x008bd880
extern "C" __declspec(naked) void asm_008bd880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00d02ee0 }
	__asm { mov ecx, dword ptr [g_012fc984] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ecx + 0x15], al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc984[];
extern "C" void fn_00d02ee0();
// FUNCTION: ROBLOXSTUDIO 0x008bd8a0
extern "C" __declspec(naked) void asm_008bd8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00d02ee0 }
	__asm { mov ecx, dword ptr [g_012fc984] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ecx + 0x14], al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105f4[];
extern "C" char g_012fc984[];
// FUNCTION: ROBLOXSTUDIO 0x008bd8c0
extern "C" __declspec(naked) void asm_008bd8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e105f4] }
	__asm { mov ecx, dword ptr [g_012fc984] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105f4[];
extern "C" char g_012fc984[];
// FUNCTION: ROBLOXSTUDIO 0x008bda20
extern "C" __declspec(naked) void asm_008bda20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e105f4] }
	__asm { mov ecx, dword ptr [g_012fc984] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ecx + 0xcc], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105f4[];
extern "C" char g_012fc984[];
// FUNCTION: ROBLOXSTUDIO 0x008bda40
extern "C" __declspec(naked) void asm_008bda40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e105f4] }
	__asm { mov ecx, dword ptr [g_012fc984] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ecx + 0xd0], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105f4[];
extern "C" char g_012fc984[];
// FUNCTION: ROBLOXSTUDIO 0x008bda60
extern "C" __declspec(naked) void asm_008bda60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e105f4] }
	__asm { mov ecx, dword ptr [g_012fc984] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ecx + 0xc8], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105f4[];
extern "C" char g_012fc984[];
// FUNCTION: ROBLOXSTUDIO 0x008bda80
extern "C" __declspec(naked) void asm_008bda80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e105f4] }
	__asm { mov ecx, dword ptr [g_012fc984] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ecx + 0xd4], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105f4[];
extern "C" char g_012fc984[];
// FUNCTION: ROBLOXSTUDIO 0x008bdaa0
extern "C" __declspec(naked) void asm_008bdaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e105f4] }
	__asm { mov ecx, dword ptr [g_012fc984] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ecx + 0xd8], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105f4[];
extern "C" char g_012fc984[];
// FUNCTION: ROBLOXSTUDIO 0x008bdac0
extern "C" __declspec(naked) void asm_008bdac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e105f4] }
	__asm { mov ecx, dword ptr [g_012fc984] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ecx + 0xdc], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105f4[];
extern "C" char g_012fc984[];
// FUNCTION: ROBLOXSTUDIO 0x008bdae0
extern "C" __declspec(naked) void asm_008bdae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e105f4] }
	__asm { mov ecx, dword ptr [g_012fc984] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ecx + 0xe0], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105f4[];
extern "C" char g_012fc984[];
// FUNCTION: ROBLOXSTUDIO 0x008bdb00
extern "C" __declspec(naked) void asm_008bdb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e105f4] }
	__asm { mov ecx, dword ptr [g_012fc984] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ecx + 0x90], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105f4[];
extern "C" char g_012fc984[];
// FUNCTION: ROBLOXSTUDIO 0x008bdb20
extern "C" __declspec(naked) void asm_008bdb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e105f4] }
	__asm { mov ecx, dword ptr [g_012fc984] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ecx + 0x94], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105f4[];
extern "C" char g_012fc984[];
// FUNCTION: ROBLOXSTUDIO 0x008bdc80
extern "C" __declspec(naked) void asm_008bdc80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e105f4] }
	__asm { mov ecx, dword ptr [g_012fc984] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ecx + 0x54], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105f4[];
extern "C" char g_012fc984[];
// FUNCTION: ROBLOXSTUDIO 0x008bdd40
extern "C" __declspec(naked) void asm_008bdd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e105f4] }
	__asm { mov ecx, dword ptr [g_012fc984] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ecx + 0x50], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105f4[];
extern "C" char g_012fc984[];
// FUNCTION: ROBLOXSTUDIO 0x008bde00
extern "C" __declspec(naked) void asm_008bde00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e105f4] }
	__asm { mov ecx, dword ptr [g_012fc984] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc984[];
extern "C" void fn_00d02ee0();
// FUNCTION: ROBLOXSTUDIO 0x008bde20
extern "C" __declspec(naked) void asm_008bde20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00d02ee0 }
	__asm { mov ecx, dword ptr [g_012fc984] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ecx + 0x58], al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008c2520();
// FUNCTION: ROBLOXSTUDIO 0x008c27a0
extern "C" __declspec(naked) void asm_008c27a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008c2520 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008c3aa0();
// FUNCTION: ROBLOXSTUDIO 0x008c40f0
extern "C" __declspec(naked) void asm_008c40f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { add ecx, 0x10 }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_008c3aa0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008c3b20();
// FUNCTION: ROBLOXSTUDIO 0x008c4110
extern "C" __declspec(naked) void asm_008c4110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [ebp + 0x10] }
	__asm { sub esp, 0x10 }
	__asm { add ecx, 0x10 }
	__asm { fstp qword ptr [esp + 8] }
	__asm { fld qword ptr [ebp + 8] }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_008c3b20 }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x008c5550
extern "C" __declspec(naked) void asm_008c5550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [ecx + 0x208] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fmul qword ptr [ecx + 8] }
	__asm { mov byte ptr [eax + 8], 0 }
	__asm { fstp qword ptr [eax] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006c4620();
// FUNCTION: ROBLOXSTUDIO 0x008c58e0
extern "C" __declspec(naked) void asm_008c58e0()
{
	__asm { mov ecx, dword ptr [ecx + 0x70] }
	__asm { jmp fn_006c4620 }
}

extern "C" void fn_006c4600();
// FUNCTION: ROBLOXSTUDIO 0x008c58f0
extern "C" __declspec(naked) void asm_008c58f0()
{
	__asm { mov ecx, dword ptr [ecx + 0x70] }
	__asm { jmp fn_006c4600 }
}

extern "C" void fn_006c4630();
// FUNCTION: ROBLOXSTUDIO 0x008c5900
extern "C" __declspec(naked) void asm_008c5900()
{
	__asm { mov ecx, dword ptr [ecx + 0x70] }
	__asm { jmp fn_006c4630 }
}

extern "C" void fn_006c4620();
// FUNCTION: ROBLOXSTUDIO 0x008c6490
extern "C" __declspec(naked) void asm_008c6490()
{
	__asm { mov ecx, dword ptr [ecx + 0x68] }
	__asm { jmp fn_006c4620 }
}

extern "C" void fn_006c4600();
// FUNCTION: ROBLOXSTUDIO 0x008c64a0
extern "C" __declspec(naked) void asm_008c64a0()
{
	__asm { mov ecx, dword ptr [ecx + 0x68] }
	__asm { jmp fn_006c4600 }
}

extern "C" void fn_007e4990();
// FUNCTION: ROBLOXSTUDIO 0x008d4340
extern "C" __declspec(naked) void asm_008d4340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007e4990 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008cc160();
// FUNCTION: ROBLOXSTUDIO 0x008d5490
extern "C" __declspec(naked) void asm_008d5490()
{
	__asm { push dword ptr [ecx + 0xc] }
	__asm { call fn_008cc160 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_0124eac8[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x008d8bf0
extern "C" __declspec(naked) void asm_008d8bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eac8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead0[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x008d8c10
extern "C" __declspec(naked) void asm_008d8c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124ead0] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb28[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x008d8c30
extern "C" __declspec(naked) void asm_008d8c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eacc[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x008d8c50
extern "C" __declspec(naked) void asm_008d8c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eacc] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eac4[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x008d8c70
extern "C" __declspec(naked) void asm_008d8c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eac4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb1c[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x008d8c90
extern "C" __declspec(naked) void asm_008d8c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb1c] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}
