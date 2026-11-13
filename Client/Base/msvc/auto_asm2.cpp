// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x004b3be0
extern "C" __declspec(naked) void asm_004b3be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004b3c30
extern "C" __declspec(naked) void asm_004b3c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push dword ptr [eax + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004b3c80
extern "C" __declspec(naked) void asm_004b3c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004b3cd0
extern "C" __declspec(naked) void asm_004b3cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop ebp }
	__asm { jmp eax }
}

// FUNCTION: ROBLOXSTUDIO 0x004b3df0
extern "C" __declspec(naked) void asm_004b3df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop ebp }
	__asm { jmp eax }
}

// FUNCTION: ROBLOXSTUDIO 0x004b3e40
extern "C" __declspec(naked) void asm_004b3e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop ebp }
	__asm { jmp eax }
}

extern "C" void fn_004b4110();
// FUNCTION: ROBLOXSTUDIO 0x004b3e90
extern "C" __declspec(naked) void asm_004b3e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp fn_004b4110 }
}

// FUNCTION: ROBLOXSTUDIO 0x004b3fa0
extern "C" __declspec(naked) void asm_004b3fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [eax + 8] }
	__asm { push dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b5dd0();
// FUNCTION: ROBLOXSTUDIO 0x004b5ed0
extern "C" __declspec(naked) void asm_004b5ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004b5dd0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x004b6520
extern "C" __declspec(naked) void asm_004b6520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b764 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x004b6540
extern "C" __declspec(naked) void asm_004b6540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b74c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x004cbd60
extern "C" __declspec(naked) void asm_004cbd60()
{
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { add ecx, dword ptr [eax + 0x14] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { jmp eax }
}

// FUNCTION: ROBLOXSTUDIO 0x004ce920
extern "C" __declspec(naked) void asm_004ce920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop ebp }
	__asm { jmp eax }
}

// FUNCTION: ROBLOXSTUDIO 0x004ce970
extern "C" __declspec(naked) void asm_004ce970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { movzx eax, byte ptr [edx + 0xc] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { add ecx, dword ptr [edx + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004ce9c0
extern "C" __declspec(naked) void asm_004ce9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov al, byte ptr [edx + 0xc] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { add ecx, dword ptr [edx + 8] }
	__asm { mov byte ptr [ebp + 8], al }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004d21c0
extern "C" __declspec(naked) void asm_004d21c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 0x14], 0xf }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004d32c0();
// FUNCTION: ROBLOXSTUDIO 0x004d35f0
extern "C" __declspec(naked) void asm_004d35f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_004d32c0 }
	__asm { or word ptr [esi + 0xa], 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004d4170();
extern "C" void fn_004d4780();
extern "C" void fn_004d4b90();
// FUNCTION: ROBLOXSTUDIO 0x004d5ba0
extern "C" __declspec(naked) void asm_004d5ba0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { call fn_004d4170 }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_004d4780 }
	__asm { mov ecx, eax }
	__asm { call fn_004d4b90 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_004d6ba0();
// FUNCTION: ROBLOXSTUDIO 0x004d63f0
extern "C" __declspec(naked) void asm_004d63f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004d6ba0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004efb10
extern "C" __declspec(naked) void asm_004efb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { or word ptr [ecx + 0xa], 4 }
	__asm { mov dword ptr [ecx + 0x24], eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x004efdf0
extern "C" __declspec(naked) void asm_004efdf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { or word ptr [eax + 0xa], 4 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004f4ab0();
// FUNCTION: ROBLOXSTUDIO 0x004f4790
extern "C" __declspec(naked) void asm_004f4790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004f4ab0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e12e20[];
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004f5b20
extern "C" __declspec(naked) void asm_004f5b20()
{
	__asm { push 0 }
	__asm { push 0x12cb264 }
	__asm { push 0x12cb244 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e12e20] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004f6c10
extern "C" __declspec(naked) void asm_004f6c10()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov al, 1 }
	__asm { ret }
}

extern "C" char g_00e129e4[];
// FUNCTION: ROBLOXSTUDIO 0x004f9e40
extern "C" __declspec(naked) void asm_004f9e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e129e4] }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e126b0[];
// FUNCTION: ROBLOXSTUDIO 0x004fbaf0
extern "C" __declspec(naked) void asm_004fbaf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e126b0] }
}

extern "C" void fn_004fa700();
// FUNCTION: ROBLOXSTUDIO 0x0050030d
extern "C" __declspec(naked) void asm_0050030d()
{
	__asm { sub ecx, 8 }
	__asm { jmp fn_004fa700 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax + 0x2c] }
}

extern "C" void fn_00511ad0();
// FUNCTION: ROBLOXSTUDIO 0x0050fe80
extern "C" __declspec(naked) void asm_0050fe80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov cl, byte ptr [ebp + 8] }
	__asm { call fn_00511ad0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00462ec0();
// FUNCTION: ROBLOXSTUDIO 0x005115e0
extern "C" __declspec(naked) void asm_005115e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0x20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00462ec0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11108[];
// FUNCTION: ROBLOXSTUDIO 0x005146a0
extern "C" __declspec(naked) void asm_005146a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01318fb4[];
// FUNCTION: ROBLOXSTUDIO 0x00524af0
extern "C" __declspec(naked) void asm_00524af0()
{
	__asm { xor eax, eax }
	__asm { cmp dword ptr [g_01318fb4], eax }
	__asm { setle al }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0052e8e0
extern "C" __declspec(naked) void asm_0052e8e0()
{
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [eax + 0x48] }
	__asm { add ecx, dword ptr [eax + 0x44] }
	__asm { mov eax, dword ptr [eax + 0x40] }
	__asm { jmp eax }
}

// FUNCTION: ROBLOXSTUDIO 0x0052f980
extern "C" __declspec(naked) void asm_0052f980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0052fcd0
extern "C" __declspec(naked) void asm_0052fcd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [eax + 8] }
	__asm { push dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00426080();
// FUNCTION: ROBLOXSTUDIO 0x00532500
extern "C" __declspec(naked) void asm_00532500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00426080 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10320[];
// FUNCTION: ROBLOXSTUDIO 0x005325dd
extern "C" __declspec(naked) void asm_005325dd()
{
	__asm { sub ecx, dword ptr [ecx - 4] }
	__asm { sub ecx, 0x48 }
	__asm { jmp dword ptr [g_00e10320] }
}

extern "C" void fn_00891b30();
// FUNCTION: ROBLOXSTUDIO 0x00532740
extern "C" __declspec(naked) void asm_00532740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { call fn_00891b30 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x005378a0
extern "C" __declspec(naked) void asm_005378a0()
{
	__asm { push 0 }
	__asm { push 0x12bf8f8 }
	__asm { push 0x12c531c }
	__asm { push 0 }
	__asm { push dword ptr [ecx - 0x14] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { ret }
}

extern "C" char g_00e12a50[];
extern "C" char g_00e12acc[];
// FUNCTION: ROBLOXSTUDIO 0x0053dbf0
extern "C" __declspec(naked) void asm_0053dbf0()
{
	__asm { push esi }
	__asm { lea esi, [ecx - 0x50] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12a50] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12acc] }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_005372e0();
// FUNCTION: ROBLOXSTUDIO 0x0053f627
extern "C" __declspec(naked) void asm_0053f627()
{
	__asm { sub ecx, 0x20 }
	__asm { jmp fn_005372e0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax + 0x10] }
}

extern "C" void fn_0053c960();
// FUNCTION: ROBLOXSTUDIO 0x0053f634
extern "C" __declspec(naked) void asm_0053f634()
{
	__asm { sub ecx, 8 }
	__asm { jmp fn_0053c960 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax + 0x14] }
}

extern "C" void fn_00538be0();
// FUNCTION: ROBLOXSTUDIO 0x0053f641
extern "C" __declspec(naked) void asm_0053f641()
{
	__asm { sub ecx, 8 }
	__asm { jmp fn_00538be0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax + 0xc] }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00562f70
extern "C" __declspec(naked) void asm_00562f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe18150 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12bc4[];
// FUNCTION: ROBLOXSTUDIO 0x0056c110
extern "C" __declspec(naked) void asm_0056c110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e12bc4] }
}

// FUNCTION: ROBLOXSTUDIO 0x0056f7f0
extern "C" __declspec(naked) void asm_0056f7f0()
{
	__asm { push dword ptr [ecx + 0x44] }
	__asm { lea eax, [ecx + 0x40] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 0x3c] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { ret }
}

extern "C" void fn_006e07d0();
// FUNCTION: ROBLOXSTUDIO 0x005716b0
extern "C" __declspec(naked) void asm_005716b0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_006e07d0 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi + 0x84] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0x88] }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00574190
extern "C" __declspec(naked) void asm_00574190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fabs }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005757f0
extern "C" __declspec(naked) void asm_005757f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005758a0
extern "C" __declspec(naked) void asm_005758a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11944[];
extern "C" char g_00e123ac[];
// FUNCTION: ROBLOXSTUDIO 0x00576180
extern "C" __declspec(naked) void asm_00576180()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e123ac] }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11944] }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00514ff0();
// FUNCTION: ROBLOXSTUDIO 0x0057a230
extern "C" __declspec(naked) void asm_0057a230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00514ff0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0057df60
extern "C" __declspec(naked) void asm_0057df60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00477ba0();
// FUNCTION: ROBLOXSTUDIO 0x00583a90
extern "C" __declspec(naked) void asm_00583a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0x34 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00477ba0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00585010();
// FUNCTION: ROBLOXSTUDIO 0x00585080
extern "C" __declspec(naked) void asm_00585080()
{
	__asm { push ecx }
	__asm { add ecx, 0x118 }
	__asm { call fn_00585010 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e121e4[];
// FUNCTION: ROBLOXSTUDIO 0x00585cc0
extern "C" __declspec(naked) void asm_00585cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e121e4] }
}

extern "C" char g_00e108e8[];
// FUNCTION: ROBLOXSTUDIO 0x005886f0
extern "C" __declspec(naked) void asm_005886f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e108e8] }
}

extern "C" char g_00e10e68[];
// FUNCTION: ROBLOXSTUDIO 0x00588af0
extern "C" __declspec(naked) void asm_00588af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e10e68] }
}

extern "C" char g_012bfc74[];
extern "C" char g_01318fc4[];
// FUNCTION: ROBLOXSTUDIO 0x0058a0a0
extern "C" __declspec(naked) void asm_0058a0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { inc dword ptr [g_01318fc4] }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_012bfc74] }
}

// FUNCTION: ROBLOXSTUDIO 0x0058fcb0
extern "C" __declspec(naked) void asm_0058fcb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x3c] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005905e0
extern "C" __declspec(naked) void asm_005905e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call dword ptr [eax + 0x78] }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x0059b850
extern "C" __declspec(naked) void asm_0059b850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0x40] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x005a71f0
extern "C" __declspec(naked) void asm_005a71f0()
{
	__asm { push ebx }
	__asm { mov ebx, esp }
	__asm { sub esp, 8 }
	__asm { and esp, 0xfffffff0 }
	__asm { add esp, 4 }
}

extern "C" void fn_005c9f30();
// FUNCTION: ROBLOXSTUDIO 0x005c9f10
extern "C" __declspec(naked) void asm_005c9f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_005c9f30 }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_01319000[];
extern "C" void fn_005cea40();
// FUNCTION: ROBLOXSTUDIO 0x005ce3b0
extern "C" __declspec(naked) void asm_005ce3b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { inc dword ptr [g_01319000] }
	__asm { pop ebp }
	__asm { jmp fn_005cea40 }
}

// FUNCTION: ROBLOXSTUDIO 0x005e1e10
extern "C" __declspec(naked) void asm_005e1e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx + 0x5c] }
	__asm { mov dword ptr [eax], 0 }
	__asm { fstp dword ptr [eax] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005ea1d0
extern "C" __declspec(naked) void asm_005ea1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0060bbd0();
// FUNCTION: ROBLOXSTUDIO 0x00606c10
extern "C" __declspec(naked) void asm_00606c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { lea eax, [ecx + 0x18] }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push dword ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_0060bbd0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0060a3c0();
// FUNCTION: ROBLOXSTUDIO 0x00606fd0
extern "C" __declspec(naked) void asm_00606fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0060a3c0 }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

// FUNCTION: ROBLOXSTUDIO 0x00608250
extern "C" __declspec(naked) void asm_00608250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx + 0x4c] }
	__asm { mov dword ptr [eax], 0 }
	__asm { fstp dword ptr [eax] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012da3b8[];
// FUNCTION: ROBLOXSTUDIO 0x0060bfc0
extern "C" __declspec(naked) void asm_0060bfc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_012da3b8] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012da3a0[];
// FUNCTION: ROBLOXSTUDIO 0x0060bfe0
extern "C" __declspec(naked) void asm_0060bfe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_012da3a0] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0060f270
extern "C" __declspec(naked) void asm_0060f270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea eax, [eax + eax*2] }
	__asm { mov eax, dword ptr [eax*4 + 0xe32038] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0060f3f0();
// FUNCTION: ROBLOXSTUDIO 0x0060f6d0
extern "C" __declspec(naked) void asm_0060f6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_0060f3f0 }
	__asm { mov dword ptr [esi], 0xe32a84 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0060f940
extern "C" __declspec(naked) void asm_0060f940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_006104b0();
// FUNCTION: ROBLOXSTUDIO 0x0060ff30
extern "C" __declspec(naked) void asm_0060ff30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006104b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0060ff30();
// FUNCTION: ROBLOXSTUDIO 0x00610230
extern "C" __declspec(naked) void asm_00610230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0060ff30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006106d0
extern "C" __declspec(naked) void asm_006106d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movzx eax, byte ptr [eax + eax*2 + 0xe32ab8] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00611a10
extern "C" __declspec(naked) void asm_00611a10()
{
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { mov ecx, dword ptr [eax + 0xba0] }
	__asm { mov eax, dword ptr [ecx + 0x128] }
	__asm { add ecx, 0x128 }
	__asm { jmp dword ptr [eax + 8] }
}

// FUNCTION: ROBLOXSTUDIO 0x00619e50
extern "C" __declspec(naked) void asm_00619e50()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax + 4] }
}

// FUNCTION: ROBLOXSTUDIO 0x0061b580
extern "C" __declspec(naked) void asm_0061b580()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x20] }
	__asm { sub esi, dword ptr [ecx + 0x1c] }
	__asm { mov eax, 0x92492493 }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006264e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00626a80
extern "C" __declspec(naked) void asm_00626a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_006264e0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104fc[];
extern "C" void fn_00cf6840();
// FUNCTION: ROBLOXSTUDIO 0x00656f40
extern "C" __declspec(naked) void asm_00656f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { call dword ptr [g_00e104fc] }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { jmp fn_00cf6840 }
}

// FUNCTION: ROBLOXSTUDIO 0x00657410
extern "C" __declspec(naked) void asm_00657410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006617a0();
// FUNCTION: ROBLOXSTUDIO 0x006616e0
extern "C" __declspec(naked) void asm_006616e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { test al, al }
	__asm { sete al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006617a0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00662b40
extern "C" __declspec(naked) void asm_00662b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movzx ecx, byte ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, ecx }
	__asm { and eax, 3 }
	__asm { and ecx, 4 }
	__asm { or eax, ecx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00662b60
extern "C" __declspec(naked) void asm_00662b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax*4 + 0xe39c4c] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00662eb0
extern "C" __declspec(naked) void asm_00662eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea eax, [eax + ecx*2] }
	__asm { mov eax, dword ptr [eax*4 + 0x11d9410] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00672bc0
extern "C" __declspec(naked) void asm_00672bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx + 0x6c] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 0x70] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { fld dword ptr [ecx + 0x74] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00672be0
extern "C" __declspec(naked) void asm_00672be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx + 0x78] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 0x7c] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { fld dword ptr [ecx + 0x80] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1060c[];
// FUNCTION: ROBLOXSTUDIO 0x00675840
extern "C" __declspec(naked) void asm_00675840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e1060c] }
}

extern "C" char g_00e10610[];
// FUNCTION: ROBLOXSTUDIO 0x00675850
extern "C" __declspec(naked) void asm_00675850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e10610] }
}

extern "C" char g_00e10534[];
// FUNCTION: ROBLOXSTUDIO 0x00675860
extern "C" __declspec(naked) void asm_00675860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e10534] }
}

extern "C" void fn_0067b5e0();
// FUNCTION: ROBLOXSTUDIO 0x0067aa50
extern "C" __declspec(naked) void asm_0067aa50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0067b5e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0067b8c0();
// FUNCTION: ROBLOXSTUDIO 0x0067aa70
extern "C" __declspec(naked) void asm_0067aa70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0067b8c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0067bba0();
// FUNCTION: ROBLOXSTUDIO 0x0067aa90
extern "C" __declspec(naked) void asm_0067aa90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0067bba0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0067be80();
// FUNCTION: ROBLOXSTUDIO 0x0067aab0
extern "C" __declspec(naked) void asm_0067aab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0067be80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0067c160();
// FUNCTION: ROBLOXSTUDIO 0x0067aad0
extern "C" __declspec(naked) void asm_0067aad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0067c160 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0067cb00
extern "C" __declspec(naked) void asm_0067cb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b79c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0067cb20
extern "C" __declspec(naked) void asm_0067cb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b808 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0067cb40
extern "C" __declspec(naked) void asm_0067cb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b7d4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0067e360();
// FUNCTION: ROBLOXSTUDIO 0x0067d6d0
extern "C" __declspec(naked) void asm_0067d6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push -1 }
	__asm { push eax }
	__asm { add ecx, 0xfc }
	__asm { call fn_0067e360 }
	__asm { fld qword ptr [eax + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0067e4d0
extern "C" __declspec(naked) void asm_0067e4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { fld qword ptr [eax] }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0067e4f0
extern "C" __declspec(naked) void asm_0067e4f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { mov al, byte ptr [eax] }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0067f790
extern "C" __declspec(naked) void asm_0067f790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0067e360();
// FUNCTION: ROBLOXSTUDIO 0x006868a0
extern "C" __declspec(naked) void asm_006868a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0x1b4 }
	__asm { call fn_0067e360 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006905e0();
// FUNCTION: ROBLOXSTUDIO 0x0068f430
extern "C" __declspec(naked) void asm_0068f430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006905e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0068f430();
// FUNCTION: ROBLOXSTUDIO 0x0068fc80
extern "C" __declspec(naked) void asm_0068fc80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0068f430 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0068dbe0();
// FUNCTION: ROBLOXSTUDIO 0x00690730
extern "C" __declspec(naked) void asm_00690730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0068dbe0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009f6640();
// FUNCTION: ROBLOXSTUDIO 0x00693790
extern "C" __declspec(naked) void asm_00693790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { lea eax, [ecx + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_009f6640 }
	__asm { pop ebp }
	__asm { ret 4 }
}
