// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00c63a30();
extern "C" void fn_00c93e30();
// FUNCTION: ROBLOXSTUDIO 0x00c94430
extern "C" __declspec(naked) void asm_00c94430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c9447b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c9447b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00c944a4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00c93e30 }
	__asm { mov dword ptr [esi], 0xefa748 }
	__asm { mov dword ptr [esi + 8], 0xefa758 }
	__asm { jmp L_00c944a6 }
	__asm { L_00c944a4: }
	__asm { xor esi, esi }
	__asm { L_00c944a6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c63a30 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c944ca }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c944ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007de8e0();
extern "C" void fn_00c93ef0();
extern "C" void fn_00ca2370();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c944e0
extern "C" __declspec(naked) void asm_00c944e0()
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
	__asm { push 0x4788 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edx, edx }
	__asm { je L_00c9457a }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, edx }
	__asm { call fn_00ca2370 }
	__asm { mov edi, eax }
	__asm { jmp L_00c9457c }
	__asm { L_00c9457a: }
	__asm { xor edi, edi }
	__asm { L_00c9457c: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [esi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], edi }
	__asm { call fn_00c93ef0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00c945ad }
	__asm { lea ecx, [edi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00c945ad }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_007de8e0 }
	__asm { L_00c945ad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
// FUNCTION: ROBLOXSTUDIO 0x00c945c0
extern "C" __declspec(naked) void asm_00c945c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_006b98f0();
extern "C" void fn_007d1960();
extern "C" void fn_00825140();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c94680
extern "C" __declspec(naked) void asm_00c94680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f38 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 5 }
	__asm { jb L_00c9474b }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { push ecx }
	__asm { push 5 }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00c946d3 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c946d3: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 5 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00c94731 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_007d1960 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00c94720 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00c94720: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c94731: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00c9474b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c9474b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00c94765 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c94765: }
	__asm { push 5 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe4fd34 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0131a54c[];
extern "C" char g_0131a550[];
extern "C" char g_0131a554[];
extern "C" char g_0131a558[];
extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00c950e0();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c94980
extern "C" __declspec(naked) void asm_00c94980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00c950e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xefa1c4 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c949e1 }
	__asm { mov dword ptr [eax], esi }
	__asm { jmp L_00c949e3 }
	__asm { L_00c949e1: }
	__asm { xor eax, eax }
	__asm { L_00c949e3: }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [g_0131a54c] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp - 0x4c], esi }
	__asm { test al, 1 }
	__asm { jne L_00c94a38 }
	__asm { or eax, 1 }
	__asm { push 0xddc180 }
	__asm { mov dword ptr [g_0131a54c], eax }
	__asm { mov dword ptr [g_0131a550], 0x12be4a4 }
	__asm { mov dword ptr [g_0131a558], 0x40d810 }
	__asm { mov dword ptr [g_0131a554], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c94a38: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0x131a550 }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5390 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00c94a87 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c94a87: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00c950e0();
// FUNCTION: ROBLOXSTUDIO 0x00c94aa0
extern "C" __declspec(naked) void asm_00c94aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a7ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00c950e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xefa1ec }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5550 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00c94b4e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c94b4e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_008251b0();
extern "C" void fn_00c95030();
// FUNCTION: ROBLOXSTUDIO 0x00c94c30
extern "C" __declspec(naked) void asm_00c94c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c95030 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xefa248 }
	__asm { call fn_007d5550 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_008251b0 }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00797c50 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, 0x30c30c2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00c94cc2 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00c94cc2: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00c94ce5 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c94ce5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01310bb4[];
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00c2cc50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c950e0
extern "C" __declspec(naked) void asm_00c950e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69786 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_01310bb4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00c9515a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310bb4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xef9f7c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_00c2cc50 }
	__asm { push eax }
	__asm { mov ecx, 0x1310a88 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08f50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c9515a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x1310a88 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xefa174 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00c951d2 }
	__asm { push 0x12a9118 }
	__asm { mov ecx, 0x12a9118 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c951d2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c951bd }
	__asm { push 0x1e0 }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c951d2 }
	__asm { L_00c951bd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x10135b0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c951d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00403540();
extern "C" void fn_00410540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c95720
extern "C" __declspec(naked) void asm_00c95720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd698b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { jne L_00c95772 }
	__asm { lea eax, [ebp + 0x20] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp + 0x20], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe19198 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00410540 }
	__asm { L_00c95772: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { lea eax, [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 0x38 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00c957e8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c957e8: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_00c9580b }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c9580b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_00403540();
extern "C" void fn_00c95720();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c96430
extern "C" __declspec(naked) void asm_00c96430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd699e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { lea eax, [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00c95720 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00c964c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c964c0: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_00c964e3 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c964e3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" char g_012a90f0[];
extern "C" char g_012a90f4[];
extern "C" char g_012a90f8[];
extern "C" char g_012fc979[];
extern "C" void fn_006b8a90();
extern "C" void fn_007b5500();
extern "C" void fn_00842630();
extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00c6b400();
// FUNCTION: ROBLOXSTUDIO 0x00c96a50
extern "C" __declspec(naked) void asm_00c96a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { mov al, byte ptr [g_012fc979] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { test al, al }
	__asm { je L_00c96a7a }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xefa4d4 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00c96a7a: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 0x14], 0x7b6760 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00842630 }
	__asm { mov ecx, ebx }
	__asm { call fn_007b5500 }
	__asm { mov ecx, dword ptr [ebx + 0xab8] }
	__asm { test ecx, ecx }
	__asm { je L_00c96b11 }
	__asm { call fn_00c6b400 }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { mov ecx, esi }
	__asm { mov ebx, eax }
	__asm { call fn_00c687d0 }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov ecx, edi }
	__asm { call fn_00c68890 }
	__asm { mov eax, dword ptr [g_012a90f0] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_012a90f4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ax, word ptr [g_012a90f8] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov ecx, edi }
	__asm { lea eax, [esi + 0xad0] }
	__asm { push eax }
	__asm { call fn_00c688b0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x68] }
	__asm { mov ecx, dword ptr [esi + 0xab8] }
	__asm { call fn_00c6b400 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x38] }
	__asm { L_00c96b11: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0079ae50();
extern "C" void fn_0079af60();
extern "C" void fn_0083e860();
extern "C" void fn_00a73e40();
extern "C" void fn_00c94680();
extern "C" void fn_00c96370();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c96ee0
extern "C" __declspec(naked) void asm_00c96ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4add8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x40] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00c94680 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a73e40 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x38] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_0079af60 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_0079ae50 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0083e860 }
	__asm { add esp, 0x40 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c96f64 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_00c96f66 }
	__asm { L_00c96f64: }
	__asm { xor ecx, ecx }
	__asm { L_00c96f66: }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x10] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x14] }
	__asm { push edx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push ecx }
	__asm { call fn_00c96370 }
	__asm { add esp, 0x24 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_00c96f9d }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c96f9d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_006b9740();
extern "C" void fn_007cd560();
extern "C" void fn_00c23fa0();
// FUNCTION: ROBLOXSTUDIO 0x00c96fc0
extern "C" __declspec(naked) void asm_00c96fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00c9700a }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c96fe0 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c96fe2 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c96fe2 }
	__asm { L_00c96fe0: }
	__asm { mov eax, ecx }
	__asm { L_00c96fe2: }
	__asm { test eax, eax }
	__asm { je L_00c9700a }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c9700a }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c9700a }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { jne L_00c9700c }
	__asm { L_00c9700a: }
	__asm { xor ecx, ecx }
	__asm { L_00c9700c: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { pop edi }
	__asm { test al, al }
	__asm { je L_00c97059 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_00c97059 }
	__asm { test ecx, ecx }
	__asm { jne L_00c9705d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c97044 }
	__asm { push 0x59 }
	__asm { push 0xefa2e4 }
	__asm { push 0xeeedd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c97055 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c97044: }
	__asm { movzx eax, al }
	__asm { push 0xefa320 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c97055: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c97059: }
	__asm { test ecx, ecx }
	__asm { je L_00c97055 }
	__asm { L_00c9705d: }
	__asm { pop ebp }
	__asm { jmp fn_00c23fa0 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_0084a7a0();
extern "C" void fn_00c23fa0();
extern "C" void fn_00c3dee0();
extern "C" void fn_00c72ac0();
// FUNCTION: ROBLOXSTUDIO 0x00c97070
extern "C" __declspec(naked) void asm_00c97070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00c9711b }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c97098 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c9709a }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c9709a }
	__asm { L_00c97098: }
	__asm { mov eax, ecx }
	__asm { L_00c9709a: }
	__asm { test eax, eax }
	__asm { je L_00c9711b }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c9711b }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00c9711b }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c9711b }
	__asm { call fn_00c23fa0 }
	__asm { test eax, eax }
	__asm { je L_00c9711b }
	__asm { mov ecx, eax }
	__asm { call fn_00c3dee0 }
	__asm { mov edx, eax }
	__asm { test edx, edx }
	__asm { je L_00c9711b }
	__asm { mov eax, dword ptr [edx + 0x4660] }
	__asm { mov ecx, dword ptr [edx + 0x4658] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x4664] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [edx + 0x4668] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov ecx, dword ptr [edx + 0x465c] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { call fn_00c72ac0 }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c9711b: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_0084a7a0 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_009aa140();
// FUNCTION: ROBLOXSTUDIO 0x00c97130
extern "C" __declspec(naked) void asm_00c97130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69a38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test bl, bl }
	__asm { je L_00c971af }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_00c971af }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c9719e }
	__asm { push 0x14a }
	__asm { push 0xeee758 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c971af }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00c9719e: }
	__asm { movzx eax, bl }
	__asm { push 0xef20d0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c971af: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c971bb }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00c971bd }
	__asm { L_00c971bb: }
	__asm { xor edi, edi }
	__asm { L_00c971bd: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { add ecx, 0x44 }
	__asm { push eax }
	__asm { call fn_0079a070 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esp }
	__asm { call fn_004d1ca0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009aa140 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412300();
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_00c95820();
// FUNCTION: ROBLOXSTUDIO 0x00c97210
extern "C" __declspec(naked) void asm_00c97210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3df48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test bl, bl }
	__asm { je L_00c9728f }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_00c9728f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c9727e }
	__asm { push 0x169 }
	__asm { push 0xeee758 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c9728f }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00c9727e: }
	__asm { movzx eax, bl }
	__asm { push 0xeef570 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c9728f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c9729b }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00c9729d }
	__asm { L_00c9729b: }
	__asm { xor edi, edi }
	__asm { L_00c9729d: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { add ecx, 0x88 }
	__asm { push eax }
	__asm { call fn_004d1ca0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412300 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { sub esp, 0x18 }
	__asm { push esp }
	__asm { call fn_004d1ca0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c95820 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c97300
extern "C" __declspec(naked) void asm_00c97300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69a68 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00c97386 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp + 8], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { lea ecx, [esi + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00c97386: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00c97397 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c97397: }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_00c973ba }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c973ba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004226b0();
extern "C" void fn_00424f10();
extern "C" void fn_005457f0();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9cb0();
extern "C" void fn_006b9e50();
extern "C" void fn_008523c0();
extern "C" void fn_00c364d0();
extern "C" void fn_00c94350();
extern "C" void fn_00c96a50();
extern "C" void fn_00c9f7b0();
// FUNCTION: ROBLOXSTUDIO 0x00c97720
extern "C" __declspec(naked) void asm_00c97720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd47a08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_00c9776e }
	__asm { lea ecx, [esi + 0xacc] }
	__asm { call fn_006b9e50 }
	__asm { push 0xbb8 }
	__asm { mov ecx, esi }
	__asm { call fn_00c96a50 }
	__asm { mov ecx, edi }
	__asm { call fn_00424f10 }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { call fn_00c364d0 }
	__asm { L_00c9776e: }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00c9f7b0 }
	__asm { test ebx, ebx }
	__asm { je L_00c97819 }
	__asm { push esi }
	__asm { call fn_008523c0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c977a0 }
	__asm { mov ecx, dword ptr [eax + 0xac0] }
	__asm { test ecx, ecx }
	__asm { je L_00c977a0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0 }
	__asm { call dword ptr [eax + 0x18] }
	__asm { L_00c977a0: }
	__asm { mov ecx, ebx }
	__asm { call fn_005457f0 }
	__asm { push dword ptr [esi + 0xab8] }
	__asm { mov ecx, eax }
	__asm { call fn_00c364d0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x78] }
	__asm { mov dword ptr [ebp - 0x1c], 0xc63610 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00c94350 }
	__asm { mov edi, eax }
	__asm { add esi, 0xacc }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9cb0 }
	__asm { test al, al }
	__asm { je L_00c977ff }
	__asm { mov ecx, esi }
	__asm { call fn_006b9e50 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006b9b80 }
	__asm { L_00c977ff: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00c97819 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00c97819: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012a90f0[];
extern "C" char g_012a90f4[];
extern "C" char g_012a90f8[];
extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00c6b400();
extern "C" void fn_00c6c2f0();
extern "C" void fn_00c6c320();
extern "C" void fn_00c70300();
extern "C" void fn_00c703b0();
// FUNCTION: ROBLOXSTUDIO 0x00c98450
extern "C" __declspec(naked) void asm_00c98450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6b6cb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x11c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x128] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_00c6c2f0 }
	__asm { lea eax, [ebp - 0x128] }
	__asm { push 0x90 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c70300 }
	__asm { push dword ptr [ebx + 0xac0] }
	__asm { lea eax, [ebp - 0x128] }
	__asm { push eax }
	__asm { call fn_00c703b0 }
	__asm { mov ecx, dword ptr [ebx + 0xab8] }
	__asm { add esp, 0x10 }
	__asm { call fn_00c6b400 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { mov ecx, esi }
	__asm { mov ebx, eax }
	__asm { call fn_00c687d0 }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov ecx, edi }
	__asm { call fn_00c68890 }
	__asm { mov eax, dword ptr [g_012a90f0] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_012a90f4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ax, word ptr [g_012a90f8] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov ecx, edi }
	__asm { lea eax, [esi + 0xad0] }
	__asm { push eax }
	__asm { call fn_00c688b0 }
	__asm { mov eax, dword ptr [esi + 0xb00] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { push 0 }
	__asm { push 3 }
	__asm { push dword ptr [eax + 0xd8] }
	__asm { lea eax, [ebp - 0x128] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [edx + 0x4c] }
	__asm { lea ecx, [ebp - 0x128] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c6c320 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011df1d8[];
extern "C" char g_011df1e8[];
extern "C" char g_011df1ec[];
extern "C" void fn_00402f60();
extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c98540
extern "C" __declspec(naked) void asm_00c98540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { cmp dword ptr [g_011df1ec], 0x10 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [g_011df1e8] }
	__asm { mov edi, dword ptr [ebp + 0x18] }
	__asm { mov edx, 0x11df1d8 }
	__asm { cmovae edx, dword ptr [g_011df1d8] }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { lea ecx, [ebp + 8] }
	__asm { cmovae ecx, ebx }
	__asm { mov eax, esi }
	__asm { cmp edi, esi }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00c985ae }
	__asm { cmp edi, esi }
	__asm { jb L_00c985ae }
	__asm { cmp edi, esi }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { je L_00c985c3 }
	__asm { L_00c985ae: }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x11df1d8 }
	__asm { call fn_00403540 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { L_00c985c3: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00c985d2 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c985d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_013126f4[];
extern "C" void fn_0040bac0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00c2cc50();
extern "C" void fn_00c99e80();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c985f0
extern "C" __declspec(naked) void asm_00c985f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69b66 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c99e80 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_013126f4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00c986ac }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013126f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xefa77c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_00c2cc50 }
	__asm { push eax }
	__asm { mov ecx, 0x13125c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0c440 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00c986ac: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x13125c8 }
	__asm { call fn_0040bac0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xefadfc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c9872a }
	__asm { push 0x12aa4e0 }
	__asm { mov ecx, 0x12aa4e0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c9872a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c98715 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c9872a }
	__asm { L_00c98715: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c9872a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c98740
extern "C" __declspec(naked) void asm_00c98740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xefb150 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xefb1b8 }
	__asm { mov dword ptr [esi + 8], 0xefb1c8 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c987ea }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00c987d6 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c987d6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c987ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c98800
extern "C" __declspec(naked) void asm_00c98800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69b70 }
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
	__asm { je L_00c98858 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefb27c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c9885a }
	__asm { L_00c98858: }
	__asm { xor eax, eax }
	__asm { L_00c9885a: }
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
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c9887d }
	__asm { add eax, 0x34 }
	__asm { jmp L_00c9887f }
	__asm { L_00c9887d: }
	__asm { xor eax, eax }
	__asm { L_00c9887f: }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c98930
extern "C" __declspec(naked) void asm_00c98930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69b90 }
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
	__asm { je L_00c98988 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xefb264 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c9898a }
	__asm { L_00c98988: }
	__asm { xor eax, eax }
	__asm { L_00c9898a: }
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
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c989ad }
	__asm { add eax, 0x34 }
	__asm { jmp L_00c989af }
	__asm { L_00c989ad: }
	__asm { xor eax, eax }
	__asm { L_00c989af: }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x00c990e0
extern "C" __declspec(naked) void asm_00c990e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c9912b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c9912b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00c9917e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xefb188 }
	__asm { mov dword ptr [esi + 8], 0xefb198 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xefb1a0 }
	__asm { mov dword ptr [esi + 8], 0xefb1b0 }
	__asm { jmp L_00c99180 }
	__asm { L_00c9917e: }
	__asm { xor esi, esi }
	__asm { L_00c99180: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c9919d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c9919d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bb80();
// FUNCTION: ROBLOXSTUDIO 0x00c991c0
extern "C" __declspec(naked) void asm_00c991c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c9920b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c9920b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00c9925e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3cb14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xefb158 }
	__asm { mov dword ptr [esi + 8], 0xefb168 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xefb170 }
	__asm { mov dword ptr [esi + 8], 0xefb180 }
	__asm { jmp L_00c99260 }
	__asm { L_00c9925e: }
	__asm { xor esi, esi }
	__asm { L_00c99260: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c9927d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c9927d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00c98740();
extern "C" void fn_00c9d270();
// FUNCTION: ROBLOXSTUDIO 0x00c992a0
extern "C" __declspec(naked) void asm_00c992a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c992eb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c992eb: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00c99314 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00c98740 }
	__asm { mov dword ptr [esi], 0xefb1d0 }
	__asm { mov dword ptr [esi + 8], 0xefb1e0 }
	__asm { jmp L_00c99316 }
	__asm { L_00c99314: }
	__asm { xor esi, esi }
	__asm { L_00c99316: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c9d270 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c9933a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c9933a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007de8e0();
extern "C" void fn_00c98a60();
extern "C" void fn_00cb0fd0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c99b10
extern "C" __declspec(naked) void asm_00c99b10()
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
	__asm { push 0x4760 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edx, edx }
	__asm { je L_00c99b88 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, edx }
	__asm { call fn_00cb0fd0 }
	__asm { mov edi, eax }
	__asm { jmp L_00c99b8a }
	__asm { L_00c99b88: }
	__asm { xor edi, edi }
	__asm { L_00c99b8a: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [esi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], edi }
	__asm { call fn_00c98a60 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00c99bbb }
	__asm { lea ecx, [edi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00c99bbb }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_007de8e0 }
	__asm { L_00c99bbb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_00788700();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_00c52420();
extern "C" void fn_00c52ad0();
// FUNCTION: ROBLOXSTUDIO 0x00c99bd0
extern "C" __declspec(naked) void asm_00c99bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 4 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00788700 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_00c52ad0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_00c52420 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_00788700 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea ecx, [esi + 0xd0] }
	__asm { mov dword ptr [esi + 0xcc], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00c99f90();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c99ed0
extern "C" __declspec(naked) void asm_00c99ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69ca0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x34 }
	__asm { mov ebx, ecx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00c99f0c }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00c99f0c: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebx + 9] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c99f90 }
	__asm { mov edi, eax }
	__asm { cmp edi, esi }
	__asm { jne L_00c99f47 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { inc dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov byte ptr [eax + 4], 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c99f47: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00787350();
extern "C" void fn_00c9a030();
extern "C" void fn_00c9d6a0();
// FUNCTION: ROBLOXSTUDIO 0x00c99f90
extern "C" __declspec(naked) void asm_00c99f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x18] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { call fn_00c9d6a0 }
	__asm { test al, al }
	__asm { jne L_00c99fd7 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { test eax, eax }
	__asm { je L_00c99fcd }
	__asm { pop esi }
	__asm { add eax, -0x28 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c99fcd: }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c99fd7: }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00c9a030 }
	__asm { mov ebx, eax }
	__asm { cmp ebx, edi }
	__asm { jne L_00c9a021 }
	__asm { test esi, esi }
	__asm { je L_00c99ff6 }
	__asm { add esi, -9 }
	__asm { jmp L_00c99ff8 }
	__asm { L_00c99ff6: }
	__asm { xor esi, esi }
	__asm { L_00c99ff8: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00c9a004 }
	__asm { add eax, 0x28 }
	__asm { jmp L_00c9a006 }
	__asm { L_00c9a004: }
	__asm { xor eax, eax }
	__asm { L_00c9a006: }
	__asm { test edi, edi }
	__asm { je L_00c9a00f }
	__asm { add edi, 0x28 }
	__asm { jmp L_00c9a011 }
	__asm { L_00c9a00f: }
	__asm { xor edi, edi }
	__asm { L_00c9a011: }
	__asm { push eax }
	__asm { push dword ptr [ebp - 8] }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { push edi }
	__asm { call fn_00787350 }
	__asm { add esp, 0x10 }
	__asm { L_00c9a021: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
extern "C" void fn_00787350();
extern "C" void fn_00c9d7c0();
// FUNCTION: ROBLOXSTUDIO 0x00c9a030
extern "C" __declspec(naked) void asm_00c9a030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a871 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call fn_00c9d7c0 }
	__asm { test al, al }
	__asm { jne L_00c9a09a }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { test eax, eax }
	__asm { je L_00c9a087 }
	__asm { add eax, -0x1c }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c9a087: }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c9a09a: }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00c9a0d4 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0x18] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov dword ptr [edi + 0x18], esi }
	__asm { pop esi }
	__asm { L_00c9a0d4: }
	__asm { test ebx, ebx }
	__asm { je L_00c9a0dd }
	__asm { lea eax, [ebx - 9] }
	__asm { jmp L_00c9a0df }
	__asm { L_00c9a0dd: }
	__asm { xor eax, eax }
	__asm { L_00c9a0df: }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { test eax, eax }
	__asm { je L_00c9a0eb }
	__asm { lea ecx, [eax + 0x1c] }
	__asm { jmp L_00c9a0ed }
	__asm { L_00c9a0eb: }
	__asm { xor ecx, ecx }
	__asm { L_00c9a0ed: }
	__asm { test edi, edi }
	__asm { je L_00c9a0f6 }
	__asm { lea eax, [edi + 0x1c] }
	__asm { jmp L_00c9a0f8 }
	__asm { L_00c9a0f6: }
	__asm { xor eax, eax }
	__asm { L_00c9a0f8: }
	__asm { push ecx }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00787350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_0131a54c[];
extern "C" char g_0131a550[];
extern "C" char g_0131a554[];
extern "C" char g_0131a558[];
extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00c9ab30();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c9a2a0
extern "C" __declspec(naked) void asm_00c9a2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00c9ab30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xefadd4 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c9a301 }
	__asm { mov dword ptr [eax], esi }
	__asm { jmp L_00c9a303 }
	__asm { L_00c9a301: }
	__asm { xor eax, eax }
	__asm { L_00c9a303: }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [g_0131a54c] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp - 0x4c], esi }
	__asm { test al, 1 }
	__asm { jne L_00c9a358 }
	__asm { or eax, 1 }
	__asm { push 0xddc180 }
	__asm { mov dword ptr [g_0131a54c], eax }
	__asm { mov dword ptr [g_0131a550], 0x12be4a4 }
	__asm { mov dword ptr [g_0131a558], 0x40d810 }
	__asm { mov dword ptr [g_0131a554], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c9a358: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0x131a550 }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5390 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00c9a3a7 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c9a3a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00c9ab30();
// FUNCTION: ROBLOXSTUDIO 0x00c9a540
extern "C" __declspec(naked) void asm_00c9a540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00c9ab30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xefae38 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5d30 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00c9a5ee }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c9a5ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_013126f4[];
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00c2cc50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c9ab30
extern "C" __declspec(naked) void asm_00c9ab30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69d36 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_013126f4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00c9abaa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013126f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xefa77c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_00c2cc50 }
	__asm { push eax }
	__asm { mov ecx, 0x13125c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0c440 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c9abaa: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x13125c8 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xefadb4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00c9ac22 }
	__asm { push 0x12aa4e0 }
	__asm { mov ecx, 0x12aa4e0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c9ac22 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c9ac0d }
	__asm { push 0x1e0 }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c9ac22 }
	__asm { L_00c9ac0d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x10135b0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c9ac22: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00ef3ee0[];
extern "C" char g_012e4ccc[];
extern "C" void fn_004038a0();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
extern "C" void fn_0080f890();
extern "C" void fn_00c5d5d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c9acb0
extern "C" __declspec(naked) void asm_00c9acb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69d63 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c5d5d0 }
	__asm { lea edi, [esi + 0x34] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [edi], 0xefa9ac }
	__asm { mov dword ptr [edi + 4], 0xefaa24 }
	__asm { mov dword ptr [edi + 0x18], 0xefaa2c }
	__asm { mov dword ptr [edi + 0x1c], 0xefaa38 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0080f890 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { inc dword ptr [g_012e4ccc] }
	__asm { mov dword ptr [edi], 0xefaa4c }
	__asm { mov dword ptr [edi + 4], 0xefaac4 }
	__asm { mov dword ptr [edi + 0x18], 0xefaacc }
	__asm { mov dword ptr [edi + 0x1c], 0xefaad8 }
	__asm { mov byte ptr [esi + 0x98], 1 }
	__asm { mov dword ptr [esi], 0xefaae8 }
	__asm { mov dword ptr [edi], 0xefaaf4 }
	__asm { mov dword ptr [esi + 0x38], 0xefab6c }
	__asm { mov dword ptr [esi + 0x4c], 0xefab74 }
	__asm { mov dword ptr [esi + 0x50], 0xefab80 }
	__asm { mov edx, dword ptr [g_00ef3ee0] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { jne L_00c9ad82 }
	__asm { xor ecx, ecx }
	__asm { jmp L_00c9ad92 }
	__asm { L_00c9ad82: }
	__asm { mov ecx, edx }
	__asm { push ebx }
	__asm { lea ebx, [ecx + 1] }
	__asm { L_00c9ad88: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00c9ad88 }
	__asm { sub ecx, ebx }
	__asm { pop ebx }
	__asm { L_00c9ad92: }
	__asm { push ecx }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00c9adbc }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c9adbc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ef3ea4[];
extern "C" char g_012e4cd0[];
extern "C" void fn_004038a0();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
extern "C" void fn_00811e90();
extern "C" void fn_00c5d680();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c9add0
extern "C" __declspec(naked) void asm_00c9add0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69d93 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c5d680 }
	__asm { lea edi, [esi + 0x34] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [edi], 0xefab94 }
	__asm { mov dword ptr [edi + 4], 0xefac0c }
	__asm { mov dword ptr [edi + 0x18], 0xefac14 }
	__asm { mov dword ptr [edi + 0x1c], 0xefac20 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00811e90 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { inc dword ptr [g_012e4cd0] }
	__asm { mov dword ptr [edi], 0xefac34 }
	__asm { mov dword ptr [edi + 4], 0xefacac }
	__asm { mov dword ptr [edi + 0x18], 0xefacb4 }
	__asm { mov dword ptr [edi + 0x1c], 0xefacc0 }
	__asm { mov byte ptr [esi + 0x98], 1 }
	__asm { mov dword ptr [esi], 0xefacd0 }
	__asm { mov dword ptr [edi], 0xefacdc }
	__asm { mov dword ptr [esi + 0x38], 0xefad54 }
	__asm { mov dword ptr [esi + 0x4c], 0xefad5c }
	__asm { mov dword ptr [esi + 0x50], 0xefad68 }
	__asm { mov edx, dword ptr [g_00ef3ea4] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { jne L_00c9aea2 }
	__asm { xor ecx, ecx }
	__asm { jmp L_00c9aeb2 }
	__asm { L_00c9aea2: }
	__asm { mov ecx, edx }
	__asm { push ebx }
	__asm { lea ebx, [ecx + 1] }
	__asm { L_00c9aea8: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00c9aea8 }
	__asm { sub ecx, ebx }
	__asm { pop ebx }
	__asm { L_00c9aeb2: }
	__asm { push ecx }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00c9aedc }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c9aedc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c9a120();
extern "C" void fn_00c9baa0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c9b6d0
extern "C" __declspec(naked) void asm_00c9b6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test esi, esi }
	__asm { je L_00c9b6f7 }
	__asm { lea ecx, [esi + 4] }
	__asm { jmp L_00c9b6f9 }
	__asm { L_00c9b6f7: }
	__asm { xor ecx, ecx }
	__asm { L_00c9b6f9: }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00c9baa0 }
	__asm { mov edi, eax }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c9b71b }
	__asm { lea edx, [ecx - 9] }
	__asm { jmp L_00c9b71d }
	__asm { L_00c9b71b: }
	__asm { xor edx, edx }
	__asm { L_00c9b71d: }
	__asm { mov esi, dword ptr [edx + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00c9b729 }
	__asm { lea eax, [ecx - 9] }
	__asm { jmp L_00c9b72b }
	__asm { L_00c9b729: }
	__asm { xor eax, eax }
	__asm { L_00c9b72b: }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { and eax, 0xfffffffe }
	__asm { je L_00c9b73b }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00c9b73d }
	__asm { L_00c9b73b: }
	__asm { xor edx, edx }
	__asm { L_00c9b73d: }
	__asm { lea eax, [ecx + 1] }
	__asm { push eax }
	__asm { push edi }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edx }
	__asm { call fn_00c9a120 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { jb L_00c9b764 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c9b764: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c9a120();
extern "C" void fn_00c9baa0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c9b780
extern "C" __declspec(naked) void asm_00c9b780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { je L_00c9b7a8 }
	__asm { lea ecx, [esi + 4] }
	__asm { jmp L_00c9b7aa }
	__asm { L_00c9b7a8: }
	__asm { xor ecx, ecx }
	__asm { L_00c9b7aa: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00c9baa0 }
	__asm { mov edi, eax }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c9b7cb }
	__asm { lea edx, [ecx - 9] }
	__asm { jmp L_00c9b7cd }
	__asm { L_00c9b7cb: }
	__asm { xor edx, edx }
	__asm { L_00c9b7cd: }
	__asm { mov esi, dword ptr [edx + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00c9b7d9 }
	__asm { lea eax, [ecx - 9] }
	__asm { jmp L_00c9b7db }
	__asm { L_00c9b7d9: }
	__asm { xor eax, eax }
	__asm { L_00c9b7db: }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { and eax, 0xfffffffe }
	__asm { je L_00c9b7eb }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00c9b7ed }
	__asm { L_00c9b7eb: }
	__asm { xor edx, edx }
	__asm { L_00c9b7ed: }
	__asm { lea eax, [ecx + 1] }
	__asm { push eax }
	__asm { push edi }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edx }
	__asm { call fn_00c9a120 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [esi], eax }
	__asm { jb L_00c9b813 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c9b813: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_00c9bae0();
extern "C" void fn_00cb9740();
// FUNCTION: ROBLOXSTUDIO 0x00c9cc50
extern "C" __declspec(naked) void asm_00c9cc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a0f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test bl, bl }
	__asm { je L_00c9ccd1 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 4 }
	__asm { je L_00c9ccd1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c9ccc0 }
	__asm { push 0x18a }
	__asm { push 0xeee758 }
	__asm { push 0xe636c0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c9ccd1 }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00c9ccc0: }
	__asm { movzx eax, bl }
	__asm { push 0xeef4a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c9ccd1: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c9ccdd }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00c9ccdf }
	__asm { L_00c9ccdd: }
	__asm { xor edi, edi }
	__asm { L_00c9ccdf: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { add ecx, 0xcc }
	__asm { push eax }
	__asm { call fn_004d1ca0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 8], esp }
	__asm { add ecx, 0x88 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0079a070 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cb9740 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_0079a070 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c9bae0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004220b0();
extern "C" void fn_00886380();
extern "C" void fn_00886810();
extern "C" void fn_00c99cb0();
// FUNCTION: ROBLOXSTUDIO 0x00c9d000
extern "C" __declspec(naked) void asm_00c9d000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a119 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xb50] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00c99cb0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { je L_00c9d049 }
	__asm { lea ecx, [esi - 9] }
	__asm { jmp L_00c9d04b }
	__asm { L_00c9d049: }
	__asm { xor ecx, ecx }
	__asm { L_00c9d04b: }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { je L_00c9d09f }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_00886810 }
	__asm { add esp, 8 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [esi + 4] }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00c9d081 }
	__asm { push eax }
	__asm { call fn_00886380 }
	__asm { L_00c9d081: }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [esi], 1 }
	__asm { call fn_004220b0 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c9d09f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c9b780();
extern "C" void fn_00c9d0c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c9d600
extern "C" __declspec(naked) void asm_00c9d600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a1b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00c9d0c0 }
	__asm { cmp byte ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00c9d667 }
	__asm { mov eax, dword ptr [esi + 0xb3c] }
	__asm { lea ecx, [esi + 0xb34] }
	__asm { test eax, eax }
	__asm { je L_00c9d64d }
	__asm { lea esi, [eax - 9] }
	__asm { jmp L_00c9d64f }
	__asm { L_00c9d64d: }
	__asm { xor esi, esi }
	__asm { L_00c9d64f: }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00c9b780 }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_00c9d667 }
	__asm { xor bl, bl }
	__asm { jmp L_00c9d669 }
	__asm { L_00c9d667: }
	__asm { mov bl, 1 }
	__asm { L_00c9d669: }
	__asm { cmp byte ptr [ebp - 0x28], 0 }
	__asm { je L_00c9d680 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00c9d680 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c9d680: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00418ab0();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_0067af70();
extern "C" void fn_00774920();
extern "C" void fn_007cd560();
extern "C" void fn_00968e70();
// FUNCTION: ROBLOXSTUDIO 0x00c9e270
extern "C" __declspec(naked) void asm_00c9e270()
{
	__asm { push esi }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00c9e2bc }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c9e28b }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c9e28d }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c9e28d }
	__asm { L_00c9e28b: }
	__asm { mov eax, ecx }
	__asm { L_00c9e28d: }
	__asm { test eax, eax }
	__asm { je L_00c9e2bc }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c9e2bc }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00c9e2bc }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c9e2bc }
	__asm { call fn_0067af70 }
	__asm { mov esi, eax }
	__asm { jmp L_00c9e2be }
	__asm { L_00c9e2bc: }
	__asm { xor esi, esi }
	__asm { L_00c9e2be: }
	__asm { cmp byte ptr [esi + 0x228], 0 }
	__asm { je L_00c9e2e2 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xf12990 }
	__asm { push 0xefb080 }
	__asm { push 0xf13380 }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { L_00c9e2e2: }
	__asm { mov ecx, esi }
	__asm { call fn_00968e70 }
	__asm { test eax, eax }
	__asm { je L_00c9e333 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c9e333 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00418ab0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00c9e333 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00c9e333 }
	__asm { mov eax, dword ptr [eax + 0x158] }
	__asm { test eax, eax }
	__asm { je L_00c9e333 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0xf12990 }
	__asm { push 0xefb098 }
	__asm { push 0xf13380 }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { L_00c9e333: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_006b9740();
extern "C" void fn_007cd560();
extern "C" void fn_00c242a0();
// FUNCTION: ROBLOXSTUDIO 0x00c9e480
extern "C" __declspec(naked) void asm_00c9e480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00c9e4ca }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c9e4a0 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c9e4a2 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c9e4a2 }
	__asm { L_00c9e4a0: }
	__asm { mov eax, ecx }
	__asm { L_00c9e4a2: }
	__asm { test eax, eax }
	__asm { je L_00c9e4ca }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c9e4ca }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c9e4ca }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { jne L_00c9e4cc }
	__asm { L_00c9e4ca: }
	__asm { xor ecx, ecx }
	__asm { L_00c9e4cc: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { pop edi }
	__asm { test al, al }
	__asm { je L_00c9e520 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_00c9e520 }
	__asm { test ecx, ecx }
	__asm { jne L_00c9e524 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c9e504 }
	__asm { push 0x67 }
	__asm { push 0xefaf10 }
	__asm { push 0xeeedd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c9e515 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c9e504: }
	__asm { movzx eax, al }
	__asm { push 0xefaf48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c9e515: }
	__asm { xor ecx, ecx }
	__asm { xor eax, eax }
	__asm { test ecx, ecx }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c9e520: }
	__asm { test ecx, ecx }
	__asm { je L_00c9e515 }
	__asm { L_00c9e524: }
	__asm { call fn_00c242a0 }
	__asm { mov ecx, eax }
	__asm { xor eax, eax }
	__asm { test ecx, ecx }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_00c9e830();
extern "C" void fn_00c9f160();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c9eaa0
extern "C" __declspec(naked) void asm_00c9eaa0()
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
	__asm { je L_00c9eaf1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_00c9f160 }
	__asm { mov esi, eax }
	__asm { jmp L_00c9eaf3 }
	__asm { L_00c9eaf1: }
	__asm { xor esi, esi }
	__asm { L_00c9eaf3: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00c9e830 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00c9eb24 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00c9eb24 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00c9eb24: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00c9ed80();
// FUNCTION: ROBLOXSTUDIO 0x00c9ec10
extern "C" __declspec(naked) void asm_00c9ec10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00c9ed80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xefb4e8 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5390 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00c9ecbe }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c9ecbe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01310ce4[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c9ed80
extern "C" __declspec(naked) void asm_00c9ed80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a326 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_01310ce4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00c9edfa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310ce4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xefb3d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1310bb8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08f60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c9edfa: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x1310bb8 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xefb4dc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00c9ee72 }
	__asm { push 0x12a93e4 }
	__asm { mov ecx, 0x12a93e4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c9ee72 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c9ee5d }
	__asm { push 0x1e0 }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c9ee72 }
	__asm { L_00c9ee5d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x10135b0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c9ee72: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012ac1f8[];
extern "C" void fn_006c53e0();
extern "C" void fn_00c9ece0();
extern "C" void fn_00cc88d0();
extern "C" void fn_00ce5c60();
// FUNCTION: ROBLOXSTUDIO 0x00c9f030
extern "C" __declspec(naked) void asm_00c9f030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a3a1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00c9ece0 }
	__asm { lea ecx, [edi + 0x64] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cc88d0 }
	__asm { mov dword ptr [edi], 0xefb3f4 }
	__asm { mov dword ptr [edi + 4], 0xefb470 }
	__asm { mov dword ptr [edi + 0x18], 0xefb478 }
	__asm { mov dword ptr [edi + 0x1c], 0xefb484 }
	__asm { mov dword ptr [edi + 0x64], 0xefb494 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { lea ecx, [edi + 0x78] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00ce5c60 }
	__asm { fld qword ptr [g_012ac1f8] }
	__asm { lea esi, [edi + 0xa48] }
	__asm { fst qword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { fstp qword ptr [esi + 8] }
	__asm { fldz }
	__asm { mov byte ptr [esi + 0x28], 1 }
	__asm { fst qword ptr [esi + 0x10] }
	__asm { fst qword ptr [esi + 0x18] }
	__asm { fstp qword ptr [esi + 0x20] }
	__asm { add esi, 0x30 }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_006c53e0 }
	__asm { mov byte ptr [esi + 8], 1 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { fld qword ptr [ebp - 0x1c] }
	__asm { fstp qword ptr [esi + 0x18] }
	__asm { mov byte ptr [esi + 0x38], 1 }
	__asm { fldz }
	__asm { xor ecx, ecx }
	__asm { fst qword ptr [esi + 0x20] }
	__asm { fst qword ptr [esi + 0x28] }
	__asm { fstp qword ptr [esi + 0x30] }
	__asm { mov dword ptr [edi + 0xab8], 0 }
	__asm { mov dword ptr [edi + 0xabc], 0 }
	__asm { L_00c9f120: }
	__asm { mov al, cl }
	__asm { shl al, 3 }
	__asm { sub al, cl }
	__asm { xor al, 0xfe }
	__asm { mov byte ptr [ecx + 0x13141c8], al }
	__asm { inc ecx }
	__asm { cmp ecx, 0x10 }
	__asm { jl L_00c9f120 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0xac0], 0x1a }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ffaa0[];
extern "C" void fn_004959d0();
extern "C" void fn_007af680();
extern "C" void fn_0092f890();
// FUNCTION: ROBLOXSTUDIO 0x00c9f160
extern "C" __declspec(naked) void asm_00c9f160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a3c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [edi], 0xe3baa4 }
	__asm { mov dword ptr [edi + 4], 0xe3bb1c }
	__asm { mov dword ptr [edi + 0x18], 0xe3bb24 }
	__asm { mov dword ptr [edi + 0x1c], 0xe3bb30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004959d0 }
	__asm { fldz }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { inc dword ptr [g_012ffaa0] }
	__asm { fstp qword ptr [edi + 0x68] }
	__asm { mov dword ptr [edi + 0x84], 0xf }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov byte ptr [edi + 0x70], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0xefb708 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xefb66c }
	__asm { mov dword ptr [edi + 4], 0xefb6e8 }
	__asm { mov dword ptr [edi + 0x18], 0xefb6f0 }
	__asm { mov dword ptr [edi + 0x1c], 0xefb6fc }
	__asm { mov dword ptr [edi + 0x88], eax }
	__asm { call fn_0092f890 }
	__asm { mov esi, eax }
	__asm { push 0x1029050 }
	__asm { mov ecx, esi }
	__asm { call fn_0092f890 }
	__asm { push 0x1029058 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edi + 0x8c], eax }
	__asm { call fn_0092f890 }
	__asm { push 0xefb718 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edi + 0x90], eax }
	__asm { call fn_0092f890 }
	__asm { push 0xefb728 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edi + 0x94], eax }
	__asm { call fn_0092f890 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x98], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005735a0();
extern "C" void fn_00573ed0();
extern "C" void fn_006c53e0();
extern "C" void fn_006c5500();
extern "C" void fn_00c6c1f0();
extern "C" void fn_00c6c320();
extern "C" void fn_00cef2a0();
// FUNCTION: ROBLOXSTUDIO 0x00c9f4d0
extern "C" __declspec(naked) void asm_00c9f4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a42b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x124 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_006c53e0 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x130] }
	__asm { push 0x5d4 }
	__asm { call fn_00c6c1f0 }
	__asm { lea eax, [ebp - 0x130] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cef2a0 }
	__asm { mov bl, al }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_006c53e0 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_006c5500 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [esi + 0x5e8] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { add esp, 0xc }
	__asm { lea ecx, [esi + 0xa78] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_005735a0 }
	__asm { fld qword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { lea ecx, [esi + 0xa48] }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00573ed0 }
	__asm { lea ecx, [ebp - 0x130] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c6c320 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00403160();
extern "C" void fn_004956d0();
extern "C" void fn_00c6c350();
extern "C" void fn_00c6cab0();
extern "C" void fn_00cf3090();
extern "C" void fn_00cf30a0();
extern "C" void fn_00cf3200();
// FUNCTION: ROBLOXSTUDIO 0x00c9f620
extern "C" __declspec(naked) void asm_00c9f620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a44b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x260 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x26c] }
	__asm { call fn_00cf3090 }
	__asm { push 0x13141c8 }
	__asm { lea ecx, [ebp - 0x26c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf3200 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { dec eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea esi, [eax + 0x15] }
	__asm { and esi, 0xfffffff0 }
	__asm { call fn_004956d0 }
	__asm { lea esi, [esi*8 + 8] }
	__asm { sub esi, eax }
	__asm { test esi, esi }
	__asm { jle L_00c9f696 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c6c350 }
	__asm { L_00c9f696: }
	__asm { mov edx, dword ptr [edi + 0xc] }
	__asm { lea eax, [ebx + 0x78] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [edx + 1] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [edx + 1] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x26c] }
	__asm { call fn_00cf30a0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, edi }
	__asm { lea eax, [eax*8 + 8] }
	__asm { push eax }
	__asm { call fn_00c6cab0 }
	__asm { lea ecx, [ebp - 0x26c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00403160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bb80();
// FUNCTION: ROBLOXSTUDIO 0x00ca1060
extern "C" __declspec(naked) void asm_00ca1060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ca10ab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00ca10ab: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00ca10fe }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3cb14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xefd5e4 }
	__asm { mov dword ptr [esi + 8], 0xefd5f4 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xefd5fc }
	__asm { mov dword ptr [esi + 8], 0xefd60c }
	__asm { jmp L_00ca1100 }
	__asm { L_00ca10fe: }
	__asm { xor esi, esi }
	__asm { L_00ca1100: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00ca111d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00ca111d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007de8e0();
extern "C" void fn_0092eaa0();
extern "C" void fn_00961360();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ca1140
extern "C" __declspec(naked) void asm_00ca1140()
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
	__asm { push 0xa8 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ca1191 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_0092eaa0 }
	__asm { mov esi, eax }
	__asm { jmp L_00ca1193 }
	__asm { L_00ca1191: }
	__asm { xor esi, esi }
	__asm { L_00ca1193: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00961360 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00ca11c4 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00ca11c4 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00ca11c4: }
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
extern "C" void fn_00ca0290();
extern "C" void fn_00ca21d0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ca11e0
extern "C" __declspec(naked) void asm_00ca11e0()
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
	__asm { push 0xa8 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ca1231 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_00ca21d0 }
	__asm { mov esi, eax }
	__asm { jmp L_00ca1233 }
	__asm { L_00ca1231: }
	__asm { xor esi, esi }
	__asm { L_00ca1233: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00ca0290 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00ca1264 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00ca1264 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00ca1264: }
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
extern "C" void fn_00ca03b0();
extern "C" void fn_00ca2bc0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ca13c0
extern "C" __declspec(naked) void asm_00ca13c0()
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
	__asm { push 0x90 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ca1411 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_00ca2bc0 }
	__asm { mov esi, eax }
	__asm { jmp L_00ca1413 }
	__asm { L_00ca1411: }
	__asm { xor esi, esi }
	__asm { L_00ca1413: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00ca03b0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00ca1444 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00ca1444 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00ca1444: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00403110();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ca1f00
extern "C" __declspec(naked) void asm_00ca1f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a65b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00ca1f5a }
	__asm { sub eax, 4 }
	__asm { L_00ca1f5a: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { lea edi, [esi + 0x20] }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00ca1fbb }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00ca1fbb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov byte ptr [edi + 0x14], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00ca20c0();
// FUNCTION: ROBLOXSTUDIO 0x00ca1ff0
extern "C" __declspec(naked) void asm_00ca1ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00ca20c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xefc6a8 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5d30 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00ca209e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00ca209e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_013123e4[];
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00c2ccd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ca20c0
extern "C" __declspec(naked) void asm_00ca20c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a686 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_013123e4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00ca213a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013123e4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xefb9ec }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_00c2ccd0 }
	__asm { push eax }
	__asm { mov ecx, 0x13122b8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0a7c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00ca213a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x13122b8 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xefc69c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00ca21b2 }
	__asm { push 0x12ac63c }
	__asm { mov ecx, 0x12ac63c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00ca21b2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ca219d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ca21b2 }
	__asm { L_00ca219d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ca21b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012ffaa0[];
extern "C" void fn_0040c260();
extern "C" void fn_004959d0();
extern "C" void fn_007af680();
// FUNCTION: ROBLOXSTUDIO 0x00ca21d0
extern "C" __declspec(naked) void asm_00ca21d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe3baa4 }
	__asm { mov dword ptr [esi + 4], 0xe3bb1c }
	__asm { mov dword ptr [esi + 0x18], 0xe3bb24 }
	__asm { mov dword ptr [esi + 0x1c], 0xe3bb30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004959d0 }
	__asm { fldz }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012ffaa0] }
	__asm { fstp qword ptr [esi + 0x68] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x84], 0xf }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov byte ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { mov dword ptr [esi], 0xefd544 }
	__asm { mov dword ptr [esi + 4], 0xefd5c0 }
	__asm { mov dword ptr [esi + 0x18], 0xefd5c8 }
	__asm { mov dword ptr [esi + 0x1c], 0xefd5d4 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0x496100 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00ca22bd }
	__asm { lea ecx, [esi + 0x90] }
	__asm { test ecx, ecx }
	__asm { je L_00ca229c }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_00ca229c: }
	__asm { mov eax, 0xefd700 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ca22bd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ca2ef0
extern "C" __declspec(naked) void asm_00ca2ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a82b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 8] }
	__asm { push -1 }
	__asm { mov byte ptr [esi], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { lea ecx, [esi + 0x24] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov al, byte ptr [ebp + 0x44] }
	__asm { mov byte ptr [esi + 0x40], al }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { jb L_00ca2f8e }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ca2f8e: }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_00ca2fb1 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ca2fb1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" char g_00e106f8[];
extern "C" void fn_007938b0();
extern "C" void fn_00794580();
extern "C" void fn_00c72190();
extern "C" void fn_00ca7230();
// FUNCTION: ROBLOXSTUDIO 0x00ca4740
extern "C" __declspec(naked) void asm_00ca4740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { call fn_00794580 }
	__asm { mov edi, eax }
	__asm { movzx edx, byte ptr [edi] }
	__asm { lea esi, [edi + 1] }
	__asm { add esi, edx }
	__asm { je L_00ca4769 }
	__asm { inc esi }
	__asm { jmp L_00ca476b }
	__asm { L_00ca4769: }
	__asm { xor esi, esi }
	__asm { L_00ca476b: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e106f8] }
	__asm { push esi }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { shr ecx, 3 }
	__asm { add ecx, eax }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_007938b0 }
	__asm { call fn_00794580 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { test eax, eax }
	__asm { je L_00ca47d3 }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { test esi, esi }
	__asm { je L_00ca47d3 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { call fn_00ca7230 }
	__asm { test al, al }
	__asm { je L_00ca47d3 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00c72190 }
	__asm { add esp, 0x10 }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ca47d3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1025c[];
extern "C" void fn_0041fe80();
extern "C" void fn_00420c60();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00ca5a20
extern "C" __declspec(naked) void asm_00ca5a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6aaa0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test ebx, ebx }
	__asm { je L_00ca5a76 }
	__asm { cmp ebx, 0x1fffffff }
	__asm { ja L_00ca5a70 }
	__asm { lea eax, [ebx*8] }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00ca5a76 }
	__asm { L_00ca5a70: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00ca5a76: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00420c60 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, edx }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { test ecx, ecx }
	__asm { je L_00ca5ac6 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push edx }
	__asm { push ecx }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_00ca5ac6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + ebx*8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [edi], esi }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0057db00();
extern "C" void fn_0084f520();
// FUNCTION: ROBLOXSTUDIO 0x00ca63b0
extern "C" __declspec(naked) void asm_00ca63b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { jne L_00ca63c7 }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ca63c7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { xor edx, edx }
	__asm { mov eax, ebx }
	__asm { div esi }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov edi, dword ptr [eax + edx*4] }
	__asm { test edi, edi }
	__asm { je L_00ca641b }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_00ca641b }
	__asm { L_00ca63ee: }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea eax, [ecx - 4] }
	__asm { xor edx, edx }
	__asm { mov eax, esi }
	__asm { div dword ptr [ebp - 4] }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { jne L_00ca641b }
	__asm { cmp esi, ebx }
	__asm { jne L_00ca6413 }
	__asm { test ecx, ecx }
	__asm { je L_00ca640d }
	__asm { lea eax, [ecx - 4] }
	__asm { jmp L_00ca640f }
	__asm { L_00ca640d: }
	__asm { xor eax, eax }
	__asm { L_00ca640f: }
	__asm { cmp ebx, dword ptr [eax] }
	__asm { je L_00ca6426 }
	__asm { L_00ca6413: }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { jne L_00ca63ee }
	__asm { L_00ca641b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ca6426: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00ca6431 }
	__asm { add eax, -4 }
	__asm { jmp L_00ca6433 }
	__asm { L_00ca6431: }
	__asm { xor eax, eax }
	__asm { L_00ca6433: }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { push edi }
	__asm { call fn_0084f520 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { call fn_0057db00 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cb0640();
// FUNCTION: ROBLOXSTUDIO 0x00ca6830
extern "C" __declspec(naked) void asm_00ca6830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { movzx eax, byte ptr [ebx] }
	__asm { inc eax }
	__asm { push edi }
	__asm { add eax, ebx }
	__asm { je L_00ca6847 }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jmp L_00ca684e }
	__asm { L_00ca6847: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00ca684e: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { shr edi, 3 }
	__asm { add edi, dword ptr [esi] }
	__asm { shr edx, 3 }
	__asm { mov ecx, edi }
	__asm { shl ecx, 6 }
	__asm { add ecx, dword ptr [esi + 4] }
	__asm { mov eax, edi }
	__asm { shr eax, 2 }
	__asm { add eax, 0x9e3779b9 }
	__asm { add ecx, edx }
	__asm { add eax, ecx }
	__asm { xor edi, eax }
	__asm { mov ecx, edi }
	__asm { shl ecx, 6 }
	__asm { mov eax, edi }
	__asm { shr eax, 2 }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add eax, 0x9e3779b9 }
	__asm { add eax, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor eax, edi }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00cb0640 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004033d0();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_007b3a00();
extern "C" void fn_00cba450();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ca7710
extern "C" __declspec(naked) void asm_00ca7710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd33840 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x2034] }
	__asm { test ecx, ecx }
	__asm { je L_00ca77df }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cba450 }
	__asm { cmp eax, 1 }
	__asm { jne L_00ca77df }
	__asm { mov eax, dword ptr [esi + 0x21c0] }
	__asm { cmp byte ptr [eax + 0x70], 0 }
	__asm { je L_00ca77cb }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call fn_007b3a00 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { mov ecx, eax }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jb L_00ca778d }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00ca778d: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00ca779b }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00ca779b: }
	__asm { push esi }
	__asm { push eax }
	__asm { push 0xefc770 }
	__asm { push 2 }
	__asm { push dword ptr [ecx] }
	__asm { call fn_00773930 }
	__asm { add esp, 0x14 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_004033d0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00ca77cb }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ca77cb: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ca77df: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004028a0();
extern "C" void fn_004033d0();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_007b3a00();
extern "C" void fn_007cd560();
extern "C" void fn_00811a10();
extern "C" void fn_00cba4d0();
// FUNCTION: ROBLOXSTUDIO 0x00ca7800
extern "C" __declspec(naked) void asm_00ca7800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33840 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test edi, edi }
	__asm { je L_00ca784f }
	__asm { lea ebx, [edi + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00ca784f }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_00811a10 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00ca784c }
	__asm { lea eax, [ebx - 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_00ca78c9 }
	__asm { L_00ca784c: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { L_00ca784f: }
	__asm { mov ecx, dword ptr [esi + 0x2034] }
	__asm { test ecx, ecx }
	__asm { je L_00ca78de }
	__asm { push dword ptr [edi + 0x38] }
	__asm { push edi }
	__asm { call fn_00cba4d0 }
	__asm { cmp eax, 1 }
	__asm { jne L_00ca78de }
	__asm { mov eax, dword ptr [esi + 0x21c0] }
	__asm { cmp byte ptr [eax + 0x70], 0 }
	__asm { je L_00ca78c9 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_007b3a00 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jb L_00ca78a3 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00ca78a3: }
	__asm { push esi }
	__asm { push 0xefc6d8 }
	__asm { push 2 }
	__asm { push dword ptr [eax] }
	__asm { call fn_00773930 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_004033d0 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_004028a0 }
	__asm { L_00ca78c9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ca78de: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004118e0();
extern "C" void fn_007cd560();
extern "C" void fn_00ca6830();
// FUNCTION: ROBLOXSTUDIO 0x00ca90c0
extern "C" __declspec(naked) void asm_00ca90c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { test edi, edi }
	__asm { je L_00ca910e }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00ca910e }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00ca910e }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { L_00ca910e: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 8] }
	__asm { call fn_00ca6830 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { test eax, eax }
	__asm { jne L_00ca9132 }
	__asm { L_00ca9125: }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ca9132: }
	__asm { cmp byte ptr [eax + 0x20], 0 }
	__asm { jne L_00ca9125 }
	__asm { mov byte ptr [eax + 0x20], 1 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { inc dword ptr [ebx + 0x40] }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00ca58a0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ca9b10
extern "C" __declspec(naked) void asm_00ca9b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { cmp dword ptr [esi + 8], eax }
	__asm { ja L_00ca9b26 }
	__asm { push 1 }
	__asm { call fn_00ca58a0 }
	__asm { L_00ca9b26: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { dec ecx }
	__asm { and dword ptr [esi + 0xc], ecx }
	__asm { add eax, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { and ecx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea edi, [ecx*4] }
	__asm { cmp dword ptr [edi + eax], 0 }
	__asm { jne L_00ca9b62 }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_00ca9b5c }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00ca9b5c: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + eax], ecx }
	__asm { L_00ca9b62: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [edi + eax] }
	__asm { pop edi }
	__asm { test edx, edx }
	__asm { je L_00ca9b92 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { L_00ca9b92: }
	__asm { inc dword ptr [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012ac4b0[];
extern "C" char g_012ac4f0[];
extern "C" char g_012ac4f4[];
extern "C" char g_012ac4f8[];
extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00c6b400();
extern "C" void fn_00c6c2f0();
extern "C" void fn_00c6c320();
extern "C" void fn_00c70300();
extern "C" void fn_00c703b0();
extern "C" void fn_00c70570();
// FUNCTION: ROBLOXSTUDIO 0x00caa360
extern "C" __declspec(naked) void asm_00caa360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6894b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x118 }
	__asm { cmp byte ptr [g_012ac4b0], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { je L_00caa45f }
	__asm { lea ecx, [ebp - 0x124] }
	__asm { call fn_00c6c2f0 }
	__asm { lea eax, [ebp - 0x124] }
	__asm { push 0x96 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c70300 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x124] }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00c70570 }
	__asm { add esp, 0x10 }
	__asm { test bl, bl }
	__asm { je L_00caa3de }
	__asm { lea eax, [ebp - 0x124] }
	__asm { push 1 }
	__asm { push eax }
	__asm { call fn_00c703b0 }
	__asm { add esp, 8 }
	__asm { L_00caa3de: }
	__asm { mov ecx, dword ptr [esi + 0xea8] }
	__asm { call fn_00c6b400 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { mov ecx, esi }
	__asm { mov ebx, eax }
	__asm { call fn_00c687d0 }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov ecx, edi }
	__asm { call fn_00c68890 }
	__asm { mov eax, dword ptr [g_012ac4f0] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_012ac4f4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ax, word ptr [g_012ac4f8] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov ecx, edi }
	__asm { lea eax, [esi + 0xeb0] }
	__asm { push eax }
	__asm { call fn_00c688b0 }
	__asm { mov eax, dword ptr [esi + 0x21c0] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { push 0 }
	__asm { push 3 }
	__asm { push dword ptr [eax + 0xd8] }
	__asm { lea eax, [ebp - 0x124] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [edx + 0x4c] }
	__asm { lea ecx, [ebp - 0x124] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c6c320 }
	__asm { L_00caa45f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e1e18[];
extern "C" void fn_00402fd0();
extern "C" void fn_00c6e0a0();
extern "C" void fn_00c70e70();
extern "C" void fn_00caa850();
// FUNCTION: ROBLOXSTUDIO 0x00caa480
extern "C" __declspec(naked) void asm_00caa480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 1] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push eax }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00c6e0a0 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [g_012e1e18] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { add eax, 4 }
	__asm { add esp, 8 }
	__asm { add ecx, 8 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00caa4b6 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00caa4b6: }
	__asm { push edx }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00caa4db }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c70e70 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00caa4db: }
	__asm { push 1 }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00caa850 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004039a0();
extern "C" void fn_00532480();
extern "C" void fn_007b3490();
extern "C" void fn_00c92330();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cac720
extern "C" __declspec(naked) void asm_00cac720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x2034], 0 }
	__asm { je L_00cac7f5 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00c92330 }
	__asm { test al, al }
	__asm { je L_00cac7e1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x90] }
	__asm { push 0x10036d8 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov esi, eax }
	__asm { call fn_004039a0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b3490 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov esi, eax }
	__asm { jb L_00cac79b }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cac79b: }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { cmp esi, ecx }
	__asm { jne L_00cac7b8 }
	__asm { mov cl, 1 }
	__asm { jmp L_00cac7c8 }
	__asm { L_00cac7b8: }
	__asm { test ecx, ecx }
	__asm { je L_00cac7c6 }
	__asm { push esi }
	__asm { call fn_00532480 }
	__asm { mov cl, al }
	__asm { jmp L_00cac7c8 }
	__asm { L_00cac7c6: }
	__asm { xor cl, cl }
	__asm { L_00cac7c8: }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { pop edi }
	__asm { sete al }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cac7e1: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cac7f5: }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c92330 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0044dae0();
extern "C" void fn_00c6cf00();
extern "C" void fn_00c703b0();
extern "C" void fn_00c72310();
extern "C" void fn_00ca90c0();
extern "C" void fn_00cb4530();
extern "C" void fn_00cc7750();
// FUNCTION: ROBLOXSTUDIO 0x00caca80
extern "C" __declspec(naked) void asm_00caca80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x1fd4] }
	__asm { call fn_00cb4530 }
	__asm { cmp byte ptr [ebp - 4], 0 }
	__asm { jne L_00cacb0b }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00cacab0 }
	__asm { lea eax, [edi + 0x1c] }
	__asm { jmp L_00cacab2 }
	__asm { L_00cacab0: }
	__asm { xor eax, eax }
	__asm { L_00cacab2: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0044dae0 }
	__asm { lea ecx, [ebx + 0x4610] }
	__asm { call fn_00ca90c0 }
	__asm { cmp eax, 1 }
	__asm { je L_00cacb0b }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push 0xa }
	__asm { push esi }
	__asm { call fn_00cc7750 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00c703b0 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { push 1 }
	__asm { push dword ptr [ebx + 0x1fdc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c6cf00 }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00c72310 }
	__asm { L_00cacb0b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cad0e0
extern "C" __declspec(naked) void asm_00cad0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35d08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push edi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { mov dword ptr [ebp - 0x54], 0xf }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov byte ptr [ebp - 0x68], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00cad14e }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00cad14e: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { push dword ptr [edi] }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { pop edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00cad187 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00cad187: }
	__asm { cmp dword ptr [ebp - 0x54], 0x10 }
	__asm { jb L_00cad198 }
	__asm { push dword ptr [ebp - 0x68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cad198: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00cad2b0();
// FUNCTION: ROBLOXSTUDIO 0x00cad230
extern "C" __declspec(naked) void asm_00cad230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { push esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_00cad2b0 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_00cad296 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00cad271 }
	__asm { L_00cad267: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00cad267 }
	__asm { L_00cad271: }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00cad28c }
	__asm { L_00cad281: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00cad281 }
	__asm { L_00cad28c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cad296: }
	__asm { mov dword ptr [edx], edx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007a1180();
extern "C" void fn_00cad1b0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00cad2b0
extern "C" __declspec(naked) void asm_00cad2b0()
{
	__asm { L_00cad2b0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6aee0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { jne L_00cad32f }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { call fn_00cad1b0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ebx, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov al, byte ptr [ecx + 0xc] }
	__asm { mov byte ptr [ebx + 0xc], al }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { push ebx }
	__asm { push dword ptr [ecx] }
	__asm { cmovne edi, ebx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call L_00cad2b0 }
	__asm { mov dword ptr [ebx], eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push dword ptr [eax + 8] }
	__asm { mov ecx, esi }
	__asm { call L_00cad2b0 }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { L_00cad32f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_007a1180 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007a1010();
extern "C" void fn_007a1180();
extern "C" void fn_00852410();
extern "C" void fn_00cad230();
extern "C" void fn_00cad360();
extern "C" void fn_00cad3f0();
// FUNCTION: ROBLOXSTUDIO 0x00cad690
extern "C" __declspec(naked) void asm_00cad690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6af18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { call fn_007a1010 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { lea esi, [edi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { test ebx, ebx }
	__asm { je L_00cad77f }
	__asm { cmp edi, ebx }
	__asm { je L_00cad726 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_007a1180 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ebx }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { call fn_00cad230 }
	__asm { L_00cad726: }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov byte ptr [edi + 0xc], 1 }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x18], 0xcad9b0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00cad360 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { jbe L_00cad77f }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00852410 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00cad762 }
	__asm { mov eax, dword ptr [eax + 0xdfc] }
	__asm { jmp L_00cad764 }
	__asm { L_00cad762: }
	__asm { xor eax, eax }
	__asm { L_00cad764: }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push 0x13142fc }
	__asm { mov dword ptr [ebp - 0x18], 0xcadee0 }
	__asm { call fn_00cad3f0 }
	__asm { add esp, 8 }
	__asm { L_00cad77f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10524[];
extern "C" void fn_00402fd0();
extern "C" void fn_00410c40();
extern "C" void fn_00513a40();
// FUNCTION: ROBLOXSTUDIO 0x00cad9d0
extern "C" __declspec(naked) void asm_00cad9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov edi, ecx }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00cada0c }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_00cad9f5 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00cad9f5: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { mov ecx, ebx }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { js L_00cada0c }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { jmp L_00cada11 }
	__asm { L_00cada0c: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { L_00cada11: }
	__asm { lea eax, [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [edi] }
	__asm { je L_00cada47 }
	__asm { lea esi, [eax + 0x28] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12bdfcc }
	__asm { je L_00cada39 }
	__asm { push eax }
	__asm { mov ecx, 0x12bdfcc }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00cada47 }
	__asm { L_00cada39: }
	__asm { mov ecx, esi }
	__asm { call fn_00410c40 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cada47: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" void fn_00402fd0();
extern "C" void fn_00477a00();
extern "C" void fn_00513a40();
// FUNCTION: ROBLOXSTUDIO 0x00cadb70
extern "C" __declspec(naked) void asm_00cadb70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov edi, ecx }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00cadbac }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_00cadb95 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00cadb95: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { mov ecx, ebx }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { js L_00cadbac }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { jmp L_00cadbb1 }
	__asm { L_00cadbac: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { L_00cadbb1: }
	__asm { lea eax, [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [edi] }
	__asm { je L_00cadbe7 }
	__asm { lea esi, [eax + 0x28] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c6c78 }
	__asm { je L_00cadbd9 }
	__asm { push eax }
	__asm { mov ecx, 0x12c6c78 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00cadbe7 }
	__asm { L_00cadbd9: }
	__asm { mov ecx, esi }
	__asm { call fn_00477a00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cadbe7: }
	__asm { fldz }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" void fn_00402fd0();
extern "C" void fn_004038a0();
extern "C" void fn_0044dc00();
extern "C" void fn_00513a40();
// FUNCTION: ROBLOXSTUDIO 0x00cadbf0
extern "C" __declspec(naked) void asm_00cadbf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00cadc34 }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_00cadc1d }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00cadc1d: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { mov ecx, ebx }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { js L_00cadc34 }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { jmp L_00cadc39 }
	__asm { L_00cadc34: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { L_00cadc39: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [edi] }
	__asm { je L_00cadc77 }
	__asm { lea edi, [eax + 0x28] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be0b8 }
	__asm { je L_00cadc61 }
	__asm { push eax }
	__asm { mov ecx, 0x12be0b8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00cadc77 }
	__asm { L_00cadc61: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044dc00 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cadc77: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" void fn_00402fd0();
extern "C" void fn_00513a40();
// FUNCTION: ROBLOXSTUDIO 0x00cadcb0
extern "C" __declspec(naked) void asm_00cadcb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov edi, ecx }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00cadcec }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_00cadcd5 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00cadcd5: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { mov ecx, ebx }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { js L_00cadcec }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { jmp L_00cadcf1 }
	__asm { L_00cadcec: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { L_00cadcf1: }
	__asm { lea eax, [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { je L_00cadd1e }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c6c78 }
	__asm { je L_00cadd1e }
	__asm { push eax }
	__asm { mov ecx, 0x12c6c78 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00cadd1e }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cadd1e: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00513a40();
extern "C" void fn_007a3000();
extern "C" void fn_00b68b70();
extern "C" void fn_00cad7a0();
// FUNCTION: ROBLOXSTUDIO 0x00cadd30
extern "C" __declspec(naked) void asm_00cadd30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov edi, ecx }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00cadd6f }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_00cadd58 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00cadd58: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { mov ecx, ebx }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { js L_00cadd6f }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { jmp L_00cadd74 }
	__asm { L_00cadd6f: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { L_00cadd74: }
	__asm { lea eax, [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [edi] }
	__asm { je L_00cadd8c }
	__asm { add eax, 0x28 }
	__asm { push eax }
	__asm { call fn_00cad7a0 }
	__asm { add esp, 4 }
	__asm { sub dword ptr [edi + 0x10], eax }
	__asm { L_00cadd8c: }
	__asm { push ebx }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b68b70 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007a3000 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007a1010();
extern "C" void fn_007a3000();
extern "C" void fn_007cfc10();
extern "C" void fn_007d54e0();
extern "C" void fn_009453b0();
extern "C" void fn_00c2bfa0();
extern "C" void fn_00c2f660();
extern "C" void fn_00cadb70();
extern "C" void fn_00cae060();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cadde0
extern "C" __declspec(naked) void asm_00cadde0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6af58 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call fn_007a1010 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00cade8d }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00c2bfa0 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00c2f660 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { cmp eax, dword ptr [ebp - 0x14] }
	__asm { je L_00cade8d }
	__asm { push esi }
	__asm { L_00cade48: }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00cadb70 }
	__asm { fstp qword ptr [ebp - 0x24] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_009453b0 }
	__asm { mov esi, eax }
	__asm { call fn_007d54e0 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_007cfc10 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { test eax, eax }
	__asm { je L_00cade82 }
	__asm { add eax, -0x18 }
	__asm { jmp L_00cade84 }
	__asm { L_00cade82: }
	__asm { xor eax, eax }
	__asm { L_00cade84: }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { cmp eax, dword ptr [ebp - 0x14] }
	__asm { jne L_00cade48 }
	__asm { pop esi }
	__asm { L_00cade8d: }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cae060 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { add esp, 8 }
	__asm { mov bl, al }
	__asm { push ecx }
	__asm { push dword ptr [ecx] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007a3000 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov al, bl }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e102c4[];
extern "C" char g_00e102c8[];
extern "C" char g_00e102dc[];
extern "C" char g_00e10318[];
extern "C" char g_00e1031c[];
extern "C" char g_00e10394[];
extern "C" char g_00e103b8[];
extern "C" void fn_00426140();
extern "C" void fn_00532500();
extern "C" void fn_00774920();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cadee0
extern "C" __declspec(naked) void asm_00cadee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6afb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xb8 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [g_00e103b8] }
	__asm { mov dword ptr [ebp - 0xa8], 0x102c20c }
	__asm { mov dword ptr [ebp - 0x58], eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xa4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xa8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e10394] }
	__asm { mov eax, dword ptr [ebp - 0xa8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xa8], 0xe3b85c }
	__asm { mov eax, dword ptr [ebp - 0xa8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x50] }
	__asm { mov dword ptr [ebp + ecx - 0xac], eax }
	__asm { lea ecx, [ebp - 0xa4] }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [ebp - 0xa4], 0xe1827c }
	__asm { mov dword ptr [ebp - 0x6c], 0 }
	__asm { mov dword ptr [ebp - 0x68], 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0xa8] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e102c4] }
	__asm { lea eax, [ebp - 0xc0] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xa8] }
	__asm { call fn_00532500 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { jb L_00cadfc2 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00cadfc2: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0xefd714 }
	__asm { push 0xf13380 }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0xac], 0x10 }
	__asm { jb L_00cadff0 }
	__asm { push dword ptr [ebp - 0xc0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cadff0: }
	__asm { mov eax, dword ptr [ebp - 0xa8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xa8], 0xe3b85c }
	__asm { mov eax, dword ptr [ebp - 0xa8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x50] }
	__asm { mov dword ptr [ebp + ecx - 0xac], eax }
	__asm { lea ecx, [ebp - 0xa4] }
	__asm { mov dword ptr [ebp - 0xa4], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [ebp - 0xa4] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [ebp - 0xa0] }
	__asm { call dword ptr [g_00e102dc] }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410d50();
extern "C" void fn_007a3000();
extern "C" void fn_007d5d30();
extern "C" void fn_009453b0();
extern "C" void fn_00b68b70();
extern "C" void fn_00cad7a0();
extern "C" void fn_00cadd30();
// FUNCTION: ROBLOXSTUDIO 0x00cae220
extern "C" __declspec(naked) void asm_00cae220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov edi, ecx }
	__asm { call fn_00cadd30 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_00cae274 }
	__asm { push esi }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_009453b0 }
	__asm { mov esi, eax }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_00410d50 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_009453b0 }
	__asm { push eax }
	__asm { call fn_00cad7a0 }
	__asm { add eax, dword ptr [edi + 0x10] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { cmp eax, dword ptr [edi + 0x14] }
	__asm { jg L_00cae27e }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { L_00cae274: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cae27e: }
	__asm { push ebx }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b68b70 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_007a3000 }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00402f60();
extern "C" void fn_0048e3f0();
extern "C" void fn_007a3000();
extern "C" void fn_007d5550();
extern "C" void fn_009453b0();
extern "C" void fn_00b68b70();
extern "C" void fn_00cad7a0();
extern "C" void fn_00cadd30();
// FUNCTION: ROBLOXSTUDIO 0x00cae4c0
extern "C" __declspec(naked) void asm_00cae4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00cadd30 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { jb L_00cae4e1 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { jmp L_00cae4e3 }
	__asm { L_00cae4e1: }
	__asm { mov eax, ebx }
	__asm { L_00cae4e3: }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { push eax }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00cae501 }
	__asm { cmp dword ptr [ebx + 0x10], eax }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { je L_00cae53a }
	__asm { L_00cae501: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_009453b0 }
	__asm { mov esi, eax }
	__asm { call fn_007d5550 }
	__asm { push ebx }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_009453b0 }
	__asm { push eax }
	__asm { call fn_00cad7a0 }
	__asm { add eax, dword ptr [edi + 0x10] }
	__asm { add esp, 4 }
	__asm { cmp eax, dword ptr [edi + 0x14] }
	__asm { jg L_00cae545 }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { L_00cae53a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cae545: }
	__asm { push esi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b68b70 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007a3000 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cae570
extern "C" __declspec(naked) void asm_00cae570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xefed10 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xefed48 }
	__asm { mov dword ptr [esi + 8], 0xefed58 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00cae61a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00cae606 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cae606: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00cae61a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01312824[];
extern "C" void fn_007cb250();
extern "C" void fn_007cbf10();
extern "C" void fn_007d5710();
extern "C" void fn_008255d0();
extern "C" void fn_00b489e0();
extern "C" void fn_00c2ccd0();
extern "C" void fn_00c52ad0();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00caf230
extern "C" __declspec(naked) void asm_00caf230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6b10e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_01312824] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { test al, 1 }
	__asm { jne L_00caf2ab }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312824], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xefd73c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_00c2ccd0 }
	__asm { push eax }
	__asm { mov ecx, 0x13126f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0c450 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00caf2ab: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { push 0x13126f8 }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { call fn_00b489e0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xefe1b8 }
	__asm { call fn_00c52ad0 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5710 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_008255d0 }
	__asm { call fn_007d5710 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_008255d0 }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edi], 0xefe1c8 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00caf358 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xefed18 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { jmp L_00caf35a }
	__asm { L_00caf358: }
	__asm { xor eax, eax }
	__asm { L_00caf35a: }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { test ecx, ecx }
	__asm { je L_00caf36a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00caf36a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_01312824[];
extern "C" void fn_007cb250();
extern "C" void fn_007cbf10();
extern "C" void fn_007d5710();
extern "C" void fn_008255d0();
extern "C" void fn_00b489e0();
extern "C" void fn_00c2ccd0();
extern "C" void fn_00c52ad0();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00caf380
extern "C" __declspec(naked) void asm_00caf380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6b13e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_01312824] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { test al, 1 }
	__asm { jne L_00caf3fb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312824], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xefd73c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_00c2ccd0 }
	__asm { push eax }
	__asm { mov ecx, 0x13126f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0c450 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00caf3fb: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x13126f8 }
	__asm { call fn_00b489e0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xefe1ec }
	__asm { call fn_00c52ad0 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5710 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_008255d0 }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edi], 0xefe1fc }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00caf487 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xefed24 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { jmp L_00caf489 }
	__asm { L_00caf487: }
	__asm { xor eax, eax }
	__asm { L_00caf489: }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { test ecx, ecx }
	__asm { je L_00caf499 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00caf499: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_01312824[];
extern "C" void fn_007cb250();
extern "C" void fn_007cbf10();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_008255d0();
extern "C" void fn_00b489e0();
extern "C" void fn_00c2ccd0();
extern "C" void fn_00c52ad0();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00caf4b0
extern "C" __declspec(naked) void asm_00caf4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6b10e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_01312824] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { test al, 1 }
	__asm { jne L_00caf52b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312824], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xefd73c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_00c2ccd0 }
	__asm { push eax }
	__asm { mov ecx, 0x13126f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0c450 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00caf52b: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { push 0x13126f8 }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { call fn_00b489e0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xefe26c }
	__asm { call fn_00c52ad0 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5710 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_008255d0 }
	__asm { call fn_007d5550 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_008255d0 }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edi], 0xefe27c }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00caf5d8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xefed3c }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { jmp L_00caf5da }
	__asm { L_00caf5d8: }
	__asm { xor eax, eax }
	__asm { L_00caf5da: }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { test ecx, ecx }
	__asm { je L_00caf5ea }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00caf5ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_01312824[];
extern "C" void fn_007cbf10();
extern "C" void fn_00c2ccd0();
extern "C" void fn_00cb0c50();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00caf600
extern "C" __declspec(naked) void asm_00caf600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6b166 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_01312824] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00caf67a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312824], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xefd73c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_00c2ccd0 }
	__asm { push eax }
	__asm { mov ecx, 0x13126f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0c450 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00caf67a: }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x13126f8 }
	__asm { call fn_00cb0c50 }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xefe23c }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00caf6d2 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xefed30 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { jmp L_00caf6d4 }
	__asm { L_00caf6d2: }
	__asm { xor eax, eax }
	__asm { L_00caf6d4: }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { test ecx, ecx }
	__asm { je L_00caf6e4 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00caf6e4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00cae570();
extern "C" void fn_00cb4620();
// FUNCTION: ROBLOXSTUDIO 0x00cb02a0
extern "C" __declspec(naked) void asm_00cb02a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00cb02eb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00cb02eb: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00cb0314 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00cae570 }
	__asm { mov dword ptr [esi], 0xefed60 }
	__asm { mov dword ptr [esi + 8], 0xefed70 }
	__asm { jmp L_00cb0316 }
	__asm { L_00cb0314: }
	__asm { xor esi, esi }
	__asm { L_00cb0316: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00cb4620 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00cb033a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00cb033a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00410d50();
extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5390();
extern "C" void fn_007d5d30();
// FUNCTION: ROBLOXSTUDIO 0x00cb0550
extern "C" __declspec(naked) void asm_00cb0550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5d30 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_00410d50 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_004124c0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00cb0b40();
// FUNCTION: ROBLOXSTUDIO 0x00cb07e0
extern "C" __declspec(naked) void asm_00cb07e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cb0b40 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xefe2b0 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5d30 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00cb088e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00cb088e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01312824[];
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00c2ccd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00cb0b40
extern "C" __declspec(naked) void asm_00cb0b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6b226 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_01312824] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00cb0bba }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312824], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xefd73c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_00c2ccd0 }
	__asm { push eax }
	__asm { mov ecx, 0x13126f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe0c450 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00cb0bba: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x13126f8 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xefe2a4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00cb0c32 }
	__asm { push 0x12a13e4 }
	__asm { mov ecx, 0x12a13e4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00cb0c32 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cb0c1d }
	__asm { push 0x1e0 }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cb0c32 }
	__asm { L_00cb0c1d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x10135b0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cb0c32: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_008250d0();
extern "C" void fn_008255d0();
extern "C" void fn_00b489e0();
extern "C" void fn_00c52ad0();
// FUNCTION: ROBLOXSTUDIO 0x00cb0c50
extern "C" __declspec(naked) void asm_00cb0c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31838 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b489e0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xefe22c }
	__asm { call fn_00c52ad0 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5710 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_008255d0 }
	__asm { call fn_007d5550 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_008255d0 }
	__asm { call fn_008250d0 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_008255d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_0090cbe0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00cb2410
extern "C" __declspec(naked) void asm_00cb2410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6b5b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test ebx, ebx }
	__asm { je L_00cb2466 }
	__asm { cmp ebx, 0x3fffffff }
	__asm { ja L_00cb2460 }
	__asm { lea eax, [ebx*4] }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00cb2466 }
	__asm { L_00cb2460: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00cb2466: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi] }
	__asm { call fn_0090cbe0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ecx }
	__asm { sar eax, 2 }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test ecx, ecx }
	__asm { je L_00cb249e }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cb249e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + ebx*4] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10260[];
extern "C" void fn_00cb2410();
// FUNCTION: ROBLOXSTUDIO 0x00cb24e0
extern "C" __declspec(naked) void asm_00cb24e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sar eax, 2 }
	__asm { cmp eax, edi }
	__asm { jae L_00cb254d }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0x3fffffff }
	__asm { sar esi, 2 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00cb2517 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00cb2517: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { pop ebx }
	__asm { jae L_00cb253b }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_00cb2410 }
	__asm { L_00cb253b: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_00cb2410 }
	__asm { L_00cb254d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc979[];
extern "C" void fn_006b8a90();
// FUNCTION: ROBLOXSTUDIO 0x00cb2dd0
extern "C" __declspec(naked) void asm_00cb2dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { cmp eax, dword ptr [esi + 0x4660] }
	__asm { jne L_00cb2e95 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [esi + 0x4664] }
	__asm { jne L_00cb2e23 }
	__asm { mov al, byte ptr [g_012fc979] }
	__asm { test al, al }
	__asm { je L_00cb2e12 }
	__asm { push dword ptr [esi + 0x46a8] }
	__asm { movzx eax, al }
	__asm { push 0xefe550 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00cb2e12: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [esi + 0x46a8], 0xa }
	__asm { pop esi }
	__asm { setge al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cb2e23: }
	__asm { cmp eax, dword ptr [esi + 0x4668] }
	__asm { jne L_00cb2e5c }
	__asm { mov al, byte ptr [g_012fc979] }
	__asm { test al, al }
	__asm { je L_00cb2e4b }
	__asm { push dword ptr [esi + 0x46a8] }
	__asm { movzx eax, al }
	__asm { push 0xefe5a8 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00cb2e4b: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [esi + 0x46a8], 0xb }
	__asm { pop esi }
	__asm { setge al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cb2e5c: }
	__asm { cmp eax, dword ptr [esi + 0x466c] }
	__asm { jne L_00cb2e95 }
	__asm { mov al, byte ptr [g_012fc979] }
	__asm { test al, al }
	__asm { je L_00cb2e84 }
	__asm { push dword ptr [esi + 0x46a8] }
	__asm { movzx eax, al }
	__asm { push 0xefe600 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00cb2e84: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [esi + 0x46a8], 0xe }
	__asm { pop esi }
	__asm { setge al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cb2e95: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00891b10();
extern "C" void fn_00b5c900();
// FUNCTION: ROBLOXSTUDIO 0x00cb2f30
extern "C" __declspec(naked) void asm_00cb2f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00cb2f7f }
	__asm { test esi, esi }
	__asm { jne L_00cb2f7f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00cb2f6e }
	__asm { push 0x120 }
	__asm { push 0xefe348 }
	__asm { push 0xe67470 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cb2f7f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00cb2f6e: }
	__asm { movzx eax, al }
	__asm { push 0xefe390 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cb2f7f: }
	__asm { push dword ptr [esi + 0xe0] }
	__asm { call fn_00b5c900 }
	__asm { push eax }
	__asm { call fn_00891b10 }
	__asm { mov ecx, eax }
	__asm { add esp, 8 }
	__asm { cmp ecx, esi }
	__asm { jne L_00cb2fac }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ecx }
	__asm { mov eax, dword ptr [eax + 0x84] }
	__asm { mov ecx, edi }
	__asm { call eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cb2fac: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00891b10();
extern "C" void fn_008929a0();
extern "C" void fn_00b49710();
extern "C" void fn_00b5c900();
extern "C" void fn_00c72ac0();
// FUNCTION: ROBLOXSTUDIO 0x00cb2fc0
extern "C" __declspec(naked) void asm_00cb2fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00cb306b }
	__asm { test esi, esi }
	__asm { jne L_00cb3014 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cb2fff }
	__asm { push 0x131 }
	__asm { push 0xefe348 }
	__asm { push 0xe67470 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cb3014 }
	__asm { L_00cb2fff: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xefe3e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cb3014: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00cb306b }
	__asm { push dword ptr [esi + 0xe0] }
	__asm { call fn_00b5c900 }
	__asm { push eax }
	__asm { call fn_00891b10 }
	__asm { add esp, 8 }
	__asm { cmp eax, esi }
	__asm { je L_00cb306b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cb3056 }
	__asm { push 0x132 }
	__asm { push 0xefe348 }
	__asm { push 0xefe440 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cb306b }
	__asm { L_00cb3056: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xefe470 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cb306b: }
	__asm { lea eax, [edi + 0xeb0] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_00c72ac0 }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_008929a0 }
	__asm { mov ecx, eax }
	__asm { call fn_00b49710 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { sete cl }
	__asm { pop edi }
	__asm { mov al, cl }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012ad188[];
extern "C" char g_012ad18c[];
extern "C" char g_012ad190[];
extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00c6b400();
extern "C" void fn_00c6c2f0();
extern "C" void fn_00c6c320();
extern "C" void fn_00c70300();
extern "C" void fn_00c70570();
extern "C" void fn_00c82540();
extern "C" void fn_00ca6530();
// FUNCTION: ROBLOXSTUDIO 0x00cb32d0
extern "C" __declspec(naked) void asm_00cb32d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6b6cb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x11c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x46bc], 3 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { jne L_00cb33c4 }
	__asm { lea ecx, [ebp - 0x128] }
	__asm { mov dword ptr [esi + 0x46bc], 4 }
	__asm { call fn_00c6c2f0 }
	__asm { lea eax, [ebp - 0x128] }
	__asm { push 0x92 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c70300 }
	__asm { lea eax, [ebp - 0x128] }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00c70570 }
	__asm { mov ecx, dword ptr [esi + 0xea8] }
	__asm { add esp, 0x10 }
	__asm { call fn_00c6b400 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { mov ecx, esi }
	__asm { mov ebx, eax }
	__asm { call fn_00c687d0 }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov ecx, edi }
	__asm { call fn_00c68890 }
	__asm { mov eax, dword ptr [g_012ad188] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_012ad18c] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ax, word ptr [g_012ad190] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov ecx, edi }
	__asm { lea eax, [esi + 0xeb0] }
	__asm { push eax }
	__asm { call fn_00c688b0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { push 3 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x128] }
	__asm { push ecx }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x178] }
	__asm { lea ecx, [ebp - 0x128] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c6c320 }
	__asm { L_00cb33c4: }
	__asm { lea ecx, [esi + 0x4610] }
	__asm { call fn_00ca6530 }
	__asm { mov ecx, esi }
	__asm { call fn_00c82540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00410bb0();
extern "C" void fn_00412300();
extern "C" void fn_006b9740();
extern "C" void fn_00cb1dc0();
// FUNCTION: ROBLOXSTUDIO 0x00cb4180
extern "C" __declspec(naked) void asm_00cb4180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_00cb41ea }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_00cb41ea }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cb41d9 }
	__asm { push 0x169 }
	__asm { push 0xeee758 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cb41ea }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00cb41d9: }
	__asm { movzx eax, bl }
	__asm { push 0xeef570 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cb41ea: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00cb41f6 }
	__asm { lea ebx, [eax - 0x1c] }
	__asm { jmp L_00cb41f8 }
	__asm { L_00cb41f6: }
	__asm { xor ebx, ebx }
	__asm { L_00cb41f8: }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0x8c }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_00410bb0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, ebx }
	__asm { push dword ptr [eax] }
	__asm { call fn_00cb1dc0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01314468[];
extern "C" void fn_006b9740();
extern "C" void fn_00c6c2f0();
extern "C" void fn_00c6c320();
extern "C" void fn_00c6ca60();
extern "C" void fn_00c70300();
extern "C" void fn_00c81bd0();
extern "C" void fn_00c91cd0();
extern "C" void fn_00c9cf90();
// FUNCTION: ROBLOXSTUDIO 0x00cb4250
extern "C" __declspec(naked) void asm_00cb4250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6b80b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x114 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00cb42b6 }
	__asm { call fn_00c9cf90 }
	__asm { test al, al }
	__asm { jne L_00cb42b6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cb42a1 }
	__asm { push 0x729 }
	__asm { push 0xefe348 }
	__asm { push 0xefeae0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cb42b6 }
	__asm { L_00cb42a1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xefeb08 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cb42b6: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_00cb42c8 }
	__asm { mov ecx, 0x1314468 }
	__asm { call fn_00c6ca60 }
	__asm { jmp L_00cb42d7 }
	__asm { L_00cb42c8: }
	__asm { mov eax, dword ptr [g_01314468] }
	__asm { add eax, 7 }
	__asm { test eax, 0xfffffff8 }
	__asm { ja L_00cb4336 }
	__asm { L_00cb42d7: }
	__asm { push 0x82 }
	__asm { push 0x1314468 }
	__asm { call fn_00c70300 }
	__asm { add esp, 8 }
	__asm { lea ecx, [ebp - 0x120] }
	__asm { call fn_00c6c2f0 }
	__asm { push 1 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x120] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c91cd0 }
	__asm { push 9 }
	__asm { lea eax, [ebp - 0x120] }
	__asm { push 0x1314468 }
	__asm { push eax }
	__asm { call fn_00c81bd0 }
	__asm { add esp, 0x1c }
	__asm { lea ecx, [ebp - 0x120] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c6c320 }
	__asm { L_00cb4336: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc979[];
extern "C" void fn_00403540();
extern "C" void fn_006b8a90();
extern "C" void fn_007b5ea0();
extern "C" void fn_00c4bdb0();
extern "C" void fn_00c51790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cb47d0
extern "C" __declspec(naked) void asm_00cb47d0()
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
	__asm { mov esi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x46c4] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x46ac] }
	__asm { call fn_00c51790 }
	__asm { mov ecx, dword ptr [esi + 0x46ac] }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x20d4] }
	__asm { call fn_007b5ea0 }
	__asm { mov al, byte ptr [g_012fc979] }
	__asm { test al, al }
	__asm { je L_00cb4853 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xefe740 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00cb4853: }
	__asm { mov eax, dword ptr [esi + 0x20d4] }
	__asm { cmp byte ptr [eax + 0x159], 0 }
	__asm { je L_00cb4892 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x46ac] }
	__asm { push 1 }
	__asm { call fn_00c4bdb0 }
	__asm { L_00cb4892: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00cb48a3 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cb48a3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_00c88290();
extern "C" void fn_00cb5c90();
// FUNCTION: ROBLOXSTUDIO 0x00cb5f20
extern "C" __declspec(naked) void asm_00cb5f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { call fn_00c88290 }
	__asm { test esi, esi }
	__asm { je L_00cb5f3e }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { jmp L_00cb5f40 }
	__asm { L_00cb5f3e: }
	__asm { xor ecx, ecx }
	__asm { L_00cb5f40: }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00cb5f99 }
	__asm { test ecx, ecx }
	__asm { je L_00cb5f99 }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_00cb5f99 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cb5f84 }
	__asm { push 0x100 }
	__asm { push 0xf14248 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cb5f99 }
	__asm { L_00cb5f84: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x10080d0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cb5f99: }
	__asm { lea ecx, [ebx + 0x4610] }
	__asm { call fn_00cb5c90 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006da0e0();
extern "C" void fn_006ded80();
extern "C" void fn_00c4ae10();
extern "C" void fn_00ccc0f0();
// FUNCTION: ROBLOXSTUDIO 0x00cb6be0
extern "C" __declspec(naked) void asm_00cb6be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { call dword ptr [eax + 0x90] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00cb6c4f }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_006da0e0 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c4ae10 }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { je L_00cb6c4f }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_006ded80 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [edx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [edx + 4] }
	__asm { fld dword ptr [esi + 0xd0] }
	__asm { fstp dword ptr [edx + 8] }
	__asm { mov ecx, dword ptr [edi + 0x20f8] }
	__asm { test ecx, ecx }
	__asm { je L_00cb6c44 }
	__asm { push edx }
	__asm { call fn_00ccc0f0 }
	__asm { L_00cb6c44: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cb6c4f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10264[];
extern "C" void fn_0044dae0();
extern "C" void fn_00c6c7a0();
extern "C" void fn_00c6d460();
extern "C" void fn_00c710b0();
extern "C" void fn_00cb61e0();
// FUNCTION: ROBLOXSTUDIO 0x00cb6cb0
extern "C" __declspec(naked) void asm_00cb6cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_00c6d460 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [esi + 0x1fec] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { call fn_00c6c7a0 }
	__asm { mov ecx, dword ptr [esi + 0x1fe0] }
	__asm { mov eax, dword ptr [esi + 0x1fe4] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { cmp eax, edx }
	__asm { ja L_00cb6d08 }
	__asm { push 0x1017a80 }
	__asm { call dword ptr [g_00e10264] }
	__asm { L_00cb6d08: }
	__asm { mov ebx, dword ptr [ecx + edx*8] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00c710b0 }
	__asm { test al, al }
	__asm { je L_00cb6d47 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { test eax, eax }
	__asm { je L_00cb6d2b }
	__asm { add eax, 0x1c }
	__asm { jmp L_00cb6d2d }
	__asm { L_00cb6d2b: }
	__asm { xor eax, eax }
	__asm { L_00cb6d2d: }
	__asm { push dword ptr [ebp - 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_0044dae0 }
	__asm { lea ecx, [esi + 0x4610] }
	__asm { call fn_00cb61e0 }
	__asm { L_00cb6d47: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012ad188[];
extern "C" char g_012ad18c[];
extern "C" char g_012ad190[];
extern "C" char g_0131430b[];
extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00c6b400();
extern "C" void fn_00c8ee90();
extern "C" void fn_00c9cf90();
extern "C" void fn_00cb44d0();
// FUNCTION: ROBLOXSTUDIO 0x00cb7320
extern "C" __declspec(naked) void asm_00cb7320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { call fn_00c9cf90 }
	__asm { test al, al }
	__asm { je L_00cb73b4 }
	__asm { cmp byte ptr [g_0131430b], 0 }
	__asm { je L_00cb73b4 }
	__asm { mov ecx, dword ptr [ebx + 0xea8] }
	__asm { call fn_00c6b400 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { mov ecx, esi }
	__asm { mov ebx, eax }
	__asm { call fn_00c687d0 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c68890 }
	__asm { mov eax, dword ptr [g_012ad188] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_012ad18c] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ax, word ptr [g_012ad190] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add eax, 0xeb0 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c688b0 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ecx + 0x21c0] }
	__asm { push 0 }
	__asm { push 3 }
	__asm { push dword ptr [eax + 0xd8] }
	__asm { call fn_00cb44d0 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [esi + 0x4c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cb73b4: }
	__asm { mov ecx, ebx }
	__asm { call fn_00c8ee90 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cc4dc0();
extern "C" void fn_00cc4df0();
extern "C" void fn_00cc5430();
extern "C" void fn_00d02cd0();
// FUNCTION: ROBLOXSTUDIO 0x00cb7cd0
extern "C" __declspec(naked) void asm_00cb7cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6bb70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00cb7cf8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_00cb7cfa }
	__asm { L_00cb7cf8: }
	__asm { mov eax, edi }
	__asm { L_00cb7cfa: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00cc4dc0 }
	__asm { add esp, 8 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { jb L_00cb7d1b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { jmp L_00cb7d1d }
	__asm { L_00cb7d1b: }
	__asm { mov eax, ebx }
	__asm { L_00cb7d1d: }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00cc4dc0 }
	__asm { add esp, 8 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cc5430 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00cc5430 }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00d02cd0 }
	__asm { add esp, 8 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00cc4df0 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00cc4df0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01313910[];
extern "C" char g_01313914[];
extern "C" void fn_00c6c4d0();
extern "C" void fn_00c6ca80();
extern "C" void fn_00c6cf00();
extern "C" void fn_00d02cbe();
extern "C" void fn_00d02cd6();
// FUNCTION: ROBLOXSTUDIO 0x00cb7d80
extern "C" __declspec(naked) void asm_00cb7d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6710e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { call fn_00d02cd6 }
	__asm { movzx eax, ax }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [g_01313914] }
	__asm { test al, 1 }
	__asm { jne L_00cb7dd1 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313914], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6c4d0 }
	__asm { mov byte ptr [g_01313910], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_00cb7dd6 }
	__asm { L_00cb7dd1: }
	__asm { mov al, byte ptr [g_01313910] }
	__asm { L_00cb7dd6: }
	__asm { push esi }
	__asm { test al, al }
	__asm { jne L_00cb7df2 }
	__asm { push 2 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00c6ca80 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x10] }
	__asm { jmp L_00cb7df5 }
	__asm { L_00cb7df2: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { L_00cb7df5: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c6cf00 }
	__asm { push 2 }
	__asm { push esi }
	__asm { push 0xcb7cd0 }
	__asm { call fn_00d02cbe }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012ad188[];
extern "C" char g_012ad18c[];
extern "C" char g_012ad190[];
extern "C" char g_012fc979[];
extern "C" void fn_006b8a90();
extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00c6b400();
extern "C" void fn_00cb45c0();
// FUNCTION: ROBLOXSTUDIO 0x00cb8350
extern "C" __declspec(naked) void asm_00cb8350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012fc979] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { test al, al }
	__asm { je L_00cb8378 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xefecec }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00cb8378: }
	__asm { mov ecx, dword ptr [ebx + 0xea8] }
	__asm { call fn_00c6b400 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { mov ecx, esi }
	__asm { mov ebx, eax }
	__asm { call fn_00c687d0 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c68890 }
	__asm { mov eax, dword ptr [g_012ad188] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_012ad18c] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ax, word ptr [g_012ad190] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add eax, 0xeb0 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c688b0 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ecx + 0x21c0] }
	__asm { push 0 }
	__asm { push 3 }
	__asm { push dword ptr [eax + 0xd8] }
	__asm { call fn_00cb45c0 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [esi + 0x4c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf33a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00cb8fc0
extern "C" __declspec(naked) void asm_00cb8fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6bc38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [esi + 4], edi }
	__asm { jbe L_00cb9011 }
	__asm { push ebx }
	__asm { nop }
	__asm { L_00cb8ff0: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ebx, dword ptr [eax + edi*8 + 4] }
	__asm { test ebx, ebx }
	__asm { je L_00cb900a }
	__asm { mov ecx, ebx }
	__asm { call fn_00cf33a0 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cb900a: }
	__asm { inc edi }
	__asm { cmp edi, dword ptr [esi + 4] }
	__asm { jb L_00cb8ff0 }
	__asm { pop ebx }
	__asm { L_00cb9011: }
	__asm { mov byte ptr [esi + 0x14], 0 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_00cb906d }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { je L_00cb906d }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jbe L_00cb906d }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00cb906d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6bf70();
extern "C" void fn_00cb92e0();
extern "C" void fn_00cf34d0();
// FUNCTION: ROBLOXSTUDIO 0x00cb90f0
extern "C" __declspec(naked) void asm_00cb90f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { movzx ebx, byte ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push 0xcb94f0 }
	__asm { lea eax, [ebp + 0x17] }
	__asm { push eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { call fn_00cb92e0 }
	__asm { cmp byte ptr [ebp + 0x17], 0 }
	__asm { jne L_00cb9123 }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00cb9123: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { jle L_00cb916f }
	__asm { push 0xcb94f0 }
	__asm { lea eax, [ebp + 0x17] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp + 0xc], ebx }
	__asm { call fn_00cb92e0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + eax*8 + 4] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00c6bf70 }
	__asm { test al, al }
	__asm { je L_00cb916f }
	__asm { mov eax, dword ptr [ebx] }
	__asm { sub eax, dword ptr [ebx + 8] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { cmp eax, ecx }
	__asm { jae L_00cb917a }
	__asm { L_00cb916f: }
	__asm { pop esi }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00cb917a: }
	__asm { push edi }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { call fn_00cf34d0 }
	__asm { cmp eax, esi }
	__asm { jge L_00cb9199 }
	__asm { pop esi }
	__asm { mov byte ptr [eax + edi], 0 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00cb9199: }
	__asm { mov byte ptr [edi + esi - 1], 0 }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cb92e0
extern "C" __declspec(naked) void asm_00cb92e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test eax, eax }
	__asm { jne L_00cb92fc }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [eax], 0 }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cb92fc: }
	__asm { push ebx }
	__asm { lea ebx, [eax - 1] }
	__asm { cdq }
	__asm { push esi }
	__asm { sub eax, edx }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { sar esi, 1 }
	__asm { push edi }
	__asm { lea eax, [eax + esi*8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { xor edi, edi }
	__asm { call dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00cb934f }
	__asm { L_00cb931e: }
	__asm { jns L_00cb9325 }
	__asm { lea ebx, [esi - 1] }
	__asm { jmp L_00cb9328 }
	__asm { L_00cb9325: }
	__asm { lea edi, [esi + 1] }
	__asm { L_00cb9328: }
	__asm { mov eax, ebx }
	__asm { sub eax, edi }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov esi, eax }
	__asm { sar esi, 1 }
	__asm { add esi, edi }
	__asm { cmp edi, ebx }
	__asm { jg L_00cb9360 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea eax, [eax + esi*8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00cb931e }
	__asm { L_00cb934f: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov byte ptr [eax], 1 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cb9360: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00cb9380
extern "C" __declspec(naked) void asm_00cb9380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { jne L_00cb93fa }
	__asm { test eax, eax }
	__asm { jne L_00cb939c }
	__asm { mov dword ptr [esi + 8], 0x10 }
	__asm { jmp L_00cb93a1 }
	__asm { L_00cb939c: }
	__asm { add eax, eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_00cb93a1: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push ebx }
	__asm { test eax, eax }
	__asm { jne L_00cb93ad }
	__asm { xor ebx, ebx }
	__asm { jmp L_00cb93c8 }
	__asm { L_00cb93ad: }
	__asm { xor ecx, ecx }
	__asm { mov edx, 8 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { push ecx }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { mov ebx, eax }
	__asm { L_00cb93c8: }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [esi + 4], edi }
	__asm { jbe L_00cb93ed }
	__asm { nop }
	__asm { L_00cb93d0: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea edx, [edi*8] }
	__asm { inc edi }
	__asm { mov eax, dword ptr [ecx + edx] }
	__asm { mov dword ptr [edx + ebx], eax }
	__asm { mov eax, dword ptr [ecx + edx + 4] }
	__asm { mov dword ptr [edx + ebx + 4], eax }
	__asm { cmp edi, dword ptr [esi + 4] }
	__asm { jb L_00cb93d0 }
	__asm { L_00cb93ed: }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], ebx }
	__asm { pop ebx }
	__asm { L_00cb93fa: }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp edx, edi }
	__asm { je L_00cb9419 }
	__asm { L_00cb9404: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [eax + edx*8] }
	__asm { dec edx }
	__asm { mov eax, dword ptr [ecx - 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ecx - 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { cmp edx, edi }
	__asm { jne L_00cb9404 }
	__asm { L_00cb9419: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [eax + edi*8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00cb9440
extern "C" __declspec(naked) void asm_00cb9440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { jne L_00cb94bf }
	__asm { test eax, eax }
	__asm { jne L_00cb945b }
	__asm { mov dword ptr [esi + 8], 0x10 }
	__asm { jmp L_00cb9460 }
	__asm { L_00cb945b: }
	__asm { add eax, eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_00cb9460: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push ebx }
	__asm { test eax, eax }
	__asm { jne L_00cb946c }
	__asm { xor ebx, ebx }
	__asm { jmp L_00cb9487 }
	__asm { L_00cb946c: }
	__asm { xor ecx, ecx }
	__asm { mov edx, 8 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { push ecx }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { mov ebx, eax }
	__asm { L_00cb9487: }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00cb94bc }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [esi + 4], edi }
	__asm { jbe L_00cb94b1 }
	__asm { L_00cb9494: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea edx, [edi*8] }
	__asm { inc edi }
	__asm { mov eax, dword ptr [ecx + edx] }
	__asm { mov dword ptr [edx + ebx], eax }
	__asm { mov eax, dword ptr [ecx + edx + 4] }
	__asm { mov dword ptr [edx + ebx + 4], eax }
	__asm { cmp edi, dword ptr [esi + 4] }
	__asm { jb L_00cb9494 }
	__asm { L_00cb94b1: }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { L_00cb94bc: }
	__asm { mov dword ptr [esi], ebx }
	__asm { pop ebx }
	__asm { L_00cb94bf: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea edx, [eax + ecx*8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012fc969[];
extern "C" void fn_005451a0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00cb9840
extern "C" __declspec(naked) void asm_00cb9840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012fc969] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test al, al }
	__asm { je L_00cb9886 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_00cb9856: }
	__asm { test edi, edi }
	__asm { je L_00cb9886 }
	__asm { lea ebx, [edi + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00cb987f }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_005451a0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00cb987a }
	__asm { add ebx, -0x1c }
	__asm { jne L_00cb9891 }
	__asm { L_00cb987a: }
	__asm { mov al, byte ptr [g_012fc969] }
	__asm { L_00cb987f: }
	__asm { mov edi, dword ptr [edi + 0x38] }
	__asm { test al, al }
	__asm { jne L_00cb9856 }
	__asm { L_00cb9886: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cb9891: }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x90] }
	__asm { test eax, eax }
	__asm { je L_00cb9886 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x90] }
	__asm { cmp ebx, eax }
	__asm { je L_00cb9886 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004030b0();
extern "C" void fn_00403540();
extern "C" void fn_009fe3b0();
extern "C" void fn_009ff570();
extern "C" void fn_009ff660();
extern "C" void fn_00a01040();
// FUNCTION: ROBLOXSTUDIO 0x00cb9af0
extern "C" __declspec(naked) void asm_00cb9af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e1d1 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_004030b0 }
	__asm { movzx edx, byte ptr [esi] }
	__asm { lea ecx, [esi + 1] }
	__asm { add esp, 4 }
	__asm { mov ebx, eax }
	__asm { add ecx, edx }
	__asm { je L_00cb9b28 }
	__asm { inc ecx }
	__asm { jmp L_00cb9b2a }
	__asm { L_00cb9b28: }
	__asm { xor ecx, ecx }
	__asm { L_00cb9b2a: }
	__asm { push ecx }
	__asm { push edi }
	__asm { push ebx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009fe3b0 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00cb9bc3 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_009ff660 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00cb9b81 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push edx }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_00cb9b81: }
	__asm { mov byte ptr [edi + 9], 1 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { jbe L_00cb9bb6 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { sub ecx, edx }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add eax, dword ptr [esi + 8] }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00a01040 }
	__asm { L_00cb9bb6: }
	__asm { push ebx }
	__asm { push edi }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009ff570 }
	__asm { L_00cb9bc3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00cb9af0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cb9be0
extern "C" __declspec(naked) void asm_00cb9be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6bc78 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { lea eax, [ebx + 3] }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { je L_00cb9c0a }
	__asm { inc eax }
	__asm { jmp L_00cb9c0c }
	__asm { L_00cb9c0a: }
	__asm { xor eax, eax }
	__asm { L_00cb9c0c: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cb9af0 }
	__asm { add esi, 0x18 }
	__asm { cmp esi, edi }
	__asm { je L_00cb9c55 }
	__asm { L_00cb9c40: }
	__asm { push edi }
	__asm { push esi }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00cb9af0 }
	__asm { add esi, 0x18 }
	__asm { cmp esi, edi }
	__asm { jne L_00cb9c40 }
	__asm { L_00cb9c55: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { test esi, esi }
	__asm { je L_00cb9c8c }
	__asm { cmp byte ptr [ebp - 0xf], 0 }
	__asm { je L_00cb9c83 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00cb9c72 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cb9c72: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_00cb9c83: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cb9c8c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00c2bb70();
// FUNCTION: ROBLOXSTUDIO 0x00cb9ca0
extern "C" __declspec(naked) void asm_00cb9ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd64f90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x12a125c }
	__asm { mov edi, ecx }
	__asm { push 0xefeecc }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xef2658 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { mov dword ptr [edi + 0x60], 0 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { push 0xefeedc }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00c2bb70 }
	__asm { push 0xefeee8 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_00c2bb70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005451a0();
extern "C" void fn_007cd560();
extern "C" void fn_0082a980();
// FUNCTION: ROBLOXSTUDIO 0x00cba4d0
extern "C" __declspec(naked) void asm_00cba4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00cba57c }
	__asm { lea ebx, [edi + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00cba57c }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_005451a0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00cba57c }
	__asm { add ebx, -0x1c }
	__asm { je L_00cba57c }
	__asm { mov edi, dword ptr [edi + 0x38] }
	__asm { test edi, edi }
	__asm { je L_00cba53b }
	__asm { add edi, 0x1c }
	__asm { je L_00cba53b }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0082a980 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00cba53b }
	__asm { add edi, -0x1c }
	__asm { je L_00cba53b }
	__asm { cmp dword ptr [edi + 0x178], ebx }
	__asm { jne L_00cba57c }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cba53b: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00cba56c }
	__asm { add edi, 0x1c }
	__asm { je L_00cba56c }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0082a980 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00cba56c }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { sete al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cba56c: }
	__asm { xor edi, edi }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { sete al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cba57c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004833f0();
extern "C" void fn_0068a630();
extern "C" void fn_007cd560();
extern "C" void fn_00cb97e0();
extern "C" void fn_00cb9810();
extern "C" void fn_00cba850();
// FUNCTION: ROBLOXSTUDIO 0x00cba770
extern "C" __declspec(naked) void asm_00cba770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov edi, 1 }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jne L_00cba797 }
	__asm { xor edi, edi }
	__asm { mov eax, ecx }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cba797: }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { je L_00cba83c }
	__asm { push ebx }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_004833f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00cba7c1 }
	__asm { lea eax, [ebx - 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_00cba7f2 }
	__asm { L_00cba7c1: }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0068a630 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00cba7dc }
	__asm { lea eax, [ebx - 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_00cba7f2 }
	__asm { L_00cba7dc: }
	__asm { mov ecx, ebx }
	__asm { call fn_00cb97e0 }
	__asm { test eax, eax }
	__asm { jne L_00cba7f2 }
	__asm { mov ecx, ebx }
	__asm { call fn_00cb9810 }
	__asm { test eax, eax }
	__asm { je L_00cba83a }
	__asm { L_00cba7f2: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x90] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { test eax, eax }
	__asm { je L_00cba83a }
	__asm { mov eax, dword ptr [eax + 0x64] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00cba826 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00cba850 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00cba826 }
	__asm { xor edi, edi }
	__asm { jmp L_00cba83a }
	__asm { L_00cba826: }
	__asm { push dword ptr [ebp - 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00cba850 }
	__asm { xor ecx, ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { cmovne edi, ecx }
	__asm { L_00cba83a: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_00cba83c: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00532480();
extern "C" void fn_006b9740();
extern "C" void fn_00c2bee0();
extern "C" void fn_00c307f0();
// FUNCTION: ROBLOXSTUDIO 0x00cba850
extern "C" __declspec(naked) void asm_00cba850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 0x38] }
	__asm { cmp esi, eax }
	__asm { je L_00cba8d3 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00cba8b0 }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_00cba8b0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cba89b }
	__asm { push 0x127 }
	__asm { push 0xefeef4 }
	__asm { push 0xefef34 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cba8b0 }
	__asm { L_00cba89b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xefef60 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cba8b0: }
	__asm { test esi, esi }
	__asm { jne L_00cba8ba }
	__asm { L_00cba8b4: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cba8ba: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp esi, eax }
	__asm { je L_00cba93d }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00532480 }
	__asm { test al, al }
	__asm { je L_00cba8b4 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cba8d3: }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { cmp eax, edx }
	__asm { je L_00cba8ef }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { cmp edx, ecx }
	__asm { je L_00cba8ef }
	__asm { test ecx, ecx }
	__asm { je L_00cba8b4 }
	__asm { push edx }
	__asm { call fn_00532480 }
	__asm { test al, al }
	__asm { je L_00cba8b4 }
	__asm { L_00cba8ef: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00cba93d }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c307f0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_00cba93d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cba928 }
	__asm { push 0x133 }
	__asm { push 0xefeef4 }
	__asm { push 0xefefd4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cba93d }
	__asm { L_00cba928: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeff000 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cba93d: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf64a0();
extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x00cbad90
extern "C" __declspec(naked) void asm_00cbad90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6dd9b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { jne L_00cbadc3 }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cbadc3: }
	__asm { xor ecx, ecx }
	__asm { mov eax, esi }
	__asm { mov edx, 8 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { xor eax, eax }
	__asm { add ecx, 4 }
	__asm { setb al }
	__asm { neg eax }
	__asm { or eax, ecx }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00cbae22 }
	__asm { push 0x403160 }
	__asm { push 0x403a30 }
	__asm { push esi }
	__asm { lea edi, [eax + 4] }
	__asm { push 8 }
	__asm { push edi }
	__asm { mov dword ptr [eax], esi }
	__asm { call fn_00cf676b }
	__asm { mov eax, edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cbae22: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor edi, edi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf64a0();
extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x00cbae40
extern "C" __declspec(naked) void asm_00cbae40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6dd9b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { jne L_00cbae73 }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cbae73: }
	__asm { xor ecx, ecx }
	__asm { mov eax, esi }
	__asm { mov edx, 0x10 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { xor eax, eax }
	__asm { add ecx, 4 }
	__asm { setb al }
	__asm { neg eax }
	__asm { or eax, ecx }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00cbaed2 }
	__asm { push 0x403160 }
	__asm { push 0x403a30 }
	__asm { push esi }
	__asm { lea edi, [eax + 4] }
	__asm { push 0x10 }
	__asm { push edi }
	__asm { mov dword ptr [eax], esi }
	__asm { call fn_00cf676b }
	__asm { mov eax, edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cbaed2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor edi, edi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01313910[];
extern "C" char g_01313914[];
extern "C" void fn_00c6c4d0();
// FUNCTION: ROBLOXSTUDIO 0x00cbaf10
extern "C" __declspec(naked) void asm_00cbaf10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6710e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { lea eax, [edx - 1] }
	__asm { and eax, 7 }
	__asm { sub edx, eax }
	__asm { lea eax, [edx + 7] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { add eax, 0x18 }
	__asm { cmp eax, dword ptr [esi] }
	__asm { jbe L_00cbaf56 }
	__asm { xor al, al }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cbaf56: }
	__asm { mov eax, dword ptr [g_01313914] }
	__asm { test al, 1 }
	__asm { jne L_00cbaf7a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313914], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6c4d0 }
	__asm { mov byte ptr [g_01313910], al }
	__asm { jmp L_00cbaf7f }
	__asm { L_00cbaf7a: }
	__asm { mov al, byte ptr [g_01313910] }
	__asm { L_00cbaf7f: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { shr ecx, 3 }
	__asm { test al, al }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov al, byte ptr [ecx + eax] }
	__asm { jne L_00cbafba }
	__asm { mov byte ptr [edx], al }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { shr ecx, 3 }
	__asm { mov al, byte ptr [ecx + eax + 1] }
	__asm { mov byte ptr [edx + 1], al }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { shr ecx, 3 }
	__asm { mov al, byte ptr [ecx + eax + 2] }
	__asm { mov byte ptr [edx + 2], al }
	__asm { mov byte ptr [edx + 3], 0 }
	__asm { jmp L_00cbafe0 }
	__asm { L_00cbafba: }
	__asm { mov byte ptr [edx + 3], al }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { shr ecx, 3 }
	__asm { mov al, byte ptr [ecx + eax + 1] }
	__asm { mov byte ptr [edx + 2], al }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { shr ecx, 3 }
	__asm { mov al, byte ptr [ecx + eax + 2] }
	__asm { mov byte ptr [edx + 1], al }
	__asm { mov byte ptr [edx], 0 }
	__asm { L_00cbafe0: }
	__asm { add dword ptr [esi + 8], 0x18 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cbbae0();
extern "C" void fn_00cbf810();
extern "C" void fn_00cc0010();
// FUNCTION: ROBLOXSTUDIO 0x00cbb920
extern "C" __declspec(naked) void asm_00cbb920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov edx, dword ptr [esi + 0x24] }
	__asm { push edi }
	__asm { lea edi, [esi + 0x20] }
	__asm { cmp edx, ecx }
	__asm { ja L_00cbb93b }
	__asm { sub ecx, edx }
	__asm { jmp L_00cbb942 }
	__asm { L_00cbb93b: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { sub eax, edx }
	__asm { add ecx, eax }
	__asm { L_00cbb942: }
	__asm { cmp ecx, 0x200 }
	__asm { jbe L_00cbb972 }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, esi }
	__asm { call fn_00cc0010 }
	__asm { inc dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cmp eax, dword ptr [edi + 0xc] }
	__asm { jne L_00cbb96b }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { L_00cbb96b: }
	__asm { inc dword ptr [esi + 0x50] }
	__asm { mov byte ptr [esi + 0x53], 0 }
	__asm { L_00cbb972: }
	__asm { push 0xe80 }
	__asm { push 0xeff248 }
	__asm { lea ecx, [esi + 0x30] }
	__asm { call fn_00cbbae0 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov esi, eax }
	__asm { push 0xe83 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { push 0xeff248 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [esi], ecx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { call fn_00cbf810 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012afa44[];
extern "C" void fn_00cbe6a0();
// FUNCTION: ROBLOXSTUDIO 0x00cbba10
extern "C" __declspec(naked) void asm_00cbba10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { jle L_00cbba8a }
	__asm { mov esi, dword ptr [edi] }
	__asm { dec dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax + edx*4] }
	__asm { jne L_00cbba82 }
	__asm { dec dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { test ecx, ecx }
	__asm { jne L_00cbba64 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0xc], esi }
	__asm { mov dword ptr [esi + 0x10], esi }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cbba64: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [ecx + 0xc], esi }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 0x10], esi }
	__asm { L_00cbba82: }
	__asm { pop edi }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cbba8a: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x14 }
	__asm { call dword ptr [g_012afa44] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [edi], eax }
	__asm { test eax, eax }
	__asm { jne L_00cbbaaa }
	__asm { L_00cbbaa2: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cbbaaa: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { push eax }
	__asm { mov dword ptr [edi + 8], 1 }
	__asm { call fn_00cbe6a0 }
	__asm { test al, al }
	__asm { je L_00cbbaa2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { dec dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cbbcc0();
extern "C" void fn_00cbd0d0();
extern "C" void fn_00cc07b0();
// FUNCTION: ROBLOXSTUDIO 0x00cbbc00
extern "C" __declspec(naked) void asm_00cbbc00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov eax, ecx }
	__asm { push edi }
	__asm { lea edi, [eax + 0x8a8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push 0xcc0fc0 }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00cbd0d0 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov edx, dword ptr [eax + esi*4] }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { cmp eax, dword ptr [ecx + 0x14] }
	__asm { jne L_00cbbca8 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cc07b0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp - 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, ebx }
	__asm { call fn_00cbbcc0 }
	__asm { mov ecx, dword ptr [ebx + 0x8ac] }
	__asm { lea edx, [ebx + 0x8a8] }
	__asm { mov edi, eax }
	__asm { pop ebx }
	__asm { cmp esi, ecx }
	__asm { jae L_00cbbc9e }
	__asm { dec ecx }
	__asm { cmp esi, ecx }
	__asm { jae L_00cbbc9b }
	__asm { L_00cbbc88: }
	__asm { mov eax, dword ptr [edx] }
	__asm { lea ecx, [eax + esi*4] }
	__asm { inc esi }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { dec eax }
	__asm { cmp esi, eax }
	__asm { jb L_00cbbc88 }
	__asm { L_00cbbc9b: }
	__asm { dec dword ptr [edx + 4] }
	__asm { L_00cbbc9e: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
	__asm { L_00cbbca8: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_00cbf3e0();
extern "C" void fn_00cbf5f0();
// FUNCTION: ROBLOXSTUDIO 0x00cbbeb0
extern "C" __declspec(naked) void asm_00cbbeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { xor ebx, ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { L_00cbbec0: }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { cmp eax, dword ptr [edi + 0x18] }
	__asm { je L_00cbbef6 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x10] }
	__asm { or ebx, 1 }
	__asm { call fn_00cbf3e0 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { add ecx, 0xf4240 }
	__asm { adc eax, 0 }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { ja L_00cbbef6 }
	__asm { jb L_00cbbef2 }
	__asm { cmp ecx, dword ptr [ebp + 8] }
	__asm { jae L_00cbbef6 }
	__asm { L_00cbbef2: }
	__asm { mov al, 1 }
	__asm { jmp L_00cbbef8 }
	__asm { L_00cbbef6: }
	__asm { xor al, al }
	__asm { L_00cbbef8: }
	__asm { test bl, 1 }
	__asm { je L_00cbbf00 }
	__asm { and ebx, 0xfffffffe }
	__asm { L_00cbbf00: }
	__asm { test al, al }
	__asm { je L_00cbbf29 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_00cbf3e0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { sub dword ptr [edi + 8], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [edi + 0x10] }
	__asm { sbb dword ptr [edi + 0xc], eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_00cbf5f0 }
	__asm { jmp L_00cbbec0 }
	__asm { L_00cbbf29: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cc0c70();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00cbc040
extern "C" __declspec(naked) void asm_00cbc040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0xc], 0 }
	__asm { je L_00cbc0e7 }
	__asm { push esi }
	__asm { mov esi, 1 }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { call fn_00cc0c70 }
	__asm { cmp eax, esi }
	__asm { jb L_00cbc077 }
	__asm { L_00cbc065: }
	__asm { add esi, esi }
	__asm { cmp esi, eax }
	__asm { jbe L_00cbc065 }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { test esi, esi }
	__asm { jne L_00cbc077 }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { jmp L_00cbc083 }
	__asm { L_00cbc077: }
	__asm { push esi }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_00cbc083: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { xor ebx, ebx }
	__asm { call fn_00cc0c70 }
	__asm { test eax, eax }
	__asm { je L_00cbc0b6 }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { L_00cbc094: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { add eax, ebx }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { inc ebx }
	__asm { mov al, byte ptr [edx + eax] }
	__asm { mov byte ptr [ebx + esi - 1], al }
	__asm { call fn_00cc0c70 }
	__asm { cmp ebx, eax }
	__asm { jb L_00cbc094 }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { L_00cbc0b6: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { pop ebx }
	__asm { cmp ecx, eax }
	__asm { ja L_00cbc0c5 }
	__asm { sub eax, ecx }
	__asm { jmp L_00cbc0ca }
	__asm { L_00cbc0c5: }
	__asm { sub eax, ecx }
	__asm { add eax, dword ptr [edi + 0xc] }
	__asm { L_00cbc0ca: }
	__asm { push dword ptr [edi] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov dword ptr [edi + 0xc], esi }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { call fn_00cf6698 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], eax }
	__asm { pop esi }
	__asm { L_00cbc0e7: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012afa44[];
extern "C" void fn_00cbba10();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00cbc0f0
extern "C" __declspec(naked) void asm_00cbc0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xdf2 }
	__asm { push 0xeff248 }
	__asm { add ecx, 0x54 }
	__asm { call fn_00cbba10 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [esi], 0xffffff }
	__asm { mov byte ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { test ebx, ebx }
	__asm { jle L_00cbc175 }
	__asm { push 0xc79 }
	__asm { lea eax, [ebx + 7] }
	__asm { sar eax, 3 }
	__asm { push 0xeff248 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { call dword ptr [g_012afa44] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov ecx, dword ptr [edi + 0x3c] }
	__asm { add ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0x18 }
	__asm { jmp L_00cbc17c }
	__asm { L_00cbc175: }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { L_00cbc17c: }
	__asm { lea eax, [ebx*8] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov al, byte ptr [edi + 0xc] }
	__asm { mov byte ptr [esi + 0xc], al }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 0x48] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_012afa4c[];
extern "C" void fn_00cbfe70();
// FUNCTION: ROBLOXSTUDIO 0x00cbc740
extern "C" __declspec(naked) void asm_00cbc740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test ebx, ebx }
	__asm { je L_00cbc7cb }
	__asm { mov eax, dword ptr [ebx + 0x40] }
	__asm { cmp eax, 1 }
	__asm { jne L_00cbc7a9 }
	__asm { mov eax, dword ptr [ebx + 0x44] }
	__asm { test eax, eax }
	__asm { je L_00cbc7cb }
	__asm { dec dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebx + 0x44] }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { jne L_00cbc7cb }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [eax] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { mov eax, dword ptr [ebx + 0x44] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { add ecx, 0xf6c }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebx + 0x44] }
	__asm { call fn_00cbfe70 }
	__asm { mov dword ptr [ebx + 0x44], 0 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cbc7a9: }
	__asm { test eax, eax }
	__asm { jne L_00cbc7c4 }
	__asm { mov eax, dword ptr [ebx + 0x3c] }
	__asm { test eax, eax }
	__asm { je L_00cbc7cb }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_012afa4c] }
	__asm { add esp, 0xc }
	__asm { L_00cbc7c4: }
	__asm { mov dword ptr [ebx + 0x3c], 0 }
	__asm { L_00cbc7cb: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00cbd0d0
extern "C" __declspec(naked) void asm_00cbd0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test eax, eax }
	__asm { jne L_00cbd0ec }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [eax], 0 }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cbd0ec: }
	__asm { push ebx }
	__asm { lea ebx, [eax - 1] }
	__asm { cdq }
	__asm { push esi }
	__asm { sub eax, edx }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { sar esi, 1 }
	__asm { push edi }
	__asm { lea eax, [eax + esi*4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { xor edi, edi }
	__asm { call dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00cbd13f }
	__asm { L_00cbd10e: }
	__asm { jns L_00cbd115 }
	__asm { lea ebx, [esi - 1] }
	__asm { jmp L_00cbd118 }
	__asm { L_00cbd115: }
	__asm { lea edi, [esi + 1] }
	__asm { L_00cbd118: }
	__asm { mov eax, ebx }
	__asm { sub eax, edi }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov esi, eax }
	__asm { sar esi, 1 }
	__asm { add esi, edi }
	__asm { cmp edi, ebx }
	__asm { jg L_00cbd150 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea eax, [eax + esi*4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00cbd10e }
	__asm { L_00cbd13f: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov byte ptr [eax], 1 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cbd150: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf3cb0();
// FUNCTION: ROBLOXSTUDIO 0x00cbd1d0
extern "C" __declspec(naked) void asm_00cbd1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { cmp eax, dword ptr [edi + 0x28] }
	__asm { jne L_00cbd1e7 }
	__asm { L_00cbd1df: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cbd1e7: }
	__asm { mov eax, dword ptr [edi + 0x50] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { call fn_00cf3cb0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_00cbd1df }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub eax, dword ptr [edi + 0x50] }
	__asm { mov esi, dword ptr [edi + 0x24] }
	__asm { mov edx, dword ptr [edi + 0x28] }
	__asm { and eax, 0xffffff }
	__asm { cmp esi, edx }
	__asm { ja L_00cbd21c }
	__asm { sub edx, esi }
	__asm { jmp L_00cbd223 }
	__asm { L_00cbd21c: }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { sub ecx, esi }
	__asm { add edx, ecx }
	__asm { L_00cbd223: }
	__asm { cmp eax, edx }
	__asm { jae L_00cbd1df }
	__asm { mov edx, dword ptr [edi + 0x2c] }
	__asm { lea ecx, [esi + eax] }
	__asm { cmp ecx, edx }
	__asm { jb L_00cbd237 }
	__asm { sub esi, edx }
	__asm { add esi, eax }
	__asm { jmp L_00cbd239 }
	__asm { L_00cbd237: }
	__asm { mov esi, ecx }
	__asm { L_00cbd239: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { shl esi, 4 }
	__asm { add esi, dword ptr [edi + 0x20] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { mov esi, dword ptr [edi + 0x2c] }
	__asm { lea edx, [ecx + eax] }
	__asm { cmp edx, esi }
	__asm { jb L_00cbd26c }
	__asm { sub ecx, esi }
	__asm { add ecx, eax }
	__asm { shl ecx, 4 }
	__asm { add ecx, dword ptr [edi + 0x20] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cbd26c: }
	__asm { mov ecx, edx }
	__asm { shl ecx, 4 }
	__asm { add ecx, dword ptr [edi + 0x20] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cbd280
extern "C" __declspec(naked) void asm_00cbd280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 0x111 }
	__asm { cmp dword ptr [ecx + 0x878], 0 }
	__asm { lea edx, [ecx + eax*8] }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov edx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { jbe L_00cbd34e }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 0x874] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x48] }
	__asm { mov ecx, edi }
	__asm { mov eax, 1 }
	__asm { shl eax, cl }
	__asm { imul eax, edi }
	__asm { cdq }
	__asm { mov ecx, eax }
	__asm { mov esi, edx }
	__asm { mov eax, edi }
	__asm { cdq }
	__asm { sub eax, ecx }
	__asm { sbb edx, esi }
	__asm { add eax, dword ptr [ebx] }
	__asm { adc edx, dword ptr [ebx + 4] }
	__asm { mov ebx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { cmp ebx, edx }
	__asm { ja L_00cbd313 }
	__asm { jb L_00cbd2ee }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { cmp edi, eax }
	__asm { jae L_00cbd316 }
	__asm { L_00cbd2ee: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, 1 }
	__asm { shl eax, cl }
	__asm { imul eax, esi }
	__asm { cdq }
	__asm { mov ecx, eax }
	__asm { mov ebx, edx }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { add ecx, eax }
	__asm { adc ebx, edx }
	__asm { add ecx, dword ptr [ebp - 0xc] }
	__asm { adc ebx, dword ptr [ebp - 0x10] }
	__asm { mov edi, ecx }
	__asm { jmp L_00cbd319 }
	__asm { L_00cbd313: }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { L_00cbd316: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_00cbd319: }
	__asm { mov ecx, esi }
	__asm { mov eax, 1 }
	__asm { shl eax, cl }
	__asm { lea ecx, [esi + 1] }
	__asm { imul eax, ecx }
	__asm { cdq }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esi, edx }
	__asm { cdq }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { adc esi, edx }
	__asm { add ecx, edi }
	__asm { adc esi, ebx }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov edx, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cbd34e: }
	__asm { mov dword ptr [ecx + 0x888], 0 }
	__asm { mov dword ptr [ecx + 0x88c], 0 }
	__asm { mov dword ptr [ecx + 0x890], 3 }
	__asm { mov dword ptr [ecx + 0x894], 0 }
	__asm { mov dword ptr [ecx + 0x898], 0xa }
	__asm { mov dword ptr [ecx + 0x89c], 0 }
	__asm { mov dword ptr [ecx + 0x8a0], 0x1b }
	__asm { mov dword ptr [ecx + 0x8a4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00cbeb20
extern "C" __declspec(naked) void asm_00cbeb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { jne L_00cbeb8c }
	__asm { test eax, eax }
	__asm { jne L_00cbeb3c }
	__asm { mov dword ptr [esi + 8], 0x10 }
	__asm { jmp L_00cbeb41 }
	__asm { L_00cbeb3c: }
	__asm { add eax, eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_00cbeb41: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { jne L_00cbeb4c }
	__asm { xor edi, edi }
	__asm { jmp L_00cbeb67 }
	__asm { L_00cbeb4c: }
	__asm { xor ecx, ecx }
	__asm { mov edx, 4 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { push ecx }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { mov edi, eax }
	__asm { L_00cbeb67: }
	__asm { xor ecx, ecx }
	__asm { cmp dword ptr [esi + 4], ecx }
	__asm { jbe L_00cbeb80 }
	__asm { mov edi, edi }
	__asm { L_00cbeb70: }
	__asm { mov eax, dword ptr [esi] }
	__asm { inc ecx }
	__asm { mov eax, dword ptr [eax + ecx*4 - 4] }
	__asm { mov dword ptr [edi + ecx*4 - 4], eax }
	__asm { cmp ecx, dword ptr [esi + 4] }
	__asm { jb L_00cbeb70 }
	__asm { L_00cbeb80: }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], edi }
	__asm { L_00cbeb8c: }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp edx, edi }
	__asm { je L_00cbeba5 }
	__asm { L_00cbeb96: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [eax + edx*4] }
	__asm { dec edx }
	__asm { mov eax, dword ptr [ecx - 4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { cmp edx, edi }
	__asm { jne L_00cbeb96 }
	__asm { L_00cbeba5: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + edi*4], eax }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}
