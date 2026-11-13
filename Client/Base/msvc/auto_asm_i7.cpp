// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00989a60
extern "C" __declspec(naked) void asm_00989a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00989a8d }
	__asm { mov dword ptr [eax], 0xe8dfcc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00989a8f }
	__asm { L_00989a8d: }
	__asm { xor eax, eax }
	__asm { L_00989a8f: }
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
// FUNCTION: ROBLOXSTUDIO 0x00989ab0
extern "C" __declspec(naked) void asm_00989ab0()
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
	__asm { je L_00989aeb }
	__asm { mov dword ptr [edx], 0xe8dfb8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00989aed }
	__asm { L_00989aeb: }
	__asm { xor edx, edx }
	__asm { L_00989aed: }
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
// FUNCTION: ROBLOXSTUDIO 0x00989b10
extern "C" __declspec(naked) void asm_00989b10()
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
	__asm { je L_00989b4b }
	__asm { mov dword ptr [edx], 0xe8df68 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00989b4d }
	__asm { L_00989b4b: }
	__asm { xor edx, edx }
	__asm { L_00989b4d: }
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

extern "C" char g_01301e8b[];
extern "C" void fn_006b8a90();
extern "C" void fn_007b4f50();
extern "C" void fn_00994190();
// FUNCTION: ROBLOXSTUDIO 0x00992ee0
extern "C" __declspec(naked) void asm_00992ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_01301e8b] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00992f01 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe8cdf8 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00992f01: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [esi + 0x9c] }
	__asm { je L_00992f27 }
	__asm { push 0x1301f5c }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x9c], eax }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { call fn_00994190 }
	__asm { L_00992f27: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00997d30
extern "C" __declspec(naked) void asm_00997d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00997d56 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { mov ecx, eax }
	__asm { xor eax, eax }
	__asm { cmp ecx, 0xc }
	__asm { sete al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00997d56: }
	__asm { mov ecx, 0xd }
	__asm { xor eax, eax }
	__asm { cmp ecx, 0xc }
	__asm { sete al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_013031bc[];
extern "C" void fn_006b9b20();
extern "C" void fn_0099daf0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0099be50
extern "C" __declspec(naked) void asm_0099be50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_0099daf0 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_0099be6b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_0099be89 }
	__asm { jmp L_0099be84 }
	__asm { L_0099be6b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_013031bc] }
	__asm { cmp edx, eax }
	__asm { ja L_0099be7e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_013031bc], eax }
	__asm { L_0099be7e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0099be84: }
	__asm { call fn_006b9b20 }
	__asm { L_0099be89: }
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
// FUNCTION: ROBLOXSTUDIO 0x0099e840
extern "C" __declspec(naked) void asm_0099e840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ecx + 0x88] }
	__asm { je L_0099e8ac }
	__asm { cmp dword ptr [ecx + 0xe0], 0 }
	__asm { jne L_0099e86b }
	__asm { mov dword ptr [ecx + 0x88], eax }
	__asm { mov dword ptr [ecx + 0x8c], 0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0099e86b: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0099e8ac }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0099e89b }
	__asm { push 0x8a }
	__asm { push 0xe90eb4 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099e8ac }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0099e89b: }
	__asm { movzx eax, al }
	__asm { push 0xe91078 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099e8ac: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0099fa00
extern "C" __declspec(naked) void asm_0099fa00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { test eax, eax }
	__asm { je L_0099fa16 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0099fa16: }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { pop esi }
	__asm { je L_0099fa40 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0099fa40: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_013032e0[];
extern "C" void fn_008a5230();
extern "C" void fn_008a55f0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x009a14b0
extern "C" __declspec(naked) void asm_009a14b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_013032e0], 0 }
	__asm { je L_009a14f8 }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0x11f9cf4 }
	__asm { push 0x12bdbf4 }
	__asm { lea edi, [ecx - 0x6c] }
	__asm { push 0 }
	__asm { push dword ptr [edi + 0x38] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_009a14ed }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0x38] }
	__asm { mov ecx, edi }
	__asm { call fn_008a5230 }
	__asm { cmp eax, esi }
	__asm { pop esi }
	__asm { jne L_009a14f7 }
	__asm { L_009a14ed: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_008a55f0 }
	__asm { L_009a14f7: }
	__asm { pop edi }
	__asm { L_009a14f8: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038074[];
extern "C" char g_012e357e[];
extern "C" void fn_006c6e70();
extern "C" void fn_009a02f0();
// FUNCTION: ROBLOXSTUDIO 0x009a1500
extern "C" __declspec(naked) void asm_009a1500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x68 }
	__asm { cmp byte ptr [g_012e357e], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_009a1520 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { lea ecx, [esi + 0x2c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_009a1548 }
	__asm { L_009a1520: }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { lea ecx, [esi - 0x6c] }
	__asm { call fn_009a02f0 }
	__asm { fld dword ptr [g_01038074] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x68] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_006c6e70 }
	__asm { add esp, 0x10 }
	__asm { L_009a1548: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10528[];
extern "C" void fn_007b5bb0();
extern "C" void fn_0097efd0();
extern "C" void fn_0097f090();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009a1bf0
extern "C" __declspec(naked) void asm_009a1bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x9c], 0 }
	__asm { je L_009a1c17 }
	__asm { call fn_0097efd0 }
	__asm { push 4 }
	__asm { push dword ptr [eax] }
	__asm { call fn_0097f090 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_009a1c28 }
	__asm { L_009a1c17: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_007b5bb0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009a1c28: }
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

extern "C" char g_013032e0[];
extern "C" void fn_008a5230();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x009a2000
extern "C" __declspec(naked) void asm_009a2000()
{
	__asm { cmp byte ptr [g_013032e0], 0 }
	__asm { push edi }
	__asm { je L_009a203e }
	__asm { push 0 }
	__asm { push 0x11f9cf4 }
	__asm { push 0x12bdbf4 }
	__asm { lea edi, [ecx - 0x6c] }
	__asm { push 0 }
	__asm { push dword ptr [edi + 0x38] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_009a203a }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0x38] }
	__asm { mov ecx, edi }
	__asm { call fn_008a5230 }
	__asm { cmp eax, esi }
	__asm { pop esi }
	__asm { jne L_009a203e }
	__asm { L_009a203a: }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { ret }
	__asm { L_009a203e: }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009a27f0
extern "C" __declspec(naked) void asm_009a27f0()
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
	__asm { je L_009a282b }
	__asm { mov dword ptr [edx], 0xe92804 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009a282d }
	__asm { L_009a282b: }
	__asm { xor edx, edx }
	__asm { L_009a282d: }
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

extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009a2b30
extern "C" __declspec(naked) void asm_009a2b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x78], 0x10 }
	__asm { jb L_009a2b47 }
	__asm { push dword ptr [esi + 0x64] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a2b47: }
	__asm { mov dword ptr [esi + 0x78], 0xf }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov byte ptr [esi + 0x64], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0xe92644 }
	__asm { mov dword ptr [esi + 4], 0xe926bc }
	__asm { mov dword ptr [esi + 0x18], 0xe926c4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe926d0 }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_009a2b8a }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a2b8a: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009a33e0
extern "C" __declspec(naked) void asm_009a33e0()
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
	__asm { je L_009a341b }
	__asm { mov dword ptr [edx], 0xe92a38 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009a341d }
	__asm { L_009a341b: }
	__asm { xor edx, edx }
	__asm { L_009a341d: }
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
// FUNCTION: ROBLOXSTUDIO 0x009a3440
extern "C" __declspec(naked) void asm_009a3440()
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
	__asm { je L_009a347b }
	__asm { mov dword ptr [edx], 0xe92a4c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009a347d }
	__asm { L_009a347b: }
	__asm { xor edx, edx }
	__asm { L_009a347d: }
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
// FUNCTION: ROBLOXSTUDIO 0x009a3c00
extern "C" __declspec(naked) void asm_009a3c00()
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
	__asm { je L_009a3c3b }
	__asm { mov dword ptr [edx], 0xe92b9c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009a3c3d }
	__asm { L_009a3c3b: }
	__asm { xor edx, edx }
	__asm { L_009a3c3d: }
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

extern "C" void fn_00426850();
// FUNCTION: ROBLOXSTUDIO 0x009b5380
extern "C" __declspec(naked) void asm_009b5380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 4 }
	__asm { push 0 }
	__asm { push 0xe93e10 }
	__asm { call fn_00426850 }
	__asm { test eax, eax }
	__asm { je L_009b53a5 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x20 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b53a5: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 8 }
	__asm { push 0 }
	__asm { push 0xe93e18 }
	__asm { call fn_00426850 }
	__asm { test eax, eax }
	__asm { je L_009b53c7 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 8 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b53c7: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4790();
extern "C" void fn_008523c0();
extern "C" void fn_009b6150();
extern "C" void fn_009b75d0();
// FUNCTION: ROBLOXSTUDIO 0x009b6620
extern "C" __declspec(naked) void asm_009b6620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_007b4790 }
	__asm { push esi }
	__asm { call fn_008523c0 }
	__asm { mov edi, eax }
	__asm { mov eax, dword ptr [esi + 0x70] }
	__asm { add esp, 4 }
	__asm { cmp edi, eax }
	__asm { je L_009b665a }
	__asm { test eax, eax }
	__asm { je L_009b664c }
	__asm { mov ecx, esi }
	__asm { call fn_009b6150 }
	__asm { L_009b664c: }
	__asm { mov dword ptr [esi + 0x70], edi }
	__asm { test edi, edi }
	__asm { je L_009b665a }
	__asm { mov ecx, esi }
	__asm { call fn_009b75d0 }
	__asm { L_009b665a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009bde10
extern "C" __declspec(naked) void asm_009bde10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_009bde49 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi] }
	__asm { L_009bde25: }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { cmp ecx, esi }
	__asm { jl L_009bde3e }
	__asm { cmp esi, ecx }
	__asm { jl L_009bde38 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { cmp ecx, dword ptr [edi + 4] }
	__asm { jl L_009bde3e }
	__asm { L_009bde38: }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp L_009bde41 }
	__asm { L_009bde3e: }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { L_009bde41: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_009bde25 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_009bde49: }
	__asm { mov eax, edx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009bd260();
extern "C" void fn_009c1320();
// FUNCTION: ROBLOXSTUDIO 0x009bf010
extern "C" __declspec(naked) void asm_009bf010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, esi }
	__asm { call fn_009bd260 }
	__asm { test esi, esi }
	__asm { je L_009bf036 }
	__asm { lea eax, [esi + 0x1c] }
	__asm { jmp L_009bf038 }
	__asm { L_009bf036: }
	__asm { xor eax, eax }
	__asm { L_009bf038: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_009c1320 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009c4dd0
extern "C" __declspec(naked) void asm_009c4dd0()
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
	__asm { je L_009c4e0b }
	__asm { mov dword ptr [edx], 0xe95484 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009c4e0d }
	__asm { L_009c4e0b: }
	__asm { xor edx, edx }
	__asm { L_009c4e0d: }
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
// FUNCTION: ROBLOXSTUDIO 0x009c4e30
extern "C" __declspec(naked) void asm_009c4e30()
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
	__asm { je L_009c4e6b }
	__asm { mov dword ptr [edx], 0xe95498 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009c4e6d }
	__asm { L_009c4e6b: }
	__asm { xor edx, edx }
	__asm { L_009c4e6d: }
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
// FUNCTION: ROBLOXSTUDIO 0x009c4e90
extern "C" __declspec(naked) void asm_009c4e90()
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
	__asm { je L_009c4ecb }
	__asm { mov dword ptr [edx], 0xe954ac }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009c4ecd }
	__asm { L_009c4ecb: }
	__asm { xor edx, edx }
	__asm { L_009c4ecd: }
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

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x009c8e40
extern "C" __declspec(naked) void asm_009c8e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [edi + 0x10], 0 }
	__asm { je L_009c8e77 }
	__asm { sub esp, 0x30 }
	__asm { mov esi, esp }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { lea ecx, [edi + 8] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { L_009c8e77: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009c8f70
extern "C" __declspec(naked) void asm_009c8f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009c8f87 }
	__asm { add eax, -0x1c }
	__asm { jmp L_009c8f89 }
	__asm { L_009c8f87: }
	__asm { xor eax, eax }
	__asm { L_009c8f89: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [esi + eax + 0x10] }
	__asm { add esi, eax }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edx + 0x14], ecx }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov dword ptr [edx], 0xe461dc }
	__asm { mov dword ptr [edx + 0x18], ecx }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009cc3d0
extern "C" __declspec(naked) void asm_009cc3d0()
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
	__asm { je L_009cc40b }
	__asm { mov dword ptr [edx], 0xe95b18 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009cc40d }
	__asm { L_009cc40b: }
	__asm { xor edx, edx }
	__asm { L_009cc40d: }
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
// FUNCTION: ROBLOXSTUDIO 0x009cc430
extern "C" __declspec(naked) void asm_009cc430()
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
	__asm { je L_009cc46b }
	__asm { mov dword ptr [edx], 0xe95b2c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009cc46d }
	__asm { L_009cc46b: }
	__asm { xor edx, edx }
	__asm { L_009cc46d: }
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
// FUNCTION: ROBLOXSTUDIO 0x009cc490
extern "C" __declspec(naked) void asm_009cc490()
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
	__asm { je L_009cc4cb }
	__asm { mov dword ptr [edx], 0xe95b04 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009cc4cd }
	__asm { L_009cc4cb: }
	__asm { xor edx, edx }
	__asm { L_009cc4cd: }
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
// FUNCTION: ROBLOXSTUDIO 0x009cc4f0
extern "C" __declspec(naked) void asm_009cc4f0()
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
	__asm { je L_009cc52b }
	__asm { mov dword ptr [edx], 0xe95af0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009cc52d }
	__asm { L_009cc52b: }
	__asm { xor edx, edx }
	__asm { L_009cc52d: }
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

// FUNCTION: ROBLOXSTUDIO 0x009cd1b0
extern "C" __declspec(naked) void asm_009cd1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_009cd1c3 }
	__asm { lea esi, [eax - 0x1c] }
	__asm { jmp L_009cd1c5 }
	__asm { L_009cd1c3: }
	__asm { xor esi, esi }
	__asm { L_009cd1c5: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { add ecx, esi }
	__asm { call eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009d00a0
extern "C" __declspec(naked) void asm_009d00a0()
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
	__asm { je L_009d00d5 }
	__asm { mov dword ptr [edx], 0xe97488 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { jmp L_009d00d7 }
	__asm { L_009d00d5: }
	__asm { xor edx, edx }
	__asm { L_009d00d7: }
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

extern "C" void fn_009cf000();
// FUNCTION: ROBLOXSTUDIO 0x009d55b0
extern "C" __declspec(naked) void asm_009d55b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009d55f0 }
	__asm { mov edx, dword ptr [eax + 0x110] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edx + ecx] }
	__asm { add ecx, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, 0x110 }
	__asm { add ecx, eax }
	__asm { call fn_009cf000 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009d55f0: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009c4650();
// FUNCTION: ROBLOXSTUDIO 0x009d5600
extern "C" __declspec(naked) void asm_009d5600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009d5640 }
	__asm { mov edx, dword ptr [eax + 0x110] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edx + ecx] }
	__asm { add ecx, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, 0x110 }
	__asm { add ecx, eax }
	__asm { call fn_009c4650 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009d5640: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00915ca0();
// FUNCTION: ROBLOXSTUDIO 0x009d5650
extern "C" __declspec(naked) void asm_009d5650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009d5690 }
	__asm { mov edx, dword ptr [eax + 0x110] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edx + ecx] }
	__asm { add ecx, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, 0x110 }
	__asm { add ecx, eax }
	__asm { call fn_00915ca0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009d5690: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009cf0b0();
// FUNCTION: ROBLOXSTUDIO 0x009d56a0
extern "C" __declspec(naked) void asm_009d56a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009d56e0 }
	__asm { mov edx, dword ptr [eax + 0x110] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edx + ecx] }
	__asm { add ecx, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, 0x110 }
	__asm { add ecx, eax }
	__asm { call fn_009cf0b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009d56e0: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009cf160();
// FUNCTION: ROBLOXSTUDIO 0x009d56f0
extern "C" __declspec(naked) void asm_009d56f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009d5730 }
	__asm { mov edx, dword ptr [eax + 0x110] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edx + ecx] }
	__asm { add ecx, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, 0x110 }
	__asm { add ecx, eax }
	__asm { call fn_009cf160 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009d5730: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0079a580();
// FUNCTION: ROBLOXSTUDIO 0x009d5740
extern "C" __declspec(naked) void asm_009d5740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009d5780 }
	__asm { mov edx, dword ptr [eax + 0x110] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edx + ecx] }
	__asm { add ecx, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, 0x110 }
	__asm { add ecx, eax }
	__asm { call fn_0079a580 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009d5780: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007b81d0();
// FUNCTION: ROBLOXSTUDIO 0x009d5790
extern "C" __declspec(naked) void asm_009d5790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009d57d0 }
	__asm { mov edx, dword ptr [eax + 0x110] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edx + ecx] }
	__asm { add ecx, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, 0x110 }
	__asm { add ecx, eax }
	__asm { call fn_007b81d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009d57d0: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00532170();
extern "C" void fn_007cd560();
extern "C" void fn_00ccaa50();
// FUNCTION: ROBLOXSTUDIO 0x009d5f80
extern "C" __declspec(naked) void asm_009d5f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_009d5fb5 }
	__asm { mov edi, dword ptr [edi + 0x38] }
	__asm { test edi, edi }
	__asm { je L_009d5fb5 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_00532170 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_009d5fb5 }
	__asm { mov ecx, edi }
	__asm { test ecx, ecx }
	__asm { je L_009d5fb5 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00ccaa50 }
	__asm { L_009d5fb5: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00426850();
// FUNCTION: ROBLOXSTUDIO 0x009d62c0
extern "C" __declspec(naked) void asm_009d62c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 6 }
	__asm { push 0 }
	__asm { push 0xe971f4 }
	__asm { call fn_00426850 }
	__asm { test eax, eax }
	__asm { je L_009d62e5 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009d62e5: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 9 }
	__asm { push 0 }
	__asm { push 0xe971fc }
	__asm { call fn_00426850 }
	__asm { test eax, eax }
	__asm { je L_009d6307 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009d6307: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d4ec0();
// FUNCTION: ROBLOXSTUDIO 0x009d7270
extern "C" __declspec(naked) void asm_009d7270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_009d7282 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_009d7284 }
	__asm { L_009d7282: }
	__asm { xor edx, edx }
	__asm { L_009d7284: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push edx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { call fn_009d4ec0 }
	__asm { add esp, 0x14 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00532170();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x009d8360
extern "C" __declspec(naked) void asm_009d8360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { je L_009d8394 }
	__asm { mov edi, dword ptr [eax + 0x38] }
	__asm { test edi, edi }
	__asm { je L_009d8394 }
	__asm { add edi, 0x1c }
	__asm { je L_009d8394 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00532170 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_009d8394 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_009d8396 }
	__asm { L_009d8394: }
	__asm { xor eax, eax }
	__asm { L_009d8396: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00532170();
extern "C" void fn_007cd560();
extern "C" void fn_00c2feb0();
extern "C" void fn_00ccaa50();
// FUNCTION: ROBLOXSTUDIO 0x009d8750
extern "C" __declspec(naked) void asm_009d8750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c2feb0 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_009d8788 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_00532170 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_009d8788 }
	__asm { mov ecx, edi }
	__asm { test ecx, ecx }
	__asm { je L_009d8788 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00ccaa50 }
	__asm { L_009d8788: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
extern "C" void fn_006da0e0();
extern "C" void fn_00892440();
// FUNCTION: ROBLOXSTUDIO 0x009d87a0
extern "C" __declspec(naked) void asm_009d87a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx - 0x124] }
	__asm { push esi }
	__asm { test ecx, ecx }
	__asm { je L_009d87db }
	__asm { push edi }
	__asm { call fn_00892440 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], ecx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009d87db: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_006da0e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009d8ff0
extern "C" __declspec(naked) void asm_009d8ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_009d9002 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_009d9004 }
	__asm { L_009d9002: }
	__asm { xor edx, edx }
	__asm { L_009d9004: }
	__asm { mov ecx, dword ptr [edx + 0x12c] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [esi + 0xc] }
	__asm { lea ecx, [edx + 0x12c] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { call eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00532170();
extern "C" void fn_007cd560();
extern "C" void fn_00ccaa50();
// FUNCTION: ROBLOXSTUDIO 0x009d9c50
extern "C" __declspec(naked) void asm_009d9c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_009d9c7e }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_00532170 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_009d9c7e }
	__asm { mov ecx, edi }
	__asm { test ecx, ecx }
	__asm { je L_009d9c7e }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00ccaa50 }
	__asm { L_009d9c7e: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009dde10
extern "C" __declspec(naked) void asm_009dde10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_009dde22 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_009dde24 }
	__asm { L_009dde22: }
	__asm { xor edx, edx }
	__asm { L_009dde24: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { fld dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [edx + 0x12c] }
	__asm { fstp dword ptr [esp] }
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

extern "C" void fn_0057dce0();
// FUNCTION: ROBLOXSTUDIO 0x009de930
extern "C" __declspec(naked) void asm_009de930()
{
	__asm { mov eax, dword ptr [ecx + 0x2a0] }
	__asm { test eax, eax }
	__asm { je L_009de94c }
	__asm { mov eax, dword ptr [eax + 0xe0] }
	__asm { test eax, eax }
	__asm { je L_009de94c }
	__asm { mov eax, dword ptr [eax + 0x104] }
	__asm { jmp L_009de94e }
	__asm { L_009de94c: }
	__asm { xor eax, eax }
	__asm { L_009de94e: }
	__asm { test eax, eax }
	__asm { je L_009de957 }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { jmp L_009de959 }
	__asm { L_009de957: }
	__asm { xor eax, eax }
	__asm { L_009de959: }
	__asm { test eax, eax }
	__asm { je L_009de970 }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { mov eax, dword ptr [eax + 0x30] }
	__asm { test eax, eax }
	__asm { je L_009de970 }
	__asm { cmp dword ptr [eax + 0x104], 0 }
	__asm { jg L_009de991 }
	__asm { L_009de970: }
	__asm { cmp dword ptr [ecx + 0x268], 0 }
	__asm { lea eax, [ecx + 0x268] }
	__asm { jne L_009de985 }
	__asm { lea eax, [ecx + 0x298] }
	__asm { L_009de985: }
	__asm { push eax }
	__asm { lea ecx, [ecx + 0x2a0] }
	__asm { call fn_0057dce0 }
	__asm { L_009de991: }
	__asm { ret }
}

extern "C" void fn_008900d0();
extern "C" void fn_0099c7f0();
extern "C" void fn_00b5b600();
// FUNCTION: ROBLOXSTUDIO 0x009de9a0
extern "C" __declspec(naked) void asm_009de9a0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x268] }
	__asm { test esi, esi }
	__asm { jne L_009de9b8 }
	__asm { mov esi, dword ptr [edi + 0x298] }
	__asm { test esi, esi }
	__asm { je L_009de9ec }
	__asm { L_009de9b8: }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { call fn_0099c7f0 }
	__asm { test eax, eax }
	__asm { je L_009de9ec }
	__asm { mov ecx, eax }
	__asm { call fn_00b5b600 }
	__asm { test al, al }
	__asm { sete al }
	__asm { test al, al }
	__asm { je L_009de9f3 }
	__asm { mov ecx, esi }
	__asm { call fn_008900d0 }
	__asm { test al, al }
	__asm { sete al }
	__asm { mov byte ptr [edi + 0x20f], al }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_009de9ec: }
	__asm { mov byte ptr [edi + 0x20f], 0 }
	__asm { L_009de9f3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009df5e0
extern "C" __declspec(naked) void asm_009df5e0()
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
	__asm { je L_009df61b }
	__asm { mov dword ptr [edx], 0xe978fc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009df61d }
	__asm { L_009df61b: }
	__asm { xor edx, edx }
	__asm { L_009df61d: }
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
// FUNCTION: ROBLOXSTUDIO 0x009df640
extern "C" __declspec(naked) void asm_009df640()
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
	__asm { je L_009df67b }
	__asm { mov dword ptr [edx], 0xe978e8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009df67d }
	__asm { L_009df67b: }
	__asm { xor edx, edx }
	__asm { L_009df67d: }
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
// FUNCTION: ROBLOXSTUDIO 0x009df6a0
extern "C" __declspec(naked) void asm_009df6a0()
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
	__asm { je L_009df6db }
	__asm { mov dword ptr [edx], 0xe97910 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009df6dd }
	__asm { L_009df6db: }
	__asm { xor edx, edx }
	__asm { L_009df6dd: }
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

// FUNCTION: ROBLOXSTUDIO 0x009e1920
extern "C" __declspec(naked) void asm_009e1920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_009e195c }
	__asm { nop }
	__asm { L_009e1930: }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_009e1955 }
	__asm { test al, 1 }
	__asm { jne L_009e194f }
	__asm { and eax, 0xfffffffe }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_009e194f }
	__asm { lea eax, [esi + 8] }
	__asm { push 2 }
	__asm { push eax }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { L_009e194f: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_009e1955: }
	__asm { add esi, 0x20 }
	__asm { cmp esi, edi }
	__asm { jne L_009e1930 }
	__asm { L_009e195c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009e7a60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009e8f80
extern "C" __declspec(naked) void asm_009e8f80()
{
	__asm { L_009e8f80: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { mov esi, edi }
	__asm { jne L_009e8fb8 }
	__asm { L_009e8f93: }
	__asm { push dword ptr [esi + 8] }
	__asm { mov ecx, ebx }
	__asm { call L_009e8f80 }
	__asm { mov esi, dword ptr [esi] }
	__asm { lea ecx, [edi + 0x18] }
	__asm { call fn_009e7a60 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov edi, esi }
	__asm { je L_009e8f93 }
	__asm { L_009e8fb8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b5ea0();
extern "C" void fn_00865d20();
extern "C" void fn_009f7a90();
// FUNCTION: ROBLOXSTUDIO 0x009f8b20
extern "C" __declspec(naked) void asm_009f8b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00865d20 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_009f8b57 }
	__asm { mov ecx, esi }
	__asm { call fn_009f7a90 }
	__asm { test eax, eax }
	__asm { je L_009f8b57 }
	__asm { L_009f8b42: }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_007b5ea0 }
	__asm { mov ecx, esi }
	__asm { call fn_009f7a90 }
	__asm { test eax, eax }
	__asm { jne L_009f8b42 }
	__asm { L_009f8b57: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009fa550
extern "C" __declspec(naked) void asm_009fa550()
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
	__asm { je L_009fa58b }
	__asm { mov dword ptr [edx], 0xe9a5c4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009fa58d }
	__asm { L_009fa58b: }
	__asm { xor edx, edx }
	__asm { L_009fa58d: }
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
// FUNCTION: ROBLOXSTUDIO 0x009fb1e0
extern "C" __declspec(naked) void asm_009fb1e0()
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
	__asm { je L_009fb21b }
	__asm { mov dword ptr [edx], 0xe9b1ac }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009fb21d }
	__asm { L_009fb21b: }
	__asm { xor edx, edx }
	__asm { L_009fb21d: }
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
// FUNCTION: ROBLOXSTUDIO 0x009fb240
extern "C" __declspec(naked) void asm_009fb240()
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
	__asm { je L_009fb27b }
	__asm { mov dword ptr [edx], 0xe9b198 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009fb27d }
	__asm { L_009fb27b: }
	__asm { xor edx, edx }
	__asm { L_009fb27d: }
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

extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fbf10
extern "C" __declspec(naked) void asm_009fbf10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x7c], 0x10 }
	__asm { jb L_009fbf27 }
	__asm { push dword ptr [esi + 0x68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fbf27: }
	__asm { mov dword ptr [esi + 0x7c], 0xf }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov byte ptr [esi + 0x68], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0xe9a6dc }
	__asm { mov dword ptr [esi + 4], 0xe9a75c }
	__asm { mov dword ptr [esi + 0x18], 0xe9a764 }
	__asm { mov dword ptr [esi + 0x1c], 0xe9a770 }
	__asm { mov dword ptr [esi + 0x64], 0xe9a780 }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_009fbf71 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fbf71: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x009fc6b0
extern "C" __declspec(naked) void asm_009fc6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009fc6c7 }
	__asm { add eax, -0x1c }
	__asm { jmp L_009fc6c9 }
	__asm { L_009fc6c7: }
	__asm { xor eax, eax }
	__asm { L_009fc6c9: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 8] }
	__asm { push -1 }
	__asm { add edi, eax }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009fcbe0
extern "C" __declspec(naked) void asm_009fcbe0()
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
	__asm { je L_009fcc1b }
	__asm { mov dword ptr [edx], 0xe9b3e0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_009fcc1d }
	__asm { L_009fcc1b: }
	__asm { xor edx, edx }
	__asm { L_009fcc1d: }
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

extern "C" void fn_007b4990();
extern "C" void fn_007b49a0();
extern "C" void fn_007b4f50();
extern "C" void fn_00d09250();
// FUNCTION: ROBLOXSTUDIO 0x00a02b10
extern "C" __declspec(naked) void asm_00a02b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x110], eax }
	__asm { je L_00a02b61 }
	__asm { push 0x130676c }
	__asm { mov dword ptr [esi + 0x110], eax }
	__asm { call fn_007b4f50 }
	__asm { push 0x13067a0 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { je L_00a02b56 }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { mov byte ptr [eax + 0xb0], 1 }
	__asm { L_00a02b56: }
	__asm { lea ecx, [esi + 0x98] }
	__asm { call fn_00d09250 }
	__asm { L_00a02b61: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a0a730
extern "C" __declspec(naked) void asm_00a0a730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add dword ptr [ecx + 4], eax }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a0a77d }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { jge L_00a0a77d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a0a76c }
	__asm { push 0x39 }
	__asm { push 0xe9cc00 }
	__asm { push 0xe9cc44 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0a77d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a0a76c: }
	__asm { movzx eax, al }
	__asm { push 0xe9cc68 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0a77d: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a0adf0
extern "C" __declspec(naked) void asm_00a0adf0()
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
	__asm { je L_00a0ae2b }
	__asm { mov dword ptr [edx], 0xe9d1c8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a0ae2d }
	__asm { L_00a0ae2b: }
	__asm { xor edx, edx }
	__asm { L_00a0ae2d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a0ae50
extern "C" __declspec(naked) void asm_00a0ae50()
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
	__asm { je L_00a0ae8b }
	__asm { mov dword ptr [edx], 0xe9d1dc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a0ae8d }
	__asm { L_00a0ae8b: }
	__asm { xor edx, edx }
	__asm { L_00a0ae8d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a0b840
extern "C" __declspec(naked) void asm_00a0b840()
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
	__asm { je L_00a0b87b }
	__asm { mov dword ptr [edx], 0xe9d44c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a0b87d }
	__asm { L_00a0b87b: }
	__asm { xor edx, edx }
	__asm { L_00a0b87d: }
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

// FUNCTION: ROBLOXSTUDIO 0x00a0bb40
extern "C" __declspec(naked) void asm_00a0bb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_00a0bb54 }
	__asm { add eax, -0x1c }
	__asm { jmp L_00a0bb56 }
	__asm { L_00a0bb54: }
	__asm { xor eax, eax }
	__asm { L_00a0bb56: }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a0c170
extern "C" __declspec(naked) void asm_00a0c170()
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
	__asm { je L_00a0c1ab }
	__asm { mov dword ptr [edx], 0xe9d710 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a0c1ad }
	__asm { L_00a0c1ab: }
	__asm { xor edx, edx }
	__asm { L_00a0c1ad: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a0c1d0
extern "C" __declspec(naked) void asm_00a0c1d0()
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
	__asm { je L_00a0c20b }
	__asm { mov dword ptr [edx], 0xe9d724 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a0c20d }
	__asm { L_00a0c20b: }
	__asm { xor edx, edx }
	__asm { L_00a0c20d: }
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

extern "C" void fn_007b1a40();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00a0cbe0
extern "C" __declspec(naked) void asm_00a0cbe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00a0cc15 }
	__asm { add edi, 0x1c }
	__asm { je L_00a0cc15 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_007b1a40 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00a0cc15 }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { sete al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a0cc15: }
	__asm { xor edi, edi }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { sete al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a0d7a0
extern "C" __declspec(naked) void asm_00a0d7a0()
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
	__asm { je L_00a0d7db }
	__asm { mov dword ptr [edx], 0xe9dce4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a0d7dd }
	__asm { L_00a0d7db: }
	__asm { xor edx, edx }
	__asm { L_00a0d7dd: }
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

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a0de40
extern "C" __declspec(naked) void asm_00a0de40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ebp + 8], 0x1388 }
	__asm { mov edx, ecx }
	__asm { lea ecx, [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { cmovle eax, ecx }
	__asm { mov dword ptr [ebp - 4], 0x1388 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { lea esi, [ebp + 8] }
	__asm { lea ecx, [ebp - 4] }
	__asm { cmovns ecx, esi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop esi }
	__asm { cmp eax, dword ptr [edx + 0x110] }
	__asm { je L_00a0de92 }
	__asm { push 0x1306cc8 }
	__asm { mov ecx, edx }
	__asm { mov dword ptr [edx + 0x110], eax }
	__asm { call fn_007b4f50 }
	__asm { L_00a0de92: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a0f230
extern "C" __declspec(naked) void asm_00a0f230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { je L_00a0f272 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0f272: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007cfc10();
extern "C" void fn_007d54e0();
// FUNCTION: ROBLOXSTUDIO 0x00a0f310
extern "C" __declspec(naked) void asm_00a0f310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a0f322 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a0f324 }
	__asm { L_00a0f322: }
	__asm { xor edx, edx }
	__asm { L_00a0f324: }
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [edx + ecx] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { call dword ptr [ebp - 8] }
	__asm { fstp qword ptr [ebp - 8] }
	__asm { call fn_007d54e0 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_007cfc10 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a1cde0
extern "C" __declspec(naked) void asm_00a1cde0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { test esi, esi }
	__asm { je L_00a1ce10 }
	__asm { mov edx, dword ptr [ecx + 0x34] }
	__asm { sub edx, dword ptr [ecx + 0x30] }
	__asm { mov eax, 0x66666667 }
	__asm { imul edx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { jb L_00a1ce10 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a1ce10: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a25600
extern "C" __declspec(naked) void asm_00a25600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a25612 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a25614 }
	__asm { L_00a25612: }
	__asm { xor edx, edx }
	__asm { L_00a25614: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { fld dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { fstp dword ptr [esp] }
	__asm { push 1 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a25680
extern "C" __declspec(naked) void asm_00a25680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a25692 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a25694 }
	__asm { L_00a25692: }
	__asm { xor edx, edx }
	__asm { L_00a25694: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { fld dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { fstp dword ptr [esp] }
	__asm { push 2 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a25700
extern "C" __declspec(naked) void asm_00a25700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a25712 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a25714 }
	__asm { L_00a25712: }
	__asm { xor edx, edx }
	__asm { L_00a25714: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { fld dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { fstp dword ptr [esp] }
	__asm { push 3 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a25780
extern "C" __declspec(naked) void asm_00a25780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a25792 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a25794 }
	__asm { L_00a25792: }
	__asm { xor edx, edx }
	__asm { L_00a25794: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { fld dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { fstp dword ptr [esp] }
	__asm { push 4 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a25800
extern "C" __declspec(naked) void asm_00a25800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a25812 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a25814 }
	__asm { L_00a25812: }
	__asm { xor edx, edx }
	__asm { L_00a25814: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { fld dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { fstp dword ptr [esp] }
	__asm { push 5 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a25880
extern "C" __declspec(naked) void asm_00a25880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a25892 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a25894 }
	__asm { L_00a25892: }
	__asm { xor edx, edx }
	__asm { L_00a25894: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { fld dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { fstp dword ptr [esp] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x00a2bf00
extern "C" __declspec(naked) void asm_00a2bf00()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xea648c }
	__asm { mov dword ptr [esi + 0x14], 0xea6498 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x28], 0xea64a0 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xea6478 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00a2bf51 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a2bf51 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00a2bf51: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x00a2bf60
extern "C" __declspec(naked) void asm_00a2bf60()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [esi], 0xea64f4 }
	__asm { mov dword ptr [esi + 0x1c], 0xea6500 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x30], 0xea6508 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x2c], eax }
	__asm { mov dword ptr [esi], 0xea64e0 }
	__asm { mov dword ptr [esi + 0x1c], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00a2bfb1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a2bfb1 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_00a2bfb1: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2cdb0
extern "C" __declspec(naked) void asm_00a2cdb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xea6478 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00a2cddc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a2cddc }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00a2cddc: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a2cdf3 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2cdf3: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2ce00
extern "C" __declspec(naked) void asm_00a2ce00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xea64e0 }
	__asm { mov dword ptr [esi + 0x1c], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00a2ce2c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a2ce2c }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_00a2ce2c: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a2ce43 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2ce43: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a2d270
extern "C" __declspec(naked) void asm_00a2d270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { je L_00a2d29d }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { test eax, eax }
	__asm { je L_00a2d29d }
	__asm { add eax, -0x30 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 4] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a2d29d: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10314[];
extern "C" void fn_00403160();
// FUNCTION: ROBLOXSTUDIO 0x00a2d8a0
extern "C" __declspec(naked) void asm_00a2d8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp eax, 2 }
	__asm { jne L_00a2d8c4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10314] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a2d8c4: }
	__asm { cmp eax, 3 }
	__asm { jne L_00a2d8d5 }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { call fn_00403160 }
	__asm { add esp, 4 }
	__asm { L_00a2d8d5: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10294[];
extern "C" char g_00e102fc[];
extern "C" char g_00e10314[];
extern "C" void fn_0040f730();
// FUNCTION: ROBLOXSTUDIO 0x00a312f0
extern "C" __declspec(naked) void asm_00a312f0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102fc] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { sub eax, esi }
	__asm { cdq }
	__asm { mov esi, eax }
	__asm { test edx, edx }
	__asm { jl L_00a31337 }
	__asm { jg L_00a31313 }
	__asm { test esi, esi }
	__asm { je L_00a31337 }
	__asm { L_00a31313: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102fc] }
	__asm { mov ecx, dword ptr [edi + 0x3c] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0040f730 }
	__asm { mov ecx, dword ptr [edi + 0x48] }
	__asm { mov eax, dword ptr [edi + 0x50] }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10314] }
	__asm { L_00a31337: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10294[];
extern "C" char g_00e102fc[];
extern "C" char g_00e10314[];
// FUNCTION: ROBLOXSTUDIO 0x00a31510
extern "C" __declspec(naked) void asm_00a31510()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102fc] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { sub eax, esi }
	__asm { cdq }
	__asm { test edx, edx }
	__asm { jl L_00a3154b }
	__asm { jg L_00a31531 }
	__asm { test eax, eax }
	__asm { je L_00a3154b }
	__asm { L_00a31531: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102fc] }
	__asm { mov ecx, dword ptr [edi + 0x48] }
	__asm { mov eax, dword ptr [edi + 0x50] }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10314] }
	__asm { L_00a3154b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a33b30
extern "C" __declspec(naked) void asm_00a33b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, edi }
	__asm { je L_00a33b62 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_00a33b42: }
	__asm { test esi, esi }
	__asm { je L_00a33b52 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dx, word ptr [ecx + 4] }
	__asm { mov word ptr [esi + 4], dx }
	__asm { L_00a33b52: }
	__asm { add ecx, 6 }
	__asm { add esi, 6 }
	__asm { cmp ecx, edi }
	__asm { jne L_00a33b42 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a33b62: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc7100();
extern "C" void fn_00bc9ad0();
// FUNCTION: ROBLOXSTUDIO 0x00a34e50
extern "C" __declspec(naked) void asm_00a34e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { cmp eax, dword ptr [ecx + 0x40] }
	__asm { jb L_00a34e6c }
	__asm { push edi }
	__asm { call fn_00bc7100 }
	__asm { add esp, 4 }
	__asm { L_00a34e6c: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_00bc9ad0 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 8], 5 }
	__asm { add dword ptr [edi + 8], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
extern "C" void fn_00bcc760();
// FUNCTION: ROBLOXSTUDIO 0x00a352c0
extern "C" __declspec(naked) void asm_00a352c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a34c10 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, eax }
	__asm { push esi }
	__asm { call fn_00a34c10 }
	__asm { add esp, 0x10 }
	__asm { cmp edi, 0xea7e68 }
	__asm { je L_00a352fd }
	__asm { cmp eax, 0xea7e68 }
	__asm { je L_00a352fd }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00bcc760 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a352fd: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc7100();
extern "C" void fn_00bc95c0();
// FUNCTION: ROBLOXSTUDIO 0x00a353e0
extern "C" __declspec(naked) void asm_00a353e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { cmp eax, dword ptr [ecx + 0x40] }
	__asm { jb L_00a353fb }
	__asm { push esi }
	__asm { call fn_00bc7100 }
	__asm { add esp, 4 }
	__asm { L_00a353fb: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, dword ptr [esi + 0x28] }
	__asm { jne L_00a35408 }
	__asm { mov eax, dword ptr [esi + 0x48] }
	__asm { jmp L_00a35410 }
	__asm { L_00a35408: }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { L_00a35410: }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00bc95c0 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 8], 7 }
	__asm { add dword ptr [esi + 8], 0x10 }
	__asm { add eax, 0x18 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc7100();
extern "C" void fn_00bc9420();
// FUNCTION: ROBLOXSTUDIO 0x00a35690
extern "C" __declspec(naked) void asm_00a35690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { cmp eax, dword ptr [ecx + 0x40] }
	__asm { jb L_00a356ac }
	__asm { push edi }
	__asm { call fn_00bc7100 }
	__asm { add esp, 4 }
	__asm { L_00a356ac: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_00bc9420 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 8], 4 }
	__asm { add dword ptr [edi + 8], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
extern "C" void fn_00a45b00();
// FUNCTION: ROBLOXSTUDIO 0x00a35810
extern "C" __declspec(naked) void asm_00a35810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a34c10 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a34c10 }
	__asm { add esp, 0x10 }
	__asm { cmp edi, 0xea7e68 }
	__asm { je L_00a3584b }
	__asm { cmp eax, 0xea7e68 }
	__asm { je L_00a3584b }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a45b00 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3584b: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
// FUNCTION: ROBLOXSTUDIO 0x00a359d0
extern "C" __declspec(naked) void asm_00a359d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a34c10 }
	__asm { lea edx, [eax + 0x10] }
	__asm { add esp, 8 }
	__asm { cmp edx, dword ptr [esi + 8] }
	__asm { jae L_00a35a0b }
	__asm { lea ecx, [edx - 0x10] }
	__asm { mov edi, edi }
	__asm { L_00a359f0: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { add edx, 0x10 }
	__asm { lea ecx, [ecx + 0x10] }
	__asm { cmp edx, dword ptr [esi + 8] }
	__asm { jb L_00a359f0 }
	__asm { L_00a35a0b: }
	__asm { add dword ptr [esi + 8], -0x10 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
extern "C" void fn_00bcc910();
// FUNCTION: ROBLOXSTUDIO 0x00a35e20
extern "C" __declspec(naked) void asm_00a35e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a34c10 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [eax + 8], 3 }
	__asm { je L_00a35e4f }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00bcc910 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00a35e4f }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a35e4f: }
	__asm { fld qword ptr [eax] }
	__asm { fstp qword ptr [ebp - 0xc] }
	__asm { fld qword ptr [ebp - 0xc] }
	__asm { fistp dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a36bb0();
extern "C" void fn_00a36d10();
extern "C" void fn_00a379c0();
// FUNCTION: ROBLOXSTUDIO 0x00a36560
extern "C" __declspec(naked) void asm_00a36560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { cmp eax, 0x4e20 }
	__asm { jg L_00a365a0 }
	__asm { add eax, eax }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a36bb0 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi + 0x30], 0x4e20 }
	__asm { jle L_00a36594 }
	__asm { push 0xea6ef8 }
	__asm { push esi }
	__asm { call fn_00a379c0 }
	__asm { add esp, 8 }
	__asm { L_00a36594: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { add eax, 0x18 }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a365a0: }
	__asm { push 5 }
	__asm { push esi }
	__asm { call fn_00a36d10 }
}

extern "C" void fn_00a379c0();
// FUNCTION: ROBLOXSTUDIO 0x00a37970
extern "C" __declspec(naked) void asm_00a37970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [eax*4 + 0xee1bc0] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov edx, dword ptr [eax*4 + 0xee1bc0] }
	__asm { mov al, byte ptr [ecx + 2] }
	__asm { cmp al, byte ptr [edx + 2] }
	__asm { jne L_00a379aa }
	__asm { push ecx }
	__asm { push 0xea7018 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a379c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a379aa: }
	__asm { push edx }
	__asm { push ecx }
	__asm { push 0xea703c }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a379c0 }
	__asm { add esp, 0x10 }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34dd0();
extern "C" void fn_00a35690();
// FUNCTION: ROBLOXSTUDIO 0x00a39150
extern "C" __declspec(naked) void asm_00a39150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { sub eax, edi }
	__asm { sub eax, 0xc }
	__asm { je L_00a39177 }
	__asm { push esi }
	__asm { push eax }
	__asm { lea esi, [edi + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00a35690 }
	__asm { add esp, 0xc }
	__asm { inc dword ptr [edi + 4] }
	__asm { mov dword ptr [edi], esi }
	__asm { pop esi }
	__asm { L_00a39177: }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00a34dd0 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [edi + 4], 1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead0[];
extern "C" void fn_008ea2b0();
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a39ed0
extern "C" __declspec(naked) void asm_00a39ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea eax, [ebp - 4] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_008ea2b0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [eax] }
	__asm { push 4 }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_00a39ef5 }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00a39ef5: }
	__asm { push dword ptr [g_0124ead0] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eac8[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a3afb0
extern "C" __declspec(naked) void asm_00a3afb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 4 }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { je L_00a3afce }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], ecx }
	__asm { L_00a3afce: }
	__asm { push dword ptr [g_0124eac8] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead0[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a3aff0
extern "C" __declspec(naked) void asm_00a3aff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 4 }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { je L_00a3b00e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], ecx }
	__asm { L_00a3b00e: }
	__asm { push dword ptr [g_0124ead0] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eac4[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a3b1d0
extern "C" __declspec(naked) void asm_00a3b1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 4 }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { je L_00a3b1ee }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], ecx }
	__asm { L_00a3b1ee: }
	__asm { push dword ptr [g_0124eac4] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eadc[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a3b350
extern "C" __declspec(naked) void asm_00a3b350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0xc }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { je L_00a3b37a }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { L_00a3b37a: }
	__asm { push dword ptr [g_0124eadc] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb2c[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a3b400
extern "C" __declspec(naked) void asm_00a3b400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 8 }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { je L_00a3b424 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { L_00a3b424: }
	__asm { push dword ptr [g_0124eb2c] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb14[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a3b4a0
extern "C" __declspec(naked) void asm_00a3b4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0xc }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { je L_00a3b4ca }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { L_00a3b4ca: }
	__asm { push dword ptr [g_0124eb14] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eac8[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a41dd0
extern "C" __declspec(naked) void asm_00a41dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov esi, dword ptr [esi] }
	__asm { push 4 }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a41ded }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00a41ded: }
	__asm { push dword ptr [g_0124eac8] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0124ead0[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a41e20
extern "C" __declspec(naked) void asm_00a41e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov esi, dword ptr [esi] }
	__asm { push 4 }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a41e3d }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00a41e3d: }
	__asm { push dword ptr [g_0124ead0] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0124eac4[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a41fa0
extern "C" __declspec(naked) void asm_00a41fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov esi, dword ptr [esi] }
	__asm { push 4 }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a41fbd }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00a41fbd: }
	__asm { push dword ptr [g_0124eac4] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0124eb2c[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a42180
extern "C" __declspec(naked) void asm_00a42180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { push 8 }
	__asm { push esi }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a421a4 }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { L_00a421a4: }
	__asm { push dword ptr [g_0124eb2c] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0124eb24[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a42240
extern "C" __declspec(naked) void asm_00a42240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov esi, dword ptr [esi] }
	__asm { push 4 }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a4225d }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00a4225d: }
	__asm { push dword ptr [g_0124eb24] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0124eb18[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a422f0
extern "C" __declspec(naked) void asm_00a422f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov bx, word ptr [eax + 4] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { push 6 }
	__asm { push esi }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a42316 }
	__asm { mov dword ptr [eax], edi }
	__asm { mov word ptr [eax + 4], bx }
	__asm { L_00a42316: }
	__asm { push dword ptr [g_0124eb18] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00a42770
extern "C" __declspec(naked) void asm_00a42770()
{
	__asm { push esi }
	__asm { lea esi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { je L_00a427b0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00a42782 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a42787 }
	__asm { L_00a42782: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a42787: }
	__asm { cmp ecx, 0x12be0b8 }
	__asm { je L_00a427ab }
	__asm { test eax, eax }
	__asm { je L_00a42797 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a4279c }
	__asm { L_00a42797: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a4279c: }
	__asm { push 0x12be0b8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00a427b0 }
	__asm { L_00a427ab: }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00a427b0: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00a35150();
extern "C" void fn_00a42b60();
// FUNCTION: ROBLOXSTUDIO 0x00a45440
extern "C" __declspec(naked) void asm_00a45440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { add esi, dword ptr [edi + 0x48] }
	__asm { call fn_00a35150 }
	__asm { add esp, 4 }
	__asm { cmp esi, eax }
	__asm { jle L_00a45464 }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a45464: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { call fn_00a42b60 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a35150();
extern "C" void fn_00a42c00();
// FUNCTION: ROBLOXSTUDIO 0x00a45480
extern "C" __declspec(naked) void asm_00a45480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { add esi, dword ptr [edi + 0x48] }
	__asm { call fn_00a35150 }
	__asm { add esp, 4 }
	__asm { cmp esi, eax }
	__asm { jle L_00a454a4 }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a454a4: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { call fn_00a42c00 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a35150();
extern "C" void fn_00a3aeb0();
// FUNCTION: ROBLOXSTUDIO 0x00a45520
extern "C" __declspec(naked) void asm_00a45520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { add esi, dword ptr [edi + 0x48] }
	__asm { call fn_00a35150 }
	__asm { add esp, 4 }
	__asm { cmp esi, eax }
	__asm { jle L_00a45544 }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a45544: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { call fn_00a3aeb0 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a35150();
extern "C" void fn_00a3af30();
// FUNCTION: ROBLOXSTUDIO 0x00a45560
extern "C" __declspec(naked) void asm_00a45560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { add esi, dword ptr [edi + 0x48] }
	__asm { call fn_00a35150 }
	__asm { add esp, 4 }
	__asm { cmp esi, eax }
	__asm { jle L_00a45584 }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a45584: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { call fn_00a3af30 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a467a0
extern "C" __declspec(naked) void asm_00a467a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { je L_00a467b0 }
	__asm { mov dword ptr [ecx + 4], 0xea81fc }
	__asm { L_00a467b0: }
	__asm { fldz }
	__asm { mov byte ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0x41200000 }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { mov dword ptr [ecx + 0x1c], 0 }
	__asm { fst qword ptr [ecx + 0x48] }
	__asm { fstp qword ptr [ecx + 0x50] }
	__asm { mov dword ptr [ecx + 0x20], 0x41200000 }
	__asm { mov dword ptr [ecx + 0x24], 0x41200000 }
	__asm { mov dword ptr [ecx + 0x28], 0x41200000 }
	__asm { mov dword ptr [ecx + 0x2c], 0x3fc00000 }
	__asm { mov dword ptr [ecx + 0x30], 0 }
	__asm { mov dword ptr [ecx + 0x34], 0 }
	__asm { mov dword ptr [ecx + 0x38], 0 }
	__asm { mov dword ptr [ecx + 0x3c], 0x43c80000 }
	__asm { mov dword ptr [ecx + 0x40], 0 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a48b10
extern "C" __declspec(naked) void asm_00a48b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { je L_00a48b49 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { nop }
	__asm { L_00a48b20: }
	__asm { push dword ptr [esi + 8] }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { test eax, eax }
	__asm { je L_00a48b3e }
	__asm { add eax, -4 }
	__asm { jmp L_00a48b40 }
	__asm { L_00a48b3e: }
	__asm { xor eax, eax }
	__asm { L_00a48b40: }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_00a48b20 }
	__asm { pop esi }
	__asm { L_00a48b49: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_01307a1c[];
extern "C" void fn_006b9b20();
extern "C" void fn_00a4f940();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a49890
extern "C" __declspec(naked) void asm_00a49890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00a4f940 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00a498ab }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00a498c9 }
	__asm { jmp L_00a498c4 }
	__asm { L_00a498ab: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_01307a1c] }
	__asm { cmp edx, eax }
	__asm { ja L_00a498be }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_01307a1c], eax }
	__asm { L_00a498be: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a498c4: }
	__asm { call fn_006b9b20 }
	__asm { L_00a498c9: }
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
extern "C" char g_01307a24[];
extern "C" void fn_006b9b20();
extern "C" void fn_00a4f9a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a49900
extern "C" __declspec(naked) void asm_00a49900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00a4f9a0 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00a4991b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00a49939 }
	__asm { jmp L_00a49934 }
	__asm { L_00a4991b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_01307a24] }
	__asm { cmp edx, eax }
	__asm { ja L_00a4992e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_01307a24], eax }
	__asm { L_00a4992e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a49934: }
	__asm { call fn_006b9b20 }
	__asm { L_00a49939: }
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
extern "C" char g_01307a30[];
extern "C" void fn_006b9b20();
extern "C" void fn_00a4fa00();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a49970
extern "C" __declspec(naked) void asm_00a49970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00a4fa00 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00a4998b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00a499a9 }
	__asm { jmp L_00a499a4 }
	__asm { L_00a4998b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_01307a30] }
	__asm { cmp edx, eax }
	__asm { ja L_00a4999e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_01307a30], eax }
	__asm { L_00a4999e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a499a4: }
	__asm { call fn_006b9b20 }
	__asm { L_00a499a9: }
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
extern "C" char g_01307a2c[];
extern "C" void fn_006b9b20();
extern "C" void fn_00a4fa60();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a499e0
extern "C" __declspec(naked) void asm_00a499e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00a4fa60 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00a499fb }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00a49a19 }
	__asm { jmp L_00a49a14 }
	__asm { L_00a499fb: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_01307a2c] }
	__asm { cmp edx, eax }
	__asm { ja L_00a49a0e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_01307a2c], eax }
	__asm { L_00a49a0e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a49a14: }
	__asm { call fn_006b9b20 }
	__asm { L_00a49a19: }
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
extern "C" char g_01307a34[];
extern "C" void fn_006b9b20();
extern "C" void fn_00a4fac0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a49a50
extern "C" __declspec(naked) void asm_00a49a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00a4fac0 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00a49a6b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00a49a89 }
	__asm { jmp L_00a49a84 }
	__asm { L_00a49a6b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_01307a34] }
	__asm { cmp edx, eax }
	__asm { ja L_00a49a7e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_01307a34], eax }
	__asm { L_00a49a7e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a49a84: }
	__asm { call fn_006b9b20 }
	__asm { L_00a49a89: }
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
extern "C" char g_01307b0c[];
extern "C" void fn_006b9b20();
extern "C" void fn_00a4fb20();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a49ac0
extern "C" __declspec(naked) void asm_00a49ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00a4fb20 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00a49adb }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00a49af9 }
	__asm { jmp L_00a49af4 }
	__asm { L_00a49adb: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_01307b0c] }
	__asm { cmp edx, eax }
	__asm { ja L_00a49aee }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_01307b0c], eax }
	__asm { L_00a49aee: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a49af4: }
	__asm { call fn_006b9b20 }
	__asm { L_00a49af9: }
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
extern "C" char g_01307b14[];
extern "C" void fn_006b9b20();
extern "C" void fn_00a4fb80();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a49b30
extern "C" __declspec(naked) void asm_00a49b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00a4fb80 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00a49b4b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00a49b69 }
	__asm { jmp L_00a49b64 }
	__asm { L_00a49b4b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_01307b14] }
	__asm { cmp edx, eax }
	__asm { ja L_00a49b5e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_01307b14], eax }
	__asm { L_00a49b5e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a49b64: }
	__asm { call fn_006b9b20 }
	__asm { L_00a49b69: }
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

extern "C" void fn_00a497b0();
extern "C" void fn_00a49ea0();
// FUNCTION: ROBLOXSTUDIO 0x00a49fc0
extern "C" __declspec(naked) void asm_00a49fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { movsx eax, word ptr [esi] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { add eax, 4 }
	__asm { mov edi, ecx }
	__asm { lea eax, [eax + eax*2] }
	__asm { mov eax, dword ptr [edi + eax*4] }
	__asm { lea eax, [eax + edx*8] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_00a49fec }
	__asm { L_00a49fe3: }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, 0x2c }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_00a49fe3 }
	__asm { L_00a49fec: }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { call fn_00a497b0 }
	__asm { push esi }
	__asm { call fn_00a49ea0 }
	__asm { add esp, 4 }
	__asm { dec dword ptr [edi + 0x24] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b8c1b0();
extern "C" void fn_00b8c490();
// FUNCTION: ROBLOXSTUDIO 0x00a50dc0
extern "C" __declspec(naked) void asm_00a50dc0()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00a50e08 }
	__asm { call fn_00b8c1b0 }
	__asm { test eax, eax }
	__asm { jne L_00a50e08 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a50df3 }
	__asm { push 0x39 }
	__asm { push 0xea85d0 }
	__asm { push 0xea8614 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a50e08 }
	__asm { L_00a50df3: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea8620 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a50e08: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_00b8c490 }
}

extern "C" void fn_00a55c70();
extern "C" void fn_00a55cd0();
extern "C" void fn_00b609c0();
// FUNCTION: ROBLOXSTUDIO 0x00a510b0
extern "C" __declspec(naked) void asm_00a510b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x28], 0 }
	__asm { jne L_00a510c8 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x3c }
	__asm { L_00a510c8: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00a55cd0 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00a55c70 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x100] }
	__asm { call fn_00b609c0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x3c }
}

extern "C" char g_00e10268[];
// FUNCTION: ROBLOXSTUDIO 0x00a51920
extern "C" __declspec(naked) void asm_00a51920()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 0x30] }
	__asm { sub eax, dword ptr [ebx + 0x2c] }
	__asm { push edi }
	__asm { sar eax, 2 }
	__asm { xor edi, edi }
	__asm { test eax, eax }
	__asm { je L_00a51952 }
	__asm { L_00a51934: }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { mov ecx, dword ptr [eax + edi*4] }
	__asm { test ecx, ecx }
	__asm { je L_00a51944 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00a51944: }
	__asm { mov eax, dword ptr [ebx + 0x30] }
	__asm { sub eax, dword ptr [ebx + 0x2c] }
	__asm { inc edi }
	__asm { sar eax, 2 }
	__asm { cmp edi, eax }
	__asm { jb L_00a51934 }
	__asm { L_00a51952: }
	__asm { lea ecx, [ebx + 0x2c] }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 0x30], eax }
	__asm { pop esi }
	__asm { mov byte ptr [ebx + 0x1a], 0 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a56d90
extern "C" __declspec(naked) void asm_00a56d90()
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
	__asm { je L_00a56dcb }
	__asm { mov dword ptr [edx], 0xeab70c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a56dcd }
	__asm { L_00a56dcb: }
	__asm { xor edx, edx }
	__asm { L_00a56dcd: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a56df0
extern "C" __declspec(naked) void asm_00a56df0()
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
	__asm { je L_00a56e2b }
	__asm { mov dword ptr [edx], 0xeab6f8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a56e2d }
	__asm { L_00a56e2b: }
	__asm { xor edx, edx }
	__asm { L_00a56e2d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a56e50
extern "C" __declspec(naked) void asm_00a56e50()
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
	__asm { je L_00a56e8b }
	__asm { mov dword ptr [edx], 0xeab6e4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a56e8d }
	__asm { L_00a56e8b: }
	__asm { xor edx, edx }
	__asm { L_00a56e8d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a56eb0
extern "C" __declspec(naked) void asm_00a56eb0()
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
	__asm { je L_00a56eeb }
	__asm { mov dword ptr [edx], 0xeab6d0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a56eed }
	__asm { L_00a56eeb: }
	__asm { xor edx, edx }
	__asm { L_00a56eed: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a56f10
extern "C" __declspec(naked) void asm_00a56f10()
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
	__asm { je L_00a56f4b }
	__asm { mov dword ptr [edx], 0xeab720 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a56f4d }
	__asm { L_00a56f4b: }
	__asm { xor edx, edx }
	__asm { L_00a56f4d: }
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

extern "C" void fn_0041ed90();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00a57330
extern "C" __declspec(naked) void asm_00a57330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00a57365 }
	__asm { add edi, 0x1c }
	__asm { je L_00a57365 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0041ed90 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00a57365 }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { sete al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a57365: }
	__asm { xor edi, edi }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { sete al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a57ac0
extern "C" __declspec(naked) void asm_00a57ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test ecx, ecx }
	__asm { je L_00a57acc }
	__asm { lea edx, [ecx + 0x28] }
	__asm { jmp L_00a57ace }
	__asm { L_00a57acc: }
	__asm { xor edx, edx }
	__asm { L_00a57ace: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a57aeb }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea esi, [eax + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [eax + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a57aeb: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { xor esi, esi }
	__asm { push esi }
	__asm { call dword ptr [eax + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00a5b520();
// FUNCTION: ROBLOXSTUDIO 0x00a58d90
extern "C" __declspec(naked) void asm_00a58d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a5b520 }
	__asm { mov edi, eax }
	__asm { lea esi, [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00a58dc4 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, edi }
	__asm { L_00a58dc4: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a62c70
extern "C" __declspec(naked) void asm_00a62c70()
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
	__asm { je L_00a62cab }
	__asm { mov dword ptr [edx], 0xeac790 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a62cad }
	__asm { L_00a62cab: }
	__asm { xor edx, edx }
	__asm { L_00a62cad: }
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

extern "C" void fn_004109a0();
extern "C" void fn_007d5470();
// FUNCTION: ROBLOXSTUDIO 0x00a63480
extern "C" __declspec(naked) void asm_00a63480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a63492 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a63494 }
	__asm { L_00a63492: }
	__asm { xor edx, edx }
	__asm { L_00a63494: }
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [edx + ecx] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { call dword ptr [ebp - 8] }
	__asm { fstp dword ptr [ebp + 8] }
	__asm { call fn_007d5470 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_004109a0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a641e0
extern "C" __declspec(naked) void asm_00a641e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { test eax, eax }
	__asm { je L_00a641f6 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a641f6: }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { pop esi }
	__asm { je L_00a6422b }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a6422b: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a6de70
extern "C" __declspec(naked) void asm_00a6de70()
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
	__asm { je L_00a6deab }
	__asm { mov dword ptr [edx], 0xead8c4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00a6dead }
	__asm { L_00a6deab: }
	__asm { xor edx, edx }
	__asm { L_00a6dead: }
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
