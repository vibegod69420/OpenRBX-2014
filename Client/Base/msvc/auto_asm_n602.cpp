// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_006d1ee0();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x007bec90
extern "C" __declspec(naked) void asm_007bec90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { movss xmm0, dword ptr [ebx + 0x24] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { ucomiss xmm0, dword ptr [esi + 0xcc] }
	__asm { lea edx, [esi + 0xa8] }
	__asm { lahf }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { test ah, 0x44 }
	__asm { jp L_007bece8 }
	__asm { movss xmm0, dword ptr [ebx + 0x28] }
	__asm { ucomiss xmm0, dword ptr [edx + 0x28] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_007bece8 }
	__asm { movss xmm0, dword ptr [ebx + 0x2c] }
	__asm { ucomiss xmm0, dword ptr [edx + 0x2c] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_007bece8 }
	__asm { push edx }
	__asm { mov ecx, ebx }
	__asm { call fn_006d1ee0 }
	__asm { test al, al }
	__asm { jne L_007bed51 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { L_007bece8: }
	__asm { mov dword ptr [esi + 0x198], 0 }
	__asm { mov dword ptr [esi + 0x74], 2 }
	__asm { push edi }
	__asm { mov edi, edx }
	__asm { mov ecx, 9 }
	__asm { mov esi, ebx }
	__asm { rep movsd }
	__asm { fld dword ptr [ebx + 0x24] }
	__asm { fstp dword ptr [edx + 0x24] }
	__asm { fld dword ptr [ebx + 0x28] }
	__asm { fstp dword ptr [edx + 0x28] }
	__asm { fld dword ptr [ebx + 0x2c] }
	__asm { fstp dword ptr [edx + 0x2c] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { mov ecx, 9 }
	__asm { lea edi, [edx + 0x108] }
	__asm { mov esi, ebx }
	__asm { rep movsd }
	__asm { fld dword ptr [ebx + 0x24] }
	__asm { fstp dword ptr [edx + 0x12c] }
	__asm { fld dword ptr [ebx + 0x28] }
	__asm { fstp dword ptr [edx + 0x130] }
	__asm { fld dword ptr [ebx + 0x2c] }
	__asm { fstp dword ptr [edx + 0x134] }
	__asm { push 0x12e2fd0 }
	__asm { mov ecx, edx }
	__asm { call fn_007b4f50 }
	__asm { pop edi }
	__asm { L_007bed51: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006d1ee0();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x007bed80
extern "C" __declspec(naked) void asm_007bed80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { movss xmm0, dword ptr [edx + 0x24] }
	__asm { ucomiss xmm0, dword ptr [eax + 0xcc] }
	__asm { push ebx }
	__asm { lea ebx, [eax + 0xa8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_007bedd2 }
	__asm { movss xmm0, dword ptr [edx + 0x28] }
	__asm { ucomiss xmm0, dword ptr [ebx + 0x28] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_007bedd2 }
	__asm { movss xmm0, dword ptr [edx + 0x2c] }
	__asm { ucomiss xmm0, dword ptr [ebx + 0x2c] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_007bedd2 }
	__asm { push ebx }
	__asm { mov ecx, edx }
	__asm { call fn_006d1ee0 }
	__asm { test al, al }
	__asm { jne L_007bee00 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { L_007bedd2: }
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
	__asm { push 0x12e2fd0 }
	__asm { call fn_007b4f50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_007bee00: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006d1ee0();
// FUNCTION: ROBLOXSTUDIO 0x007bee10
extern "C" __declspec(naked) void asm_007bee10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { movss xmm0, dword ptr [edx + 0x24] }
	__asm { ucomiss xmm0, dword ptr [ecx + 0xcc] }
	__asm { lea ebx, [ecx + 0xa8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_007bee5c }
	__asm { movss xmm0, dword ptr [edx + 0x28] }
	__asm { ucomiss xmm0, dword ptr [ebx + 0x28] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_007bee5c }
	__asm { movss xmm0, dword ptr [edx + 0x2c] }
	__asm { ucomiss xmm0, dword ptr [ebx + 0x2c] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_007bee5c }
	__asm { push ebx }
	__asm { mov ecx, edx }
	__asm { call fn_006d1ee0 }
	__asm { test al, al }
	__asm { jne L_007bee7d }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { L_007bee5c: }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, 9 }
	__asm { mov esi, edx }
	__asm { mov edi, ebx }
	__asm { rep movsd }
	__asm { fld dword ptr [edx + 0x24] }
	__asm { fstp dword ptr [ebx + 0x24] }
	__asm { fld dword ptr [edx + 0x28] }
	__asm { fstp dword ptr [ebx + 0x28] }
	__asm { fld dword ptr [edx + 0x2c] }
	__asm { fstp dword ptr [ebx + 0x2c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_007bee7d: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006d1ee0();
// FUNCTION: ROBLOXSTUDIO 0x007bee90
extern "C" __declspec(naked) void asm_007bee90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { movss xmm0, dword ptr [ebx + 0x24] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { ucomiss xmm0, dword ptr [esi + 0xcc] }
	__asm { lea edx, [esi + 0xa8] }
	__asm { lahf }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { test ah, 0x44 }
	__asm { jp L_007beee8 }
	__asm { movss xmm0, dword ptr [ebx + 0x28] }
	__asm { ucomiss xmm0, dword ptr [edx + 0x28] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_007beee8 }
	__asm { movss xmm0, dword ptr [ebx + 0x2c] }
	__asm { ucomiss xmm0, dword ptr [edx + 0x2c] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_007beee8 }
	__asm { push edx }
	__asm { mov ecx, ebx }
	__asm { call fn_006d1ee0 }
	__asm { test al, al }
	__asm { jne L_007bef45 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { L_007beee8: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [esi + 0x198], 0 }
	__asm { mov dword ptr [esi + 0x74], 2 }
	__asm { push edi }
	__asm { mov ecx, 9 }
	__asm { mov esi, ebx }
	__asm { mov edi, edx }
	__asm { rep movsd }
	__asm { fld dword ptr [ebx + 0x24] }
	__asm { fstp dword ptr [edx + 0x24] }
	__asm { fld dword ptr [ebx + 0x28] }
	__asm { fstp dword ptr [edx + 0x28] }
	__asm { fld dword ptr [ebx + 0x2c] }
	__asm { fstp dword ptr [edx + 0x2c] }
	__asm { mov ecx, 9 }
	__asm { mov esi, ebx }
	__asm { lea edi, [eax + 0x108] }
	__asm { rep movsd }
	__asm { fld dword ptr [ebx + 0x24] }
	__asm { fstp dword ptr [eax + 0x12c] }
	__asm { fld dword ptr [ebx + 0x28] }
	__asm { fstp dword ptr [eax + 0x130] }
	__asm { fld dword ptr [ebx + 0x2c] }
	__asm { fstp dword ptr [eax + 0x134] }
	__asm { pop edi }
	__asm { L_007bef45: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
