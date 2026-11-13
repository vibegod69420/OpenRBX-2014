// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
// FUNCTION: ROBLOXSTUDIO 0x006b1410
extern "C" __declspec(naked) void asm_006b1410()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { mov esi, dword ptr [edi + 0x10] }
	__asm { push esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { push esi }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call dword ptr [g_00e101b0] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret 8 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
// FUNCTION: ROBLOXSTUDIO 0x006b2fa0
extern "C" __declspec(naked) void asm_006b2fa0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { lea edi, [esi + 0x58] }
	__asm { push edi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov esi, dword ptr [esi + 0x50] }
	__asm { push edi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e101a0[];
// FUNCTION: ROBLOXSTUDIO 0x006b3950
extern "C" __declspec(naked) void asm_006b3950()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { call dword ptr [g_00e101a0] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [esp + 4], edx }
	__asm { jmp dword ptr [g_00e10198] }
}

extern "C" void fn_006b99c0();
// FUNCTION: ROBLOXSTUDIO 0x006b98c0
extern "C" __declspec(naked) void asm_006b98c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006b99c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004ae050();
// FUNCTION: ROBLOXSTUDIO 0x006baa00
extern "C" __declspec(naked) void asm_006baa00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_004ae050 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006e2930
extern "C" __declspec(naked) void asm_006e2930()
{
	__asm { mov edx, dword ptr [esp + 8] }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { fld dword ptr [ecx + edx*4] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + edx*4 + 0x10] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { fld dword ptr [ecx + edx*4 + 0x20] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { fld dword ptr [ecx + edx*4 + 0x30] }
	__asm { fstp dword ptr [eax + 0xc] }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00700de0
extern "C" __declspec(naked) void asm_00700de0()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { fld dword ptr [ecx + 4] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 8] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { fld dword ptr [ecx + 0xc] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { fchs }
	__asm { fstp qword ptr [eax] }
	__asm { ret 8 }
}

extern "C" void fn_00701ad0();
// FUNCTION: ROBLOXSTUDIO 0x00701aa0
extern "C" __declspec(naked) void asm_00701aa0()
{
	__asm { push ecx }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x10] }
	__asm { mov dword ptr [esp + 8], 0 }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call fn_00701ad0 }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" void fn_00702370();
extern "C" void fn_00706ac0();
// FUNCTION: ROBLOXSTUDIO 0x00704f70
extern "C" __declspec(naked) void asm_00704f70()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00702370 }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00706ac0 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { lea eax, [eax + eax*2] }
	__asm { shl eax, 4 }
	__asm { add eax, dword ptr [ecx] }
	__asm { ret 4 }
}

extern "C" void fn_00702370();
extern "C" void fn_00706ac0();
extern "C" void fn_007091c0();
// FUNCTION: ROBLOXSTUDIO 0x00704ff0
extern "C" __declspec(naked) void asm_00704ff0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00702370 }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00706ac0 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push dword ptr [esp + 8] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { call fn_007091c0 }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_0070b590();
extern "C" void fn_0070c410();
// FUNCTION: ROBLOXSTUDIO 0x00709f20
extern "C" __declspec(naked) void asm_00709f20()
{
	__asm { push ecx }
	__asm { push dword ptr [esp + 0x10] }
	__asm { mov dword ptr [esp + 4], 0 }
	__asm { push dword ptr [esp + 0x10] }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call fn_0070b590 }
	__asm { mov ecx, eax }
	__asm { call fn_0070c410 }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { pop ecx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00729f20
extern "C" __declspec(naked) void asm_00729f20()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { mov eax, 0x100 }
	__asm { mov edx, dword ptr [esi] }
	__asm { movzx ecx, byte ptr [edx + 1] }
	__asm { imul cx, ax }
	__asm { movzx eax, byte ptr [edx] }
	__asm { add cx, ax }
	__asm { movzx eax, cx }
	__asm { lea ecx, [edx + 2] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006c54a0();
extern "C" void fn_006c5500();
// FUNCTION: ROBLOXSTUDIO 0x0076f080
extern "C" __declspec(naked) void asm_0076f080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_006c54a0 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c5500 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0076f0b0
extern "C" __declspec(naked) void asm_0076f0b0()
{
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, 2 }
	__asm { test ecx, ecx }
	__asm { cmovne eax, ecx }
	__asm { ret }
}

extern "C" void fn_00770e40();
// FUNCTION: ROBLOXSTUDIO 0x00771460
extern "C" __declspec(naked) void asm_00771460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { call fn_00770e40 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00771130();
// FUNCTION: ROBLOXSTUDIO 0x007714d0
extern "C" __declspec(naked) void asm_007714d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { call fn_00771130 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00775460();
// FUNCTION: ROBLOXSTUDIO 0x00775a30
extern "C" __declspec(naked) void asm_00775a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00775460 }
	__asm { add esp, 0x1c }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0077b140();
// FUNCTION: ROBLOXSTUDIO 0x0077c700
extern "C" __declspec(naked) void asm_0077c700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ecx + 0x34] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { call fn_0077b140 }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

// FUNCTION: ROBLOXSTUDIO 0x0077d5b0
extern "C" __declspec(naked) void asm_0077d5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov cl, byte ptr [edx + 4] }
	__asm { mov byte ptr [eax + 4], cl }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov cx, word ptr [ecx] }
	__asm { mov word ptr [eax + 5], cx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0077d880
extern "C" __declspec(naked) void asm_0077d880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movzx ecx, byte ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [eax], cl }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { movzx ecx, byte ptr [ecx] }
	__asm { mov byte ptr [eax + 8], cl }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x0077dd10
extern "C" __declspec(naked) void asm_0077dd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { movzx ecx, byte ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [eax], cl }
	__asm { mov cx, word ptr [edx] }
	__asm { mov word ptr [eax + 1], cx }
	__asm { movzx ecx, byte ptr [edx + 2] }
	__asm { mov byte ptr [eax + 3], cl }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0077e780();
// FUNCTION: ROBLOXSTUDIO 0x0077fce0
extern "C" __declspec(naked) void asm_0077fce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0077e780 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00788630();
extern "C" void fn_007d55c0();
// FUNCTION: ROBLOXSTUDIO 0x007886e0
extern "C" __declspec(naked) void asm_007886e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007d55c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00788630 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00788700();
extern "C" void fn_007d5710();
// FUNCTION: ROBLOXSTUDIO 0x007887b0
extern "C" __declspec(naked) void asm_007887b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00788700 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00797440();
extern "C" void fn_00824f80();
// FUNCTION: ROBLOXSTUDIO 0x007974f0
extern "C" __declspec(naked) void asm_007974f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00824f80 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00797440 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007975c0();
extern "C" void fn_00825060();
// FUNCTION: ROBLOXSTUDIO 0x00797670
extern "C" __declspec(naked) void asm_00797670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00825060 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007975c0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00798cb0();
// FUNCTION: ROBLOXSTUDIO 0x0079a070
extern "C" __declspec(naked) void asm_0079a070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00798cb0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007977c0();
// FUNCTION: ROBLOXSTUDIO 0x007a6050
extern "C" __declspec(naked) void asm_007a6050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007977c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00418700();
// FUNCTION: ROBLOXSTUDIO 0x007b22a0
extern "C" __declspec(naked) void asm_007b22a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00418700 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007b5910();
// FUNCTION: ROBLOXSTUDIO 0x007b3ff0
extern "C" __declspec(naked) void asm_007b3ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { add ecx, 0x48 }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { add ecx, 0x18 }
	__asm { mov byte ptr [ebp - 1], 1 }
	__asm { call fn_007b5910 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b5910();
// FUNCTION: ROBLOXSTUDIO 0x007b6760
extern "C" __declspec(naked) void asm_007b6760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { add ecx, 0x48 }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { add ecx, 0x18 }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { call fn_007b5910 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007c2d60
extern "C" __declspec(naked) void asm_007c2d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x007c3a40
extern "C" __declspec(naked) void asm_007c3a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 0x40] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x007c3c00
extern "C" __declspec(naked) void asm_007c3c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0048e3f0();
extern "C" void fn_004afcd0();
extern "C" void fn_007d5550();
// FUNCTION: ROBLOXSTUDIO 0x007c6c10
extern "C" __declspec(naked) void asm_007c6c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004afcd0 }
	__asm { lea esi, [eax + 0x18] }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0048e3f0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00405b90();
extern "C" void fn_00412da0();
// FUNCTION: ROBLOXSTUDIO 0x007d8370
extern "C" __declspec(naked) void asm_007d8370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00405b90 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ecx + 0x10] }
	__asm { call fn_00412da0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}
