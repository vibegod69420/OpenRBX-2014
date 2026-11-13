// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x009dae60
extern "C" __declspec(naked) void asm_009dae60()
{
	__asm { mov byte ptr [ecx + 0x31], 1 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009df9c0
extern "C" __declspec(naked) void asm_009df9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 0x68] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009e7a60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009e8f60
extern "C" __declspec(naked) void asm_009e8f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_009e7a60 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00774920();
// FUNCTION: ROBLOXSTUDIO 0x009f0f10
extern "C" __declspec(naked) void asm_009f0f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0xe97938 }
	__asm { push 0xf13380 }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00774920();
// FUNCTION: ROBLOXSTUDIO 0x009f0f30
extern "C" __declspec(naked) void asm_009f0f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0xe97928 }
	__asm { push 0xf13380 }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007beab0();
// FUNCTION: ROBLOXSTUDIO 0x009f22e0
extern "C" __declspec(naked) void asm_009f22e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { fsub dword ptr [ebp + 0xc] }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_007beab0 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d2a80();
// FUNCTION: ROBLOXSTUDIO 0x009f3d60
extern "C" __declspec(naked) void asm_009f3d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { jmp fn_006d2a80 }
}

extern "C" void fn_006b9e50();
// FUNCTION: ROBLOXSTUDIO 0x009f8b00
extern "C" __declspec(naked) void asm_009f8b00()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0xdc] }
	__asm { call fn_006b9e50 }
	__asm { lea ecx, [esi + 0xe0] }
	__asm { pop esi }
	__asm { jmp fn_006b9e50 }
}

extern "C" void fn_006d1e60();
// FUNCTION: ROBLOXSTUDIO 0x009f8bf0
extern "C" __declspec(naked) void asm_009f8bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0xa4 }
	__asm { call fn_006d1e60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006d1e60();
// FUNCTION: ROBLOXSTUDIO 0x009f8c10
extern "C" __declspec(naked) void asm_009f8c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0xa4 }
	__asm { call fn_006d1e60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009f8e20
extern "C" __declspec(naked) void asm_009f8e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add ecx, 4 }
	__asm { add ecx, eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { call dword ptr [edx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009fd3f0
extern "C" __declspec(naked) void asm_009fd3f0()
{
	__asm { mov eax, ecx }
	__asm { ret 8 }
}

extern "C" void fn_00a013a0();
// FUNCTION: ROBLOXSTUDIO 0x00a016f0
extern "C" __declspec(naked) void asm_00a016f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x28], eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a013a0 }
}

extern "C" void fn_00a09a30();
// FUNCTION: ROBLOXSTUDIO 0x00a09af0
extern "C" __declspec(naked) void asm_00a09af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a09a30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a0a800
extern "C" __declspec(naked) void asm_00a0a800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { movsx eax, word ptr [edx + 4] }
	__asm { movsx ecx, word ptr [edx + 2] }
	__asm { shl eax, 5 }
	__asm { add eax, ecx }
	__asm { movsx ecx, word ptr [edx] }
	__asm { shl eax, 5 }
	__asm { add eax, ecx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a10940
extern "C" __declspec(naked) void asm_00a10940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 3 }
	__asm { cdq }
	__asm { mov ecx, 6 }
	__asm { idiv ecx }
	__asm { mov eax, edx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a1c6e0
extern "C" __declspec(naked) void asm_00a1c6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { xor eax, eax }
	__asm { test ecx, ecx }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a1cf90
extern "C" __declspec(naked) void asm_00a1cf90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea eax, [ecx + eax*4] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a206b0
extern "C" __declspec(naked) void asm_00a206b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea edx, [eax + eax*4] }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { lea eax, [eax + edx*4] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a207e0
extern "C" __declspec(naked) void asm_00a207e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea edx, [eax*8] }
	__asm { sub edx, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea eax, [eax + edx*4] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a212a0
extern "C" __declspec(naked) void asm_00a212a0()
{
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { sub edx, dword ptr [ecx + 0xc] }
	__asm { mov eax, 0x66666667 }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a212c0
extern "C" __declspec(naked) void asm_00a212c0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x92492493 }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a24310
extern "C" __declspec(naked) void asm_00a24310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a24330
extern "C" __declspec(naked) void asm_00a24330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00897f60();
// FUNCTION: ROBLOXSTUDIO 0x00a25280
extern "C" __declspec(naked) void asm_00a25280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call fn_00897f60 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00898030();
// FUNCTION: ROBLOXSTUDIO 0x00a252a0
extern "C" __declspec(naked) void asm_00a252a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call fn_00898030 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008986e0();
// FUNCTION: ROBLOXSTUDIO 0x00a255c0
extern "C" __declspec(naked) void asm_00a255c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call fn_008986e0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008987e0();
// FUNCTION: ROBLOXSTUDIO 0x00a255e0
extern "C" __declspec(naked) void asm_00a255e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call fn_008987e0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a2a8d0();
// FUNCTION: ROBLOXSTUDIO 0x00a27ad0
extern "C" __declspec(naked) void asm_00a27ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a2a8d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a2abb0();
// FUNCTION: ROBLOXSTUDIO 0x00a27af0
extern "C" __declspec(naked) void asm_00a27af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a2abb0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a2aea0();
// FUNCTION: ROBLOXSTUDIO 0x00a27b10
extern "C" __declspec(naked) void asm_00a27b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a2aea0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a2b1c0();
// FUNCTION: ROBLOXSTUDIO 0x00a27ba0
extern "C" __declspec(naked) void asm_00a27ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a2b1c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a29be0();
// FUNCTION: ROBLOXSTUDIO 0x00a29c20
extern "C" __declspec(naked) void asm_00a29c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp - 4] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a29be0 }
}

extern "C" void fn_00a2a4f0();
// FUNCTION: ROBLOXSTUDIO 0x00a29d30
extern "C" __declspec(naked) void asm_00a29d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a2a4f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a2a5a0();
// FUNCTION: ROBLOXSTUDIO 0x00a29d50
extern "C" __declspec(naked) void asm_00a29d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a2a5a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10324[];
// FUNCTION: ROBLOXSTUDIO 0x00a2d1d1
extern "C" __declspec(naked) void asm_00a2d1d1()
{
	__asm { sub ecx, dword ptr [ecx - 4] }
	__asm { sub ecx, 8 }
	__asm { jmp dword ptr [g_00e10324] }
}

extern "C" char g_00e10320[];
// FUNCTION: ROBLOXSTUDIO 0x00a2d1dd
extern "C" __declspec(naked) void asm_00a2d1dd()
{
	__asm { sub ecx, dword ptr [ecx - 4] }
	__asm { sub ecx, 0x10 }
	__asm { jmp dword ptr [g_00e10320] }
}

// FUNCTION: ROBLOXSTUDIO 0x00a2d1f0
extern "C" __declspec(naked) void asm_00a2d1f0()
{
	__asm { mov eax, dword ptr [ecx + 0xa0] }
	__asm { shr eax, 2 }
	__asm { and eax, 1 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a2d200
extern "C" __declspec(naked) void asm_00a2d200()
{
	__asm { mov eax, dword ptr [ecx + 0xf0] }
	__asm { shr eax, 2 }
	__asm { and eax, 1 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a2d210
extern "C" __declspec(naked) void asm_00a2d210()
{
	__asm { mov eax, dword ptr [ecx + 0x60] }
	__asm { shr eax, 2 }
	__asm { and eax, 1 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a2d220
extern "C" __declspec(naked) void asm_00a2d220()
{
	__asm { mov eax, dword ptr [ecx + 0x68] }
	__asm { shr eax, 2 }
	__asm { and eax, 1 }
	__asm { ret }
}

extern "C" char g_00e102e8[];
// FUNCTION: ROBLOXSTUDIO 0x00a2f000
extern "C" __declspec(naked) void asm_00a2f000()
{
	__asm { mov eax, dword ptr [ecx + 0x88] }
	__asm { push eax }
	__asm { push eax }
	__asm { push eax }
	__asm { call dword ptr [g_00e102e8] }
	__asm { ret }
}

extern "C" char g_00e102e8[];
// FUNCTION: ROBLOXSTUDIO 0x00a2f010
extern "C" __declspec(naked) void asm_00a2f010()
{
	__asm { mov eax, dword ptr [ecx + 0xd8] }
	__asm { push eax }
	__asm { push eax }
	__asm { push eax }
	__asm { call dword ptr [g_00e102e8] }
	__asm { ret }
}

extern "C" char g_00e102e8[];
// FUNCTION: ROBLOXSTUDIO 0x00a2f020
extern "C" __declspec(naked) void asm_00a2f020()
{
	__asm { mov eax, dword ptr [ecx + 0x50] }
	__asm { push eax }
	__asm { push eax }
	__asm { push eax }
	__asm { call dword ptr [g_00e102e8] }
	__asm { ret }
}

extern "C" void fn_00a304d0();
// FUNCTION: ROBLOXSTUDIO 0x00a30930
extern "C" __declspec(naked) void asm_00a30930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a304d0 }
}

extern "C" void fn_00a305f0();
// FUNCTION: ROBLOXSTUDIO 0x00a30950
extern "C" __declspec(naked) void asm_00a30950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a305f0 }
}

extern "C" void fn_00a30710();
// FUNCTION: ROBLOXSTUDIO 0x00a30970
extern "C" __declspec(naked) void asm_00a30970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a30710 }
}

extern "C" void fn_00a30820();
// FUNCTION: ROBLOXSTUDIO 0x00a30990
extern "C" __declspec(naked) void asm_00a30990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a30820 }
}

extern "C" char g_00e102e8[];
// FUNCTION: ROBLOXSTUDIO 0x00a33490
extern "C" __declspec(naked) void asm_00a33490()
{
	__asm { mov eax, dword ptr [ecx + 0x48] }
	__asm { push eax }
	__asm { push eax }
	__asm { push eax }
	__asm { call dword ptr [g_00e102e8] }
	__asm { ret }
}

extern "C" void fn_00a336f0();
// FUNCTION: ROBLOXSTUDIO 0x00a33800
extern "C" __declspec(naked) void asm_00a33800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a336f0 }
}

extern "C" void fn_00bc6d40();
// FUNCTION: ROBLOXSTUDIO 0x00a34290
extern "C" __declspec(naked) void asm_00a34290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc6d40 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a365b0();
// FUNCTION: ROBLOXSTUDIO 0x00a34bf0
extern "C" __declspec(naked) void asm_00a34bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a365b0 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a34d00
extern "C" __declspec(naked) void asm_00a34d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [edx + 0x58] }
	__asm { mov dword ptr [edx + 0x58], ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a378d0();
// FUNCTION: ROBLOXSTUDIO 0x00a34ed0
extern "C" __declspec(naked) void asm_00a34ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a378d0 }
	__asm { add esp, 4 }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a35150
extern "C" __declspec(naked) void asm_00a35150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { sub eax, dword ptr [ecx + 0xc] }
	__asm { sar eax, 4 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a35560
extern "C" __declspec(naked) void asm_00a35560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp + 0xc], eax }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { setne al }
	__asm { mov dword ptr [ecx + 8], 1 }
	__asm { mov dword ptr [ecx], eax }
	__asm { add dword ptr [edx + 8], 0x10 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a35650
extern "C" __declspec(naked) void asm_00a35650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fild dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { fstp qword ptr [eax] }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { add dword ptr [ecx + 8], 0x10 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a35670
extern "C" __declspec(naked) void asm_00a35670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 8], 2 }
	__asm { add dword ptr [edx + 8], 0x10 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a356d0
extern "C" __declspec(naked) void asm_00a356d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { add dword ptr [ecx + 8], 0x10 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a356f0
extern "C" __declspec(naked) void asm_00a356f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld qword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { fstp qword ptr [eax] }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { add dword ptr [ecx + 8], 0x10 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a35bd0
extern "C" __declspec(naked) void asm_00a35bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov cx, word ptr [eax + 0x34] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov word ptr [eax + 0x34], cx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
// FUNCTION: ROBLOXSTUDIO 0x00a35cc0
extern "C" __declspec(naked) void asm_00a35cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a34c10 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov al, byte ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { mov byte ptr [ecx + 7], al }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a35de0
extern "C" __declspec(naked) void asm_00a35de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movzx eax, byte ptr [eax + 6] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35e70();
// FUNCTION: ROBLOXSTUDIO 0x00a37120
extern "C" __declspec(naked) void asm_00a37120()
{
	__asm { push 0 }
	__asm { push -1 }
	__asm { push dword ptr [ecx + 0xc] }
	__asm { call fn_00a35e70 }
	__asm { add esp, 0xc }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a37a80
extern "C" __declspec(naked) void asm_00a37a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x44] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a37a90
extern "C" __declspec(naked) void asm_00a37a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x3c] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a37aa0
extern "C" __declspec(naked) void asm_00a37aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movzx eax, byte ptr [eax + 0x38] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a38660
extern "C" __declspec(naked) void asm_00a38660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { lea eax, [ecx + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a38380();
// FUNCTION: ROBLOXSTUDIO 0x00a39240
extern "C" __declspec(naked) void asm_00a39240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38380 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eacc[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3cd40
extern "C" __declspec(naked) void asm_00a3cd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eacc] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb30[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3cd60
extern "C" __declspec(naked) void asm_00a3cd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb30] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb2c[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3cd80
extern "C" __declspec(naked) void asm_00a3cd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb2c] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb20[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3cda0
extern "C" __declspec(naked) void asm_00a3cda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb20] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb24[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3cdc0
extern "C" __declspec(naked) void asm_00a3cdc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb24] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb14[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3cde0
extern "C" __declspec(naked) void asm_00a3cde0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb14] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb18[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3ce00
extern "C" __declspec(naked) void asm_00a3ce00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb18] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cda1a0();
// FUNCTION: ROBLOXSTUDIO 0x00a44ac0
extern "C" __declspec(naked) void asm_00a44ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { jmp fn_00cda1a0 }
}

extern "C" void fn_00a45800();
// FUNCTION: ROBLOXSTUDIO 0x00a457e0
extern "C" __declspec(naked) void asm_00a457e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a45800 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a4c750();
// FUNCTION: ROBLOXSTUDIO 0x00a4ce90
extern "C" __declspec(naked) void asm_00a4ce90()
{
	__asm { mov ecx, dword ptr [ecx + 0x24] }
	__asm { jmp fn_00a4c750 }
}

extern "C" void fn_0099ce30();
// FUNCTION: ROBLOXSTUDIO 0x00a50960
extern "C" __declspec(naked) void asm_00a50960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_0099ce30 }
	__asm { xor ecx, ecx }
	__asm { cmp eax, 0xa }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4790();
extern "C" void fn_00d09250();
// FUNCTION: ROBLOXSTUDIO 0x00a577a0
extern "C" __declspec(naked) void asm_00a577a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_007b4790 }
	__asm { lea ecx, [esi + 0x68] }
	__asm { call fn_00d09250 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a644f0
extern "C" __declspec(naked) void asm_00a644f0()
{
	__asm { mov dword ptr [ecx + 0x238], 0x43c80000 }
	__asm { mov dword ptr [ecx + 0x23c], 0x43960000 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a64a80
extern "C" __declspec(naked) void asm_00a64a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx + 0x238] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 0x23c] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a73a60();
// FUNCTION: ROBLOXSTUDIO 0x00a74270
extern "C" __declspec(naked) void asm_00a74270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a73a60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a7faf0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a7ffe0
extern "C" __declspec(naked) void asm_00a7ffe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00a7faf0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a83820
extern "C" __declspec(naked) void asm_00a83820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 0x92] }
	__asm { mov cx, word ptr [ecx + 0x96] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov word ptr [eax + 4], cx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a83840
extern "C" __declspec(naked) void asm_00a83840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 0x8c] }
	__asm { mov cx, word ptr [ecx + 0x90] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov word ptr [eax + 4], cx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a87920();
// FUNCTION: ROBLOXSTUDIO 0x00a89a60
extern "C" __declspec(naked) void asm_00a89a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00a87920 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a8f180
extern "C" __declspec(naked) void asm_00a8f180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 0x258] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a8f4b0
extern "C" __declspec(naked) void asm_00a8f4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x1309afc }
	__asm { mov dword ptr [ecx + 0x258], eax }
	__asm { call fn_007b4f50 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a90a30
extern "C" __declspec(naked) void asm_00a90a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 0x13c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a91120
extern "C" __declspec(naked) void asm_00a91120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x12fb4e8 }
	__asm { mov dword ptr [ecx + 0x13c], eax }
	__asm { call fn_007b4f50 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a9b520
extern "C" __declspec(naked) void asm_00a9b520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a9c4d0
extern "C" __declspec(naked) void asm_00a9c4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 0x170] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a9c560
extern "C" __declspec(naked) void asm_00a9c560()
{
	__asm { or eax, 0xffffffff }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00aa0800
extern "C" __declspec(naked) void asm_00aa0800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 0x16c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00aacb20
extern "C" __declspec(naked) void asm_00aacb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 0x120] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00aacf10
extern "C" __declspec(naked) void asm_00aacf10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x130b5a0 }
	__asm { mov dword ptr [ecx + 0x120], eax }
	__asm { call fn_007b4f50 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00aaf950();
// FUNCTION: ROBLOXSTUDIO 0x00aafbc0
extern "C" __declspec(naked) void asm_00aafbc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x64] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00aaf950 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00aaf950();
// FUNCTION: ROBLOXSTUDIO 0x00aafbe0
extern "C" __declspec(naked) void asm_00aafbe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x64] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00aaf950 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10454[];
// FUNCTION: ROBLOXSTUDIO 0x00aba5c0
extern "C" __declspec(naked) void asm_00aba5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x4000 }
	__asm { call dword ptr [g_00e10454] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00ac8160
extern "C" __declspec(naked) void asm_00ac8160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, ecx }
	__asm { push dword ptr [eax + 0x1c] }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { add ecx, dword ptr [eax + 0x18] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b0e280();
// FUNCTION: ROBLOXSTUDIO 0x00ac8a90
extern "C" __declspec(naked) void asm_00ac8a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b0e280 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00acada0
extern "C" __declspec(naked) void asm_00acada0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx + 0xb8] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 0xbc] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00acb330();
// FUNCTION: ROBLOXSTUDIO 0x00acb310
extern "C" __declspec(naked) void asm_00acb310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x130bddc }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ecx + 0x8c] }
	__asm { push eax }
	__asm { call fn_00acb330 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00acb330();
// FUNCTION: ROBLOXSTUDIO 0x00acb460
extern "C" __declspec(naked) void asm_00acb460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x130be0c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ecx + 0x94] }
	__asm { push eax }
	__asm { call fn_00acb330 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00acb330();
// FUNCTION: ROBLOXSTUDIO 0x00accda0
extern "C" __declspec(naked) void asm_00accda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x130bf1c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ecx + 0x8c] }
	__asm { push eax }
	__asm { call fn_00acb330 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00acb330();
// FUNCTION: ROBLOXSTUDIO 0x00acced0
extern "C" __declspec(naked) void asm_00acced0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x130bf4c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ecx + 0x94] }
	__asm { push eax }
	__asm { call fn_00acb330 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00865d20();
// FUNCTION: ROBLOXSTUDIO 0x00ad8b60
extern "C" __declspec(naked) void asm_00ad8b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00865d20 }
	__asm { mov eax, dword ptr [eax + 0x148] }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [eax + 0xb4] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ae3941
extern "C" __declspec(naked) void asm_00ae3941()
{
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00ae4390
extern "C" __declspec(naked) void asm_00ae4390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx + 0x384] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 0x388] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00872c50();
extern "C" void fn_00ae6c40();
// FUNCTION: ROBLOXSTUDIO 0x00ae5280
extern "C" __declspec(naked) void asm_00ae5280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00872c50 }
	__asm { mov ecx, esi }
	__asm { call fn_00ae6c40 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00ae5be0();
extern "C" void fn_00ae7920();
// FUNCTION: ROBLOXSTUDIO 0x00ae55d0
extern "C" __declspec(naked) void asm_00ae55d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea esi, [ecx - 0x290] }
	__asm { mov ecx, esi }
	__asm { call fn_00ae7920 }
	__asm { mov ecx, esi }
	__asm { call fn_00ae5be0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}
