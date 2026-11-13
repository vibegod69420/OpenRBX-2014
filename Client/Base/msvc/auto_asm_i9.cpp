// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130edcc[];
extern "C" void fn_006b9b20();
extern "C" void fn_00b65350();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b607b0
extern "C" __declspec(naked) void asm_00b607b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00b65350 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00b607cb }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00b607e9 }
	__asm { jmp L_00b607e4 }
	__asm { L_00b607cb: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130edcc] }
	__asm { cmp edx, eax }
	__asm { ja L_00b607de }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130edcc], eax }
	__asm { L_00b607de: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b607e4: }
	__asm { call fn_006b9b20 }
	__asm { L_00b607e9: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006dea00();
extern "C" void fn_00ba8ed0();
// FUNCTION: ROBLOXSTUDIO 0x00b663d0
extern "C" __declspec(naked) void asm_00b663d0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_006dea00 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi + 0x48] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0x4c] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 0x50] }
	__asm { call fn_006dea00 }
	__asm { fld dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { fstp dword ptr [esi + 0x3c] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0x40] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 0x44] }
	__asm { fld dword ptr [esi + 0x3c] }
	__asm { fstp dword ptr [ecx + 0xd4] }
	__asm { fld dword ptr [esi + 0x40] }
	__asm { fstp dword ptr [ecx + 0xd8] }
	__asm { fld dword ptr [esi + 0x44] }
	__asm { fstp dword ptr [ecx + 0xdc] }
	__asm { fld dword ptr [esi + 0x48] }
	__asm { fstp dword ptr [ecx + 0xe0] }
	__asm { fld dword ptr [esi + 0x4c] }
	__asm { fstp dword ptr [ecx + 0xe4] }
	__asm { fld dword ptr [esi + 0x50] }
	__asm { pop esi }
	__asm { fstp dword ptr [ecx + 0xe8] }
	__asm { jmp fn_00ba8ed0 }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130ee40[];
extern "C" void fn_006b9b20();
extern "C" void fn_00b6ae60();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b68680
extern "C" __declspec(naked) void asm_00b68680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00b6ae60 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00b6869b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00b686b9 }
	__asm { jmp L_00b686b4 }
	__asm { L_00b6869b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130ee40] }
	__asm { cmp edx, eax }
	__asm { ja L_00b686ae }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130ee40], eax }
	__asm { L_00b686ae: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b686b4: }
	__asm { call fn_006b9b20 }
	__asm { L_00b686b9: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130ee44[];
extern "C" void fn_006b9b20();
extern "C" void fn_00b6aec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b686f0
extern "C" __declspec(naked) void asm_00b686f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00b6aec0 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00b6870b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00b68729 }
	__asm { jmp L_00b68724 }
	__asm { L_00b6870b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130ee44] }
	__asm { cmp edx, eax }
	__asm { ja L_00b6871e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130ee44], eax }
	__asm { L_00b6871e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b68724: }
	__asm { call fn_006b9b20 }
	__asm { L_00b68729: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00a350c0();
extern "C" void fn_00a356d0();
extern "C" void fn_00a38710();
extern "C" void fn_00a38bc0();
// FUNCTION: ROBLOXSTUDIO 0x00b6e100
extern "C" __declspec(naked) void asm_00b6e100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38710 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { jne L_00b6e12f }
	__asm { push esi }
	__asm { call fn_00a356d0 }
	__asm { add esp, 4 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b6e12f: }
	__asm { push 0xe6fca0 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38bc0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34ff0();
extern "C" void fn_00a35220();
extern "C" void fn_00a357b0();
extern "C" void fn_00b6eee0();
// FUNCTION: ROBLOXSTUDIO 0x00b6e1d0
extern "C" __declspec(naked) void asm_00b6e1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00b6eee0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35220 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { je L_00b6e204 }
	__asm { push 0xffffd8ee }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { add esp, 8 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b6e204: }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a34ff0 }
	__asm { add esp, 8 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a351c0();
extern "C" void fn_00a356d0();
extern "C" void fn_00a38c20();
extern "C" void fn_00a39080();
// FUNCTION: ROBLOXSTUDIO 0x00b6e5f0
extern "C" __declspec(naked) void asm_00b6e5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a39080 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a38c20 }
	__asm { add esp, 0x18 }
	__asm { test eax, eax }
	__asm { jne L_00b6e619 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b6e619: }
	__asm { push esi }
	__asm { call fn_00a356d0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a351c0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 2 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35710();
extern "C" void fn_00a36080();
extern "C" void fn_00a385a0();
extern "C" void fn_00b6edf0();
// FUNCTION: ROBLOXSTUDIO 0x00b6ea30
extern "C" __declspec(naked) void asm_00b6ea30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a36080 }
	__asm { mov edi, eax }
	__asm { add esp, 8 }
	__asm { test edi, edi }
	__asm { jne L_00b6ea59 }
	__asm { push 0xed115c }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a385a0 }
	__asm { add esp, 0xc }
	__asm { L_00b6ea59: }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00b6edf0 }
	__asm { mov eax, dword ptr [eax*4 + 0xed0ee0] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { add esp, 0x10 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a38a50();
extern "C" void fn_00b70ab0();
// FUNCTION: ROBLOXSTUDIO 0x00b71520
extern "C" __declspec(naked) void asm_00b71520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { cmp edi, 0x20 }
	__asm { jl L_00b71540 }
	__asm { push 0xed14dc }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00a38a50 }
	__asm { add esp, 8 }
	__asm { L_00b71540: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + edi*8 + 0x14], eax }
	__asm { push ecx }
	__asm { lea eax, [edi + 1] }
	__asm { mov dword ptr [esi + edi*8 + 0x10], ecx }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { call fn_00b70ab0 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00b71568 }
	__asm { dec dword ptr [esi + 0xc] }
	__asm { L_00b71568: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008ccfc0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b751f0
extern "C" __declspec(naked) void asm_00b751f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x1c], 0x10 }
	__asm { jb L_00b75207 }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b75207: }
	__asm { mov dword ptr [esi + 0x1c], 0xf }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00b7522c }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b7522c: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00b7523b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7523b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a441a0();
// FUNCTION: ROBLOXSTUDIO 0x00b79980
extern "C" __declspec(naked) void asm_00b79980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call fn_00a441a0 }
	__asm { test al, al }
	__asm { je L_00b799a1 }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00b799a1: }
	__asm { push dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x44] }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a3aca0();
// FUNCTION: ROBLOXSTUDIO 0x00b7be60
extern "C" __declspec(naked) void asm_00b7be60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a3aca0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00b7be91 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { push dword ptr [eax + 0x18] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { call eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b7be91: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b98f0();
extern "C" void fn_007cb490();
extern "C" void fn_008dfd40();
extern "C" void fn_00b7bea0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b7bf00
extern "C" __declspec(naked) void asm_00b7bf00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_007cb490 }
	__asm { push eax }
	__asm { call fn_00b7bea0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00b7bf31 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_008dfd40 }
	__asm { add esp, 8 }
	__asm { mov eax, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b7bf31: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xed2210 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_008ccfc0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7e7b0
extern "C" __declspec(naked) void asm_00b7e7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00b7e7f9 }
	__asm { cmp dword ptr [esi + 0x18], 0x10 }
	__asm { jb L_00b7e7cc }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7e7cc: }
	__asm { mov dword ptr [esi + 0x18], 0xf }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00b7e7f0 }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b7e7f0: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7e7f9: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00941e40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7f9b0
extern "C" __declspec(naked) void asm_00b7f9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea ecx, [edi + 0x28] }
	__asm { call fn_00941e40 }
	__asm { push dword ptr [edi + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [edi + 0x24], 0x10 }
	__asm { jb L_00b7f9dc }
	__asm { push dword ptr [edi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7f9dc: }
	__asm { mov dword ptr [edi + 0x24], 0xf }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi + 0x10], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b2deb0();
// FUNCTION: ROBLOXSTUDIO 0x00b87370
extern "C" __declspec(naked) void asm_00b87370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { je L_00b873a0 }
	__asm { push ebx }
	__asm { mov ebx, edi }
	__asm { sub ebx, esi }
	__asm { L_00b87385: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b2deb0 }
	__asm { mov eax, dword ptr [ebx + esi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { add edi, 0x28 }
	__asm { add esi, 0x28 }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { jne L_00b87385 }
	__asm { pop ebx }
	__asm { L_00b873a0: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b873b0
extern "C" __declspec(naked) void asm_00b873b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_00b873ec }
	__asm { nop }
	__asm { L_00b873c0: }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00b873e5 }
	__asm { test al, 1 }
	__asm { jne L_00b873df }
	__asm { and eax, 0xfffffffe }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_00b873df }
	__asm { lea eax, [esi + 8] }
	__asm { push 2 }
	__asm { push eax }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { L_00b873df: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00b873e5: }
	__asm { add esi, 0x28 }
	__asm { cmp esi, edi }
	__asm { jne L_00b873c0 }
	__asm { L_00b873ec: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_00b87260();
// FUNCTION: ROBLOXSTUDIO 0x00b8bc00
extern "C" __declspec(naked) void asm_00b8bc00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [eax] }
	__asm { push dword ptr [edi + 4] }
	__asm { push edi }
	__asm { call fn_00b87260 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, 0x6666665 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00b8bc33 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00b8bc33: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [edi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b8c8a0();
extern "C" void fn_00c04b70();
extern "C" void fn_00c04c70();
// FUNCTION: ROBLOXSTUDIO 0x00b8c950
extern "C" __declspec(naked) void asm_00b8c950()
{
	__asm { push esi }
	__asm { call fn_00b8c8a0 }
	__asm { mov esi, eax }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b8c99a }
	__asm { test esi, esi }
	__asm { jne L_00b8c99a }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b8c989 }
	__asm { push 0x2a }
	__asm { push 0xed42a4 }
	__asm { push 0xe553b4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c99a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b8c989: }
	__asm { movzx eax, al }
	__asm { push 0xed4338 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c99a: }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00c04b70 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00c04c70 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00626760();
extern "C" void fn_00629560();
extern "C" void fn_009f46e0();
// FUNCTION: ROBLOXSTUDIO 0x00b8dfb0
extern "C" __declspec(naked) void asm_00b8dfb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { push edi }
	__asm { lea edi, [ecx + 0x34] }
	__asm { cmp dword ptr [ebp + 0xc], eax }
	__asm { je L_00b8dfc6 }
	__asm { lea edi, [ecx + 0x64] }
	__asm { L_00b8dfc6: }
	__asm { cmp dword ptr [ebp + 0x10], eax }
	__asm { jne L_00b8dfd0 }
	__asm { add ecx, 0x34 }
	__asm { jmp L_00b8dfd3 }
	__asm { L_00b8dfd0: }
	__asm { add ecx, 0x64 }
	__asm { L_00b8dfd3: }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_00629560 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00626760 }
	__asm { push esi }
	__asm { call fn_009f46e0 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b8c1b0();
extern "C" void fn_00b8cde0();
// FUNCTION: ROBLOXSTUDIO 0x00b8f190
extern "C" __declspec(naked) void asm_00b8f190()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00b8f1db }
	__asm { call fn_00b8c1b0 }
	__asm { test eax, eax }
	__asm { jne L_00b8f1db }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8f1c6 }
	__asm { push 0xbc }
	__asm { push 0xed4c08 }
	__asm { push 0xea8614 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8f1db }
	__asm { L_00b8f1c6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed4ca0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8f1db: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_00b8cde0 }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130ef84[];
extern "C" void fn_006b9b20();
extern "C" void fn_00b8f760();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b8f570
extern "C" __declspec(naked) void asm_00b8f570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00b8f760 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00b8f58b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00b8f5a9 }
	__asm { jmp L_00b8f5a4 }
	__asm { L_00b8f58b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130ef84] }
	__asm { cmp edx, eax }
	__asm { ja L_00b8f59e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130ef84], eax }
	__asm { L_00b8f59e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b8f5a4: }
	__asm { call fn_006b9b20 }
	__asm { L_00b8f5a9: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130ef8c[];
extern "C" void fn_006b9b20();
extern "C" void fn_00b8ffc0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b8fc80
extern "C" __declspec(naked) void asm_00b8fc80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00b8ffc0 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00b8fc9b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00b8fcb9 }
	__asm { jmp L_00b8fcb4 }
	__asm { L_00b8fc9b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130ef8c] }
	__asm { cmp edx, eax }
	__asm { ja L_00b8fcae }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130ef8c], eax }
	__asm { L_00b8fcae: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b8fcb4: }
	__asm { call fn_006b9b20 }
	__asm { L_00b8fcb9: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00532480();
extern "C" void fn_00891b10();
// FUNCTION: ROBLOXSTUDIO 0x00b92ea0
extern "C" __declspec(naked) void asm_00b92ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { je L_00b92edd }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00891b10 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { add esp, 4 }
	__asm { cmp eax, edx }
	__asm { je L_00b92ed3 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { cmp edx, ecx }
	__asm { je L_00b92ed3 }
	__asm { test ecx, ecx }
	__asm { je L_00b92edd }
	__asm { push edx }
	__asm { call fn_00532480 }
	__asm { test al, al }
	__asm { je L_00b92edd }
	__asm { L_00b92ed3: }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b92edd: }
	__asm { mov eax, 2 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00891b10();
extern "C" void fn_009d5fc0();
extern "C" void fn_009d86b0();
// FUNCTION: ROBLOXSTUDIO 0x00b92f60
extern "C" __declspec(naked) void asm_00b92f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_00891b10 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { call fn_009d5fc0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00b92f99 }
	__asm { cmp eax, dword ptr [edi + 4] }
	__asm { jne L_00b92f8e }
	__asm { mov ecx, eax }
	__asm { call fn_009d86b0 }
	__asm { cmp esi, eax }
	__asm { je L_00b92f99 }
	__asm { L_00b92f8e: }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b92f99: }
	__asm { pop edi }
	__asm { mov eax, 2 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130f134[];
extern "C" void fn_006b9b20();
extern "C" void fn_00b9c3d0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b9b170
extern "C" __declspec(naked) void asm_00b9b170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00b9c3d0 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00b9b18b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00b9b1a9 }
	__asm { jmp L_00b9b1a4 }
	__asm { L_00b9b18b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130f134] }
	__asm { cmp edx, eax }
	__asm { ja L_00b9b19e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130f134], eax }
	__asm { L_00b9b19e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b9b1a4: }
	__asm { call fn_006b9b20 }
	__asm { L_00b9b1a9: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130f13c[];
extern "C" void fn_006b9b20();
extern "C" void fn_00b9c430();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b9b1e0
extern "C" __declspec(naked) void asm_00b9b1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00b9c430 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00b9b1fb }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00b9b219 }
	__asm { jmp L_00b9b214 }
	__asm { L_00b9b1fb: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130f13c] }
	__asm { cmp edx, eax }
	__asm { ja L_00b9b20e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130f13c], eax }
	__asm { L_00b9b20e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b9b214: }
	__asm { call fn_006b9b20 }
	__asm { L_00b9b219: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130f144[];
extern "C" void fn_006b9b20();
extern "C" void fn_00b9c490();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b9b250
extern "C" __declspec(naked) void asm_00b9b250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00b9c490 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00b9b26b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00b9b289 }
	__asm { jmp L_00b9b284 }
	__asm { L_00b9b26b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130f144] }
	__asm { cmp edx, eax }
	__asm { ja L_00b9b27e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130f144], eax }
	__asm { L_00b9b27e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b9b284: }
	__asm { call fn_006b9b20 }
	__asm { L_00b9b289: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00933390();
extern "C" void fn_00b9d1a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b9d138
extern "C" __declspec(naked) void asm_00b9d138()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp fn_00b9d1a0 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xed7094 }
	__asm { mov dword ptr [esi + 4], 0xed70f0 }
	__asm { mov dword ptr [esi + 0x1c], 0xed7124 }
	__asm { cmp dword ptr [esi + 0x54], 0x10 }
	__asm { jb L_00b9d16b }
	__asm { push dword ptr [esi + 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b9d16b: }
	__asm { mov dword ptr [esi + 0x54], 0xf }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x40], 0 }
	__asm { call fn_00933390 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00b9d193 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b9d193: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b5b980();
extern "C" void fn_00ba0fc0();
extern "C" void fn_00ba1100();
extern "C" void fn_00c0f930();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ba1400
extern "C" __declspec(naked) void asm_00ba1400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [ecx + 0x64] }
	__asm { dec dword ptr [esi + 0x18] }
	__asm { jne L_00ba1438 }
	__asm { call fn_00b5b980 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x34] }
	__asm { call fn_00ba0fc0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ba1100 }
	__asm { mov ecx, esi }
	__asm { call fn_00c0f930 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ba1438: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c2b0();
// FUNCTION: ROBLOXSTUDIO 0x00ba1580
extern "C" __declspec(naked) void asm_00ba1580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c2b0 }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { test edx, edx }
	__asm { je L_00ba15ad }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00ba15ad }
	__asm { cmp edx, eax }
	__asm { je L_00ba15ad }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00ba15ad: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00af1070();
extern "C" void fn_00ba2250();
// FUNCTION: ROBLOXSTUDIO 0x00ba2050
extern "C" __declspec(naked) void asm_00ba2050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00af1070 }
	__asm { add esp, 8 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { je L_00ba2079 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00ba2250 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ba2079: }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00ba2250 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00ba2770
extern "C" __declspec(naked) void asm_00ba2770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00ba27be }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { je L_00ba27be }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba27ad }
	__asm { push 0xdf }
	__asm { push 0xed8e9c }
	__asm { push 0xed98ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba27be }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00ba27ad: }
	__asm { movzx eax, cl }
	__asm { push 0xed98c0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba27be: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b8c620();
// FUNCTION: ROBLOXSTUDIO 0x00ba2ed0
extern "C" __declspec(naked) void asm_00ba2ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c620 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00ba2f2f }
	__asm { mov eax, dword ptr [esi + 0xc0] }
	__asm { add eax, dword ptr [esi + 0x9c] }
	__asm { je L_00ba2f2f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba2f1e }
	__asm { push 0x1d9 }
	__asm { push 0xed8e9c }
	__asm { push 0xe8f66c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba2f2f }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00ba2f1e: }
	__asm { movzx eax, cl }
	__asm { push 0xeda288 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba2f2f: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b5d560();
extern "C" void fn_00b8c620();
extern "C" void fn_00ba4370();
// FUNCTION: ROBLOXSTUDIO 0x00ba42c0
extern "C" __declspec(naked) void asm_00ba42c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b5d560 }
	__asm { test al, al }
	__asm { je L_00ba42df }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { L_00ba42df: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00ba42f2 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ba4370 }
	__asm { L_00ba42f2: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c620 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0099c7f0();
extern "C" void fn_00b5b9e0();
extern "C" void fn_00ba57e0();
// FUNCTION: ROBLOXSTUDIO 0x00ba6f00
extern "C" __declspec(naked) void asm_00ba6f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { add esi, 0xc }
	__asm { mov edi, 2 }
	__asm { L_00ba6f15: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_0099c7f0 }
	__asm { mov ebx, eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00b5b9e0 }
	__asm { test eax, eax }
	__asm { je L_00ba6f39 }
	__asm { cmp eax, 1 }
	__asm { je L_00ba6f39 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push 1 }
	__asm { push ebx }
	__asm { call fn_00ba57e0 }
	__asm { L_00ba6f39: }
	__asm { add esi, 4 }
	__asm { dec edi }
	__asm { jne L_00ba6f15 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130f1d4[];
extern "C" void fn_006b9b20();
extern "C" void fn_00ba9710();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00ba8d00
extern "C" __declspec(naked) void asm_00ba8d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00ba9710 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00ba8d1b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00ba8d39 }
	__asm { jmp L_00ba8d34 }
	__asm { L_00ba8d1b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130f1d4] }
	__asm { cmp edx, eax }
	__asm { ja L_00ba8d2e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130f1d4], eax }
	__asm { L_00ba8d2e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ba8d34: }
	__asm { call fn_006b9b20 }
	__asm { L_00ba8d39: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130ee10[];
extern "C" void fn_006b9b20();
extern "C" void fn_00ba9770();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00ba8d70
extern "C" __declspec(naked) void asm_00ba8d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00ba9770 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00ba8d8b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00ba8da9 }
	__asm { jmp L_00ba8da4 }
	__asm { L_00ba8d8b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130ee10] }
	__asm { cmp edx, eax }
	__asm { ja L_00ba8d9e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130ee10], eax }
	__asm { L_00ba8d9e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ba8da4: }
	__asm { call fn_006b9b20 }
	__asm { L_00ba8da9: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00ba94d0();
extern "C" void fn_00ba9ad0();
// FUNCTION: ROBLOXSTUDIO 0x00ba9890
extern "C" __declspec(naked) void asm_00ba9890()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00ba98da }
	__asm { cmp dword ptr [esi + 0x2c], 0 }
	__asm { jne L_00ba98da }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ba98c9 }
	__asm { push 0xda }
	__asm { push 0xedd31c }
	__asm { push 0xedd5b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba98da }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ba98c9: }
	__asm { movzx eax, al }
	__asm { push 0xeddc70 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba98da: }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { jne L_00ba98e7 }
	__asm { mov ecx, esi }
	__asm { call fn_00ba9ad0 }
	__asm { L_00ba98e7: }
	__asm { mov ecx, esi }
	__asm { call fn_00ba94d0 }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00babde0
extern "C" __declspec(naked) void asm_00babde0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00babe33 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { sub eax, dword ptr [esi + 4] }
	__asm { sar eax, 2 }
	__asm { cmp eax, 3 }
	__asm { jae L_00babe33 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00babe22 }
	__asm { push 0xbd }
	__asm { push 0xea3f40 }
	__asm { push 0xede440 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00babe33 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00babe22: }
	__asm { movzx eax, cl }
	__asm { push 0xede458 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00babe33: }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130f210[];
extern "C" void fn_006b9b20();
extern "C" void fn_00bad920();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bace20
extern "C" __declspec(naked) void asm_00bace20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00bad920 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00bace3b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00bace59 }
	__asm { jmp L_00bace54 }
	__asm { L_00bace3b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130f210] }
	__asm { cmp edx, eax }
	__asm { ja L_00bace4e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130f210], eax }
	__asm { L_00bace4e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bace54: }
	__asm { call fn_006b9b20 }
	__asm { L_00bace59: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130f260[];
extern "C" void fn_006b9b20();
extern "C" void fn_00baec10();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bae380
extern "C" __declspec(naked) void asm_00bae380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00baec10 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00bae39b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00bae3b9 }
	__asm { jmp L_00bae3b4 }
	__asm { L_00bae39b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130f260] }
	__asm { cmp edx, eax }
	__asm { ja L_00bae3ae }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130f260], eax }
	__asm { L_00bae3ae: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bae3b4: }
	__asm { call fn_006b9b20 }
	__asm { L_00bae3b9: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130f258[];
extern "C" void fn_006b9b20();
extern "C" void fn_00baec70();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bae3f0
extern "C" __declspec(naked) void asm_00bae3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00baec70 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00bae40b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00bae429 }
	__asm { jmp L_00bae424 }
	__asm { L_00bae40b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130f258] }
	__asm { cmp edx, eax }
	__asm { ja L_00bae41e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130f258], eax }
	__asm { L_00bae41e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bae424: }
	__asm { call fn_006b9b20 }
	__asm { L_00bae429: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00985e80();
// FUNCTION: ROBLOXSTUDIO 0x00baf530
extern "C" __declspec(naked) void asm_00baf530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00985e80 }
	__asm { mov esi, eax }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test edi, edi }
	__asm { je L_00baf570 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov eax, esi }
	__asm { L_00baf570: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130f2c0[];
extern "C" void fn_006b9b20();
extern "C" void fn_00bb04a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00baf6f0
extern "C" __declspec(naked) void asm_00baf6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00bb04a0 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00baf70b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00baf729 }
	__asm { jmp L_00baf724 }
	__asm { L_00baf70b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130f2c0] }
	__asm { cmp edx, eax }
	__asm { ja L_00baf71e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130f2c0], eax }
	__asm { L_00baf71e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00baf724: }
	__asm { call fn_006b9b20 }
	__asm { L_00baf729: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130f2e0[];
extern "C" void fn_006b9b20();
extern "C" void fn_00bb1dd0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bb1230
extern "C" __declspec(naked) void asm_00bb1230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00bb1dd0 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00bb124b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00bb1269 }
	__asm { jmp L_00bb1264 }
	__asm { L_00bb124b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130f2e0] }
	__asm { cmp edx, eax }
	__asm { ja L_00bb125e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130f2e0], eax }
	__asm { L_00bb125e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb1264: }
	__asm { call fn_006b9b20 }
	__asm { L_00bb1269: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bb13c0
extern "C" __declspec(naked) void asm_00bb13c0()
{
	__asm { L_00bb13c0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { mov esi, edi }
	__asm { jne L_00bb13f0 }
	__asm { L_00bb13d3: }
	__asm { push dword ptr [esi + 8] }
	__asm { mov ecx, ebx }
	__asm { call L_00bb13c0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov edi, esi }
	__asm { je L_00bb13d3 }
	__asm { L_00bb13f0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130f300[];
extern "C" void fn_006b9b20();
extern "C" void fn_00bb2a40();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bb2480
extern "C" __declspec(naked) void asm_00bb2480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00bb2a40 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00bb249b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00bb24b9 }
	__asm { jmp L_00bb24b4 }
	__asm { L_00bb249b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130f300] }
	__asm { cmp edx, eax }
	__asm { ja L_00bb24ae }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130f300], eax }
	__asm { L_00bb24ae: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb24b4: }
	__asm { call fn_006b9b20 }
	__asm { L_00bb24b9: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130f320[];
extern "C" void fn_006b9b20();
extern "C" void fn_00bb3330();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bb2ff0
extern "C" __declspec(naked) void asm_00bb2ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00bb3330 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00bb300b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00bb3029 }
	__asm { jmp L_00bb3024 }
	__asm { L_00bb300b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130f320] }
	__asm { cmp edx, eax }
	__asm { ja L_00bb301e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130f320], eax }
	__asm { L_00bb301e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb3024: }
	__asm { call fn_006b9b20 }
	__asm { L_00bb3029: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130f348[];
extern "C" void fn_006b9b20();
extern "C" void fn_00bb4260();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bb3a90
extern "C" __declspec(naked) void asm_00bb3a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00bb4260 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00bb3aab }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00bb3ac9 }
	__asm { jmp L_00bb3ac4 }
	__asm { L_00bb3aab: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130f348] }
	__asm { cmp edx, eax }
	__asm { ja L_00bb3abe }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130f348], eax }
	__asm { L_00bb3abe: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb3ac4: }
	__asm { call fn_006b9b20 }
	__asm { L_00bb3ac9: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130f340[];
extern "C" void fn_006b9b20();
extern "C" void fn_00bb42c0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bb3b00
extern "C" __declspec(naked) void asm_00bb3b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00bb42c0 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00bb3b1b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00bb3b39 }
	__asm { jmp L_00bb3b34 }
	__asm { L_00bb3b1b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130f340] }
	__asm { cmp edx, eax }
	__asm { ja L_00bb3b2e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130f340], eax }
	__asm { L_00bb3b2e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb3b34: }
	__asm { call fn_006b9b20 }
	__asm { L_00bb3b39: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10530[];
extern "C" char g_00e105fc[];
extern "C" char g_00e10644[];
extern "C" char g_00e106d4[];
// FUNCTION: ROBLOXSTUDIO 0x00bbaf20
extern "C" __declspec(naked) void asm_00bbaf20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x18 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_00bbaf59 }
	__asm { push 0xee069c }
	__asm { push 0xee0638 }
	__asm { call dword ptr [g_00e106d4] }
	__asm { add eax, 0x40 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10644] }
	__asm { add esp, 0xc }
	__asm { push 0 }
	__asm { call dword ptr [g_00e105fc] }
	__asm { L_00bbaf59: }
	__asm { fld qword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fstp qword ptr [edx] }
	__asm { fld qword ptr [ebp + 0x14] }
	__asm { fstp qword ptr [edx + 8] }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" char g_00e105fc[];
extern "C" char g_00e10644[];
extern "C" char g_00e106d4[];
// FUNCTION: ROBLOXSTUDIO 0x00bbb020
extern "C" __declspec(naked) void asm_00bbb020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x18 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_00bbb059 }
	__asm { push 0xee069c }
	__asm { push 0xee0638 }
	__asm { call dword ptr [g_00e106d4] }
	__asm { add eax, 0x40 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10644] }
	__asm { add esp, 0xc }
	__asm { push 0 }
	__asm { call dword ptr [g_00e105fc] }
	__asm { L_00bbb059: }
	__asm { fld qword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fstp qword ptr [edx] }
	__asm { mov dword ptr [edx + 0x10], 0 }
	__asm { fld qword ptr [ebp + 0x14] }
	__asm { fstp qword ptr [edx + 8] }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [eax + 0x10], edx }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [eax + 0xc], edx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bbba30
extern "C" __declspec(naked) void asm_00bbba30()
{
	__asm { L_00bbba30: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { nop }
	__asm { L_00bbba40: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_00bbba52 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push edi }
	__asm { call L_00bbba30 }
	__asm { add esp, 0xc }
	__asm { L_00bbba52: }
	__asm { mov eax, dword ptr [edi] }
	__asm { fld qword ptr [esi] }
	__asm { fstp qword ptr [ebx + eax*8] }
	__asm { inc dword ptr [edi] }
	__asm { mov esi, dword ptr [esi + 0xc] }
	__asm { test esi, esi }
	__asm { jne L_00bbba40 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
// FUNCTION: ROBLOXSTUDIO 0x00bbbc50
extern "C" __declspec(naked) void asm_00bbbc50()
{
	__asm { L_00bbbc50: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00bbbc8a }
	__asm { add eax, 8 }
	__asm { push eax }
	__asm { call L_00bbbc50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { call L_00bbbc50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00bbbc8a }
	__asm { push eax }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00bbbc8a: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
// FUNCTION: ROBLOXSTUDIO 0x00bbbf90
extern "C" __declspec(naked) void asm_00bbbf90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00bbbfc1 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00bbbfa4: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, dword ptr [eax + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00bbbfb9 }
	__asm { push eax }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00bbbfb9: }
	__asm { mov dword ptr [esi], edi }
	__asm { test edi, edi }
	__asm { jne L_00bbbfa4 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00bbbfc1: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b86090();
extern "C" void fn_00bbe560();
// FUNCTION: ROBLOXSTUDIO 0x00bbe8b0
extern "C" __declspec(naked) void asm_00bbe8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 1 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00b86090 }
	__asm { mov ecx, eax }
	__asm { call fn_00bbe560 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_00bbe8d4 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_00bbe8d4: }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov edx, esi }
	__asm { dec eax }
	__asm { and esi, 1 }
	__asm { shr edx, 1 }
	__asm { and edx, eax }
	__asm { lea eax, [esi + esi*4] }
	__asm { add eax, dword ptr [ecx + edx*4] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a36d10();
// FUNCTION: ROBLOXSTUDIO 0x00bc6400
extern "C" __declspec(naked) void asm_00bc6400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 0x10] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [edi + 0x10] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test eax, eax }
	__asm { jne L_00bc643a }
	__asm { test esi, esi }
	__asm { je L_00bc643a }
	__asm { push 4 }
	__asm { push ebx }
	__asm { call fn_00a36d10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { L_00bc643a: }
	__asm { sub esi, dword ptr [ebp + 0x10] }
	__asm { add dword ptr [edi + 0x44], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6400();
// FUNCTION: ROBLOXSTUDIO 0x00bc65c0
extern "C" __declspec(naked) void asm_00bc65c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp byte ptr [ecx + 6], 0 }
	__asm { movzx eax, byte ptr [ecx + 7] }
	__asm { je L_00bc65e7 }
	__asm { shl eax, 4 }
	__asm { push 0 }
	__asm { add eax, 0x18 }
	__asm { push eax }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc65e7: }
	__asm { push 0 }
	__asm { lea eax, [eax*4 + 0x14] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc7710();
// FUNCTION: ROBLOXSTUDIO 0x00bc77f0
extern "C" __declspec(naked) void asm_00bc77f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [edx + 0x8c] }
	__asm { lea esi, [edx + 0x78] }
	__asm { cmp ecx, esi }
	__asm { je L_00bc782c }
	__asm { L_00bc7804: }
	__asm { test byte ptr [ecx + 5], 7 }
	__asm { jne L_00bc7825 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp dword ptr [eax + 8], 4 }
	__asm { jl L_00bc7825 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test byte ptr [eax + 5], 3 }
	__asm { je L_00bc7825 }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_00bc7710 }
	__asm { add esp, 8 }
	__asm { L_00bc7825: }
	__asm { mov ecx, dword ptr [ecx + 0x14] }
	__asm { cmp ecx, esi }
	__asm { jne L_00bc7804 }
	__asm { L_00bc782c: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc9420();
extern "C" void fn_00bc9d00();
// FUNCTION: ROBLOXSTUDIO 0x00bc87b0
extern "C" __declspec(naked) void asm_00bc87b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [esi + 0x34] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_00bc9420 }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov ebx, eax }
	__asm { push ebx }
	__asm { push dword ptr [ecx + 4] }
	__asm { push edi }
	__asm { call fn_00bc9d00 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jne L_00bc87ed }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { L_00bc87ed: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc8040();
// FUNCTION: ROBLOXSTUDIO 0x00bc8800
extern "C" __declspec(naked) void asm_00bc8800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x20], 0x11f }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { je L_00bc8838 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi + 0x20], 0x11f }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc8838: }
	__asm { lea eax, [esi + 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc8040 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10748[];
extern "C" void fn_00a457e0();
// FUNCTION: ROBLOXSTUDIO 0x00bc8900
extern "C" __declspec(naked) void asm_00bc8900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, 0x101 }
	__asm { jge L_00bc8947 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10748] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { je L_00bc8934 }
	__asm { push 0xee1d80 }
	__asm { push dword ptr [eax + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc8934: }
	__asm { push 0xee1d8c }
	__asm { push dword ptr [eax + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc8947: }
	__asm { mov eax, dword ptr [esi*4 + 0xee18c4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bca160();
// FUNCTION: ROBLOXSTUDIO 0x00bc9c20
extern "C" __declspec(naked) void asm_00bc9c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [edx + 0x14], 0xee1e60 }
	__asm { jne L_00bc9c43 }
	__asm { xor eax, eax }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bca160 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc9c43: }
	__asm { mov cl, byte ptr [edx + 8] }
	__asm { mov eax, 1 }
	__asm { shl eax, cl }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bca160 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bca570
extern "C" __declspec(naked) void asm_00bca570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call eax }
	__asm { mov edx, eax }
	__asm { add esp, 0xc }
	__asm { test edx, edx }
	__asm { je L_00bca5a8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00bca5a8 }
	__asm { dec ecx }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { movzx eax, byte ptr [edx] }
	__asm { lea ecx, [edx + 1] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bca5a8: }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a45b60();
// FUNCTION: ROBLOXSTUDIO 0x00bcc910
extern "C" __declspec(naked) void asm_00bcc910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { cmp ecx, 3 }
	__asm { je L_00bcc951 }
	__asm { cmp ecx, 4 }
	__asm { jne L_00bcc94f }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { call fn_00a45b60 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00bcc94f }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { fld qword ptr [ebp - 8] }
	__asm { fstp qword ptr [eax] }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bcc94f: }
	__asm { xor eax, eax }
	__asm { L_00bcc951: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130f640[];
extern "C" void fn_006b9b20();
extern "C" void fn_00bd0be0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bcff00
extern "C" __declspec(naked) void asm_00bcff00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00bd0be0 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00bcff1b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00bcff39 }
	__asm { jmp L_00bcff34 }
	__asm { L_00bcff1b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130f640] }
	__asm { cmp edx, eax }
	__asm { ja L_00bcff2e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130f640], eax }
	__asm { L_00bcff2e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bcff34: }
	__asm { call fn_006b9b20 }
	__asm { L_00bcff39: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130f648[];
extern "C" void fn_006b9b20();
extern "C" void fn_00bd0c40();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bcff70
extern "C" __declspec(naked) void asm_00bcff70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00bd0c40 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00bcff8b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00bcffa9 }
	__asm { jmp L_00bcffa4 }
	__asm { L_00bcff8b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130f648] }
	__asm { cmp edx, eax }
	__asm { ja L_00bcff9e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130f648], eax }
	__asm { L_00bcff9e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bcffa4: }
	__asm { call fn_006b9b20 }
	__asm { L_00bcffa9: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130f638[];
extern "C" void fn_006b9b20();
extern "C" void fn_00bd0ca0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bcfff0
extern "C" __declspec(naked) void asm_00bcfff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00bd0ca0 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00bd000b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00bd0029 }
	__asm { jmp L_00bd0024 }
	__asm { L_00bd000b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130f638] }
	__asm { cmp edx, eax }
	__asm { ja L_00bd001e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130f638], eax }
	__asm { L_00bd001e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bd0024: }
	__asm { call fn_006b9b20 }
	__asm { L_00bd0029: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_011dcc11[];
extern "C" void fn_0045feb0();
extern "C" void fn_0048b110();
extern "C" void fn_006b9b20();
extern "C" void fn_00bd2b90();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bd1900
extern "C" __declspec(naked) void asm_00bd1900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00bd2b90 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { jne L_00bd193a }
	__asm { movzx eax, byte ptr [g_011dcc11] }
	__asm { test eax, eax }
	__asm { je L_00bd1924 }
	__asm { call fn_006b9b20 }
	__asm { L_00bd1924: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call fn_0045feb0 }
	__asm { push 0x1179f5c }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { call fn_00cf67ec }
	__asm { L_00bd193a: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { push 0x130f760 }
	__asm { push 0x130f75c }
	__asm { call fn_0048b110 }
	__asm { add esp, 0xc }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011dcc11[];
extern "C" void fn_0045feb0();
extern "C" void fn_0048b110();
extern "C" void fn_006b9b20();
extern "C" void fn_00bd2c00();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bd1960
extern "C" __declspec(naked) void asm_00bd1960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00bd2c00 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { jne L_00bd199a }
	__asm { movzx eax, byte ptr [g_011dcc11] }
	__asm { test eax, eax }
	__asm { je L_00bd1984 }
	__asm { call fn_006b9b20 }
	__asm { L_00bd1984: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call fn_0045feb0 }
	__asm { push 0x1179f5c }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { call fn_00cf67ec }
	__asm { L_00bd199a: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { push 0x130f754 }
	__asm { push 0x130f750 }
	__asm { call fn_0048b110 }
	__asm { add esp, 0xc }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011dcc11[];
extern "C" void fn_0045feb0();
extern "C" void fn_0048b110();
extern "C" void fn_006b9b20();
extern "C" void fn_00bd2c70();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bd19c0
extern "C" __declspec(naked) void asm_00bd19c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00bd2c70 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { jne L_00bd19fa }
	__asm { movzx eax, byte ptr [g_011dcc11] }
	__asm { test eax, eax }
	__asm { je L_00bd19e4 }
	__asm { call fn_006b9b20 }
	__asm { L_00bd19e4: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call fn_0045feb0 }
	__asm { push 0x1179f5c }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { call fn_00cf67ec }
	__asm { L_00bd19fa: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { push 0x130f748 }
	__asm { push 0x130f744 }
	__asm { call fn_0048b110 }
	__asm { add esp, 0xc }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bd1810();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bd1cc0
extern "C" __declspec(naked) void asm_00bd1cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { push 0x20 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { je L_00bd1d11 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { call fn_00bd1810 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx], 0xee2920 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { mov dword ptr [edx + 0x18], ecx }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [eax + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], ecx }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { jmp L_00bd1d18 }
	__asm { L_00bd1d11: }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { L_00bd1d18: }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bd1d20
extern "C" __declspec(naked) void asm_00bd1d20()
{
	__asm { push esi }
	__asm { push 0x24 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00bd1d73 }
	__asm { mov dword ptr [edx], 0xee28f0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov dword ptr [edx], 0xee2908 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00bd1d73: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bd4040
extern "C" __declspec(naked) void asm_00bd4040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { test eax, eax }
	__asm { je L_00bd409a }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [ecx + 0xa0] }
	__asm { jb L_00bd409a }
	__asm { cmp dword ptr [g_012de694], 0 }
	__asm { je L_00bd4085 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call dword ptr [g_012de694] }
	__asm { add esp, 0xc }
	__asm { movzx eax, al }
	__asm { test eax, eax }
	__asm { jne L_00bd409a }
	__asm { L_00bd4085: }
	__asm { push 0xeca948 }
	__asm { movzx ecx, byte ptr [g_012de657] }
	__asm { push ecx }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd409a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ecx + eax*4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bd3f20();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bd4170
extern "C" __declspec(naked) void asm_00bd4170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { push 0x28 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { je L_00bd41c1 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { call fn_00bd3f20 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx], 0xee2de8 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [eax + 0x20] }
	__asm { mov dword ptr [edx + 0x20], ecx }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [eax + 0x24] }
	__asm { mov dword ptr [edx + 0x24], ecx }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { jmp L_00bd41c8 }
	__asm { L_00bd41c1: }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { L_00bd41c8: }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a49c60();
extern "C" void fn_00b60650();
extern "C" void fn_00c1acb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bd5fe0
extern "C" __declspec(naked) void asm_00bd5fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [esi], 0xee3264 }
	__asm { test edi, edi }
	__asm { je L_00bd6004 }
	__asm { mov ecx, edi }
	__asm { call fn_00b60650 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bd6004: }
	__asm { mov ecx, esi }
	__asm { call fn_00c1acb0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00bd601a }
	__asm { push esi }
	__asm { call fn_00a49c60 }
	__asm { add esp, 4 }
	__asm { L_00bd601a: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0130f76c[];
extern "C" void fn_006b9b20();
extern "C" void fn_00bd7510();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bd6c20
extern "C" __declspec(naked) void asm_00bd6c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00bd7510 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00bd6c3b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00bd6c59 }
	__asm { jmp L_00bd6c54 }
	__asm { L_00bd6c3b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0130f76c] }
	__asm { cmp edx, eax }
	__asm { ja L_00bd6c4e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0130f76c], eax }
	__asm { L_00bd6c4e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bd6c54: }
	__asm { call fn_006b9b20 }
	__asm { L_00bd6c59: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x00befd40
extern "C" __declspec(naked) void asm_00befd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { fld dword ptr [edx + 8] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { mov eax, ecx }
	__asm { fld dword ptr [edx + 0xc] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [edx + 0x10] }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { fld dword ptr [edx + 0x14] }
	__asm { fstp dword ptr [ecx + 0x14] }
	__asm { fld dword ptr [edx + 0x18] }
	__asm { fstp dword ptr [ecx + 0x18] }
	__asm { fld dword ptr [edx + 0x1c] }
	__asm { fstp dword ptr [ecx + 0x1c] }
	__asm { fld dword ptr [edx + 0x20] }
	__asm { fstp dword ptr [ecx + 0x20] }
	__asm { fld dword ptr [edx + 0x24] }
	__asm { fstp dword ptr [ecx + 0x24] }
	__asm { fld dword ptr [edx + 0x28] }
	__asm { fstp dword ptr [ecx + 0x28] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax + 0x20] }
}

extern "C" void fn_0042ba60();
extern "C" void fn_00ccbae0();
// FUNCTION: ROBLOXSTUDIO 0x00bfd2e0
extern "C" __declspec(naked) void asm_00bfd2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_0042ba60 }
	__asm { mov ecx, eax }
	__asm { call fn_00ccbae0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { je L_00bfd306 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00bfd306: }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { dec eax }
	__asm { mov ecx, edx }
	__asm { shr ecx, 1 }
	__asm { and ecx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { and edx, 1 }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { pop esi }
	__asm { lea eax, [eax + edx*8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c004c0();
// FUNCTION: ROBLOXSTUDIO 0x00c00470
extern "C" __declspec(naked) void asm_00c00470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0x78] }
	__asm { test eax, eax }
	__asm { je L_00c004a0 }
	__asm { mov eax, dword ptr [eax + 0x190] }
	__asm { cmp eax, 1 }
	__asm { je L_00c0048b }
	__asm { cmp eax, 2 }
	__asm { jne L_00c004a0 }
	__asm { L_00c0048b: }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp - 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c004c0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c004a0: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c004c0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c02eb0
extern "C" __declspec(naked) void asm_00c02eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_00c02ef4 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_00c02ec1: }
	__asm { test eax, eax }
	__asm { je L_00c02eed }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [eax + 0x14], ecx }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [eax + 0x18], ecx }
	__asm { L_00c02eed: }
	__asm { add eax, 0x1c }
	__asm { dec edx }
	__asm { jne L_00c02ec1 }
	__asm { pop esi }
	__asm { L_00c02ef4: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130fe3f[];
extern "C" void fn_00407e90();
extern "C" void fn_00b6b000();
// FUNCTION: ROBLOXSTUDIO 0x00c04170
extern "C" __declspec(naked) void asm_00c04170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_0130fe3f], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { jne L_00c041b1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp - 4], 0x130ee40 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp - 4], 0xc04750 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130fe3f], 1 }
	__asm { L_00c041b1: }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b6b000 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00c05940
extern "C" __declspec(naked) void asm_00c05940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ecx + 0x40], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { je L_00c0597d }
	__asm { push 0xf }
	__asm { push 0xee8d60 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c0597d: }
	__asm { push 0xb }
	__asm { push 0xee8d70 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00891b30();
extern "C" void fn_00894100();
extern "C" void fn_009335b0();
// FUNCTION: ROBLOXSTUDIO 0x00c05ee0
extern "C" __declspec(naked) void asm_00c05ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00891b30 }
	__asm { add eax, 0x48 }
	__asm { cmp byte ptr [eax], 0 }
	__asm { jne L_00c05f17 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00894100 }
	__asm { test al, al }
	__asm { jne L_00c05f17 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { call fn_009335b0 }
	__asm { test al, al }
	__asm { je L_00c05f17 }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c05f17: }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00bb13c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c10260
extern "C" __declspec(naked) void asm_00c10260()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov esi, ebx }
	__asm { cmp byte ptr [ebx + 0xd], 0 }
	__asm { jne L_00c1028f }
	__asm { L_00c10272: }
	__asm { push dword ptr [esi + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_00bb13c0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov ebx, esi }
	__asm { je L_00c10272 }
	__asm { L_00c1028f: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00c11d90
extern "C" __declspec(naked) void asm_00c11d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00c11ddb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { je L_00c11ddb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c11dca }
	__asm { push 0x24 }
	__asm { push 0xeeb3f8 }
	__asm { push 0xed98ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c11ddb }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c11dca: }
	__asm { movzx eax, cl }
	__asm { push 0xeeb438 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c11ddb: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b5b980();
extern "C" void fn_00b8c360();
extern "C" void fn_00ba6640();
extern "C" void fn_00c12920();
// FUNCTION: ROBLOXSTUDIO 0x00c12890
extern "C" __declspec(naked) void asm_00c12890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c360 }
	__asm { mov ecx, esi }
	__asm { call fn_00b5b980 }
	__asm { cmp dword ptr [eax + 0x10c], 0 }
	__asm { push esi }
	__asm { jne L_00c128c1 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { call fn_00ba6640 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c128c1: }
	__asm { mov ecx, edi }
	__asm { call fn_00c12920 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c620();
extern "C" void fn_00ba14e0();
extern "C" void fn_00ba6950();
extern "C" void fn_00c12790();
// FUNCTION: ROBLOXSTUDIO 0x00c128d0
extern "C" __declspec(naked) void asm_00c128d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ba14e0 }
	__asm { push edi }
	__asm { test al, al }
	__asm { je L_00c128fc }
	__asm { mov ecx, esi }
	__asm { call fn_00c12790 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00b8c620 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c128fc: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { call fn_00ba6950 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00b8c620 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c17ea0
extern "C" __declspec(naked) void asm_00c17ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { lea esi, [eax + ecx*4] }
	__asm { cmp ecx, 1 }
	__asm { jl L_00c17ecc }
	__asm { mov eax, dword ptr [esi - 4] }
	__asm { lea edx, [esi - 4] }
	__asm { and eax, 0x3f }
	__asm { test byte ptr [eax + 0xee2218], 0x80 }
	__asm { jne L_00c17ece }
	__asm { L_00c17ecc: }
	__asm { mov edx, esi }
	__asm { L_00c17ece: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, eax }
	__asm { and ecx, 0x3fc0 }
	__asm { neg ecx }
	__asm { sbb ecx, ecx }
	__asm { inc ecx }
	__asm { shl ecx, 6 }
	__asm { xor ecx, eax }
	__asm { and ecx, 0x3fc0 }
	__asm { xor ecx, eax }
	__asm { mov dword ptr [edx], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c18130();
extern "C" void fn_00c19000();
// FUNCTION: ROBLOXSTUDIO 0x00c18820
extern "C" __declspec(naked) void asm_00c18820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ecx + 0x18] }
	__asm { cmp eax, edx }
	__asm { jne L_00c18845 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ecx + 0x20] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [ecx + 0x1c], edx }
	__asm { call fn_00c18130 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c18845: }
	__asm { push eax }
	__asm { push 0xff }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { call fn_00c19000 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc88e0();
// FUNCTION: ROBLOXSTUDIO 0x00c18b80
extern "C" __declspec(naked) void asm_00c18b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ebx, dword ptr [esi + 0x24] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { movzx eax, byte ptr [eax + 0x4b] }
	__asm { add ebx, edi }
	__asm { cmp ebx, eax }
	__asm { jle L_00c18bb8 }
	__asm { cmp ebx, 0xfa }
	__asm { jl L_00c18bb3 }
	__asm { push 0xeecf1c }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 8 }
	__asm { L_00c18bb3: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [eax + 0x4b], bl }
	__asm { L_00c18bb8: }
	__asm { add dword ptr [esi + 0x24], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c18d70
extern "C" __declspec(naked) void asm_00c18d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edx] }
	__asm { cmp eax, 0xd }
	__asm { jne L_00c18d9e }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [edx], 0xc }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { shr eax, 6 }
	__asm { and eax, 0xff }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c18d9e: }
	__asm { cmp eax, 0xe }
	__asm { jne L_00c18dc5 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { and eax, 0x7fffff }
	__asm { or eax, 0x1000000 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [edx], 0xb }
	__asm { L_00c18dc5: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00914100();
extern "C" void fn_00c19720();
extern "C" void fn_00c19880();
extern "C" void fn_00c19b40();
// FUNCTION: ROBLOXSTUDIO 0x00c19a20
extern "C" __declspec(naked) void asm_00c19a20()
{
	__asm { fldz }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { fstp dword ptr [esp] }
	__asm { mov eax, dword ptr [eax + 0x24] }
	__asm { call eax }
	__asm { mov ecx, esi }
	__asm { test al, al }
	__asm { je L_00c19a51 }
	__asm { call fn_00914100 }
	__asm { test al, al }
	__asm { je L_00c19a4d }
	__asm { mov ecx, esi }
	__asm { call fn_00c19b40 }
	__asm { mov ecx, esi }
	__asm { call fn_00c19720 }
	__asm { L_00c19a4d: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00c19a51: }
	__asm { call fn_00c19880 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c24760
extern "C" __declspec(naked) void asm_00c24760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c2478d }
	__asm { mov dword ptr [eax], 0xeef830 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c2478f }
	__asm { L_00c2478d: }
	__asm { xor eax, eax }
	__asm { L_00c2478f: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c247b0
extern "C" __declspec(naked) void asm_00c247b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c247eb }
	__asm { mov dword ptr [edx], 0xeef844 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00c247ed }
	__asm { L_00c247eb: }
	__asm { xor edx, edx }
	__asm { L_00c247ed: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c24810
extern "C" __declspec(naked) void asm_00c24810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c2483d }
	__asm { mov dword ptr [eax], 0xeef858 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c2483f }
	__asm { L_00c2483d: }
	__asm { xor eax, eax }
	__asm { L_00c2483f: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c24860
extern "C" __declspec(naked) void asm_00c24860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c2488d }
	__asm { mov dword ptr [eax], 0xeef880 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c2488f }
	__asm { L_00c2488d: }
	__asm { xor eax, eax }
	__asm { L_00c2488f: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c248b0
extern "C" __declspec(naked) void asm_00c248b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c248eb }
	__asm { mov dword ptr [edx], 0xeef86c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00c248ed }
	__asm { L_00c248eb: }
	__asm { xor edx, edx }
	__asm { L_00c248ed: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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

extern "C" void fn_00c2ce90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c286f0
extern "C" __declspec(naked) void asm_00c286f0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { call fn_00c2ce90 }
	__asm { push dword ptr [edi + 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [edi + 0x38], 0x10 }
	__asm { jb L_00c28718 }
	__asm { push dword ptr [edi + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c28718: }
	__asm { mov dword ptr [edi + 0x38], 0xf }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov byte ptr [edi + 0x24], 0 }
	__asm { cmp dword ptr [edi + 0x18], 0x10 }
	__asm { jb L_00c2873b }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c2873b: }
	__asm { mov dword ptr [edi + 0x18], 0xf }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov byte ptr [edi + 4], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c2b430
extern "C" __declspec(naked) void asm_00c2b430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x38], 0x10 }
	__asm { jb L_00c2b448 }
	__asm { push dword ptr [esi + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c2b448: }
	__asm { mov dword ptr [esi + 0x38], 0xf }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov byte ptr [esi + 0x24], 0 }
	__asm { cmp dword ptr [esi + 0x20], 0x10 }
	__asm { jb L_00c2b46b }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c2b46b: }
	__asm { mov dword ptr [esi + 0x20], 0xf }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 0xc], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005451a0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00c2be90
extern "C" __declspec(naked) void asm_00c2be90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00c2bec5 }
	__asm { add edi, 0x1c }
	__asm { je L_00c2bec5 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_005451a0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c2bec5 }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c2bec5: }
	__asm { xor edi, edi }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c2bfa0
extern "C" __declspec(naked) void asm_00c2bfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ecx + 0xb8], 0 }
	__asm { je L_00c2bfd6 }
	__asm { mov edx, dword ptr [ecx + 0xb4] }
	__asm { mov eax, dword ptr [ecx + 0xc4] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { test eax, eax }
	__asm { je L_00c2bfd6 }
	__asm { add eax, -0x18 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 4] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c2bfd6: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_006b98c0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c31130
extern "C" __declspec(naked) void asm_00c31130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { cmp dword ptr [ecx + 0x78], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00c31166 }
	__asm { cmp dword ptr [ecx + 0x7c], 0x10 }
	__asm { lea eax, [ecx + 0x68] }
	__asm { jb L_00c3114e }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00c3114e: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006b98c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c31166: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp + 8], 0xeef254 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" void fn_006b98c0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c31190
extern "C" __declspec(naked) void asm_00c31190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { cmp dword ptr [ecx + 0xa8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00c311cf }
	__asm { cmp dword ptr [ecx + 0xac], 0x10 }
	__asm { lea eax, [ecx + 0x98] }
	__asm { jb L_00c311b7 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00c311b7: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006b98c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c311cf: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp + 8], 0xeef268 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_004030b0();
extern "C" void fn_009fe3b0();
// FUNCTION: ROBLOXSTUDIO 0x00c31200
extern "C" __declspec(naked) void asm_00c31200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movzx eax, byte ptr [ecx + 0xb0] }
	__asm { push esi }
	__asm { lea esi, [ecx + 0xb0] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_00c31219 }
	__asm { inc eax }
	__asm { jmp L_00c3121b }
	__asm { L_00c31219: }
	__asm { xor eax, eax }
	__asm { L_00c3121b: }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_009fe3b0 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { pop esi }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_013110e4[];
extern "C" void fn_0049a3f0();
// FUNCTION: ROBLOXSTUDIO 0x00c33850
extern "C" __declspec(naked) void asm_00c33850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 0x178] }
	__asm { cmp dword ptr [ebp + 8], edx }
	__asm { jne L_00c338a0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax], 0x13110bc }
	__asm { jne L_00c338a0 }
	__asm { test edx, edx }
	__asm { je L_00c33892 }
	__asm { mov ecx, dword ptr [g_013110e4] }
	__asm { add edx, 0x1c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { lea ecx, [esi + 0x1a8] }
	__asm { push eax }
	__asm { call fn_0049a3f0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c33892: }
	__asm { xor al, al }
	__asm { lea ecx, [esi + 0x1a8] }
	__asm { push eax }
	__asm { call fn_0049a3f0 }
	__asm { L_00c338a0: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c35af0
extern "C" __declspec(naked) void asm_00c35af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00c35b04 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c35b04: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_00c35b27 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c35b27: }
	__asm { cmp dword ptr [ebp + 0x50], 0x10 }
	__asm { mov dword ptr [ebp + 0x38], 0xf }
	__asm { mov dword ptr [ebp + 0x34], 0 }
	__asm { mov byte ptr [ebp + 0x24], 0 }
	__asm { jb L_00c35b4a }
	__asm { push dword ptr [ebp + 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c35b4a: }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" void fn_0047a9a0();
extern "C" void fn_00c36e60();
// FUNCTION: ROBLOXSTUDIO 0x00c36f40
extern "C" __declspec(naked) void asm_00c36f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00c36e60 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { je L_00c36f83 }
	__asm { mov ecx, 1 }
	__asm { test ecx, ecx }
	__asm { je L_00c36f83 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { push eax }
	__asm { call fn_0047a9a0 }
	__asm { add esp, 4 }
	__asm { L_00c36f83: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c3e4d0
extern "C" __declspec(naked) void asm_00c3e4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c3e50b }
	__asm { mov dword ptr [edx], 0xef238c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00c3e50d }
	__asm { L_00c3e50b: }
	__asm { xor edx, edx }
	__asm { L_00c3e50d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c3e530
extern "C" __declspec(naked) void asm_00c3e530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c3e56b }
	__asm { mov dword ptr [edx], 0xef2418 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00c3e56d }
	__asm { L_00c3e56b: }
	__asm { xor edx, edx }
	__asm { L_00c3e56d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c3e590
extern "C" __declspec(naked) void asm_00c3e590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c3e5cb }
	__asm { mov dword ptr [edx], 0xef23c8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00c3e5cd }
	__asm { L_00c3e5cb: }
	__asm { xor edx, edx }
	__asm { L_00c3e5cd: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c3e5f0
extern "C" __declspec(naked) void asm_00c3e5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c3e62b }
	__asm { mov dword ptr [edx], 0xef2404 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00c3e62d }
	__asm { L_00c3e62b: }
	__asm { xor edx, edx }
	__asm { L_00c3e62d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c3e650
extern "C" __declspec(naked) void asm_00c3e650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c3e67d }
	__asm { mov dword ptr [eax], 0xef23b4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c3e67f }
	__asm { L_00c3e67d: }
	__asm { xor eax, eax }
	__asm { L_00c3e67f: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c3e6a0
extern "C" __declspec(naked) void asm_00c3e6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c3e6cd }
	__asm { mov dword ptr [eax], 0xef23dc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c3e6cf }
	__asm { L_00c3e6cd: }
	__asm { xor eax, eax }
	__asm { L_00c3e6cf: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c3e6f0
extern "C" __declspec(naked) void asm_00c3e6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c3e72b }
	__asm { mov dword ptr [edx], 0xef23f0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00c3e72d }
	__asm { L_00c3e72b: }
	__asm { xor edx, edx }
	__asm { L_00c3e72d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c3e750
extern "C" __declspec(naked) void asm_00c3e750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c3e77d }
	__asm { mov dword ptr [eax], 0xef2350 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c3e77f }
	__asm { L_00c3e77d: }
	__asm { xor eax, eax }
	__asm { L_00c3e77f: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c3e7a0
extern "C" __declspec(naked) void asm_00c3e7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c3e7db }
	__asm { mov dword ptr [edx], 0xef233c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00c3e7dd }
	__asm { L_00c3e7db: }
	__asm { xor edx, edx }
	__asm { L_00c3e7dd: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c3e800
extern "C" __declspec(naked) void asm_00c3e800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c3e83b }
	__asm { mov dword ptr [edx], 0xef23a0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00c3e83d }
	__asm { L_00c3e83b: }
	__asm { xor edx, edx }
	__asm { L_00c3e83d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c3e860
extern "C" __declspec(naked) void asm_00c3e860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c3e89b }
	__asm { mov dword ptr [edx], 0xef2378 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00c3e89d }
	__asm { L_00c3e89b: }
	__asm { xor edx, edx }
	__asm { L_00c3e89d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c3e8c0
extern "C" __declspec(naked) void asm_00c3e8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c3e8ed }
	__asm { mov dword ptr [eax], 0xef2364 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c3e8ef }
	__asm { L_00c3e8ed: }
	__asm { xor eax, eax }
	__asm { L_00c3e8ef: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c3e910
extern "C" __declspec(naked) void asm_00c3e910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c3e94b }
	__asm { mov dword ptr [edx], 0xef2328 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00c3e94d }
	__asm { L_00c3e94b: }
	__asm { xor edx, edx }
	__asm { L_00c3e94d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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

extern "C" void fn_0078a830();
// FUNCTION: ROBLOXSTUDIO 0x00c48ad0
extern "C" __declspec(naked) void asm_00c48ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0078a830 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { test ecx, ecx }
	__asm { je L_00c48b04 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { add ecx, -0x1c }
	__asm { add ecx, dword ptr [esi + 0x2c] }
	__asm { call edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c48b04: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { xor ecx, ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { call edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10528[];
extern "C" void fn_007c4b50();
extern "C" void fn_00c2bee0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c4f6e0
extern "C" __declspec(naked) void asm_00c4f6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00c4f714 }
	__asm { mov ecx, dword ptr [esi + 0x64] }
	__asm { pop esi }
	__asm { test ecx, ecx }
	__asm { je L_00c4f710 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xc50f00 }
	__asm { call fn_007c4b50 }
	__asm { L_00c4f710: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c4f714: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xef1548 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" void fn_007b5bb0();
extern "C" void fn_0097efd0();
extern "C" void fn_0097f090();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c519b0
extern "C" __declspec(naked) void asm_00c519b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_0097efd0 }
	__asm { push 4 }
	__asm { push dword ptr [eax] }
	__asm { call fn_0097f090 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00c519df }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_007b5bb0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c519df: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 8], 0xf12f2d }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006b98f0();
extern "C" void fn_007cd560();
extern "C" void fn_0082a980();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c522a0
extern "C" __declspec(naked) void asm_00c522a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00c522ca }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_0082a980 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c522d1 }
	__asm { mov eax, edi }
	__asm { test eax, eax }
	__asm { je L_00c522d1 }
	__asm { L_00c522ca: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c522d1: }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xef1e68 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c563a0
extern "C" __declspec(naked) void asm_00c563a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c563db }
	__asm { mov dword ptr [edx], 0xef31b4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00c563dd }
	__asm { L_00c563db: }
	__asm { xor edx, edx }
	__asm { L_00c563dd: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c56400
extern "C" __declspec(naked) void asm_00c56400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c5643b }
	__asm { mov dword ptr [edx], 0xef31a0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00c5643d }
	__asm { L_00c5643b: }
	__asm { xor edx, edx }
	__asm { L_00c5643d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c56460
extern "C" __declspec(naked) void asm_00c56460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c5649b }
	__asm { mov dword ptr [edx], 0xef318c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00c5649d }
	__asm { L_00c5649b: }
	__asm { xor edx, edx }
	__asm { L_00c5649d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c564c0
extern "C" __declspec(naked) void asm_00c564c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c564fb }
	__asm { mov dword ptr [edx], 0xef3178 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00c564fd }
	__asm { L_00c564fb: }
	__asm { xor edx, edx }
	__asm { L_00c564fd: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c56520
extern "C" __declspec(naked) void asm_00c56520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c5655b }
	__asm { mov dword ptr [edx], 0xef31c8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00c5655d }
	__asm { L_00c5655b: }
	__asm { xor edx, edx }
	__asm { L_00c5655d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c56580
extern "C" __declspec(naked) void asm_00c56580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c565ad }
	__asm { mov dword ptr [eax], 0xef31dc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c565af }
	__asm { L_00c565ad: }
	__asm { xor eax, eax }
	__asm { L_00c565af: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c565d0
extern "C" __declspec(naked) void asm_00c565d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c5660b }
	__asm { mov dword ptr [edx], 0xef3150 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00c5660d }
	__asm { L_00c5660b: }
	__asm { xor edx, edx }
	__asm { L_00c5660d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c56630
extern "C" __declspec(naked) void asm_00c56630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c5666b }
	__asm { mov dword ptr [edx], 0xef3164 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00c5666d }
	__asm { L_00c5666b: }
	__asm { xor edx, edx }
	__asm { L_00c5666d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c56690
extern "C" __declspec(naked) void asm_00c56690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c566cb }
	__asm { mov dword ptr [edx], 0xef31f0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00c566cd }
	__asm { L_00c566cb: }
	__asm { xor edx, edx }
	__asm { L_00c566cd: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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

extern "C" char g_0131c458[];
extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c57020
extern "C" __declspec(naked) void asm_00c57020()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0xb8], 0x10 }
	__asm { jb L_00c5703a }
	__asm { push dword ptr [esi + 0xa4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c5703a: }
	__asm { mov dword ptr [esi + 0xb8], 0xf }
	__asm { mov dword ptr [esi + 0xb4], 0 }
	__asm { mov byte ptr [esi + 0xa4], 0 }
	__asm { cmp dword ptr [esi + 0x9c], 0x10 }
	__asm { jb L_00c5706c }
	__asm { push dword ptr [esi + 0x88] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c5706c: }
	__asm { mov dword ptr [esi + 0x9c], 0xf }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { mov byte ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [g_0131c458], 0 }
	__asm { mov dword ptr [esi], 0xef2794 }
	__asm { mov dword ptr [esi + 4], 0xef280c }
	__asm { mov dword ptr [esi + 0x18], 0xef2814 }
	__asm { mov dword ptr [esi + 0x1c], 0xef2820 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_007b00e0 }
}

extern "C" void fn_00c5ace0();
// FUNCTION: ROBLOXSTUDIO 0x00c59800
extern "C" __declspec(naked) void asm_00c59800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00c5ace0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00c59852 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov byte ptr [ecx + 4], 0 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { fld dword ptr [edx + 0x10] }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov dword ptr [edx + 0x18], 0 }
	__asm { mov dword ptr [edx + 0xc], 0 }
	__asm { mov dword ptr [edx + 0x14], 0 }
	__asm { L_00c59852: }
	__asm { mov byte ptr [esi + 9], 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10138[];
// FUNCTION: ROBLOXSTUDIO 0x00c5c6f0
extern "C" __declspec(naked) void asm_00c5c6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, 0x7f000000 }
	__asm { je L_00c5c710 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push dword ptr [esi + 8] }
	__asm { call dword ptr [g_00e10138] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_00c5c710: }
	__asm { mov ecx, eax }
	__asm { shr ecx, 0xb }
	__asm { and ecx, 0x7ff }
	__asm { jne L_00c5c724 }
	__asm { test eax, 0x7f000000 }
	__asm { je L_00c5c73d }
	__asm { L_00c5c724: }
	__asm { and eax, 0x7f000000 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { push 0 }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { call dword ptr [g_00e10138] }
	__asm { L_00c5c73d: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00c5af00();
// FUNCTION: ROBLOXSTUDIO 0x00c5c8b0
extern "C" __declspec(naked) void asm_00c5c8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00c5c8fa }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00c5c8fa }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00c5c8e9 }
	__asm { push 0x46 }
	__asm { push 0xef37a0 }
	__asm { push 0xef3850 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c5c8fa }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c5c8e9: }
	__asm { movzx eax, al }
	__asm { push 0xef3978 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c5c8fa: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x68] }
	__asm { call fn_00c5af00 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c61480
extern "C" __declspec(naked) void asm_00c61480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x34], 0x10 }
	__asm { jb L_00c61497 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c61497: }
	__asm { mov dword ptr [esi + 0x34], 0xf }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov byte ptr [esi + 0x20], 0 }
	__asm { cmp dword ptr [esi + 0x1c], 0x10 }
	__asm { jb L_00c614ba }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c614ba: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x1c], 0xf }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { je L_00c614db }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c614db: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b7f950();
// FUNCTION: ROBLOXSTUDIO 0x00c67430
extern "C" __declspec(naked) void asm_00c67430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b7f950 }
	__asm { mov esi, eax }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test edi, edi }
	__asm { je L_00c6747c }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { fld dword ptr [edx + 8] }
	__asm { fstp dword ptr [edi + 8] }
	__asm { fld dword ptr [edx + 0xc] }
	__asm { fstp dword ptr [edi + 0xc] }
	__asm { fld dword ptr [edx + 0x10] }
	__asm { fstp dword ptr [edi + 0x10] }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov al, byte ptr [edx + 0x1c] }
	__asm { mov byte ptr [edi + 0x1c], al }
	__asm { mov eax, esi }
	__asm { L_00c6747c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c68800
extern "C" __declspec(naked) void asm_00c68800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { xor eax, eax }
	__asm { mov edx, ecx }
	__asm { mov word ptr [edx + 0x24], ax }
	__asm { mov ax, word ptr [ebp + 8] }
	__asm { mov word ptr [edx], ax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00c6882f }
	__asm { push esi }
	__asm { lea esi, [edx + 2] }
	__asm { sub esi, eax }
	__asm { nop }
	__asm { L_00c68820: }
	__asm { mov cl, byte ptr [eax] }
	__asm { mov byte ptr [esi + eax], cl }
	__asm { lea eax, [eax + 1] }
	__asm { test cl, cl }
	__asm { jne L_00c68820 }
	__asm { pop esi }
	__asm { jmp L_00c68833 }
	__asm { L_00c6882f: }
	__asm { mov byte ptr [edx + 2], 0 }
	__asm { L_00c68833: }
	__asm { mov eax, 2 }
	__asm { mov word ptr [edx + 0x22], ax }
	__asm { mov dword ptr [edx + 0x28], 0 }
	__asm { mov eax, edx }
	__asm { pop ebp }
	__asm { ret 8 }
}
