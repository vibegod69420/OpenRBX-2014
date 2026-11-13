// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009569b0
extern "C" __declspec(naked) void asm_009569b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12b21 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf139e8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe18168 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00956a13 }
	__asm { add esi, 0xc }
	__asm { jmp L_00956a15 }
	__asm { L_00956a13: }
	__asm { xor esi, esi }
	__asm { L_00956a15: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00956a2b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00956a2b: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe848f8 }
	__asm { mov dword ptr [ebp - 0x30], 0xe84904 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x112fc94 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe8490c }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00956a90
extern "C" __declspec(naked) void asm_00956a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12b21 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf139e8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe844c8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00956af3 }
	__asm { add esi, 0xc }
	__asm { jmp L_00956af5 }
	__asm { L_00956af3: }
	__asm { xor esi, esi }
	__asm { L_00956af5: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00956b0b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00956b0b: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe848b0 }
	__asm { mov dword ptr [ebp - 0x30], 0xe848bc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x112fba4 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe848c4 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01300c0c[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0095a990();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009571a0
extern "C" __declspec(naked) void asm_009571a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd391c6 }
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
	__asm { call fn_0095a990 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_01300c0c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0095725c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01300c0c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe84b28 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1300ae0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf49d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0095725c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x1300ae0 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe84f38 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009572da }
	__asm { push 0x1228b80 }
	__asm { mov ecx, 0x1228b80 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009572da }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009572c5 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009572da }
	__asm { L_009572c5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009572da: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x00957410
extern "C" __declspec(naked) void asm_00957410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { jae L_0095745e }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { inc eax }
	__asm { je L_00957468 }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00957468 }
	__asm { L_0095745e: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_00957468: }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009574b6 }
	__asm { lea eax, [esi + 0x24] }
	__asm { push eax }
	__asm { lea eax, [edi + 0x24] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_009574b6: }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10500[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x009574d0
extern "C" __declspec(naked) void asm_009574d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { jae L_0095751e }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { inc eax }
	__asm { je L_00957528 }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00957528 }
	__asm { L_0095751e: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_00957528: }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00959390();
extern "C" void fn_0095b9d0();
// FUNCTION: ROBLOXSTUDIO 0x00957590
extern "C" __declspec(naked) void asm_00957590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39200 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x68 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_0095b9d0 }
	__asm { mov ecx, esi }
	__asm { call fn_00959390 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_009575e8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x30] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009575e8: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0095760f }
	__asm { test al, 1 }
	__asm { jne L_0095760f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0095760f }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0095760f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x6c }
}

extern "C" void fn_00957590();
extern "C" void fn_0095b9d0();
// FUNCTION: ROBLOXSTUDIO 0x00957630
extern "C" __declspec(naked) void asm_00957630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39200 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { sub esp, 0x68 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0095b9d0 }
	__asm { mov ecx, esi }
	__asm { call fn_00957590 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00957684 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x30] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00957684: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009576ab }
	__asm { test al, 1 }
	__asm { jne L_009576ab }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009576ab }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009576ab: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x6c }
}

extern "C" void fn_009595a0();
extern "C" void fn_0095c4a0();
extern "C" void fn_0095cfc0();
// FUNCTION: ROBLOXSTUDIO 0x009576c0
extern "C" __declspec(naked) void asm_009576c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39220 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x68 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0095c4a0 }
	__asm { mov ecx, esi }
	__asm { call fn_009595a0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_0095773a }
	__asm { test al, 1 }
	__asm { jne L_00957733 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00957733 }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00957733: }
	__asm { mov dword ptr [ebp + 0x50], 0 }
	__asm { L_0095773a: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0095cfc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x6c }
}

extern "C" void fn_009576c0();
extern "C" void fn_0095c4a0();
extern "C" void fn_0095cfc0();
// FUNCTION: ROBLOXSTUDIO 0x00957760
extern "C" __declspec(naked) void asm_00957760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39220 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x68 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_0095c4a0 }
	__asm { mov ecx, esi }
	__asm { call fn_009576c0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_009577d6 }
	__asm { test al, 1 }
	__asm { jne L_009577cf }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009577cf }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009577cf: }
	__asm { mov dword ptr [ebp + 0x50], 0 }
	__asm { L_009577d6: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0095cfc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x6c }
}

extern "C" void fn_00959650();
extern "C" void fn_0095c4a0();
extern "C" void fn_0095cfc0();
// FUNCTION: ROBLOXSTUDIO 0x00957800
extern "C" __declspec(naked) void asm_00957800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39220 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x68 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0095c4a0 }
	__asm { mov ecx, esi }
	__asm { call fn_00959650 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_0095787a }
	__asm { test al, 1 }
	__asm { jne L_00957873 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00957873 }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00957873: }
	__asm { mov dword ptr [ebp + 0x50], 0 }
	__asm { L_0095787a: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0095cfc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x6c }
}

extern "C" void fn_00957800();
extern "C" void fn_0095c4a0();
extern "C" void fn_0095cfc0();
// FUNCTION: ROBLOXSTUDIO 0x009578a0
extern "C" __declspec(naked) void asm_009578a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39220 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x68 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_0095c4a0 }
	__asm { mov ecx, esi }
	__asm { call fn_00957800 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00957916 }
	__asm { test al, 1 }
	__asm { jne L_0095790f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0095790f }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0095790f: }
	__asm { mov dword ptr [ebp + 0x50], 0 }
	__asm { L_00957916: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0095cfc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x6c }
}

extern "C" void fn_00959700();
extern "C" void fn_0095c4a0();
extern "C" void fn_0095cfc0();
// FUNCTION: ROBLOXSTUDIO 0x00957940
extern "C" __declspec(naked) void asm_00957940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39220 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x68 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0095c4a0 }
	__asm { mov ecx, esi }
	__asm { call fn_00959700 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_009579ba }
	__asm { test al, 1 }
	__asm { jne L_009579b3 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009579b3 }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009579b3: }
	__asm { mov dword ptr [ebp + 0x50], 0 }
	__asm { L_009579ba: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0095cfc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x6c }
}

extern "C" void fn_00957940();
extern "C" void fn_0095c4a0();
extern "C" void fn_0095cfc0();
// FUNCTION: ROBLOXSTUDIO 0x009579e0
extern "C" __declspec(naked) void asm_009579e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39220 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x68 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_0095c4a0 }
	__asm { mov ecx, esi }
	__asm { call fn_00957940 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00957a56 }
	__asm { test al, 1 }
	__asm { jne L_00957a4f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00957a4f }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00957a4f: }
	__asm { mov dword ptr [ebp + 0x50], 0 }
	__asm { L_00957a56: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0095cfc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x6c }
}

extern "C" void fn_009597b0();
extern "C" void fn_0095c4a0();
extern "C" void fn_0095cfc0();
// FUNCTION: ROBLOXSTUDIO 0x00957a80
extern "C" __declspec(naked) void asm_00957a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39220 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x68 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0095c4a0 }
	__asm { mov ecx, esi }
	__asm { call fn_009597b0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00957afa }
	__asm { test al, 1 }
	__asm { jne L_00957af3 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00957af3 }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00957af3: }
	__asm { mov dword ptr [ebp + 0x50], 0 }
	__asm { L_00957afa: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0095cfc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x6c }
}

extern "C" void fn_00957a80();
extern "C" void fn_0095c4a0();
extern "C" void fn_0095cfc0();
// FUNCTION: ROBLOXSTUDIO 0x00957b20
extern "C" __declspec(naked) void asm_00957b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39220 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x68 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_0095c4a0 }
	__asm { mov ecx, esi }
	__asm { call fn_00957a80 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00957b96 }
	__asm { test al, 1 }
	__asm { jne L_00957b8f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00957b8f }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00957b8f: }
	__asm { mov dword ptr [ebp + 0x50], 0 }
	__asm { L_00957b96: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0095cfc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x6c }
}

extern "C" void fn_00959860();
extern "C" void fn_0095c4a0();
extern "C" void fn_0095cfc0();
// FUNCTION: ROBLOXSTUDIO 0x00957bc0
extern "C" __declspec(naked) void asm_00957bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39220 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x68 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0095c4a0 }
	__asm { mov ecx, esi }
	__asm { call fn_00959860 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00957c3a }
	__asm { test al, 1 }
	__asm { jne L_00957c33 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00957c33 }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00957c33: }
	__asm { mov dword ptr [ebp + 0x50], 0 }
	__asm { L_00957c3a: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0095cfc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x6c }
}

extern "C" void fn_00957bc0();
extern "C" void fn_0095c4a0();
extern "C" void fn_0095cfc0();
// FUNCTION: ROBLOXSTUDIO 0x00957c60
extern "C" __declspec(naked) void asm_00957c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39220 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x68 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_0095c4a0 }
	__asm { mov ecx, esi }
	__asm { call fn_00957bc0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00957cd6 }
	__asm { test al, 1 }
	__asm { jne L_00957ccf }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00957ccf }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00957ccf: }
	__asm { mov dword ptr [ebp + 0x50], 0 }
	__asm { L_00957cd6: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0095cfc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x6c }
}

extern "C" void fn_00959a80();
extern "C" void fn_0095c240();
extern "C" void fn_00be5350();
// FUNCTION: ROBLOXSTUDIO 0x00957d00
extern "C" __declspec(naked) void asm_00957d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39240 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0095c240 }
	__asm { mov ecx, esi }
	__asm { call fn_00959a80 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00957d80 }
	__asm { test al, 1 }
	__asm { jne L_00957d79 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00957d79 }
	__asm { lea ecx, [ebp + 0x40] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00957d79: }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { L_00957d80: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_00957d00();
extern "C" void fn_0095c240();
extern "C" void fn_00be5350();
// FUNCTION: ROBLOXSTUDIO 0x00957db0
extern "C" __declspec(naked) void asm_00957db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39240 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0095c240 }
	__asm { mov ecx, esi }
	__asm { call fn_00957d00 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00957e2d }
	__asm { test al, 1 }
	__asm { jne L_00957e26 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00957e26 }
	__asm { lea ecx, [ebp + 0x40] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00957e26: }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { L_00957e2d: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" char g_00e10524[];
extern "C" void fn_004039a0();
extern "C" void fn_00427010();
extern "C" void fn_004b1820();
extern "C" void fn_00825140();
extern "C" void fn_0095e9f0();
// FUNCTION: ROBLOXSTUDIO 0x009586f0
extern "C" __declspec(naked) void asm_009586f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd392c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0095e9f0 }
	__asm { test al, al }
	__asm { je L_00958789 }
	__asm { mov eax, dword ptr [ebp - 0x54] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be0b8 }
	__asm { je L_00958771 }
	__asm { push eax }
	__asm { mov ecx, 0x12be0b8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00958771 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0xe850d0 }
	__asm { call fn_004039a0 }
	__asm { lea ecx, [ebp + 0x30] }
	__asm { call fn_00427010 }
	__asm { mov bl, 1 }
	__asm { jmp L_0095878b }
	__asm { L_00958771: }
	__asm { sub esp, 0x18 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push esp }
	__asm { call fn_004b1820 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_00427010 }
	__asm { mov bl, 1 }
	__asm { jmp L_0095878b }
	__asm { L_00958789: }
	__asm { xor bl, bl }
	__asm { L_0095878b: }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_009587a2 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009587a2: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009587cd }
	__asm { test al, 1 }
	__asm { jne L_009587c6 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009587c6 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009587c6: }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { L_009587cd: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009587f4 }
	__asm { test al, 1 }
	__asm { jne L_009587f4 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009587f4 }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009587f4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" void fn_004039a0();
extern "C" void fn_00427010();
extern "C" void fn_006a5f50();
extern "C" void fn_00825140();
extern "C" void fn_0095a1e0();
extern "C" void fn_0095e9f0();
// FUNCTION: ROBLOXSTUDIO 0x00958810
extern "C" __declspec(naked) void asm_00958810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd392c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0095e9f0 }
	__asm { test al, al }
	__asm { je L_009588a9 }
	__asm { mov eax, dword ptr [ebp - 0x54] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c35e0 }
	__asm { je L_00958891 }
	__asm { push eax }
	__asm { mov ecx, 0x12c35e0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00958891 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0xe850d0 }
	__asm { call fn_004039a0 }
	__asm { lea ecx, [ebp + 0x30] }
	__asm { call fn_00427010 }
	__asm { mov bl, 1 }
	__asm { jmp L_009588ab }
	__asm { L_00958891: }
	__asm { sub esp, 8 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push esp }
	__asm { call fn_0095a1e0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_006a5f50 }
	__asm { mov bl, 1 }
	__asm { jmp L_009588ab }
	__asm { L_009588a9: }
	__asm { xor bl, bl }
	__asm { L_009588ab: }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_009588c2 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009588c2: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009588ed }
	__asm { test al, 1 }
	__asm { jne L_009588e6 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009588e6 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009588e6: }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { L_009588ed: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00958914 }
	__asm { test al, 1 }
	__asm { jne L_00958914 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00958914 }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00958914: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" void fn_004039a0();
extern "C" void fn_00427010();
extern "C" void fn_006a5f50();
extern "C" void fn_00825140();
extern "C" void fn_0095a210();
extern "C" void fn_0095e9f0();
// FUNCTION: ROBLOXSTUDIO 0x00958930
extern "C" __declspec(naked) void asm_00958930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd392c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0095e9f0 }
	__asm { test al, al }
	__asm { je L_009589c9 }
	__asm { mov eax, dword ptr [ebp - 0x54] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c33a8 }
	__asm { je L_009589b1 }
	__asm { push eax }
	__asm { mov ecx, 0x12c33a8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009589b1 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0xe850d0 }
	__asm { call fn_004039a0 }
	__asm { lea ecx, [ebp + 0x30] }
	__asm { call fn_00427010 }
	__asm { mov bl, 1 }
	__asm { jmp L_009589cb }
	__asm { L_009589b1: }
	__asm { sub esp, 8 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push esp }
	__asm { call fn_0095a210 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_006a5f50 }
	__asm { mov bl, 1 }
	__asm { jmp L_009589cb }
	__asm { L_009589c9: }
	__asm { xor bl, bl }
	__asm { L_009589cb: }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_009589e2 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009589e2: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00958a0d }
	__asm { test al, 1 }
	__asm { jne L_00958a06 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00958a06 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00958a06: }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { L_00958a0d: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00958a34 }
	__asm { test al, 1 }
	__asm { jne L_00958a34 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00958a34 }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00958a34: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_004039a0();
extern "C" void fn_00427010();
extern "C" void fn_0095eae0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00958b70
extern "C" __declspec(naked) void asm_00958b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd392f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0095eae0 }
	__asm { test al, al }
	__asm { je L_00958c07 }
	__asm { sub esp, 0x18 }
	__asm { cmp dword ptr [ebp - 0x18], 0 }
	__asm { mov ecx, esp }
	__asm { jbe L_00958bf1 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_00427010 }
	__asm { mov bl, 1 }
	__asm { jmp L_00958c09 }
	__asm { L_00958bf1: }
	__asm { push 0xe85088 }
	__asm { call fn_004039a0 }
	__asm { lea ecx, [ebp + 0x30] }
	__asm { call fn_00427010 }
	__asm { mov bl, 1 }
	__asm { jmp L_00958c09 }
	__asm { L_00958c07: }
	__asm { xor bl, bl }
	__asm { L_00958c09: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00958c1a }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00958c1a: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00958c57 }
	__asm { test al, 1 }
	__asm { jne L_00958c50 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00958c50 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00958c50: }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { L_00958c57: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00958c7e }
	__asm { test al, 1 }
	__asm { jne L_00958c7e }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00958c7e }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00958c7e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0095b9d0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00958ef0
extern "C" __declspec(naked) void asm_00958ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3938b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00958f34 }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_0095b9d0 }
	__asm { mov ecx, eax }
	__asm { jmp L_00958f36 }
	__asm { L_00958f34: }
	__asm { xor ecx, ecx }
	__asm { L_00958f36: }
	__asm { mov eax, dword ptr [ebp + 0x70] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00958f55 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x30] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00958f55: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00958f7c }
	__asm { test al, 1 }
	__asm { jne L_00958f7c }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00958f7c }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00958f7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x70 }
}

extern "C" void fn_0095c4a0();
extern "C" void fn_0095cfc0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00958f90
extern "C" __declspec(naked) void asm_00958f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd393bb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00958fdb }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_0095c4a0 }
	__asm { jmp L_00958fdd }
	__asm { L_00958fdb: }
	__asm { xor esi, esi }
	__asm { L_00958fdd: }
	__asm { mov eax, dword ptr [ebp + 0x70] }
	__asm { mov dword ptr [eax], esi }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x70], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00959017 }
	__asm { test al, 1 }
	__asm { jne L_00959010 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00959010 }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00959010: }
	__asm { mov dword ptr [ebp + 0x50], 0 }
	__asm { L_00959017: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0095cfc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x70 }
}

extern "C" void fn_0095c240();
extern "C" void fn_00be5350();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00959040
extern "C" __declspec(naked) void asm_00959040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd533cb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00959091 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_0095c240 }
	__asm { jmp L_00959093 }
	__asm { L_00959091: }
	__asm { xor esi, esi }
	__asm { L_00959093: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [eax], esi }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x58], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_009590cd }
	__asm { test al, 1 }
	__asm { jne L_009590c6 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009590c6 }
	__asm { lea ecx, [ebp + 0x40] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009590c6: }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { L_009590cd: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x58 }
}

extern "C" void fn_0040c260();
extern "C" void fn_0095b950();
extern "C" void fn_009a9600();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009590f0
extern "C" __declspec(naked) void asm_009590f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd393eb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0095916e }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_0095b950 }
	__asm { push 0x28 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00959157 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_0095b950 }
	__asm { mov ecx, eax }
	__asm { jmp L_00959159 }
	__asm { L_00959157: }
	__asm { xor ecx, ecx }
	__asm { L_00959159: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_009a9600 }
	__asm { mov bl, 1 }
	__asm { jmp L_00959170 }
	__asm { L_0095916e: }
	__asm { xor bl, bl }
	__asm { L_00959170: }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009a9600 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_009590f0();
extern "C" void fn_0095b950();
extern "C" void fn_009a9600();
// FUNCTION: ROBLOXSTUDIO 0x009591a0
extern "C" __declspec(naked) void asm_009591a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4e240 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_0095b950 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push esi }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0095b950 }
	__asm { mov esi, 0xe850f8 }
	__asm { mov ecx, esi }
	__asm { call fn_009590f0 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009a9600 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009a9600 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00958ef0();
extern "C" void fn_0095b9d0();
// FUNCTION: ROBLOXSTUDIO 0x00959240
extern "C" __declspec(naked) void asm_00959240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39200 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00959296 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push dword ptr [ebp + 0x70] }
	__asm { sub esp, 0x68 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_0095b9d0 }
	__asm { mov ecx, esi }
	__asm { call fn_00958ef0 }
	__asm { mov bl, 1 }
	__asm { jmp L_00959298 }
	__asm { L_00959296: }
	__asm { xor bl, bl }
	__asm { L_00959298: }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_009592b2 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x30] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009592b2: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009592d9 }
	__asm { test al, 1 }
	__asm { jne L_009592d9 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009592d9 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009592d9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x70 }
}

extern "C" void fn_00959240();
extern "C" void fn_0095b9d0();
// FUNCTION: ROBLOXSTUDIO 0x009592f0
extern "C" __declspec(naked) void asm_009592f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39200 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push dword ptr [ebp + 0x70] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x68 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_0095b9d0 }
	__asm { mov ecx, esi }
	__asm { call fn_00959240 }
	__asm { mov bl, al }
	__asm { mov ecx, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_0095934f }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp + 0x30] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0095934f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00959376 }
	__asm { test al, 1 }
	__asm { jne L_00959376 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00959376 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00959376: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x6c }
}

extern "C" void fn_009592f0();
extern "C" void fn_0095b9d0();
// FUNCTION: ROBLOXSTUDIO 0x00959390
extern "C" __declspec(naked) void asm_00959390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39200 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { sub esp, 0x68 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0095b9d0 }
	__asm { mov esi, 0xe85120 }
	__asm { mov ecx, esi }
	__asm { call fn_009592f0 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { mov dword ptr [edi], esi }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_009593f5 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x30] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009593f5: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0095941c }
	__asm { test al, 1 }
	__asm { jne L_0095941c }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0095941c }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0095941c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x68 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00958f90();
extern "C" void fn_0095c4a0();
extern "C" void fn_0095cfc0();
// FUNCTION: ROBLOXSTUDIO 0x00959430
extern "C" __declspec(naked) void asm_00959430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39410 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0095948f }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x70] }
	__asm { sub esp, 0x68 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0095c4a0 }
	__asm { mov ecx, esi }
	__asm { call fn_00958f90 }
	__asm { mov bl, 1 }
	__asm { jmp L_00959491 }
	__asm { L_0095948f: }
	__asm { xor bl, bl }
	__asm { L_00959491: }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x70], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_009594c5 }
	__asm { test al, 1 }
	__asm { jne L_009594be }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009594be }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009594be: }
	__asm { mov dword ptr [ebp + 0x50], 0 }
	__asm { L_009594c5: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0095cfc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x70 }
}

extern "C" void fn_00959430();
extern "C" void fn_0095c4a0();
extern "C" void fn_0095cfc0();
// FUNCTION: ROBLOXSTUDIO 0x009594f0
extern "C" __declspec(naked) void asm_009594f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39410 }
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
	__asm { push dword ptr [ebp + 0x70] }
	__asm { sub esp, 0x68 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0095c4a0 }
	__asm { mov ecx, esi }
	__asm { call fn_00959430 }
	__asm { mov bl, al }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x70], eax }
	__asm { mov ecx, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00959573 }
	__asm { test cl, 1 }
	__asm { jne L_0095956c }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_0095956c }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0095956c: }
	__asm { mov dword ptr [ebp + 0x50], 0 }
	__asm { L_00959573: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0095cfc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x6c }
}

extern "C" void fn_009594f0();
extern "C" void fn_0095c4a0();
extern "C" void fn_0095cfc0();
// FUNCTION: ROBLOXSTUDIO 0x009595a0
extern "C" __declspec(naked) void asm_009595a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39220 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x68 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_0095c4a0 }
	__asm { mov esi, 0xe85110 }
	__asm { mov ecx, esi }
	__asm { call fn_009594f0 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00959627 }
	__asm { test al, 1 }
	__asm { jne L_00959620 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00959620 }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00959620: }
	__asm { mov dword ptr [ebp + 0x50], 0 }
	__asm { L_00959627: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0095cfc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x68 }
}

extern "C" void fn_009594f0();
extern "C" void fn_0095c4a0();
extern "C" void fn_0095cfc0();
// FUNCTION: ROBLOXSTUDIO 0x00959650
extern "C" __declspec(naked) void asm_00959650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39220 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x68 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_0095c4a0 }
	__asm { mov esi, 0xe85118 }
	__asm { mov ecx, esi }
	__asm { call fn_009594f0 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_009596d7 }
	__asm { test al, 1 }
	__asm { jne L_009596d0 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009596d0 }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009596d0: }
	__asm { mov dword ptr [ebp + 0x50], 0 }
	__asm { L_009596d7: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0095cfc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x68 }
}

extern "C" void fn_009594f0();
extern "C" void fn_0095c4a0();
extern "C" void fn_0095cfc0();
// FUNCTION: ROBLOXSTUDIO 0x00959700
extern "C" __declspec(naked) void asm_00959700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39220 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x68 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_0095c4a0 }
	__asm { mov esi, 0xe85100 }
	__asm { mov ecx, esi }
	__asm { call fn_009594f0 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00959787 }
	__asm { test al, 1 }
	__asm { jne L_00959780 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00959780 }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00959780: }
	__asm { mov dword ptr [ebp + 0x50], 0 }
	__asm { L_00959787: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0095cfc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x68 }
}

extern "C" void fn_009594f0();
extern "C" void fn_0095c4a0();
extern "C" void fn_0095cfc0();
// FUNCTION: ROBLOXSTUDIO 0x009597b0
extern "C" __declspec(naked) void asm_009597b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39220 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x68 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_0095c4a0 }
	__asm { mov esi, 0xe850f0 }
	__asm { mov ecx, esi }
	__asm { call fn_009594f0 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00959837 }
	__asm { test al, 1 }
	__asm { jne L_00959830 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00959830 }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00959830: }
	__asm { mov dword ptr [ebp + 0x50], 0 }
	__asm { L_00959837: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0095cfc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x68 }
}

extern "C" void fn_009594f0();
extern "C" void fn_0095c4a0();
extern "C" void fn_0095cfc0();
// FUNCTION: ROBLOXSTUDIO 0x00959860
extern "C" __declspec(naked) void asm_00959860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39220 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x68 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_0095c4a0 }
	__asm { mov esi, 0xe85108 }
	__asm { mov ecx, esi }
	__asm { call fn_009594f0 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_009598e7 }
	__asm { test al, 1 }
	__asm { jne L_009598e0 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009598e0 }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009598e0: }
	__asm { mov dword ptr [ebp + 0x50], 0 }
	__asm { L_009598e7: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0095cfc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x68 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00959040();
extern "C" void fn_0095c240();
extern "C" void fn_00be5350();
// FUNCTION: ROBLOXSTUDIO 0x00959910
extern "C" __declspec(naked) void asm_00959910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53420 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00959975 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x58] }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0095c240 }
	__asm { mov ecx, esi }
	__asm { call fn_00959040 }
	__asm { mov bl, 1 }
	__asm { jmp L_00959977 }
	__asm { L_00959975: }
	__asm { xor bl, bl }
	__asm { L_00959977: }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x58], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_009599ab }
	__asm { test al, 1 }
	__asm { jne L_009599a4 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009599a4 }
	__asm { lea ecx, [ebp + 0x40] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009599a4: }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { L_009599ab: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x58 }
}

extern "C" void fn_00959910();
extern "C" void fn_0095c240();
extern "C" void fn_00be5350();
// FUNCTION: ROBLOXSTUDIO 0x009599d0
extern "C" __declspec(naked) void asm_009599d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53420 }
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
	__asm { push dword ptr [ebp + 0x58] }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0095c240 }
	__asm { mov ecx, esi }
	__asm { call fn_00959910 }
	__asm { mov bl, al }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x58], eax }
	__asm { mov ecx, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00959a59 }
	__asm { test cl, 1 }
	__asm { jne L_00959a52 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00959a52 }
	__asm { lea ecx, [ebp + 0x40] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00959a52: }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { L_00959a59: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_009599d0();
extern "C" void fn_0095c240();
extern "C" void fn_00be5350();
// FUNCTION: ROBLOXSTUDIO 0x00959a80
extern "C" __declspec(naked) void asm_00959a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39240 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0095c240 }
	__asm { mov esi, 0xe850e8 }
	__asm { mov ecx, esi }
	__asm { call fn_009599d0 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00959b0e }
	__asm { test al, 1 }
	__asm { jne L_00959b07 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00959b07 }
	__asm { lea ecx, [ebp + 0x40] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00959b07: }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { L_00959b0e: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" char g_01300d58[];
extern "C" char g_01300d5c[];
extern "C" char g_01300d60[];
extern "C" char g_01300d64[];
extern "C" char g_01300d68[];
extern "C" char g_01300d6c[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0095a0f0
extern "C" __declspec(naked) void asm_0095a0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3954e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01300d6c] }
	__asm { test al, 1 }
	__asm { jne L_0095a132 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01300d6c], eax }
	__asm { push 0xe84b24 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01300d68], eax }
	__asm { L_0095a132: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3956e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01300d5c] }
	__asm { test al, 1 }
	__asm { jne L_0095a182 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01300d5c], eax }
	__asm { push 0xe84b1c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01300d58], eax }
	__asm { L_0095a182: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3958e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01300d64] }
	__asm { test al, 1 }
	__asm { jne L_0095a1d2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01300d64], eax }
	__asm { push 0xe84b20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01300d60], eax }
	__asm { L_0095a1d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0095a9e0
extern "C" __declspec(naked) void asm_0095a9e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd395f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x58], eax }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x54], edx }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0095aa37 }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { mov edx, dword ptr [ebp - 0x54] }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { add esp, 8 }
	__asm { L_0095aa37: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x50], ecx }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0095aa6a }
	__asm { lea eax, [esi + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { add esp, 8 }
	__asm { L_0095aa6a: }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0095aa88 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0095aa88: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00957410();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0095aba0
extern "C" __declspec(naked) void asm_0095aba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39651 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x64 }
	__asm { push esi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x70] }
	__asm { mov dword ptr [ebp - 0x5c], 0xf }
	__asm { mov dword ptr [ebp - 0x60], 0 }
	__asm { mov byte ptr [ebp - 0x70], 0 }
	__asm { call fn_00403540 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x58], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0095ac17 }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { lea eax, [esi + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0095ac17: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x70] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00957410 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_0095ac55 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0095ac55: }
	__asm { cmp dword ptr [ebp - 0x5c], 0x10 }
	__asm { jb L_0095ac66 }
	__asm { push dword ptr [ebp - 0x70] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0095ac66: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_009574d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0095ac80
extern "C" __declspec(naked) void asm_0095ac80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39670 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0xf }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov byte ptr [ebp - 0x44], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push -1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { lea eax, [ecx + 4] }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_009574d0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0095ad1d }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0095ad1d: }
	__asm { cmp dword ptr [ebp - 0x30], 0x10 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { jb L_0095ad40 }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0095ad40: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0095b720();
extern "C" void fn_00b887a0();
// FUNCTION: ROBLOXSTUDIO 0x0095b1c0
extern "C" __declspec(naked) void asm_0095b1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3208e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_0095b23f }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_0095b228 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_0095b23f }
	__asm { L_0095b228: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0095b23f: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_00b887a0 }
	__asm { mov dword ptr [edi], 0xe85040 }
	__asm { mov dword ptr [edi + 0xf8], 0 }
	__asm { mov dword ptr [edi + 0xfc], 0 }
	__asm { lea ecx, [edi + 0x100] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0095b720 }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edi + 0x128], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x100], 0xe85034 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0095b2ac }
	__asm { test al, 1 }
	__asm { jne L_0095b2ac }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0095b2ac }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0095b2ac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_0095b7b0();
extern "C" void fn_00b887a0();
// FUNCTION: ROBLOXSTUDIO 0x0095b2c0
extern "C" __declspec(naked) void asm_0095b2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3208e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_0095b33f }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_0095b328 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_0095b33f }
	__asm { L_0095b328: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0095b33f: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_00b887a0 }
	__asm { mov dword ptr [edi], 0xe85064 }
	__asm { mov dword ptr [edi + 0xf8], 0 }
	__asm { mov dword ptr [edi + 0xfc], 0 }
	__asm { lea ecx, [edi + 0x100] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0095b7b0 }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edi + 0x128], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x100], 0xe85058 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0095b3ac }
	__asm { test al, 1 }
	__asm { jne L_0095b3ac }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0095b3ac }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0095b3ac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" char g_01300adc[];
extern "C" char g_01300d3c[];
extern "C" void fn_007cbf10();
extern "C" void fn_0095b480();
extern "C" void fn_0095e520();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0095b540
extern "C" __declspec(naked) void asm_0095b540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd396f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0095b480 }
	__asm { mov byte ptr [esi + 0x64], 0 }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov dword ptr [esi], 0xe84c94 }
	__asm { mov dword ptr [esi + 4], 0xe84d10 }
	__asm { mov dword ptr [esi + 0x18], 0xe84d18 }
	__asm { mov dword ptr [esi + 0x1c], 0xe84d24 }
	__asm { mov eax, dword ptr [g_01300d3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0095b5e9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01300d3c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe84b30 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_0095e520 }
	__asm { push eax }
	__asm { mov ecx, 0x1300c10 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf49e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0095b5e9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x1300c10 }
	__asm { inc dword ptr [g_01300adc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01300c0c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0095b610
extern "C" __declspec(naked) void asm_0095b610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39716 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_01300c0c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0095b68a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01300c0c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe84b28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1300ae0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf49d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0095b68a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x1300ae0 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe84f10 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0095b702 }
	__asm { push 0x1228b80 }
	__asm { mov ecx, 0x1228b80 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0095b702 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0095b6ed }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0095b702 }
	__asm { L_0095b6ed: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0095b702: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01300c0c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0095b840
extern "C" __declspec(naked) void asm_0095b840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39736 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_01300c0c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0095b8ba }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01300c0c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe84b28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1300ae0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf49d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0095b8ba: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x1300ae0 }
	__asm { call fn_0092b930 }
	__asm { mov dword ptr [esi], 0xe84f80 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0095b932 }
	__asm { push 0x1228b80 }
	__asm { mov ecx, 0x1228b80 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0095b932 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0095b91d }
	__asm { push 0x662 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0095b932 }
	__asm { L_0095b91d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe55e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0095b932: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x0095b9d0
extern "C" __declspec(naked) void asm_0095b9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41938 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test ecx, ecx }
	__asm { je L_0095ba40 }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_0095ba2c }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { jmp L_0095ba40 }
	__asm { L_0095ba2c: }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0095ba40: }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0095ba6b }
	__asm { lea eax, [esi + 0x28] }
	__asm { push eax }
	__asm { lea eax, [edi + 0x28] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0095ba6b: }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0095ba90
extern "C" __declspec(naked) void asm_0095ba90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31880 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0095bb07 }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_0095baf0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { jmp L_0095bb07 }
	__asm { L_0095baf0: }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { L_0095bb07: }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { test edx, edx }
	__asm { je L_0095bb35 }
	__asm { lea eax, [esi + 0x28] }
	__asm { push eax }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { L_0095bb35: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop edi }
	__asm { test ecx, ecx }
	__asm { je L_0095bb61 }
	__asm { test cl, 1 }
	__asm { jne L_0095bb61 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_0095bb61 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0095bb61: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

// FUNCTION: ROBLOXSTUDIO 0x0095bb80
extern "C" __declspec(naked) void asm_0095bb80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39750 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x50], ecx }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { test edx, edx }
	__asm { je L_0095bbcf }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { add esp, 8 }
	__asm { L_0095bbcf: }
	__asm { mov eax, edx }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test edx, edx }
	__asm { je L_0095bbfb }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { add esp, 8 }
	__asm { L_0095bbfb: }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0095bc15 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push ecx }
	__asm { call eax }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { L_0095bc15: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edx, edx }
	__asm { je L_0095bc2c }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0095bc2c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" void fn_00b021e0();
// FUNCTION: ROBLOXSTUDIO 0x0095c240
extern "C" __declspec(naked) void asm_0095c240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39858 }
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
	__asm { call fn_00b021e0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0095c2d2 }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { test cl, 1 }
	__asm { je L_0095c2be }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0095c2be: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 0x30] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0095c2d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0095c150();
// FUNCTION: ROBLOXSTUDIO 0x0095c4a0
extern "C" __declspec(naked) void asm_0095c4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39a28 }
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
	__asm { call fn_0095c150 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov ecx, dword ptr [edi + 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0095c532 }
	__asm { mov dword ptr [esi + 0x40], ecx }
	__asm { test cl, 1 }
	__asm { je L_0095c51e }
	__asm { mov eax, dword ptr [edi + 0x48] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov eax, dword ptr [edi + 0x4c] }
	__asm { mov dword ptr [esi + 0x4c], eax }
	__asm { mov eax, dword ptr [edi + 0x50] }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { mov eax, dword ptr [edi + 0x54] }
	__asm { mov dword ptr [esi + 0x54], eax }
	__asm { mov eax, dword ptr [edi + 0x58] }
	__asm { mov dword ptr [esi + 0x58], eax }
	__asm { mov eax, dword ptr [edi + 0x5c] }
	__asm { mov dword ptr [esi + 0x5c], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0095c51e: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x48] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 0x48] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0095c532: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0095d2d0
extern "C" __declspec(naked) void asm_0095d2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41938 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0095d309 }
	__asm { lea eax, [esi + 0x28] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0095d309: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0095d335 }
	__asm { test al, 1 }
	__asm { jne L_0095d32f }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0095d32f }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0095d32f: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0095d335: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0095d344 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0095d344: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_004225e0();
extern "C" void fn_00427010();
// FUNCTION: ROBLOXSTUDIO 0x0095d8a0
extern "C" __declspec(naked) void asm_0095d8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39ad8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x64], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0095d8f7 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0x16 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xe84fac }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [ebp + 0x28] }
	__asm { call fn_00427010 }
	__asm { jmp L_0095d925 }
	__asm { L_0095d8f7: }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0x28] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { call fn_004225e0 }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004225e0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [eax + 0x74] }
	__asm { L_0095d925: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0095d950 }
	__asm { test al, 1 }
	__asm { jne L_0095d949 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0095d949 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0095d949: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_0095d950: }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0095d977 }
	__asm { test al, 1 }
	__asm { jne L_0095d977 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0095d977 }
	__asm { lea ecx, [ebp + 0x30] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0095d977: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0095e690
extern "C" __declspec(naked) void asm_0095e690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { je L_0095e731 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { lea edi, [esi + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0095e6e9 }
	__asm { lea eax, [edi + 0x24] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0095e6e9: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_0095e6f9 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0095e6f9: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [ebx + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0095e731: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004030b0();
extern "C" void fn_0095a840();
extern "C" void fn_0095d7a0();
// FUNCTION: ROBLOXSTUDIO 0x0095f200
extern "C" __declspec(naked) void asm_0095f200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { movzx eax, byte ptr [ebx + 0xc] }
	__asm { lea esi, [ebx + 0xc] }
	__asm { inc eax }
	__asm { push edi }
	__asm { add eax, esi }
	__asm { je L_0095f217 }
	__asm { inc eax }
	__asm { jmp L_0095f219 }
	__asm { L_0095f217: }
	__asm { xor eax, eax }
	__asm { L_0095f219: }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_004030b0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_0095a840 }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_0095f260 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { add ebx, 4 }
	__asm { cmp eax, ecx }
	__asm { je L_0095f260 }
	__asm { mov esi, dword ptr [eax] }
	__asm { cmp edx, eax }
	__asm { je L_0095f260 }
	__asm { cmp edx, esi }
	__asm { je L_0095f260 }
	__asm { push 1 }
	__asm { push esi }
	__asm { push eax }
	__asm { push ebx }
	__asm { push edx }
	__asm { mov ecx, ebx }
	__asm { call fn_0095d7a0 }
	__asm { nop }
	__asm { L_0095f260: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004030b0();
extern "C" void fn_0095a840();
extern "C" void fn_0095d820();
// FUNCTION: ROBLOXSTUDIO 0x0095f270
extern "C" __declspec(naked) void asm_0095f270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { movzx eax, byte ptr [ebx + 0xc] }
	__asm { lea esi, [ebx + 0xc] }
	__asm { inc eax }
	__asm { push edi }
	__asm { add eax, esi }
	__asm { je L_0095f287 }
	__asm { inc eax }
	__asm { jmp L_0095f289 }
	__asm { L_0095f287: }
	__asm { xor eax, eax }
	__asm { L_0095f289: }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_004030b0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_0095a840 }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_0095f2d0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { add ebx, 4 }
	__asm { cmp eax, ecx }
	__asm { je L_0095f2d0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { cmp edx, eax }
	__asm { je L_0095f2d0 }
	__asm { cmp edx, esi }
	__asm { je L_0095f2d0 }
	__asm { push 1 }
	__asm { push esi }
	__asm { push eax }
	__asm { push ebx }
	__asm { push edx }
	__asm { mov ecx, ebx }
	__asm { call fn_0095d820 }
	__asm { nop }
	__asm { L_0095f2d0: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" void fn_0095b9d0();
extern "C" void fn_0095d2d0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0095f780
extern "C" __declspec(naked) void asm_0095f780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1ac4b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { jne L_0095f7f1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x68 }
	__asm { mov esi, dword ptr [eax] }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0095f7db }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_0095b9d0 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0095f7db: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0095f7f1: }
	__asm { cmp eax, 1 }
	__asm { jne L_0095f815 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0095f815: }
	__asm { cmp eax, 2 }
	__asm { jne L_0095f83f }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_0095f82a }
	__asm { push 1 }
	__asm { call fn_0095d2d0 }
	__asm { L_0095f82a: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0095f83f: }
	__asm { cmp eax, 3 }
	__asm { jne L_0095f86e }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x1229f78 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_0095f82a }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0095f86e: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0x1229f78 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_00947c00();
// FUNCTION: ROBLOXSTUDIO 0x0095ff60
extern "C" __declspec(naked) void asm_0095ff60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_0095ffb0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_0095ff8d }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov edx, eax }
	__asm { cmp byte ptr [edx], 0 }
	__asm { jne L_0095ff92 }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push edx }
	__asm { call fn_004038a0 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0095ff8d: }
	__asm { mov edx, 0xe8500c }
	__asm { L_0095ff92: }
	__asm { mov ecx, edx }
	__asm { push esi }
	__asm { lea esi, [ecx + 1] }
	__asm { L_0095ff98: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_0095ff98 }
	__asm { sub ecx, esi }
	__asm { pop esi }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push edx }
	__asm { call fn_004038a0 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0095ffb0: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00947c00 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_0095ffd3 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push 0x10 }
	__asm { push 0xe5fe30 }
	__asm { call fn_004038a0 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0095ffd3: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008f6900();
extern "C" void fn_0095d740();
// FUNCTION: ROBLOXSTUDIO 0x009606b0
extern "C" __declspec(naked) void asm_009606b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { mov eax, dword ptr [eax + 0x20] }
	__asm { sub dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax + 0x18] }
	__asm { cmp edx, dword ptr [edi + 4] }
	__asm { je L_009606eb }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { push edx }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0095d740 }
	__asm { dec dword ptr [edi + 8] }
	__asm { L_009606eb: }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_009606fd }
	__asm { lea ecx, [eax + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_009606fd }
	__asm { add ecx, -0x1c }
	__asm { jmp L_009606ff }
	__asm { L_009606fd: }
	__asm { xor ecx, ecx }
	__asm { L_009606ff: }
	__asm { mov ecx, dword ptr [ecx + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0096071a }
	__asm { add ecx, -0x1c }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xc] }
	__asm { call fn_008f6900 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0096071a: }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xc] }
	__asm { call fn_008f6900 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00408d90();
extern "C" void fn_006b9740();
extern "C" void fn_008b1920();
// FUNCTION: ROBLOXSTUDIO 0x00960b00
extern "C" __declspec(naked) void asm_00960b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_00960b6e }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_00408d90 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { je L_00960b6e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00960b5d }
	__asm { push 0x3c }
	__asm { push 0xe85160 }
	__asm { push 0xe85198 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00960b6e }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00960b5d: }
	__asm { movzx eax, bl }
	__asm { push 0xe851c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00960b6e: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ecx + 4] }
	__asm { call fn_008b1920 }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_00b9a6a0();
// FUNCTION: ROBLOXSTUDIO 0x00960c10
extern "C" __declspec(naked) void asm_00960c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ebx, [ecx + 4] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00410ef0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9a6a0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 4] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008ff0a0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test cl, cl }
	__asm { je L_00960ca6 }
	__asm { cmp dword ptr [ebp + 8], 1 }
	__asm { je L_00960ca6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00960c95 }
	__asm { push 0x43 }
	__asm { push 0xe85160 }
	__asm { push 0xe8523c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00960ca6 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00960c95: }
	__asm { movzx eax, cl }
	__asm { push 0xe85250 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00960ca6: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x00961480
extern "C" __declspec(naked) void asm_00961480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd211e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe51be0 }
	__asm { mov dword ptr [esi + 0x10], 0x122ab50 }
	__asm { call fn_007cb250 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00961523 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_00961523 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0096150e }
	__asm { push 0x52 }
	__asm { push 0xe51be8 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00961523 }
	__asm { L_0096150e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe549d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00961523: }
	__asm { mov ecx, esi }
	__asm { call fn_00825770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x00961a50
extern "C" __declspec(naked) void asm_00961a50()
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
	__asm { push 0x38 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00961a9b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00961a9b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00961afa }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe872b8 }
	__asm { mov dword ptr [esi + 8], 0xe872c8 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov dword ptr [esi], 0xe872d0 }
	__asm { mov dword ptr [esi + 8], 0xe872e0 }
	__asm { jmp L_00961afc }
	__asm { L_00961afa: }
	__asm { xor esi, esi }
	__asm { L_00961afc: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00961b19 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00961b19: }
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
extern "C" void fn_008d9f20();
// FUNCTION: ROBLOXSTUDIO 0x00961b30
extern "C" __declspec(naked) void asm_00961b30()
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
	__asm { push 0x38 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00961b7b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00961b7b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00961bda }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe729d4 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe87288 }
	__asm { mov dword ptr [esi + 8], 0xe87298 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov dword ptr [esi], 0xe872a0 }
	__asm { mov dword ptr [esi + 8], 0xe872b0 }
	__asm { jmp L_00961bdc }
	__asm { L_00961bda: }
	__asm { xor esi, esi }
	__asm { L_00961bdc: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_008d9f20 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00961bf9 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00961bf9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00422570();
extern "C" void fn_007de8e0();
extern "C" void fn_00961360();
extern "C" void fn_00964440();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00961c10
extern "C" __declspec(naked) void asm_00961c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1cab7 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xa8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00961c72 }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { mov ecx, esi }
	__asm { call fn_00964440 }
	__asm { mov edi, eax }
	__asm { jmp L_00961c74 }
	__asm { L_00961c72: }
	__asm { xor edi, edi }
	__asm { L_00961c74: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [esi + 4] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], edi }
	__asm { call fn_00961360 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test edi, edi }
	__asm { je L_00961c9f }
	__asm { lea ecx, [edi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00961c9f }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_007de8e0 }
	__asm { L_00961c9f: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00961cca }
	__asm { test al, 1 }
	__asm { jne L_00961cca }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00961cca }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00961cca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00422570();
extern "C" void fn_00679260();
extern "C" void fn_007de8e0();
extern "C" void fn_00964580();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00961ce0
extern "C" __declspec(naked) void asm_00961ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1cab7 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xa8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00961d42 }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { mov ecx, esi }
	__asm { call fn_00964580 }
	__asm { mov edi, eax }
	__asm { jmp L_00961d44 }
	__asm { L_00961d42: }
	__asm { xor edi, edi }
	__asm { L_00961d44: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [esi + 4] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], edi }
	__asm { call fn_00679260 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test edi, edi }
	__asm { je L_00961d6f }
	__asm { lea ecx, [edi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00961d6f }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_007de8e0 }
	__asm { L_00961d6f: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00961d9a }
	__asm { test al, 1 }
	__asm { jne L_00961d9a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00961d9a }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00961d9a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009613f0();
extern "C" void fn_009646c0();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00961db0
extern "C" __declspec(naked) void asm_00961db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
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
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00961e15 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_009646c0 }
	__asm { mov dword ptr [esi], 0xe85a94 }
	__asm { mov dword ptr [esi + 4], 0xe85af8 }
	__asm { mov dword ptr [esi + 0x1c], 0xe85b2c }
	__asm { jmp L_00961e17 }
	__asm { L_00961e15: }
	__asm { xor esi, esi }
	__asm { L_00961e17: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_009613f0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00961e48 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00961e48 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00961e48: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00961540();
extern "C" void fn_00964770();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00961e60
extern "C" __declspec(naked) void asm_00961e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
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
	__asm { je L_00961eb1 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00964770 }
	__asm { mov edi, eax }
	__asm { jmp L_00961eb3 }
	__asm { L_00961eb1: }
	__asm { xor edi, edi }
	__asm { L_00961eb3: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [esi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], edi }
	__asm { call fn_00961540 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00961ee4 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00961ee4 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00b9e010 }
	__asm { L_00961ee4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040e0a0();
extern "C" void fn_00564b80();
extern "C" void fn_007b00e0();
extern "C" void fn_009cc8f0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00961f60
extern "C" __declspec(naked) void asm_00961f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f17 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x94 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00961fb6 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_009cc8f0 }
	__asm { mov esi, eax }
	__asm { jmp L_00961fb8 }
	__asm { L_00961fb6: }
	__asm { xor esi, esi }
	__asm { L_00961fb8: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00564b80 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_00961fe3 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00961fe3 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00961fe3: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0xc], 0xe852ec }
	__asm { mov dword ptr [ebp + 0x10], 0xe85364 }
	__asm { mov dword ptr [ebp + 0x24], 0xe8536c }
	__asm { mov dword ptr [ebp + 0x28], 0xe85378 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009615d0();
extern "C" void fn_00b9d030();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00962030
extern "C" __declspec(naked) void asm_00962030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x68 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0096207e }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_00b9d030 }
	__asm { mov esi, eax }
	__asm { jmp L_00962080 }
	__asm { L_0096207e: }
	__asm { xor esi, esi }
	__asm { L_00962080: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_009615d0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_009620b1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_009620b1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_009620b1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131a264[];
extern "C" char g_0131a268[];
extern "C" char g_0131a26c[];
extern "C" char g_0131a270[];
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00964330();
extern "C" void fn_009670e0();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009638a0
extern "C" __declspec(naked) void asm_009638a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3a069 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00964330 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe85fa0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00cf661e }
	__asm { mov bl, byte ptr [ebp + 0x24] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00963918 }
	__asm { mov byte ptr [eax], bl }
	__asm { jmp L_0096391a }
	__asm { L_00963918: }
	__asm { xor eax, eax }
	__asm { L_0096391a: }
	__asm { mov dword ptr [edi + 0x3c], eax }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp + 0x24], esp }
	__asm { mov esi, esp }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [esi + 8] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00963940 }
	__asm { mov byte ptr [eax], bl }
	__asm { L_00963940: }
	__asm { mov eax, dword ptr [g_0131a264] }
	__asm { test al, 1 }
	__asm { jne L_0096397c }
	__asm { or eax, 1 }
	__asm { push 0xddc0d0 }
	__asm { mov dword ptr [g_0131a264], eax }
	__asm { mov dword ptr [g_0131a268], 0x12bdfcc }
	__asm { mov dword ptr [g_0131a270], 0x410d30 }
	__asm { mov dword ptr [g_0131a26c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0096397c: }
	__asm { mov dword ptr [esi + 4], 0x131a268 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x28], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_009670e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" char g_0131a54c[];
extern "C" char g_0131a550[];
extern "C" char g_0131a554[];
extern "C" char g_0131a558[];
extern "C" void fn_007d5390();
extern "C" void fn_00825140();
extern "C" void fn_00964330();
extern "C" void fn_009672c0();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00963b90
extern "C" __declspec(naked) void asm_00963b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3a109 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00964330 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe85f2c }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { push 4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00cf661e }
	__asm { mov ebx, dword ptr [ebp + 0x24] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00963c08 }
	__asm { mov dword ptr [eax], ebx }
	__asm { jmp L_00963c0a }
	__asm { L_00963c08: }
	__asm { xor eax, eax }
	__asm { L_00963c0a: }
	__asm { mov dword ptr [edi + 0x3c], eax }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp + 0x28], esp }
	__asm { mov esi, esp }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [esi + 8] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00963c30 }
	__asm { mov dword ptr [eax], ebx }
	__asm { L_00963c30: }
	__asm { mov eax, dword ptr [g_0131a54c] }
	__asm { test al, 1 }
	__asm { jne L_00963c6c }
	__asm { or eax, 1 }
	__asm { push 0xddc180 }
	__asm { mov dword ptr [g_0131a54c], eax }
	__asm { mov dword ptr [g_0131a550], 0x12be4a4 }
	__asm { mov dword ptr [g_0131a558], 0x40d810 }
	__asm { mov dword ptr [g_0131a554], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00963c6c: }
	__asm { mov dword ptr [esi + 4], 0x131a550 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x14], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_009672c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5630();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00964330();
// FUNCTION: ROBLOXSTUDIO 0x00963e80
extern "C" __declspec(naked) void asm_00963e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4080b }
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
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00964330 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe85e58 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5630 }
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
	__asm { je L_00963f34 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00963f34: }
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
extern "C" void fn_00964330();
// FUNCTION: ROBLOXSTUDIO 0x00963f50
extern "C" __declspec(naked) void asm_00963f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3da1b }
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
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00964330 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe8601c }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5d30 }
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
	__asm { je L_00964004 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00964004: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00825140();
extern "C" void fn_00964330();
extern "C" void fn_009674a0();
// FUNCTION: ROBLOXSTUDIO 0x00964020
extern "C" __declspec(naked) void asm_00964020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3a196 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00964330 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe85f74 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp + 0x20], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_009674a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012e2234[];
extern "C" char g_012e4c70[];
extern "C" void fn_007b1740();
extern "C" void fn_007cbf10();
extern "C" void fn_00886e70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00964210
extern "C" __declspec(naked) void asm_00964210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3a1f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { je L_00964246 }
	__asm { mov dword ptr [esi + 0x68], 0xe854c0 }
	__asm { mov dword ptr [esi + 0x88], 0xe854c8 }
	__asm { L_00964246: }
	__asm { push 0 }
	__asm { call fn_00886e70 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe8538c }
	__asm { mov dword ptr [esi + 4], 0xe85414 }
	__asm { mov dword ptr [esi + 0x18], 0xe8541c }
	__asm { mov dword ptr [esi + 0x1c], 0xe85428 }
	__asm { mov dword ptr [esi + 0x64], 0xe85438 }
	__asm { mov dword ptr [esi + 0x6c], 0xe85440 }
	__asm { mov dword ptr [esi + 0x84], 0xe85474 }
	__asm { mov dword ptr [esi + 0x98], 0xe854a0 }
	__asm { mov dword ptr [esi + 0x128], 0xe854a8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe854bc }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xe8] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov eax, dword ptr [g_012e2234] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00964308 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2234], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5e218 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007b1740 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2108 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde34b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00964308: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e2108 }
	__asm { inc dword ptr [g_012e4c70] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e2234[];
extern "C" void fn_006b9740();
extern "C" void fn_007b1740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00964330
extern "C" __declspec(naked) void asm_00964330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3a216 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e2234] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_009643aa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2234], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5e218 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007b1740 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2108 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde34b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009643aa: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e2108 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe85e4c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00964422 }
	__asm { push 0x11fa60c }
	__asm { mov ecx, 0x11fa60c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00964422 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0096440d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00964422 }
	__asm { L_0096440d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00964422: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012ffaa0[];
extern "C" void fn_004959d0();
extern "C" void fn_007af680();
// FUNCTION: ROBLOXSTUDIO 0x00964440
extern "C" __declspec(naked) void asm_00964440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3a238 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe3baa4 }
	__asm { mov dword ptr [esi + 4], 0xe3bb1c }
	__asm { mov dword ptr [esi + 0x18], 0xe3bb24 }
	__asm { mov dword ptr [esi + 0x1c], 0xe3bb30 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004959d0 }
	__asm { fldz }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012ffaa0] }
	__asm { fstp qword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi + 0x84], 0xf }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov byte ptr [esi + 0x70], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe80bd4 }
	__asm { mov dword ptr [esi + 4], 0xe80c50 }
	__asm { mov dword ptr [esi + 0x18], 0xe80c58 }
	__asm { mov dword ptr [esi + 0x1c], 0xe80c64 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00964544 }
	__asm { mov dword ptr [esi + 0x88], ecx }
	__asm { test cl, 1 }
	__asm { je L_0096452a }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x90], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0x94], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x98], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x9c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0xa0], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0xa4], eax }
	__asm { jmp L_00964544 }
	__asm { L_0096452a: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x90] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { L_00964544: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00964569 }
	__asm { test cl, 1 }
	__asm { jne L_00964569 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00964569 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00964569: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_012ffaa0[];
extern "C" void fn_004959d0();
extern "C" void fn_007af680();
// FUNCTION: ROBLOXSTUDIO 0x00964580
extern "C" __declspec(naked) void asm_00964580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3a238 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe3baa4 }
	__asm { mov dword ptr [esi + 4], 0xe3bb1c }
	__asm { mov dword ptr [esi + 0x18], 0xe3bb24 }
	__asm { mov dword ptr [esi + 0x1c], 0xe3bb30 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004959d0 }
	__asm { fldz }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012ffaa0] }
	__asm { fstp qword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi + 0x84], 0xf }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov byte ptr [esi + 0x70], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe3c814 }
	__asm { mov dword ptr [esi + 4], 0xe3c890 }
	__asm { mov dword ptr [esi + 0x18], 0xe3c898 }
	__asm { mov dword ptr [esi + 0x1c], 0xe3c8a4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00964684 }
	__asm { mov dword ptr [esi + 0x88], ecx }
	__asm { test cl, 1 }
	__asm { je L_0096466a }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x90], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0x94], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x98], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x9c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0xa0], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0xa4], eax }
	__asm { jmp L_00964684 }
	__asm { L_0096466a: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x90] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { L_00964684: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_009646a9 }
	__asm { test cl, 1 }
	__asm { jne L_009646a9 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_009646a9 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009646a9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e5e218[];
extern "C" char g_012ffaa0[];
extern "C" void fn_004038a0();
extern "C" void fn_004959d0();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00964d60
extern "C" __declspec(naked) void asm_00964d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ca38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
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
	__asm { mov dword ptr [esi + 0x84], 0xf }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov byte ptr [esi + 0x70], 0 }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [esi], 0xe86fb4 }
	__asm { mov dword ptr [esi + 4], 0xe87030 }
	__asm { mov dword ptr [esi + 0x18], 0xe87038 }
	__asm { mov dword ptr [esi + 0x1c], 0xe87044 }
	__asm { cmp byte ptr [g_00e5e218], cl }
	__asm { mov eax, 9 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xe5e218 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00964e47 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00964e47: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_009616f0();
extern "C" void fn_00961930();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00965b10
extern "C" __declspec(naked) void asm_00965b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3a6d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test edi, edi }
	__asm { je L_00965b6b }
	__asm { cmp edi, 0x9249249 }
	__asm { ja L_00965b65 }
	__asm { lea eax, [edi*8] }
	__asm { sub eax, edi }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00965b6b }
	__asm { L_00965b65: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00965b6b: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00961930 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00965bcb }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 4] }
	__asm { push eax }
	__asm { call fn_009616f0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_00965bcb: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { lea eax, [edi*8] }
	__asm { sub eax, edi }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { lea eax, [ecx*8] }
	__asm { sub eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 4], eax }
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

extern "C" void fn_00486e40();
extern "C" void fn_00532170();
extern "C" void fn_0065f1a0();
extern "C" void fn_0068a630();
extern "C" void fn_007cd560();
extern "C" void fn_00962810();
extern "C" void fn_009676f0();
extern "C" void fn_009d9c50();
// FUNCTION: ROBLOXSTUDIO 0x009661a0
extern "C" __declspec(naked) void asm_009661a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ebx, ecx }
	__asm { cmp eax, ebx }
	__asm { je L_00966280 }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { je L_00966206 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00966206 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00532170 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00966206 }
	__asm { lea esi, [edi - 0x1c] }
	__asm { test esi, esi }
	__asm { je L_00966206 }
	__asm { push esi }
	__asm { call fn_009d9c50 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00966206 }
	__asm { mov ecx, esi }
	__asm { call fn_0065f1a0 }
	__asm { test eax, eax }
	__asm { jne L_00966206 }
	__asm { mov ecx, esi }
	__asm { call fn_00962810 }
	__asm { test eax, eax }
	__asm { jne L_00966206 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_009676f0 }
	__asm { L_00966206: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [edi] }
	__asm { test edi, edi }
	__asm { je L_00966242 }
	__asm { add edi, 0x1c }
	__asm { je L_00966242 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0068a630 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00966242 }
	__asm { lea esi, [edi - 0x1c] }
	__asm { test esi, esi }
	__asm { je L_00966242 }
	__asm { mov ecx, esi }
	__asm { call fn_0065f1a0 }
	__asm { test eax, eax }
	__asm { jne L_00966242 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_009676f0 }
	__asm { L_00966242: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [edi] }
	__asm { test edi, edi }
	__asm { je L_0096627e }
	__asm { add edi, 0x1c }
	__asm { je L_0096627e }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00486e40 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0096627e }
	__asm { lea esi, [edi - 0x1c] }
	__asm { test esi, esi }
	__asm { je L_0096627e }
	__asm { mov ecx, esi }
	__asm { call fn_0065f1a0 }
	__asm { test eax, eax }
	__asm { jne L_0096627e }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_009676f0 }
	__asm { L_0096627e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00966280: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_00532480();
extern "C" void fn_0067af70();
extern "C" void fn_006b9740();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00966420
extern "C" __declspec(naked) void asm_00966420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00966473 }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00966442 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00966444 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00966444 }
	__asm { L_00966442: }
	__asm { mov eax, edi }
	__asm { L_00966444: }
	__asm { test eax, eax }
	__asm { je L_00966473 }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00966473 }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00966473 }
	__asm { lea ecx, [ebx - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00966473 }
	__asm { call fn_0067af70 }
	__asm { mov esi, eax }
	__asm { jmp L_00966475 }
	__asm { L_00966473: }
	__asm { xor esi, esi }
	__asm { L_00966475: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009664be }
	__asm { test esi, esi }
	__asm { je L_009664de }
	__asm { cmp esi, edi }
	__asm { jne L_009664be }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009664ad }
	__asm { push 0x9b }
	__asm { push 0xe85be8 }
	__asm { push 0xe85da8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009664be }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009664ad: }
	__asm { movzx eax, al }
	__asm { push 0xe85dd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009664be: }
	__asm { test esi, esi }
	__asm { je L_009664de }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { cmp esi, ecx }
	__asm { je L_009664d7 }
	__asm { test ecx, ecx }
	__asm { je L_009664de }
	__asm { push esi }
	__asm { call fn_00532480 }
	__asm { test al, al }
	__asm { je L_009664de }
	__asm { L_009664d7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009664de: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d55c0();
extern "C" void fn_007d5630();
extern "C" void fn_007d5d30();
extern "C" void fn_007d60a0();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x009670e0
extern "C" __declspec(naked) void asm_009670e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4f1cb }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { call fn_007d55c0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d60a0 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_007d5630 }
	__asm { lea ecx, [ebp + 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x50] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_007d5d30 }
	__asm { lea ecx, [ebp + 0x9c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x98] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00967181 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00967181: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00967198 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00967198: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009671b8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009671b8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d55c0();
extern "C" void fn_007d5710();
extern "C" void fn_007d5d30();
extern "C" void fn_007d60a0();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x009671d0
extern "C" __declspec(naked) void asm_009671d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4f1cb }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { call fn_007d55c0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d60a0 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_007d5710 }
	__asm { lea ecx, [ebp + 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x50] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_007d5d30 }
	__asm { lea ecx, [ebp + 0x9c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x98] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00967271 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00967271: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00967288 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00967288: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009672a8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009672a8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5630();
extern "C" void fn_00825670();
extern "C" void fn_00a559f0();
// FUNCTION: ROBLOXSTUDIO 0x009672c0
extern "C" __declspec(naked) void asm_009672c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4f1cb }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { call fn_007d5630 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00a559f0 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_007d5630 }
	__asm { lea ecx, [ebp + 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x50] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_007d5390 }
	__asm { lea ecx, [ebp + 0x9c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x98] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00967361 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00967361: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00967378 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00967378: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00967398 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00967398: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5630();
extern "C" void fn_007d5710();
extern "C" void fn_00825670();
extern "C" void fn_00a559f0();
// FUNCTION: ROBLOXSTUDIO 0x009673b0
extern "C" __declspec(naked) void asm_009673b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4f1cb }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { call fn_007d5630 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00a559f0 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_007d5710 }
	__asm { lea ecx, [ebp + 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x50] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_007d5390 }
	__asm { lea ecx, [ebp + 0x9c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x98] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00967451 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00967451: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00967468 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00967468: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00967488 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00967488: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5630();
extern "C" void fn_007d5d30();
extern "C" void fn_00825670();
extern "C" void fn_00a559f0();
// FUNCTION: ROBLOXSTUDIO 0x009674a0
extern "C" __declspec(naked) void asm_009674a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5f250 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00a559f0 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_007d5630 }
	__asm { lea ecx, [ebp + 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x50] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0096751d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0096751d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00967537 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00967537: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_007d5d30();
extern "C" void fn_00825670();
extern "C" void fn_00a559f0();
// FUNCTION: ROBLOXSTUDIO 0x00967550
extern "C" __declspec(naked) void asm_00967550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5f250 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00a559f0 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_007d5710 }
	__asm { lea ecx, [ebp + 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x50] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009675cd }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009675cd: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009675e7 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009675e7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" char g_00e10268[];
extern "C" void fn_009616f0();
extern "C" void fn_00961800();
// FUNCTION: ROBLOXSTUDIO 0x00967b20
extern "C" __declspec(naked) void asm_00967b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jne L_00967b64 }
	__asm { cmp edx, dword ptr [edi + 4] }
	__asm { jne L_00967b64 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_009616f0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00967b64: }
	__asm { cmp eax, edx }
	__asm { je L_00967b9e }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push edx }
	__asm { call fn_00961800 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_009616f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x20 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00967b9e: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_00532480();
extern "C" void fn_0067af70();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00968e80
extern "C" __declspec(naked) void asm_00968e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00968ef5 }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00968ea2 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00968ea4 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00968ea4 }
	__asm { L_00968ea2: }
	__asm { mov eax, edi }
	__asm { L_00968ea4: }
	__asm { test eax, eax }
	__asm { je L_00968ef5 }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00968ef5 }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00968ef5 }
	__asm { lea ecx, [ebx - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00968ef5 }
	__asm { call fn_0067af70 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00968ef5 }
	__asm { cmp edi, esi }
	__asm { je L_00968eee }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { cmp esi, ecx }
	__asm { je L_00968eee }
	__asm { test ecx, ecx }
	__asm { je L_00968ef5 }
	__asm { push esi }
	__asm { call fn_00532480 }
	__asm { test al, al }
	__asm { je L_00968ef5 }
	__asm { L_00968eee: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00968ef5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e2364[];
extern "C" void fn_004118e0();
extern "C" void fn_0048d4a0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0096e000();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0096d490
extern "C" __declspec(naked) void asm_0096d490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ab26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0096e000 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e2364] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0096d54f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2364], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe873e0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2238 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3420 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0096d54f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e2238 }
	__asm { call fn_0048d4a0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe875b8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0096d5cd }
	__asm { push 0x122c204 }
	__asm { mov ecx, 0x122c204 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0096d5cd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0096d5b8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0096d5cd }
	__asm { L_0096d5b8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0096d5cd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e2364[];
extern "C" void fn_0040bc40();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0096e060();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0096d5e0
extern "C" __declspec(naked) void asm_0096d5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ab26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0096e060 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e2364] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0096d69f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2364], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe873e0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2238 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3420 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0096d69f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e2238 }
	__asm { call fn_0040bc40 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe87728 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0096d71d }
	__asm { push 0x122c204 }
	__asm { mov ecx, 0x122c204 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0096d71d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0096d708 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0096d71d }
	__asm { L_0096d708: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0096d71d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e2364[];
extern "C" void fn_0040bb80();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0096e0c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0096d730
extern "C" __declspec(naked) void asm_0096d730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ab26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0096e0c0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e2364] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0096d7ef }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2364], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe873e0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2238 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3420 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0096d7ef: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e2238 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe87600 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0096d86d }
	__asm { push 0x122c204 }
	__asm { mov ecx, 0x122c204 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0096d86d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0096d858 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0096d86d }
	__asm { L_0096d858: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0096d86d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e2364[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0096e120();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0096d880
extern "C" __declspec(naked) void asm_0096d880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ab26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0096e120 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e2364] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0096d93f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2364], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe873e0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2238 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3420 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0096d93f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e2238 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe87788 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0096d9bd }
	__asm { push 0x122c204 }
	__asm { mov ecx, 0x122c204 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0096d9bd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0096d9a8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0096d9bd }
	__asm { L_0096d9a8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0096d9bd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_008b7f20();
// FUNCTION: ROBLOXSTUDIO 0x0096e8d0
extern "C" __declspec(naked) void asm_0096e8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jne L_0096e8e3 }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0096e8e3: }
	__asm { mov dl, byte ptr [eax] }
	__asm { push ebx }
	__asm { xor bl, bl }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dl, 0x2d }
	__asm { jne L_0096e8f8 }
	__asm { mov bl, 1 }
	__asm { jmp L_0096e8fd }
	__asm { L_0096e8f8: }
	__asm { cmp dl, 0x2b }
	__asm { jne L_0096e900 }
	__asm { L_0096e8fd: }
	__asm { inc eax }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0096e900: }
	__asm { push dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 4] }
	__asm { push dword ptr [ecx] }
	__asm { push eax }
	__asm { call fn_008b7f20 }
	__asm { add esp, 0xc }
	__asm { test bl, bl }
	__asm { pop ebx }
	__asm { je L_0096e947 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { test al, al }
	__asm { je L_0096e936 }
	__asm { cmp ecx, 0x80000000 }
	__asm { ja L_0096e936 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { neg ecx }
	__asm { mov dl, 1 }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov al, dl }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0096e936: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xor dl, dl }
	__asm { neg ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov al, dl }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0096e947: }
	__asm { test al, al }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { je L_0096e964 }
	__asm { cmp eax, 0x7fffffff }
	__asm { ja L_0096e964 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dl, 1 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov al, dl }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0096e964: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { xor dl, dl }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov al, dl }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0096e4e0();
// FUNCTION: ROBLOXSTUDIO 0x0096e980
extern "C" __declspec(naked) void asm_0096e980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { cmp eax, esi }
	__asm { jne L_0096e999 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0096e999: }
	__asm { mov dl, byte ptr [eax] }
	__asm { push ebx }
	__asm { xor bl, bl }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dl, 0x2d }
	__asm { jne L_0096e9b5 }
	__asm { mov bl, 1 }
	__asm { jmp L_0096e9ba }
	__asm { L_0096e9b5: }
	__asm { cmp dl, 0x2b }
	__asm { jne L_0096e9bd }
	__asm { L_0096e9ba: }
	__asm { inc eax }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0096e9bd: }
	__asm { push esi }
	__asm { push dword ptr [ecx] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_0096e4e0 }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { add esp, 0xc }
	__asm { test bl, bl }
	__asm { pop ebx }
	__asm { je L_0096ea1d }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { test al, al }
	__asm { je L_0096ea03 }
	__asm { cmp ecx, 0x80000000 }
	__asm { ja L_0096ea03 }
	__asm { jb L_0096e9e9 }
	__asm { test esi, esi }
	__asm { jne L_0096ea03 }
	__asm { L_0096e9e9: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { neg esi }
	__asm { adc ecx, 0 }
	__asm { neg ecx }
	__asm { mov dl, 1 }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov al, dl }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0096ea03: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xor dl, dl }
	__asm { neg esi }
	__asm { adc ecx, 0 }
	__asm { neg ecx }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov al, dl }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0096ea1d: }
	__asm { test al, al }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { je L_0096ea45 }
	__asm { cmp eax, 0x7fffffff }
	__asm { ja L_0096ea45 }
	__asm { jb L_0096ea32 }
	__asm { cmp esi, -1 }
	__asm { ja L_0096ea45 }
	__asm { L_0096ea32: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dl, 1 }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov al, dl }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0096ea45: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { xor dl, dl }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov al, dl }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d54e0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_0096f670();
// FUNCTION: ROBLOXSTUDIO 0x0096f360
extern "C" __declspec(naked) void asm_0096f360()
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
	__asm { call fn_0096f670 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe876cc }
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
	__asm { call fn_007d54e0 }
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
	__asm { je L_0096f40e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0096f40e: }
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
extern "C" void fn_007d5d30();
extern "C" void fn_008251b0();
extern "C" void fn_0096f5c0();
// FUNCTION: ROBLOXSTUDIO 0x0096f4f0
extern "C" __declspec(naked) void asm_0096f4f0()
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
	__asm { call fn_0096f5c0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe87578 }
	__asm { call fn_007d5d30 }
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
	__asm { jae L_0096f582 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0096f582: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_0096f5a5 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0096f5a5: }
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
extern "C" char g_012e2364[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0096f670
extern "C" __declspec(naked) void asm_0096f670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3acb6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e2364] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0096f6ea }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2364], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe873e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2238 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3420 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0096f6ea: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e2238 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe87650 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0096f762 }
	__asm { push 0x122c204 }
	__asm { mov ecx, 0x122c204 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0096f762 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0096f74d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0096f762 }
	__asm { L_0096f74d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0096f762: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10500[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00970040
extern "C" __declspec(naked) void asm_00970040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0097005b }
	__asm { add eax, -0x1c }
	__asm { jmp L_0097005d }
	__asm { L_0097005b: }
	__asm { xor eax, eax }
	__asm { L_0097005d: }
	__asm { push esi }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_0097009d }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_009700a7 }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_009700a7 }
	__asm { L_0097009d: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_009700a7: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp dword ptr [ebp - 8], 0x10 }
	__asm { jb L_009700d5 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009700d5: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10518[];
extern "C" void fn_00841fd0();
extern "C" void fn_0096e180();
// FUNCTION: ROBLOXSTUDIO 0x00970120
extern "C" __declspec(naked) void asm_00970120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3ade8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x14 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00970148 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0097014a }
	__asm { L_00970148: }
	__asm { mov ecx, eax }
	__asm { L_0097014a: }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { lea edx, [ecx + eax] }
	__asm { cmp ecx, edx }
	__asm { je L_0097018c }
	__asm { mov al, byte ptr [ecx] }
	__asm { push ebx }
	__asm { xor bl, bl }
	__asm { cmp al, 0x2d }
	__asm { jne L_00970161 }
	__asm { mov bl, 1 }
	__asm { jmp L_00970165 }
	__asm { L_00970161: }
	__asm { cmp al, 0x2b }
	__asm { jne L_00970166 }
	__asm { L_00970165: }
	__asm { inc ecx }
	__asm { L_00970166: }
	__asm { push edx }
	__asm { push ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0096e180 }
	__asm { add esp, 0xc }
	__asm { test bl, bl }
	__asm { mov dl, al }
	__asm { pop ebx }
	__asm { je L_00970185 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { neg ecx }
	__asm { movzx eax, cx }
	__asm { jmp L_00970188 }
	__asm { L_00970185: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_00970188: }
	__asm { test dl, dl }
	__asm { jne L_009701bf }
	__asm { L_0097018c: }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x20], 0xe5d3b8 }
	__asm { mov dword ptr [ebp - 0x14], 0x12be0b8 }
	__asm { mov dword ptr [ebp - 0x10], 0x122c220 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00841fd0 }
	__asm { L_009701bf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0096fc10();
// FUNCTION: ROBLOXSTUDIO 0x009702f0
extern "C" __declspec(naked) void asm_009702f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], -2 }
	__asm { jne L_0097031e }
	__asm { cmp dword ptr [esi + 4], 0x7fffffff }
	__asm { jne L_0097031e }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0xfffffffe }
	__asm { mov dword ptr [eax + 4], 0x7fffffff }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0097031e: }
	__asm { push edi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0096fc10 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp eax, 1 }
	__asm { jne L_00970343 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { jg L_0097036b }
	__asm { L_00970343: }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0096fc10 }
	__asm { cmp eax, -1 }
	__asm { sete al }
	__asm { test al, al }
	__asm { je L_00970383 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { jge L_00970383 }
	__asm { L_0097036b: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { mov dword ptr [eax + 4], 0x7fffffff }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00970383: }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0096fc10 }
	__asm { cmp eax, 1 }
	__asm { jne L_009703a6 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { jl L_009703ce }
	__asm { L_009703a6: }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0096fc10 }
	__asm { cmp eax, -1 }
	__asm { sete al }
	__asm { test al, al }
	__asm { je L_009703e6 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { jle L_009703e6 }
	__asm { L_009703ce: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0x80000000 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009703e6: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xfffffffe }
	__asm { mov dword ptr [eax + 4], 0x7fffffff }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0049a3f0();
extern "C" void fn_0067cc40();
extern "C" void fn_007b4f50();
extern "C" void fn_00cf6970();
extern "C" void fn_00d04fd0();
// FUNCTION: ROBLOXSTUDIO 0x00970950
extern "C" __declspec(naked) void asm_00970950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0xf4240 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [eax] }
	__asm { call fn_00cf6970 }
	__asm { mov edi, eax }
	__asm { mov eax, 0x3dd1baf9 }
	__asm { imul edi }
	__asm { sub edx, edi }
	__asm { sar edx, 0x10 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { imul ecx, ecx, 0x15180 }
	__asm { push 0 }
	__asm { push 0xf4240 }
	__asm { push dword ptr [esi + 0x1ac] }
	__asm { add edi, ecx }
	__asm { push dword ptr [esi + 0x1a8] }
	__asm { call fn_00cf6970 }
	__asm { cmp eax, edi }
	__asm { je L_009709ff }
	__asm { push edi }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_0067cc40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x1a8], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push 0 }
	__asm { push 0xf4240 }
	__asm { mov dword ptr [esi + 0x1ac], ecx }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax] }
	__asm { call fn_00cf6970 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { fild dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { lea ecx, [esi + 0x68] }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00d04fd0 }
	__asm { push 0x1301280 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { push 0 }
	__asm { lea ecx, [esi + 0x1e8] }
	__asm { call fn_0049a3f0 }
	__asm { L_009709ff: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e5dbc[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00972db0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00970c80
extern "C" __declspec(naked) void asm_00970c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3aeb6 }
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
	__asm { call fn_00972db0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e5dbc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00970d3c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5dbc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe878e0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5c90 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7fa0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00970d3c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e5c90 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe87998 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00970dba }
	__asm { push 0x122cb74 }
	__asm { mov ecx, 0x122cb74 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00970dba }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00970da5 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00970dba }
	__asm { L_00970da5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00970dba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e5dbc[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00972e00();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00970dd0
extern "C" __declspec(naked) void asm_00970dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3aee6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00972e00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e5dbc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00970e8f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5dbc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe878e0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5c90 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7fa0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00970e8f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e5c90 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe87998 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00970f0d }
	__asm { push 0x122cb74 }
	__asm { mov ecx, 0x122cb74 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00970f0d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00970ef8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00970f0d }
	__asm { L_00970ef8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00970f0d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

// FUNCTION: ROBLOXSTUDIO 0x00970f20
extern "C" __declspec(naked) void asm_00970f20()
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
	__asm { mov dword ptr [esi + 8], 0xe882f0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe88370 }
	__asm { mov dword ptr [esi + 8], 0xe88380 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00970fca }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00970fb6 }
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
	__asm { L_00970fb6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00970fca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00970fe0
extern "C" __declspec(naked) void asm_00970fe0()
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
	__asm { mov dword ptr [esi + 8], 0xe88308 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe88400 }
	__asm { mov dword ptr [esi + 8], 0xe88410 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0097108a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00971076 }
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
	__asm { L_00971076: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0097108a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x009710a0
extern "C" __declspec(naked) void asm_009710a0()
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
	__asm { mov dword ptr [esi + 8], 0xe88300 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe883d0 }
	__asm { mov dword ptr [esi + 8], 0xe883e0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0097114a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00971136 }
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
	__asm { L_00971136: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0097114a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00971160
extern "C" __declspec(naked) void asm_00971160()
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
	__asm { mov dword ptr [esi + 8], 0xe882e8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe88340 }
	__asm { mov dword ptr [esi + 8], 0xe88350 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0097120a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_009711f6 }
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
	__asm { L_009711f6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0097120a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00971220
extern "C" __declspec(naked) void asm_00971220()
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
	__asm { mov dword ptr [esi + 8], 0xe882d8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe88310 }
	__asm { mov dword ptr [esi + 8], 0xe88320 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009712ca }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_009712b6 }
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
	__asm { L_009712b6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009712ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x009712e0
extern "C" __declspec(naked) void asm_009712e0()
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
	__asm { mov dword ptr [esi + 8], 0xe882f8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe883a0 }
	__asm { mov dword ptr [esi + 8], 0xe883b0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0097138a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00971376 }
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
	__asm { L_00971376: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0097138a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00624a40();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00971d50
extern "C" __declspec(naked) void asm_00971d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3af01 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00971d84: }
	__asm { cmp edi, ebx }
	__asm { je L_00971de9 }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00971db6 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { L_00971db6: }
	__asm { add esi, 0x1c }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { add edi, 0x1c }
	__asm { jmp L_00971d84 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_00971de0 }
	__asm { nop }
	__asm { L_00971dd0: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { call fn_00624a40 }
	__asm { add esi, 0x1c }
	__asm { cmp esi, edi }
	__asm { jne L_00971dd0 }
	__asm { L_00971de0: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00971de9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00970f20();
extern "C" void fn_0097b020();
// FUNCTION: ROBLOXSTUDIO 0x00972390
extern "C" __declspec(naked) void asm_00972390()
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
	__asm { je L_009723db }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009723db: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00972404 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00970f20 }
	__asm { mov dword ptr [esi], 0xe88388 }
	__asm { mov dword ptr [esi + 8], 0xe88398 }
	__asm { jmp L_00972406 }
	__asm { L_00972404: }
	__asm { xor esi, esi }
	__asm { L_00972406: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0097b020 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0097242a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0097242a: }
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
extern "C" void fn_00970fe0();
extern "C" void fn_0097b1d0();
// FUNCTION: ROBLOXSTUDIO 0x00972440
extern "C" __declspec(naked) void asm_00972440()
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
	__asm { je L_0097248b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0097248b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009724b4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00970fe0 }
	__asm { mov dword ptr [esi], 0xe88418 }
	__asm { mov dword ptr [esi + 8], 0xe88428 }
	__asm { jmp L_009724b6 }
	__asm { L_009724b4: }
	__asm { xor esi, esi }
	__asm { L_009724b6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0097b1d0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009724da }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009724da: }
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
extern "C" void fn_009710a0();
extern "C" void fn_0097b380();
// FUNCTION: ROBLOXSTUDIO 0x009724f0
extern "C" __declspec(naked) void asm_009724f0()
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
	__asm { je L_0097253b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0097253b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00972564 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_009710a0 }
	__asm { mov dword ptr [esi], 0xe883e8 }
	__asm { mov dword ptr [esi + 8], 0xe883f8 }
	__asm { jmp L_00972566 }
	__asm { L_00972564: }
	__asm { xor esi, esi }
	__asm { L_00972566: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0097b380 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0097258a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0097258a: }
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
extern "C" void fn_00971160();
extern "C" void fn_0097b530();
// FUNCTION: ROBLOXSTUDIO 0x009725a0
extern "C" __declspec(naked) void asm_009725a0()
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
	__asm { je L_009725eb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009725eb: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00972614 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00971160 }
	__asm { mov dword ptr [esi], 0xe88358 }
	__asm { mov dword ptr [esi + 8], 0xe88368 }
	__asm { jmp L_00972616 }
	__asm { L_00972614: }
	__asm { xor esi, esi }
	__asm { L_00972616: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0097b530 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0097263a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0097263a: }
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
extern "C" void fn_00971220();
extern "C" void fn_0097b6e0();
// FUNCTION: ROBLOXSTUDIO 0x00972650
extern "C" __declspec(naked) void asm_00972650()
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
	__asm { je L_0097269b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0097269b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009726c4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00971220 }
	__asm { mov dword ptr [esi], 0xe88328 }
	__asm { mov dword ptr [esi + 8], 0xe88338 }
	__asm { jmp L_009726c6 }
	__asm { L_009726c4: }
	__asm { xor esi, esi }
	__asm { L_009726c6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0097b6e0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009726ea }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009726ea: }
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
extern "C" void fn_009712e0();
extern "C" void fn_0097b890();
// FUNCTION: ROBLOXSTUDIO 0x00972700
extern "C" __declspec(naked) void asm_00972700()
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
	__asm { je L_0097274b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0097274b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00972774 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_009712e0 }
	__asm { mov dword ptr [esi], 0xe883b8 }
	__asm { mov dword ptr [esi + 8], 0xe883c8 }
	__asm { jmp L_00972776 }
	__asm { L_00972774: }
	__asm { xor esi, esi }
	__asm { L_00972776: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0097b890 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0097279a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0097279a: }
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
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007975c0();
extern "C" void fn_007d5d30();
extern "C" void fn_007de2d0();
extern "C" void fn_007e9920();
extern "C" void fn_00825060();
// FUNCTION: ROBLOXSTUDIO 0x009728f0
extern "C" __declspec(naked) void asm_009728f0()
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
	__asm { call fn_00825060 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007975c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007e9920 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_007de2d0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5d30 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_00410d50 }
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

extern "C" void fn_00410d50();
extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5390();
extern "C" void fn_007d5d30();
extern "C" void fn_007dddc0();
extern "C" void fn_007e96f0();
// FUNCTION: ROBLOXSTUDIO 0x009729b0
extern "C" __declspec(naked) void asm_009729b0()
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
	__asm { call fn_007e96f0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007dddc0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5d30 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_00410d50 }
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
extern "C" void fn_007d2b80();
extern "C" void fn_00825140();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00972c50
extern "C" __declspec(naked) void asm_00972c50()
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
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 1 }
	__asm { jb L_00972d01 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00972ce7 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_007d2b80 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { fstp dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00972cd6 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00972cd6: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00972ce7: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00972d01 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00972d01: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_00972d26 }
	__asm { fld dword ptr [ecx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00972d26: }
	__asm { push 1 }
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

extern "C" void fn_007cb250();
extern "C" void fn_007d5470();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00974340();
// FUNCTION: ROBLOXSTUDIO 0x00972fa0
extern "C" __declspec(naked) void asm_00972fa0()
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
	__asm { call fn_00974340 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe87c68 }
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
	__asm { call fn_007d5470 }
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
	__asm { je L_0097304e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0097304e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5b00();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00974340();
// FUNCTION: ROBLOXSTUDIO 0x00973070
extern "C" __declspec(naked) void asm_00973070()
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
	__asm { call fn_00974340 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe87c3c }
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
	__asm { call fn_007d5b00 }
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
	__asm { je L_0097311e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0097311e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00973200
extern "C" __declspec(naked) void asm_00973200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x11f0e64 }
	__asm { mov edi, ecx }
	__asm { push 0xe87b84 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59c88 }
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
	__asm { push 0xe39978 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe87b94 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe87ba0 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00973340
extern "C" __declspec(naked) void asm_00973340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x11f0e34 }
	__asm { mov edi, ecx }
	__asm { push 0xe87b68 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59c70 }
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
	__asm { push 0xe470e4 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe87b74 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe87b78 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe87b7c }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x10131d4 }
	__asm { push 4 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x009734a0
extern "C" __declspec(naked) void asm_009734a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x11f0e00 }
	__asm { mov edi, ecx }
	__asm { push 0xe87b58 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59c58 }
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
	__asm { push 0x1010c8c }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0x1010c94 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x100c1f8 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x100c1fc }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x10131d4 }
	__asm { push 4 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_008251b0();
extern "C" void fn_00974290();
// FUNCTION: ROBLOXSTUDIO 0x00973e90
extern "C" __declspec(naked) void asm_00973e90()
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
	__asm { call fn_00974290 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe87df8 }
	__asm { call fn_007d5710 }
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
	__asm { jae L_00973f22 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00973f22: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00973f45 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00973f45: }
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
extern "C" char g_012e5dbc[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00974340
extern "C" __declspec(naked) void asm_00974340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3aff6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e5dbc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_009743ba }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5dbc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe878e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5c90 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7fa0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009743ba: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e5c90 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe87bf8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00974432 }
	__asm { push 0x122cb74 }
	__asm { mov ecx, 0x122cb74 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00974432 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0097441d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00974432 }
	__asm { L_0097441d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00974432: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_00971be0();
extern "C" void fn_00971d00();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009765c0
extern "C" __declspec(naked) void asm_009765c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3b600 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test edi, edi }
	__asm { je L_00976615 }
	__asm { cmp edi, 0x15555555 }
	__asm { ja L_0097660f }
	__asm { lea eax, [edi + edi*2] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00976615 }
	__asm { L_0097660f: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00976615: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00971d00 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00976672 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 4] }
	__asm { push eax }
	__asm { call fn_00971be0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_00976672: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [edi + edi*2] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { pop edi }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 4], eax }
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

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_0060de00();
extern "C" void fn_00971d50();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009766c0
extern "C" __declspec(naked) void asm_009766c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3b610 }
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
	__asm { je L_0097671b }
	__asm { cmp ebx, 0x9249249 }
	__asm { ja L_00976715 }
	__asm { lea eax, [ebx*8] }
	__asm { sub eax, ebx }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_0097671b }
	__asm { L_00976715: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0097671b: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00971d50 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { sub ecx, dword ptr [edi] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00976776 }
	__asm { push dword ptr [edi + 4] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { call fn_0060de00 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00976776: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebx*8] }
	__asm { sub eax, ebx }
	__asm { mov dword ptr [edi], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { lea eax, [ecx*8] }
	__asm { sub eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
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
extern "C" void fn_009765c0();
// FUNCTION: ROBLOXSTUDIO 0x009767d0
extern "C" __declspec(naked) void asm_009767d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_00976868 }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul esi }
	__asm { sar edx, 1 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x15555555 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_0097681f }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0097681f: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ebx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x15555555 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_00976855 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_009765c0 }
	__asm { L_00976855: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_009765c0 }
	__asm { L_00976868: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01301629[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fbb0();
extern "C" void fn_008523c0();
extern "C" void fn_009797f0();
// FUNCTION: ROBLOXSTUDIO 0x009773b0
extern "C" __declspec(naked) void asm_009773b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { mov edi, ecx }
	__asm { je L_0097744b }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_008523c0 }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { test ebx, ebx }
	__asm { je L_0097744a }
	__asm { cmp byte ptr [g_01301629], 0 }
	__asm { je L_0097743b }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], 0x1301644 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_009797f0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0040fbb0 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0097743b: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_009797f0 }
	__asm { L_0097744a: }
	__asm { pop ebx }
	__asm { L_0097744b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}
