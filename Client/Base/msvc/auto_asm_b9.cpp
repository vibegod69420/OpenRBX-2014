// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e3ad60[];
extern "C" void fn_006c46c0();
// FUNCTION: ROBLOXSTUDIO 0x00c90bf0
extern "C" __declspec(naked) void asm_00c90bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [g_00e3ad60] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006c46c0();
// FUNCTION: ROBLOXSTUDIO 0x00c90cc0
extern "C" __declspec(naked) void asm_00c90cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ecx + 0x210] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006c46a0();
// FUNCTION: ROBLOXSTUDIO 0x00c9f6f0
extern "C" __declspec(naked) void asm_00c9f6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [ecx + 0x210] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ca2fd0
extern "C" __declspec(naked) void asm_00ca2fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fldz }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { fstp qword ptr [ecx + 0x18] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov dword ptr [ecx], 0xefc7bc }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038148[];
extern "C" void fn_006c46a0();
// FUNCTION: ROBLOXSTUDIO 0x00ca6500
extern "C" __declspec(naked) void asm_00ca6500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [g_01038148] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01038148[];
extern "C" void fn_006c46c0();
// FUNCTION: ROBLOXSTUDIO 0x00caaf20
extern "C" __declspec(naked) void asm_00caaf20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [g_01038148] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b00e0();
// FUNCTION: ROBLOXSTUDIO 0x00cbac9a
extern "C" __declspec(naked) void asm_00cbac9a()
{
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cbf3e0
extern "C" __declspec(naked) void asm_00cbf3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { shl edx, 4 }
	__asm { add edx, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ccc170
extern "C" __declspec(naked) void asm_00ccc170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { movzx eax, byte ptr [edx + 0x1c] }
	__asm { mov ecx, dword ptr [edx + 0x14] }
	__asm { add ecx, dword ptr [edx + 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00ccf390
extern "C" __declspec(naked) void asm_00ccf390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edx] }
	__asm { lea eax, [ecx + 0x30] }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ecx + 0x20] }
	__asm { mov ecx, edx }
	__asm { call dword ptr [esi + 0xe4] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006c46c0();
// FUNCTION: ROBLOXSTUDIO 0x00cd5330
extern "C" __declspec(naked) void asm_00cd5330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [ecx + 0x218] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b18f50();
// FUNCTION: ROBLOXSTUDIO 0x00cd7ca0
extern "C" __declspec(naked) void asm_00cd7ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp + 8] }
	__asm { push edx }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { add ecx, 0x24 }
	__asm { call fn_00b18f50 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006c46c0();
// FUNCTION: ROBLOXSTUDIO 0x00cd86f0
extern "C" __declspec(naked) void asm_00cd86f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ecx + 0x218] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
// FUNCTION: ROBLOXSTUDIO 0x00ce9e00
extern "C" __declspec(naked) void asm_00ce9e00()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea edi, [esi + 0x5c8] }
	__asm { mov ecx, edi }
	__asm { call fn_00cf40a0 }
	__asm { mov esi, dword ptr [esi + 0x5e0] }
	__asm { mov ecx, edi }
	__asm { call fn_00cf40b0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cfd340();
// FUNCTION: ROBLOXSTUDIO 0x00cfd570
extern "C" __declspec(naked) void asm_00cfd570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { push 8 }
	__asm { push 0xf }
	__asm { push 8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cfd340 }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00d02320
extern "C" __declspec(naked) void asm_00d02320()
{
	__asm { push esi }
	__asm { push 0x38 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00d092a0
extern "C" __declspec(naked) void asm_00d092a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ecx + 0x1c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x00d092d0
extern "C" __declspec(naked) void asm_00d092d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x1c] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0x38] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

// FUNCTION: ROBLOXSTUDIO 0x00d0bec0
extern "C" __declspec(naked) void asm_00d0bec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx + 0x30] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 0x34] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { fld dword ptr [ecx + 0x38] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { fld dword ptr [ecx + 0x3c] }
	__asm { fstp dword ptr [eax + 0xc] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00d0ce00
extern "C" __declspec(naked) void asm_00d0ce00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { imul eax, eax, 0x1c00 }
	__asm { imul ecx, ecx, 0x300000 }
	__asm { add eax, ecx }
	__asm { mov ecx, dword ptr [edx] }
	__asm { imul ecx, ecx, 0xb }
	__asm { add eax, ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130097c[];
extern "C" char g_0130097d[];
extern "C" void fn_00402ea0();
// FUNCTION: ROBLOXSTUDIO 0x00dbc5f0
extern "C" __declspec(naked) void asm_00dbc5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x1300951 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00402ea0 }
	__asm { mov al, byte ptr [ebp - 1] }
	__asm { mov byte ptr [g_0130097c], al }
	__asm { mov byte ptr [g_0130097d], 0x2c }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013111a0[];
extern "C" char g_013111a1[];
extern "C" void fn_00402ea0();
// FUNCTION: ROBLOXSTUDIO 0x00dd6310
extern "C" __declspec(naked) void asm_00dd6310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x13119ac }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00402ea0 }
	__asm { mov al, byte ptr [ebp - 1] }
	__asm { mov byte ptr [g_013111a0], al }
	__asm { mov byte ptr [g_013111a1], 0x2c }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
