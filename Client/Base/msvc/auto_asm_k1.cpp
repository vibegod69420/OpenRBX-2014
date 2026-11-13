// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e11110[];
extern "C" void fn_00401120();
extern "C" void fn_00401ba0();
extern "C" void fn_00401c20();
extern "C" void fn_00401f10();
// FUNCTION: ROBLOXSTUDIO 0x00401060
extern "C" __declspec(naked) void asm_00401060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88e39 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push edi }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { je L_004010fb }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { je L_004010fb }
	__asm { push edi }
	__asm { push ebx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00401ba0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00401c20 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { cmp esi, 0xc8 }
	__asm { jne L_004010fb }
	__asm { push edi }
	__asm { push ebx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00401f10 }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { setne bl }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov al, bl }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004010fb: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push 0x2710 }
	__asm { call fn_00401120 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" void fn_00401ba0();
extern "C" void fn_00401fb0();
// FUNCTION: ROBLOXSTUDIO 0x00401f10
extern "C" __declspec(naked) void asm_00401f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f419 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { je L_00401f89 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [edx] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { je L_00401f89 }
	__asm { push edx }
	__asm { push ecx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00401ba0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00401fb0 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00401f89: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0xf12f2d }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e110b4[];
extern "C" char g_00e110b8[];
extern "C" char g_00e11100[];
extern "C" char g_00e11104[];
extern "C" char g_00e11110[];
extern "C" char g_01318f63[];
extern "C" char g_0131a230[];
extern "C" char g_0131b3c8[];
extern "C" char g_0131b3d0[];
extern "C" char g_0131b3d4[];
extern "C" void fn_004f5800();
extern "C" void fn_004f5a70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004021e0
extern "C" __declspec(naked) void asm_004021e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f2f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov ecx, 0x131b3c8 }
	__asm { mov dword ptr [ebp - 0x14], 0x131b3c8 }
	__asm { call dword ptr [g_00e11104] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [g_0131a230] }
	__asm { mov dword ptr [g_0131b3c8], 0xf12e64 }
	__asm { mov dword ptr [g_0131b3d0], 0 }
	__asm { mov dword ptr [g_0131b3d4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0040225f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a230], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004f5800 }
	__asm { push 0xddb880 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_0040225f: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x131a224 }
	__asm { call fn_004f5a70 }
	__asm { push eax }
	__asm { mov ecx, 0x1319014 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11100] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { cmp byte ptr [g_01318f63], 0 }
	__asm { je L_004022a6 }
	__asm { mov ecx, dword ptr [g_00e110b4] }
	__asm { push 0x131b3c8 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call dword ptr [g_00e110b8] }
	__asm { L_004022a6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131b3c8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004028d0
extern "C" __declspec(naked) void asm_004028d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebx + 0x34], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_0040292d }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00402920 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0x30] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_00402920: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0x30] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_00402938 }
	__asm { L_0040292d: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0x30] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00402938: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_0040294e }
	__asm { add ecx, -0x30 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0040294e: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10508[];
extern "C" void fn_00402d90();
extern "C" void fn_00402ef0();
// FUNCTION: ROBLOXSTUDIO 0x00402ce0
extern "C" __declspec(naked) void asm_00402ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd6f438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea eax, [esi + 3] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { lea eax, [edi + 1] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_00402ef0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov ebx, dword ptr [esp + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00402d67 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx + eax*4] }
	__asm { mov dword ptr [ebx + edi*4], eax }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00402d67: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { mov dword ptr [esi + 0x14], ebx }
	__asm { call fn_00402d90 }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_011df1bc[];
extern "C" void fn_00403110();
extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x004032a0
extern "C" __declspec(naked) void asm_004032a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e0c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [g_011df1bc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi + 0x30], 0xf }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov byte ptr [esi + 0x1c], 0 }
	__asm { cmp byte ptr [edi], 0 }
	__asm { jne L_004032fe }
	__asm { xor ecx, ecx }
	__asm { jmp L_0040330e }
	__asm { L_004032fe: }
	__asm { mov ecx, edi }
	__asm { push ebx }
	__asm { lea ebx, [ecx + 1] }
	__asm { L_00403304: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00403304 }
	__asm { sub ecx, ebx }
	__asm { pop ebx }
	__asm { L_0040330e: }
	__asm { push ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { call fn_004038a0 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [ebp + 8], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00403345 }
	__asm { sub eax, 4 }
	__asm { L_00403345: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { mov dword ptr [esi + 0x40], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov byte ptr [esi + 0x4c], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10264[];
extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x004034a0
extern "C" __declspec(naked) void asm_004034a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { cmp edi, ecx }
	__asm { jae L_004034bc }
	__asm { push 0xf12f30 }
	__asm { call dword ptr [g_00e10264] }
	__asm { L_004034bc: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { cmp eax, edx }
	__asm { ja L_004034ea }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { jb L_004034de }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { mov byte ptr [eax + ecx], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004034de: }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { mov byte ptr [eax + ecx], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004034ea: }
	__asm { test edx, edx }
	__asm { je L_00403533 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_004034f8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_004034fa }
	__asm { L_004034f8: }
	__asm { mov eax, esi }
	__asm { L_004034fa: }
	__asm { sub edi, edx }
	__asm { push ebx }
	__asm { lea ebx, [eax + ecx] }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { je L_00403515 }
	__asm { push eax }
	__asm { lea eax, [ebx + edx] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { L_00403515: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { pop ebx }
	__asm { jb L_0040352d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [eax + edi], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0040352d: }
	__asm { mov eax, esi }
	__asm { mov byte ptr [eax + edi], 0 }
	__asm { L_00403533: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10260[];
extern "C" char g_00e10508[];
extern "C" void fn_004036a0();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x004037f0
extern "C" __declspec(naked) void asm_004037f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp edi, -2 }
	__asm { jbe L_0040380a }
	__asm { push 0xf12f48 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0040380a: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, edi }
	__asm { jae L_00403828 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push edi }
	__asm { call fn_004036a0 }
	__asm { xor eax, eax }
	__asm { cmp eax, edi }
	__asm { sbb eax, eax }
	__asm { pop edi }
	__asm { neg eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00403828: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_0040387f }
	__asm { cmp edi, 0x10 }
	__asm { jae L_0040387f }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi + 0x10] }
	__asm { cmp edi, ebx }
	__asm { cmovb ebx, edi }
	__asm { cmp eax, 0x10 }
	__asm { jb L_00403862 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { test ebx, ebx }
	__asm { je L_00403858 }
	__asm { push ebx }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add esp, 0xc }
	__asm { L_00403858: }
	__asm { push eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00403862: }
	__asm { mov dword ptr [esi + 0x10], ebx }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov byte ptr [ebx + esi], 0 }
	__asm { cmp eax, edi }
	__asm { pop ebx }
	__asm { sbb eax, eax }
	__asm { pop edi }
	__asm { neg eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0040387f: }
	__asm { test edi, edi }
	__asm { jne L_00403890 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { cmp eax, 0x10 }
	__asm { jb L_0040388d }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_0040388d: }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_00403890: }
	__asm { xor eax, eax }
	__asm { cmp eax, edi }
	__asm { sbb eax, eax }
	__asm { pop edi }
	__asm { neg eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e122f0[];
extern "C" char g_00e122f4[];
extern "C" char g_00e122f8[];
// FUNCTION: ROBLOXSTUDIO 0x00403ce0
extern "C" __declspec(naked) void asm_00403ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70632 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e122f8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00403d1a }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00403d1a: }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e122f0] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { test bl, bl }
	__asm { je L_00403d5b }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov bl, 1 }
	__asm { jmp L_00403d5d }
	__asm { L_00403d5b: }
	__asm { xor bl, bl }
	__asm { L_00403d5d: }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e122f4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e122f0[];
extern "C" char g_00e122f4[];
extern "C" char g_00e122f8[];
extern "C" void fn_00793050();
extern "C" void fn_00793430();
// FUNCTION: ROBLOXSTUDIO 0x00403d90
extern "C" __declspec(naked) void asm_00403d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd704aa }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_00403e6f }
	__asm { mov dword ptr [esp + 0x2c], 0xf }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { mov byte ptr [esp + 0x18], al }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov dword ptr [esp + 0x40], 0 }
	__asm { call fn_00793050 }
	__asm { test al, al }
	__asm { je L_00403e5b }
	__asm { lea ecx, [esp + 0x10] }
	__asm { call dword ptr [g_00e122f8] }
	__asm { mov byte ptr [esp + 0x3c], 1 }
	__asm { cmp dword ptr [esp + 0x2c], 0x10 }
	__asm { lea eax, [esp + 0x18] }
	__asm { cmovae eax, dword ptr [esp + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov byte ptr [esp + 0x40], 2 }
	__asm { call dword ptr [g_00e122f0] }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov byte ptr [esp + 0x3c], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { lea edx, [esp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x3c], 0 }
	__asm { call dword ptr [g_00e122f4] }
	__asm { L_00403e5b: }
	__asm { cmp dword ptr [esp + 0x2c], 0x10 }
	__asm { jb L_00403e6f }
	__asm { push dword ptr [esp + 0x18] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00403e6f: }
	__asm { mov ecx, dword ptr [esp + 0x34] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_0131cca8[];
extern "C" char g_0131ccd8[];
extern "C" char g_0131ccdc[];
extern "C" char g_0131cce0[];
extern "C" char g_0131cce4[];
extern "C" char g_0131cce8[];
extern "C" char g_0131ccec[];
extern "C" char g_0131ccf0[];
extern "C" char g_0131ccf4[];
extern "C" char g_0131ccf8[];
extern "C" char g_0131ccfc[];
extern "C" char g_0131cd00[];
extern "C" char g_0131cd04[];
extern "C" char g_0131cd08[];
extern "C" char g_0131cd0c[];
extern "C" char g_0131cd10[];
extern "C" char g_0131cd14[];
extern "C" char g_0131cd18[];
extern "C" char g_0131cd1c[];
extern "C" char g_0131cd20[];
extern "C" char g_0131cd24[];
extern "C" char g_0131cd28[];
extern "C" char g_0131cd2c[];
extern "C" void fn_00405fd0();
extern "C" void fn_00409860();
extern "C" void fn_007939d0();
// FUNCTION: ROBLOXSTUDIO 0x00404300
extern "C" __declspec(naked) void asm_00404300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fc60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x12be5e8 }
	__asm { push 0xf1300c }
	__asm { mov ecx, 0x131cca8 }
	__asm { mov dword ptr [ebp - 0x10], 0x131cca8 }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131cca8], 0xf14bb4 }
	__asm { mov dword ptr [g_0131ccd8], 0 }
	__asm { mov dword ptr [g_0131ccdc], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [g_0131ccd8], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131cce0], 0 }
	__asm { mov dword ptr [g_0131cce4], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [g_0131cce0], eax }
	__asm { mov dword ptr [g_0131cce8], 0 }
	__asm { mov dword ptr [g_0131ccec], 0 }
	__asm { mov dword ptr [g_0131ccf0], 0 }
	__asm { mov dword ptr [g_0131ccf4], 0 }
	__asm { mov dword ptr [g_0131ccf8], 0 }
	__asm { mov dword ptr [g_0131ccfc], 0 }
	__asm { mov dword ptr [g_0131cd00], 0 }
	__asm { mov dword ptr [g_0131cd04], 0 }
	__asm { mov dword ptr [g_0131cd08], 0 }
	__asm { mov dword ptr [g_0131cd0c], 0 }
	__asm { mov dword ptr [g_0131cd10], 0 }
	__asm { mov dword ptr [g_0131cd14], 0 }
	__asm { mov dword ptr [g_0131cd18], 0 }
	__asm { mov dword ptr [g_0131cd1c], 0 }
	__asm { mov dword ptr [g_0131cd20], 0 }
	__asm { mov dword ptr [g_0131cd24], 0 }
	__asm { mov dword ptr [g_0131cd28], 0 }
	__asm { mov dword ptr [g_0131cd2c], 0 }
	__asm { push 0xf13380 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00405fd0 }
	__asm { push 0xf13388 }
	__asm { push 1 }
	__asm { call fn_00405fd0 }
	__asm { push 0xf13394 }
	__asm { push 2 }
	__asm { call fn_00405fd0 }
	__asm { push 0xf12f68 }
	__asm { push 3 }
	__asm { call fn_00405fd0 }
	__asm { push 0xf133a4 }
	__asm { push 4 }
	__asm { call fn_00405fd0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131cca8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131cd38[];
extern "C" char g_0131cd68[];
extern "C" char g_0131cd6c[];
extern "C" char g_0131cd70[];
extern "C" char g_0131cd74[];
extern "C" char g_0131cd78[];
extern "C" char g_0131cd7c[];
extern "C" char g_0131cd80[];
extern "C" char g_0131cd84[];
extern "C" char g_0131cd88[];
extern "C" char g_0131cd8c[];
extern "C" char g_0131cd90[];
extern "C" char g_0131cd94[];
extern "C" char g_0131cd98[];
extern "C" char g_0131cd9c[];
extern "C" char g_0131cda0[];
extern "C" char g_0131cda4[];
extern "C" char g_0131cda8[];
extern "C" char g_0131cdac[];
extern "C" char g_0131cdb0[];
extern "C" char g_0131cdb4[];
extern "C" char g_0131cdb8[];
extern "C" char g_0131cdbc[];
extern "C" void fn_004065c0();
extern "C" void fn_00409860();
extern "C" void fn_007939d0();
// FUNCTION: ROBLOXSTUDIO 0x004044f0
extern "C" __declspec(naked) void asm_004044f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fc60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x12be5b4 }
	__asm { push 0xf133ac }
	__asm { mov ecx, 0x131cd38 }
	__asm { mov dword ptr [ebp - 0x10], 0x131cd38 }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131cd38], 0xf14b9c }
	__asm { mov dword ptr [g_0131cd68], 0 }
	__asm { mov dword ptr [g_0131cd6c], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [g_0131cd68], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131cd70], 0 }
	__asm { mov dword ptr [g_0131cd74], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [g_0131cd70], eax }
	__asm { mov dword ptr [g_0131cd78], 0 }
	__asm { mov dword ptr [g_0131cd7c], 0 }
	__asm { mov dword ptr [g_0131cd80], 0 }
	__asm { mov dword ptr [g_0131cd84], 0 }
	__asm { mov dword ptr [g_0131cd88], 0 }
	__asm { mov dword ptr [g_0131cd8c], 0 }
	__asm { mov dword ptr [g_0131cd90], 0 }
	__asm { mov dword ptr [g_0131cd94], 0 }
	__asm { mov dword ptr [g_0131cd98], 0 }
	__asm { mov dword ptr [g_0131cd9c], 0 }
	__asm { mov dword ptr [g_0131cda0], 0 }
	__asm { mov dword ptr [g_0131cda4], 0 }
	__asm { mov dword ptr [g_0131cda8], 0 }
	__asm { mov dword ptr [g_0131cdac], 0 }
	__asm { mov dword ptr [g_0131cdb0], 0 }
	__asm { mov dword ptr [g_0131cdb4], 0 }
	__asm { mov dword ptr [g_0131cdb8], 0 }
	__asm { mov dword ptr [g_0131cdbc], 0 }
	__asm { push 0xf133c0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_004065c0 }
	__asm { push 0xf133cc }
	__asm { push 1 }
	__asm { call fn_004065c0 }
	__asm { push 0xf133d4 }
	__asm { push 2 }
	__asm { call fn_004065c0 }
	__asm { push 0xf133dc }
	__asm { push 3 }
	__asm { call fn_004065c0 }
	__asm { push 0xf133e4 }
	__asm { push 4 }
	__asm { call fn_004065c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131cd38 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131ce58[];
extern "C" char g_0131ce88[];
extern "C" char g_0131ce8c[];
extern "C" char g_0131ce90[];
extern "C" char g_0131ce94[];
extern "C" char g_0131ce98[];
extern "C" char g_0131ce9c[];
extern "C" char g_0131cea0[];
extern "C" char g_0131cea4[];
extern "C" char g_0131cea8[];
extern "C" char g_0131ceac[];
extern "C" char g_0131ceb0[];
extern "C" char g_0131ceb4[];
extern "C" char g_0131ceb8[];
extern "C" char g_0131cebc[];
extern "C" char g_0131cec0[];
extern "C" char g_0131cec4[];
extern "C" char g_0131cec8[];
extern "C" char g_0131cecc[];
extern "C" char g_0131ced0[];
extern "C" char g_0131ced4[];
extern "C" char g_0131ced8[];
extern "C" char g_0131cedc[];
extern "C" void fn_00406fd0();
extern "C" void fn_00409860();
extern "C" void fn_007939d0();
// FUNCTION: ROBLOXSTUDIO 0x004046b0
extern "C" __declspec(naked) void asm_004046b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fc60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x12be580 }
	__asm { push 0xf133f0 }
	__asm { mov ecx, 0x131ce58 }
	__asm { mov dword ptr [ebp - 0x10], 0x131ce58 }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131ce58], 0xf14b84 }
	__asm { mov dword ptr [g_0131ce88], 0 }
	__asm { mov dword ptr [g_0131ce8c], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [g_0131ce88], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131ce90], 0 }
	__asm { mov dword ptr [g_0131ce94], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [g_0131ce90], eax }
	__asm { mov dword ptr [g_0131ce98], 0 }
	__asm { mov dword ptr [g_0131ce9c], 0 }
	__asm { mov dword ptr [g_0131cea0], 0 }
	__asm { mov dword ptr [g_0131cea4], 0 }
	__asm { mov dword ptr [g_0131cea8], 0 }
	__asm { mov dword ptr [g_0131ceac], 0 }
	__asm { mov dword ptr [g_0131ceb0], 0 }
	__asm { mov dword ptr [g_0131ceb4], 0 }
	__asm { mov dword ptr [g_0131ceb8], 0 }
	__asm { mov dword ptr [g_0131cebc], 0 }
	__asm { mov dword ptr [g_0131cec0], 0 }
	__asm { mov dword ptr [g_0131cec4], 0 }
	__asm { mov dword ptr [g_0131cec8], 0 }
	__asm { mov dword ptr [g_0131cecc], 0 }
	__asm { mov dword ptr [g_0131ced0], 0 }
	__asm { mov dword ptr [g_0131ced4], 0 }
	__asm { mov dword ptr [g_0131ced8], 0 }
	__asm { mov dword ptr [g_0131cedc], 0 }
	__asm { push 0xf13400 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00406fd0 }
	__asm { push 0xf1340c }
	__asm { push 1 }
	__asm { call fn_00406fd0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131ce58 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131cdc8[];
extern "C" char g_0131cdf8[];
extern "C" char g_0131cdfc[];
extern "C" char g_0131ce00[];
extern "C" char g_0131ce04[];
extern "C" char g_0131ce08[];
extern "C" char g_0131ce0c[];
extern "C" char g_0131ce10[];
extern "C" char g_0131ce14[];
extern "C" char g_0131ce18[];
extern "C" char g_0131ce1c[];
extern "C" char g_0131ce20[];
extern "C" char g_0131ce24[];
extern "C" char g_0131ce28[];
extern "C" char g_0131ce2c[];
extern "C" char g_0131ce30[];
extern "C" char g_0131ce34[];
extern "C" char g_0131ce38[];
extern "C" char g_0131ce3c[];
extern "C" char g_0131ce40[];
extern "C" char g_0131ce44[];
extern "C" char g_0131ce48[];
extern "C" char g_0131ce4c[];
extern "C" void fn_00406ac0();
extern "C" void fn_00409860();
extern "C" void fn_007939d0();
// FUNCTION: ROBLOXSTUDIO 0x00404850
extern "C" __declspec(naked) void asm_00404850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fc60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x12be54c }
	__asm { push 0xf13418 }
	__asm { mov ecx, 0x131cdc8 }
	__asm { mov dword ptr [ebp - 0x10], 0x131cdc8 }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131cdc8], 0xf14b6c }
	__asm { mov dword ptr [g_0131cdf8], 0 }
	__asm { mov dword ptr [g_0131cdfc], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [g_0131cdf8], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131ce00], 0 }
	__asm { mov dword ptr [g_0131ce04], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [g_0131ce00], eax }
	__asm { mov dword ptr [g_0131ce08], 0 }
	__asm { mov dword ptr [g_0131ce0c], 0 }
	__asm { mov dword ptr [g_0131ce10], 0 }
	__asm { mov dword ptr [g_0131ce14], 0 }
	__asm { mov dword ptr [g_0131ce18], 0 }
	__asm { mov dword ptr [g_0131ce1c], 0 }
	__asm { mov dword ptr [g_0131ce20], 0 }
	__asm { mov dword ptr [g_0131ce24], 0 }
	__asm { mov dword ptr [g_0131ce28], 0 }
	__asm { mov dword ptr [g_0131ce2c], 0 }
	__asm { mov dword ptr [g_0131ce30], 0 }
	__asm { mov dword ptr [g_0131ce34], 0 }
	__asm { mov dword ptr [g_0131ce38], 0 }
	__asm { mov dword ptr [g_0131ce3c], 0 }
	__asm { mov dword ptr [g_0131ce40], 0 }
	__asm { mov dword ptr [g_0131ce44], 0 }
	__asm { mov dword ptr [g_0131ce48], 0 }
	__asm { mov dword ptr [g_0131ce4c], 0 }
	__asm { push 0xf13400 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00406ac0 }
	__asm { push 0xf1340c }
	__asm { push 1 }
	__asm { call fn_00406ac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131cdc8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131cee8[];
extern "C" char g_0131cf18[];
extern "C" char g_0131cf1c[];
extern "C" char g_0131cf20[];
extern "C" char g_0131cf24[];
extern "C" char g_0131cf28[];
extern "C" char g_0131cf2c[];
extern "C" char g_0131cf30[];
extern "C" char g_0131cf34[];
extern "C" char g_0131cf38[];
extern "C" char g_0131cf3c[];
extern "C" char g_0131cf40[];
extern "C" char g_0131cf44[];
extern "C" char g_0131cf48[];
extern "C" char g_0131cf4c[];
extern "C" char g_0131cf50[];
extern "C" char g_0131cf54[];
extern "C" char g_0131cf58[];
extern "C" char g_0131cf5c[];
extern "C" char g_0131cf60[];
extern "C" char g_0131cf64[];
extern "C" char g_0131cf68[];
extern "C" char g_0131cf6c[];
extern "C" void fn_004074d0();
extern "C" void fn_00409860();
extern "C" void fn_007939d0();
// FUNCTION: ROBLOXSTUDIO 0x004049f0
extern "C" __declspec(naked) void asm_004049f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fc60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x12be520 }
	__asm { push 0xf1342c }
	__asm { mov ecx, 0x131cee8 }
	__asm { mov dword ptr [ebp - 0x10], 0x131cee8 }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131cee8], 0xf14b54 }
	__asm { mov dword ptr [g_0131cf18], 0 }
	__asm { mov dword ptr [g_0131cf1c], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [g_0131cf18], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131cf20], 0 }
	__asm { mov dword ptr [g_0131cf24], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [g_0131cf20], eax }
	__asm { mov dword ptr [g_0131cf28], 0 }
	__asm { mov dword ptr [g_0131cf2c], 0 }
	__asm { mov dword ptr [g_0131cf30], 0 }
	__asm { mov dword ptr [g_0131cf34], 0 }
	__asm { mov dword ptr [g_0131cf38], 0 }
	__asm { mov dword ptr [g_0131cf3c], 0 }
	__asm { mov dword ptr [g_0131cf40], 0 }
	__asm { mov dword ptr [g_0131cf44], 0 }
	__asm { mov dword ptr [g_0131cf48], 0 }
	__asm { mov dword ptr [g_0131cf4c], 0 }
	__asm { mov dword ptr [g_0131cf50], 0 }
	__asm { mov dword ptr [g_0131cf54], 0 }
	__asm { mov dword ptr [g_0131cf58], 0 }
	__asm { mov dword ptr [g_0131cf5c], 0 }
	__asm { mov dword ptr [g_0131cf60], 0 }
	__asm { mov dword ptr [g_0131cf64], 0 }
	__asm { mov dword ptr [g_0131cf68], 0 }
	__asm { mov dword ptr [g_0131cf6c], 0 }
	__asm { push 0xf13434 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_004074d0 }
	__asm { push 0xf13440 }
	__asm { push 1 }
	__asm { call fn_004074d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131cee8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10500[];
extern "C" void fn_004089b0();
// FUNCTION: ROBLOXSTUDIO 0x00407f00
extern "C" __declspec(naked) void asm_00407f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx] }
	__asm { mov edx, eax }
	__asm { sub edx, edi }
	__asm { sar edx, 2 }
	__asm { cmp edx, esi }
	__asm { jbe L_00407f57 }
	__asm { lea esi, [edi + esi*4] }
	__asm { cmp esi, edi }
	__asm { jne L_00407f2c }
	__asm { mov dword ptr [ebx + 4], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00407f2c: }
	__asm { cmp esi, eax }
	__asm { je L_00407f69 }
	__asm { mov ecx, eax }
	__asm { sub ecx, eax }
	__asm { sar ecx, 2 }
	__asm { lea edi, [ecx*4] }
	__asm { push edi }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { lea eax, [edi + esi] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00407f57: }
	__asm { jae L_00407f69 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { sub esi, edx }
	__asm { push esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004089b0 }
	__asm { L_00407f69: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00408bb0();
extern "C" void fn_00408c40();
extern "C" void fn_0040d1d0();
// FUNCTION: ROBLOXSTUDIO 0x00407f70
extern "C" __declspec(naked) void asm_00407f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, 0x2aaaaaab }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov edx, esi }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { imul edx }
	__asm { sar edx, 2 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { cmp ecx, ebx }
	__asm { jbe L_00407fb9 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { lea eax, [ebx + ebx*2] }
	__asm { push esi }
	__asm { lea eax, [ecx + eax*8] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00408bb0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00407fb9: }
	__asm { jae L_0040801f }
	__asm { mov eax, ebx }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00408c40 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, edi }
	__asm { sub ecx, dword ptr [eax] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 2 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov ecx, ebx }
	__asm { sub ecx, esi }
	__asm { push ecx }
	__asm { push edi }
	__asm { call fn_0040d1d0 }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [edi] }
	__asm { add esp, 0x14 }
	__asm { imul ecx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { sub ebx, eax }
	__asm { lea eax, [ebx + ebx*2] }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { L_0040801f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a294[];
extern "C" char g_0131a298[];
extern "C" char g_0131a2e0[];
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00408110
extern "C" __declspec(naked) void asm_00408110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6f9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00408175 }
	__asm { cmp dword ptr [g_0131a2e0], 0x29a }
	__asm { je L_00408175 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00408164 }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00408175 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00408164: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00408175: }
	__asm { push 0x40d200 }
	__asm { push 0x131a2b0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131a298] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004081bf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a298], eax }
	__asm { push 0xf14bd0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131a294], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004081bf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131a294] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00408320
extern "C" __declspec(naked) void asm_00408320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_004083be }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jge L_00408372 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0040835d }
	__asm { push 0x10d }
	__asm { push 0xf14788 }
	__asm { push 0xf1477c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00408372 }
	__asm { L_0040835d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf14420 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00408372: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_004083be }
	__asm { mov eax, dword ptr [edi + 0x5c] }
	__asm { sub eax, dword ptr [edi + 0x58] }
	__asm { sar eax, 2 }
	__asm { cmp dword ptr [esi], eax }
	__asm { jb L_004083be }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_004083a9 }
	__asm { push 0x10e }
	__asm { push 0xf14788 }
	__asm { push 0xf14504 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004083be }
	__asm { L_004083a9: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf143a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004083be: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { jns L_004083cc }
	__asm { L_004083c4: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004083cc: }
	__asm { mov edx, dword ptr [edi + 0x58] }
	__asm { mov eax, dword ptr [edi + 0x5c] }
	__asm { sub eax, edx }
	__asm { sar eax, 2 }
	__asm { cmp ecx, eax }
	__asm { jae L_004083c4 }
	__asm { mov eax, dword ptr [edx + ecx*4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408d90();
// FUNCTION: ROBLOXSTUDIO 0x004083f0
extern "C" __declspec(naked) void asm_004083f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0x30] }
	__asm { mov edx, edi }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0040841b }
	__asm { L_00408407: }
	__asm { cmp dword ptr [eax + 0x10], esi }
	__asm { jae L_00408411 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_00408415 }
	__asm { L_00408411: }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00408415: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00408407 }
	__asm { L_0040841b: }
	__asm { cmp edx, edi }
	__asm { je L_00408427 }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { cmp esi, dword ptr [edx + 0x10] }
	__asm { jae L_0040842a }
	__asm { L_00408427: }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { L_0040842a: }
	__asm { lea eax, [ebp - 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, edi }
	__asm { je L_00408445 }
	__asm { L_00408433: }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00408445: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea esi, [ecx + 0x38] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408d90 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { jne L_00408433 }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10500[];
extern "C" void fn_00408e50();
// FUNCTION: ROBLOXSTUDIO 0x00408580
extern "C" __declspec(naked) void asm_00408580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx] }
	__asm { mov edx, eax }
	__asm { sub edx, edi }
	__asm { sar edx, 2 }
	__asm { cmp edx, esi }
	__asm { jbe L_004085d7 }
	__asm { lea esi, [edi + esi*4] }
	__asm { cmp esi, edi }
	__asm { jne L_004085ac }
	__asm { mov dword ptr [ebx + 4], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004085ac: }
	__asm { cmp esi, eax }
	__asm { je L_004085e9 }
	__asm { mov ecx, eax }
	__asm { sub ecx, eax }
	__asm { sar ecx, 2 }
	__asm { lea edi, [ecx*4] }
	__asm { push edi }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { lea eax, [edi + esi] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004085d7: }
	__asm { jae L_004085e9 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { sub esi, edx }
	__asm { push esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00408e50 }
	__asm { L_004085e9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00409230();
// FUNCTION: ROBLOXSTUDIO 0x004088d0
extern "C" __declspec(naked) void asm_004088d0()
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
	__asm { jae L_0040893d }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0x3fffffff }
	__asm { sar esi, 2 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00408907 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00408907: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { pop ebx }
	__asm { jae L_0040892b }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_00409230 }
	__asm { L_0040892b: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_00409230 }
	__asm { L_0040893d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0040d480();
extern "C" void fn_00412ce0();
// FUNCTION: ROBLOXSTUDIO 0x00408bb0
extern "C" __declspec(naked) void asm_00408bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, ecx }
	__asm { jne L_00408bf1 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { cmp edx, esi }
	__asm { jne L_00408bf1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push esi }
	__asm { push ecx }
	__asm { call fn_00412ce0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00408bf1: }
	__asm { cmp eax, edx }
	__asm { je L_00408c2a }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push edx }
	__asm { call fn_0040d480 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_00412ce0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x20 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00408c2a: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10260[];
extern "C" void fn_00409330();
// FUNCTION: ROBLOXSTUDIO 0x00408c40
extern "C" __declspec(naked) void asm_00408c40()
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
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_00408cdb }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul esi }
	__asm { sar edx, 2 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0xaaaaaaa }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00408c91 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00408c91: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ebx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0xaaaaaaa }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_00408cc8 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00409330 }
	__asm { L_00408cc8: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00409330 }
	__asm { L_00408cdb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10500[];
extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00409230
extern "C" __declspec(naked) void asm_00409230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test ebx, ebx }
	__asm { je L_00409266 }
	__asm { cmp ebx, 0x3fffffff }
	__asm { ja L_00409260 }
	__asm { lea eax, [ebx*4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { jne L_00409266 }
	__asm { L_00409260: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00409266: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ecx }
	__asm { and eax, 0xfffffffc }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ecx }
	__asm { sar eax, 2 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test ecx, ecx }
	__asm { je L_00409297 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00409297: }
	__asm { lea eax, [esi + ebx*4] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" void fn_0040def0();
extern "C" void fn_00412ce0();
// FUNCTION: ROBLOXSTUDIO 0x00409330
extern "C" __declspec(naked) void asm_00409330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov ebx, ecx }
	__asm { test esi, esi }
	__asm { je L_00409366 }
	__asm { cmp esi, 0xaaaaaaa }
	__asm { ja L_00409360 }
	__asm { lea eax, [esi + esi*2] }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { jne L_00409366 }
	__asm { L_00409360: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00409366: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push edi }
	__asm { push dword ptr [ebx + 4] }
	__asm { push dword ptr [ebx] }
	__asm { call fn_0040def0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { sar edx, 2 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test eax, eax }
	__asm { je L_004093ba }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 4] }
	__asm { push eax }
	__asm { call fn_00412ce0 }
	__asm { push dword ptr [ebx] }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 0x14 }
	__asm { L_004093ba: }
	__asm { lea eax, [esi + esi*2] }
	__asm { mov dword ptr [ebx], edi }
	__asm { lea eax, [edi + eax*8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { lea eax, [ecx + ecx*2] }
	__asm { lea eax, [edi + eax*8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01319538[];
extern "C" void fn_00408030();
extern "C" void fn_0040c170();
extern "C" void fn_0040cbd0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0040ad90
extern "C" __declspec(naked) void asm_0040ad90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f918 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x14], 0x1319538 }
	__asm { call fn_0040cbd0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { push 0xf131bc }
	__asm { push 0xf131ec }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00408030 }
	__asm { push eax }
	__asm { mov ecx, 0x1319538 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0040c170 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_01319538], 0xf14074 }
	__asm { je L_0040ae87 }
	__asm { push 0x12be098 }
	__asm { mov ecx, 0x12be098 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0040ae87 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0040ae72 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0040ae87 }
	__asm { L_0040ae72: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0040ae87: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x1319538 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00408030();
extern "C" void fn_0040ba00();
extern "C" void fn_0040cc40();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0040aea0
extern "C" __declspec(naked) void asm_0040aea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f918 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_0040cc40 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00408030 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0040ba00 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [esi], 0xf14038 }
	__asm { je L_0040af8a }
	__asm { push 0x12be098 }
	__asm { mov ecx, 0x12be098 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0040af8a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0040af75 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0040af8a }
	__asm { L_0040af75: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0040af8a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00408030();
extern "C" void fn_0040bb80();
extern "C" void fn_0040cd20();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0040b180
extern "C" __declspec(naked) void asm_0040b180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f918 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_0040cd20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { push 0xf13260 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00408030 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0040bb80 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [esi], 0xf13fa8 }
	__asm { je L_0040b26c }
	__asm { push 0x12be098 }
	__asm { mov ecx, 0x12be098 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0040b26c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0040b257 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0040b26c }
	__asm { L_0040b257: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0040b26c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01319784[];
extern "C" void fn_00408030();
extern "C" void fn_0040bac0();
extern "C" void fn_0040ce00();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0040b450
extern "C" __declspec(naked) void asm_0040b450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f918 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x14], 0x1319784 }
	__asm { call fn_0040ce00 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { push 0xf13320 }
	__asm { push 0xf13334 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00408030 }
	__asm { push eax }
	__asm { mov ecx, 0x1319784 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0040bac0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_01319784], 0xf13f18 }
	__asm { je L_0040b547 }
	__asm { push 0x12be098 }
	__asm { mov ecx, 0x12be098 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0040b547 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0040b532 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0040b547 }
	__asm { L_0040b532: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0040b547: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x1319784 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10504[];
extern "C" void fn_00404b90();
extern "C" void fn_0040d830();
extern "C" void fn_0040e0a0();
// FUNCTION: ROBLOXSTUDIO 0x0040b560
extern "C" __declspec(naked) void asm_0040b560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd77f66 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0x160 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0040b5b4 }
	__asm { mov ecx, eax }
	__asm { call fn_00404b90 }
	__asm { mov edi, eax }
	__asm { jmp L_0040b5b6 }
	__asm { L_0040b5b4: }
	__asm { xor edi, edi }
	__asm { L_0040b5b6: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [esi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [esi], edi }
	__asm { call fn_0040d830 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0040b5e4 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0040b5e4 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0040e0a0 }
	__asm { L_0040b5e4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131cb08[];
extern "C" char g_0131cb0c[];
extern "C" char g_0131cb18[];
extern "C" char g_0131cb1c[];
extern "C" char g_0131cb20[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_007cb490();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x0040b600
extern "C" __declspec(naked) void asm_0040b600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f948 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x1c], 0 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { mov ecx, 0x131cb08 }
	__asm { push 0xf12f58 }
	__asm { mov dword ptr [ebp - 0x10], 0xf12f58 }
	__asm { mov dword ptr [ebp - 0x14], 0x131cb08 }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push eax }
	__asm { mov dword ptr [g_0131cb08], 0xe51be0 }
	__asm { mov dword ptr [g_0131cb18], 0x12be060 }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [g_0131cb1c], esi }
	__asm { mov word ptr [g_0131cb20], 0 }
	__asm { mov word ptr [g_0131cb0c], 1 }
	__asm { je L_0040b6c8 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, esi }
	__asm { jne L_0040b6c8 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0040b6b3 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0040b6c8 }
	__asm { L_0040b6b3: }
	__asm { movzx ecx, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push ecx }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0040b6c8: }
	__asm { mov ecx, 0x131cb08 }
	__asm { call fn_00825770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131cb08 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_00e1230c[];
extern "C" void fn_00409b80();
extern "C" void fn_0040c7b0();
// FUNCTION: ROBLOXSTUDIO 0x0040b6f0
extern "C" __declspec(naked) void asm_0040b6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fb52 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be060 }
	__asm { je L_0040b7aa }
	__asm { push eax }
	__asm { mov ecx, 0x12be060 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0040b7aa }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x58], eax }
	__asm { mov dword ptr [ebp - 0x54], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0040b758 }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0040b758: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00409b80 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1230c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test ecx, ecx }
	__asm { je L_0040b797 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0040b797: }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040b7aa: }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_0040c7b0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1230c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131cb28[];
extern "C" char g_0131cb2c[];
extern "C" char g_0131cb38[];
extern "C" char g_0131cb3c[];
extern "C" char g_0131cb40[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_007cb490();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x0040b7d0
extern "C" __declspec(naked) void asm_0040b7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f948 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x1c], 0 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { mov ecx, 0x131cb28 }
	__asm { push 0xf12f60 }
	__asm { mov dword ptr [ebp - 0x10], 0xf12f60 }
	__asm { mov dword ptr [ebp - 0x14], 0x131cb28 }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push eax }
	__asm { mov dword ptr [g_0131cb28], 0xe51be0 }
	__asm { mov dword ptr [g_0131cb38], 0x12be04c }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [g_0131cb3c], esi }
	__asm { mov word ptr [g_0131cb40], 0 }
	__asm { mov word ptr [g_0131cb2c], 1 }
	__asm { je L_0040b898 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, esi }
	__asm { jne L_0040b898 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0040b883 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0040b898 }
	__asm { L_0040b883: }
	__asm { movzx ecx, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push ecx }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0040b898: }
	__asm { mov ecx, 0x131cb28 }
	__asm { call fn_00825770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131cb28 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_00e11078[];
extern "C" void fn_00409d60();
extern "C" void fn_0040e010();
// FUNCTION: ROBLOXSTUDIO 0x0040b8c0
extern "C" __declspec(naked) void asm_0040b8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fb22 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be04c }
	__asm { je L_0040b97a }
	__asm { push eax }
	__asm { mov ecx, 0x12be04c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0040b97a }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0040b928 }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0040b928: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00409d60 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11078] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test ecx, ecx }
	__asm { je L_0040b967 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0040b967: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040b97a: }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_0040e010 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11078] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00793ca0();
extern "C" void fn_007d5d30();
// FUNCTION: ROBLOXSTUDIO 0x0040ba00
extern "C" __declspec(naked) void asm_0040ba00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fcbb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5d30 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00793ca0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi], 0xe52310 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_0040ba97 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0040ba86 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_0040ba86: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0040ba97 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_0040ba97: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00793ca0();
extern "C" void fn_007d5390();
// FUNCTION: ROBLOXSTUDIO 0x0040bac0
extern "C" __declspec(naked) void asm_0040bac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fcbb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5390 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00793ca0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi], 0xe523d8 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_0040bb57 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0040bb46 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_0040bb46: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0040bb57 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_0040bb57: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00793ca0();
extern "C" void fn_007d5470();
// FUNCTION: ROBLOXSTUDIO 0x0040bb80
extern "C" __declspec(naked) void asm_0040bb80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fcbb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5470 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00793ca0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi], 0xe56454 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_0040bc17 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0040bc06 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_0040bc06: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0040bc17 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_0040bc17: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00793ca0();
extern "C" void fn_007d5860();
// FUNCTION: ROBLOXSTUDIO 0x0040bc40
extern "C" __declspec(naked) void asm_0040bc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fcbb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5860 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00793ca0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi], 0xe62184 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_0040bcd7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0040bcc6 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_0040bcc6: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0040bcd7 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_0040bcd7: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131a2e0[];
extern "C" char g_0131cf70[];
extern "C" void fn_00408110();
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0040bf60
extern "C" __declspec(naked) void asm_0040bf60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [g_0131cf70], 0xf13eb8 }
	__asm { test al, al }
	__asm { je L_0040bfd2 }
	__asm { cmp dword ptr [g_0131a2e0], 0x29a }
	__asm { je L_0040bfd2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0040bfc1 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0040bfd2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0040bfc1: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0040bfd2: }
	__asm { call fn_00408110 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0040c029 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0040c029: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00f13b9c[];
extern "C" char g_01319158[];
extern "C" char g_01319174[];
extern "C" char g_01319180[];
extern "C" char g_0131cb04[];
extern "C" char g_0131cb08[];
extern "C" void fn_0040b600();
extern "C" void fn_00793ca0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0040c060
extern "C" __declspec(naked) void asm_0040c060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fd39 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [g_0131cb04] }
	__asm { mov dword ptr [ebp - 0x10], 0x1319158 }
	__asm { test al, 1 }
	__asm { jne L_0040c0bf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cb04], eax }
	__asm { sub esp, 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0040b600 }
	__asm { push 0xddb940 }
	__asm { mov dword ptr [g_0131cb08], 0xf148b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_0040c0bf: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0xf12f70 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push 0xf1303c }
	__asm { push 0x131cb08 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, 0x1319158 }
	__asm { call fn_00793ca0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [g_01319158], 0xf13b94 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [g_01319180], eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_0040c147 }
	__asm { mov ecx, 0x1319158 }
	__asm { call dword ptr [g_00f13b9c] }
	__asm { test al, al }
	__asm { je L_0040c12d }
	__asm { and dword ptr [g_01319174], 0xffffffeb }
	__asm { L_0040c12d: }
	__asm { mov eax, dword ptr [g_01319158] }
	__asm { mov ecx, 0x1319158 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0040c147 }
	__asm { and dword ptr [g_01319174], 0xfffffff3 }
	__asm { L_0040c147: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, 0x1319158 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10508[];
extern "C" char g_0131cb24[];
extern "C" char g_0131cb28[];
extern "C" void fn_0040b7d0();
extern "C" void fn_00793ca0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0040c170
extern "C" __declspec(naked) void asm_0040c170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fcf9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [g_0131cb24] }
	__asm { test al, 1 }
	__asm { jne L_0040c1ce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cb24], eax }
	__asm { sub esp, 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0040b7d0 }
	__asm { push 0xddb950 }
	__asm { mov dword ptr [g_0131cb28], 0xf148a8 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_0040c1ce: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push 0x131cb28 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, esi }
	__asm { call fn_00793ca0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], 0xf13b58 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_0040c23b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0040c22a }
	__asm { and dword ptr [esi + 0x1c], 0xffffffeb }
	__asm { L_0040c22a: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0040c23b }
	__asm { and dword ptr [esi + 0x1c], 0xfffffff3 }
	__asm { L_0040c23b: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00403540();
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x0040c5b0
extern "C" __declspec(naked) void asm_0040c5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d4e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_0040c5e1 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040c5e6 }
	__asm { L_0040c5e1: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040c5e6: }
	__asm { cmp ecx, 0x12be0b8 }
	__asm { je L_0040c62f }
	__asm { test eax, eax }
	__asm { je L_0040c5f6 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040c5fb }
	__asm { L_0040c5f6: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040c5fb: }
	__asm { push 0x12be0b8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0040c62f }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0040c62f: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12304[];
extern "C" char g_00e1230c[];
extern "C" char g_0131a284[];
extern "C" char g_0131a288[];
extern "C" char g_0131a28c[];
extern "C" char g_0131a290[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0040c670
extern "C" __declspec(naked) void asm_0040c670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6f971 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131a290] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0040c6ca }
	__asm { or eax, 1 }
	__asm { push 0xddc0a0 }
	__asm { mov dword ptr [g_0131a290], eax }
	__asm { mov dword ptr [g_0131a284], 0x12be060 }
	__asm { mov dword ptr [g_0131a28c], 0x40d750 }
	__asm { mov dword ptr [g_0131a288], 0x40d7a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0040c6ca: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131a284 }
	__asm { jne L_0040c6f3 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { call dword ptr [g_00e12304] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040c6f3: }
	__asm { test ecx, ecx }
	__asm { je L_0040c709 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0040c709: }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0040c726 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e1230c] }
	__asm { L_0040c726: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0x131a284 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11054[];
extern "C" char g_00e11078[];
extern "C" char g_0131a274[];
extern "C" char g_0131a278[];
extern "C" char g_0131a27c[];
extern "C" char g_0131a280[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0040c840
extern "C" __declspec(naked) void asm_0040c840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6f971 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131a280] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0040c89a }
	__asm { or eax, 1 }
	__asm { push 0xddc090 }
	__asm { mov dword ptr [g_0131a280], eax }
	__asm { mov dword ptr [g_0131a274], 0x12be04c }
	__asm { mov dword ptr [g_0131a27c], 0x40d7b0 }
	__asm { mov dword ptr [g_0131a278], 0x40d800 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0040c89a: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131a274 }
	__asm { jne L_0040c8c3 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { call dword ptr [g_00e11054] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040c8c3: }
	__asm { test ecx, ecx }
	__asm { je L_0040c8d9 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0040c8d9: }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0040c8f6 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e11078] }
	__asm { L_0040c8f6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0x131a274 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0040d480
extern "C" __declspec(naked) void asm_0040d480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, ebx }
	__asm { je L_0040d50b }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { L_0040d493: }
	__asm { cmp edi, esi }
	__asm { je L_0040d4fa }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_0040d4a8 }
	__asm { push dword ptr [edi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0040d4a8: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_0040d4d3 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_0040d4dd }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_0040d4dd }
	__asm { L_0040d4d3: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0040d4dd: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_0040d4fa: }
	__asm { add esi, 0x18 }
	__asm { add edi, 0x18 }
	__asm { cmp esi, ebx }
	__asm { jne L_0040d493 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0040d50b: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_0040d6f0();
extern "C" void fn_0040db90();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0040dd60
extern "C" __declspec(naked) void asm_0040dd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f9b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ebx, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov dl, 1 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov edi, ebx }
	__asm { mov byte ptr [ebp - 0x18], dl }
	__asm { jne L_0040ddc1 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_0040dda2: }
	__asm { cmp ecx, dword ptr [eax + 0x10] }
	__asm { mov edi, eax }
	__asm { setb dl }
	__asm { mov byte ptr [ebp - 0x18], dl }
	__asm { test dl, dl }
	__asm { je L_0040ddb5 }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp L_0040ddb8 }
	__asm { L_0040ddb5: }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { L_0040ddb8: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0040dda2 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { L_0040ddc1: }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test dl, dl }
	__asm { je L_0040de07 }
	__asm { cmp edi, dword ptr [ebx] }
	__asm { jne L_0040ddfc }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 1 }
	__asm { L_0040ddd5: }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0040db90 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_0040ddfc: }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_0040d6f0 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_0040de07: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jae L_0040de33 }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push edi }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { jmp L_0040ddd5 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0040de33: }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x0040def0
extern "C" __declspec(naked) void asm_0040def0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, ebx }
	__asm { je L_0040df73 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { add esi, 0x10 }
	__asm { L_0040df06: }
	__asm { test edi, edi }
	__asm { je L_0040df5f }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 4], 0x10 }
	__asm { jae L_0040df37 }
	__asm { mov eax, dword ptr [esi] }
	__asm { inc eax }
	__asm { je L_0040df43 }
	__asm { push eax }
	__asm { lea eax, [esi - 0x10] }
	__asm { push eax }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_0040df43 }
	__asm { L_0040df37: }
	__asm { mov eax, dword ptr [esi - 0x10] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi - 0x10], 0 }
	__asm { L_0040df43: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 4], 0xf }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov byte ptr [esi - 0x10], 0 }
	__asm { L_0040df5f: }
	__asm { add esi, 0x18 }
	__asm { add edi, 0x18 }
	__asm { lea ecx, [esi - 0x10] }
	__asm { cmp ecx, ebx }
	__asm { jne L_0040df06 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0040df73: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" void fn_0040e210();
extern "C" void fn_007d29a0();
// FUNCTION: ROBLOXSTUDIO 0x0040e2a0
extern "C" __declspec(naked) void asm_0040e2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79538 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12bdba8 }
	__asm { je L_0040e356 }
	__asm { push eax }
	__asm { mov ecx, 0x12bdba8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0040e356 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0040e301 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0040e301: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d29a0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { fstp dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0040e343 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0040e343: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040e356: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_0040e210 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { pop esi }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131a234[];
extern "C" char g_0131a238[];
extern "C" char g_0131a23c[];
extern "C" char g_0131a240[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0040e3e0
extern "C" __declspec(naked) void asm_0040e3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131a234] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0040e422 }
	__asm { or eax, 1 }
	__asm { push 0xddc0b0 }
	__asm { mov dword ptr [g_0131a234], eax }
	__asm { mov dword ptr [g_0131a238], 0x12bdba8 }
	__asm { mov dword ptr [g_0131a240], 0x40e3c0 }
	__asm { mov dword ptr [g_0131a23c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0040e422: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131a238 }
	__asm { jne L_0040e447 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi + 4] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 8] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040e447: }
	__asm { test ecx, ecx }
	__asm { je L_0040e45d }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0040e45d: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0040e477 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { L_0040e477: }
	__asm { mov dword ptr [esi], 0x131a238 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040eab0();
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0040e800
extern "C" __declspec(naked) void asm_0040e800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70170 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x4c }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0040e8ca }
	__asm { mov dword ptr [esi + 0x40], 0xf138c8 }
	__asm { add edi, -0x48 }
	__asm { mov dword ptr [esi + 0x48], 0xe1822c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_0040eab0 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [esi], 0xe32f28 }
	__asm { lea edx, [esi + 0x2c] }
	__asm { mov dword ptr [edx], 0xe32f34 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x40], 0xe32f3c }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x3c], eax }
	__asm { test edi, edi }
	__asm { je L_0040e8a3 }
	__asm { lea eax, [edi + 0x2c] }
	__asm { jmp L_0040e8a5 }
	__asm { L_0040e8a3: }
	__asm { xor eax, eax }
	__asm { L_0040e8a5: }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_00411c20 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { add esp, 8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add eax, 0x40 }
	__asm { pop edi }
	__asm { add eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0040e8ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0040eab0
extern "C" __declspec(naked) void asm_0040eab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fe60 }
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
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe1823c }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { lea ecx, [esi + 0x14] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov dword ptr [esi], 0xe32dec }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x2c], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [esi + 0x30], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0040eb37 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0040eb37: }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov dword ptr [esi], 0xe32f14 }
	__asm { mov dword ptr [esi + 0x2c], 0xe32f20 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040f410();
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0040f160
extern "C" __declspec(naked) void asm_0040f160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd701b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x4c }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0040f22a }
	__asm { mov dword ptr [esi + 0x40], 0xf138c8 }
	__asm { add edi, -0x48 }
	__asm { mov dword ptr [esi + 0x48], 0xe1822c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_0040f410 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [esi], 0xe18364 }
	__asm { lea edx, [esi + 0x2c] }
	__asm { mov dword ptr [edx], 0xe18370 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x40], 0xe18378 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x3c], eax }
	__asm { test edi, edi }
	__asm { je L_0040f203 }
	__asm { lea eax, [edi + 0x2c] }
	__asm { jmp L_0040f205 }
	__asm { L_0040f203: }
	__asm { xor eax, eax }
	__asm { L_0040f205: }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_00411c20 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { add esp, 8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add eax, 0x40 }
	__asm { pop edi }
	__asm { add eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0040f22a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0040f410
extern "C" __declspec(naked) void asm_0040f410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fe60 }
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
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe1823c }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { lea ecx, [esi + 0x14] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov dword ptr [esi], 0xe1826c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x2c], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [esi + 0x30], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0040f497 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0040f497: }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov dword ptr [esi], 0xe18350 }
	__asm { mov dword ptr [esi + 0x2c], 0xe1835c }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0040fbf0();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0040fcb0
extern "C" __declspec(naked) void asm_0040fcb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_0040fccc }
	__asm { lea eax, [edi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_0040fccc: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [esi], edi }
	__asm { test eax, eax }
	__asm { je L_0040fd18 }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_0040fce0 }
	__asm { add edi, -5 }
	__asm { jmp L_0040fce2 }
	__asm { L_0040fce0: }
	__asm { xor edi, edi }
	__asm { L_0040fce2: }
	__asm { push ebx }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0040fd0f }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0040fd0f }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0040fd0f: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040fd18: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0040fe60
extern "C" __declspec(naked) void asm_0040fe60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fd7c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0040feac }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0040feac: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe19198 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0040fece }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0040fed0 }
	__asm { L_0040fece: }
	__asm { xor edx, edx }
	__asm { L_0040fed0: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0040feee }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0040feee: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe19ba4 }
	__asm { mov dword ptr [ebx], 0xe19bb0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe19bb8 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0040ff37 }
	__asm { add edi, 0xc }
	__asm { jmp L_0040ff39 }
	__asm { L_0040ff37: }
	__asm { xor edi, edi }
	__asm { L_0040ff39: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x004100a0
extern "C" __declspec(naked) void asm_004100a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fd7c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_004100ec }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_004100ec: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe19198 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0041010e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_00410110 }
	__asm { L_0041010e: }
	__asm { xor edx, edx }
	__asm { L_00410110: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0041012e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0041012e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe19ba4 }
	__asm { mov dword ptr [ebx], 0xe19bb0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe19bb8 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_00410177 }
	__asm { add edi, 0xc }
	__asm { jmp L_00410179 }
	__asm { L_00410177: }
	__asm { xor edi, edi }
	__asm { L_00410179: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00410230
extern "C" __declspec(naked) void asm_00410230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd704e1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf139e8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe19198 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00410293 }
	__asm { add esi, 0xc }
	__asm { jmp L_00410295 }
	__asm { L_00410293: }
	__asm { xor esi, esi }
	__asm { L_00410295: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_004102ab }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_004102ab: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe19ba4 }
	__asm { mov dword ptr [ebp - 0x30], 0xe19bb0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x1179c2c }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe19bb8 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00410350
extern "C" __declspec(naked) void asm_00410350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7dba4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0041039b }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0041039b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe19198 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_004103bd }
	__asm { add edi, 0xc }
	__asm { jmp L_004103bf }
	__asm { L_004103bd: }
	__asm { xor edi, edi }
	__asm { L_004103bf: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_004103d5 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_004103d5: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe19ba4 }
	__asm { mov dword ptr [esi + 0xc], 0xe19bb0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe19bb8 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" void fn_00410bb0();
extern "C" void fn_007d2bd0();
// FUNCTION: ROBLOXSTUDIO 0x00410c40
extern "C" __declspec(naked) void asm_00410c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79538 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12bdfcc }
	__asm { je L_00410ce1 }
	__asm { push eax }
	__asm { mov ecx, 0x12bdfcc }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00410ce1 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00410c9d }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00410c9d: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d2bd0 }
	__asm { mov bl, byte ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { test ecx, ecx }
	__asm { je L_00410ccf }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00410ccf: }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00410ce1: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_00410bb0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, byte ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1051c[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x004119d0
extern "C" __declspec(naked) void asm_004119d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fdbc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00411a1c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00411a1c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1051c] }
	__asm { mov dword ptr [esi], 0xe4fb48 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00411a3e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_00411a40 }
	__asm { L_00411a3e: }
	__asm { xor edx, edx }
	__asm { L_00411a40: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00411a5e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00411a5e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe4fd68 }
	__asm { mov dword ptr [ebx], 0xe4fd74 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe4fd7c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_00411aa7 }
	__asm { add edi, 0xc }
	__asm { jmp L_00411aa9 }
	__asm { L_00411aa7: }
	__asm { xor edi, edi }
	__asm { L_00411aa9: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00411c20
extern "C" __declspec(naked) void asm_00411c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70260 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00411c8a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test esi, esi }
	__asm { je L_00411c6b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00411c6b: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00411c8a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { L_00411c8a: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00411cb8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00411cb8 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { L_00411cb8: }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { test esi, esi }
	__asm { je L_00411cc6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00411cc6: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00411cd8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { L_00411cd8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1051c[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x00411cf0
extern "C" __declspec(naked) void asm_00411cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fdbc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00411d3c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00411d3c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1051c] }
	__asm { mov dword ptr [esi], 0xe4fb48 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00411d5e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_00411d60 }
	__asm { L_00411d5e: }
	__asm { xor edx, edx }
	__asm { L_00411d60: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00411d7e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_00411d7e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe4fd68 }
	__asm { mov dword ptr [ebx], 0xe4fd74 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe4fd7c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_00411dc7 }
	__asm { add edi, 0xc }
	__asm { jmp L_00411dc9 }
	__asm { L_00411dc7: }
	__asm { xor edi, edi }
	__asm { L_00411dc9: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1051c[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00411e80
extern "C" __declspec(naked) void asm_00411e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70511 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf139e8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e1051c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe4fb48 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00411ee3 }
	__asm { add esi, 0xc }
	__asm { jmp L_00411ee5 }
	__asm { L_00411ee3: }
	__asm { xor esi, esi }
	__asm { L_00411ee5: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00411efb }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00411efb: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe4fd68 }
	__asm { mov dword ptr [ebp - 0x30], 0xe4fd74 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x1179d04 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe4fd7c }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" char g_00e11110[];
extern "C" char g_00e1237c[];
extern "C" char g_00e12394[];
extern "C" char g_00e12398[];
extern "C" void fn_00412e70();
extern "C" void fn_00413670();
// FUNCTION: ROBLOXSTUDIO 0x004136a0
extern "C" __declspec(naked) void asm_004136a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70742 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [eax], 0x3000 }
	__asm { call dword ptr [g_00e12398] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x37 }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebx], 0x100305c }
	__asm { mov dword ptr [ebx + 8], 0x1003040 }
	__asm { call dword ptr [g_00e12394] }
	__asm { push ebx }
	__asm { lea ecx, [ebx + 0x14] }
	__asm { call fn_00412e70 }
	__asm { push ecx }
	__asm { mov edx, 0x10028c0 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call fn_00413670 }
	__asm { add esp, 4 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [ebx + 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1237c] }
	__asm { mov edi, dword ptr [g_00e110a8] }
	__asm { push 0 }
	__asm { push 0x1002c20 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push 0x1002c78 }
	__asm { call edi }
	__asm { mov esi, dword ptr [g_00e110ac] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x28] }
	__asm { call esi }
	__asm { add esp, 0x14 }
	__asm { push 0 }
	__asm { push 0x1002cd0 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push 0x1002d28 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x2c] }
	__asm { call esi }
	__asm { add esp, 0x14 }
	__asm { push 0 }
	__asm { push 0x1002d80 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push 0x1002dd8 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x30] }
	__asm { call esi }
	__asm { add esp, 0x14 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10c34[];
extern "C" char g_00e10c38[];
extern "C" char g_00e10c3c[];
extern "C" char g_0131eb70[];
extern "C" char g_0131eb88[];
extern "C" char g_0131eba0[];
extern "C" void fn_00413920();
extern "C" void fn_00414df0();
extern "C" void fn_0049a4b0();
extern "C" void fn_004a4c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00413810
extern "C" __declspec(naked) void asm_00413810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7079c }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { sub esp, 0xc }
	__asm { test al, 1 }
	__asm { jne L_0041385c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0041385c: }
	__asm { cmp dword ptr [g_0131eba0], 0 }
	__asm { jne L_004138bf }
	__asm { mov eax, dword ptr [g_0131eb70] }
	__asm { test al, 1 }
	__asm { jne L_00413896 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb70], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0049a4b0 }
	__asm { push 0xddd670 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00413896: }
	__asm { mov ecx, 0x131eb74 }
	__asm { call dword ptr [g_00e10c3c] }
	__asm { test al, al }
	__asm { je L_004138bf }
	__asm { mov ecx, 0x131eb74 }
	__asm { call dword ptr [g_00e10c38] }
	__asm { mov ecx, 0x131eb74 }
	__asm { test eax, eax }
	__asm { jne L_004138cf }
	__asm { call dword ptr [g_00e10c34] }
	__asm { L_004138bf: }
	__asm { xor al, al }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004138cf: }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call dword ptr [g_00e10c34] }
	__asm { cmp esi, 1 }
	__asm { pop esi }
	__asm { jne L_004138bf }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call fn_00413920 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { setne bl }
	__asm { call fn_00414df0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131a570[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00414360();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00414760
extern "C" __declspec(naked) void asm_00414760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4ff34 }
	__asm { test al, al }
	__asm { je L_004147d1 }
	__asm { cmp dword ptr [g_0131a570], 0x29a }
	__asm { je L_004147d1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004147c0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004147d1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004147c0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004147d1: }
	__asm { mov ecx, esi }
	__asm { call fn_00414360 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0041482b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0041482b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00414ac0
extern "C" __declspec(naked) void asm_00414ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70841 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { L_00414af1: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp esi, ebx }
	__asm { je L_00414b3a }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test esi, esi }
	__asm { je L_00414b0c }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11108] }
	__asm { L_00414b0c: }
	__asm { add esi, 4 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { add edi, 4 }
	__asm { jmp L_00414af1 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp edi, esi }
	__asm { je L_00414b31 }
	__asm { L_00414b22: }
	__asm { sub edi, 4 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11110] }
	__asm { cmp edi, esi }
	__asm { jne L_00414b22 }
	__asm { L_00414b31: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00414b3a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e11024[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_00414b50();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00414cb0
extern "C" __declspec(naked) void asm_00414cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70772 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { cmp dword ptr [eax], 1 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { je L_00414d2c }
	__asm { push ecx }
	__asm { push 0x7fffffff }
	__asm { call fn_00414b50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00414d08 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { L_00414d08: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 0 }
	__asm { dec dword ptr [eax + 0xc] }
	__asm { call fn_00cf67ec }
	__asm { L_00414d2c: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 9 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xa }
	__asm { call dword ptr [g_00e11024] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e11110] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10ff4[];
extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x00414eb0
extern "C" __declspec(naked) void asm_00414eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7113d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10ff4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push 0x20 }
	__asm { mov dword ptr [esi], 0x1004a78 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_00414f16 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00422570 }
	__asm { jmp L_00414f18 }
	__asm { L_00414f16: }
	__asm { xor edi, edi }
	__asm { L_00414f18: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { test eax, eax }
	__asm { je L_00414f42 }
	__asm { test al, 1 }
	__asm { jne L_00414f42 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00414f42 }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00414f42: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e125e4[];
extern "C" char g_00e12674[];
extern "C" char g_00e12678[];
extern "C" char g_00e1267c[];
extern "C" char g_00e12680[];
// FUNCTION: ROBLOXSTUDIO 0x00416f90
extern "C" __declspec(naked) void asm_00416f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { movzx ecx, word ptr [eax + 8] }
	__asm { cmp ecx, 8 }
	__asm { jne L_00416fc1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12674] }
	__asm { cmp eax, 5 }
	__asm { jne L_0041702a }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { call dword ptr [g_00e12678] }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00416fc1: }
	__asm { cmp ecx, 6 }
	__asm { jne L_0041702a }
	__asm { mov ax, word ptr [eax + 0x14] }
	__asm { cmp ax, 0x13 }
	__asm { jne L_00416ff7 }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { mov esi, dword ptr [g_00e1267c] }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { jle L_0041702a }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { call esi }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { dec eax }
	__asm { push eax }
	__asm { call dword ptr [g_00e12680] }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00416ff7: }
	__asm { cmp ax, 0x15 }
	__asm { jne L_0041702a }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { call dword ptr [g_00e125e4] }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { lea esi, [eax - 1] }
	__asm { call dword ptr [g_00e1267c] }
	__asm { cmp eax, esi }
	__asm { jge L_0041702a }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { call dword ptr [g_00e1267c] }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { inc eax }
	__asm { push eax }
	__asm { call dword ptr [g_00e12680] }
	__asm { L_0041702a: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0041ace0();
extern "C" void fn_0041ae90();
extern "C" void fn_004226b0();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9e50();
// FUNCTION: ROBLOXSTUDIO 0x00418070
extern "C" __declspec(naked) void asm_00418070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd715a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x28] }
	__asm { call fn_006b9e50 }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_00418106 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00418106 }
	__asm { call fn_0041ace0 }
	__asm { test eax, eax }
	__asm { je L_00418106 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { push ecx }
	__asm { lea ecx, [esp + 0x10] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0x84] }
	__asm { mov dword ptr [esp + 0x18], 0x418120 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov dword ptr [esp + 0x20], esi }
	__asm { call fn_0041ae90 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x28] }
	__asm { mov dword ptr [esp + 0x30], 0 }
	__asm { call fn_006b9b80 }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00418106 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00418106: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12694[];
extern "C" char g_00e12790[];
extern "C" char g_00e12794[];
extern "C" char g_01320164[];
extern "C" void fn_004616c0();
extern "C" void fn_0057e360();
extern "C" void fn_00580ae0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004182f0
extern "C" __declspec(naked) void asm_004182f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { call dword ptr [g_00e12694] }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov edi, eax }
	__asm { test ecx, ecx }
	__asm { je L_00418383 }
	__asm { call dword ptr [g_00e12790] }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { push 0 }
	__asm { call dword ptr [g_00e12794] }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { test al, 1 }
	__asm { jne L_00418368 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00418368: }
	__asm { cmp byte ptr [esi + 0x34], 0 }
	__asm { mov ecx, 0x1320168 }
	__asm { sete al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push 1 }
	__asm { call fn_00580ae0 }
	__asm { mov byte ptr [esi + 0x34], 0 }
	__asm { L_00418383: }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { push edi }
	__asm { call fn_004616c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00419ef0();
// FUNCTION: ROBLOXSTUDIO 0x00419840
extern "C" __declspec(naked) void asm_00419840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_00419897 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_00419897 }
	__asm { sub edi, ecx }
	__asm { sar edi, 3 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_0041986a }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00419ef0 }
	__asm { L_0041986a: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { lea ecx, [eax + edi*8] }
	__asm { test edx, edx }
	__asm { je L_004198c3 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { add dword ptr [esi + 4], 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00419897: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_004198a5 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00419ef0 }
	__asm { L_004198a5: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_004198c3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_004198c3: }
	__asm { add dword ptr [esi + 4], 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00419fd0();
// FUNCTION: ROBLOXSTUDIO 0x00419970
extern "C" __declspec(naked) void asm_00419970()
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
	__asm { sar eax, 3 }
	__asm { cmp eax, edi }
	__asm { jae L_004199dd }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0x1fffffff }
	__asm { sar esi, 3 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_004199a7 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_004199a7: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { pop ebx }
	__asm { jae L_004199cb }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_00419fd0 }
	__asm { L_004199cb: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_00419fd0 }
	__asm { L_004199dd: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_0041a100();
// FUNCTION: ROBLOXSTUDIO 0x00419ef0
extern "C" __declspec(naked) void asm_00419ef0()
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
	__asm { sar eax, 3 }
	__asm { cmp eax, edi }
	__asm { jae L_00419f5d }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0x1fffffff }
	__asm { sar esi, 3 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00419f27 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00419f27: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { pop ebx }
	__asm { jae L_00419f4b }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_0041a100 }
	__asm { L_00419f4b: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_0041a100 }
	__asm { L_00419f5d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" void fn_0041fe80();
extern "C" void fn_00420c60();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00419fd0
extern "C" __declspec(naked) void asm_00419fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71390 }
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
	__asm { je L_0041a027 }
	__asm { cmp ebx, 0x1fffffff }
	__asm { ja L_0041a021 }
	__asm { lea eax, [ebx*8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_0041a027 }
	__asm { L_0041a021: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0041a027: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00420c60 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, edx }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { test ecx, ecx }
	__asm { je L_0041a078 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push edx }
	__asm { push ecx }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [edi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 0x14 }
	__asm { L_0041a078: }
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
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" void fn_0041a0c0();
extern "C" void fn_00420cb0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0041a100
extern "C" __declspec(naked) void asm_0041a100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd713a0 }
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
	__asm { je L_0041a157 }
	__asm { cmp ebx, 0x1fffffff }
	__asm { ja L_0041a151 }
	__asm { lea eax, [ebx*8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_0041a157 }
	__asm { L_0041a151: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0041a157: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00420cb0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, edx }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test ecx, ecx }
	__asm { je L_0041a1a3 }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_0041a0c0 }
	__asm { push dword ptr [edi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0041a1a3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + ebx*8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
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
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10fa4[];
extern "C" char g_00e10fdc[];
extern "C" char g_00e10ffc[];
extern "C" char g_01319814[];
extern "C" void fn_00419910();
extern "C" void fn_0041f150();
extern "C" void fn_0041f1f0();
// FUNCTION: ROBLOXSTUDIO 0x0041a370
extern "C" __declspec(naked) void asm_0041a370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8f509 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00419910 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, 0x1319814 }
	__asm { call fn_0041f150 }
	__asm { mov ecx, dword ptr [g_01319814] }
	__asm { mov edi, eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, ecx }
	__asm { jne L_0041a40f }
	__asm { call dword ptr [g_00e10fa4] }
	__asm { test al, al }
	__asm { je L_0041a3cd }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, 0x1319814 }
	__asm { call fn_0041f150 }
	__asm { mov edi, eax }
	__asm { L_0041a3cd: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call dword ptr [g_00e10fdc] }
	__asm { push edi }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_0041f1f0 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { lea esi, [eax + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0041a40f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { add eax, 0x10 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004149b0();
extern "C" void fn_00420390();
// FUNCTION: ROBLOXSTUDIO 0x0041a810
extern "C" __declspec(naked) void asm_0041a810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { je L_0041a897 }
	__asm { cmp dword ptr [ecx], 1 }
	__asm { je L_0041a835 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_004149b0 }
	__asm { L_0041a835: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp dword ptr [ecx], 1 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { lea edi, [ecx + eax*4] }
	__asm { je L_0041a84e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_004149b0 }
	__asm { L_0041a84e: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { add eax, 5 }
	__asm { cmp dword ptr [ecx], 1 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { je L_0041a86d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_004149b0 }
	__asm { L_0041a86d: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { add eax, 5 }
	__asm { push ecx }
	__asm { mov esi, esp }
	__asm { push ecx }
	__asm { mov dword ptr [esi], edx }
	__asm { lea eax, [ecx + eax*4] }
	__asm { mov edx, esp }
	__asm { lea ecx, [edi + 0x14] }
	__asm { mov dword ptr [edx], eax }
	__asm { call fn_00420390 }
	__asm { add esp, 0xc }
	__asm { L_0041a897: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_0041bf30();
extern "C" void fn_00421060();
extern "C" void fn_00421110();
// FUNCTION: ROBLOXSTUDIO 0x0041ae90
extern "C" __declspec(naked) void asm_0041ae90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_0041aedb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0041aedb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0041af2e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe69690 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x10040c4 }
	__asm { mov dword ptr [esi + 8], 0x10040bc }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x10040dc }
	__asm { mov dword ptr [esi + 8], 0x10040d4 }
	__asm { jmp L_0041af30 }
	__asm { L_0041af2e: }
	__asm { xor esi, esi }
	__asm { L_0041af30: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0041bf30 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0041af4d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0041af4d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_004205a0();
extern "C" void fn_008a08f0();
// FUNCTION: ROBLOXSTUDIO 0x0041afa0
extern "C" __declspec(naked) void asm_0041afa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x178 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0041aff1 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_008a08f0 }
	__asm { mov esi, eax }
	__asm { jmp L_0041aff3 }
	__asm { L_0041aff1: }
	__asm { xor esi, esi }
	__asm { L_0041aff3: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_004205a0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0041b024 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0041b024 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0041b024: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00420ab0();
extern "C" void fn_008ab5d0();
// FUNCTION: ROBLOXSTUDIO 0x0041b540
extern "C" __declspec(naked) void asm_0041b540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x180 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0041b591 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_008ab5d0 }
	__asm { mov esi, eax }
	__asm { jmp L_0041b593 }
	__asm { L_0041b591: }
	__asm { xor esi, esi }
	__asm { L_0041b593: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00420ab0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0041b5c4 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0041b5c4 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0041b5c4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00420b40();
extern "C" void fn_008ab7f0();
// FUNCTION: ROBLOXSTUDIO 0x0041b5e0
extern "C" __declspec(naked) void asm_0041b5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x180 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0041b631 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_008ab7f0 }
	__asm { mov esi, eax }
	__asm { jmp L_0041b633 }
	__asm { L_0041b631: }
	__asm { xor esi, esi }
	__asm { L_0041b633: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00420b40 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0041b664 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0041b664 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0041b664: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00420bd0();
extern "C" void fn_008ab440();
// FUNCTION: ROBLOXSTUDIO 0x0041b680
extern "C" __declspec(naked) void asm_0041b680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x180 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0041b6d1 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_008ab440 }
	__asm { mov esi, eax }
	__asm { jmp L_0041b6d3 }
	__asm { L_0041b6d1: }
	__asm { xor esi, esi }
	__asm { L_0041b6d3: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00420bd0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0041b704 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0041b704 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0041b704: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131d194[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00419a70();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041c300
extern "C" __declspec(naked) void asm_0041c300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe372dc }
	__asm { test al, al }
	__asm { je L_0041c371 }
	__asm { cmp dword ptr [g_0131d194], 0x29a }
	__asm { je L_0041c371 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0041c360 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0041c371 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0041c360: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0041c371: }
	__asm { mov ecx, esi }
	__asm { call fn_00419a70 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0041c3cb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0041c3cb: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131a8e0[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00419ad0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041c610
extern "C" __declspec(naked) void asm_0041c610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe3b0e8 }
	__asm { test al, al }
	__asm { je L_0041c681 }
	__asm { cmp dword ptr [g_0131a8e0], 0x29a }
	__asm { je L_0041c681 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0041c670 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0041c681 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0041c670: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0041c681: }
	__asm { mov ecx, esi }
	__asm { call fn_00419ad0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0041c6db }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0041c6db: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131a8dc[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00419b30();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041c920
extern "C" __declspec(naked) void asm_0041c920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe33cec }
	__asm { test al, al }
	__asm { je L_0041c991 }
	__asm { cmp dword ptr [g_0131a8dc], 0x29a }
	__asm { je L_0041c991 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0041c980 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0041c991 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0041c980: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0041c991: }
	__asm { mov ecx, esi }
	__asm { call fn_00419b30 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0041c9eb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0041c9eb: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131a8d8[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00419b90();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041cc30
extern "C" __declspec(naked) void asm_0041cc30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe33cf4 }
	__asm { test al, al }
	__asm { je L_0041cca1 }
	__asm { cmp dword ptr [g_0131a8d8], 0x29a }
	__asm { je L_0041cca1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0041cc90 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0041cca1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0041cc90: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0041cca1: }
	__asm { mov ecx, esi }
	__asm { call fn_00419b90 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0041ccfb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0041ccfb: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131d198[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00419bf0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041d040
extern "C" __declspec(naked) void asm_0041d040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe59454 }
	__asm { test al, al }
	__asm { je L_0041d0b1 }
	__asm { cmp dword ptr [g_0131d198], 0x29a }
	__asm { je L_0041d0b1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0041d0a0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0041d0b1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0041d0a0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0041d0b1: }
	__asm { mov ecx, esi }
	__asm { call fn_00419bf0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0041d10b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0041d10b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131a8d4[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00419c50();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041d3d0
extern "C" __declspec(naked) void asm_0041d3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe5941c }
	__asm { test al, al }
	__asm { je L_0041d441 }
	__asm { cmp dword ptr [g_0131a8d4], 0x29a }
	__asm { je L_0041d441 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0041d430 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0041d441 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0041d430: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0041d441: }
	__asm { mov ecx, esi }
	__asm { call fn_00419c50 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0041d49b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0041d49b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131d19c[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00419cb0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041d760
extern "C" __declspec(naked) void asm_0041d760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe5944c }
	__asm { test al, al }
	__asm { je L_0041d7d1 }
	__asm { cmp dword ptr [g_0131d19c], 0x29a }
	__asm { je L_0041d7d1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0041d7c0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0041d7d1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0041d7c0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0041d7d1: }
	__asm { mov ecx, esi }
	__asm { call fn_00419cb0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0041d82b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0041d82b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131a8d0[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00419d10();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041daf0
extern "C" __declspec(naked) void asm_0041daf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe59414 }
	__asm { test al, al }
	__asm { je L_0041db61 }
	__asm { cmp dword ptr [g_0131a8d0], 0x29a }
	__asm { je L_0041db61 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0041db50 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0041db61 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0041db50: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0041db61: }
	__asm { mov ecx, esi }
	__asm { call fn_00419d10 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0041dbbb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0041dbbb: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131a8cc[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00419d70();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041de80
extern "C" __declspec(naked) void asm_0041de80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe5940c }
	__asm { test al, al }
	__asm { je L_0041def1 }
	__asm { cmp dword ptr [g_0131a8cc], 0x29a }
	__asm { je L_0041def1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0041dee0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0041def1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0041dee0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0041def1: }
	__asm { mov ecx, esi }
	__asm { call fn_00419d70 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0041df4b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0041df4b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131a8c8[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00419dd0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041e1b0
extern "C" __declspec(naked) void asm_0041e1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe3525c }
	__asm { test al, al }
	__asm { je L_0041e221 }
	__asm { cmp dword ptr [g_0131a8c8], 0x29a }
	__asm { je L_0041e221 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0041e210 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0041e221 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0041e210: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0041e221: }
	__asm { mov ecx, esi }
	__asm { call fn_00419dd0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0041e27b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0041e27b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131a8c4[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00419e30();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041e4c0
extern "C" __declspec(naked) void asm_0041e4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe35264 }
	__asm { test al, al }
	__asm { je L_0041e531 }
	__asm { cmp dword ptr [g_0131a8c4], 0x29a }
	__asm { je L_0041e531 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0041e520 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0041e531 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0041e520: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0041e531: }
	__asm { mov ecx, esi }
	__asm { call fn_00419e30 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0041e58b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0041e58b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131a8c0[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00419e90();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041e7d0
extern "C" __declspec(naked) void asm_0041e7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe3526c }
	__asm { test al, al }
	__asm { je L_0041e841 }
	__asm { cmp dword ptr [g_0131a8c0], 0x29a }
	__asm { je L_0041e841 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0041e830 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0041e841 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0041e830: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0041e841: }
	__asm { mov ecx, esi }
	__asm { call fn_00419e90 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0041e89b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0041e89b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0041eaa0
extern "C" __declspec(naked) void asm_0041eaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd711c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0041eb1e }
	__asm { add edi, 5 }
	__asm { je L_0041ead8 }
	__asm { add edi, -5 }
	__asm { jmp L_0041eada }
	__asm { L_0041ead8: }
	__asm { xor edi, edi }
	__asm { L_0041eada: }
	__asm { push ebx }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0041eb07 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0041eb07 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0041eb07: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0xe389e4 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041eb1e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xe389e4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0040fbf0();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0041ed20
extern "C" __declspec(naked) void asm_0041ed20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_0041ed3a }
	__asm { lea eax, [edi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_0041ed3a: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [esi], edi }
	__asm { test eax, eax }
	__asm { je L_0041ed86 }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_0041ed4e }
	__asm { add edi, -5 }
	__asm { jmp L_0041ed50 }
	__asm { L_0041ed4e: }
	__asm { xor edi, edi }
	__asm { L_0041ed50: }
	__asm { push ebx }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0041ed7d }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0041ed7d }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0041ed7d: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0041ed86: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f74[];
extern "C" char g_00e10f88[];
extern "C" char g_00e11004[];
// FUNCTION: ROBLOXSTUDIO 0x0041f150
extern "C" __declspec(naked) void asm_0041f150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e10f88] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { add esp, 4 }
	__asm { mov esi, dword ptr [ecx + 0x18] }
	__asm { mov ebx, eax }
	__asm { test esi, esi }
	__asm { je L_0041f1c3 }
	__asm { xor edx, edx }
	__asm { div esi }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx + edx*4] }
	__asm { lea esi, [ecx + edx*4] }
	__asm { cmp eax, dword ptr [edi] }
	__asm { je L_0041f19d }
	__asm { cmp dword ptr [eax], 0 }
	__asm { jne L_0041f19d }
	__asm { push 0x360 }
	__asm { push 0x1003f80 }
	__asm { push 0x1003fec }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_0041f19d: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, dword ptr [edi] }
	__asm { je L_0041f1c5 }
	__asm { L_0041f1a3: }
	__asm { cmp ebx, dword ptr [eax + 4] }
	__asm { jne L_0041f1b9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add eax, 8 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10f74] }
	__asm { test al, al }
	__asm { jne L_0041f1c5 }
	__asm { L_0041f1b9: }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jne L_0041f1a3 }
	__asm { jmp L_0041f1c5 }
	__asm { L_0041f1c3: }
	__asm { mov esi, edi }
	__asm { L_0041f1c5: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_0041f1ce }
	__asm { mov dword ptr [eax], ebx }
	__asm { L_0041f1ce: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0041fe80();
extern "C" void fn_00420e50();
// FUNCTION: ROBLOXSTUDIO 0x0041ff40
extern "C" __declspec(naked) void asm_0041ff40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, ecx }
	__asm { jne L_0041ff81 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { cmp edx, esi }
	__asm { jne L_0041ff81 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push esi }
	__asm { push ecx }
	__asm { call fn_0041fe80 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0041ff81: }
	__asm { cmp eax, edx }
	__asm { je L_0041ffba }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push edx }
	__asm { call fn_00420e50 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_0041fe80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x20 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0041ffba: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00421370
extern "C" __declspec(naked) void asm_00421370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esi, -8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_004213fd }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_004213bb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_004213a6 }
	__asm { push 0x7d }
	__asm { push 0x10027e0 }
	__asm { push 0x1004bec }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004213bb }
	__asm { L_004213a6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x10045e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004213bb: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_004213fd }
	__asm { cmp dword ptr [esi + 4], 1 }
	__asm { je L_004213fd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_004213e8 }
	__asm { push 0x7e }
	__asm { push 0x10027e0 }
	__asm { push 0x1004654 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004213fd }
	__asm { L_004213e8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1004668 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004213fd: }
	__asm { push esi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x004216b0
extern "C" __declspec(naked) void asm_004216b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70e8c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_004216fc }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_004216fc: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe1b804 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0042171e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_00421720 }
	__asm { L_0042171e: }
	__asm { xor edx, edx }
	__asm { L_00421720: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0042173e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0042173e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe1c694 }
	__asm { mov dword ptr [ebx], 0xe1c6a0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe1c6a8 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_00421787 }
	__asm { add edi, 0xc }
	__asm { jmp L_00421789 }
	__asm { L_00421787: }
	__asm { xor edi, edi }
	__asm { L_00421789: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x004218f0
extern "C" __declspec(naked) void asm_004218f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70e8c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0042193c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0042193c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe1b804 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0042195e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_00421960 }
	__asm { L_0042195e: }
	__asm { xor edx, edx }
	__asm { L_00421960: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0042197e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0042197e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe1c694 }
	__asm { mov dword ptr [ebx], 0xe1c6a0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe1c6a8 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_004219c7 }
	__asm { add edi, 0xc }
	__asm { jmp L_004219c9 }
	__asm { L_004219c7: }
	__asm { xor edi, edi }
	__asm { L_004219c9: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00421a80
extern "C" __declspec(naked) void asm_00421a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd704e1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf139e8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe1b804 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00421ae3 }
	__asm { add esi, 0xc }
	__asm { jmp L_00421ae5 }
	__asm { L_00421ae3: }
	__asm { xor esi, esi }
	__asm { L_00421ae5: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00421afb }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00421afb: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe1c694 }
	__asm { mov dword ptr [ebp - 0x30], 0xe1c6a0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x1179dd8 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe1c6a8 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00421ba0
extern "C" __declspec(naked) void asm_00421ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7dba4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00421beb }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00421beb: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe1b804 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00421c0d }
	__asm { add edi, 0xc }
	__asm { jmp L_00421c0f }
	__asm { L_00421c0d: }
	__asm { xor edi, edi }
	__asm { L_00421c0f: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00421c25 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00421c25: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe1c694 }
	__asm { mov dword ptr [esi + 0xc], 0xe1c6a0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe1c6a8 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b1fa0();
// FUNCTION: ROBLOXSTUDIO 0x00422180
extern "C" __declspec(naked) void asm_00422180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_007b1fa0 }
	__asm { test al, al }
	__asm { je L_0042219e }
	__asm { L_00422196: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0042219e: }
	__asm { cmp dword ptr [edi + 0x38], esi }
	__asm { je L_00422196 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 0x44] }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00422196 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + 0x48] }
	__asm { mov ecx, edi }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00422196 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 0x40] }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_004221d5 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004221d5: }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + 0x4c] }
	__asm { mov ecx, edi }
	__asm { call eax }
	__asm { test al, al }
	__asm { pop edi }
	__asm { setne al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e102d4[];
extern "C" char g_00e1031c[];
extern "C" char g_00e10328[];
extern "C" char g_00e10504[];
extern "C" void fn_00424eb0();
extern "C" void fn_008b4f30();
// FUNCTION: ROBLOXSTUDIO 0x00422770
extern "C" __declspec(naked) void asm_00422770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72022 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { xor ebx, ebx }
	__asm { push 0xb0 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00422828 }
	__asm { lea ecx, [edi + 0x68] }
	__asm { mov dword ptr [edi], 0x1004fbc }
	__asm { mov dword ptr [edi + 0x10], 0x1004fb4 }
	__asm { call dword ptr [g_00e102d4] }
	__asm { push 0 }
	__asm { lea esi, [edi + 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ebx, 2 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call dword ptr [g_00e10328] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + eax], 0xe18340 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x68] }
	__asm { mov dword ptr [ecx + edi - 4], eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [esi], 0xe1827c }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { jmp L_0042282a }
	__asm { L_00422828: }
	__asm { xor edi, edi }
	__asm { L_0042282a: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [esi], edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { call fn_00424eb0 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { or ebx, 1 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test eax, eax }
	__asm { je L_00422862 }
	__asm { add eax, 0x10 }
	__asm { jmp L_00422864 }
	__asm { L_00422862: }
	__asm { xor eax, eax }
	__asm { L_00422864: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_008b4f30 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_00426fa0();
extern "C" void fn_00427010();
// FUNCTION: ROBLOXSTUDIO 0x00423b80
extern "C" __declspec(naked) void asm_00423b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd72168 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { mov bl, byte ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test bl, bl }
	__asm { je L_00423bb1 }
	__asm { lea ecx, [ebp + 0x24] }
	__asm { call fn_00426fa0 }
	__asm { jmp L_00423bdc }
	__asm { L_00423bb1: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [ebp + 0x44] }
	__asm { call fn_00427010 }
	__asm { L_00423bdc: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00423bee }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00423bee: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { test eax, eax }
	__asm { je L_00423c2b }
	__asm { test al, 1 }
	__asm { jne L_00423c24 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00423c24 }
	__asm { lea ecx, [ebp + 0x2c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00423c24: }
	__asm { mov dword ptr [ebp + 0x24], 0 }
	__asm { L_00423c2b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { test eax, eax }
	__asm { je L_00423c52 }
	__asm { test al, 1 }
	__asm { jne L_00423c52 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00423c52 }
	__asm { lea ecx, [ebp + 0x4c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00423c52: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x5c }
}

// FUNCTION: ROBLOXSTUDIO 0x00424380
extern "C" __declspec(naked) void asm_00424380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71ce8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { test eax, eax }
	__asm { je L_004243cd }
	__asm { test al, 1 }
	__asm { jne L_004243c6 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x30] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004243c6 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004243c6: }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { L_004243cd: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_004243fb }
	__asm { test al, 1 }
	__asm { jne L_004243f4 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004243f4 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004243f4: }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_004243fb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00422570();
extern "C" void fn_00424c40();
// FUNCTION: ROBLOXSTUDIO 0x00424790
extern "C" __declspec(naked) void asm_00424790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71b89 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00422570 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00424c40 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0x422a00 }
	__asm { call fn_00422570 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test eax, eax }
	__asm { je L_00424820 }
	__asm { test al, 1 }
	__asm { jne L_00424819 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00424819 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00424819: }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { L_00424820: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00424844 }
	__asm { test al, 1 }
	__asm { jne L_00424844 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00424844 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00424844: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00422570();
extern "C" void fn_00425270();
// FUNCTION: ROBLOXSTUDIO 0x00424860
extern "C" __declspec(naked) void asm_00424860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71a00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_00422570 }
	__asm { sub esp, 0x28 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { mov ecx, esi }
	__asm { call fn_00425270 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { test eax, eax }
	__asm { je L_004248e9 }
	__asm { test al, 1 }
	__asm { jne L_004248e2 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004248e2 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004248e2: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_004248e9: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00424910 }
	__asm { test al, 1 }
	__asm { jne L_00424910 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00424910 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00424910: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x00424c40
extern "C" __declspec(naked) void asm_00424c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71c70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00422570 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00422570 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { test eax, eax }
	__asm { je L_00424cab }
	__asm { test al, 1 }
	__asm { jne L_00424ca4 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00424ca4 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00424ca4: }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { L_00424cab: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00424cd2 }
	__asm { test al, 1 }
	__asm { jne L_00424cd2 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00424cd2 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00424cd2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00422570();
extern "C" void fn_00424dc0();
// FUNCTION: ROBLOXSTUDIO 0x00424cf0
extern "C" __declspec(naked) void asm_00424cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71c98 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x20 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { lea eax, [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00422570 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00424dc0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_00424d77 }
	__asm { test al, 1 }
	__asm { jne L_00424d70 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00424d70 }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00424d70: }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { L_00424d77: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { test eax, eax }
	__asm { je L_00424d9e }
	__asm { test al, 1 }
	__asm { jne L_00424d9e }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00424d9e }
	__asm { lea ecx, [ebp + 0x3c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00424d9e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x00424dc0
extern "C" __declspec(naked) void asm_00424dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71cd0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00422570 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { test eax, eax }
	__asm { je L_00424e34 }
	__asm { test al, 1 }
	__asm { jne L_00424e2d }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00424e2d }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00424e2d: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_00424e34: }
	__asm { lea eax, [ebp + 0x34] }
	__asm { lea ecx, [esi + 0x28] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00422570 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_00424e6f }
	__asm { test al, 1 }
	__asm { jne L_00424e68 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00424e68 }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00424e68: }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { L_00424e6f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { test eax, eax }
	__asm { je L_00424e96 }
	__asm { test al, 1 }
	__asm { jne L_00424e96 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00424e96 }
	__asm { lea ecx, [ebp + 0x3c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00424e96: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" void fn_00422570();
extern "C" void fn_00425960();
// FUNCTION: ROBLOXSTUDIO 0x00425270
extern "C" __declspec(naked) void asm_00425270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71b08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { sub esp, 0x28 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { call fn_00425960 }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { mov ecx, 0x1004fac }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmove ecx, edx }
	__asm { mov dword ptr [esi], ecx }
	__asm { test eax, eax }
	__asm { je L_004252e7 }
	__asm { test al, 1 }
	__asm { jne L_004252e7 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004252e7 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004252e7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00422570();
extern "C" void fn_00424380();
extern "C" void fn_00425a10();
// FUNCTION: ROBLOXSTUDIO 0x00425390
extern "C" __declspec(naked) void asm_00425390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71b50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x50 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { lea esi, [edx + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { lea eax, [ebp + 0x38] }
	__asm { lea ecx, [esi + 0x28] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00422570 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00425a10 }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { mov ecx, 0x1004fa4 }
	__asm { cmove ecx, edx }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00424380 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00422570();
extern "C" void fn_00425cd0();
// FUNCTION: ROBLOXSTUDIO 0x00425ac0
extern "C" __declspec(naked) void asm_00425ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71b08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00425b1a }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { call fn_00425cd0 }
	__asm { mov bl, 1 }
	__asm { jmp L_00425b1c }
	__asm { L_00425b1a: }
	__asm { xor bl, bl }
	__asm { L_00425b1c: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00425b43 }
	__asm { test al, 1 }
	__asm { jne L_00425b43 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00425b43 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00425b43: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00422570();
extern "C" void fn_00424380();
extern "C" void fn_00425d60();
// FUNCTION: ROBLOXSTUDIO 0x00425b60
extern "C" __declspec(naked) void asm_00425b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71b30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00425bdf }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x58] }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { lea esi, [ecx + 8] }
	__asm { mov dword ptr [ebp + 0x58], esi }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { lea eax, [ebp + 0x38] }
	__asm { lea ecx, [esi + 0x28] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00422570 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00425d60 }
	__asm { mov bl, 1 }
	__asm { jmp L_00425be1 }
	__asm { L_00425bdf: }
	__asm { xor bl, bl }
	__asm { L_00425be1: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00424380 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x58 }
}

extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x00425c10
extern "C" __declspec(naked) void asm_00425c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71c98 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x20 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { lea eax, [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00422570 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_00425c97 }
	__asm { test al, 1 }
	__asm { jne L_00425c90 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00425c90 }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00425c90: }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { L_00425c97: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { test eax, eax }
	__asm { je L_00425cbe }
	__asm { test al, 1 }
	__asm { jne L_00425cbe }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00425cbe }
	__asm { lea ecx, [ebp + 0x3c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00425cbe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" char g_00e10504[];
extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x00425cd0
extern "C" __declspec(naked) void asm_00425cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71ac4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00425d1c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { jmp L_00425d1e }
	__asm { L_00425d1c: }
	__asm { xor esi, esi }
	__asm { L_00425d1e: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00425d4b }
	__asm { test al, 1 }
	__asm { jne L_00425d4b }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00425d4b }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00425d4b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" char g_00e10504[];
extern "C" void fn_00422570();
extern "C" void fn_00424380();
// FUNCTION: ROBLOXSTUDIO 0x00425d60
extern "C" __declspec(naked) void asm_00425d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71aec }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { push 0x50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00425dd1 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { lea esi, [edi + 8] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { lea eax, [ebp + 0x38] }
	__asm { lea ecx, [esi + 0x28] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00422570 }
	__asm { pop esi }
	__asm { jmp L_00425dd3 }
	__asm { L_00425dd1: }
	__asm { xor edi, edi }
	__asm { L_00425dd3: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00424380 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x58 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
extern "C" void fn_00410e50();
// FUNCTION: ROBLOXSTUDIO 0x00426080
extern "C" __declspec(naked) void asm_00426080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x1c }
	__asm { mov edx, ecx }
	__asm { push esi }
	__asm { mov ecx, dword ptr [edx + 0x3c] }
	__asm { mov dword ptr [esp + 4], 0 }
	__asm { test cl, 2 }
	__asm { jne L_004260d6 }
	__asm { mov eax, dword ptr [edx + 0x20] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004260d6 }
	__asm { mov ecx, dword ptr [edx + 0x38] }
	__asm { cmp ecx, eax }
	__asm { cmovb ecx, eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { L_004260b0: }
	__asm { mov eax, dword ptr [eax] }
	__asm { sub ecx, eax }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x24], 0xf }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { mov byte ptr [esp + 0x10], 0 }
	__asm { call fn_004038a0 }
	__asm { jmp L_00426105 }
	__asm { L_004260d6: }
	__asm { test cl, 4 }
	__asm { jne L_004260f0 }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { je L_004260f0 }
	__asm { mov eax, dword ptr [edx + 0x2c] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { add ecx, esi }
	__asm { jmp L_004260b0 }
	__asm { L_004260f0: }
	__asm { mov dword ptr [esp + 0x1c], 0xf }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { mov byte ptr [esp + 8], 0 }
	__asm { L_00426105: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00410e50 }
	__asm { cmp dword ptr [esp + 0x1c], 0x10 }
	__asm { jb L_00426128 }
	__asm { push dword ptr [esp + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00426128: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00426760
extern "C" __declspec(naked) void asm_00426760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { test ebx, ebx }
	__asm { je L_0042680f }
	__asm { and eax, 6 }
	__asm { cmp al, 6 }
	__asm { je L_0042680f }
	__asm { cmp ebx, -1 }
	__asm { ja L_00426815 }
	__asm { push edi }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00426815 }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { test byte ptr [esi + 0x3c], 4 }
	__asm { lea ecx, [edi + ebx] }
	__asm { mov dword ptr [esi + 0x38], ecx }
	__asm { jne L_004267cc }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [eax], ebx }
	__asm { L_004267cc: }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { test al, 2 }
	__asm { jne L_0042680a }
	__asm { test al, 0x10 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov edx, edi }
	__asm { mov dword ptr [eax], edi }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { cmovne edx, ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov ecx, edi }
	__asm { sub ecx, edx }
	__asm { add ecx, ebx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { jne L_0042680a }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [eax], edi }
	__asm { L_0042680a: }
	__asm { or dword ptr [esi + 0x3c], 1 }
	__asm { pop edi }
	__asm { L_0042680f: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00426815: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" char g_00e10538[];
extern "C" void fn_00402f60();
// FUNCTION: ROBLOXSTUDIO 0x00426850
extern "C" __declspec(naked) void asm_00426850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { jne L_0042686c }
	__asm { cmp ecx, dword ptr [ebx + 0x10] }
	__asm { ja L_0042686c }
	__asm { mov eax, ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0042686c: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0x10] }
	__asm { push edi }
	__asm { cmp ecx, esi }
	__asm { jae L_004268e4 }
	__asm { sub esi, ecx }
	__asm { cmp edx, esi }
	__asm { ja L_004268e4 }
	__asm { mov eax, 1 }
	__asm { sub eax, edx }
	__asm { add esi, eax }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { jb L_0042688e }
	__asm { mov eax, dword ptr [ebx] }
	__asm { jmp L_00426890 }
	__asm { L_0042688e: }
	__asm { mov eax, ebx }
	__asm { L_00426890: }
	__asm { add ecx, eax }
	__asm { L_00426892: }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { test esi, esi }
	__asm { je L_004268e4 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { movsx eax, byte ptr [eax] }
	__asm { push eax }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10538] }
	__asm { mov edi, eax }
	__asm { add esp, 0xc }
	__asm { test edi, edi }
	__asm { je L_004268e4 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_004268d1 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { sub ecx, edi }
	__asm { dec ecx }
	__asm { add esi, ecx }
	__asm { lea ecx, [edi + 1] }
	__asm { jmp L_00426892 }
	__asm { L_004268d1: }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { jb L_004268d9 }
	__asm { mov ebx, dword ptr [ebx] }
	__asm { L_004268d9: }
	__asm { sub edi, ebx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_004268e4: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00426990
extern "C" __declspec(naked) void asm_00426990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { je L_004269fa }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { lea edi, [ebx + 4] }
	__asm { add esi, 4 }
	__asm { L_004269a7: }
	__asm { mov eax, dword ptr [esi - 4] }
	__asm { mov dword ptr [ebx], eax }
	__asm { cmp esi, edi }
	__asm { je L_004269e2 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_004269c8 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_004269c8: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_004269e2 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [edi], eax }
	__asm { L_004269e2: }
	__asm { add esi, 0x44 }
	__asm { add ebx, 0x44 }
	__asm { lea ecx, [esi - 4] }
	__asm { add edi, 0x44 }
	__asm { cmp ecx, dword ptr [ebp + 0xc] }
	__asm { jne L_004269a7 }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004269fa: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_00426b20();
// FUNCTION: ROBLOXSTUDIO 0x00426c50
extern "C" __declspec(naked) void asm_00426c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_00426ceb }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x78787879 }
	__asm { imul esi }
	__asm { sar edx, 5 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x3c3c3c3 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00426ca1 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00426ca1: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x78787879 }
	__asm { imul ebx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x3c3c3c3 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_00426cd8 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00426b20 }
	__asm { L_00426cd8: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00426b20 }
	__asm { L_00426ceb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00426ef0();
extern "C" void fn_00825140();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00426d20
extern "C" __declspec(naked) void asm_00426d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71a81 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { L_00426d51: }
	__asm { test edi, edi }
	__asm { je L_00426d9e }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00426d6e }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { L_00426d6e: }
	__asm { dec edi }
	__asm { add esi, 0x44 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { jmp L_00426d51 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp esi, edi }
	__asm { je L_00426d95 }
	__asm { L_00426d85: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00426ef0 }
	__asm { add esi, 0x44 }
	__asm { cmp esi, edi }
	__asm { jne L_00426d85 }
	__asm { L_00426d95: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00426d9e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10528[];
extern "C" void fn_00403540();
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x00427010
extern "C" __declspec(naked) void asm_00427010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71d10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00427062 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe19198 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00410540 }
	__asm { L_00427062: }
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
	__asm { mov ecx, dword ptr [esi] }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 0x1c }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_004270a8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004270a8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_00e10504[];
extern "C" char g_01006440[];
extern "C" char g_01006444[];
extern "C" char g_01006448[];
extern "C" char g_0100644c[];
extern "C" void fn_00427ca0();
extern "C" void fn_006b2c90();
extern "C" void fn_00cf64a0();
// FUNCTION: ROBLOXSTUDIO 0x00427ae0
extern "C" __declspec(naked) void asm_00427ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd721fc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [g_01006440] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { sub esp, 0x10 }
	__asm { mov edx, esp }
	__asm { push 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [g_01006444] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [g_01006448] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [g_0100644c] }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { call fn_006b2c90 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 0x58] }
	__asm { push esi }
	__asm { mov dword ptr [edi], 0x100640c }
	__asm { mov dword ptr [edi + 0xc], 0x10063cc }
	__asm { mov dword ptr [edi + 0x10], 0x10063b0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { push 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x54], eax }
	__asm { test eax, eax }
	__asm { jne L_00427b7c }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00427bc5 }
	__asm { mov dword ptr [eax], 0x8007000e }
	__asm { jmp L_00427bc5 }
	__asm { L_00427b7c: }
	__asm { push 0x158 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00427bac }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov ecx, eax }
	__asm { call fn_00427ca0 }
	__asm { mov ecx, eax }
	__asm { jmp L_00427bae }
	__asm { L_00427bac: }
	__asm { xor ecx, ecx }
	__asm { L_00427bae: }
	__asm { mov eax, dword ptr [edi + 0x54] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [edi + 0x54] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { jne L_00427bc5 }
	__asm { test ebx, ebx }
	__asm { je L_00427bc5 }
	__asm { mov dword ptr [ebx], 0x8007000e }
	__asm { L_00427bc5: }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e101a4[];
extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
extern "C" void fn_006b36b0();
extern "C" void fn_006b3780();
// FUNCTION: ROBLOXSTUDIO 0x00427ca0
extern "C" __declspec(naked) void asm_00427ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72234 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x1005040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push 0 }
	__asm { call fn_006b36b0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea eax, [edi + 0xf0] }
	__asm { push eax }
	__asm { mov dword ptr [edi], 0x100638c }
	__asm { mov dword ptr [edi + 0x48], 0x100632c }
	__asm { mov dword ptr [edi + 0x54], 0x10062dc }
	__asm { mov dword ptr [edi + 0x58], 0x10062c0 }
	__asm { call dword ptr [g_00e101a4] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x108] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006b3780 }
	__asm { lea esi, [edi + 0x10c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { push 8 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00427d55 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00427d55: }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edi + 0x124], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { lea esi, [edi + 0x138] }
	__asm { push esi }
	__asm { mov dword ptr [edi + 0x128], eax }
	__asm { mov dword ptr [edi + 0x12c], 0x37 }
	__asm { mov dword ptr [edi + 0x130], 0 }
	__asm { mov dword ptr [edi + 0x134], 0 }
	__asm { call dword ptr [g_00e101a4] }
	__asm { push esi }
	__asm { mov dword ptr [edi + 0x150], 0 }
	__asm { mov dword ptr [edi + 0x154], 0 }
	__asm { call dword ptr [g_00e101ac] }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

// FUNCTION: ROBLOXSTUDIO 0x00428390
extern "C" __declspec(naked) void asm_00428390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { test edi, edi }
	__asm { jne L_004283a9 }
	__asm { pop edi }
	__asm { mov eax, 0x80004003 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004283a9: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov edx, 0xe432d8 }
	__asm { mov esi, 0xc }
	__asm { L_004283b6: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [edx] }
	__asm { jne L_00428426 }
	__asm { add ecx, 4 }
	__asm { add edx, 4 }
	__asm { sub esi, 4 }
	__asm { jae L_004283b6 }
	__asm { cmp dword ptr [edi + 0x20], 0 }
	__asm { je L_00428426 }
	__asm { lea ecx, [edi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00428426 }
	__asm { mov edx, 0xe43358 }
	__asm { mov esi, 0xc }
	__asm { mov edi, edi }
	__asm { L_004283e0: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [edx] }
	__asm { jne L_00428426 }
	__asm { add ecx, 4 }
	__asm { add edx, 4 }
	__asm { sub esi, 4 }
	__asm { jae L_004283e0 }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { test eax, eax }
	__asm { je L_00428426 }
	__asm { mov ecx, dword ptr [eax + 0x34] }
	__asm { cmp ecx, 0x14 }
	__asm { jl L_00428426 }
	__asm { mov eax, dword ptr [eax + 0x38] }
	__asm { cdq }
	__asm { xor eax, edx }
	__asm { sub eax, edx }
	__asm { cmp eax, 0x14 }
	__asm { jl L_00428426 }
	__asm { cmp ecx, dword ptr [ebx + 0xe0] }
	__asm { jne L_00428426 }
	__asm { cmp eax, dword ptr [ebx + 0xdc] }
	__asm { jne L_00428426 }
	__asm { pop esi }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00428426: }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov eax, 0x80070057 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}
