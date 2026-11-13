// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00b0c7b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0cf0
extern "C" __declspec(naked) void asm_00dd0cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xb0cf90 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xacacb0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe82b80 }
	__asm { mov ecx, 0x130d90c }
	__asm { call fn_00b0c7b0 }
	__asm { push 0xe05360 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b0c5e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0d50
extern "C" __declspec(naked) void asm_00dd0d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xb0ce70 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xacacb0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe82b80 }
	__asm { mov ecx, 0x130d93c }
	__asm { call fn_00b0c5e0 }
	__asm { push 0xe05380 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130da10[];
extern "C" char g_0130da2c[];
extern "C" char g_0130da38[];
extern "C" char g_0130da3c[];
extern "C" void fn_007d5630();
extern "C" void fn_00b0ed20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0e30
extern "C" __declspec(naked) void asm_00dd0e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54a7a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130da10 }
	__asm { push 0 }
	__asm { push 0xec384c }
	__asm { call fn_00b0ed20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130da10], 0xec3800 }
	__asm { mov dword ptr [g_0130da38], 0xb0ef40 }
	__asm { mov dword ptr [g_0130da3c], 0 }
	__asm { call fn_007d5630 }
	__asm { push 0xe05460 }
	__asm { mov dword ptr [g_0130da2c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038148[];
extern "C" void fn_00b0f660();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0f40
extern "C" __declspec(naked) void asm_00dd0f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { fld qword ptr [g_01038148] }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130dac8 }
	__asm { push 0 }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xec3a5c }
	__asm { push 0x10041ac }
	__asm { push 0xec3a68 }
	__asm { push 0 }
	__asm { push 0xb0fc40 }
	__asm { call fn_00b0f660 }
	__asm { push 0xe05550 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038148[];
extern "C" void fn_00b0f660();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0f90
extern "C" __declspec(naked) void asm_00dd0f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { fld qword ptr [g_01038148] }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130db00 }
	__asm { push 0 }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xec3a5c }
	__asm { push 0x10041ac }
	__asm { push 0xec3a70 }
	__asm { push 0 }
	__asm { push 0xb0fc40 }
	__asm { call fn_00b0f660 }
	__asm { push 0xe05560 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b0f1f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1020
extern "C" __declspec(naked) void asm_00dd1020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xb10450 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa8d9e0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xec3a38 }
	__asm { mov ecx, 0x130da98 }
	__asm { call fn_00b0f1f0 }
	__asm { push 0xe055e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b10ff0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1100
extern "C" __declspec(naked) void asm_00dd1100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130db78 }
	__asm { push 6 }
	__asm { push 0x1024d64 }
	__asm { push 0xe83694 }
	__asm { push 0xec407c }
	__asm { push 0 }
	__asm { push 0xb11820 }
	__asm { call fn_00b10ff0 }
	__asm { push 0xe05760 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b135e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1150
extern "C" __declspec(naked) void asm_00dd1150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130dc60 }
	__asm { push 3 }
	__asm { push 0xec4280 }
	__asm { push 0xec428c }
	__asm { push 0xec42a0 }
	__asm { push 0 }
	__asm { push 0xb14c70 }
	__asm { call fn_00b135e0 }
	__asm { push 0xe05770 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130dd80[];
extern "C" char g_0130dd9c[];
extern "C" char g_0130dda8[];
extern "C" char g_0130ddac[];
extern "C" void fn_00825140();
extern "C" void fn_00b17550();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd11e0
extern "C" __declspec(naked) void asm_00dd11e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd554fa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130dd80 }
	__asm { push 0 }
	__asm { push 0xec491c }
	__asm { call fn_00b17550 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130dd80], 0xec48e0 }
	__asm { mov dword ptr [g_0130dda8], 0xb17a50 }
	__asm { mov dword ptr [g_0130ddac], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xe058a0 }
	__asm { mov dword ptr [g_0130dd9c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130dd50[];
extern "C" char g_0130dd6c[];
extern "C" char g_0130dd78[];
extern "C" char g_0130dd7c[];
extern "C" void fn_00825140();
extern "C" void fn_00b17550();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1260
extern "C" __declspec(naked) void asm_00dd1260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5551a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130dd50 }
	__asm { push 0 }
	__asm { push 0xec4900 }
	__asm { call fn_00b17550 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130dd50], 0xec48e0 }
	__asm { mov dword ptr [g_0130dd78], 0xb17a80 }
	__asm { mov dword ptr [g_0130dd7c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xe05900 }
	__asm { mov dword ptr [g_0130dd6c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130dd20[];
extern "C" char g_0130dd3c[];
extern "C" char g_0130dd48[];
extern "C" char g_0130dd4c[];
extern "C" void fn_00825140();
extern "C" void fn_00b17550();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1360
extern "C" __declspec(naked) void asm_00dd1360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5553a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130dd20 }
	__asm { push 0 }
	__asm { push 0xec48e8 }
	__asm { call fn_00b17550 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130dd20], 0xec48e0 }
	__asm { mov dword ptr [g_0130dd48], 0xb18650 }
	__asm { mov dword ptr [g_0130dd4c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xe05b00 }
	__asm { mov dword ptr [g_0130dd3c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130de00[];
extern "C" char g_0130de1c[];
extern "C" char g_0130de28[];
extern "C" char g_0130de2c[];
extern "C" void fn_007d5d30();
extern "C" void fn_00b18880();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd13e0
extern "C" __declspec(naked) void asm_00dd13e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5566a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130de00 }
	__asm { push 5 }
	__asm { push 0xec4da4 }
	__asm { call fn_00b18880 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130de00], 0xec4d9c }
	__asm { mov dword ptr [g_0130de28], 0x40c260 }
	__asm { mov dword ptr [g_0130de2c], 0 }
	__asm { call fn_007d5d30 }
	__asm { push 0xe05b60 }
	__asm { mov dword ptr [g_0130de1c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130de60[];
extern "C" char g_0130de94[];
extern "C" char g_0130de98[];
extern "C" void fn_00b1a4a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd14a0
extern "C" __declspec(naked) void asm_00dd14a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130de60 }
	__asm { push 0 }
	__asm { push 0xe7baac }
	__asm { push 0xeb78dc }
	__asm { push 0 }
	__asm { push 0x138 }
	__asm { call fn_00b1a4a0 }
	__asm { push 0xe05c30 }
	__asm { mov dword ptr [g_0130de60], 0xec544c }
	__asm { mov dword ptr [g_0130de94], 0 }
	__asm { mov dword ptr [g_0130de98], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130dea0[];
extern "C" char g_0130ded4[];
extern "C" char g_0130ded8[];
extern "C" void fn_00b1a570();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1500
extern "C" __declspec(naked) void asm_00dd1500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130dea0 }
	__asm { push 0 }
	__asm { push 0xeb7910 }
	__asm { push 0 }
	__asm { push 0x140 }
	__asm { call fn_00b1a570 }
	__asm { push 0xe05c90 }
	__asm { mov dword ptr [g_0130dea0], 0xec546c }
	__asm { mov dword ptr [g_0130ded4], 0 }
	__asm { mov dword ptr [g_0130ded8], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b1add0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1660
extern "C" __declspec(naked) void asm_00dd1660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xb1b210 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x42ee90 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe5df40 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x1009a60 }
	__asm { mov ecx, 0x130dfb4 }
	__asm { call fn_00b1add0 }
	__asm { push 0xe05e70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b1be40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1740
extern "C" __declspec(naked) void asm_00dd1740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xb1c560 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xb1c3f0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xec5e54 }
	__asm { mov ecx, 0x130e064 }
	__asm { call fn_00b1be40 }
	__asm { push 0xe05ff0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b1bcf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd17a0
extern "C" __declspec(naked) void asm_00dd17a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xb1c590 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xb1c410 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xec5ea0 }
	__asm { mov ecx, 0x130e090 }
	__asm { call fn_00b1bcf0 }
	__asm { push 0xe06010 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b1ca90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1800
extern "C" __declspec(naked) void asm_00dd1800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { fld1 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov ecx, 0x130e180 }
	__asm { fstp dword ptr [esp] }
	__asm { push 0xe962d4 }
	__asm { push 0xec6064 }
	__asm { push 0 }
	__asm { push 0xb1d820 }
	__asm { call fn_00b1ca90 }
	__asm { push 0xe06030 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038080[];
extern "C" void fn_00b1cbc0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1850
extern "C" __declspec(naked) void asm_00dd1850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { fld dword ptr [g_01038080] }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 0 }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push 0xebc7b4 }
	__asm { fld1 }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { mov ecx, 0x130e148 }
	__asm { push 0xebc7ac }
	__asm { push 0xec6054 }
	__asm { push 0 }
	__asm { push 0xb1d8e0 }
	__asm { call fn_00b1cbc0 }
	__asm { push 0xe060a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038080[];
extern "C" void fn_00b1cd50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd18b0
extern "C" __declspec(naked) void asm_00dd18b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { fld1 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 0 }
	__asm { push ecx }
	__asm { fst dword ptr [esp] }
	__asm { push 0xe962d4 }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push 0xebc7ac }
	__asm { fld dword ptr [g_01038080] }
	__asm { push ecx }
	__asm { mov ecx, 0x130e0d0 }
	__asm { fstp dword ptr [esp] }
	__asm { push 0xebc7b4 }
	__asm { push 0x101d13c }
	__asm { push 0 }
	__asm { push 0xb1e060 }
	__asm { call fn_00b1cd50 }
	__asm { push 0xe06120 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038080[];
extern "C" void fn_00b1ca90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1910
extern "C" __declspec(naked) void asm_00dd1910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { fld dword ptr [g_01038080] }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov ecx, 0x130e110 }
	__asm { fstp dword ptr [esp] }
	__asm { push 0xebc7b4 }
	__asm { push 0x100bf50 }
	__asm { push 0 }
	__asm { push 0xb1e190 }
	__asm { call fn_00b1ca90 }
	__asm { push 0xe061a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e310[];
extern "C" char g_0130e340[];
extern "C" char g_0130e344[];
extern "C" void fn_00b1faa0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1a40
extern "C" __declspec(naked) void asm_00dd1a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130e310 }
	__asm { push 0 }
	__asm { push 0xec6090 }
	__asm { push 0xec60a0 }
	__asm { push 0xd8 }
	__asm { call fn_00b1faa0 }
	__asm { push 0xe06330 }
	__asm { mov dword ptr [g_0130e310], 0xec63e8 }
	__asm { mov dword ptr [g_0130e340], 1 }
	__asm { mov dword ptr [g_0130e344], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e348[];
extern "C" char g_0130e378[];
extern "C" char g_0130e37c[];
extern "C" void fn_00b1fb70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1aa0
extern "C" __declspec(naked) void asm_00dd1aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130e348 }
	__asm { push 0 }
	__asm { push 0xeb7928 }
	__asm { push 0xe0 }
	__asm { call fn_00b1fb70 }
	__asm { push 0xe06390 }
	__asm { mov dword ptr [g_0130e348], 0xec6408 }
	__asm { mov dword ptr [g_0130e378], 1 }
	__asm { mov dword ptr [g_0130e37c], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e2d8[];
extern "C" char g_0130e308[];
extern "C" char g_0130e30c[];
extern "C" void fn_00b1f510();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1b00
extern "C" __declspec(naked) void asm_00dd1b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130e2d8 }
	__asm { push 0 }
	__asm { push 0xe962d4 }
	__asm { push 0xec6308 }
	__asm { push 0xec63b4 }
	__asm { push 0xd0 }
	__asm { call fn_00b1f510 }
	__asm { push 0xe063f0 }
	__asm { mov dword ptr [g_0130e2d8], 0xec6348 }
	__asm { mov dword ptr [g_0130e308], 1 }
	__asm { mov dword ptr [g_0130e30c], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e2a0[];
extern "C" char g_0130e2d0[];
extern "C" char g_0130e2d4[];
extern "C" void fn_00b1f660();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1b60
extern "C" __declspec(naked) void asm_00dd1b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130e2a0 }
	__asm { push 0 }
	__asm { push 0xebc7b4 }
	__asm { push 0xebc7ac }
	__asm { push 0xec6308 }
	__asm { push 0xec63b4 }
	__asm { push 0xc8 }
	__asm { call fn_00b1f660 }
	__asm { push 0xe06450 }
	__asm { mov dword ptr [g_0130e2a0], 0xec6398 }
	__asm { mov dword ptr [g_0130e2d0], 1 }
	__asm { mov dword ptr [g_0130e2d4], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e230[];
extern "C" char g_0130e260[];
extern "C" char g_0130e264[];
extern "C" void fn_00b1f840();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1bd0
extern "C" __declspec(naked) void asm_00dd1bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130e230 }
	__asm { push 0 }
	__asm { push 0xe962d4 }
	__asm { push 0xebc7ac }
	__asm { push 0xebc7b4 }
	__asm { push 0xec6308 }
	__asm { push 0xec6314 }
	__asm { push 0xb8 }
	__asm { call fn_00b1f840 }
	__asm { push 0xe064b0 }
	__asm { mov dword ptr [g_0130e230], 0xec62ec }
	__asm { mov dword ptr [g_0130e260], 1 }
	__asm { mov dword ptr [g_0130e264], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b25250();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1d60
extern "C" __declspec(naked) void asm_00dd1d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130e4f0 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push 0x101cb34 }
	__asm { push 0xe7383c }
	__asm { push 0xec6868 }
	__asm { push 0 }
	__asm { push 0xb26ff0 }
	__asm { call fn_00b25250 }
	__asm { push 0xe06630 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b25000();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1df0
extern "C" __declspec(naked) void asm_00dd1df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130e4b8 }
	__asm { push 0 }
	__asm { push 0xec682c }
	__asm { push 0x1004e08 }
	__asm { push 0xec6838 }
	__asm { push 0 }
	__asm { push 0xb27380 }
	__asm { call fn_00b25000 }
	__asm { push 0xe06760 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b29030();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1ec0
extern "C" __declspec(naked) void asm_00dd1ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130e570 }
	__asm { push 0 }
	__asm { push 0xec6f2c }
	__asm { push 0xe73878 }
	__asm { push 0xec6f38 }
	__asm { push 0 }
	__asm { push 0xb297e0 }
	__asm { call fn_00b29030 }
	__asm { push 0xe06980 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b2c460();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd1fd0
extern "C" __declspec(naked) void asm_00dd1fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130e890 }
	__asm { push 5 }
	__asm { push 0xec732c }
	__asm { push 0xec7184 }
	__asm { push 0xec7340 }
	__asm { push 0xec734c }
	__asm { push 0x78 }
	__asm { call fn_00b2c460 }
	__asm { push 0xe06b00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b2c060();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd2020
extern "C" __declspec(naked) void asm_00dd2020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130e63c }
	__asm { push 5 }
	__asm { push 0xec72d0 }
	__asm { push 0xec72dc }
	__asm { push 0xec72e8 }
	__asm { push 0xec72f8 }
	__asm { push 0x74 }
	__asm { call fn_00b2c060 }
	__asm { push 0xe06b60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b2ba10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd20f0
extern "C" __declspec(naked) void asm_00dd20f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130e6e0 }
	__asm { push 0 }
	__asm { push 0xeae454 }
	__asm { push 0xec71a8 }
	__asm { push 0xec71e4 }
	__asm { push 0 }
	__asm { push 0xb34c70 }
	__asm { call fn_00b2ba10 }
	__asm { push 0xe06c80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b2ba10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd2140
extern "C" __declspec(naked) void asm_00dd2140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130e718 }
	__asm { push 0 }
	__asm { push 0xe4717c }
	__asm { push 0xec71a8 }
	__asm { push 0xec71f4 }
	__asm { push 0 }
	__asm { push 0xb34d70 }
	__asm { call fn_00b2ba10 }
	__asm { push 0xe06c90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b2ba10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd2190
extern "C" __declspec(naked) void asm_00dd2190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130e6a8 }
	__asm { push 0 }
	__asm { push 0x102b498 }
	__asm { push 0xec71a8 }
	__asm { push 0xec71d8 }
	__asm { push 0 }
	__asm { push 0xb34f60 }
	__asm { call fn_00b2ba10 }
	__asm { push 0xe06ca0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b2bc40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd2220
extern "C" __declspec(naked) void asm_00dd2220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130e750 }
	__asm { push 0 }
	__asm { push 0xe3af14 }
	__asm { push 0xec71a8 }
	__asm { push 0xec720c }
	__asm { push 0 }
	__asm { push 0xb34e70 }
	__asm { call fn_00b2bc40 }
	__asm { push 0xe06d60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b2bb90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd2270
extern "C" __declspec(naked) void asm_00dd2270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130e918 }
	__asm { push 5 }
	__asm { push 0xec73e8 }
	__asm { push 0xec71a8 }
	__asm { push 0xec73f8 }
	__asm { push 0 }
	__asm { push 0xb32480 }
	__asm { call fn_00b2bb90 }
	__asm { push 0xe06e20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b2bcf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd22c0
extern "C" __declspec(naked) void asm_00dd22c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130e668 }
	__asm { push 0 }
	__asm { push 0xec7178 }
	__asm { push 0xec7184 }
	__asm { push 0xec7198 }
	__asm { push 0xec71a8 }
	__asm { push 0xec71b4 }
	__asm { push 0 }
	__asm { push 0xb2ef30 }
	__asm { call fn_00b2bcf0 }
	__asm { push 0xe06e30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b2bdf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd2310
extern "C" __declspec(naked) void asm_00dd2310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130e950 }
	__asm { push 5 }
	__asm { push 0xe87d00 }
	__asm { push 0xe50278 }
	__asm { push 0xec71a8 }
	__asm { push 0xec7420 }
	__asm { push 0 }
	__asm { push 0xb2fa50 }
	__asm { call fn_00b2bdf0 }
	__asm { push 0xe06e40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e860[];
extern "C" char g_0130e87c[];
extern "C" char g_0130e888[];
extern "C" char g_0130e88c[];
extern "C" void fn_00824ff0();
extern "C" void fn_00b2c7c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd2360
extern "C" __declspec(naked) void asm_00dd2360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd56f2a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130e860 }
	__asm { push 0 }
	__asm { push 0xec7298 }
	__asm { call fn_00b2c7c0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130e860], 0xec7290 }
	__asm { mov dword ptr [g_0130e888], 0xb32b30 }
	__asm { mov dword ptr [g_0130e88c], 0 }
	__asm { call fn_00824ff0 }
	__asm { push 0xe06e50 }
	__asm { mov dword ptr [g_0130e87c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e5e0[];
extern "C" char g_0130e5fc[];
extern "C" char g_0130e608[];
extern "C" char g_0130e60c[];
extern "C" void fn_007d5550();
extern "C" void fn_00b2c7c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd2420
extern "C" __declspec(naked) void asm_00dd2420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd56f4a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130e5e0 }
	__asm { push 0 }
	__asm { push 0xec70ec }
	__asm { call fn_00b2c7c0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130e5e0], 0xec70e4 }
	__asm { mov dword ptr [g_0130e608], 0xb33120 }
	__asm { mov dword ptr [g_0130e60c], 0 }
	__asm { call fn_007d5550 }
	__asm { push 0xe06f60 }
	__asm { mov dword ptr [g_0130e5fc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e7f8[];
extern "C" char g_0130e814[];
extern "C" char g_0130e820[];
extern "C" char g_0130e824[];
extern "C" void fn_00825140();
extern "C" void fn_00b2c7c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd24e0
extern "C" __declspec(naked) void asm_00dd24e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd56f6a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130e7f8 }
	__asm { push 0 }
	__asm { push 0xec7258 }
	__asm { call fn_00b2c7c0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130e7f8], 0xec7250 }
	__asm { mov dword ptr [g_0130e820], 0xb35660 }
	__asm { mov dword ptr [g_0130e824], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xe07070 }
	__asm { mov dword ptr [g_0130e814], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ea20[];
extern "C" char g_0130ea3c[];
extern "C" char g_0130ea48[];
extern "C" char g_0130ea4c[];
extern "C" void fn_00825140();
extern "C" void fn_00b35980();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd25e0
extern "C" __declspec(naked) void asm_00dd25e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd576ba }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130ea20 }
	__asm { push 6 }
	__asm { push 0xec7814 }
	__asm { call fn_00b35980 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130ea20], 0xec7800 }
	__asm { mov dword ptr [g_0130ea48], 0xb35ba0 }
	__asm { mov dword ptr [g_0130ea4c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xe07190 }
	__asm { mov dword ptr [g_0130ea3c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b35e10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd2780
extern "C" __declspec(naked) void asm_00dd2780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130eb00 }
	__asm { push 2 }
	__asm { push 0xec7ae4 }
	__asm { push 0xe7383c }
	__asm { push 0xec7b10 }
	__asm { push 0 }
	__asm { push 0xb36cf0 }
	__asm { call fn_00b35e10 }
	__asm { push 0xe07320 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00be2320();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd3980
extern "C" __declspec(naked) void asm_00dd3980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130f8c0 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push 0xe9215c }
	__asm { push 0xe83694 }
	__asm { push 0xee54f0 }
	__asm { push 0 }
	__asm { push 0xbe9dd0 }
	__asm { call fn_00be2320 }
	__asm { push 0xe08650 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00be20f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd39d0
extern "C" __declspec(naked) void asm_00dd39d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130f8f8 }
	__asm { push 0 }
	__asm { push 0x1032ed8 }
	__asm { push 0xe83694 }
	__asm { push 0xee5518 }
	__asm { push 0 }
	__asm { push 0xbeb0c0 }
	__asm { call fn_00be20f0 }
	__asm { push 0xe08710 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00be2440();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd3a20
extern "C" __declspec(naked) void asm_00dd3a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130f850 }
	__asm { push 0 }
	__asm { push 0x1024d64 }
	__asm { push 0xe83694 }
	__asm { push 0xee54ac }
	__asm { push 0 }
	__asm { push 0xbee670 }
	__asm { call fn_00be2440 }
	__asm { push 0xe08800 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00794940();
extern "C" void fn_00c1ec80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd3fe0
extern "C" __declspec(naked) void asm_00dd3fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x10 }
	__asm { push 0x13101f4 }
	__asm { push eax }
	__asm { call fn_00794940 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push 0x855ed0 }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { push 0xe52d44 }
	__asm { push 0xeee9c0 }
	__asm { mov ecx, 0x13106d4 }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00c1ec80 }
	__asm { push 0xe08d80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013100b0[];
extern "C" char g_013100cc[];
extern "C" char g_013100d8[];
extern "C" char g_013100dc[];
extern "C" void fn_007d5630();
extern "C" void fn_00c259a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd4040
extern "C" __declspec(naked) void asm_00dd4040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6285a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0x1310278 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x13100b0 }
	__asm { push 0 }
	__asm { push 0xeeeb64 }
	__asm { call fn_00c259a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_013100b0], 0xeeeb50 }
	__asm { mov dword ptr [g_013100d8], 0x855f60 }
	__asm { mov dword ptr [g_013100dc], 0 }
	__asm { call fn_007d5630 }
	__asm { push 0xe08da0 }
	__asm { mov dword ptr [g_013100cc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c25690();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd4210
extern "C" __declspec(naked) void asm_00dd4210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x131046c }
	__asm { push 3 }
	__asm { push 0xeeeac0 }
	__asm { push 0xe5dfd8 }
	__asm { push 0xe73878 }
	__asm { push 0xeeead0 }
	__asm { push 0xeeeadc }
	__asm { push 0x1b8 }
	__asm { call fn_00c25690 }
	__asm { push 0xe08f80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c253e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd4260
extern "C" __declspec(naked) void asm_00dd4260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13106a8 }
	__asm { push 5 }
	__asm { push 0xeeec38 }
	__asm { push 0xe73878 }
	__asm { push 0xe73878 }
	__asm { push 0xe94c20 }
	__asm { push 0x194 }
	__asm { call fn_00c253e0 }
	__asm { push 0xe08fe0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c24d10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd4430
extern "C" __declspec(naked) void asm_00dd4430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1310408 }
	__asm { push 3 }
	__asm { push 0xe73878 }
	__asm { push 0xe5dfd8 }
	__asm { push 0xeeea94 }
	__asm { push 0 }
	__asm { push 0xc368e0 }
	__asm { call fn_00c24d10 }
	__asm { push 0xe092d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c24dc0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd4480
extern "C" __declspec(naked) void asm_00dd4480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13102a8 }
	__asm { push 3 }
	__asm { push 0xeeeb28 }
	__asm { push 0xeeeb38 }
	__asm { push 0xe73878 }
	__asm { push 0xeeeb40 }
	__asm { push 0 }
	__asm { push 0xc358d0 }
	__asm { call fn_00c24dc0 }
	__asm { push 0xe092e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310278[];
extern "C" char g_01310294[];
extern "C" char g_013102a0[];
extern "C" char g_013102a4[];
extern "C" void fn_007d5630();
extern "C" void fn_00c259a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd4550
extern "C" __declspec(naked) void asm_00dd4550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6289a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1310278 }
	__asm { push 0 }
	__asm { push 0xeeeb58 }
	__asm { call fn_00c259a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01310278], 0xeeeb50 }
	__asm { mov dword ptr [g_013102a0], 0x855f60 }
	__asm { mov dword ptr [g_013102a4], 0 }
	__asm { call fn_007d5630 }
	__asm { push 0xe09410 }
	__asm { mov dword ptr [g_01310294], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013104d0[];
extern "C" char g_013104ec[];
extern "C" char g_013104f8[];
extern "C" char g_013104fc[];
extern "C" void fn_007d5d30();
extern "C" void fn_00c259a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd4610
extern "C" __declspec(naked) void asm_00dd4610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd628ba }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x13104d0 }
	__asm { push 5 }
	__asm { push 0xeeed6c }
	__asm { call fn_00c259a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_013104d0], 0xeeed64 }
	__asm { mov dword ptr [g_013104f8], 0x403c60 }
	__asm { mov dword ptr [g_013104fc], 0 }
	__asm { call fn_007d5d30 }
	__asm { push 0xe09520 }
	__asm { mov dword ptr [g_013104ec], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c3f120();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd5120
extern "C" __declspec(naked) void asm_00dd5120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x1311fa0 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13113b0 }
	__asm { push 0 }
	__asm { push 0x1024d64 }
	__asm { push 0xe83694 }
	__asm { push 0xef02ec }
	__asm { push 0 }
	__asm { push 0xc50600 }
	__asm { call fn_00c3f120 }
	__asm { push 0xe0a500 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c3f070();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd5170
extern "C" __declspec(naked) void asm_00dd5170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x13111e0 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1310e80 }
	__asm { push 0 }
	__asm { push 0x1024d64 }
	__asm { push 0xe83694 }
	__asm { push 0xef02d0 }
	__asm { push 0 }
	__asm { push 0xc50930 }
	__asm { call fn_00c3f070 }
	__asm { push 0xe0a510 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c3eef0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd51c0
extern "C" __declspec(naked) void asm_00dd51c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x1311598 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1311020 }
	__asm { push 0 }
	__asm { push 0x1024d64 }
	__asm { push 0xe83694 }
	__asm { push 0xef02a0 }
	__asm { push 0 }
	__asm { push 0xc50a80 }
	__asm { call fn_00c3eef0 }
	__asm { push 0xe0a5d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311dc8[];
extern "C" char g_01311df8[];
extern "C" char g_01311dfc[];
extern "C" void fn_00c40bc0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd5210
extern "C" __declspec(naked) void asm_00dd5210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1311dc8 }
	__asm { push 3 }
	__asm { push 0xef0920 }
	__asm { push 0x190 }
	__asm { call fn_00c40bc0 }
	__asm { push 0xe0a5e0 }
	__asm { mov dword ptr [g_01311dc8], 0xef0904 }
	__asm { mov dword ptr [g_01311df8], 0 }
	__asm { mov dword ptr [g_01311dfc], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013115d0[];
extern "C" char g_01311600[];
extern "C" char g_01311604[];
extern "C" void fn_00c40a70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd5270
extern "C" __declspec(naked) void asm_00dd5270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x13115d0 }
	__asm { push 5 }
	__asm { push 0xe7383c }
	__asm { push 0xef0198 }
	__asm { push 0xef01a4 }
	__asm { push 0x188 }
	__asm { call fn_00c40a70 }
	__asm { push 0xe0a640 }
	__asm { mov dword ptr [g_013115d0], 0xef017c }
	__asm { mov dword ptr [g_01311600], 0 }
	__asm { mov dword ptr [g_01311604], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013112b0[];
extern "C" char g_013112e0[];
extern "C" char g_013112e4[];
extern "C" void fn_00c40520();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd52d0
extern "C" __declspec(naked) void asm_00dd52d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x13112b0 }
	__asm { push 3 }
	__asm { push 0xe3af14 }
	__asm { push 0xe5dcf8 }
	__asm { push 0xef09c4 }
	__asm { push 0x178 }
	__asm { call fn_00c40520 }
	__asm { push 0xe0a6a0 }
	__asm { mov dword ptr [g_013112b0], 0xef09a8 }
	__asm { mov dword ptr [g_013112e0], 0 }
	__asm { mov dword ptr [g_013112e4], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311ba4[];
extern "C" char g_01311bd4[];
extern "C" char g_01311bd8[];
extern "C" void fn_00c40120();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd5330
extern "C" __declspec(naked) void asm_00dd5330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1311ba4 }
	__asm { push 3 }
	__asm { push 0xef0968 }
	__asm { push 0x102b490 }
	__asm { push 0xe51a50 }
	__asm { push 0xef0970 }
	__asm { push 0x170 }
	__asm { call fn_00c40120 }
	__asm { push 0xe0a700 }
	__asm { mov dword ptr [g_01311ba4], 0xef094c }
	__asm { mov dword ptr [g_01311bd4], 0 }
	__asm { mov dword ptr [g_01311bd8], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013120a4[];
extern "C" char g_013120d4[];
extern "C" char g_013120d8[];
extern "C" void fn_00c40890();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd5550
extern "C" __declspec(naked) void asm_00dd5550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x13120a4 }
	__asm { push 0 }
	__asm { push 0xe738a4 }
	__asm { push 0xe5e0c8 }
	__asm { push 0xef0b44 }
	__asm { push 0xef0b54 }
	__asm { push 0x1c4 }
	__asm { call fn_00c40890 }
	__asm { push 0xe0a9b0 }
	__asm { mov dword ptr [g_013120a4], 0xef0b28 }
	__asm { mov dword ptr [g_013120d4], 0 }
	__asm { mov dword ptr [g_013120d8], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311530[];
extern "C" char g_01311560[];
extern "C" char g_01311564[];
extern "C" void fn_00c40bc0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd55c0
extern "C" __declspec(naked) void asm_00dd55c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1311530 }
	__asm { push 6 }
	__asm { push 0xef0abc }
	__asm { push 0x180 }
	__asm { call fn_00c40bc0 }
	__asm { push 0xe0aa10 }
	__asm { mov dword ptr [g_01311530], 0xef0904 }
	__asm { mov dword ptr [g_01311560], 0 }
	__asm { mov dword ptr [g_01311564], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310f48[];
extern "C" char g_01310f78[];
extern "C" char g_01310f7c[];
extern "C" void fn_00c3ff80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd5620
extern "C" __declspec(naked) void asm_00dd5620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1310f48 }
	__asm { push 3 }
	__asm { push 0xef067c }
	__asm { push 0xef0684 }
	__asm { push 0x198 }
	__asm { call fn_00c3ff80 }
	__asm { push 0xe0aa70 }
	__asm { mov dword ptr [g_01310f48], 0xef0660 }
	__asm { mov dword ptr [g_01310f78], 0 }
	__asm { mov dword ptr [g_01310f7c], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312048[];
extern "C" char g_01312064[];
extern "C" char g_01312070[];
extern "C" char g_01312074[];
extern "C" void fn_007d5550();
extern "C" void fn_00c40c70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd5700
extern "C" __declspec(naked) void asm_00dd5700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6454a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1312048 }
	__asm { push 6 }
	__asm { push 0xef042c }
	__asm { call fn_00c40c70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01312048], 0xef0424 }
	__asm { mov dword ptr [g_01312070], 0xc4a5f0 }
	__asm { mov dword ptr [g_01312074], 0 }
	__asm { call fn_007d5550 }
	__asm { push 0xe0ac10 }
	__asm { mov dword ptr [g_01312064], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311aa0[];
extern "C" char g_01311abc[];
extern "C" char g_01311ac8[];
extern "C" char g_01311acc[];
extern "C" void fn_007d5d30();
extern "C" void fn_00c40c70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd5780
extern "C" __declspec(naked) void asm_00dd5780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6456a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1311aa0 }
	__asm { push 5 }
	__asm { push 0xef03a0 }
	__asm { call fn_00c40c70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01311aa0], 0xef0398 }
	__asm { mov dword ptr [g_01311ac8], 0xc4aaf0 }
	__asm { mov dword ptr [g_01311acc], 0 }
	__asm { call fn_007d5d30 }
	__asm { push 0xe0ac70 }
	__asm { mov dword ptr [g_01311abc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311490[];
extern "C" char g_013114ac[];
extern "C" char g_013114b8[];
extern "C" char g_013114bc[];
extern "C" void fn_00825140();
extern "C" void fn_00c40c70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd58c0
extern "C" __declspec(naked) void asm_00dd58c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6458a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1311490 }
	__asm { push 0 }
	__asm { push 0xef0418 }
	__asm { call fn_00c40c70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01311490], 0xef0004 }
	__asm { mov dword ptr [g_013114b8], 0xc4bbc0 }
	__asm { mov dword ptr [g_013114bc], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xe0ae20 }
	__asm { mov dword ptr [g_013114ac], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310f88[];
extern "C" char g_01310fa4[];
extern "C" char g_01310fb0[];
extern "C" char g_01310fb4[];
extern "C" void fn_00825140();
extern "C" void fn_00c40c70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd5980
extern "C" __declspec(naked) void asm_00dd5980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd645aa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1310f88 }
	__asm { push 0 }
	__asm { push 0xef04f4 }
	__asm { call fn_00c40c70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01310f88], 0xef0004 }
	__asm { mov dword ptr [g_01310fb0], 0xc4f740 }
	__asm { mov dword ptr [g_01310fb4], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xe0af50 }
	__asm { mov dword ptr [g_01310fa4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311e98[];
extern "C" char g_01311eb4[];
extern "C" char g_01311ec0[];
extern "C" char g_01311ec4[];
extern "C" void fn_007d5d30();
extern "C" void fn_00c40d80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd5b00
extern "C" __declspec(naked) void asm_00dd5b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd645ca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0x1311ad0 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1311e98 }
	__asm { push 0 }
	__asm { push 0xef0110 }
	__asm { call fn_00c40d80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01311e98], 0xef00f4 }
	__asm { mov dword ptr [g_01311ec0], 0xc52300 }
	__asm { mov dword ptr [g_01311ec4], 0 }
	__asm { call fn_007d5d30 }
	__asm { push 0xe0b170 }
	__asm { mov dword ptr [g_01311eb4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311c50[];
extern "C" char g_01311c6c[];
extern "C" char g_01311c78[];
extern "C" char g_01311c7c[];
extern "C" void fn_007d5710();
extern "C" void fn_00c40c70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd5bd0
extern "C" __declspec(naked) void asm_00dd5bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd645ea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1311c50 }
	__asm { push 0 }
	__asm { push 0xe83638 }
	__asm { call fn_00c40c70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01311c50], 0xef01c4 }
	__asm { mov dword ptr [g_01311c78], 0xc4a670 }
	__asm { mov dword ptr [g_01311c7c], 0 }
	__asm { call fn_007d5710 }
	__asm { push 0xe0b240 }
	__asm { mov dword ptr [g_01311c6c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311b38[];
extern "C" char g_01311b54[];
extern "C" char g_01311b60[];
extern "C" char g_01311b64[];
extern "C" void fn_007d5550();
extern "C" void fn_00c40d80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd5cd0
extern "C" __declspec(naked) void asm_00dd5cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6460a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1311b38 }
	__asm { push 3 }
	__asm { push 0xef0074 }
	__asm { call fn_00c40d80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01311b38], 0xef006c }
	__asm { mov dword ptr [g_01311b60], 0xc4abf0 }
	__asm { mov dword ptr [g_01311b64], 0 }
	__asm { call fn_007d5550 }
	__asm { push 0xe0b380 }
	__asm { mov dword ptr [g_01311b54], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311cb8[];
extern "C" char g_01311cd4[];
extern "C" char g_01311ce0[];
extern "C" char g_01311ce4[];
extern "C" void fn_00825140();
extern "C" void fn_00c40c70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd5d90
extern "C" __declspec(naked) void asm_00dd5d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6462a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1311cb8 }
	__asm { push 3 }
	__asm { push 0xef000c }
	__asm { call fn_00c40c70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01311cb8], 0xef0004 }
	__asm { mov dword ptr [g_01311ce0], 0xc4cad0 }
	__asm { mov dword ptr [g_01311ce4], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xe0b490 }
	__asm { mov dword ptr [g_01311cd4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c3f1d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd5f50
extern "C" __declspec(naked) void asm_00dd5f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1311b68 }
	__asm { push 0 }
	__asm { push 0x1024d64 }
	__asm { push 0xe83694 }
	__asm { push 0xef0220 }
	__asm { push 0 }
	__asm { push 0xc50330 }
	__asm { call fn_00c3f1d0 }
	__asm { push 0xe0b8a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311e38[];
extern "C" char g_01311e54[];
extern "C" char g_01311e60[];
extern "C" char g_01311e64[];
extern "C" void fn_00825140();
extern "C" void fn_00c40c70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd5fa0
extern "C" __declspec(naked) void asm_00dd5fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6464a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1311e38 }
	__asm { push 3 }
	__asm { push 0xef0018 }
	__asm { call fn_00c40c70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01311e38], 0xef0004 }
	__asm { mov dword ptr [g_01311e60], 0xc50480 }
	__asm { mov dword ptr [g_01311e64], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xe0b960 }
	__asm { mov dword ptr [g_01311e54], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c3f120();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd6020
extern "C" __declspec(naked) void asm_00dd6020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1311fa0 }
	__asm { push 0 }
	__asm { push 0x1024d64 }
	__asm { push 0xe83694 }
	__asm { push 0xef0284 }
	__asm { push 0 }
	__asm { push 0xc50600 }
	__asm { call fn_00c3f120 }
	__asm { push 0xe0b9c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013118f0[];
extern "C" char g_0131190c[];
extern "C" char g_01311918[];
extern "C" char g_0131191c[];
extern "C" void fn_00825140();
extern "C" void fn_00c40c70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd6070
extern "C" __declspec(naked) void asm_00dd6070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6466a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x13118f0 }
	__asm { push 3 }
	__asm { push 0xef0024 }
	__asm { call fn_00c40c70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_013118f0], 0xef0004 }
	__asm { mov dword ptr [g_01311918], 0xc507a0 }
	__asm { mov dword ptr [g_0131191c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xe0b9d0 }
	__asm { mov dword ptr [g_0131190c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c3f070();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd60f0
extern "C" __declspec(naked) void asm_00dd60f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13111e0 }
	__asm { push 0 }
	__asm { push 0x1024d64 }
	__asm { push 0xe83694 }
	__asm { push 0xef0250 }
	__asm { push 0 }
	__asm { push 0xc50930 }
	__asm { call fn_00c3f070 }
	__asm { push 0xe0ba30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c3eef0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd6140
extern "C" __declspec(naked) void asm_00dd6140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1311598 }
	__asm { push 0 }
	__asm { push 0x1024d64 }
	__asm { push 0xe83694 }
	__asm { push 0xef01f0 }
	__asm { push 0 }
	__asm { push 0xc50a80 }
	__asm { call fn_00c3eef0 }
	__asm { push 0xe0baf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311ad0[];
extern "C" char g_01311aec[];
extern "C" char g_01311af8[];
extern "C" char g_01311afc[];
extern "C" void fn_007d5d30();
extern "C" void fn_00c40d80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd6210
extern "C" __declspec(naked) void asm_00dd6210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6468a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1311ad0 }
	__asm { push 0 }
	__asm { push 0xef00fc }
	__asm { call fn_00c40d80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01311ad0], 0xef00f4 }
	__asm { mov dword ptr [g_01311af8], 0xc52300 }
	__asm { mov dword ptr [g_01311afc], 0 }
	__asm { call fn_007d5d30 }
	__asm { push 0xe0bc20 }
	__asm { mov dword ptr [g_01311aec], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311ec8[];
extern "C" char g_01311ee4[];
extern "C" char g_01311ef0[];
extern "C" char g_01311ef4[];
extern "C" void fn_00825140();
extern "C" void fn_00c40c70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd6290
extern "C" __declspec(naked) void asm_00dd6290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd646aa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1311ec8 }
	__asm { push 5 }
	__asm { push 0xef0344 }
	__asm { call fn_00c40c70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01311ec8], 0xef0004 }
	__asm { mov dword ptr [g_01311ef0], 0xc4d160 }
	__asm { mov dword ptr [g_01311ef4], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xe0bc80 }
	__asm { mov dword ptr [g_01311ee4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c3f400();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd6380
extern "C" __declspec(naked) void asm_00dd6380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13112f0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe9609c }
	__asm { push 0xef0308 }
	__asm { push 0xe960c0 }
	__asm { push 0 }
	__asm { push 0xc4e380 }
	__asm { call fn_00c3f400 }
	__asm { push 0xe0bd50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c38aa0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd6630
extern "C" __declspec(naked) void asm_00dd6630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xc51080 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x91a810 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xef0a8c }
	__asm { mov ecx, 0x13116bc }
	__asm { call fn_00c38aa0 }
	__asm { push 0xe0bf10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c38aa0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd6690
extern "C" __declspec(naked) void asm_00dd6690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xc51100 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xc4a180 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xef0aa4 }
	__asm { mov ecx, 0x1310eb8 }
	__asm { call fn_00c38aa0 }
	__asm { push 0xe0bf30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c38aa0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd6a90
extern "C" __declspec(naked) void asm_00dd6a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xc51a10 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x9d90d0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe961cc }
	__asm { mov ecx, 0x1312078 }
	__asm { call fn_00c38aa0 }
	__asm { push 0xe0c0b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c37e70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd6ba0
extern "C" __declspec(naked) void asm_00dd6ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xc51d80 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa8f1a0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe9769c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe97864 }
	__asm { mov ecx, 0x1311354 }
	__asm { call fn_00c37e70 }
	__asm { push 0xe0c110 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c558f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd7a50
extern "C" __declspec(naked) void asm_00dd7a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xc57420 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xc57240 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6071c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xef2b68 }
	__asm { mov ecx, 0x13135f4 }
	__asm { call fn_00c558f0 }
	__asm { push 0xe0c730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c55650();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd7c40
extern "C" __declspec(naked) void asm_00dd7c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xc575d0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xc57300 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe60b34 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xef2f60 }
	__asm { mov ecx, 0x13133e0 }
	__asm { call fn_00c55650 }
	__asm { push 0xe0c7f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c550e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd7ca0
extern "C" __declspec(naked) void asm_00dd7ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xc571b0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x59aeb0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe60b34 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xef2e8c }
	__asm { mov ecx, 0x1313128 }
	__asm { call fn_00c550e0 }
	__asm { push 0xe0c810 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c55a40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd8020
extern "C" __declspec(naked) void asm_00dd8020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xc576f0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xc57320 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6071c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xef2c24 }
	__asm { mov ecx, 0x13130d0 }
	__asm { call fn_00c55a40 }
	__asm { push 0xe0c990 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c55b90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd8080
extern "C" __declspec(naked) void asm_00dd8080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xc57760 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xc57330 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xef3084 }
	__asm { mov ecx, 0x131329c }
	__asm { call fn_00c55b90 }
	__asm { push 0xe0c9b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c55650();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd80e0
extern "C" __declspec(naked) void asm_00dd80e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xc57790 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xc57340 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xef2f74 }
	__asm { mov ecx, 0x1313350 }
	__asm { call fn_00c55650 }
	__asm { push 0xe0c9d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c55b90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd81e0
extern "C" __declspec(naked) void asm_00dd81e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xc577e0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xc57350 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xef30d4 }
	__asm { mov ecx, 0x1312fc8 }
	__asm { call fn_00c55b90 }
	__asm { push 0xe0ca30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c55b90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd8240
extern "C" __declspec(naked) void asm_00dd8240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xc57810 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xc57360 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xef309c }
	__asm { mov ecx, 0x1312de4 }
	__asm { call fn_00c55b90 }
	__asm { push 0xe0ca50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c55650();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd82a0
extern "C" __declspec(naked) void asm_00dd82a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xc57840 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xc57370 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xef30b8 }
	__asm { mov ecx, 0x1313560 }
	__asm { call fn_00c55650 }
	__asm { push 0xe0ca70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01313a30[];
extern "C" char g_01313a4c[];
extern "C" char g_01313a58[];
extern "C" char g_01313a5c[];
extern "C" void fn_00825140();
extern "C" void fn_00c7a310();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd9340
extern "C" __declspec(naked) void asm_00dd9340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6828a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1313a30 }
	__asm { push 3 }
	__asm { push 0xef76d8 }
	__asm { call fn_00c7a310 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01313a30], 0xef7670 }
	__asm { mov dword ptr [g_01313a58], 0xc840c0 }
	__asm { mov dword ptr [g_01313a5c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xe0d860 }
	__asm { mov dword ptr [g_01313a4c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01313b40[];
extern "C" char g_01313b5c[];
extern "C" char g_01313b68[];
extern "C" char g_01313b6c[];
extern "C" void fn_00825140();
extern "C" void fn_00c7a310();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd93c0
extern "C" __declspec(naked) void asm_00dd93c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd682aa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1313b40 }
	__asm { push 3 }
	__asm { push 0xef76f0 }
	__asm { call fn_00c7a310 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01313b40], 0xef7670 }
	__asm { mov dword ptr [g_01313b68], 0xc84760 }
	__asm { mov dword ptr [g_01313b6c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xe0d8c0 }
	__asm { mov dword ptr [g_01313b5c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01313a00[];
extern "C" char g_01313a1c[];
extern "C" char g_01313a28[];
extern "C" char g_01313a2c[];
extern "C" void fn_007d5710();
extern "C" void fn_00c7a310();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd9440
extern "C" __declspec(naked) void asm_00dd9440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd682ca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1313a00 }
	__asm { push 3 }
	__asm { push 0xef7660 }
	__asm { call fn_00c7a310 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01313a00], 0xef7658 }
	__asm { mov dword ptr [g_01313a28], 0xc8f5d0 }
	__asm { mov dword ptr [g_01313a2c], 0 }
	__asm { call fn_007d5710 }
	__asm { push 0xe0d920 }
	__asm { mov dword ptr [g_01313a1c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01313b78[];
extern "C" char g_01313b94[];
extern "C" char g_01313ba0[];
extern "C" char g_01313ba4[];
extern "C" void fn_00825140();
extern "C" void fn_00c7a310();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd9500
extern "C" __declspec(naked) void asm_00dd9500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd682ea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1313b78 }
	__asm { push 3 }
	__asm { push 0xef768c }
	__asm { call fn_00c7a310 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01313b78], 0xef7670 }
	__asm { mov dword ptr [g_01313ba0], 0xc81840 }
	__asm { mov dword ptr [g_01313ba4], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xe0d9f0 }
	__asm { mov dword ptr [g_01313b94], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c94790();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd98e0
extern "C" __declspec(naked) void asm_00dd98e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1313e10 }
	__asm { push 1 }
	__asm { push 0x1e }
	__asm { push 0xefa188 }
	__asm { push 0 }
	__asm { push 0xefa198 }
	__asm { push 0xefa1a4 }
	__asm { push 0xeef2f4 }
	__asm { push 0xe7383c }
	__asm { push 0xefa1b0 }
	__asm { push 0 }
	__asm { push 0xc97860 }
	__asm { call fn_00c94790 }
	__asm { push 0xe0dd10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c94980();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd9940
extern "C" __declspec(naked) void asm_00dd9940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1313ec0 }
	__asm { push 3 }
	__asm { push 0xbb8 }
	__asm { push 0xefa1cc }
	__asm { push 0xefa1dc }
	__asm { push 0 }
	__asm { push 0xc96a50 }
	__asm { call fn_00c94980 }
	__asm { push 0xe0dd20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c9a820();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd9ad0
extern "C" __declspec(naked) void asm_00dd9ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1314054 }
	__asm { push 3 }
	__asm { push 0xe6fc6c }
	__asm { push 0x1018974 }
	__asm { push 0xe2fa14 }
	__asm { push 0xef7600 }
	__asm { push 0xefae84 }
	__asm { push 0xb6c }
	__asm { call fn_00c9a820 }
	__asm { push 0xe0df40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c9a2a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd9c40
extern "C" __declspec(naked) void asm_00dd9c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1313fb0 }
	__asm { push 3 }
	__asm { push 0x3e8 }
	__asm { push 0xefa1cc }
	__asm { push 0x100bf50 }
	__asm { push 0 }
	__asm { push 0xc9e7a0 }
	__asm { call fn_00c9a2a0 }
	__asm { push 0xe0e0c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01314310[];
extern "C" char g_0131432c[];
extern "C" char g_01314338[];
extern "C" char g_0131433c[];
extern "C" void fn_00825140();
extern "C" void fn_00cb0b40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dda4a0
extern "C" __declspec(naked) void asm_00dda4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6b47a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1314310 }
	__asm { push 2 }
	__asm { push 0xefe2e0 }
	__asm { call fn_00cb0b40 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01314310], 0xefe2d8 }
	__asm { mov dword ptr [g_01314338], 0xcb67c0 }
	__asm { mov dword ptr [g_0131433c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xe0e8a0 }
	__asm { mov dword ptr [g_0131432c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11110[];
extern "C" char g_00e12cc4[];
// FUNCTION: ROBLOXSTUDIO 0x00ddb880
extern "C" __declspec(naked) void asm_00ddb880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6f35b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov ecx, 0x131a22c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, 0x131a224 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12cc4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x00dde5b0
extern "C" __declspec(naked) void asm_00dde5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8b351 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov ecx, 0x131edb8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, 0x131edb4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, 0x131edb0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, 0x131edac }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0938[];
extern "C" char g_012e0958[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de1b60
extern "C" __declspec(naked) void asm_00de1b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e0958 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e0958] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e0938], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0908[];
extern "C" char g_012e0928[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de1bc0
extern "C" __declspec(naked) void asm_00de1bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e0928 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e0928] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e0908], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e08a8[];
extern "C" char g_012e08c8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de1c20
extern "C" __declspec(naked) void asm_00de1c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e08c8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e08c8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e08a8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0878[];
extern "C" char g_012e0898[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de1c80
extern "C" __declspec(naked) void asm_00de1c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e0898 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e0898] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e0878], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0808[];
extern "C" char g_012e0828[];
extern "C" char g_012e0838[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de1ce0
extern "C" __declspec(naked) void asm_00de1ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012e0838] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12e0828 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e0828] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e0808], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e154c[];
extern "C" char g_012e156c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de22f0
extern "C" __declspec(naked) void asm_00de22f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e156c }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e156c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e154c], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1578[];
extern "C" char g_012e1598[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2350
extern "C" __declspec(naked) void asm_00de2350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1598 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1598] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1578], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0f7c[];
extern "C" char g_012e0f9c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de23b0
extern "C" __declspec(naked) void asm_00de23b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e0f9c }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e0f9c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e0f7c], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1098[];
extern "C" char g_012e10b8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2410
extern "C" __declspec(naked) void asm_00de2410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e10b8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e10b8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1098], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e14f4[];
extern "C" char g_012e1514[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2470
extern "C" __declspec(naked) void asm_00de2470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1514 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1514] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e14f4], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1520[];
extern "C" char g_012e1540[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de24d0
extern "C" __declspec(naked) void asm_00de24d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1540 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1540] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1520], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e15a4[];
extern "C" char g_012e15c4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2530
extern "C" __declspec(naked) void asm_00de2530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e15c4 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e15c4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e15a4], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e15d0[];
extern "C" char g_012e15f0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2590
extern "C" __declspec(naked) void asm_00de2590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e15f0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e15f0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e15d0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e16d8[];
extern "C" char g_012e16f8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2770
extern "C" __declspec(naked) void asm_00de2770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e16f8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e16f8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e16d8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0f20[];
extern "C" char g_012e0f40[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de27d0
extern "C" __declspec(naked) void asm_00de27d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e0f40 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e0f40] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e0f20], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1128[];
extern "C" char g_012e1148[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2830
extern "C" __declspec(naked) void asm_00de2830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1148 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1148] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1128], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1068[];
extern "C" char g_012e1088[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2890
extern "C" __declspec(naked) void asm_00de2890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1088 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1088] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1068], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1358[];
extern "C" char g_012e1378[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de28f0
extern "C" __declspec(naked) void asm_00de28f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1378 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1378] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1358], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e12e8[];
extern "C" char g_012e1308[];
extern "C" char g_012e1318[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2950
extern "C" __declspec(naked) void asm_00de2950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012e1318] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12e1308 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1308] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e12e8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e12b8[];
extern "C" char g_012e12d8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de29c0
extern "C" __declspec(naked) void asm_00de29c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e12d8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e12d8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e12b8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1320[];
extern "C" char g_012e1340[];
extern "C" char g_012e1350[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2a20
extern "C" __declspec(naked) void asm_00de2a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012e1350] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12e1340 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1340] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1320], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1190[];
extern "C" char g_012e11b0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2b60
extern "C" __declspec(naked) void asm_00de2b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e11b0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e11b0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1190], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0fa8[];
extern "C" char g_012e0fc8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2bc0
extern "C" __declspec(naked) void asm_00de2bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e0fc8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e0fc8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e0fa8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e11f8[];
extern "C" char g_012e1218[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2c20
extern "C" __declspec(naked) void asm_00de2c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1218 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1218] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e11f8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1008[];
extern "C" char g_012e1028[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2d20
extern "C" __declspec(naked) void asm_00de2d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1028 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1028] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1008], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1258[];
extern "C" char g_012e1278[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2d80
extern "C" __declspec(naked) void asm_00de2d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1278 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1278] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1258], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1038[];
extern "C" char g_012e1058[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2de0
extern "C" __declspec(naked) void asm_00de2de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1058 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1058] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1038], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1288[];
extern "C" char g_012e12a8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2e40
extern "C" __declspec(naked) void asm_00de2e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e12a8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e12a8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1288], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0fd8[];
extern "C" char g_012e0ff8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2ea0
extern "C" __declspec(naked) void asm_00de2ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e0ff8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e0ff8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e0fd8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1b80[];
extern "C" char g_012e1ba0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de3260
extern "C" __declspec(naked) void asm_00de3260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1ba0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1ba0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1b80], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1e98[];
extern "C" char g_012e1eb8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de32c0
extern "C" __declspec(naked) void asm_00de32c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1eb8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1eb8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1e98], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1f58[];
extern "C" char g_012e1f78[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de34c0
extern "C" __declspec(naked) void asm_00de34c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1f78 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1f78] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1f58], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1e68[];
extern "C" char g_012e1e88[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de3520
extern "C" __declspec(naked) void asm_00de3520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1e88 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1e88] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1e68], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1ec8[];
extern "C" char g_012e1ee8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de3580
extern "C" __declspec(naked) void asm_00de3580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1ee8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1ee8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1ec8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1ef8[];
extern "C" char g_012e1f18[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de35e0
extern "C" __declspec(naked) void asm_00de35e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1f18 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1f18] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1ef8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1f28[];
extern "C" char g_012e1f48[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de3640
extern "C" __declspec(naked) void asm_00de3640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1f48 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1f48] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1f28], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1f84[];
extern "C" char g_012e1fa4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de36a0
extern "C" __declspec(naked) void asm_00de36a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1fa4 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1fa4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1f84], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1b50[];
extern "C" char g_012e1b70[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de3880
extern "C" __declspec(naked) void asm_00de3880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1b70 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1b70] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1b50], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1c40[];
extern "C" char g_012e1c60[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de38e0
extern "C" __declspec(naked) void asm_00de38e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1c60 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1c60] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1c40], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1d18[];
extern "C" char g_012e1d38[];
extern "C" char g_012e1d48[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de3940
extern "C" __declspec(naked) void asm_00de3940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012e1d48] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12e1d38 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1d38] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1d18], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1ac0[];
extern "C" char g_012e1ae0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de39b0
extern "C" __declspec(naked) void asm_00de39b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1ae0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1ae0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1ac0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1b20[];
extern "C" char g_012e1b40[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de3a10
extern "C" __declspec(naked) void asm_00de3a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1b40 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1b40] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1b20], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1af0[];
extern "C" char g_012e1b10[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de3a70
extern "C" __declspec(naked) void asm_00de3a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1b10 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1b10] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1af0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1c10[];
extern "C" char g_012e1c30[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de3b80
extern "C" __declspec(naked) void asm_00de3b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1c30 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1c30] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1c10], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1be0[];
extern "C" char g_012e1c00[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de3be0
extern "C" __declspec(naked) void asm_00de3be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x12e1c00 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1c00] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1be0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
