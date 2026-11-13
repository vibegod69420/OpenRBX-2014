// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_004115f0();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00970860
extern "C" __declspec(naked) void asm_00970860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov bl, byte ptr [ebp + 8] }
	__asm { cmp bl, byte ptr [ecx + 0x1e4] }
	__asm { je L_00970895 }
	__asm { push 0x13014e8 }
	__asm { mov byte ptr [ecx + 0x1e4], bl }
	__asm { call fn_007b4f50 }
	__asm { test bl, bl }
	__asm { je L_00970895 }
	__asm { push 0x970600 }
	__asm { push 0x130161c }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { L_00970895: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038180[];
extern "C" void fn_0067cc40();
extern "C" void fn_00970950();
extern "C" void fn_00cf6840();
// FUNCTION: ROBLOXSTUDIO 0x009708a0
extern "C" __declspec(naked) void asm_009708a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [ebp + 8] }
	__asm { push esi }
	__asm { fmul qword ptr [g_01038180] }
	__asm { mov esi, ecx }
	__asm { call fn_00cf6840 }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_0067cc40 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00970950 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0096ea60();
extern "C" void fn_00970950();
// FUNCTION: ROBLOXSTUDIO 0x00970a10
extern "C" __declspec(naked) void asm_00970a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { call fn_0096ea60 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00970950 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0096ef10();
// FUNCTION: ROBLOXSTUDIO 0x00970a40
extern "C" __declspec(naked) void asm_00970a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { call fn_0096ef10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_0060de00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00975020
extern "C" __declspec(naked) void asm_00975020()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00975058 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [esi] }
	__asm { call fn_0060de00 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00975058: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00972390();
// FUNCTION: ROBLOXSTUDIO 0x00976a60
extern "C" __declspec(naked) void asm_00976a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00976a8e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00972390 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00976a8e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00972440();
// FUNCTION: ROBLOXSTUDIO 0x00976aa0
extern "C" __declspec(naked) void asm_00976aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00976ace }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00972440 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00976ace: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009724f0();
// FUNCTION: ROBLOXSTUDIO 0x00976ae0
extern "C" __declspec(naked) void asm_00976ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00976b0e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009724f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00976b0e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009725a0();
// FUNCTION: ROBLOXSTUDIO 0x00976b20
extern "C" __declspec(naked) void asm_00976b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00976b4e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009725a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00976b4e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00972650();
// FUNCTION: ROBLOXSTUDIO 0x00976b60
extern "C" __declspec(naked) void asm_00976b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00976b8e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00972650 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00976b8e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00972700();
// FUNCTION: ROBLOXSTUDIO 0x00976ba0
extern "C" __declspec(naked) void asm_00976ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00976bce }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00972700 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00976bce: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00977d30();
// FUNCTION: ROBLOXSTUDIO 0x00977880
extern "C" __declspec(naked) void asm_00977880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0097789b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00977d30 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0097789b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00977d30 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009780c0();
// FUNCTION: ROBLOXSTUDIO 0x009778b0
extern "C" __declspec(naked) void asm_009778b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009778cb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009780c0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009778cb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_009780c0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00978450();
// FUNCTION: ROBLOXSTUDIO 0x009778e0
extern "C" __declspec(naked) void asm_009778e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009778fb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00978450 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009778fb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00978450 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009787e0();
// FUNCTION: ROBLOXSTUDIO 0x00977910
extern "C" __declspec(naked) void asm_00977910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0097792b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009787e0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0097792b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_009787e0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00978b70();
// FUNCTION: ROBLOXSTUDIO 0x00977940
extern "C" __declspec(naked) void asm_00977940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0097795b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00978b70 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0097795b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00978b70 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00978f10();
// FUNCTION: ROBLOXSTUDIO 0x00977970
extern "C" __declspec(naked) void asm_00977970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0097798b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00978f10 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0097798b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00978f10 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00865d20();
extern "C" void fn_00969600();
// FUNCTION: ROBLOXSTUDIO 0x0097aea0
extern "C" __declspec(naked) void asm_0097aea0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x11c] }
	__asm { dec eax }
	__asm { cmp eax, 1 }
	__asm { ja L_0097aed8 }
	__asm { push esi }
	__asm { call fn_00865d20 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0097aed8 }
	__asm { mov ecx, eax }
	__asm { call fn_00969600 }
	__asm { test al, al }
	__asm { jne L_0097aed8 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [esi + 0x11c], 1 }
	__asm { pop esi }
	__asm { setne al }
	__asm { add eax, 3 }
	__asm { ret }
	__asm { L_0097aed8: }
	__asm { mov eax, dword ptr [esi + 0x120] }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0049a3f0();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0097ea90
extern "C" __declspec(naked) void asm_0097ea90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp al, byte ptr [esi + 0x119] }
	__asm { je L_0097eabf }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x36c] }
	__asm { mov byte ptr [esi + 0x119], al }
	__asm { call fn_0049a3f0 }
	__asm { push 0x13016a4 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_0097eabf: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0097f060
extern "C" __declspec(naked) void asm_0097f060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x1230cd8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_0097f080 }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0097f080: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x0097fce0
extern "C" __declspec(naked) void asm_0097fce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xb }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xe88744 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b5ea0();
// FUNCTION: ROBLOXSTUDIO 0x0097fe60
extern "C" __declspec(naked) void asm_0097fe60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi - 0x6c] }
	__asm { lea ecx, [esi - 0x6c] }
	__asm { call dword ptr [eax + 0x40] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { test ecx, ecx }
	__asm { je L_0097fe88 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_007b5ea0 }
	__asm { L_0097fe88: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00872290();
// FUNCTION: ROBLOXSTUDIO 0x00982170
extern "C" __declspec(naked) void asm_00982170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x290], eax }
	__asm { je L_00982198 }
	__asm { push 0x1301d4c }
	__asm { mov dword ptr [esi + 0x290], eax }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { call fn_00872290 }
	__asm { L_00982198: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00985210
extern "C" __declspec(naked) void asm_00985210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00985f70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00985e50
extern "C" __declspec(naked) void asm_00985e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00985f70 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00985e80
extern "C" __declspec(naked) void asm_00985e80()
{
	__asm { push esi }
	__asm { push 0x28 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_00985e99 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00985e99: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_00985ea8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00985ea8: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00985eb3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00985eb3: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012322f4[];
// FUNCTION: ROBLOXSTUDIO 0x00987340
extern "C" __declspec(naked) void asm_00987340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [g_012322f4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { imul edx, edx, 0xb }
	__asm { mov eax, dword ptr [eax + 0x200] }
	__asm { add eax, edx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { imul eax, eax, 0xb }
	__asm { add eax, dword ptr [edx + 0x200] }
	__asm { mov al, byte ptr [eax + ecx + 0x838] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00989b70
extern "C" __declspec(naked) void asm_00989b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00814560();
extern "C" void fn_00988940();
// FUNCTION: ROBLOXSTUDIO 0x009909d0
extern "C" __declspec(naked) void asm_009909d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00988940 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00990a40();
// FUNCTION: ROBLOXSTUDIO 0x00990a00
extern "C" __declspec(naked) void asm_00990a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00990a23 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00990a40 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00990a23: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1232490 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301e8b[];
extern "C" void fn_006b8a9c();
extern "C" void fn_00992bb0();
// FUNCTION: ROBLOXSTUDIO 0x00992df0
extern "C" __declspec(naked) void asm_00992df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_01301e8b] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_00992e1e }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00992e0a }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_00992e0c }
	__asm { L_00992e0a: }
	__asm { mov ecx, esi }
	__asm { L_00992e0c: }
	__asm { push ecx }
	__asm { movzx eax, al }
	__asm { push 0xe8c844 }
	__asm { push eax }
	__asm { call fn_006b8a9c }
	__asm { add esp, 0xc }
	__asm { L_00992e1e: }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_00992bb0 }
}

extern "C" void fn_00b53510();
extern "C" void fn_00b53530();
extern "C" void fn_00b53550();
extern "C" void fn_00b53590();
// FUNCTION: ROBLOXSTUDIO 0x00997730
extern "C" __declspec(naked) void asm_00997730()
{
	__asm { mov ecx, dword ptr [ecx + 0xbc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b53530 }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call fn_00b53590 }
	__asm { mov ecx, edi }
	__asm { add esi, eax }
	__asm { call fn_00b53550 }
	__asm { mov ecx, edi }
	__asm { add esi, eax }
	__asm { call fn_00b53510 }
	__asm { pop edi }
	__asm { add eax, esi }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00997d00
extern "C" __declspec(naked) void asm_00997d00()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xbc] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp eax, 5 }
	__asm { je L_00997d22 }
	__asm { L_00997d13: }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp eax, 5 }
	__asm { jne L_00997d13 }
	__asm { L_00997d22: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [esi + 0x30], eax }
	__asm { pop esi }
	__asm { sete al }
	__asm { ret }
}

extern "C" void fn_00ba4440();
// FUNCTION: ROBLOXSTUDIO 0x009987a0
extern "C" __declspec(naked) void asm_009987a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xbc] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp eax, 0xa }
	__asm { je L_009987c5 }
	__asm { L_009987b6: }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp eax, 0xa }
	__asm { jne L_009987b6 }
	__asm { L_009987c5: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00ba4440 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00ba3b00();
// FUNCTION: ROBLOXSTUDIO 0x009997d0
extern "C" __declspec(naked) void asm_009997d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xbc] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp eax, 5 }
	__asm { je L_009997f5 }
	__asm { L_009997e6: }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp eax, 5 }
	__asm { jne L_009997e6 }
	__asm { L_009997f5: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00ba3b00 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0099c040
extern "C" __declspec(naked) void asm_0099c040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [esi], 0xe903cc }
	__asm { test ecx, ecx }
	__asm { je L_0099c05a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_0099c05a: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0099c069 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0099c069: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0099c9f0();
// FUNCTION: ROBLOXSTUDIO 0x0099ccc0
extern "C" __declspec(naked) void asm_0099ccc0()
{
	__asm { cmp dword ptr [ecx + 0xc0], 0 }
	__asm { jle L_0099ccd7 }
	__asm { push 0 }
	__asm { add ecx, 0xb8 }
	__asm { call fn_0099c9f0 }
	__asm { ret }
	__asm { L_0099ccd7: }
	__asm { cmp dword ptr [ecx + 0x9c], 0 }
	__asm { jle L_0099cce9 }
	__asm { mov eax, dword ptr [ecx + 0x98] }
	__asm { mov eax, dword ptr [eax] }
	__asm { ret }
	__asm { L_0099cce9: }
	__asm { xor eax, eax }
	__asm { ret }
}

extern "C" void fn_0099d0e0();
extern "C" void fn_0099dd50();
// FUNCTION: ROBLOXSTUDIO 0x0099d280
extern "C" __declspec(naked) void asm_0099d280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0099d28f }
	__asm { add eax, -0x1c }
	__asm { jmp L_0099d291 }
	__asm { L_0099d28f: }
	__asm { xor eax, eax }
	__asm { L_0099d291: }
	__asm { push esi }
	__asm { lea esi, [ecx - 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [esi + 0xb8] }
	__asm { call fn_0099d0e0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0099dd50 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009988f0();
extern "C" void fn_00998970();
// FUNCTION: ROBLOXSTUDIO 0x0099e260
extern "C" __declspec(naked) void asm_0099e260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10c], edi }
	__asm { je L_0099e29a }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { xor eax, eax }
	__asm { test ecx, ecx }
	__asm { je L_0099e284 }
	__asm { push esi }
	__asm { call fn_00998970 }
	__asm { L_0099e284: }
	__asm { mov dword ptr [esi + 0x10c], edi }
	__asm { test eax, eax }
	__asm { je L_0099e29a }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { push eax }
	__asm { call fn_009988f0 }
	__asm { L_0099e29a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc99b[];
extern "C" void fn_006b8aae();
// FUNCTION: ROBLOXSTUDIO 0x0099e590
extern "C" __declspec(naked) void asm_0099e590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x108], eax }
	__asm { mov cl, byte ptr [g_012fc99b] }
	__asm { test cl, cl }
	__asm { je L_0099e5bb }
	__asm { push 0 }
	__asm { push eax }
	__asm { push eax }
	__asm { movzx eax, cl }
	__asm { push 0xe91a3c }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_0099e5bb: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00998de0();
// FUNCTION: ROBLOXSTUDIO 0x0099e740
extern "C" __declspec(naked) void asm_0099e740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [ecx + 0x112] }
	__asm { je L_0099e769 }
	__asm { mov byte ptr [ecx + 0x112], al }
	__asm { mov eax, dword ptr [ecx + 0xe0] }
	__asm { test eax, eax }
	__asm { je L_0099e769 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_00998de0 }
	__asm { L_0099e769: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00917b80();
extern "C" void fn_00b5b980();
extern "C" void fn_00b5bd60();
extern "C" void fn_00baa0d0();
// FUNCTION: ROBLOXSTUDIO 0x0099ec20
extern "C" __declspec(naked) void asm_0099ec20()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { call fn_00b5bd60 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0099ec3b }
	__asm { mov ecx, eax }
	__asm { call fn_00b5b980 }
	__asm { cmp eax, esi }
	__asm { jne L_0099ec5a }
	__asm { L_0099ec3b: }
	__asm { test esi, esi }
	__asm { je L_0099ec44 }
	__asm { lea eax, [esi + 0x34] }
	__asm { jmp L_0099ec46 }
	__asm { L_0099ec44: }
	__asm { xor eax, eax }
	__asm { L_0099ec46: }
	__asm { mov esi, dword ptr [esi + 0x104] }
	__asm { push eax }
	__asm { call fn_00917b80 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00baa0d0 }
	__asm { L_0099ec5a: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_009d9c50();
extern "C" void fn_00b57a70();
// FUNCTION: ROBLOXSTUDIO 0x009a0680
extern "C" __declspec(naked) void asm_009a0680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea esi, [ecx - 0x84] }
	__asm { push esi }
	__asm { call fn_00b57a70 }
	__asm { push esi }
	__asm { call fn_009d9c50 }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_009a06ad }
	__asm { lea ecx, [eax + 0x128] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x18] }
	__asm { L_009a06ad: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009a1fb0
extern "C" __declspec(naked) void asm_009a1fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_009a1fd3 }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { add eax, -0x1c }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009a1fd3: }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x009a2ba0
extern "C" __declspec(naked) void asm_009a2ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { lea esi, [ecx + 0x64] }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009a6310();
// FUNCTION: ROBLOXSTUDIO 0x009a62e0
extern "C" __declspec(naked) void asm_009a62e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009a6310 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009a6420();
// FUNCTION: ROBLOXSTUDIO 0x009a63f0
extern "C" __declspec(naked) void asm_009a63f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009a6420 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009a6530();
// FUNCTION: ROBLOXSTUDIO 0x009a6500
extern "C" __declspec(naked) void asm_009a6500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009a6530 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009a6640();
// FUNCTION: ROBLOXSTUDIO 0x009a6610
extern "C" __declspec(naked) void asm_009a6610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009a6640 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009a6750();
// FUNCTION: ROBLOXSTUDIO 0x009a6720
extern "C" __declspec(naked) void asm_009a6720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009a6750 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009a6860();
// FUNCTION: ROBLOXSTUDIO 0x009a6830
extern "C" __declspec(naked) void asm_009a6830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009a6860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009a6940();
// FUNCTION: ROBLOXSTUDIO 0x009a6910
extern "C" __declspec(naked) void asm_009a6910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009a6940 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009a6a20();
// FUNCTION: ROBLOXSTUDIO 0x009a69f0
extern "C" __declspec(naked) void asm_009a69f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009a6a20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009a6b00();
// FUNCTION: ROBLOXSTUDIO 0x009a6ad0
extern "C" __declspec(naked) void asm_009a6ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009a6b00 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009ad620();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009a8f70
extern "C" __declspec(naked) void asm_009a8f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_009ad620 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009aa980
extern "C" __declspec(naked) void asm_009aa980()
{
	__asm { push 0x68 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_009aa994 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_009aa994: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_009aa99f }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_009aa99f: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_009aa9a8 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_009aa9a8: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009aa9b0
extern "C" __declspec(naked) void asm_009aa9b0()
{
	__asm { push esi }
	__asm { push 0x68 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_009aa9c9 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_009aa9c9: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_009aa9d8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_009aa9d8: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_009aa9e3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_009aa9e3: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_009a6830();
// FUNCTION: ROBLOXSTUDIO 0x009abb90
extern "C" __declspec(naked) void asm_009abb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009abbbe }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009a6830 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009abbbe: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009a69f0();
// FUNCTION: ROBLOXSTUDIO 0x009abbd0
extern "C" __declspec(naked) void asm_009abbd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009abbfe }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009a69f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009abbfe: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009a6ad0();
// FUNCTION: ROBLOXSTUDIO 0x009abc10
extern "C" __declspec(naked) void asm_009abc10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009abc3e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009a6ad0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009abc3e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009ac660();
// FUNCTION: ROBLOXSTUDIO 0x009ac5d0
extern "C" __declspec(naked) void asm_009ac5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009ac5eb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009ac660 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009ac5eb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_009ac660 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009ac9f0();
// FUNCTION: ROBLOXSTUDIO 0x009ac600
extern "C" __declspec(naked) void asm_009ac600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009ac61b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009ac9f0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009ac61b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_009ac9f0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009ad110();
// FUNCTION: ROBLOXSTUDIO 0x009ac630
extern "C" __declspec(naked) void asm_009ac630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009ac64b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009ad110 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009ac64b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_009ad110 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009b0b70();
// FUNCTION: ROBLOXSTUDIO 0x009b05f0
extern "C" __declspec(naked) void asm_009b05f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009b0613 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009b0b70 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b0613: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1234870 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b0cb0();
// FUNCTION: ROBLOXSTUDIO 0x009b0630
extern "C" __declspec(naked) void asm_009b0630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009b0653 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009b0cb0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b0653: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1235030 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b0e10();
// FUNCTION: ROBLOXSTUDIO 0x009b0670
extern "C" __declspec(naked) void asm_009b0670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009b0693 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009b0e10 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b0693: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1234718 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b0f30();
// FUNCTION: ROBLOXSTUDIO 0x009b06b0
extern "C" __declspec(naked) void asm_009b06b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009b06d3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009b0f30 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b06d3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1234998 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b2fd0();
// FUNCTION: ROBLOXSTUDIO 0x009b51c0
extern "C" __declspec(naked) void asm_009b51c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009b51ee }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009b2fd0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009b51ee: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009b56e0();
// FUNCTION: ROBLOXSTUDIO 0x009b56b0
extern "C" __declspec(naked) void asm_009b56b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009b56cb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009b56e0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009b56cb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_009b56e0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009b33e0();
// FUNCTION: ROBLOXSTUDIO 0x009b63a0
extern "C" __declspec(naked) void asm_009b63a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { movzx eax, byte ptr [ecx + 0x74] }
	__asm { add ecx, 0x74 }
	__asm { inc eax }
	__asm { add eax, ecx }
	__asm { je L_009b63b3 }
	__asm { inc eax }
	__asm { jmp L_009b63b5 }
	__asm { L_009b63b3: }
	__asm { xor eax, eax }
	__asm { L_009b63b5: }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_009b33e0 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp - 4], eax }
	__asm { setne al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009b6db0
extern "C" __declspec(naked) void asm_009b6db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [eax + 0x211], 0 }
	__asm { jne L_009b6dd7 }
	__asm { cmp byte ptr [eax + 0x20b], 0 }
	__asm { jne L_009b6dd7 }
	__asm { cmp byte ptr [eax + 0x20d], 0 }
	__asm { jne L_009b6dd7 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009b6dd7: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008ff0a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009bab60
extern "C" __declspec(naked) void asm_009bab60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_009bab8b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008ff0a0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { L_009bab8b: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043f040();
extern "C" void fn_009babc0();
// FUNCTION: ROBLOXSTUDIO 0x009bab90
extern "C" __declspec(naked) void asm_009bab90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009babc0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009bacd0();
// FUNCTION: ROBLOXSTUDIO 0x009baca0
extern "C" __declspec(naked) void asm_009baca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009bacd0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009bade0();
// FUNCTION: ROBLOXSTUDIO 0x009badb0
extern "C" __declspec(naked) void asm_009badb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009bade0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009baec0();
// FUNCTION: ROBLOXSTUDIO 0x009bae90
extern "C" __declspec(naked) void asm_009bae90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009baec0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009bea30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009bc990
extern "C" __declspec(naked) void asm_009bc990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_009bea30 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008ff0a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009bda00
extern "C" __declspec(naked) void asm_009bda00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { call fn_008ff0a0 }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009badb0();
// FUNCTION: ROBLOXSTUDIO 0x009bde50
extern "C" __declspec(naked) void asm_009bde50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009bde7e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009badb0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009bde7e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009bae90();
// FUNCTION: ROBLOXSTUDIO 0x009bde90
extern "C" __declspec(naked) void asm_009bde90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009bdebe }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009bae90 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009bdebe: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009be2d0();
// FUNCTION: ROBLOXSTUDIO 0x009be270
extern "C" __declspec(naked) void asm_009be270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009be28b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009be2d0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009be28b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_009be2d0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009be660();
// FUNCTION: ROBLOXSTUDIO 0x009be2a0
extern "C" __declspec(naked) void asm_009be2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009be2bb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009be660 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009be2bb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_009be660 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008ff0a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009be9f0
extern "C" __declspec(naked) void asm_009be9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_009bea1c }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008ff0a0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { L_009bea1c: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b9190();
// FUNCTION: ROBLOXSTUDIO 0x009bf9b0
extern "C" __declspec(naked) void asm_009bf9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 8 }
	__asm { call fn_009b9190 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009c01f0();
// FUNCTION: ROBLOXSTUDIO 0x009bfdc0
extern "C" __declspec(naked) void asm_009bfdc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009bfde3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009c01f0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009bfde3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x123a248 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009c7350
extern "C" __declspec(naked) void asm_009c7350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { je L_009c737f }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009c737f: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0079a420();
// FUNCTION: ROBLOXSTUDIO 0x009c7630
extern "C" __declspec(naked) void asm_009c7630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009c765e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_0079a420 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009c765e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009c4700();
// FUNCTION: ROBLOXSTUDIO 0x009c7670
extern "C" __declspec(naked) void asm_009c7670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009c769e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009c4700 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009c769e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009c47b0();
// FUNCTION: ROBLOXSTUDIO 0x009c76b0
extern "C" __declspec(naked) void asm_009c76b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009c76de }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009c47b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009c76de: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009c4860();
// FUNCTION: ROBLOXSTUDIO 0x009c76f0
extern "C" __declspec(naked) void asm_009c76f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009c771e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009c4860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009c771e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009c4910();
// FUNCTION: ROBLOXSTUDIO 0x009c7730
extern "C" __declspec(naked) void asm_009c7730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009c775e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009c4910 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009c775e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009c49c0();
// FUNCTION: ROBLOXSTUDIO 0x009c7770
extern "C" __declspec(naked) void asm_009c7770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009c779e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009c49c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009c779e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007b81d0();
// FUNCTION: ROBLOXSTUDIO 0x009c77b0
extern "C" __declspec(naked) void asm_009c77b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009c77de }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_007b81d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009c77de: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00437d00();
// FUNCTION: ROBLOXSTUDIO 0x009c8700
extern "C" __declspec(naked) void asm_009c8700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009c871b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00437d00 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009c871b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00437d00 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0081d970();
// FUNCTION: ROBLOXSTUDIO 0x009c8730
extern "C" __declspec(naked) void asm_009c8730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009c874b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_0081d970 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009c874b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_0081d970 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0081dd00();
// FUNCTION: ROBLOXSTUDIO 0x009c8760
extern "C" __declspec(naked) void asm_009c8760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009c877b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_0081dd00 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009c877b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_0081dd00 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0081e090();
// FUNCTION: ROBLOXSTUDIO 0x009c8790
extern "C" __declspec(naked) void asm_009c8790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009c87ab }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_0081e090 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009c87ab: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_0081e090 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0081e420();
// FUNCTION: ROBLOXSTUDIO 0x009c87c0
extern "C" __declspec(naked) void asm_009c87c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009c87db }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_0081e420 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009c87db: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_0081e420 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0081e7b0();
// FUNCTION: ROBLOXSTUDIO 0x009c87f0
extern "C" __declspec(naked) void asm_009c87f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009c880b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_0081e7b0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009c880b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_0081e7b0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009c8ef0
extern "C" __declspec(naked) void asm_009c8ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { je L_009c8f1b }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ecx + 8] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call dword ptr [esi] }
	__asm { L_009c8f1b: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009c8f40
extern "C" __declspec(naked) void asm_009c8f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_009c8f5e }
	__asm { lea ecx, [eax - 0x1c] }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009c8f5e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { xor ecx, ecx }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x009c9b00
extern "C" __declspec(naked) void asm_009c9b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd47888 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009cb490
extern "C" __declspec(naked) void asm_009cb490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_009cb4a2 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_009cb4a4 }
	__asm { L_009cb4a2: }
	__asm { xor edx, edx }
	__asm { L_009cb4a4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { fld qword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { sub esp, 8 }
	__asm { add ecx, edx }
	__asm { fstp qword ptr [esp] }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007a07b0();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009cb5f0
extern "C" __declspec(naked) void asm_009cb5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x64], eax }
	__asm { je L_009cb622 }
	__asm { push 0x1304ad8 }
	__asm { mov dword ptr [esi + 0x64], eax }
	__asm { call fn_007b4f50 }
	__asm { push 0x1304b30 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { push dword ptr [esi + 0x64] }
	__asm { lea ecx, [esi + 0x70] }
	__asm { call fn_007a07b0 }
	__asm { L_009cb622: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009cee40();
// FUNCTION: ROBLOXSTUDIO 0x009cee10
extern "C" __declspec(naked) void asm_009cee10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009cee40 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007cd560();
extern "C" void fn_0080f110();
// FUNCTION: ROBLOXSTUDIO 0x009cf710
extern "C" __declspec(naked) void asm_009cf710()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0080f110 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_009cf72e }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_009cf72e: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009d5020
extern "C" __declspec(naked) void asm_009d5020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push ecx }
	__asm { mov esi, dword ptr [edi + 0x20] }
	__asm { mov edx, dword ptr [edi + 0x18] }
	__asm { fstp dword ptr [esp] }
	__asm { mov eax, dword ptr [esi + 0x12c] }
	__asm { lea ecx, [esi + 0x12c] }
	__asm { mov eax, dword ptr [edx + eax] }
	__asm { add eax, dword ptr [edi + 0x14] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { call eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009d51b0
extern "C" __declspec(naked) void asm_009d51b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x20] }
	__asm { mov edx, dword ptr [edi + 0x18] }
	__asm { mov eax, dword ptr [esi + 0x12c] }
	__asm { lea ecx, [esi + 0x12c] }
	__asm { mov eax, dword ptr [edx + eax] }
	__asm { add eax, dword ptr [edi + 0x14] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { call eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0081cb30();
// FUNCTION: ROBLOXSTUDIO 0x009d6710
extern "C" __declspec(naked) void asm_009d6710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test edx, edx }
	__asm { je L_009d6722 }
	__asm { add edx, -0x1c }
	__asm { jmp L_009d6724 }
	__asm { L_009d6722: }
	__asm { xor edx, edx }
	__asm { L_009d6724: }
	__asm { mov ecx, dword ptr [edx + 0x12c] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [esi + 0x28] }
	__asm { lea ecx, [edx + 0x12c] }
	__asm { add ecx, eax }
	__asm { call fn_0081cb30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00558b00();
// FUNCTION: ROBLOXSTUDIO 0x009d6750
extern "C" __declspec(naked) void asm_009d6750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test edx, edx }
	__asm { je L_009d6762 }
	__asm { add edx, -0x1c }
	__asm { jmp L_009d6764 }
	__asm { L_009d6762: }
	__asm { xor edx, edx }
	__asm { L_009d6764: }
	__asm { mov ecx, dword ptr [edx + 0x12c] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [esi + 0x28] }
	__asm { lea ecx, [edx + 0x12c] }
	__asm { add ecx, eax }
	__asm { call fn_00558b00 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043f1d0();
// FUNCTION: ROBLOXSTUDIO 0x009d6790
extern "C" __declspec(naked) void asm_009d6790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test edx, edx }
	__asm { je L_009d67a2 }
	__asm { add edx, -0x1c }
	__asm { jmp L_009d67a4 }
	__asm { L_009d67a2: }
	__asm { xor edx, edx }
	__asm { L_009d67a4: }
	__asm { mov ecx, dword ptr [edx + 0x12c] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [esi + 0x28] }
	__asm { lea ecx, [edx + 0x12c] }
	__asm { add ecx, eax }
	__asm { call fn_0043f1d0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009d68d0();
// FUNCTION: ROBLOXSTUDIO 0x009d67d0
extern "C" __declspec(naked) void asm_009d67d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test edx, edx }
	__asm { je L_009d67e2 }
	__asm { add edx, -0x1c }
	__asm { jmp L_009d67e4 }
	__asm { L_009d67e2: }
	__asm { xor edx, edx }
	__asm { L_009d67e4: }
	__asm { mov ecx, dword ptr [edx + 0x12c] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [esi + 0x28] }
	__asm { lea ecx, [edx + 0x12c] }
	__asm { add ecx, eax }
	__asm { call fn_009d68d0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009d6c60();
// FUNCTION: ROBLOXSTUDIO 0x009d6810
extern "C" __declspec(naked) void asm_009d6810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test edx, edx }
	__asm { je L_009d6822 }
	__asm { add edx, -0x1c }
	__asm { jmp L_009d6824 }
	__asm { L_009d6822: }
	__asm { xor edx, edx }
	__asm { L_009d6824: }
	__asm { mov ecx, dword ptr [edx + 0x12c] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [esi + 0x28] }
	__asm { lea ecx, [edx + 0x12c] }
	__asm { add ecx, eax }
	__asm { call fn_009d6c60 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043f630();
// FUNCTION: ROBLOXSTUDIO 0x009d6850
extern "C" __declspec(naked) void asm_009d6850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test edx, edx }
	__asm { je L_009d6862 }
	__asm { add edx, -0x1c }
	__asm { jmp L_009d6864 }
	__asm { L_009d6862: }
	__asm { xor edx, edx }
	__asm { L_009d6864: }
	__asm { mov ecx, dword ptr [edx + 0x12c] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [esi + 0x28] }
	__asm { lea ecx, [edx + 0x12c] }
	__asm { add ecx, eax }
	__asm { call fn_0043f630 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007bb660();
// FUNCTION: ROBLOXSTUDIO 0x009d6890
extern "C" __declspec(naked) void asm_009d6890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test edx, edx }
	__asm { je L_009d68a2 }
	__asm { add edx, -0x1c }
	__asm { jmp L_009d68a4 }
	__asm { L_009d68a2: }
	__asm { xor edx, edx }
	__asm { L_009d68a4: }
	__asm { mov ecx, dword ptr [edx + 0x12c] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [esi + 0x28] }
	__asm { lea ecx, [edx + 0x12c] }
	__asm { add ecx, eax }
	__asm { call fn_007bb660 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009d7700
extern "C" __declspec(naked) void asm_009d7700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { je L_009d7711 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_009d7713 }
	__asm { L_009d7711: }
	__asm { xor edi, edi }
	__asm { L_009d7713: }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov edx, dword ptr [ecx + 0x2c] }
	__asm { mov ecx, dword ptr [ecx + 0x30] }
	__asm { mov eax, dword ptr [edi + 0x12c] }
	__asm { mov eax, dword ptr [eax + ecx] }
	__asm { add eax, edi }
	__asm { lea ecx, [edx + 0x12c] }
	__asm { add ecx, eax }
	__asm { call esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x009d82c0
extern "C" __declspec(naked) void asm_009d82c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add ecx, 0x108 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009d8680
extern "C" __declspec(naked) void asm_009d8680()
{
	__asm { mov eax, dword ptr [ecx + 0x23c] }
	__asm { test eax, eax }
	__asm { je L_009d869c }
	__asm { mov eax, dword ptr [eax + 0xe0] }
	__asm { test eax, eax }
	__asm { je L_009d869c }
	__asm { mov eax, dword ptr [eax + 0x104] }
	__asm { jmp L_009d869e }
	__asm { L_009d869c: }
	__asm { xor eax, eax }
	__asm { L_009d869e: }
	__asm { test eax, eax }
	__asm { je L_009d86a6 }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { ret }
	__asm { L_009d86a6: }
	__asm { xor eax, eax }
	__asm { ret }
}

extern "C" void fn_0099cf10();
// FUNCTION: ROBLOXSTUDIO 0x009d8860
extern "C" __declspec(naked) void asm_009d8860()
{
	__asm { mov edx, dword ptr [ecx + 0x270] }
	__asm { mov eax, dword ptr [ecx + 0x298] }
	__asm { test edx, edx }
	__asm { je L_009d8892 }
	__asm { test eax, eax }
	__asm { je L_009d8892 }
	__asm { mov byte ptr [ecx + 0x265], 1 }
	__asm { push 0 }
	__asm { push dword ptr [eax + 0xe0] }
	__asm { push dword ptr [edx + 0xe0] }
	__asm { call fn_0099cf10 }
	__asm { add esp, 0xc }
	__asm { ret }
	__asm { L_009d8892: }
	__asm { xor eax, eax }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009d8b70
extern "C" __declspec(naked) void asm_009d8b70()
{
	__asm { mov eax, dword ptr [ecx + 0x2a0] }
	__asm { test eax, eax }
	__asm { je L_009d8b8c }
	__asm { mov eax, dword ptr [eax + 0xe0] }
	__asm { test eax, eax }
	__asm { je L_009d8b8c }
	__asm { mov eax, dword ptr [eax + 0x104] }
	__asm { jmp L_009d8b8e }
	__asm { L_009d8b8c: }
	__asm { xor eax, eax }
	__asm { L_009d8b8e: }
	__asm { test eax, eax }
	__asm { je L_009d8b96 }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { ret }
	__asm { L_009d8b96: }
	__asm { xor eax, eax }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009d9040
extern "C" __declspec(naked) void asm_009d9040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_009d9052 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_009d9054 }
	__asm { L_009d9052: }
	__asm { xor edx, edx }
	__asm { L_009d9054: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [edx + 0x12c] }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add ecx, 0x12c }
	__asm { add ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009d9080
extern "C" __declspec(naked) void asm_009d9080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_009d909a }
	__asm { add eax, -0x1c }
	__asm { je L_009d909a }
	__asm { lea edx, [eax + 0x128] }
	__asm { jmp L_009d909c }
	__asm { L_009d909a: }
	__asm { xor edx, edx }
	__asm { L_009d909c: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add ecx, 4 }
	__asm { add ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009d9120
extern "C" __declspec(naked) void asm_009d9120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x200] }
	__asm { test ecx, ecx }
	__asm { je L_009d9139 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x30] }
	__asm { call eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009d9139: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009d9790
extern "C" __declspec(naked) void asm_009d9790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, 0x13052b0 }
	__asm { jne L_009d97a3 }
	__asm { L_009d979d: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009d97a3: }
	__asm { cmp eax, 0x130538c }
	__asm { je L_009d979d }
	__asm { cmp eax, 0x1305258 }
	__asm { je L_009d979d }
	__asm { cmp eax, 0x1305228 }
	__asm { je L_009d979d }
	__asm { cmp eax, 0x13051bc }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b5450();
extern "C" void fn_007b5ea0();
extern "C" void fn_009cfb30();
// FUNCTION: ROBLOXSTUDIO 0x009dd5f0
extern "C" __declspec(naked) void asm_009dd5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x270] }
	__asm { test esi, esi }
	__asm { je L_009dd61b }
	__asm { mov ecx, esi }
	__asm { call fn_009cfb30 }
	__asm { test eax, eax }
	__asm { je L_009dd610 }
	__asm { mov ecx, eax }
	__asm { call fn_007b5450 }
	__asm { L_009dd610: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_007b5ea0 }
	__asm { L_009dd61b: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b5450();
extern "C" void fn_007b5ea0();
extern "C" void fn_009cfa10();
// FUNCTION: ROBLOXSTUDIO 0x009dd620
extern "C" __declspec(naked) void asm_009dd620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x270] }
	__asm { test esi, esi }
	__asm { je L_009dd64b }
	__asm { mov ecx, esi }
	__asm { call fn_009cfa10 }
	__asm { test eax, eax }
	__asm { je L_009dd640 }
	__asm { mov ecx, eax }
	__asm { call fn_007b5450 }
	__asm { L_009dd640: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_007b5ea0 }
	__asm { L_009dd64b: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b5bb0();
extern "C" void fn_00b57280();
// FUNCTION: ROBLOXSTUDIO 0x009dda20
extern "C" __declspec(naked) void asm_009dda20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_00b57280 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_009dda49 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_007b5bb0 }
	__asm { mov dword ptr [esi + 0x258], 0 }
	__asm { L_009dda49: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009ddd90
extern "C" __declspec(naked) void asm_009ddd90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_009ddda2 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_009ddda4 }
	__asm { L_009ddda2: }
	__asm { xor edx, edx }
	__asm { L_009ddda4: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [edx + 0x12c] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, 0x12c }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x009dddd0
extern "C" __declspec(naked) void asm_009dddd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_009ddde2 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_009ddde4 }
	__asm { L_009ddde2: }
	__asm { xor edx, edx }
	__asm { L_009ddde4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx + 0x12c] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, 0x12c }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x009dde50
extern "C" __declspec(naked) void asm_009dde50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_009dde62 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_009dde64 }
	__asm { L_009dde62: }
	__asm { xor edx, edx }
	__asm { L_009dde64: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx + 0x12c] }
	__asm { movzx eax, byte ptr [eax] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, 0x12c }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009e3370();
// FUNCTION: ROBLOXSTUDIO 0x009e3340
extern "C" __declspec(naked) void asm_009e3340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009e3370 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009e3480();
// FUNCTION: ROBLOXSTUDIO 0x009e3450
extern "C" __declspec(naked) void asm_009e3450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009e3480 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009e3590();
// FUNCTION: ROBLOXSTUDIO 0x009e3560
extern "C" __declspec(naked) void asm_009e3560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009e3590 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009e3670();
// FUNCTION: ROBLOXSTUDIO 0x009e3640
extern "C" __declspec(naked) void asm_009e3640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009e3670 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009e3750();
// FUNCTION: ROBLOXSTUDIO 0x009e3720
extern "C" __declspec(naked) void asm_009e3720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009e3750 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009e3890();
// FUNCTION: ROBLOXSTUDIO 0x009e3860
extern "C" __declspec(naked) void asm_009e3860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009e3890 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009e39d0();
// FUNCTION: ROBLOXSTUDIO 0x009e39a0
extern "C" __declspec(naked) void asm_009e39a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009e39d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009e8ef0
extern "C" __declspec(naked) void asm_009e8ef0()
{
	__asm { push 0x60 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_009e8f04 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_009e8f04: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_009e8f0f }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_009e8f0f: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_009e8f18 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_009e8f18: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009e8f20
extern "C" __declspec(naked) void asm_009e8f20()
{
	__asm { push esi }
	__asm { push 0x60 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_009e8f39 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_009e8f39: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_009e8f48 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_009e8f48: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_009e8f53 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_009e8f53: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_009e3800();
extern "C" void fn_009ec9b0();
// FUNCTION: ROBLOXSTUDIO 0x009e9810
extern "C" __declspec(naked) void asm_009e9810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edx, edx }
	__asm { je L_009e9841 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { add edx, -0x1c }
	__asm { push dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { call fn_009ec9b0 }
	__asm { mov ecx, eax }
	__asm { call fn_009e3800 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009e9841: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009e3940();
extern "C" void fn_009ec9b0();
// FUNCTION: ROBLOXSTUDIO 0x009e9850
extern "C" __declspec(naked) void asm_009e9850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edx, edx }
	__asm { je L_009e9881 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { add edx, -0x1c }
	__asm { push dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { call fn_009ec9b0 }
	__asm { mov ecx, eax }
	__asm { call fn_009e3940 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009e9881: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009e3560();
// FUNCTION: ROBLOXSTUDIO 0x009e9890
extern "C" __declspec(naked) void asm_009e9890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009e98be }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009e3560 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009e98be: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009e3640();
// FUNCTION: ROBLOXSTUDIO 0x009e98d0
extern "C" __declspec(naked) void asm_009e98d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009e98fe }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009e3640 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009e98fe: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009e3720();
// FUNCTION: ROBLOXSTUDIO 0x009e9910
extern "C" __declspec(naked) void asm_009e9910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009e993e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009e3720 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009e993e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0081d250();
// FUNCTION: ROBLOXSTUDIO 0x009ea620
extern "C" __declspec(naked) void asm_009ea620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_009ea631 }
	__asm { add eax, -0x1c }
	__asm { jmp L_009ea633 }
	__asm { L_009ea631: }
	__asm { xor eax, eax }
	__asm { L_009ea633: }
	__asm { mov ecx, dword ptr [edx + 0x2c] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 0x28] }
	__asm { push 0 }
	__asm { call eax }
	__asm { test eax, eax }
	__asm { je L_009ea64a }
	__asm { mov ecx, eax }
	__asm { call fn_0081d250 }
	__asm { L_009ea64a: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009eb1c0();
// FUNCTION: ROBLOXSTUDIO 0x009ea650
extern "C" __declspec(naked) void asm_009ea650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_009ea661 }
	__asm { add eax, -0x1c }
	__asm { jmp L_009ea663 }
	__asm { L_009ea661: }
	__asm { xor eax, eax }
	__asm { L_009ea663: }
	__asm { mov ecx, dword ptr [edx + 0x2c] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 0x28] }
	__asm { push 0 }
	__asm { call eax }
	__asm { test eax, eax }
	__asm { je L_009ea67a }
	__asm { mov ecx, eax }
	__asm { call fn_009eb1c0 }
	__asm { L_009ea67a: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009ea710();
// FUNCTION: ROBLOXSTUDIO 0x009ea680
extern "C" __declspec(naked) void asm_009ea680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009ea69b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009ea710 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009ea69b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_009ea710 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009eaaa0();
// FUNCTION: ROBLOXSTUDIO 0x009ea6b0
extern "C" __declspec(naked) void asm_009ea6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009ea6cb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009eaaa0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009ea6cb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_009eaaa0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009eae30();
// FUNCTION: ROBLOXSTUDIO 0x009ea6e0
extern "C" __declspec(naked) void asm_009ea6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_009ea6fb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009eae30 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009ea6fb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_009eae30 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009f1160();
extern "C" void fn_00c363b0();
// FUNCTION: ROBLOXSTUDIO 0x009ec930
extern "C" __declspec(naked) void asm_009ec930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_009ec959 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c363b0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_009ec959 }
	__asm { push 0xe984ac }
	__asm { push esi }
	__asm { call fn_009f1160 }
	__asm { add esp, 8 }
	__asm { L_009ec959: }
	__asm { lea eax, [esi + 0x7c] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}
