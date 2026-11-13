// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_0045be50();
extern "C" void fn_006a5f50();
extern "C" void fn_0079a4d0();
// FUNCTION: ROBLOXSTUDIO 0x00921d60
extern "C" __declspec(naked) void asm_00921d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41b69 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0079a4d0 }
	__asm { cmp byte ptr [edi + 4], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { je L_00921dc1 }
	__asm { sub esp, 8 }
	__asm { lea ecx, [edi + 8] }
	__asm { push esp }
	__asm { call fn_0045be50 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_006a5f50 }
	__asm { L_00921dc1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007de8e0();
extern "C" void fn_00920ff0();
extern "C" void fn_00b0a6e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00922020
extern "C" __declspec(naked) void asm_00922020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xc0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0092206e }
	__asm { mov ecx, eax }
	__asm { call fn_00b0a6e0 }
	__asm { mov esi, eax }
	__asm { jmp L_00922070 }
	__asm { L_0092206e: }
	__asm { xor esi, esi }
	__asm { L_00922070: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00920ff0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_009220a1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_009220a1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_009220a1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e7f778[];
extern "C" char g_012ff660[];
extern "C" char g_012ff664[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00922160
extern "C" __declspec(naked) void asm_00922160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3525e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e7f778], 0 }
	__asm { jne L_00922194 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00922194: }
	__asm { push 0x921d10 }
	__asm { push 0x12ff658 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012ff664] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009221de }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ff664], eax }
	__asm { push 0xe7f778 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012ff660], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009221de: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012ff660] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4ab0[];
extern "C" char g_0131e13c[];
extern "C" void fn_00486e40();
extern "C" void fn_007cbf10();
extern "C" void fn_00922940();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00922690
extern "C" __declspec(naked) void asm_00922690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd352d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00922940 }
	__asm { mov dword ptr [esi], 0xe7ded4 }
	__asm { mov dword ptr [esi + 4], 0xe7df8c }
	__asm { mov dword ptr [esi + 0x18], 0xe7df94 }
	__asm { mov dword ptr [esi + 0x1c], 0xe7dfa0 }
	__asm { mov dword ptr [esi + 0x64], 0xe7dfb0 }
	__asm { mov eax, dword ptr [g_0131e13c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0092272e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e13c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe7db94 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00486e40 }
	__asm { push eax }
	__asm { mov ecx, 0x131e140 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddcd20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0092272e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131e140 }
	__asm { inc dword ptr [g_012e4ab0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131e13c[];
extern "C" void fn_00486e40();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00922820
extern "C" __declspec(naked) void asm_00922820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd352ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131e13c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00922895 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e13c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe7db94 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00486e40 }
	__asm { push eax }
	__asm { mov ecx, 0x131e140 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddcd20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00922895: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x131e140 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_0086b050();
extern "C" void fn_0092a0b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00922ec0
extern "C" __declspec(naked) void asm_00922ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd354a1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x114] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_0086b050 }
	__asm { cmp dword ptr [esi + 0x10c], 0x10 }
	__asm { jb L_00922f08 }
	__asm { push dword ptr [esi + 0xf8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00922f08: }
	__asm { mov dword ptr [esi + 0x10c], 0xf }
	__asm { mov dword ptr [esi + 0x108], 0 }
	__asm { lea ecx, [esi + 0x7c] }
	__asm { mov byte ptr [esi + 0xf8], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0086b050 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0092a0b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004226b0();
extern "C" void fn_006b8a90();
extern "C" void fn_006b8aae();
extern "C" void fn_006b9da0();
extern "C" void fn_006b9e50();
// FUNCTION: ROBLOXSTUDIO 0x00923320
extern "C" __declspec(naked) void asm_00923320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd355a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp byte ptr [esi + 4], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_0092337f }
	__asm { push esi }
	__asm { push 0xe7dbc0 }
	__asm { push 1 }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { cmp byte ptr [esi + 4], 0 }
	__asm { je L_0092337f }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_006b9da0 }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0xe7dbe0 }
	__asm { push 1 }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_0092337f: }
	__asm { mov ecx, esi }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_009233a0 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_009233a0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b8aae();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9cb0();
extern "C" void fn_006b9da0();
extern "C" void fn_006b9e50();
// FUNCTION: ROBLOXSTUDIO 0x00923460
extern "C" __declspec(naked) void asm_00923460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_006b9cb0 }
	__asm { test al, al }
	__asm { je L_009234bf }
	__asm { cmp byte ptr [esi + 4], 0 }
	__asm { je L_00923497 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_006b9da0 }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0xe7dbe0 }
	__asm { push 1 }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00923497: }
	__asm { mov ecx, esi }
	__asm { call fn_006b9e50 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006b9b80 }
	__asm { cmp byte ptr [esi + 4], 0 }
	__asm { je L_009234bf }
	__asm { push 0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push 0xe7dba0 }
	__asm { push 1 }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_009234bf: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004833f0();
extern "C" void fn_007cd560();
extern "C" void fn_00922320();
extern "C" void fn_009d9c50();
// FUNCTION: ROBLOXSTUDIO 0x00923760
extern "C" __declspec(naked) void asm_00923760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_009237b4 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_009d9c50 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009237b3 }
	__asm { mov ecx, esi }
	__asm { call fn_00922320 }
	__asm { test eax, eax }
	__asm { je L_009237b3 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_009237b3 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_004833f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_009237b3 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_009237b3 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + 0xb4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp eax }
	__asm { L_009237b3: }
	__asm { pop edi }
	__asm { L_009237b4: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
extern "C" void fn_006da0e0();
extern "C" void fn_00892440();
extern "C" void fn_009f8cf0();
// FUNCTION: ROBLOXSTUDIO 0x00924690
extern "C" __declspec(naked) void asm_00924690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x64 }
	__asm { push esi }
	__asm { push edi }
	__asm { add ecx, 0xfffffe4c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009f8cf0 }
	__asm { test eax, eax }
	__asm { je L_009246d7 }
	__asm { mov ecx, eax }
	__asm { call fn_00892440 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea edi, [ebp - 0x34] }
	__asm { jmp L_009246e1 }
	__asm { L_009246d7: }
	__asm { lea ecx, [ebp - 0x64] }
	__asm { call fn_006da0e0 }
	__asm { mov edi, eax }
	__asm { L_009246e1: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00925b40();
extern "C" void fn_00c2bee0();
// FUNCTION: ROBLOXSTUDIO 0x00925360
extern "C" __declspec(naked) void asm_00925360()
{
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test edi, edi }
	__asm { je L_009253be }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0092537c }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_0092537e }
	__asm { call fn_0043ee40 }
	__asm { jmp L_0092537e }
	__asm { L_0092537c: }
	__asm { mov eax, edi }
	__asm { L_0092537e: }
	__asm { test eax, eax }
	__asm { je L_009253be }
	__asm { push ebx }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_009253bd }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_009253bd }
	__asm { lea eax, [ebx - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_009253bd }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_009253bd }
	__asm { mov ecx, edi }
	__asm { call fn_00925b40 }
	__asm { L_009253bd: }
	__asm { pop ebx }
	__asm { L_009253be: }
	__asm { pop edi }
	__asm { ret 4 }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009273c0
extern "C" __declspec(naked) void asm_009273c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35790 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00927418 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe8041c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0092741a }
	__asm { L_00927418: }
	__asm { xor eax, eax }
	__asm { L_0092741a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012e4d44[];
extern "C" char g_012e673c[];
extern "C" void fn_00486e40();
extern "C" void fn_007cbf10();
extern "C" void fn_00922940();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009279d0
extern "C" __declspec(naked) void asm_009279d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd357e6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00922940 }
	__asm { mov dword ptr [esi], 0xe7f944 }
	__asm { mov dword ptr [esi + 4], 0xe7f9fc }
	__asm { mov dword ptr [esi + 0x18], 0xe7fa04 }
	__asm { mov dword ptr [esi + 0x1c], 0xe7fa10 }
	__asm { mov dword ptr [esi + 0x64], 0xe7fa20 }
	__asm { mov eax, dword ptr [g_012e673c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00927a6e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e673c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe7f790 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00486e40 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6610 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7960 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00927a6e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e6610 }
	__asm { inc dword ptr [g_012e4d44] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4b74[];
extern "C" char g_012e699c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00927a90
extern "C" __declspec(naked) void asm_00927a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35806 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe7fd6c }
	__asm { mov dword ptr [esi + 4], 0xe7fde4 }
	__asm { mov dword ptr [esi + 0x18], 0xe7fdec }
	__asm { mov dword ptr [esi + 0x1c], 0xe7fdf8 }
	__asm { mov eax, dword ptr [g_012e699c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00927b29 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e699c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003754 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6870 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00927b29: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e6870 }
	__asm { inc dword ptr [g_012e4b74] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e673c[];
extern "C" void fn_00486e40();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00927e80
extern "C" __declspec(naked) void asm_00927e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23e6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e673c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00927ef5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e673c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe7f790 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00486e40 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6610 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7960 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00927ef5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12e6610 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_01003754[];
extern "C" void fn_004038a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_00927a90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00928310
extern "C" __declspec(naked) void asm_00928310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35910 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00927a90 }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [esi], 0xe7fe0c }
	__asm { mov dword ptr [esi + 4], 0xe7fe84 }
	__asm { mov dword ptr [esi + 0x18], 0xe7fe8c }
	__asm { mov dword ptr [esi + 0x1c], 0xe7fe98 }
	__asm { cmp byte ptr [g_01003754], cl }
	__asm { mov eax, 0xb }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0x1003754 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_009283a8 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009283a8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9630[];
extern "C" char g_012f9634[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00928a80
extern "C" __declspec(naked) void asm_00928a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd25fae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8352c0 }
	__asm { push 0x12f9480 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f9634] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00928ae2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f9634], eax }
	__asm { push 0xe7f76c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f9630], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00928ae2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f9630] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00814630();
extern "C" void fn_00824750();
extern "C" void fn_00929aa0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00929910
extern "C" __declspec(naked) void asm_00929910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp eax, dword ptr [edi + 0x194] }
	__asm { lea esi, [edi + 0x194] }
	__asm { je L_00929985 }
	__asm { push 0x12ff694 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007b4f50 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00929985 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00824750 }
	__asm { mov ecx, eax }
	__asm { call fn_00814630 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00929aa0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00929985 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00929985: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012ff848[];
extern "C" char g_012ff84c[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00929cc0
extern "C" __declspec(naked) void asm_00929cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd35b5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012ff84c] }
	__asm { test al, 1 }
	__asm { jne L_00929d02 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ff84c], eax }
	__asm { push 0xe80444 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012ff848], eax }
	__asm { L_00929d02: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4d74[];
extern "C" char g_0131b4c0[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00929d10
extern "C" __declspec(naked) void asm_00929d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35ab6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe80454 }
	__asm { mov dword ptr [esi + 4], 0xe804cc }
	__asm { mov dword ptr [esi + 0x18], 0xe804d4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe804e0 }
	__asm { mov eax, dword ptr [g_0131b4c0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00929da9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b4c0], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe80434 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131b4c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddcd50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00929da9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131b4c8 }
	__asm { inc dword ptr [g_012e4d74] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4d84[];
extern "C" char g_012e5434[];
extern "C" void fn_0048b090();
extern "C" void fn_007cbf10();
extern "C" void fn_00929e70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00929dd0
extern "C" __declspec(naked) void asm_00929dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35ad6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00929e70 }
	__asm { mov eax, dword ptr [g_012e5434] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00929e4c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5434], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe8043c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5308 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde78f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00929e4c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e5308 }
	__asm { inc dword ptr [g_012e4d84] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e8043c[];
extern "C" void fn_004038a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_00929dd0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00929f60
extern "C" __declspec(naked) void asm_00929f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd55650 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00929dd0 }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [esi], 0xe805bc }
	__asm { mov dword ptr [esi + 4], 0xe80658 }
	__asm { mov dword ptr [esi + 0x18], 0xe80660 }
	__asm { mov dword ptr [esi + 0x1c], 0xe8066c }
	__asm { mov dword ptr [esi + 0x64], 0xe8067c }
	__asm { cmp byte ptr [g_00e8043c], cl }
	__asm { mov eax, 7 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xe8043c }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00929fff }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00929fff: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_007b5bb0();
extern "C" void fn_00929e70();
extern "C" void fn_0092ab90();
// FUNCTION: ROBLOXSTUDIO 0x0092a010
extern "C" __declspec(naked) void asm_0092a010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35b23 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00929e70 }
	__asm { lea edi, [esi + 0x78] }
	__asm { mov dword ptr [esi], 0xe806d4 }
	__asm { mov dword ptr [esi + 4], 0xe80770 }
	__asm { mov dword ptr [esi + 0x18], 0xe80778 }
	__asm { mov dword ptr [esi + 0x1c], 0xe80784 }
	__asm { mov dword ptr [esi + 0x64], 0xe80794 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0092ab90 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_007b5bb0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp edi, eax }
	__asm { je L_0092a09a }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00403540 }
	__asm { L_0092a09a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012ff848[];
extern "C" char g_012ff84c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0092a520
extern "C" __declspec(naked) void asm_0092a520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd35b5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x929cc0 }
	__asm { push 0x12ff840 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012ff84c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0092a582 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ff84c], eax }
	__asm { push 0xe80444 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012ff848], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0092a582: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012ff848] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0092b9c0
extern "C" __declspec(naked) void asm_0092b9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35bc0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0092ba18 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe81954 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0092ba1a }
	__asm { L_0092ba18: }
	__asm { xor eax, eax }
	__asm { L_0092ba1a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0092ba50
extern "C" __declspec(naked) void asm_0092ba50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35bd0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0092baa8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe819b4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0092baaa }
	__asm { L_0092baa8: }
	__asm { xor eax, eax }
	__asm { L_0092baaa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0092bae0
extern "C" __declspec(naked) void asm_0092bae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35be0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0092bb38 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe8199c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0092bb3a }
	__asm { L_0092bb38: }
	__asm { xor eax, eax }
	__asm { L_0092bb3a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0092bb70
extern "C" __declspec(naked) void asm_0092bb70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35bf0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0092bbc8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe81984 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0092bbca }
	__asm { L_0092bbc8: }
	__asm { xor eax, eax }
	__asm { L_0092bbca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0092bc00
extern "C" __declspec(naked) void asm_0092bc00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35c00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0092bc58 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe8196c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0092bc5a }
	__asm { L_0092bc58: }
	__asm { xor eax, eax }
	__asm { L_0092bc5a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0092bc90
extern "C" __declspec(naked) void asm_0092bc90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35c10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0092bce8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe819cc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0092bcea }
	__asm { L_0092bce8: }
	__asm { xor eax, eax }
	__asm { L_0092bcea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0092bd20
extern "C" __declspec(naked) void asm_0092bd20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35c20 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0092bd78 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe819e4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0092bd7a }
	__asm { L_0092bd78: }
	__asm { xor eax, eax }
	__asm { L_0092bd7a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0092c5c0();
// FUNCTION: ROBLOXSTUDIO 0x0092c700
extern "C" __declspec(naked) void asm_0092c700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { je L_0092c747 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { L_0092c713: }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_0092c5c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x5c] }
	__asm { test eax, eax }
	__asm { je L_0092c73b }
	__asm { add eax, -0x5c }
	__asm { jmp L_0092c73d }
	__asm { L_0092c73b: }
	__asm { xor eax, eax }
	__asm { L_0092c73d: }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_0092c713 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_0092c747: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0092c550();
extern "C" void fn_0092d980();
// FUNCTION: ROBLOXSTUDIO 0x0092d750
extern "C" __declspec(naked) void asm_0092d750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0092d76d }
	__asm { mov edx, dword ptr [esi] }
	__asm { jmp L_0092d76f }
	__asm { L_0092d76d: }
	__asm { mov edx, esi }
	__asm { L_0092d76f: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, edx }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0092d77d }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_0092d77f }
	__asm { L_0092d77d: }
	__asm { mov ecx, esi }
	__asm { L_0092d77f: }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_0092c550 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push esi }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { call fn_0092d980 }
	__asm { add esp, 0x20 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0092d7c0();
// FUNCTION: ROBLOXSTUDIO 0x0092d980
extern "C" __declspec(naked) void asm_0092d980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x24] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { je L_0092d9cd }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push esi }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { call fn_0092d7c0 }
	__asm { add esp, 0x24 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0092d9cd: }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040c260();
extern "C" void fn_00495960();
// FUNCTION: ROBLOXSTUDIO 0x0092e9f0
extern "C" __declspec(naked) void asm_0092e9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00495960 }
	__asm { fldz }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fstp qword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi + 0x84], 0xf }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov byte ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { mov dword ptr [esi], 0xe80a94 }
	__asm { mov dword ptr [esi + 4], 0xe80b10 }
	__asm { mov dword ptr [esi + 0x18], 0xe80b18 }
	__asm { mov dword ptr [esi + 0x1c], 0xe80b24 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [ebp - 8], 0x496100 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0092ea89 }
	__asm { lea ecx, [esi + 0x90] }
	__asm { test ecx, ecx }
	__asm { je L_0092ea72 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_0092ea72: }
	__asm { mov eax, 0xe81918 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0092ea89: }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00495960();
// FUNCTION: ROBLOXSTUDIO 0x0092eaa0
extern "C" __declspec(naked) void asm_0092eaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00495960 }
	__asm { fldz }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fstp qword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi + 0x84], 0xf }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov byte ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { mov dword ptr [esi], 0xe80bd4 }
	__asm { mov dword ptr [esi + 4], 0xe80c50 }
	__asm { mov dword ptr [esi + 0x18], 0xe80c58 }
	__asm { mov dword ptr [esi + 0x1c], 0xe80c64 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [ebp - 8], 0x496100 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0092eb39 }
	__asm { lea ecx, [esi + 0x90] }
	__asm { test ecx, ecx }
	__asm { je L_0092eb22 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_0092eb22: }
	__asm { mov eax, 0xe81920 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0092eb39: }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0083e660();
extern "C" void fn_0092f240();
// FUNCTION: ROBLOXSTUDIO 0x0092fb10
extern "C" __declspec(naked) void asm_0092fb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_0083e660 }
	__asm { fstp qword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { test ecx, ecx }
	__asm { je L_0092fb3b }
	__asm { add ecx, -0x1c }
	__asm { jmp L_0092fb3d }
	__asm { L_0092fb3b: }
	__asm { xor ecx, ecx }
	__asm { L_0092fb3d: }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push ecx }
	__asm { call fn_0092f240 }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_010381d0[];
extern "C" void fn_00403540();
extern "C" void fn_006b9020();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0092fc40
extern "C" __declspec(naked) void asm_0092fc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_006b9020 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { fild dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jns L_0092fc86 }
	__asm { fadd qword ptr [g_010381d0] }
	__asm { L_0092fc86: }
	__asm { lea ecx, [edi + 0x70] }
	__asm { fstp qword ptr [edi + 0x68] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { cmp ecx, eax }
	__asm { je L_0092fc9c }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_0092fc9c: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_0092fcad }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0092fcad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00701ad0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0092fdc0
extern "C" __declspec(naked) void asm_0092fdc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00701ad0 }
	__asm { add esp, 0xc }
	__asm { fld qword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 0x70 }
	__asm { fstp qword ptr [ecx - 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, eax }
	__asm { je L_0092fe0f }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_0092fe0f: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_0092fe20 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0092fe20: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013000d8[];
extern "C" char g_013000dc[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0092fe30
extern "C" __declspec(naked) void asm_0092fe30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3600e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x92ccc0 }
	__asm { push 0x13000b8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013000dc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0092fe92 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013000dc], eax }
	__asm { push 0xe809ec }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013000d8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0092fe92: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013000d8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013000e0[];
extern "C" char g_013000e4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0092feb0
extern "C" __declspec(naked) void asm_0092feb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd35dae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x92cc70 }
	__asm { push 0x13000c0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013000e4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0092ff12 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013000e4], eax }
	__asm { push 0xe809f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013000e0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0092ff12: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013000e0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013000e8[];
extern "C" char g_013000ec[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0092ff30
extern "C" __declspec(naked) void asm_0092ff30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3602e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x92cc20 }
	__asm { push 0x13000c8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013000ec] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0092ff92 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013000ec], eax }
	__asm { push 0xe809dc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013000e8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0092ff92: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013000e8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013000d0[];
extern "C" char g_013000d4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0092ffb0
extern "C" __declspec(naked) void asm_0092ffb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd35dce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x92cd10 }
	__asm { push 0x13000b0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013000d4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00930012 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013000d4], eax }
	__asm { push 0xe809e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013000d0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00930012: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013000d0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x009306f0
extern "C" __declspec(naked) void asm_009306f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00930738 }
	__asm { cmp eax, 1 }
	__asm { je L_00930738 }
	__asm { cmp eax, 2 }
	__asm { je L_0093074c }
	__asm { cmp eax, 3 }
	__asm { jne L_00930727 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x1222b68 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00930727: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1222b68 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00930738: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_0093074c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_0093074c: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00930750
extern "C" __declspec(naked) void asm_00930750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00930798 }
	__asm { cmp eax, 1 }
	__asm { je L_00930798 }
	__asm { cmp eax, 2 }
	__asm { je L_009307ac }
	__asm { cmp eax, 3 }
	__asm { jne L_00930787 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x1222bc8 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00930787: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1222bc8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00930798: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_009307ac }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_009307ac: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c480[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00931030
extern "C" __declspec(naked) void asm_00931030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd361be }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131c480] }
	__asm { test al, 1 }
	__asm { jne L_0093109b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c480], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1015c18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131c488 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddd860 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0093109b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" char g_010381d0[];
extern "C" void fn_00410540();
extern "C" void fn_0092fdc0();
// FUNCTION: ROBLOXSTUDIO 0x00932800
extern "C" __declspec(naked) void asm_00932800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0f5a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 0x88] }
	__asm { test edx, edx }
	__asm { jne L_00932853 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x20], 0xe19198 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_00932853: }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 0x90] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { fild dword ptr [ebp - 0x14] }
	__asm { push eax }
	__asm { push 0x1012c70 }
	__asm { test eax, eax }
	__asm { jns L_0093287b }
	__asm { fadd qword ptr [g_010381d0] }
	__asm { L_0093287b: }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push esi }
	__asm { call fn_0092fdc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
extern "C" void fn_0092fdc0();
// FUNCTION: ROBLOXSTUDIO 0x009328a0
extern "C" __declspec(naked) void asm_009328a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd40368 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 0x88] }
	__asm { test edx, edx }
	__asm { jne L_009328f3 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe19198 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_009328f3: }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 0x90] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { push ecx }
	__asm { fst qword ptr [esp] }
	__asm { push 0xe60768 }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push esi }
	__asm { call fn_0092fdc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00934840();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00934230
extern "C" __declspec(naked) void asm_00934230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd36618 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x28 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea ecx, [edx + 0xc] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_00934840 }
	__asm { cmp dword ptr [ebp + 0x28], 0x10 }
	__asm { jb L_009342a8 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009342a8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_009349c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00934360
extern "C" __declspec(naked) void asm_00934360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd365c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009343b8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe81e10 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_009343ba }
	__asm { L_009343b8: }
	__asm { xor eax, eax }
	__asm { L_009343ba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009349c0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00934490
extern "C" __declspec(naked) void asm_00934490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd365d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009344e8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe81e28 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_009344ea }
	__asm { L_009344e8: }
	__asm { xor eax, eax }
	__asm { L_009344ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0093450e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0093450e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_009349e0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009345c0
extern "C" __declspec(naked) void asm_009345c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd365e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00934618 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe81df8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0093461a }
	__asm { L_00934618: }
	__asm { xor eax, eax }
	__asm { L_0093461a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009349e0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00934650
extern "C" __declspec(naked) void asm_00934650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd36603 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_009346bc }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { lea ecx, [esi + 0xc] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { jmp L_009346be }
	__asm { L_009346bc: }
	__asm { xor esi, esi }
	__asm { L_009346be: }
	__asm { cmp dword ptr [ebp + 0x28], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { jb L_009346d5 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009346d5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_00403540();
extern "C" void fn_009346f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009347a0
extern "C" __declspec(naked) void asm_009347a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd36618 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { add ecx, 0xc }
	__asm { mov dword ptr [ecx - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_009346f0 }
	__asm { cmp dword ptr [ebp + 0x28], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_00934820 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00934820: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00935550();
// FUNCTION: ROBLOXSTUDIO 0x00934da0
extern "C" __declspec(naked) void asm_00934da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cfb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00935550 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00934e12 }
	__asm { add esi, 5 }
	__asm { je L_00934de2 }
	__asm { add esi, -5 }
	__asm { jmp L_00934de4 }
	__asm { L_00934de2: }
	__asm { xor esi, esi }
	__asm { L_00934de4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00934e11 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00934e11 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00934e11: }
	__asm { pop edi }
	__asm { L_00934e12: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5f10[];
extern "C" void fn_004115f0();
extern "C" void fn_00937350();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00936d20
extern "C" __declspec(naked) void asm_00936d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd24aae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x821660 }
	__asm { push 0x12f3028 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5f10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00936d81 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5f10], eax }
	__asm { mov ecx, 0x12f5e88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00937350 }
	__asm { push 0xde8210 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00936d81: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f5e88 }
	__asm { push 3 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00936da8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00936da8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4c1c[];
extern "C" char g_0131ea00[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00937290
extern "C" __declspec(naked) void asm_00937290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd36d16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe81e54 }
	__asm { mov dword ptr [esi + 4], 0xe81ecc }
	__asm { mov dword ptr [esi + 0x18], 0xe81ed4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe81ee0 }
	__asm { mov eax, dword ptr [g_0131ea00] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00937329 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ea00], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe81e40 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131ea08 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddd600 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00937329: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131ea08 }
	__asm { inc dword ptr [g_012e4c1c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00937860
extern "C" __declspec(naked) void asm_00937860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53a38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009378aa }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_009378a1 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009378a1: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009378aa: }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { je L_009378d2 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009378d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_0048e3f0();
extern "C" void fn_007d5550();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00937a60
extern "C" __declspec(naked) void asm_00937a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5550 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_0048e3f0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00937ad8 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00937ad8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5f10[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_00937350();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00937d80
extern "C" __declspec(naked) void asm_00937d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24aae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00937da4 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00937da4: }
	__asm { push 0x821660 }
	__asm { push 0x12f3028 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5f10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00937dec }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5f10], eax }
	__asm { mov ecx, 0x12f5e88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00937350 }
	__asm { push 0xde8210 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00937dec: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12f5e88 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0078a6b0();
extern "C" void fn_00937a60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00938170
extern "C" __declspec(naked) void asm_00938170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0078a6b0 }
	__asm { add esp, 0x10 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009381b8 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_009381ba }
	__asm { L_009381b8: }
	__asm { xor ecx, ecx }
	__asm { L_009381ba: }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push ecx }
	__asm { call fn_00937a60 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_009381e1 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009381e1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012dd28c[];
extern "C" char g_012e4e60[];
extern "C" void fn_004118e0();
extern "C" void fn_007af830();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00939530
extern "C" __declspec(naked) void asm_00939530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37016 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af830 }
	__asm { mov dword ptr [esi], 0xe82264 }
	__asm { mov dword ptr [esi + 4], 0xe822dc }
	__asm { mov dword ptr [esi + 0x18], 0xe822e4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe822f0 }
	__asm { mov eax, dword ptr [g_012dd28c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009395ca }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dd28c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe8223c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12dd160 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddff60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009395ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12dd160 }
	__asm { inc dword ptr [g_012e4e60] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012dd02c[];
extern "C" char g_012e4e64[];
extern "C" void fn_00656b90();
extern "C" void fn_007cbf10();
extern "C" void fn_00939a00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009395f0
extern "C" __declspec(naked) void asm_009395f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37036 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00939a00 }
	__asm { mov dword ptr [esi], 0xe824fc }
	__asm { mov dword ptr [esi + 4], 0xe82574 }
	__asm { mov dword ptr [esi + 0x18], 0xe8257c }
	__asm { mov dword ptr [esi + 0x1c], 0xe82588 }
	__asm { mov dword ptr [esi + 0x64], 0xe82598 }
	__asm { mov eax, dword ptr [g_012dd02c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0093968f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dd02c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe82244 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00656b90 }
	__asm { push eax }
	__asm { mov ecx, 0x12dcf00 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddff70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0093968f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12dcf00 }
	__asm { inc dword ptr [g_012e4e64] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012dd15c[];
extern "C" char g_012e4e68[];
extern "C" void fn_00656b90();
extern "C" void fn_007cbf10();
extern "C" void fn_00939a00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009396b0
extern "C" __declspec(naked) void asm_009396b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37056 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00939a00 }
	__asm { mov dword ptr [esi], 0xe82684 }
	__asm { mov dword ptr [esi + 4], 0xe826fc }
	__asm { mov dword ptr [esi + 0x18], 0xe82704 }
	__asm { mov dword ptr [esi + 0x1c], 0xe82710 }
	__asm { mov dword ptr [esi + 0x64], 0xe82720 }
	__asm { mov eax, dword ptr [g_012dd15c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0093974f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dd15c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe82250 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00656b90 }
	__asm { push eax }
	__asm { mov ecx, 0x12dd030 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddff80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0093974f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12dd030 }
	__asm { inc dword ptr [g_012e4e68] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01300474[];
extern "C" char g_01300478[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00939770
extern "C" __declspec(naked) void asm_00939770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3708e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01300478] }
	__asm { test al, 1 }
	__asm { jne L_009397b2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01300478], eax }
	__asm { push 0xe82234 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01300474], eax }
	__asm { L_009397b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00b65cd0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00939bf0
extern "C" __declspec(naked) void asm_00939bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x64] }
	__asm { mov dword ptr [esi], 0xe82454 }
	__asm { mov dword ptr [esi + 4], 0xe824cc }
	__asm { mov dword ptr [esi + 0x18], 0xe824d4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe824e0 }
	__asm { mov dword ptr [ecx], 0xe824f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b65cd0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00939c5c }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00939c5c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_0083d710();
// FUNCTION: ROBLOXSTUDIO 0x0093aaa0
extern "C" __declspec(naked) void asm_0093aaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_0093aaf1 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0093aac0 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_0093aac2 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_0093aac2 }
	__asm { L_0093aac0: }
	__asm { mov eax, ecx }
	__asm { L_0093aac2: }
	__asm { test eax, eax }
	__asm { je L_0093aaf1 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0093aaf1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0093aaf1 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0093aaf1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_0083d710 }
	__asm { L_0093aaf1: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130047c[];
extern "C" void fn_008adfa0();
extern "C" void fn_0093a810();
extern "C" void fn_00b0d940();
// FUNCTION: ROBLOXSTUDIO 0x0093ae40
extern "C" __declspec(naked) void asm_0093ae40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd371e6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xe82910 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0093a810 }
	__asm { mov dword ptr [esi], 0xe82a24 }
	__asm { mov dword ptr [esi + 4], 0xe82ac0 }
	__asm { mov dword ptr [esi + 0x18], 0xe82ac8 }
	__asm { mov dword ptr [esi + 0x1c], 0xe82ad4 }
	__asm { mov dword ptr [esi + 0x64], 0xe82ae4 }
	__asm { mov dword ptr [esi + 0x68], 0xe82aec }
	__asm { mov word ptr [esi + 0xdc], 0x101 }
	__asm { lea eax, [esi + 0xe0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], 0x44480000 }
	__asm { mov dword ptr [eax + 4], 0x44160000 }
	__asm { mov dword ptr [esi + 0xe8], 5 }
	__asm { mov dword ptr [esi + 0xec], 0 }
	__asm { mov dword ptr [esi + 0xf0], 0 }
	__asm { mov dword ptr [esi + 0xf4], 0 }
	__asm { inc dword ptr [g_0130047c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008adfa0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov dword ptr [ecx], 0xe82924 }
	__asm { mov dword ptr [ecx + 4], 0xe829c0 }
	__asm { mov dword ptr [ecx + 0x18], 0xe829c8 }
	__asm { mov dword ptr [ecx + 0x1c], 0xe829d4 }
	__asm { mov dword ptr [ecx + 0x64], 0xe829e4 }
	__asm { mov dword ptr [ecx + 0x68], 0xe829ec }
	__asm { jmp fn_00b0d940 }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0093cac0
extern "C" __declspec(naked) void asm_0093cac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd372e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0093cb18 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe82ed0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0093cb1a }
	__asm { L_0093cb18: }
	__asm { xor eax, eax }
	__asm { L_0093cb1a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_013005b4[];
extern "C" char g_013005b8[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0093cb50
extern "C" __declspec(naked) void asm_0093cb50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3731e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013005b8] }
	__asm { test al, 1 }
	__asm { jne L_0093cb92 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013005b8], eax }
	__asm { push 0xe82d50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013005b4], eax }
	__asm { L_0093cb92: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc98e[];
extern "C" void fn_006b8a90();
extern "C" void fn_009332f0();
// FUNCTION: ROBLOXSTUDIO 0x0093cc40
extern "C" __declspec(naked) void asm_0093cc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37303 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009332f0 }
	__asm { mov dword ptr [esi], 0xe82d64 }
	__asm { mov dword ptr [esi + 4], 0xe82dc0 }
	__asm { mov dword ptr [esi + 0x1c], 0xe82df4 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov al, byte ptr [g_012fc98e] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_0093ccaf }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe82e9c }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0093ccaf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xe82dfc }
	__asm { mov dword ptr [esi + 4], 0xe82e58 }
	__asm { mov dword ptr [esi + 0x1c], 0xe82e8c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc98e[];
extern "C" void fn_006b8a90();
extern "C" void fn_009332f0();
// FUNCTION: ROBLOXSTUDIO 0x0093cce0
extern "C" __declspec(naked) void asm_0093cce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37303 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009332f0 }
	__asm { mov dword ptr [esi], 0xe82d64 }
	__asm { mov dword ptr [esi + 4], 0xe82dc0 }
	__asm { mov dword ptr [esi + 0x1c], 0xe82df4 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov al, byte ptr [g_012fc98e] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_0093cd4f }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe82e9c }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0093cd4f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_0081d970();
// FUNCTION: ROBLOXSTUDIO 0x0093cd70
extern "C" __declspec(naked) void asm_0093cd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cfb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea esi, [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0081d970 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0093cde5 }
	__asm { add esi, 5 }
	__asm { je L_0093cdb5 }
	__asm { add esi, -5 }
	__asm { jmp L_0093cdb7 }
	__asm { L_0093cdb5: }
	__asm { xor esi, esi }
	__asm { L_0093cdb7: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0093cde4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0093cde4 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0093cde4: }
	__asm { pop edi }
	__asm { L_0093cde5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013005b4[];
extern "C" char g_013005b8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0093cef0
extern "C" __declspec(naked) void asm_0093cef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3731e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x93cb50 }
	__asm { push 0x13005ac }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013005b8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0093cf52 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013005b8], eax }
	__asm { push 0xe82d50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013005b4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0093cf52: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013005b4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01225dd8[];
extern "C" void fn_00790e70();
extern "C" void fn_00827c70();
extern "C" void fn_00933b40();
extern "C" void fn_009925a0();
// FUNCTION: ROBLOXSTUDIO 0x0093d140
extern "C" __declspec(naked) void asm_0093d140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x13000f4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_00933b40 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { je L_0093d1b7 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [g_01225dd8] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x100] }
	__asm { push 0xa }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_00827c70 }
	__asm { add esp, 4 }
	__asm { mov ecx, eax }
	__asm { call fn_009925a0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0093d19c }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0093d19c: }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push eax }
	__asm { call fn_00790e70 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [eax + 0x1b0] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { L_0093d1b7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01225dd4[];
extern "C" void fn_00790e70();
extern "C" void fn_00827c70();
extern "C" void fn_00933b40();
extern "C" void fn_009925a0();
// FUNCTION: ROBLOXSTUDIO 0x0093d1d0
extern "C" __declspec(naked) void asm_0093d1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x13000f4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_00933b40 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { je L_0093d247 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [g_01225dd4] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0xf4] }
	__asm { push 0xa }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_00827c70 }
	__asm { add esp, 4 }
	__asm { mov ecx, eax }
	__asm { call fn_009925a0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0093d22c }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0093d22c: }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push eax }
	__asm { call fn_00790e70 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [eax + 0x1b0] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { L_0093d247: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10098[];
extern "C" char g_00e1009c[];
extern "C" char g_013005bc[];
extern "C" char g_013005c0[];
extern "C" void fn_004645b0();
extern "C" void fn_006c53e0();
// FUNCTION: ROBLOXSTUDIO 0x0093d380
extern "C" __declspec(naked) void asm_0093d380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fldz }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [g_013005c0], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], eax }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { mov byte ptr [esi + 8], al }
	__asm { fstp qword ptr [esi + 0x10] }
	__asm { jne L_0093d3b1 }
	__asm { call fn_004645b0 }
	__asm { cmp byte ptr [eax + 0x77], 0 }
	__asm { jne L_0093d3b1 }
	__asm { xor al, al }
	__asm { jmp L_0093d3b3 }
	__asm { L_0093d3b1: }
	__asm { mov al, 1 }
	__asm { L_0093d3b3: }
	__asm { fldz }
	__asm { mov byte ptr [esi + 0x18], al }
	__asm { mov al, byte ptr [ebp + 0x10] }
	__asm { fstp qword ptr [esi + 0x20] }
	__asm { cmp byte ptr [esi + 0x18], 0 }
	__asm { mov byte ptr [esi + 0x28], al }
	__asm { je L_0093d3fa }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_006c53e0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push dword ptr [g_013005bc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { call dword ptr [g_00e1009c] }
	__asm { push esi }
	__asm { push dword ptr [g_013005bc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { call dword ptr [g_00e10098] }
	__asm { L_0093d3fa: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10098[];
extern "C" char g_013005bc[];
extern "C" void fn_006c53e0();
extern "C" void fn_006c5500();
extern "C" void fn_0093d8e0();
// FUNCTION: ROBLOXSTUDIO 0x0093d4b0
extern "C" __declspec(naked) void asm_0093d4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x18], 0 }
	__asm { je L_0093d519 }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [g_013005bc] }
	__asm { call dword ptr [g_00e10098] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_006c53e0 }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_006c5500 }
	__asm { fld qword ptr [ebp - 8] }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [esi + 0x28], 0 }
	__asm { jne L_0093d4f7 }
	__asm { fsub qword ptr [esi + 0x20] }
	__asm { L_0093d4f7: }
	__asm { movzx eax, byte ptr [esi + 8] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push eax }
	__asm { call fn_0093d8e0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_0093d519 }
	__asm { fld qword ptr [eax + 0x20] }
	__asm { fadd qword ptr [ebp - 8] }
	__asm { fstp qword ptr [eax + 0x20] }
	__asm { L_0093d519: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0093da00
extern "C" __declspec(naked) void asm_0093da00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37330 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0093da58 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe83c18 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0093da5a }
	__asm { L_0093da58: }
	__asm { xor eax, eax }
	__asm { L_0093da5a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0093da90
extern "C" __declspec(naked) void asm_0093da90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37340 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0093dae8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe83c68 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0093daea }
	__asm { L_0093dae8: }
	__asm { xor eax, eax }
	__asm { L_0093daea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0093db20
extern "C" __declspec(naked) void asm_0093db20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37350 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0093db78 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe83c50 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0093db7a }
	__asm { L_0093db78: }
	__asm { xor eax, eax }
	__asm { L_0093db7a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0093dbb0
extern "C" __declspec(naked) void asm_0093dbb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37360 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0093dc08 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe83c38 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0093dc0a }
	__asm { L_0093dc08: }
	__asm { xor eax, eax }
	__asm { L_0093dc0a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0093dc40
extern "C" __declspec(naked) void asm_0093dc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37370 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0093dc98 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe83c80 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0093dc9a }
	__asm { L_0093dc98: }
	__asm { xor eax, eax }
	__asm { L_0093dc9a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x0093dcd0
extern "C" __declspec(naked) void asm_0093dcd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jae L_0093dd05 }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { inc eax }
	__asm { je L_0093dd0f }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_0093dd0f }
	__asm { L_0093dd05: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_0093dd0f: }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr [ecx], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007de8e0();
extern "C" void fn_0093da00();
extern "C" void fn_009408d0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0093ef70
extern "C" __declspec(naked) void asm_0093ef70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x78 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0093efbb }
	__asm { mov ecx, eax }
	__asm { call fn_009408d0 }
	__asm { mov esi, eax }
	__asm { jmp L_0093efbd }
	__asm { L_0093efbb: }
	__asm { xor esi, esi }
	__asm { L_0093efbd: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_0093da00 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0093efee }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0093efee }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_0093efee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_0093da90();
extern "C" void fn_00940960();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0093f000
extern "C" __declspec(naked) void asm_0093f000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x84 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0093f04e }
	__asm { mov ecx, eax }
	__asm { call fn_00940960 }
	__asm { mov esi, eax }
	__asm { jmp L_0093f050 }
	__asm { L_0093f04e: }
	__asm { xor esi, esi }
	__asm { L_0093f050: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_0093da90 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0093f081 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0093f081 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_0093f081: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_0093db20();
extern "C" void fn_00940a00();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0093f0a0
extern "C" __declspec(naked) void asm_0093f0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xa0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0093f0ee }
	__asm { mov ecx, eax }
	__asm { call fn_00940a00 }
	__asm { mov esi, eax }
	__asm { jmp L_0093f0f0 }
	__asm { L_0093f0ee: }
	__asm { xor esi, esi }
	__asm { L_0093f0f0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_0093db20 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0093f121 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0093f121 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_0093f121: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_0093dbb0();
extern "C" void fn_00b1acd0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0093f140
extern "C" __declspec(naked) void asm_0093f140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xc0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0093f18e }
	__asm { mov ecx, eax }
	__asm { call fn_00b1acd0 }
	__asm { mov esi, eax }
	__asm { jmp L_0093f190 }
	__asm { L_0093f18e: }
	__asm { xor esi, esi }
	__asm { L_0093f190: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_0093dbb0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0093f1c1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0093f1c1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_0093f1c1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_0093dc40();
extern "C" void fn_00940b00();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0093f1e0
extern "C" __declspec(naked) void asm_0093f1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x7c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0093f22b }
	__asm { mov ecx, eax }
	__asm { call fn_00940b00 }
	__asm { mov esi, eax }
	__asm { jmp L_0093f22d }
	__asm { L_0093f22b: }
	__asm { xor esi, esi }
	__asm { L_0093f22d: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_0093dc40 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0093f25e }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0093f25e }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_0093f25e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4e28[];
extern "C" char g_012ecd5c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0093fa70
extern "C" __declspec(naked) void asm_0093fa70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37616 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe83074 }
	__asm { mov dword ptr [esi + 4], 0xe830ec }
	__asm { mov dword ptr [esi + 0x18], 0xe830f4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe83100 }
	__asm { mov eax, dword ptr [g_012ecd5c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0093fb09 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ecd5c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe64820 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ecc30 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7640 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0093fb09: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ecc30 }
	__asm { inc dword ptr [g_012e4e28] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4e20[];
extern "C" char g_012ecfbc[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0093fb30
extern "C" __declspec(naked) void asm_0093fb30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37636 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe832f4 }
	__asm { mov dword ptr [esi + 4], 0xe8336c }
	__asm { mov dword ptr [esi + 0x18], 0xe83374 }
	__asm { mov dword ptr [esi + 0x1c], 0xe83380 }
	__asm { mov eax, dword ptr [g_012ecfbc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0093fbc9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ecfbc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x10036e4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ece90 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0093fbc9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ece90 }
	__asm { inc dword ptr [g_012e4e20] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4e1c[];
extern "C" char g_012ed0ec[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0093fbf0
extern "C" __declspec(naked) void asm_0093fbf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37656 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe83434 }
	__asm { mov dword ptr [esi + 4], 0xe834ac }
	__asm { mov dword ptr [esi + 0x18], 0xe834b4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe834c0 }
	__asm { mov eax, dword ptr [g_012ed0ec] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0093fc89 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ed0ec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe70460 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ecfc0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0093fc89: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ecfc0 }
	__asm { inc dword ptr [g_012e4e1c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4e24[];
extern "C" char g_012ece8c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0093fcb0
extern "C" __declspec(naked) void asm_0093fcb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe831b4 }
	__asm { mov dword ptr [esi + 4], 0xe8322c }
	__asm { mov dword ptr [esi + 0x18], 0xe83234 }
	__asm { mov dword ptr [esi + 0x1c], 0xe83240 }
	__asm { mov eax, dword ptr [g_012ece8c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0093fd49 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ece8c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x10348b8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ecd60 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0093fd49: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ecd60 }
	__asm { inc dword ptr [g_012e4e24] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ecd5c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0093fd70
extern "C" __declspec(naked) void asm_0093fd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2390e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ecd5c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0093fde5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ecd5c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe64820 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ecc30 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7640 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0093fde5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12ecc30 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_012ecfbc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0093fe20
extern "C" __declspec(naked) void asm_0093fe20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3768e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ecfbc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0093fe95 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ecfbc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x10036e4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ece90 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0093fe95: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12ece90 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009412b0
extern "C" __declspec(naked) void asm_009412b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { test esi, esi }
	__asm { je L_009412e8 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_009412ce }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009412ce: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009412e8: }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { je L_00941310 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00941310: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00b9ffc0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009413e0
extern "C" __declspec(naked) void asm_009413e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov eax, dword ptr [edi + 0x74] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x74] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b9ffc0 }
	__asm { push dword ptr [edi + 0x74] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00941443 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00941443: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00942570
extern "C" __declspec(naked) void asm_00942570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49f08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x64] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [edx + 0x74] }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_009425dd }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009425dd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00410ef0();
extern "C" void fn_00942900();
extern "C" void fn_00942d80();
extern "C" void fn_00943690();
// FUNCTION: ROBLOXSTUDIO 0x009428a0
extern "C" __declspec(naked) void asm_009428a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_00943690 }
	__asm { test eax, eax }
	__asm { je L_009428c1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x78] }
	__asm { L_009428c1: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00942900 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00942d80 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0078a6b0();
extern "C" void fn_00941c80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009430d0
extern "C" __declspec(naked) void asm_009430d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0078a6b0 }
	__asm { add esp, 0x10 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00943118 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_0094311a }
	__asm { L_00943118: }
	__asm { xor ecx, ecx }
	__asm { L_0094311a: }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push ecx }
	__asm { call fn_00941c80 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_00943141 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00943141: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0078a6b0();
extern "C" void fn_00937b90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00943190
extern "C" __declspec(naked) void asm_00943190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0078a6b0 }
	__asm { add esp, 0x10 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009431d8 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_009431da }
	__asm { L_009431d8: }
	__asm { xor ecx, ecx }
	__asm { L_009431da: }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push ecx }
	__asm { call fn_00937b90 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_00943201 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00943201: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009434c0
extern "C" __declspec(naked) void asm_009434c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x88] }
	__asm { push 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x38] }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00943524 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00943524: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00943540
extern "C" __declspec(naked) void asm_00943540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x88] }
	__asm { push 1 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x38] }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009435a4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009435a4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

// FUNCTION: ROBLOXSTUDIO 0x00943690
extern "C" __declspec(naked) void asm_00943690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x8c] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_009436bc }
	__asm { L_009436a8: }
	__asm { cmp dword ptr [eax + 0x10], edx }
	__asm { jae L_009436b2 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_009436b6 }
	__asm { L_009436b2: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_009436b6: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_009436a8 }
	__asm { L_009436bc: }
	__asm { cmp ecx, esi }
	__asm { je L_009436c8 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp edx, dword ptr [ecx + 0x10] }
	__asm { jae L_009436cb }
	__asm { L_009436c8: }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { L_009436cb: }
	__asm { lea eax, [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, esi }
	__asm { pop esi }
	__asm { je L_009436dc }
	__asm { mov eax, dword ptr [eax + 0x24] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009436dc: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130092c[];
extern "C" char g_01300930[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x009436f0
extern "C" __declspec(naked) void asm_009436f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd37a8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x93ee30 }
	__asm { push 0x130090c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01300930] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00943752 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01300930], eax }
	__asm { push 0xe8305c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130092c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00943752: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130092c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130093c[];
extern "C" char g_01300940[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00943770
extern "C" __declspec(naked) void asm_00943770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd374fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x93ee80 }
	__asm { push 0x130091c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01300940] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009437d2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01300940], eax }
	__asm { push 0xe83058 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130093c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009437d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130093c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01300944[];
extern "C" char g_01300948[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x009437f0
extern "C" __declspec(naked) void asm_009437f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd37aae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x93eed0 }
	__asm { push 0x1300924 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01300948] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00943852 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01300948], eax }
	__asm { push 0xe83060 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01300944], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00943852: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01300944] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01300934[];
extern "C" char g_01300938[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00943870
extern "C" __declspec(naked) void asm_00943870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd37ace }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x93ef20 }
	__asm { push 0x1300914 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01300938] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009438d2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01300938], eax }
	__asm { push 0xe83054 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01300934], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009438d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01300934] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00825140();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00943930
extern "C" __declspec(naked) void asm_00943930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37b01 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x64] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 0x88] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x7c] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [edx + 0x28] }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_0094399a }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0094399a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_004033d0();
extern "C" void fn_00944400();
extern "C" void fn_009448f0();
// FUNCTION: ROBLOXSTUDIO 0x009446f0
extern "C" __declspec(naked) void asm_009446f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x70], 0 }
	__asm { jne L_00944765 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { test bl, bl }
	__asm { je L_00944726 }
	__asm { mov ecx, dword ptr [esi + 0x6c] }
	__asm { call fn_00944400 }
	__asm { jmp L_00944755 }
	__asm { L_00944726: }
	__asm { cmp byte ptr [esi + 0x71], 1 }
	__asm { jne L_00944755 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_009448f0 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x7c] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { L_00944755: }
	__asm { mov ecx, dword ptr [esi + 0x68] }
	__asm { push ebx }
	__asm { push dword ptr [esi + 0x64] }
	__asm { mov byte ptr [esi + 0x71], bl }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop ebx }
	__asm { L_00944765: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00944860
extern "C" __declspec(naked) void asm_00944860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd37bb0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x64] }
	__asm { lea esi, [ebp + 0x20] }
	__asm { mov ecx, dword ptr [eax + 0x88] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea esi, [ebp + 8] }
	__asm { push esi }
	__asm { push dword ptr [edx + 0x7c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [eax + 0x24] }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009448ac }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009448ac: }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009448d8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x28] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009448d8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x5c }
}

extern "C" void fn_00c3cfc0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00944b50
extern "C" __declspec(naked) void asm_00944b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37bf0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00944ba8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe8448c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00944baa }
	__asm { L_00944ba8: }
	__asm { xor eax, eax }
	__asm { L_00944baa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c3cfc0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00946920();
// FUNCTION: ROBLOXSTUDIO 0x00945210
extern "C" __declspec(naked) void asm_00945210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37ca8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00946920 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00945264 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00945264 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_00945264: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009459d0();
extern "C" void fn_00945e30();
// FUNCTION: ROBLOXSTUDIO 0x009455f0
extern "C" __declspec(naked) void asm_009455f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { sub eax, dword ptr [esi + 0xc] }
	__asm { je L_0094562c }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [edi - 4] }
	__asm { test eax, eax }
	__asm { je L_00945628 }
	__asm { cmp byte ptr [edi - 8], 0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { je L_00945615 }
	__asm { push 0x2c }
	__asm { jmp L_00945623 }
	__asm { L_00945615: }
	__asm { and al, 1 }
	__asm { neg al }
	__asm { sbb al, al }
	__asm { and al, 0xe }
	__asm { add al, 0x2c }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { L_00945623: }
	__asm { call fn_009459d0 }
	__asm { L_00945628: }
	__asm { inc dword ptr [edi - 4] }
	__asm { pop edi }
	__asm { L_0094562c: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00945e30 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009459d0();
extern "C" void fn_009460b0();
// FUNCTION: ROBLOXSTUDIO 0x00945640
extern "C" __declspec(naked) void asm_00945640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { sub eax, dword ptr [esi + 0xc] }
	__asm { je L_0094567c }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [edi - 4] }
	__asm { test eax, eax }
	__asm { je L_00945678 }
	__asm { cmp byte ptr [edi - 8], 0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { je L_00945665 }
	__asm { push 0x2c }
	__asm { jmp L_00945673 }
	__asm { L_00945665: }
	__asm { and al, 1 }
	__asm { neg al }
	__asm { sbb al, al }
	__asm { and al, 0xe }
	__asm { add al, 0x2c }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { L_00945673: }
	__asm { call fn_009459d0 }
	__asm { L_00945678: }
	__asm { inc dword ptr [edi - 4] }
	__asm { pop edi }
	__asm { L_0094567c: }
	__asm { fld qword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esi }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_009460b0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10638[];
// FUNCTION: ROBLOXSTUDIO 0x009456a0
extern "C" __declspec(naked) void asm_009456a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { add dword ptr [ebx + 0x10], -8 }
	__asm { mov edi, dword ptr [ebx] }
	__asm { mov edx, dword ptr [edi + 0xc] }
	__asm { lea eax, [edx + 1] }
	__asm { cmp eax, dword ptr [edi + 0x10] }
	__asm { jb L_009456ee }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { sub edx, ecx }
	__asm { add esi, esi }
	__asm { lea eax, [edx + 1] }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { call dword ptr [g_00e10638] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 8 }
	__asm { add ecx, eax }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi + 0x14], esi }
	__asm { mov dword ptr [edi + 0xc], ecx }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { pop esi }
	__asm { L_009456ee: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { mov byte ptr [ecx], 0x5d }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10638[];
// FUNCTION: ROBLOXSTUDIO 0x00945710
extern "C" __declspec(naked) void asm_00945710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { add dword ptr [ebx + 0x10], -8 }
	__asm { mov edi, dword ptr [ebx] }
	__asm { mov edx, dword ptr [edi + 0xc] }
	__asm { lea eax, [edx + 1] }
	__asm { cmp eax, dword ptr [edi + 0x10] }
	__asm { jb L_0094575e }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { sub edx, ecx }
	__asm { add esi, esi }
	__asm { lea eax, [edx + 1] }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { call dword ptr [g_00e10638] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 8 }
	__asm { add ecx, eax }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi + 0x14], esi }
	__asm { mov dword ptr [edi + 0xc], ecx }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { pop esi }
	__asm { L_0094575e: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { mov byte ptr [ecx], 0x7d }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10638[];
// FUNCTION: ROBLOXSTUDIO 0x00945800
extern "C" __declspec(naked) void asm_00945800()
{
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, dword ptr [edi + 0xc] }
	__asm { lea eax, [ebx + 1] }
	__asm { cmp eax, dword ptr [edi + 0x10] }
	__asm { jb L_0094583f }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { sub ebx, ecx }
	__asm { add esi, esi }
	__asm { lea eax, [ebx + 1] }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10638] }
	__asm { add esp, 8 }
	__asm { lea ecx, [eax + ebx] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi + 0x14], esi }
	__asm { mov dword ptr [edi + 0xc], ecx }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { pop esi }
	__asm { L_0094583f: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { dec dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_009459d0();
extern "C" void fn_00946150();
// FUNCTION: ROBLOXSTUDIO 0x00945860
extern "C" __declspec(naked) void asm_00945860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { sub eax, dword ptr [esi + 0xc] }
	__asm { je L_0094589c }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [edi - 4] }
	__asm { test eax, eax }
	__asm { je L_00945898 }
	__asm { cmp byte ptr [edi - 8], 0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { je L_00945885 }
	__asm { push 0x2c }
	__asm { jmp L_00945893 }
	__asm { L_00945885: }
	__asm { and al, 1 }
	__asm { neg al }
	__asm { sbb al, al }
	__asm { and al, 0xe }
	__asm { add al, 0x2c }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { L_00945893: }
	__asm { call fn_009459d0 }
	__asm { L_00945898: }
	__asm { inc dword ptr [edi - 4] }
	__asm { pop edi }
	__asm { L_0094589c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00946150 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009459d0();
extern "C" void fn_009461e0();
// FUNCTION: ROBLOXSTUDIO 0x009458b0
extern "C" __declspec(naked) void asm_009458b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { sub eax, dword ptr [esi + 0xc] }
	__asm { je L_009458ec }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [edi - 4] }
	__asm { test eax, eax }
	__asm { je L_009458e8 }
	__asm { cmp byte ptr [edi - 8], 0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { je L_009458d5 }
	__asm { push 0x2c }
	__asm { jmp L_009458e3 }
	__asm { L_009458d5: }
	__asm { and al, 1 }
	__asm { neg al }
	__asm { sbb al, al }
	__asm { and al, 0xe }
	__asm { add al, 0x2c }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { L_009458e3: }
	__asm { call fn_009459d0 }
	__asm { L_009458e8: }
	__asm { inc dword ptr [edi - 4] }
	__asm { pop edi }
	__asm { L_009458ec: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_009461e0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009459d0();
extern "C" void fn_00946260();
// FUNCTION: ROBLOXSTUDIO 0x00945900
extern "C" __declspec(naked) void asm_00945900()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { sub eax, dword ptr [esi + 0xc] }
	__asm { je L_0094594b }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [edi - 4] }
	__asm { test eax, eax }
	__asm { je L_00945947 }
	__asm { cmp byte ptr [edi - 8], 0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { je L_00945934 }
	__asm { push 0x2c }
	__asm { call fn_009459d0 }
	__asm { inc dword ptr [edi - 4] }
	__asm { pop edi }
	__asm { mov ecx, esi }
	__asm { call fn_00946260 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00945934: }
	__asm { and al, 1 }
	__asm { neg al }
	__asm { sbb al, al }
	__asm { and al, 0xe }
	__asm { add al, 0x2c }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_009459d0 }
	__asm { L_00945947: }
	__asm { inc dword ptr [edi - 4] }
	__asm { pop edi }
	__asm { L_0094594b: }
	__asm { mov ecx, esi }
	__asm { call fn_00946260 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006901e0();
// FUNCTION: ROBLOXSTUDIO 0x00945960
extern "C" __declspec(naked) void asm_00945960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { cmp dword ptr [esi + 4], edx }
	__asm { jb L_00945999 }
	__asm { push edi }
	__asm { mov edi, 0x10 }
	__asm { test edx, edx }
	__asm { je L_0094597b }
	__asm { lea edi, [edx + edx] }
	__asm { L_0094597b: }
	__asm { cmp edi, edx }
	__asm { jbe L_00945998 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, edi }
	__asm { shl eax, 4 }
	__asm { push eax }
	__asm { shl edx, 4 }
	__asm { push edx }
	__asm { push dword ptr [esi] }
	__asm { call fn_006901e0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { L_00945998: }
	__asm { pop edi }
	__asm { L_00945999: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, eax }
	__asm { shl edx, 4 }
	__asm { add edx, dword ptr [esi] }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009459d0();
extern "C" void fn_009463a0();
// FUNCTION: ROBLOXSTUDIO 0x00945d40
extern "C" __declspec(naked) void asm_00945d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { sub eax, dword ptr [esi + 0xc] }
	__asm { je L_00945d7c }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [edi - 4] }
	__asm { test eax, eax }
	__asm { je L_00945d78 }
	__asm { cmp byte ptr [edi - 8], 0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { je L_00945d65 }
	__asm { push 0x2c }
	__asm { jmp L_00945d73 }
	__asm { L_00945d65: }
	__asm { and al, 1 }
	__asm { neg al }
	__asm { sbb al, al }
	__asm { and al, 0xe }
	__asm { add al, 0x2c }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { L_00945d73: }
	__asm { call fn_009459d0 }
	__asm { L_00945d78: }
	__asm { inc dword ptr [edi - 4] }
	__asm { pop edi }
	__asm { L_00945d7c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009463a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009459d0();
extern "C" void fn_009466c0();
// FUNCTION: ROBLOXSTUDIO 0x00945d90
extern "C" __declspec(naked) void asm_00945d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { sub eax, dword ptr [esi + 0xc] }
	__asm { je L_00945dcc }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [edi - 4] }
	__asm { test eax, eax }
	__asm { je L_00945dc8 }
	__asm { cmp byte ptr [edi - 8], 0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { je L_00945db5 }
	__asm { push 0x2c }
	__asm { jmp L_00945dc3 }
	__asm { L_00945db5: }
	__asm { and al, 1 }
	__asm { neg al }
	__asm { sbb al, al }
	__asm { and al, 0xe }
	__asm { add al, 0x2c }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { L_00945dc3: }
	__asm { call fn_009459d0 }
	__asm { L_00945dc8: }
	__asm { inc dword ptr [edi - 4] }
	__asm { pop edi }
	__asm { L_00945dcc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009466c0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009459d0();
extern "C" void fn_00946780();
// FUNCTION: ROBLOXSTUDIO 0x00945de0
extern "C" __declspec(naked) void asm_00945de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { sub eax, dword ptr [esi + 0xc] }
	__asm { je L_00945e1c }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [edi - 4] }
	__asm { test eax, eax }
	__asm { je L_00945e18 }
	__asm { cmp byte ptr [edi - 8], 0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { je L_00945e05 }
	__asm { push 0x2c }
	__asm { jmp L_00945e13 }
	__asm { L_00945e05: }
	__asm { and al, 1 }
	__asm { neg al }
	__asm { sbb al, al }
	__asm { and al, 0xe }
	__asm { add al, 0x2c }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { L_00945e13: }
	__asm { call fn_009459d0 }
	__asm { L_00945e18: }
	__asm { inc dword ptr [edi - 4] }
	__asm { pop edi }
	__asm { L_00945e1c: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00946780 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130094c[];
// FUNCTION: ROBLOXSTUDIO 0x00946820
extern "C" __declspec(naked) void asm_00946820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_0130094c], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { je L_00946861 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edx + 0x14] }
	__asm { cmp esi, 0x10 }
	__asm { jb L_0094683d }
	__asm { mov eax, dword ptr [edx] }
	__asm { jmp L_0094683f }
	__asm { L_0094683d: }
	__asm { mov eax, edx }
	__asm { L_0094683f: }
	__asm { mov edi, dword ptr [edx + 0x10] }
	__asm { L_00946842: }
	__asm { cmp esi, 0x10 }
	__asm { jb L_0094684b }
	__asm { mov ecx, dword ptr [edx] }
	__asm { jmp L_0094684d }
	__asm { L_0094684b: }
	__asm { mov ecx, edx }
	__asm { L_0094684d: }
	__asm { add ecx, edi }
	__asm { cmp eax, ecx }
	__asm { je L_00946861 }
	__asm { cmp byte ptr [eax], 0 }
	__asm { jl L_0094685b }
	__asm { inc eax }
	__asm { jmp L_00946842 }
	__asm { L_0094685b: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00946861: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x009468b0
extern "C" __declspec(naked) void asm_009468b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e671 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [esi + 4] }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0094690a }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { L_0094690a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [esi], 1 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00948a40
extern "C" __declspec(naked) void asm_00948a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37fd0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00948a98 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe849ac }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00948a9a }
	__asm { L_00948a98: }
	__asm { xor eax, eax }
	__asm { L_00948a9a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00948abf }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00948abf: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00948ad0
extern "C" __declspec(naked) void asm_00948ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37fe0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00948b28 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe84b08 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00948b2a }
	__asm { L_00948b28: }
	__asm { xor eax, eax }
	__asm { L_00948b2a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00948b4f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00948b4f: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00948d50
extern "C" __declspec(naked) void asm_00948d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37ff0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00948da8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe849e4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00948daa }
	__asm { L_00948da8: }
	__asm { xor eax, eax }
	__asm { L_00948daa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00948dcf }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00948dcf: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_009498c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00948e80
extern "C" __declspec(naked) void asm_00948e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38000 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00948ed8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe84ae8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00948eda }
	__asm { L_00948ed8: }
	__asm { xor eax, eax }
	__asm { L_00948eda: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009498c0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0043ee70();
extern "C" void fn_005324b0();
extern "C" void fn_0094b680();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0094be50
extern "C" __declspec(naked) void asm_0094be50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60220 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push esi }
	__asm { push 0x10 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_0094b680 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push 0xe80a88 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_005324b0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xe80a84 }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043ee70 }
	__asm { add esp, 0x24 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0094bebe }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0094bebe: }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { jb L_0094bee1 }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0094bee1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105ac[];
extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x0094c020
extern "C" __declspec(naked) void asm_0094c020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x13164e0 }
	__asm { mov ecx, 0x12285d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e105ac] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { jne L_0094c069 }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0094c069: }
	__asm { mov ecx, edx }
	__asm { push edi }
	__asm { lea edi, [ecx + 1] }
	__asm { nop }
	__asm { L_0094c070: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_0094c070 }
	__asm { sub ecx, edi }
	__asm { pop edi }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094f150
extern "C" __declspec(naked) void asm_0094f150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd389ec }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094f19b }
	__asm { mov dword ptr [edi + 0x14], 0xe84738 }
	__asm { mov dword ptr [edi + 0x1c], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094f19b: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0xe8455c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [edi], 0xe84720 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edi + 0x14], 0xe8472c }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edi + 0x10], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094f1f0
extern "C" __declspec(naked) void asm_0094f1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38a1c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0094f23a }
	__asm { mov dword ptr [esi + 0xc], 0xe84adc }
	__asm { mov dword ptr [esi + 0x14], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0094f23a: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xe84ac4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0xc], 0xe84ad0 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 8], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094f510
extern "C" __declspec(naked) void asm_0094f510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38aa8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe1815c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0094f550 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094f552 }
	__asm { L_0094f550: }
	__asm { xor edi, edi }
	__asm { L_0094f552: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094f568 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094f568: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe84698 }
	__asm { mov dword ptr [esi + 0xc], 0xe846a4 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1051c[];
// FUNCTION: ROBLOXSTUDIO 0x0094f6f0
extern "C" __declspec(naked) void asm_0094f6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38af9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e1051c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0094f72a }
	__asm { add edi, 0xc }
	__asm { jmp L_0094f72c }
	__asm { L_0094f72a: }
	__asm { xor edi, edi }
	__asm { L_0094f72c: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094f742 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094f742: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe846ac }
	__asm { mov dword ptr [esi + 0xc], 0xe846b8 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094f8d0
extern "C" __declspec(naked) void asm_0094f8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38b48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe18150 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0094f910 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094f912 }
	__asm { L_0094f910: }
	__asm { xor edi, edi }
	__asm { L_0094f912: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094f928 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094f928: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe846d4 }
	__asm { mov dword ptr [esi + 0xc], 0xe846e0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10720[];
// FUNCTION: ROBLOXSTUDIO 0x0094fab0
extern "C" __declspec(naked) void asm_0094fab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38b99 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e10720] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0094faea }
	__asm { add edi, 0xc }
	__asm { jmp L_0094faec }
	__asm { L_0094faea: }
	__asm { xor edi, edi }
	__asm { L_0094faec: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094fb02 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094fb02: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe846c0 }
	__asm { mov dword ptr [esi + 0xc], 0xe846cc }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094fc90
extern "C" __declspec(naked) void asm_0094fc90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd274b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844a4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0094fcd0 }
	__asm { add edi, 0xc }
	__asm { jmp L_0094fcd2 }
	__asm { L_0094fcd0: }
	__asm { xor edi, edi }
	__asm { L_0094fcd2: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094fce8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094fce8: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe845d0 }
	__asm { mov dword ptr [esi + 0xc], 0xe845dc }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094fe70
extern "C" __declspec(naked) void asm_0094fe70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd274b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844fc }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi], 0xe84508 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0094fecf }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0094fecf: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe84670 }
	__asm { mov dword ptr [esi + 0x14], 0xe8467c }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
