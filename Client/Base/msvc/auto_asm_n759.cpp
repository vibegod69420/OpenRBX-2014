// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b6b8[];
extern "C" void fn_00480920();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0091ca90
extern "C" __declspec(naked) void asm_0091ca90()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0091cadd }
	__asm { cmp dword ptr [g_0131b6b8], 0x29a }
	__asm { je L_0091cadd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0091cacc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0091cadd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0091cacc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0091cadd: }
	__asm { mov ecx, 0x131e12c }
	__asm { jmp fn_00480920 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { fld dword ptr [ecx + 0x98] }
	__asm { ret }
}

extern "C" void fn_006d1ee0();
extern "C" void fn_007b4f50();
extern "C" void fn_0091ca30();
extern "C" void fn_0091d330();
// FUNCTION: ROBLOXSTUDIO 0x0091cb20
extern "C" __declspec(naked) void asm_0091cb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { push ebx }
	__asm { movss xmm0, dword ptr [eax + 0x88] }
	__asm { ucomiss xmm0, dword ptr [edx + 0x24] }
	__asm { lea ebx, [eax + 0x64] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_0091cb6f }
	__asm { movss xmm0, dword ptr [ebx + 0x28] }
	__asm { ucomiss xmm0, dword ptr [edx + 0x28] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_0091cb6f }
	__asm { movss xmm0, dword ptr [ebx + 0x2c] }
	__asm { ucomiss xmm0, dword ptr [edx + 0x2c] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_0091cb6f }
	__asm { push edx }
	__asm { mov ecx, ebx }
	__asm { call fn_006d1ee0 }
	__asm { test al, al }
	__asm { jne L_0091cbb0 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { L_0091cb6f: }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov ecx, 9 }
	__asm { mov edi, ebx }
	__asm { rep movsd }
	__asm { fld dword ptr [edx + 0x24] }
	__asm { fstp dword ptr [ebx + 0x24] }
	__asm { fld dword ptr [edx + 0x28] }
	__asm { fstp dword ptr [ebx + 0x28] }
	__asm { fld dword ptr [edx + 0x2c] }
	__asm { fstp dword ptr [ebx + 0x2c] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push 0x12ff1d0 }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { call fn_0091ca30 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_0091cbb0 }
	__asm { mov ecx, eax }
	__asm { call fn_0091d330 }
	__asm { L_0091cbb0: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
