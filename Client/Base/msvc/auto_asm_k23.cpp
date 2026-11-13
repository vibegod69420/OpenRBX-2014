// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_008c00e0();
extern "C" void fn_008c0570();
extern "C" void fn_008ce3b0();
// FUNCTION: ROBLOXSTUDIO 0x008cbea0
extern "C" __declspec(naked) void asm_008cbea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f469 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { lea eax, [ebp + 0x18] }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_008c00e0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_008ce3b0 }
	__asm { mov edx, eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { lea eax, [edx + 4] }
	__asm { lea ecx, [esi + 0xc] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008c00e0 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008c0570 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008c0570 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bdb0();
// FUNCTION: ROBLOXSTUDIO 0x008cc1c0
extern "C" __declspec(naked) void asm_008cc1c0()
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
	__asm { je L_008cc20b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_008cc20b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_008cc25e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe51730 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe72a0c }
	__asm { mov dword ptr [esi + 8], 0xe72a1c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe72a24 }
	__asm { mov dword ptr [esi + 8], 0xe72a34 }
	__asm { jmp L_008cc260 }
	__asm { L_008cc25e: }
	__asm { xor esi, esi }
	__asm { L_008cc260: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bdb0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_008cc27d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_008cc27d: }
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
// FUNCTION: ROBLOXSTUDIO 0x008cc2a0
extern "C" __declspec(naked) void asm_008cc2a0()
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
	__asm { je L_008cc2eb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_008cc2eb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_008cc33e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe729d4 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe729dc }
	__asm { mov dword ptr [esi + 8], 0xe729ec }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe729f4 }
	__asm { mov dword ptr [esi + 8], 0xe72a04 }
	__asm { jmp L_008cc340 }
	__asm { L_008cc33e: }
	__asm { xor esi, esi }
	__asm { L_008cc340: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_008d9f20 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_008cc35d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_008cc35d: }
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
extern "C" void fn_008da280();
// FUNCTION: ROBLOXSTUDIO 0x008cc380
extern "C" __declspec(naked) void asm_008cc380()
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
	__asm { je L_008cc3cb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_008cc3cb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_008cc41e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe72888 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe7299c }
	__asm { mov dword ptr [esi + 8], 0xe729ac }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe729b4 }
	__asm { mov dword ptr [esi + 8], 0xe729c4 }
	__asm { jmp L_008cc420 }
	__asm { L_008cc41e: }
	__asm { xor esi, esi }
	__asm { L_008cc420: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_008da280 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_008cc43d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_008cc43d: }
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
extern "C" void fn_008c7050();
extern "C" void fn_008da0d0();
// FUNCTION: ROBLOXSTUDIO 0x008cc460
extern "C" __declspec(naked) void asm_008cc460()
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
	__asm { je L_008cc4ab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_008cc4ab: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_008cc4d4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_008c7050 }
	__asm { mov dword ptr [esi], 0xe72a84 }
	__asm { mov dword ptr [esi + 8], 0xe72a94 }
	__asm { jmp L_008cc4d6 }
	__asm { L_008cc4d4: }
	__asm { xor esi, esi }
	__asm { L_008cc4d6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008da0d0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_008cc4fa }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_008cc4fa: }
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
extern "C" void fn_008c7110();
extern "C" void fn_008da280();
// FUNCTION: ROBLOXSTUDIO 0x008cc510
extern "C" __declspec(naked) void asm_008cc510()
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
	__asm { je L_008cc55b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_008cc55b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_008cc584 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_008c7110 }
	__asm { mov dword ptr [esi], 0xe72a54 }
	__asm { mov dword ptr [esi + 8], 0xe72a64 }
	__asm { jmp L_008cc586 }
	__asm { L_008cc584: }
	__asm { xor esi, esi }
	__asm { L_008cc586: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008da280 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_008cc5aa }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_008cc5aa: }
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
extern "C" void fn_008c71d0();
extern "C" void fn_00a54850();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008cc710
extern "C" __declspec(naked) void asm_008cc710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f50e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xa8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_008cc766 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00a54850 }
	__asm { mov esi, eax }
	__asm { jmp L_008cc768 }
	__asm { L_008cc766: }
	__asm { xor esi, esi }
	__asm { L_008cc768: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_008c71d0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_008cc793 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_008cc793 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_008cc793: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_008cc7a4 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008cc7a4: }
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
extern "C" void fn_008c7260();
extern "C" void fn_008cf0c0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008cc7c0
extern "C" __declspec(naked) void asm_008cc7c0()
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
	__asm { je L_008cc811 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_008cf0c0 }
	__asm { mov esi, eax }
	__asm { jmp L_008cc813 }
	__asm { L_008cc811: }
	__asm { xor esi, esi }
	__asm { L_008cc813: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_008c7260 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_008cc844 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_008cc844 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_008cc844: }
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
extern "C" void fn_008c72f0();
extern "C" void fn_00a54b00();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008cc860
extern "C" __declspec(naked) void asm_008cc860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f50e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xa8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_008cc8b6 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00a54b00 }
	__asm { mov esi, eax }
	__asm { jmp L_008cc8b8 }
	__asm { L_008cc8b6: }
	__asm { xor esi, esi }
	__asm { L_008cc8b8: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_008c72f0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_008cc8e3 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_008cc8e3 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_008cc8e3: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_008cc8f4 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008cc8f4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
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
// FUNCTION: ROBLOXSTUDIO 0x008cc930
extern "C" __declspec(naked) void asm_008cc930()
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
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_00788700 }
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

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_00788700();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
// FUNCTION: ROBLOXSTUDIO 0x008cc9f0
extern "C" __declspec(naked) void asm_008cc9f0()
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
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00788700 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_00788700 }
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

extern "C" void fn_008c9020();
extern "C" void fn_008cf770();
extern "C" void fn_008d01b0();
// FUNCTION: ROBLOXSTUDIO 0x008ccc20
extern "C" __declspec(naked) void asm_008ccc20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f54c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_008c9020 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { lea eax, [ebp + 0x24] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { push eax }
	__asm { call fn_008cf770 }
	__asm { lea eax, [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x6c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_008cccb7 }
	__asm { test al, 1 }
	__asm { jne L_008cccb0 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008cccb0 }
	__asm { lea ecx, [ebp + 0x74] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008cccb0: }
	__asm { mov dword ptr [ebp + 0x6c], 0 }
	__asm { L_008cccb7: }
	__asm { lea ecx, [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008d01b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
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
extern "C" void fn_007cb250();
extern "C" void fn_007d55c0();
extern "C" void fn_007d5d30();
extern "C" void fn_00825670();
extern "C" void fn_008ce000();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008cd4b0
extern "C" __declspec(naked) void asm_008cd4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_008ce000 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xe70028 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { call fn_00cf661e }
	__asm { mov bl, byte ptr [ebp + 0x18] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008cd512 }
	__asm { mov byte ptr [eax], bl }
	__asm { jmp L_008cd514 }
	__asm { L_008cd512: }
	__asm { xor eax, eax }
	__asm { L_008cd514: }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [g_0131a264] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov byte ptr [ebp - 0x4c], bl }
	__asm { test al, 1 }
	__asm { jne L_008cd569 }
	__asm { or eax, 1 }
	__asm { push 0xddc0d0 }
	__asm { mov dword ptr [g_0131a264], eax }
	__asm { mov dword ptr [g_0131a268], 0x12bdfcc }
	__asm { mov dword ptr [g_0131a270], 0x410d30 }
	__asm { mov dword ptr [g_0131a26c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008cd569: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0x131a268 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007d55c0 }
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
	__asm { je L_008cd5b8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008cd5b8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_008ce000();
// FUNCTION: ROBLOXSTUDIO 0x008cd5d0
extern "C" __declspec(naked) void asm_008cd5d0()
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
	__asm { call fn_008ce000 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe6ff24 }
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
	__asm { je L_008cd67e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008cd67e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00825140();
extern "C" void fn_008ce000();
extern "C" void fn_008d4450();
// FUNCTION: ROBLOXSTUDIO 0x008cd6a0
extern "C" __declspec(naked) void asm_008cd6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f619 }
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
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_008ce000 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe6ffe4 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp + 0x20], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_008d4450 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d54e0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_008ce000();
// FUNCTION: ROBLOXSTUDIO 0x008cd780
extern "C" __declspec(naked) void asm_008cd780()
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
	__asm { call fn_008ce000 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe70010 }
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
	__asm { je L_008cd82e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008cd82e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00825140();
extern "C" void fn_008ce000();
extern "C" void fn_00b11950();
// FUNCTION: ROBLOXSTUDIO 0x008cd850
extern "C" __declspec(naked) void asm_008cd850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54d16 }
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
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_008ce000 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe6ff44 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp + 0x1c], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00b11950 }
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
extern "C" void fn_008ce000();
extern "C" void fn_00c46420();
// FUNCTION: ROBLOXSTUDIO 0x008cd900
extern "C" __declspec(naked) void asm_008cd900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61f96 }
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
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_008ce000 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe6ff84 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp + 0x1c], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00c46420 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_0131a264[];
extern "C" char g_0131a268[];
extern "C" char g_0131a26c[];
extern "C" char g_0131a270[];
extern "C" void fn_007cb250();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_008ce000();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008cd9b0
extern "C" __declspec(naked) void asm_008cd9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_008ce000 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xe700a8 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { call fn_00cf661e }
	__asm { mov bl, byte ptr [ebp + 0x18] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008cda12 }
	__asm { mov byte ptr [eax], bl }
	__asm { jmp L_008cda14 }
	__asm { L_008cda12: }
	__asm { xor eax, eax }
	__asm { L_008cda14: }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [g_0131a264] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov byte ptr [ebp - 0x4c], bl }
	__asm { test al, 1 }
	__asm { jne L_008cda69 }
	__asm { or eax, 1 }
	__asm { push 0xddc0d0 }
	__asm { mov dword ptr [g_0131a264], eax }
	__asm { mov dword ptr [g_0131a268], 0x12bdfcc }
	__asm { mov dword ptr [g_0131a270], 0x410d30 }
	__asm { mov dword ptr [g_0131a26c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008cda69: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0x131a268 }
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
	__asm { je L_008cdab8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008cdab8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012eb46c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008ce000
extern "C" __declspec(naked) void asm_008ce000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f686 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012eb46c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_008ce07a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb46c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6e550 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eb340 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008ce07a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12eb340 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe6ff18 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_008ce0f2 }
	__asm { push 0x12115b4 }
	__asm { mov ecx, 0x12115b4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008ce0f2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008ce0dd }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008ce0f2 }
	__asm { L_008ce0dd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008ce0f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_008ce5e0();
// FUNCTION: ROBLOXSTUDIO 0x008ce110
extern "C" __declspec(naked) void asm_008ce110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f6e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_008ce188 }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_008ce171 }
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
	__asm { jmp L_008ce188 }
	__asm { L_008ce171: }
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
	__asm { L_008ce188: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_008ce5e0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008ce1b9 }
	__asm { test al, 1 }
	__asm { jne L_008ce1b9 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008ce1b9 }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008ce1b9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_008ce690();
extern "C" void fn_008cf770();
extern "C" void fn_008d01b0();
// FUNCTION: ROBLOXSTUDIO 0x008ce310
extern "C" __declspec(naked) void asm_008ce310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f6a3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x68 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008cf770 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008ce690 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_008ce382 }
	__asm { test al, 1 }
	__asm { jne L_008ce37b }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008ce37b }
	__asm { lea ecx, [ebp + 0x60] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008ce37b: }
	__asm { mov dword ptr [ebp + 0x58], 0 }
	__asm { L_008ce382: }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008d01b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x70 }
}

// FUNCTION: ROBLOXSTUDIO 0x008ce5e0
extern "C" __declspec(naked) void asm_008ce5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2f6e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008ce653 }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_008ce63c }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { jmp L_008ce653 }
	__asm { L_008ce63c: }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0xc }
	__asm { L_008ce653: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_008ce678 }
	__asm { test cl, 1 }
	__asm { jne L_008ce678 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_008ce678 }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008ce678: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012fcfff[];
extern "C" void fn_00422570();
extern "C" void fn_008c8370();
extern "C" void fn_008c8470();
extern "C" void fn_008cb940();
// FUNCTION: ROBLOXSTUDIO 0x008cec40
extern "C" __declspec(naked) void asm_008cec40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f7b3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { cmp dword ptr [ebx], 0 }
	__asm { je L_008cecae }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { push ebx }
	__asm { call fn_00422570 }
	__asm { movzx eax, byte ptr [g_012fcfff] }
	__asm { push eax }
	__asm { push 0x8dd730 }
	__asm { push esi }
	__asm { call fn_008cb940 }
	__asm { add esp, 0x2c }
	__asm { mov ecx, edi }
	__asm { call fn_008c8470 }
	__asm { L_008cecae: }
	__asm { add ebx, 0x20 }
	__asm { cmp dword ptr [ebx], 0 }
	__asm { je L_008cece4 }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { push ebx }
	__asm { call fn_00422570 }
	__asm { movzx eax, byte ptr [g_012fcfff] }
	__asm { push eax }
	__asm { push 0x8dcd50 }
	__asm { push esi }
	__asm { call fn_008cb940 }
	__asm { add esp, 0x2c }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_008c8370 }
	__asm { L_008cece4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012ffaa0[];
extern "C" void fn_004038a0();
extern "C" void fn_004959d0();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008cf0c0
extern "C" __declspec(naked) void asm_008cf0c0()
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
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 3 }
	__asm { push 0xe6f998 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe6f8fc }
	__asm { mov dword ptr [esi + 4], 0xe6f978 }
	__asm { mov dword ptr [esi + 0x18], 0xe6f980 }
	__asm { mov dword ptr [esi + 0x1c], 0xe6f98c }
	__asm { mov dword ptr [esi + 0x88], eax }
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
	__asm { jb L_008cf1a1 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008cf1a1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009a8910();
// FUNCTION: ROBLOXSTUDIO 0x008cf770
extern "C" __declspec(naked) void asm_008cf770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f1cb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009a8910 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov ecx, dword ptr [edi + 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008cf80c }
	__asm { mov dword ptr [esi + 0x48], ecx }
	__asm { test cl, 1 }
	__asm { je L_008cf7f8 }
	__asm { mov eax, dword ptr [edi + 0x50] }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { mov eax, dword ptr [edi + 0x54] }
	__asm { mov dword ptr [esi + 0x54], eax }
	__asm { mov eax, dword ptr [edi + 0x58] }
	__asm { mov dword ptr [esi + 0x58], eax }
	__asm { mov eax, dword ptr [edi + 0x5c] }
	__asm { mov dword ptr [esi + 0x5c], eax }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { mov dword ptr [esi + 0x60], eax }
	__asm { mov eax, dword ptr [edi + 0x64] }
	__asm { mov dword ptr [esi + 0x64], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008cf7f8: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x50] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 0x50] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008cf80c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov dword ptr [ecx], 2 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0x28], 0 }
	__asm { mov dword ptr [ecx + 0x48], 0 }
	__asm { mov eax, ecx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008d01b0
extern "C" __declspec(naked) void asm_008d01b0()
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
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008d01fd }
	__asm { test al, 1 }
	__asm { jne L_008d01f6 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x28] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008d01f6 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008d01f6: }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_008d01fd: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008d0229 }
	__asm { test al, 1 }
	__asm { jne L_008d0223 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008d0223 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008d0223: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_008d0229: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008c6f20();
extern "C" void fn_008c8b20();
extern "C" void fn_008c9c70();
extern "C" void fn_008d23d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008d0c70
extern "C" __declspec(naked) void asm_008d0c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2fc40 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x40 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call fn_008d23d0 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { je L_008d0cdd }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { cmp eax, ecx }
	__asm { je L_008d0cae }
	__asm { sbb ecx, ecx }
	__asm { neg ecx }
	__asm { jmp L_008d0cd9 }
	__asm { L_008d0cae: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { cmp eax, ecx }
	__asm { je L_008d0cbe }
	__asm { sbb ecx, ecx }
	__asm { neg ecx }
	__asm { jmp L_008d0cd9 }
	__asm { L_008d0cbe: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { cmp eax, ecx }
	__asm { je L_008d0cce }
	__asm { sbb ecx, ecx }
	__asm { neg ecx }
	__asm { jmp L_008d0cd9 }
	__asm { L_008d0cce: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { xor ecx, ecx }
	__asm { cmp eax, dword ptr [esi + 0x1c] }
	__asm { setl cl }
	__asm { L_008d0cd9: }
	__asm { test cl, cl }
	__asm { je L_008d0d59 }
	__asm { L_008d0cdd: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008c6f20 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008c8b20 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008c9c70 }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { jb L_008d0d36 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008d0d36: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { jb L_008d0d59 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008d0d59: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x20] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00513a40();
extern "C" void fn_008c6fc0();
extern "C" void fn_008c8bd0();
extern "C" void fn_008ca0d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008d0ec0
extern "C" __declspec(naked) void asm_008d0ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2fc90 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { je L_008d0f13 }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_008d0efd }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_008d0efd: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, edi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jns L_008d0fb2 }
	__asm { L_008d0f13: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008c6fc0 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008c8bd0 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008ca0d0 }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { jb L_008d0f6c }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008d0f6c: }
	__asm { cmp dword ptr [ebp - 0x40], 0x10 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { jb L_008d0f8f }
	__asm { push dword ptr [ebp - 0x54] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008d0f8f: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 0x40], 0xf }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov byte ptr [ebp - 0x54], 0 }
	__asm { jb L_008d0fb2 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008d0fb2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x28] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006659a0();
extern "C" void fn_008cc5c0();
extern "C" void fn_008ccb70();
extern "C" void fn_008d0100();
extern "C" void fn_00992e30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008d0fd0
extern "C" __declspec(naked) void asm_008d0fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2fca8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { movzx eax, byte ptr [esi] }
	__asm { inc eax }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { add eax, esi }
	__asm { je L_008d0fff }
	__asm { inc eax }
	__asm { jmp L_008d1001 }
	__asm { L_008d0fff: }
	__asm { xor eax, eax }
	__asm { L_008d1001: }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008ccb70 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_008d10a4 }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_008d1024 }
	__asm { inc eax }
	__asm { jmp L_008d1026 }
	__asm { L_008d1024: }
	__asm { xor eax, eax }
	__asm { L_008d1026: }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [ebp + 0xb] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 0x28], 0x12fd368 }
	__asm { call fn_008cc5c0 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00992e30 }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006659a0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008d10a2 }
	__asm { cmp byte ptr [ebp - 0x13], 0 }
	__asm { je L_008d1099 }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_008d0100 }
	__asm { L_008d1099: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008d10a2: }
	__asm { mov eax, edi }
	__asm { L_008d10a4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x008d23d0
extern "C" __declspec(naked) void asm_008d23d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_008d2433 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [esi] }
	__asm { L_008d23e6: }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { cmp ecx, ebx }
	__asm { je L_008d23f3 }
	__asm { sbb edx, edx }
	__asm { neg edx }
	__asm { jmp L_008d241e }
	__asm { L_008d23f3: }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { cmp ecx, edx }
	__asm { je L_008d2403 }
	__asm { sbb edx, edx }
	__asm { neg edx }
	__asm { jmp L_008d241e }
	__asm { L_008d2403: }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { cmp ecx, edx }
	__asm { je L_008d2413 }
	__asm { sbb edx, edx }
	__asm { neg edx }
	__asm { jmp L_008d241e }
	__asm { L_008d2413: }
	__asm { mov ecx, dword ptr [eax + 0x1c] }
	__asm { xor edx, edx }
	__asm { cmp ecx, dword ptr [esi + 0xc] }
	__asm { setl dl }
	__asm { L_008d241e: }
	__asm { test dl, dl }
	__asm { je L_008d2427 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_008d242b }
	__asm { L_008d2427: }
	__asm { mov edi, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_008d242b: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_008d23e6 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_008d2433: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_008cac40();
extern "C" void fn_008d0980();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008d2440
extern "C" __declspec(naked) void asm_008d2440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2feb0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { test ebx, ebx }
	__asm { je L_008d2497 }
	__asm { cmp ebx, 0x2492492 }
	__asm { ja L_008d2491 }
	__asm { mov eax, ebx }
	__asm { imul eax, eax, 0x70 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { test edi, edi }
	__asm { jne L_008d2497 }
	__asm { L_008d2491: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_008d2497: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push edi }
	__asm { push dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_008cac40 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 6 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { test esi, esi }
	__asm { je L_008d2505 }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { je L_008d24f6 }
	__asm { L_008d24e7: }
	__asm { mov ecx, esi }
	__asm { call fn_008d0980 }
	__asm { add esi, 0x70 }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { jne L_008d24e7 }
	__asm { L_008d24f6: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { jmp L_008d2508 }
	__asm { L_008d2505: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_008d2508: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { imul ebx, ebx, 0x70 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { imul eax, eax, 0x70 }
	__asm { add ebx, edi }
	__asm { mov dword ptr [esi], edi }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], ebx }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004033d0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97f0();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_008c0fb0();
extern "C" void fn_008d68b0();
extern "C" void fn_00a346a0();
// FUNCTION: ROBLOXSTUDIO 0x008d39f0
extern "C" __declspec(naked) void asm_008d39f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd300d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008c0fb0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_008d3a36 }
	__asm { lea ecx, [esi - 0x2c] }
	__asm { call fn_008d68b0 }
	__asm { call fn_008c0fb0 }
	__asm { jmp L_008d3ac9 }
	__asm { L_008d3a36: }
	__asm { xor ecx, ecx }
	__asm { call fn_008d68b0 }
	__asm { call fn_008c0fb0 }
	__asm { jmp L_008d3ac9 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { push 0xe70658 }
	__asm { push 3 }
	__asm { push esi }
	__asm { call fn_00773930 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004033d0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_008d3ac0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008d3aaf }
	__asm { push 0x3c0 }
	__asm { push 0xe6fcb0 }
	__asm { push 0xf14aa8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008d3ac0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_008d3aaf: }
	__asm { movzx eax, cl }
	__asm { push 0xe70688 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008d3ac0: }
	__asm { mov eax, 0x8d3ac6 }
	__asm { ret }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_008d3ac9: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c0fb0 }
	__asm { push esi }
	__asm { call fn_00a346a0 }
	__asm { add esp, 4 }
	__asm { call fn_008c0fb0 }
	__asm { push 0 }
	__asm { mov ecx, 0x12fd08c }
	__asm { call fn_006b97f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x008d4450
extern "C" __declspec(naked) void asm_008d4450()
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
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5390 }
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
	__asm { call fn_007d5550 }
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
	__asm { je L_008d44f1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008d44f1: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008d4508 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008d4508: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008d4528 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008d4528: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00886380();
extern "C" void fn_008d6ec0();
// FUNCTION: ROBLOXSTUDIO 0x008d7a10
extern "C" __declspec(naked) void asm_008d7a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd303b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { sub esp, 0x40 }
	__asm { mov eax, esp }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [eax + 0x20], 0 }
	__asm { sub esp, 0x20 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { sub esp, 0x20 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov esi, esp }
	__asm { lea eax, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0x425500 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_008d7aa6 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_008d7a9a }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_008d7a9a: }
	__asm { mov eax, 0xe72aa0 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_008d7aac }
	__asm { L_008d7aa6: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_008d7aac: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00886380 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008d6ec0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e13084[];
extern "C" char g_00e1308c[];
extern "C" void fn_0040c260();
extern "C" void fn_00886380();
extern "C" void fn_008d6ec0();
// FUNCTION: ROBLOXSTUDIO 0x008d7af0
extern "C" __declspec(naked) void asm_008d7af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd303e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xe7087c }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e1308c] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { sub esp, 0x40 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0x14], esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 0x20], 0 }
	__asm { sub esp, 0x20 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { sub esp, 0x20 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov esi, esp }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0x425500 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_008d7b92 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_008d7b86 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_008d7b86: }
	__asm { mov eax, 0xe72aa0 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_008d7b98 }
	__asm { L_008d7b92: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_008d7b98: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00886380 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008d6ec0 }
	__asm { call dword ptr [g_00e13084] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_008d1810();
// FUNCTION: ROBLOXSTUDIO 0x008d7f10
extern "C" __declspec(naked) void asm_008d7f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57380 }
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
	__asm { je L_008d7f91 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_008d7f91 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008d7f80 }
	__asm { push 0x169 }
	__asm { push 0xe52268 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008d7f91 }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_008d7f80: }
	__asm { movzx eax, bl }
	__asm { push 0xe72810 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008d7f91: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_008d7f9d }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_008d7f9f }
	__asm { L_008d7f9d: }
	__asm { xor edi, edi }
	__asm { L_008d7f9f: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { add ecx, 0x88 }
	__asm { push eax }
	__asm { call fn_0079a070 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 8], esp }
	__asm { add ecx, 0x44 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004d1ca0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esp }
	__asm { call fn_004d1ca0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008d1810 }
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
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_008d19c0();
// FUNCTION: ROBLOXSTUDIO 0x008d8010
extern "C" __declspec(naked) void asm_008d8010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57380 }
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
	__asm { je L_008d8091 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_008d8091 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008d8080 }
	__asm { push 0x169 }
	__asm { push 0xe52268 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008d8091 }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_008d8080: }
	__asm { movzx eax, bl }
	__asm { push 0xe72810 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008d8091: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_008d809d }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_008d809f }
	__asm { L_008d809d: }
	__asm { xor edi, edi }
	__asm { L_008d809f: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { add ecx, 0x88 }
	__asm { push eax }
	__asm { call fn_0079a070 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 8], esp }
	__asm { add ecx, 0x44 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004d1ca0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esp }
	__asm { call fn_0079a070 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008d19c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00412c00();
extern "C" void fn_00451670();
extern "C" void fn_008d0ec0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008d8390
extern "C" __declspec(naked) void asm_008d8390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_008d0ec0 }
	__asm { mov esi, eax }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { jne L_008d83fb }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe6fdcc }
	__asm { push eax }
	__asm { call fn_00451670 }
	__asm { mov edi, eax }
	__asm { add esp, 0xc }
	__asm { cmp esi, edi }
	__asm { je L_008d83ea }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008d83d1 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008d83d1: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00412c00 }
	__asm { L_008d83ea: }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { jb L_008d83fb }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008d83fb: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008d840b }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008d840b: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10688[];
extern "C" void fn_004038a0();
extern "C" void fn_004039a0();
extern "C" void fn_006b98c0();
// FUNCTION: ROBLOXSTUDIO 0x008d8d30
extern "C" __declspec(naked) void asm_008d8d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { cmp byte ptr [ecx + 6], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_008d8dcf }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { inc eax }
	__asm { shl eax, 4 }
	__asm { sub ecx, eax }
	__asm { cmp dword ptr [ecx + 8], 6 }
	__asm { je L_008d8d70 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0xe6fd9c }
	__asm { call fn_004039a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008d8d70: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 6], 0 }
	__asm { je L_008d8d8d }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0xe6fda0 }
	__asm { call fn_004039a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008d8d8d: }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x20] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { add edi, 0x10 }
	__asm { mov esi, dword ptr [eax] }
	__asm { push 0xa }
	__asm { push edi }
	__asm { call dword ptr [g_00e10688] }
	__asm { test eax, eax }
	__asm { setne cl }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test cl, cl }
	__asm { mov eax, 0xe6fdac }
	__asm { cmove eax, edi }
	__asm { push eax }
	__asm { push 0xe6fdb8 }
	__asm { push esi }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0x18 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008d8dcf: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 8 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xe6fdc0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043fa70();
extern "C" void fn_006b9740();
extern "C" void fn_006bc920();
extern "C" void fn_007a6350();
extern "C" void fn_008c0180();
extern "C" void fn_008c0570();
extern "C" void fn_008c0750();
extern "C" void fn_008e3690();
extern "C" void fn_00a35350();
// FUNCTION: ROBLOXSTUDIO 0x008d9df0
extern "C" __declspec(naked) void asm_008d9df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd306b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00a35350 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_008c0180 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008c0750 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c0570 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_007a6350 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test cl, cl }
	__asm { je L_008d9ea3 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_008d9e6b }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jne L_008d9ea3 }
	__asm { L_008d9e6b: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008d9e92 }
	__asm { push 0xcf7 }
	__asm { push 0xe6fcb0 }
	__asm { push 0xe7212c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008d9ea3 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_008d9e92: }
	__asm { movzx eax, cl }
	__asm { push 0xe72138 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008d9ea3: }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_008d9ec1 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_008d9ec3 }
	__asm { L_008d9ec1: }
	__asm { xor eax, eax }
	__asm { L_008d9ec3: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_008e3690 }
	__asm { add esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_008d9ee6 }
	__asm { push eax }
	__asm { call fn_0043fa70 }
	__asm { add esp, 4 }
	__asm { L_008d9ee6: }
	__asm { push 0x12e171c }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006bc920 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35d10();
// FUNCTION: ROBLOXSTUDIO 0x008da860
extern "C" __declspec(naked) void asm_008da860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { call dword ptr [ebp + 0xc] }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { add esp, 4 }
	__asm { mov edi, eax }
	__asm { test bl, bl }
	__asm { je L_008da8ca }
	__asm { xor ecx, ecx }
	__asm { cmp dword ptr [ebp + 0xc], 0xb6f170 }
	__asm { sete cl }
	__asm { xor edx, edx }
	__asm { cmp edi, ecx }
	__asm { sete dl }
	__asm { inc edx }
	__asm { jne L_008da8ca }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008da8b9 }
	__asm { push 0xc2 }
	__asm { push 0xe6fcb0 }
	__asm { push 0xe6fcf4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008da8ca }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_008da8b9: }
	__asm { movzx eax, bl }
	__asm { push 0xe6fd20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008da8ca: }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { or eax, 0xffffffff }
	__asm { sub eax, edi }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004226b0();
extern "C" void fn_0043a870();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9cb0();
extern "C" void fn_006b9e50();
extern "C" void fn_008cc1c0();
extern "C" void fn_008dd010();
// FUNCTION: ROBLOXSTUDIO 0x008dd210
extern "C" __declspec(naked) void asm_008dd210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd47a08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_008dd23d }
	__asm { lea ecx, [edi + 0x68] }
	__asm { call fn_006b9e50 }
	__asm { L_008dd23d: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_008dd2ba }
	__asm { call fn_0043a870 }
	__asm { mov esi, eax }
	__asm { mov ecx, edi }
	__asm { push dword ptr [esi + 0x78] }
	__asm { call fn_008dd010 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xac] }
	__asm { mov dword ptr [ebp - 0x1c], 0x8dd200 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { call fn_008cc1c0 }
	__asm { mov esi, eax }
	__asm { add edi, 0x68 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9cb0 }
	__asm { test al, al }
	__asm { je L_008dd2a0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b9e50 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006b9b80 }
	__asm { L_008dd2a0: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008dd2ba }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_008dd2ba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043fa70();
extern "C" void fn_006b97e0();
extern "C" void fn_006bc920();
extern "C" void fn_007a6350();
extern "C" void fn_008c0570();
extern "C" void fn_008e22a0();
extern "C" void fn_00a35560();
extern "C" void fn_00a35710();
extern "C" void fn_00a419c0();
// FUNCTION: ROBLOXSTUDIO 0x008de330
extern "C" __declspec(naked) void asm_008de330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd30950 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007a6350 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_008de3cc }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_008de3cc }
	__asm { push 0 }
	__asm { push ecx }
	__asm { call fn_00a35560 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008de389 }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { jmp L_008de38b }
	__asm { L_008de389: }
	__asm { xor esi, esi }
	__asm { L_008de38b: }
	__asm { push -1 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00a419c0 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { add esp, 0x10 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp + 0x24], ecx }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test ecx, ecx }
	__asm { je L_008de3be }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_008de3be: }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008e22a0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { L_008de3cc: }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_008de3dd }
	__asm { push eax }
	__asm { call fn_0043fa70 }
	__asm { add esp, 4 }
	__asm { L_008de3dd: }
	__asm { push 0x12e171c }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_006bc920 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c0570 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_0043fa70();
extern "C" void fn_006b97e0();
extern "C" void fn_006bc920();
extern "C" void fn_007a6350();
extern "C" void fn_008c0570();
extern "C" void fn_008e22a0();
extern "C" void fn_00a35150();
extern "C" void fn_00a35560();
extern "C" void fn_00a36120();
// FUNCTION: ROBLOXSTUDIO 0x008de410
extern "C" __declspec(naked) void asm_008de410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd30950 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007a6350 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_008de4b1 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_008de4b1 }
	__asm { push 1 }
	__asm { push ecx }
	__asm { call fn_00a35560 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00a35150 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 0xc }
	__asm { mov edi, eax }
	__asm { test ecx, ecx }
	__asm { je L_008de473 }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { jmp L_008de475 }
	__asm { L_008de473: }
	__asm { xor ecx, ecx }
	__asm { L_008de475: }
	__asm { push edi }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00a36120 }
	__asm { add esp, 0xc }
	__asm { lea eax, [edi + 1] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp + 0x24], ecx }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test ecx, ecx }
	__asm { je L_008de4a3 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_008de4a3: }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008e22a0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { L_008de4b1: }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_008de4c2 }
	__asm { push eax }
	__asm { call fn_0043fa70 }
	__asm { add esp, 4 }
	__asm { L_008de4c2: }
	__asm { push 0x12e171c }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_006bc920 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c0570 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_0042ba60();
extern "C" void fn_0049a1e0();
extern "C" void fn_008d0b20();
extern "C" void fn_008d0bf0();
// FUNCTION: ROBLOXSTUDIO 0x008df330
extern "C" __declspec(naked) void asm_008df330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46528 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea edi, [esi + 0x14] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_008df3c8 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0042ba60 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_008df384 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_008df384: }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { dec ecx }
	__asm { and ecx, dword ptr [edx + 8] }
	__asm { push dword ptr [eax + ecx*4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_008d0bf0 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_008df3c4 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { dec ecx }
	__asm { and ecx, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [eax + ecx*4] }
	__asm { call fn_008d0b20 }
	__asm { dec dword ptr [esi + 0x10] }
	__asm { jne L_008df3c1 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov al, 1 }
	__asm { jmp L_008df3ca }
	__asm { L_008df3c1: }
	__asm { inc dword ptr [esi + 0xc] }
	__asm { L_008df3c4: }
	__asm { mov al, 1 }
	__asm { jmp L_008df3ca }
	__asm { L_008df3c8: }
	__asm { xor al, al }
	__asm { L_008df3ca: }
	__asm { test edi, edi }
	__asm { je L_008df3d1 }
	__asm { mov byte ptr [edi], 0 }
	__asm { L_008df3d1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0128dc74[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35670();
extern "C" void fn_00a357b0();
extern "C" void fn_00a35850();
extern "C" void fn_00a358d0();
extern "C" void fn_00a359d0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360d0();
// FUNCTION: ROBLOXSTUDIO 0x008dfc50
extern "C" __declspec(naked) void asm_008dfc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 0x8dfc50 }
	__asm { push esi }
	__asm { call fn_00a35670 }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35850 }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008dfcbf }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_008dfcbf }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008dfcaa }
	__asm { push 0xfa }
	__asm { push 0xe72740 }
	__asm { push 0xe72780 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008dfcbf }
	__asm { L_008dfcaa: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe72890 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008dfcbf: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a35670 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35850 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 0x18 }
	__asm { test eax, eax }
	__asm { jne L_008dfd2c }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { push 4 }
	__asm { push esi }
	__asm { call fn_00a353e0 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { je L_008dfcf9 }
	__asm { mov dword ptr [eax], edi }
	__asm { L_008dfcf9: }
	__asm { push dword ptr [g_0128dc74] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a35670 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push -4 }
	__asm { push esi }
	__asm { call fn_00a358d0 }
	__asm { add esp, 0x2c }
	__asm { L_008dfd2c: }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a359d0 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc78[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35670();
extern "C" void fn_00a357b0();
extern "C" void fn_00a35850();
extern "C" void fn_00a358d0();
extern "C" void fn_00a359d0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360d0();
// FUNCTION: ROBLOXSTUDIO 0x008dfd40
extern "C" __declspec(naked) void asm_008dfd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 0x8dfd40 }
	__asm { push esi }
	__asm { call fn_00a35670 }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35850 }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008dfdaf }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_008dfdaf }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008dfd9a }
	__asm { push 0xfa }
	__asm { push 0xe72740 }
	__asm { push 0xe72780 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008dfdaf }
	__asm { L_008dfd9a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe72890 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008dfdaf: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a35670 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35850 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 0x18 }
	__asm { test eax, eax }
	__asm { jne L_008dfe1c }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { push 4 }
	__asm { push esi }
	__asm { call fn_00a353e0 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { je L_008dfde9 }
	__asm { mov dword ptr [eax], edi }
	__asm { L_008dfde9: }
	__asm { push dword ptr [g_0128dc78] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a35670 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push -4 }
	__asm { push esi }
	__asm { call fn_00a358d0 }
	__asm { add esp, 0x2c }
	__asm { L_008dfe1c: }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a359d0 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc7c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35670();
extern "C" void fn_00a357b0();
extern "C" void fn_00a35850();
extern "C" void fn_00a358d0();
extern "C" void fn_00a359d0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360d0();
// FUNCTION: ROBLOXSTUDIO 0x008dfe30
extern "C" __declspec(naked) void asm_008dfe30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 0x8dfe30 }
	__asm { push esi }
	__asm { call fn_00a35670 }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35850 }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008dfe9f }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_008dfe9f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008dfe8a }
	__asm { push 0xfa }
	__asm { push 0xe72740 }
	__asm { push 0xe72780 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008dfe9f }
	__asm { L_008dfe8a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe72890 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008dfe9f: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a35670 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35850 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 0x18 }
	__asm { test eax, eax }
	__asm { jne L_008dff0c }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { push 4 }
	__asm { push esi }
	__asm { call fn_00a353e0 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { je L_008dfed9 }
	__asm { mov dword ptr [eax], edi }
	__asm { L_008dfed9: }
	__asm { push dword ptr [g_0128dc7c] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a35670 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push -4 }
	__asm { push esi }
	__asm { call fn_00a358d0 }
	__asm { add esp, 0x2c }
	__asm { L_008dff0c: }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a359d0 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00826110();
extern "C" void fn_008c00e0();
// FUNCTION: ROBLOXSTUDIO 0x008e00f0
extern "C" __declspec(naked) void asm_008e00f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd428b2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { jae L_008e0165 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_008e0165 }
	__asm { sub edi, eax }
	__asm { mov eax, 0x92492493 }
	__asm { imul edi }
	__asm { add edx, edi }
	__asm { sar edx, 4 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_008e0140 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00826110 }
	__asm { L_008e0140: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi*8] }
	__asm { sub ecx, edi }
	__asm { lea eax, [eax + ecx*4] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008e018d }
	__asm { push eax }
	__asm { jmp L_008e0188 }
	__asm { L_008e0165: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_008e0173 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00826110 }
	__asm { L_008e0173: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_008e018d }
	__asm { push edi }
	__asm { L_008e0188: }
	__asm { call fn_008c00e0 }
	__asm { L_008e018d: }
	__asm { add dword ptr [esi + 4], 0x1c }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e105b0[];
extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x008e6410
extern "C" __declspec(naked) void asm_008e6410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x44 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { fld dword ptr [eax + 8] }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { fstp qword ptr [esp + 0x10] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp qword ptr [esp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { lea eax, [ebp - 0x44] }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xe72ba0 }
	__asm { push 0x40 }
	__asm { push eax }
	__asm { call dword ptr [g_00e105b0] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 0x24 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [ebp - 0x44], 0 }
	__asm { jne L_008e647a }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008e647a: }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { lea edx, [ecx + 1] }
	__asm { L_008e6480: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_008e6480 }
	__asm { sub ecx, edx }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040f730();
extern "C" void fn_0040f890();
extern "C" void fn_008e64a0();
extern "C" void fn_008e6980();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008e66f0
extern "C" __declspec(naked) void asm_008e66f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd314f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008e64a0 }
	__asm { add esp, 8 }
	__asm { push 2 }
	__asm { push 0xe72b9c }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_0040f730 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_008e6980 }
	__asm { add esp, 8 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0040f890 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_008e677b }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008e677b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040f730();
extern "C" void fn_0040f890();
extern "C" void fn_008e6a70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008e6790
extern "C" __declspec(naked) void asm_008e6790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd314f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008e6a70 }
	__asm { add esp, 8 }
	__asm { push 2 }
	__asm { push 0xe72b9c }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_0040f730 }
	__asm { lea eax, [esi + 6] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_008e6a70 }
	__asm { add esp, 8 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0040f890 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_008e681b }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008e681b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040f730();
extern "C" void fn_0040f890();
extern "C" void fn_008b8380();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008e6830
extern "C" __declspec(naked) void asm_008e6830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd314f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008b8380 }
	__asm { add esp, 8 }
	__asm { push 2 }
	__asm { push 0x101173c }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_0040f730 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_008b8380 }
	__asm { add esp, 8 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0040f890 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_008e68bb }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008e68bb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040f730();
extern "C" void fn_0040f890();
extern "C" void fn_008b8200();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008e68d0
extern "C" __declspec(naked) void asm_008e68d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31301 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { movsx eax, word ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008b8200 }
	__asm { add esp, 8 }
	__asm { push 2 }
	__asm { push 0x101173c }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_0040f730 }
	__asm { movsx eax, word ptr [esi + 2] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call fn_008b8200 }
	__asm { add esp, 8 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0040f890 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_008e696b }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008e696b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040f730();
extern "C" void fn_0040f890();
extern "C" void fn_008b8380();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008e6980
extern "C" __declspec(naked) void asm_008e6980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31339 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008b8380 }
	__asm { add esp, 8 }
	__asm { push 2 }
	__asm { push 0x101173c }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_0040f730 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_008b8380 }
	__asm { add esp, 8 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0040f890 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jb L_008e6a0f }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008e6a0f: }
	__asm { push 2 }
	__asm { push 0x101173c }
	__asm { mov ecx, esi }
	__asm { call fn_0040f730 }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_008b8380 }
	__asm { add esp, 8 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_0040f890 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_008e6a51 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008e6a51: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040f730();
extern "C" void fn_0040f890();
extern "C" void fn_008b8200();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008e6a70
extern "C" __declspec(naked) void asm_008e6a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31379 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { movsx eax, word ptr [edi] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_008b8200 }
	__asm { add esp, 8 }
	__asm { push 2 }
	__asm { push 0x101173c }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_0040f730 }
	__asm { movsx eax, word ptr [edi + 2] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call fn_008b8200 }
	__asm { add esp, 8 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0040f890 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jb L_008e6b0f }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008e6b0f: }
	__asm { push 2 }
	__asm { push 0x101173c }
	__asm { mov ecx, esi }
	__asm { call fn_0040f730 }
	__asm { movsx eax, word ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call fn_008b8200 }
	__asm { add esp, 8 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_0040f890 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_008e6b58 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008e6b58: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10708[];
extern "C" void fn_004278c0();
extern "C" void fn_006b44a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008e7010
extern "C" __declspec(naked) void asm_008e7010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 2 }
	__asm { push 0 }
	__asm { push 0xe72b98 }
	__asm { mov ecx, esi }
	__asm { call fn_006b44a0 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jns L_008e7039 }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008e7039: }
	__asm { push edi }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004278c0 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_008e704f }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_008e704f: }
	__asm { push ebx }
	__asm { push eax }
	__asm { call dword ptr [g_00e10708] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { fstp dword ptr [ebx] }
	__asm { jb L_008e7070 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008e7070: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc edi }
	__asm { cmp eax, edi }
	__asm { jge L_008e7081 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008e7081: }
	__asm { sub eax, edi }
	__asm { push eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004278c0 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_008e7098 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_008e7098: }
	__asm { push eax }
	__asm { call dword ptr [g_00e10708] }
	__asm { fstp dword ptr [ebx + 4] }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { jb L_008e70b6 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008e70b6: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105f4[];
extern "C" void fn_004278c0();
extern "C" void fn_006b44a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008e70c0
extern "C" __declspec(naked) void asm_008e70c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 2 }
	__asm { push 0 }
	__asm { push 0xe72b98 }
	__asm { mov ecx, esi }
	__asm { call fn_006b44a0 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jns L_008e70e9 }
	__asm { L_008e70e1: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008e70e9: }
	__asm { push edi }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004278c0 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_008e70ff }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_008e70ff: }
	__asm { push eax }
	__asm { call dword ptr [g_00e105f4] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { mov word ptr [ecx], ax }
	__asm { jb L_008e7120 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008e7120: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc edi }
	__asm { cmp eax, edi }
	__asm { jl L_008e70e1 }
	__asm { sub eax, edi }
	__asm { push eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004278c0 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_008e713f }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_008e713f: }
	__asm { push eax }
	__asm { call dword ptr [g_00e105f4] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { mov word ptr [ecx + 2], ax }
	__asm { jb L_008e7161 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008e7161: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_008e75b0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008e74e0
extern "C" __declspec(naked) void asm_008e74e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd313a1 }
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
	__asm { L_008e7514: }
	__asm { cmp edi, ebx }
	__asm { je L_008e759c }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_008e756a }
	__asm { mov al, byte ptr [edi] }
	__asm { mov byte ptr [esi], al }
	__asm { mov eax, dword ptr [edi + 1] }
	__asm { mov dword ptr [esi + 1], eax }
	__asm { fld dword ptr [edi + 8] }
	__asm { fstp dword ptr [esi + 8] }
	__asm { lea ecx, [esi + 0x18] }
	__asm { fld dword ptr [edi + 0xc] }
	__asm { push -1 }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { push 0 }
	__asm { fld dword ptr [edi + 0x10] }
	__asm { lea eax, [edi + 0x18] }
	__asm { fstp dword ptr [esi + 0x10] }
	__asm { push eax }
	__asm { fld dword ptr [edi + 0x14] }
	__asm { fstp dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { L_008e756a: }
	__asm { add esi, 0x30 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { add edi, 0x30 }
	__asm { jmp L_008e7514 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_008e7593 }
	__asm { L_008e7583: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { call fn_008e75b0 }
	__asm { add esi, 0x30 }
	__asm { cmp esi, edi }
	__asm { jne L_008e7583 }
	__asm { L_008e7593: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_008e759c: }
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

extern "C" void fn_00665970();
extern "C" void fn_00789980();
extern "C" void fn_008e9590();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008e75e0
extern "C" __declspec(naked) void asm_008e75e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd313b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { sar eax, 2 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_008e9590 }
	__asm { test al, al }
	__asm { je L_008e764f }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00789980 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_008e764f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00665970 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012fd3fc[];
extern "C" char g_012fd400[];
extern "C" char g_012fd418[];
extern "C" void fn_008e7740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008e7680
extern "C" __declspec(naked) void asm_008e7680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd313ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fd418] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_008e76cb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fd418], eax }
	__asm { mov ecx, 0x12fd3d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008e7740 }
	__asm { push 0xdf0670 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008e76cb: }
	__asm { mov ecx, dword ptr [g_012fd400] }
	__asm { mov edi, dword ptr [g_012fd3fc] }
	__asm { sub ecx, edi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp ecx, eax }
	__asm { jae L_008e7712 }
	__asm { lea eax, [ecx + ecx*2] }
	__asm { add eax, eax }
	__asm { cmp byte ptr [edi + eax*8], 0 }
	__asm { je L_008e7712 }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008e7712: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xc2 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_008e73b0();
extern "C" void fn_008ff0a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008e93e0
extern "C" __declspec(naked) void asm_008e93e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { call fn_008ff0a0 }
	__asm { push dword ptr [edi + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [edi + 0x24], 0 }
	__asm { je L_008e9465 }
	__asm { lea ecx, [edi + 0x24] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 8] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x28] }
	__asm { push dword ptr [edi + 0x24] }
	__asm { call fn_008e73b0 }
	__asm { push dword ptr [edi + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { L_008e9465: }
	__asm { cmp dword ptr [edi + 0x18], 0 }
	__asm { je L_008e9494 }
	__asm { lea ecx, [edi + 0x18] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { L_008e9494: }
	__asm { cmp dword ptr [edi + 0xc], 0 }
	__asm { je L_008e94c3 }
	__asm { lea ecx, [edi + 0xc] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { L_008e94c3: }
	__asm { cmp dword ptr [edi], 0 }
	__asm { je L_008e94ee }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { L_008e94ee: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_008e73b0();
extern "C" void fn_008e74e0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008e9600
extern "C" __declspec(naked) void asm_008e9600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31430 }
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
	__asm { je L_008e9655 }
	__asm { cmp ebx, 0x5555555 }
	__asm { ja L_008e964f }
	__asm { lea eax, [ebx + ebx*2] }
	__asm { shl eax, 4 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_008e9655 }
	__asm { L_008e964f: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_008e9655: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi] }
	__asm { call fn_008e74e0 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { sub ecx, dword ptr [edi] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008e96b3 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [edi + 4] }
	__asm { push eax }
	__asm { call fn_008e73b0 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_008e96b3: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [ebx + ebx*2] }
	__asm { shl eax, 4 }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [edi], esi }
	__asm { lea eax, [eax + eax*2] }
	__asm { shl eax, 4 }
	__asm { add eax, esi }
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
extern "C" void fn_008e9600();
// FUNCTION: ROBLOXSTUDIO 0x008e9700
extern "C" __declspec(naked) void asm_008e9700()
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
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_008e979b }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul esi }
	__asm { sar edx, 3 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x5555555 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_008e9751 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_008e9751: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ebx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x5555555 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_008e9788 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_008e9600 }
	__asm { L_008e9788: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_008e9600 }
	__asm { L_008e979b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fd3fc[];
extern "C" char g_012fd400[];
extern "C" char g_012fd418[];
extern "C" void fn_006b9740();
extern "C" void fn_008e7740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008e99c0
extern "C" __declspec(naked) void asm_008e99c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd313ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012fd418] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test al, 1 }
	__asm { jne L_008e9a15 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fd418], eax }
	__asm { mov ecx, 0x12fd3d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008e7740 }
	__asm { push 0xdf0670 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008e9a15: }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { test bl, bl }
	__asm { je L_008e9a8a }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [g_012fd400] }
	__asm { mov esi, dword ptr [g_012fd3fc] }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp edi, eax }
	__asm { jae L_008e9a52 }
	__asm { lea eax, [edi + edi*2] }
	__asm { add eax, eax }
	__asm { cmp byte ptr [esi + eax*8], 0 }
	__asm { jne L_008e9a90 }
	__asm { L_008e9a52: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008e9a79 }
	__asm { push 0x241 }
	__asm { push 0xe7341c }
	__asm { push 0xe73458 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008e9a8a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_008e9a79: }
	__asm { movzx eax, bl }
	__asm { push 0xe735d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008e9a8a: }
	__asm { mov esi, dword ptr [g_012fd3fc] }
	__asm { L_008e9a90: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add ecx, ecx }
	__asm { fld dword ptr [esi + ecx*8 + 8] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [esi + ecx*8 + 0xc] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { fld dword ptr [esi + ecx*8 + 0x10] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { fld dword ptr [esi + ecx*8 + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { fstp dword ptr [eax + 0xc] }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fd3fc[];
extern "C" char g_012fd400[];
extern "C" char g_012fd418[];
extern "C" void fn_006b9740();
extern "C" void fn_008e7740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008e9ad0
extern "C" __declspec(naked) void asm_008e9ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd313ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012fd418] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test al, 1 }
	__asm { jne L_008e9b25 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fd418], eax }
	__asm { mov ecx, 0x12fd3d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008e7740 }
	__asm { push 0xdf0670 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008e9b25: }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { test bl, bl }
	__asm { je L_008e9b9a }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [g_012fd400] }
	__asm { mov esi, dword ptr [g_012fd3fc] }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp edi, eax }
	__asm { jae L_008e9b62 }
	__asm { lea eax, [edi + edi*2] }
	__asm { add eax, eax }
	__asm { cmp byte ptr [esi + eax*8], 0 }
	__asm { jne L_008e9ba0 }
	__asm { L_008e9b62: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008e9b89 }
	__asm { push 0x230 }
	__asm { push 0xe7341c }
	__asm { push 0xe73458 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008e9b9a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_008e9b89: }
	__asm { movzx eax, bl }
	__asm { push 0xe734a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008e9b9a: }
	__asm { mov esi, dword ptr [g_012fd3fc] }
	__asm { L_008e9ba0: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea eax, [eax + eax*2] }
	__asm { add eax, eax }
	__asm { mov ecx, dword ptr [esi + eax*8 + 1] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_008e73b0();
extern "C" void fn_008e7400();
// FUNCTION: ROBLOXSTUDIO 0x008e9c30
extern "C" __declspec(naked) void asm_008e9c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jne L_008e9c74 }
	__asm { cmp edx, dword ptr [edi + 4] }
	__asm { jne L_008e9c74 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_008e73b0 }
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
	__asm { L_008e9c74: }
	__asm { cmp eax, edx }
	__asm { je L_008e9cae }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push edx }
	__asm { call fn_008e7400 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_008e73b0 }
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
	__asm { L_008e9cae: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
extern "C" void fn_007014d0();
extern "C" void fn_008ea240();
extern "C" void fn_008ea370();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008e9f40
extern "C" __declspec(naked) void asm_008e9f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31468 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { call fn_008ea240 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { sub ecx, dword ptr [esi + 0x24] }
	__asm { lea ebx, [esi + 0x24] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { ja L_008e9f9f }
	__asm { lea eax, [edi + 1] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008ea370 }
	__asm { L_008e9f9f: }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { mov al, byte ptr [ebp + 0x10] }
	__asm { lea esi, [edi + edi*2] }
	__asm { shl esi, 4 }
	__asm { add esi, dword ptr [ebx] }
	__asm { mov byte ptr [ebp + 0xd], al }
	__asm { mov al, byte ptr [ebp + 0x14] }
	__asm { lea ecx, [esi + 1] }
	__asm { mov byte ptr [ebp + 0xe], al }
	__asm { mov byte ptr [ebp + 0xf], 0xff }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [esi], 1 }
	__asm { call fn_007014d0 }
	__asm { fld dword ptr [eax] }
	__asm { pop edi }
	__asm { fstp dword ptr [esi + 8] }
	__asm { lea ecx, [esi + 0x18] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 0x10] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { lea eax, [ebp + 0x18] }
	__asm { fstp dword ptr [esi + 0x14] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { cmp ecx, eax }
	__asm { je L_008e9fff }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_008e9fff: }
	__asm { cmp dword ptr [ebp + 0x2c], 0x10 }
	__asm { jb L_008ea010 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008ea010: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fd3fc[];
extern "C" char g_012fd400[];
extern "C" char g_012fd418[];
extern "C" void fn_006b9740();
extern "C" void fn_008e7740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008ea020
extern "C" __declspec(naked) void asm_008ea020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd313ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012fd418] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test al, 1 }
	__asm { jne L_008ea075 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fd418], eax }
	__asm { mov ecx, 0x12fd3d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008e7740 }
	__asm { push 0xdf0670 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008ea075: }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { test bl, bl }
	__asm { je L_008ea0ea }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [g_012fd400] }
	__asm { mov esi, dword ptr [g_012fd3fc] }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp edi, eax }
	__asm { jae L_008ea0b2 }
	__asm { lea eax, [edi + edi*2] }
	__asm { add eax, eax }
	__asm { cmp byte ptr [esi + eax*8], 0 }
	__asm { jne L_008ea0f0 }
	__asm { L_008ea0b2: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008ea0d9 }
	__asm { push 0x23b }
	__asm { push 0xe7341c }
	__asm { push 0xe73458 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008ea0ea }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_008ea0d9: }
	__asm { movzx eax, bl }
	__asm { push 0xe73540 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008ea0ea: }
	__asm { mov esi, dword ptr [g_012fd3fc] }
	__asm { L_008ea0f0: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop edi }
	__asm { lea eax, [eax + eax*2] }
	__asm { shl eax, 4 }
	__asm { add eax, 0x18 }
	__asm { add eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fd3e4[];
extern "C" char g_012fd3e8[];
extern "C" char g_012fd418[];
extern "C" void fn_006e0e00();
extern "C" void fn_008e7740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008ea2b0
extern "C" __declspec(naked) void asm_008ea2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3149c }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fd418] }
	__asm { push esi }
	__asm { test al, 1 }
	__asm { jne L_008ea2ff }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fd418], eax }
	__asm { mov ecx, 0x12fd3d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008e7740 }
	__asm { push 0xdf0670 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008ea2ff: }
	__asm { mov eax, dword ptr [g_012fd3e8] }
	__asm { sub eax, dword ptr [g_012fd3e4] }
	__asm { sar eax, 2 }
	__asm { dec eax }
	__asm { push eax }
	__asm { push 0 }
	__asm { call fn_006e0e00 }
	__asm { mov edx, dword ptr [g_012fd418] }
	__asm { add esp, 8 }
	__asm { mov esi, eax }
	__asm { test dl, 1 }
	__asm { jne L_008ea34d }
	__asm { or edx, 1 }
	__asm { mov dword ptr [g_012fd418], edx }
	__asm { mov ecx, 0x12fd3d8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_008e7740 }
	__asm { push 0xdf0670 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008ea34d: }
	__asm { mov eax, dword ptr [g_012fd3e4] }
	__asm { mov ecx, dword ptr [eax + esi*4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008e7470();
extern "C" void fn_008e9700();
extern "C" void fn_008e97b0();
extern "C" void fn_008e9c30();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008ea370
extern "C" __declspec(naked) void asm_008ea370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd314b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov edx, esi }
	__asm { sub edx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add ecx, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { cmp ecx, edi }
	__asm { jbe L_008ea3dd }
	__asm { lea eax, [edi + edi*2] }
	__asm { shl eax, 4 }
	__asm { add eax, dword ptr [ebx] }
	__asm { push esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008e9c30 }
	__asm { L_008ea3ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008ea3dd: }
	__asm { jae L_008ea3ca }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008e9700 }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov ecx, edi }
	__asm { sub ecx, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008e7470 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { sub edi, eax }
	__asm { add esp, 0x14 }
	__asm { lea eax, [edi + edi*2] }
	__asm { pop edi }
	__asm { shl eax, 4 }
	__asm { add dword ptr [ebx + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_008e97b0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00665970();
extern "C" void fn_008e74b0();
extern "C" void fn_008e9cc0();
extern "C" void fn_0090d510();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008ea470
extern "C" __declspec(naked) void asm_008ea470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd314c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, edx }
	__asm { sub ecx, eax }
	__asm { sar ecx, 2 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp ecx, edi }
	__asm { jbe L_008ea4cc }
	__asm { lea eax, [eax + edi*4] }
	__asm { push edx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008e9cc0 }
	__asm { L_008ea4b9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008ea4cc: }
	__asm { jae L_008ea4b9 }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0090d510 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, dword ptr [esi] }
	__asm { mov ecx, edi }
	__asm { sar eax, 2 }
	__asm { sub ecx, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008e74b0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, ecx }
	__asm { sub eax, dword ptr [esi] }
	__asm { add esp, 0x14 }
	__asm { sar eax, 2 }
	__asm { sub edi, eax }
	__asm { lea eax, [ecx + edi*4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00665970 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0040f730();
extern "C" void fn_0040f890();
extern "C" void fn_008b8200();
extern "C" void fn_008b8380();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008eae40
extern "C" __declspec(naked) void asm_008eae40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd314f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008b8380 }
	__asm { add esp, 8 }
	__asm { push 2 }
	__asm { push 0x101173c }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_0040f730 }
	__asm { movsx eax, word ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_008b8200 }
	__asm { add esp, 8 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0040f890 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_008eaed2 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008eaed2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105f4[];
extern "C" char g_00e10708[];
extern "C" void fn_004278c0();
extern "C" void fn_006b44a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008eb030
extern "C" __declspec(naked) void asm_008eb030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 2 }
	__asm { push 0 }
	__asm { push 0xe72b98 }
	__asm { mov ecx, esi }
	__asm { call fn_006b44a0 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jns L_008eb059 }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008eb059: }
	__asm { push edi }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004278c0 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_008eb06f }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_008eb06f: }
	__asm { push ebx }
	__asm { push eax }
	__asm { call dword ptr [g_00e10708] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { fstp dword ptr [ebx] }
	__asm { jb L_008eb090 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008eb090: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc edi }
	__asm { cmp eax, edi }
	__asm { jge L_008eb0a1 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008eb0a1: }
	__asm { sub eax, edi }
	__asm { push eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004278c0 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_008eb0b8 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_008eb0b8: }
	__asm { push eax }
	__asm { call dword ptr [g_00e105f4] }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { mov word ptr [ebx + 4], ax }
	__asm { jb L_008eb0d7 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008eb0d7: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008ebec0();
extern "C" void fn_008ed6c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008eb0e0
extern "C" __declspec(naked) void asm_008eb0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd315e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x38 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_008ed6c0 }
	__asm { mov ecx, esi }
	__asm { call fn_008ebec0 }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_008eb136 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008eb136: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0x3c], 0xf }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { mov byte ptr [ebp + 0x28], 0 }
	__asm { test eax, eax }
	__asm { je L_008eb168 }
	__asm { test al, 1 }
	__asm { jne L_008eb168 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008eb168 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008eb168: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x3c }
}

extern "C" void fn_008eb0e0();
extern "C" void fn_008ed6c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008eb180
extern "C" __declspec(naked) void asm_008eb180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd315e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { sub esp, 0x38 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ed6c0 }
	__asm { mov ecx, esi }
	__asm { call fn_008eb0e0 }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_008eb1d2 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008eb1d2: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0x3c], 0xf }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { mov byte ptr [ebp + 0x28], 0 }
	__asm { test eax, eax }
	__asm { je L_008eb204 }
	__asm { test al, 1 }
	__asm { jne L_008eb204 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008eb204 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008eb204: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x3c }
}

extern "C" void fn_008ec010();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x008eb220
extern "C" __declspec(naked) void asm_008eb220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b25b30 }
	__asm { sub esp, 0x28 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_00b25b30 }
	__asm { mov ecx, esi }
	__asm { call fn_008ec010 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008eb29b }
	__asm { test al, 1 }
	__asm { jne L_008eb294 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008eb294 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008eb294: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_008eb29b: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008eb2c2 }
	__asm { test al, 1 }
	__asm { jne L_008eb2c2 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008eb2c2 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008eb2c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" char g_012e5a24[];
extern "C" void fn_004118e0();
extern "C" void fn_007cb250();
extern "C" void fn_007cbf10();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_008255d0();
extern "C" void fn_00b489e0();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008eb760
extern "C" __declspec(naked) void asm_008eb760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3153e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e5a24] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { test al, 1 }
	__asm { jne L_008eb7db }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5a24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1032ac8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e58f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008eb7db: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e58f8 }
	__asm { call fn_00b489e0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe7391c }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5550 }
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
	__asm { mov dword ptr [edi], 0xe7392c }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008eb867 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe74008 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { jmp L_008eb869 }
	__asm { L_008eb867: }
	__asm { xor eax, eax }
	__asm { L_008eb869: }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { test ecx, ecx }
	__asm { je L_008eb879 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_008eb879: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012e5a24[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_008ed4f0();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008eb890
extern "C" __declspec(naked) void asm_008eb890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31566 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e5a24] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_008eb90a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5a24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1032ac8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e58f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008eb90a: }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e58f8 }
	__asm { call fn_008ed4f0 }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe738f4 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008eb962 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe73ffc }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { jmp L_008eb964 }
	__asm { L_008eb962: }
	__asm { xor eax, eax }
	__asm { L_008eb964: }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { test ecx, ecx }
	__asm { je L_008eb974 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_008eb974: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008ebb40
extern "C" __declspec(naked) void asm_008ebb40()
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
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_008ebbcc }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008ebbcc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_008ed6c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008ebca0
extern "C" __declspec(naked) void asm_008ebca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd315d3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_008ebce4 }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_008ed6c0 }
	__asm { mov ecx, eax }
	__asm { jmp L_008ebce6 }
	__asm { L_008ebce4: }
	__asm { xor ecx, ecx }
	__asm { L_008ebce6: }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [eax], ecx }
	__asm { jb L_008ebd03 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008ebd03: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0x3c], 0xf }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { mov byte ptr [ebp + 0x28], 0 }
	__asm { test eax, eax }
	__asm { je L_008ebd35 }
	__asm { test al, 1 }
	__asm { jne L_008ebd35 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008ebd35 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008ebd35: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" void fn_0040c260();
extern "C" void fn_008ebca0();
extern "C" void fn_008ed6c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008ebd50
extern "C" __declspec(naked) void asm_008ebd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd315e8 }
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
	__asm { jne L_008ebda6 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push dword ptr [ebp + 0x40] }
	__asm { sub esp, 0x38 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_008ed6c0 }
	__asm { mov ecx, esi }
	__asm { call fn_008ebca0 }
	__asm { mov bl, 1 }
	__asm { jmp L_008ebda8 }
	__asm { L_008ebda6: }
	__asm { xor bl, bl }
	__asm { L_008ebda8: }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_008ebdc0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008ebdc0: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0x3c], 0xf }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { mov byte ptr [ebp + 0x28], 0 }
	__asm { test eax, eax }
	__asm { je L_008ebdf2 }
	__asm { test al, 1 }
	__asm { jne L_008ebdf2 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008ebdf2 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008ebdf2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" void fn_008ebd50();
extern "C" void fn_008ed6c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008ebe10
extern "C" __declspec(naked) void asm_008ebe10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd315e8 }
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
	__asm { push dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x38 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_008ed6c0 }
	__asm { mov ecx, esi }
	__asm { call fn_008ebd50 }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_008ebe6d }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008ebe6d: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0x3c], 0xf }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { mov byte ptr [ebp + 0x28], 0 }
	__asm { test eax, eax }
	__asm { je L_008ebe9f }
	__asm { test al, 1 }
	__asm { jne L_008ebe9f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008ebe9f }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008ebe9f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x3c }
}

extern "C" void fn_008ebe10();
extern "C" void fn_008ed6c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008ebec0
extern "C" __declspec(naked) void asm_008ebec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd315e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { sub esp, 0x38 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ed6c0 }
	__asm { mov esi, 0xe7405c }
	__asm { mov ecx, esi }
	__asm { call fn_008ebe10 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_008ebf23 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008ebf23: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0x3c], 0xf }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { mov byte ptr [ebp + 0x28], 0 }
	__asm { test eax, eax }
	__asm { je L_008ebf55 }
	__asm { test al, 1 }
	__asm { jne L_008ebf55 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008ebf55 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008ebf55: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" void fn_009590f0();
extern "C" void fn_0095b950();
extern "C" void fn_009a9600();
// FUNCTION: ROBLOXSTUDIO 0x008ebf70
extern "C" __declspec(naked) void asm_008ebf70()
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
	__asm { mov esi, 0xe74054 }
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

extern "C" void fn_00aec810();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x008ec010
extern "C" __declspec(naked) void asm_008ec010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
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
	__asm { call fn_00b25b30 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push esi }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b25b30 }
	__asm { mov esi, 0xe7406c }
	__asm { mov ecx, esi }
	__asm { call fn_00aec810 }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008ec09a }
	__asm { test cl, 1 }
	__asm { jne L_008ec093 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_008ec093 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008ec093: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_008ec09a: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008ec0ca }
	__asm { test al, 1 }
	__asm { jne L_008ec0ca }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008ec0ca }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008ec0ca: }
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
extern "C" void fn_008ed850();
extern "C" void fn_008eddb0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008ec190
extern "C" __declspec(naked) void asm_008ec190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3161b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_008ec20e }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { call fn_008ed850 }
	__asm { push 0x30 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_008ec1f7 }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_008ed850 }
	__asm { mov ecx, eax }
	__asm { jmp L_008ec1f9 }
	__asm { L_008ec1f7: }
	__asm { xor ecx, ecx }
	__asm { L_008ec1f9: }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_008eddb0 }
	__asm { mov bl, 1 }
	__asm { jmp L_008ec210 }
	__asm { L_008ec20e: }
	__asm { xor bl, bl }
	__asm { L_008ec210: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008eddb0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" void fn_009bccc0();
extern "C" void fn_00af96c0();
extern "C" void fn_00affce0();
// FUNCTION: ROBLOXSTUDIO 0x008ec3d0
extern "C" __declspec(naked) void asm_008ec3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53350 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00af96c0 }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { call fn_00af96c0 }
	__asm { mov esi, 0xe74064 }
	__asm { mov ecx, esi }
	__asm { call fn_00affce0 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009bccc0 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009bccc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" void fn_00825140();
extern "C" void fn_008ed3e0();
extern "C" void fn_008f0760();
// FUNCTION: ROBLOXSTUDIO 0x008ecde0
extern "C" __declspec(naked) void asm_008ecde0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31756 }
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
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_008ed3e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe7394c }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp + 0x1c], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008f0760 }
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
extern "C" void fn_007d5390();
extern "C" void fn_007d55c0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_008ed5b0();
// FUNCTION: ROBLOXSTUDIO 0x008ed0f0
extern "C" __declspec(naked) void asm_008ed0f0()
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
	__asm { call fn_008ed5b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe73834 }
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
	__asm { call fn_007d55c0 }
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
	__asm { je L_008ed19e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008ed19e: }
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
// FUNCTION: ROBLOXSTUDIO 0x008ed280
extern "C" __declspec(naked) void asm_008ed280()
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
	__asm { push 0x11f1390 }
	__asm { mov edi, ecx }
	__asm { push 0xe73fa4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59f58 }
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
	__asm { push 0xe73fb4 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe73fc8 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe73fd0 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe73fe4 }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe73fec }
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

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e5a24[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008ed3e0
extern "C" __declspec(naked) void asm_008ed3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31826 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e5a24] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_008ed45a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5a24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1032ac8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e58f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008ed45a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e58f8 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe73864 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_008ed4d2 }
	__asm { push 0x1214428 }
	__asm { mov ecx, 0x1214428 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008ed4d2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008ed4bd }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008ed4d2 }
	__asm { L_008ed4bd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008ed4d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
extern "C" void fn_007d5d30();
extern "C" void fn_008255d0();
extern "C" void fn_00b489e0();
// FUNCTION: ROBLOXSTUDIO 0x008ed4f0
extern "C" __declspec(naked) void asm_008ed4f0()
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
	__asm { mov dword ptr [edi], 0xe738e4 }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5550 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_008255d0 }
	__asm { call fn_007d5390 }
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

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e5a24[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008ed5b0
extern "C" __declspec(naked) void asm_008ed5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31866 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e5a24] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_008ed62a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5a24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1032ac8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e58f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008ed62a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e58f8 }
	__asm { call fn_0092b930 }
	__asm { mov dword ptr [esi], 0xe73828 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_008ed6a2 }
	__asm { push 0x1214428 }
	__asm { mov ecx, 0x1214428 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008ed6a2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008ed68d }
	__asm { push 0x662 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008ed6a2 }
	__asm { L_008ed68d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe55e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008ed6a2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x008ed6c0
extern "C" __declspec(naked) void asm_008ed6c0()
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
	__asm { je L_008ed730 }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_008ed71c }
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
	__asm { jmp L_008ed730 }
	__asm { L_008ed71c: }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008ed730: }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x20] }
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
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x008ed770
extern "C" __declspec(naked) void asm_008ed770()
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
	__asm { je L_008ed7e4 }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_008ed7d0 }
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
	__asm { jmp L_008ed7e4 }
	__asm { L_008ed7d0: }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008ed7e4: }
	__asm { push -1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008ed82f }
	__asm { test al, 1 }
	__asm { jne L_008ed82f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008ed82f }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008ed82f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e131b0[];
extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008ede10
extern "C" __declspec(naked) void asm_008ede10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3198f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0xb0] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_008ede66 }
	__asm { test al, 1 }
	__asm { jne L_008ede5c }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0xb8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008ede5c }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008ede5c: }
	__asm { mov dword ptr [esi + 0xb0], 0 }
	__asm { L_008ede66: }
	__asm { mov eax, dword ptr [esi + 0x90] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_008ede9a }
	__asm { test al, 1 }
	__asm { jne L_008ede90 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x98] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008ede90 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008ede90: }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { L_008ede9a: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x88] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_008edeba }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e131b0] }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008edeba: }
	__asm { cmp dword ptr [esi + 0x7c], 0x10 }
	__asm { pop edi }
	__asm { jb L_008edecc }
	__asm { push dword ptr [esi + 0x68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008edecc: }
	__asm { mov dword ptr [esi + 0x7c], 0xf }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x008f0760
extern "C" __declspec(naked) void asm_008f0760()
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
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5390 }
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
	__asm { call fn_007d5550 }
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
	__asm { je L_008f07dd }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008f07dd: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008f07f7 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008f07f7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x008f0810
extern "C" __declspec(naked) void asm_008f0810()
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
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5390 }
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
	__asm { call fn_007d5550 }
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
	__asm { call fn_007d5710 }
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
	__asm { je L_008f08b1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008f08b1: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008f08c8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008f08c8: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008f08e8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008f08e8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x008f0900
extern "C" __declspec(naked) void asm_008f0900()
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
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5390 }
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
	__asm { je L_008f097d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008f097d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008f0997 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008f0997: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_00403540();
extern "C" void fn_0079ae50();
extern "C" void fn_0083e860();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f09f0
extern "C" __declspec(naked) void asm_008f09f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x30] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_0079ae50 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x34] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0083e860 }
	__asm { add esp, 0x1c }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_008f0a4b }
	__asm { add ebx, -0x1c }
	__asm { jmp L_008f0a4d }
	__asm { L_008f0a4b: }
	__asm { xor ebx, ebx }
	__asm { L_008f0a4d: }
	__asm { mov edi, dword ptr [edi + 0x28] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { sub esp, 0x18 }
	__asm { mov esi, dword ptr [esi + 0x2c] }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebx + esi] }
	__asm { call edi }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_008f0a8f }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f0a8f: }
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
// FUNCTION: ROBLOXSTUDIO 0x008f0ea0
extern "C" __declspec(naked) void asm_008f0ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd69a68 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp + 8], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
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
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call esi }
	__asm { add esp, 0x34 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_008f0f32 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f0f32: }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_008f0f55 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f0f55: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" void fn_008ed6c0();
extern "C" void fn_008edf70();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008f1640
extern "C" __declspec(naked) void asm_008f1640()
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
	__asm { jne L_008f16b1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x38 }
	__asm { mov esi, dword ptr [eax] }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008f169b }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_008ed6c0 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f169b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f16b1: }
	__asm { cmp eax, 1 }
	__asm { jne L_008f16d5 }
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
	__asm { L_008f16d5: }
	__asm { cmp eax, 2 }
	__asm { jne L_008f16ff }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_008f16ea }
	__asm { push 1 }
	__asm { call fn_008edf70 }
	__asm { L_008f16ea: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f16ff: }
	__asm { cmp eax, 3 }
	__asm { jne L_008f172e }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x1214708 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_008f16ea }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f172e: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0x1214708 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004034a0();
extern "C" void fn_00412c00();
extern "C" void fn_00451670();
extern "C" void fn_008f2170();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f20c0
extern "C" __declspec(naked) void asm_008f20c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_008f2170 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe74084 }
	__asm { push eax }
	__asm { call fn_00451670 }
	__asm { mov edi, eax }
	__asm { add esp, 0x10 }
	__asm { cmp esi, edi }
	__asm { je L_008f2112 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008f20f9 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f20f9: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00412c00 }
	__asm { L_008f2112: }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { jb L_008f2123 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f2123: }
	__asm { push 1 }
	__asm { push 0x28 }
	__asm { mov ecx, esi }
	__asm { call fn_004034a0 }
	__asm { push 1 }
	__asm { push 0x1b }
	__asm { mov ecx, esi }
	__asm { call fn_004034a0 }
	__asm { push 1 }
	__asm { push 0x16 }
	__asm { mov ecx, esi }
	__asm { call fn_004034a0 }
	__asm { push 1 }
	__asm { push 0x11 }
	__asm { mov ecx, esi }
	__asm { call fn_004034a0 }
	__asm { push 1 }
	__asm { push 0xc }
	__asm { mov ecx, esi }
	__asm { call fn_004034a0 }
	__asm { push 1 }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { call fn_004034a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_006b47b0();
extern "C" void fn_006b5ab0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f2420
extern "C" __declspec(naked) void asm_008f2420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31e10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebx + 0x14], 7 }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov word ptr [ebx], ax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 0x28], al }
	__asm { cmp byte ptr [edx], al }
	__asm { jne L_008f2470 }
	__asm { xor ecx, ecx }
	__asm { jmp L_008f247e }
	__asm { L_008f2470: }
	__asm { mov ecx, edx }
	__asm { lea esi, [ecx + 1] }
	__asm { L_008f2475: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_008f2475 }
	__asm { sub ecx, esi }
	__asm { L_008f247e: }
	__asm { push ecx }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_004038a0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006b5ab0 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { test eax, eax }
	__asm { je L_008f24bf }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea edi, [ebp - 0x28] }
	__asm { cmovae edi, dword ptr [ebp - 0x28] }
	__asm { lea esi, [ebp - 0x28] }
	__asm { cmovae esi, dword ptr [ebp - 0x28] }
	__asm { push ebx }
	__asm { add eax, edi }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_006b47b0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { L_008f24bf: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_008f24d0 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f24d0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e5c8c[];
extern "C" void fn_004118e0();
extern "C" void fn_0048d4a0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008f3890();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008f24f0
extern "C" __declspec(naked) void asm_008f24f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31e46 }
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
	__asm { call fn_008f3890 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e5c8c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_008f25ac }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5c8c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe74094 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5b60 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_008f25ac: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e5b60 }
	__asm { call fn_0048d4a0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe742c4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008f262a }
	__asm { push 0x121597c }
	__asm { mov ecx, 0x121597c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008f262a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008f2615 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008f262a }
	__asm { L_008f2615: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008f262a: }
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
extern "C" char g_012e5c8c[];
extern "C" void fn_0040bac0();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008f38e0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008f2640
extern "C" __declspec(naked) void asm_008f2640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31e46 }
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
	__asm { call fn_008f38e0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e5c8c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_008f26fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5c8c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe74094 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5b60 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_008f26fc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e5b60 }
	__asm { call fn_0040bac0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe74360 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008f277a }
	__asm { push 0x121597c }
	__asm { mov ecx, 0x121597c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008f277a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008f2765 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008f277a }
	__asm { L_008f2765: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008f277a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_008f3100();
extern "C" void fn_008f4790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f29f0
extern "C" __declspec(naked) void asm_008f29f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31ee0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x48 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008f4790 }
	__asm { mov ecx, esi }
	__asm { call fn_008f3100 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_008f2a6a }
	__asm { test al, 1 }
	__asm { jne L_008f2a63 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008f2a63 }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008f2a63: }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { L_008f2a6a: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_008f2a7b }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f2a7b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" void fn_008f29f0();
extern "C" void fn_008f4790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f2a90
extern "C" __declspec(naked) void asm_008f2a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31ee0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x48 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_008f4790 }
	__asm { mov ecx, esi }
	__asm { call fn_008f29f0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_008f2b06 }
	__asm { test al, 1 }
	__asm { jne L_008f2aff }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008f2aff }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008f2aff: }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { L_008f2b06: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_008f2b17 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f2b17: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" void fn_008f31b0();
extern "C" void fn_008f4790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f2b30
extern "C" __declspec(naked) void asm_008f2b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31ee0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x48 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008f4790 }
	__asm { mov ecx, esi }
	__asm { call fn_008f31b0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_008f2baa }
	__asm { test al, 1 }
	__asm { jne L_008f2ba3 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008f2ba3 }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008f2ba3: }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { L_008f2baa: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_008f2bbb }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f2bbb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" void fn_008f2b30();
extern "C" void fn_008f4790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f2bd0
extern "C" __declspec(naked) void asm_008f2bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31ee0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x48 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_008f4790 }
	__asm { mov ecx, esi }
	__asm { call fn_008f2b30 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_008f2c46 }
	__asm { test al, 1 }
	__asm { jne L_008f2c3f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008f2c3f }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008f2c3f: }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { L_008f2c46: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_008f2c57 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f2c57: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

// FUNCTION: ROBLOXSTUDIO 0x008f2e30
extern "C" __declspec(naked) void asm_008f2e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_008f2e8a }
	__asm { mov dword ptr [edx], ecx }
	__asm { test cl, 1 }
	__asm { je L_008f2e76 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_008f2e8a }
	__asm { L_008f2e76: }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [esi + 0x28] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008f2e8a: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [ecx] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 0x2c }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_008f4790();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008f2ee0
extern "C" __declspec(naked) void asm_008f2ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31e9b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_008f2f2b }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_008f4790 }
	__asm { jmp L_008f2f2d }
	__asm { L_008f2f2b: }
	__asm { xor esi, esi }
	__asm { L_008f2f2d: }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [eax], esi }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x50], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_008f2f67 }
	__asm { test al, 1 }
	__asm { jne L_008f2f60 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008f2f60 }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008f2f60: }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { L_008f2f67: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_008f2f78 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f2f78: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" void fn_0040c260();
extern "C" void fn_008f2ee0();
extern "C" void fn_008f4790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f2f90
extern "C" __declspec(naked) void asm_008f2f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31ec0 }
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
	__asm { jne L_008f2fef }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x50] }
	__asm { sub esp, 0x48 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_008f4790 }
	__asm { mov ecx, esi }
	__asm { call fn_008f2ee0 }
	__asm { mov bl, 1 }
	__asm { jmp L_008f2ff1 }
	__asm { L_008f2fef: }
	__asm { xor bl, bl }
	__asm { L_008f2ff1: }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x50], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_008f3025 }
	__asm { test al, 1 }
	__asm { jne L_008f301e }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008f301e }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008f301e: }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { L_008f3025: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_008f3036 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f3036: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" void fn_008f2f90();
extern "C" void fn_008f4790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f3050
extern "C" __declspec(naked) void asm_008f3050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31ec0 }
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
	__asm { push dword ptr [ebp + 0x50] }
	__asm { sub esp, 0x48 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_008f4790 }
	__asm { mov ecx, esi }
	__asm { call fn_008f2f90 }
	__asm { mov bl, al }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x50], eax }
	__asm { mov ecx, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_008f30d3 }
	__asm { test cl, 1 }
	__asm { jne L_008f30cc }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_008f30cc }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008f30cc: }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { L_008f30d3: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_008f30e4 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f30e4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" void fn_008f3050();
extern "C" void fn_008f4790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f3100
extern "C" __declspec(naked) void asm_008f3100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31ee0 }
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
	__asm { sub esp, 0x48 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_008f4790 }
	__asm { mov esi, 0xe74b5c }
	__asm { mov ecx, esi }
	__asm { call fn_008f3050 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_008f3187 }
	__asm { test al, 1 }
	__asm { jne L_008f3180 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008f3180 }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008f3180: }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { L_008f3187: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_008f3198 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f3198: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" void fn_008f3050();
extern "C" void fn_008f4790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f31b0
extern "C" __declspec(naked) void asm_008f31b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31ee0 }
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
	__asm { sub esp, 0x48 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_008f4790 }
	__asm { mov esi, 0xe74b54 }
	__asm { mov ecx, esi }
	__asm { call fn_008f3050 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_008f3237 }
	__asm { test al, 1 }
	__asm { jne L_008f3230 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008f3230 }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008f3230: }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { L_008f3237: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_008f3248 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f3248: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" void fn_0095b950();
extern "C" void fn_009a5730();
extern "C" void fn_009a9600();
// FUNCTION: ROBLOXSTUDIO 0x008f3260
extern "C" __declspec(naked) void asm_008f3260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31f00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_0095b950 }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x30 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { call fn_0095b950 }
	__asm { mov esi, 0xe74b64 }
	__asm { mov ecx, esi }
	__asm { call fn_009a5730 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009a9600 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0x10] }
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
	__asm { ret 0x30 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e104c8[];
extern "C" void fn_008face0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008f3680
extern "C" __declspec(naked) void asm_008f3680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd46a08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { push edi }
	__asm { test ebx, ebx }
	__asm { je L_008f36c1 }
	__asm { cmp ebx, -1 }
	__asm { ja L_008f36bb }
	__asm { push ebx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { jne L_008f36c1 }
	__asm { L_008f36bb: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_008f36c1: }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { mov dword ptr [ebp - 0x28], esi }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 0x1c], edx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { xor eax, eax }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_008f36e4: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push esi }
	__asm { add ecx, 0x10 }
	__asm { call dword ptr [g_00e104c8] }
	__asm { mov edi, eax }
	__asm { mov ebx, edx }
	__asm { mov ecx, edi }
	__asm { or ecx, ebx }
	__asm { je L_008f3720 }
	__asm { mov ecx, edi }
	__asm { and ecx, ebx }
	__asm { cmp ecx, -1 }
	__asm { je L_008f3720 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_008face0 }
	__asm { add dword ptr [ebp - 0x10], edi }
	__asm { adc dword ptr [ebp - 0x14], ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { jmp L_008f36e4 }
	__asm { L_008f3720: }
	__asm { test esi, esi }
	__asm { je L_008f372d }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f372d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008f3660();
extern "C" void fn_008f3750();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008f37f0
extern "C" __declspec(naked) void asm_008f37f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31fd0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { call fn_008f3750 }
	__asm { add esp, 0x14 }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov edi, edx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008f3660 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov edx, edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008f3660 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0x8f387a }
	__asm { ret }
}

extern "C" char g_00e101fc[];
extern "C" char g_00e10200[];
extern "C" char g_00e10598[];
extern "C" char g_00e131ac[];
extern "C" void fn_0045f760();
extern "C" void fn_0045fe60();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008f3930
extern "C" __declspec(naked) void asm_008f3930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31ff9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x48 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e101fc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10200] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_008f3994 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { mov dword ptr [ebp - 0x28], 0xe1815c }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_0045fe60 }
	__asm { L_008f3994: }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e131ac] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe74b28 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_0045f760 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x008f3ce0
extern "C" __declspec(naked) void asm_008f3ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { cmp eax, 0x10 }
	__asm { jb L_008f3cf5 }
	__asm { mov edi, dword ptr [edx] }
	__asm { jmp L_008f3cf7 }
	__asm { L_008f3cf5: }
	__asm { mov edi, edx }
	__asm { L_008f3cf7: }
	__asm { cmp eax, 0x10 }
	__asm { jb L_008f3d00 }
	__asm { mov eax, dword ptr [edx] }
	__asm { jmp L_008f3d02 }
	__asm { L_008f3d00: }
	__asm { mov eax, edx }
	__asm { L_008f3d02: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [edx + 0x10] }
	__asm { mov esi, dword ptr [ecx + 0x14] }
	__asm { add edx, eax }
	__asm { cmp esi, 0x10 }
	__asm { jb L_008f3d16 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp L_008f3d18 }
	__asm { L_008f3d16: }
	__asm { mov eax, ecx }
	__asm { L_008f3d18: }
	__asm { cmp esi, 0x10 }
	__asm { jb L_008f3d21 }
	__asm { mov esi, dword ptr [ecx] }
	__asm { jmp L_008f3d23 }
	__asm { L_008f3d21: }
	__asm { mov esi, ecx }
	__asm { L_008f3d23: }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { add ecx, esi }
	__asm { cmp edi, edx }
	__asm { je L_008f3d43 }
	__asm { sub edi, eax }
	__asm { mov edi, edi }
	__asm { L_008f3d30: }
	__asm { cmp eax, ecx }
	__asm { je L_008f3d43 }
	__asm { mov bl, byte ptr [edi + eax] }
	__asm { cmp bl, byte ptr [eax] }
	__asm { jne L_008f3d4f }
	__asm { inc eax }
	__asm { lea esi, [edi + eax] }
	__asm { cmp esi, edx }
	__asm { jne L_008f3d30 }
	__asm { L_008f3d43: }
	__asm { pop edi }
	__asm { xor edx, edx }
	__asm { cmp eax, ecx }
	__asm { pop esi }
	__asm { sete al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f3d4f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008f42a0();
extern "C" void fn_00b887a0();
// FUNCTION: ROBLOXSTUDIO 0x008f3d60
extern "C" __declspec(naked) void asm_008f3d60()
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
	__asm { je L_008f3ddf }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_008f3dc8 }
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
	__asm { jmp L_008f3ddf }
	__asm { L_008f3dc8: }
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
	__asm { L_008f3ddf: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_00b887a0 }
	__asm { mov dword ptr [edi], 0xe7420c }
	__asm { mov dword ptr [edi + 0xf8], 0 }
	__asm { mov dword ptr [edi + 0xfc], 0 }
	__asm { lea ecx, [edi + 0x100] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008f42a0 }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edi + 0x128], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x100], 0xe74200 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008f3e4c }
	__asm { test al, 1 }
	__asm { jne L_008f3e4c }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008f3e4c }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008f3e4c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_008f4190();
// FUNCTION: ROBLOXSTUDIO 0x008f3e60
extern "C" __declspec(naked) void asm_008f3e60()
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
	__asm { call fn_008f4190 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe7430c }
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
	__asm { je L_008f3f0e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008f3f0e: }
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
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_008f4190();
// FUNCTION: ROBLOXSTUDIO 0x008f3f30
extern "C" __declspec(naked) void asm_008f3f30()
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
	__asm { call fn_008f4190 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe742ac }
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
	__asm { je L_008f3fde }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008f3fde: }
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
extern "C" void fn_007d58d0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_008f4190();
// FUNCTION: ROBLOXSTUDIO 0x008f4000
extern "C" __declspec(naked) void asm_008f4000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd320bb }
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
	__asm { call fn_008f4190 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe74340 }
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
	__asm { call fn_007d58d0 }
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
	__asm { je L_008f40ae }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008f40ae: }
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
extern "C" char g_012e5c8c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008f4190
extern "C" __declspec(naked) void asm_008f4190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd32106 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e5c8c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_008f420a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5c8c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe74094 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5b60 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008f420a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e5b60 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe742a0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_008f4282 }
	__asm { push 0x121597c }
	__asm { mov ecx, 0x121597c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008f4282 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008f426d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008f4282 }
	__asm { L_008f426d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008f4282: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}
