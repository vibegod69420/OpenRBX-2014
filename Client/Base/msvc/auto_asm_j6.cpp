// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10504[];
extern "C" char g_00e12b18[];
extern "C" void fn_004d2ef0();
// FUNCTION: ROBLOXSTUDIO 0x004d4450
extern "C" __declspec(naked) void asm_004d4450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd81d0c }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp dword ptr [eax + 4], 1 }
	__asm { jne L_004d44b6 }
	__asm { push 0x24 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004d44a4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call fn_004d2ef0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_004d44a4: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_004d44b6: }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12b18] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e11008[];
extern "C" void fn_004d67d0();
// FUNCTION: ROBLOXSTUDIO 0x004d6180
extern "C" __declspec(naked) void asm_004d6180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { js L_004d619a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax + 0xc] }
	__asm { sub edx, dword ptr [eax + 8] }
	__asm { cmp edi, edx }
	__asm { jl L_004d61b7 }
	__asm { L_004d619a: }
	__asm { push 0x1c7 }
	__asm { push 0x1002fd0 }
	__asm { push 0x1002fbc }
	__asm { push 0x1002fa4 }
	__asm { call dword ptr [g_00e11008] }
	__asm { add esp, 0x10 }
	__asm { L_004d61b7: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_004d61ca }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_004d67d0 }
	__asm { L_004d61ca: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add eax, edi }
	__asm { pop edi }
	__asm { mov eax, dword ptr [ecx + eax*4 + 0x14] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11024[];
extern "C" void fn_004d66a0();
extern "C" void fn_004d68e0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004d61e0
extern "C" __declspec(naked) void asm_004d61e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd81cf0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { cmp dword ptr [eax], 1 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { je L_004d622d }
	__asm { sub esp, 8 }
	__asm { call fn_004d66a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jmp L_004d623a }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 0 }
	__asm { dec dword ptr [eax + 0xc] }
	__asm { call fn_00cf67ec }
	__asm { L_004d622d: }
	__asm { call dword ptr [g_00e11024] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { L_004d623a: }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004d68e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11a20[];
extern "C" char g_00e125cc[];
extern "C" void fn_00467900();
extern "C" void fn_004d6300();
extern "C" void fn_004d6960();
// FUNCTION: ROBLOXSTUDIO 0x004d6260
extern "C" __declspec(naked) void asm_004d6260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd81c79 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { je L_004d628b }
	__asm { call fn_004d6300 }
	__asm { L_004d628b: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00467900 }
	__asm { cmp eax, dword ptr [esi] }
	__asm { jne L_004d62e2 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e11a20] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_004d6960 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e125cc] }
	__asm { lea eax, [esi - 4] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004d62e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add eax, -4 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11034[];
extern "C" char g_00e125cc[];
// FUNCTION: ROBLOXSTUDIO 0x004d6880
extern "C" __declspec(naked) void asm_004d6880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { add esi, 5 }
	__asm { add ebx, 5 }
	__asm { lea esi, [ecx + esi*4] }
	__asm { lea ebx, [ecx + ebx*4] }
	__asm { cmp ebx, esi }
	__asm { je L_004d68c5 }
	__asm { push edi }
	__asm { nop }
	__asm { L_004d68a0: }
	__asm { mov edi, dword ptr [esi - 4] }
	__asm { sub esi, 4 }
	__asm { test edi, edi }
	__asm { je L_004d68bd }
	__asm { lea ecx, [edi + 8] }
	__asm { call dword ptr [g_00e125cc] }
	__asm { push edi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004d68bd: }
	__asm { cmp esi, ebx }
	__asm { jne L_004d68a0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { L_004d68c5: }
	__asm { push ecx }
	__asm { call dword ptr [g_00e11034] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e11a34[];
// FUNCTION: ROBLOXSTUDIO 0x004d68e0
extern "C" __declspec(naked) void asm_004d68e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ccfc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0xc }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_004d6945 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov al, byte ptr [edx + 4] }
	__asm { mov byte ptr [esi + 4], al }
	__asm { lea eax, [edx + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call dword ptr [g_00e11a34] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004d6945: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10c54[];
extern "C" char g_00e10eec[];
extern "C" char g_00e125cc[];
extern "C" char g_0131c758[];
// FUNCTION: ROBLOXSTUDIO 0x004d6ba0
extern "C" __declspec(naked) void asm_004d6ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0131c758], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, edx }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_004d6bd7 }
	__asm { push 0x4d65c0 }
	__asm { push 0x4d6670 }
	__asm { push 0x101a42c }
	__asm { call dword ptr [g_00e10c54] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [g_0131c758], eax }
	__asm { L_004d6bd7: }
	__asm { mov eax, dword ptr [g_0131c758] }
	__asm { push 0 }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10eec] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { call dword ptr [g_00e125cc] }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10fd8[];
// FUNCTION: ROBLOXSTUDIO 0x004eb270
extern "C" __declspec(naked) void asm_004eb270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd82b78 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_004eb2c3 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_004eb2c3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131eb88[];
extern "C" char g_0131eb9c[];
extern "C" void fn_004a4c90();
extern "C" void fn_004ecb70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004ed610
extern "C" __declspec(naked) void asm_004ed610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7579e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_004ed65c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004ed65c: }
	__asm { mov eax, dword ptr [g_0131eb9c] }
	__asm { test eax, eax }
	__asm { je L_004ed66f }
	__asm { push 1 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004ecb70 }
	__asm { L_004ed66f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10c70[];
extern "C" char g_00e10c74[];
extern "C" char g_00e10c78[];
extern "C" char g_00e11064[];
extern "C" char g_00e11074[];
extern "C" char g_00e110ec[];
extern "C" char g_00e11110[];
extern "C" char g_00e11c30[];
extern "C" void fn_0057a250();
// FUNCTION: ROBLOXSTUDIO 0x004ee990
extern "C" __declspec(naked) void asm_004ee990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8380b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call fn_0057a250 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11064] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10c78] }
	__asm { test al, al }
	__asm { jne L_004ee9e5 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e10c74] }
	__asm { L_004ee9e5: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10c70] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11c30] }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e110ec] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11074] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e128ec[];
extern "C" void fn_004f12c0();
extern "C" void fn_00515390();
// FUNCTION: ROBLOXSTUDIO 0x004ef070
extern "C" __declspec(naked) void asm_004ef070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8832c }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x3b8], 0 }
	__asm { jne L_004ef0c9 }
	__asm { push 0x28 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004ef0ba }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00515390 }
	__asm { jmp L_004ef0bc }
	__asm { L_004ef0ba: }
	__asm { xor eax, eax }
	__asm { L_004ef0bc: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi + 0x3b8], eax }
	__asm { L_004ef0c9: }
	__asm { mov ecx, dword ptr [esi + 0x3b8] }
	__asm { call dword ptr [g_00e128ec] }
	__asm { mov ecx, esi }
	__asm { call fn_004f12c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12a28[];
extern "C" char g_0131eb88[];
extern "C" void fn_004a4c90();
extern "C" void fn_004a5010();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004ef770
extern "C" __declspec(naked) void asm_004ef770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7579e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_004ef7bc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004ef7bc: }
	__asm { mov ecx, 0x131eb8c }
	__asm { call fn_004a5010 }
	__asm { test al, al }
	__asm { je L_004ef7d2 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12a28] }
	__asm { L_004ef7d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12a28[];
extern "C" char g_0131eb88[];
extern "C" void fn_004a4c90();
extern "C" void fn_004a5070();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004ef7f0
extern "C" __declspec(naked) void asm_004ef7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7579e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_004ef83c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004ef83c: }
	__asm { mov ecx, 0x131eb8c }
	__asm { call fn_004a5070 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12a28] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01320164[];
extern "C" void fn_004f39f0();
extern "C" void fn_0057e360();
extern "C" void fn_00583ab0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004f3970
extern "C" __declspec(naked) void asm_004f3970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0x410] }
	__asm { cmp eax, 1 }
	__asm { jne L_004f3998 }
	__asm { push 0 }
	__asm { jmp L_004f399e }
	__asm { L_004f3998: }
	__asm { test eax, eax }
	__asm { jne L_004f39a3 }
	__asm { push 1 }
	__asm { L_004f399e: }
	__asm { call fn_004f39f0 }
	__asm { L_004f39a3: }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_004f39d4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004f39d4: }
	__asm { mov ecx, 0x1320168 }
	__asm { call fn_00583ab0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131eb88[];
extern "C" char g_0131eba0[];
extern "C" void fn_004a4c90();
extern "C" void fn_004ecb70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004f3b30
extern "C" __declspec(naked) void asm_004f3b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7579e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_004f3b7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004f3b7c: }
	__asm { mov eax, dword ptr [g_0131eba0] }
	__asm { test eax, eax }
	__asm { je L_004f3b94 }
	__asm { add eax, 8 }
	__asm { je L_004f3b94 }
	__asm { push 1 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004ecb70 }
	__asm { L_004f3b94: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11070[];
extern "C" void fn_00774920();
// FUNCTION: ROBLOXSTUDIO 0x004f4020
extern "C" __declspec(naked) void asm_004f4020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c4b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11070] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_004f4054 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_004f4054: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xf12990 }
	__asm { push eax }
	__asm { push 0x1003b2c }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_004f407d }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004f407d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_0131ed70[];
extern "C" char g_0131ed74[];
// FUNCTION: ROBLOXSTUDIO 0x004f51a0
extern "C" __declspec(naked) void asm_004f51a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd875be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131ed70] }
	__asm { test al, 1 }
	__asm { jne L_004f520d }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ed70], eax }
	__asm { push 4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_004f51f8 }
	__asm { mov dword ptr [eax], 4 }
	__asm { mov dword ptr [g_0131ed74], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004f51f8: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131ed74], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004f520d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131ed74] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12aa4[];
// FUNCTION: ROBLOXSTUDIO 0x004f5690
extern "C" __declspec(naked) void asm_004f5690()
{
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { test eax, eax }
	__asm { jne L_004f56a2 }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12aa4] }
	__asm { ret }
	__asm { L_004f56a2: }
	__asm { cmp eax, 4 }
	__asm { jne L_004f56b3 }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { push 1 }
	__asm { call dword ptr [g_00e12aa4] }
	__asm { ret }
	__asm { L_004f56b3: }
	__asm { mov edx, eax }
	__asm { and edx, 4 }
	__asm { je L_004f56ca }
	__asm { test al, 8 }
	__asm { je L_004f56ca }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { push 2 }
	__asm { call dword ptr [g_00e12aa4] }
	__asm { ret }
	__asm { L_004f56ca: }
	__asm { test edx, edx }
	__asm { je L_004f56f1 }
	__asm { test al, 0x10 }
	__asm { je L_004f56de }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { push 3 }
	__asm { call dword ptr [g_00e12aa4] }
	__asm { ret }
	__asm { L_004f56de: }
	__asm { test edx, edx }
	__asm { je L_004f56f1 }
	__asm { test al, 0x20 }
	__asm { je L_004f56f1 }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { push 4 }
	__asm { call dword ptr [g_00e12aa4] }
	__asm { L_004f56f1: }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11110[];
extern "C" char g_00e12cc4[];
// FUNCTION: ROBLOXSTUDIO 0x004f58d0
extern "C" __declspec(naked) void asm_004f58d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd87619 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12cc4] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_004f591e }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004f591e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e12e1c[];
extern "C" void fn_004f5b40();
// FUNCTION: ROBLOXSTUDIO 0x004f5ab0
extern "C" __declspec(naked) void asm_004f5ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8763c }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12e1c] }
	__asm { push 0x18 }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004f5b07 }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_004f5b40 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004f5b07: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_01318fba[];
extern "C" char g_01320164[];
extern "C" void fn_0057e360();
extern "C" void fn_005812a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004f6c20
extern "C" __declspec(naked) void asm_004f6c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0xc], 0 }
	__asm { jne L_004f6cb8 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_004f6c72 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004f6c72: }
	__asm { cmp byte ptr [g_01318fba], 0 }
	__asm { je L_004f6c98 }
	__asm { mov ecx, 0x1320168 }
	__asm { call fn_005812a0 }
	__asm { mov byte ptr [esi + 0xc], 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004f6c98: }
	__asm { push 0x1035b00 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { push eax }
	__asm { push 0x1320168 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { add esp, 0x10 }
	__asm { mov byte ptr [esi + 0xc], 1 }
	__asm { L_004f6cb8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040f730();
// FUNCTION: ROBLOXSTUDIO 0x004f89a0
extern "C" __declspec(naked) void asm_004f89a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jle L_004f89bb }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push 2 }
	__asm { push 0x101173c }
	__asm { call fn_0040f730 }
	__asm { L_004f89bb: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [eax] }
	__asm { add edx, 4 }
	__asm { cmp dword ptr [edx + 0x14], 0x10 }
	__asm { jb L_004f89cb }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_004f89cb: }
	__asm { cmp byte ptr [edx], 0 }
	__asm { jne L_004f89e1 }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edx }
	__asm { call fn_0040f730 }
	__asm { inc dword ptr [esi] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004f89e1: }
	__asm { mov ecx, edx }
	__asm { push ebx }
	__asm { lea ebx, [ecx + 1] }
	__asm { L_004f89e7: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_004f89e7 }
	__asm { sub ecx, ebx }
	__asm { pop ebx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edx }
	__asm { call fn_0040f730 }
	__asm { inc dword ptr [esi] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00405160();
// FUNCTION: ROBLOXSTUDIO 0x004f8a40
extern "C" __declspec(naked) void asm_004f8a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00405160 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [edx + 0x18], eax }
	__asm { jle L_004f8a5a }
	__asm { L_004f8a53: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004f8a5a: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_004f8a67 }
	__asm { cmp byte ptr [ecx + 0x65], 0 }
	__asm { jne L_004f8a6e }
	__asm { L_004f8a67: }
	__asm { mov al, byte ptr [edx + 6] }
	__asm { test al, al }
	__asm { je L_004f8a74 }
	__asm { L_004f8a6e: }
	__asm { cmp byte ptr [esi + 0x78], 0 }
	__asm { je L_004f8a53 }
	__asm { L_004f8a74: }
	__asm { test ecx, ecx }
	__asm { jne L_004f8a7f }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004f8a7f: }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ecx + 0x64], al }
	__asm { pop esi }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x004f9b00
extern "C" __declspec(naked) void asm_004f9b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [edx + 0x38] }
	__asm { mov esi, edx }
	__asm { mov eax, edx }
	__asm { test edi, edi }
	__asm { js L_004f9b32 }
	__asm { L_004f9b16: }
	__asm { mov eax, dword ptr [esi + edi*4 + 4] }
	__asm { cmp eax, edx }
	__asm { je L_004f9b2f }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { L_004f9b20: }
	__asm { cmp dword ptr [eax - 0xc], ecx }
	__asm { jge L_004f9b2f }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [eax + edi*4 + 4] }
	__asm { cmp eax, edx }
	__asm { jne L_004f9b20 }
	__asm { L_004f9b2f: }
	__asm { dec edi }
	__asm { jns L_004f9b16 }
	__asm { L_004f9b32: }
	__asm { cmp eax, edx }
	__asm { je L_004f9b3d }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { cmp ecx, dword ptr [eax - 0xc] }
	__asm { jge L_004f9b3f }
	__asm { L_004f9b3d: }
	__asm { mov eax, edx }
	__asm { L_004f9b3f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00421e70();
extern "C" void fn_006c0860();
extern "C" void fn_006c0d90();
// FUNCTION: ROBLOXSTUDIO 0x004fa0b0
extern "C" __declspec(naked) void asm_004fa0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd901e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp byte ptr [ecx + 0x20c], 0 }
	__asm { jne L_004fa104 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov byte ptr [ecx + 0x20c], 1 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { add ecx, 8 }
	__asm { call fn_00421e70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006c0d90 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006c0860 }
	__asm { L_004fa104: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10fbc[];
extern "C" char g_00e10ff4[];
// FUNCTION: ROBLOXSTUDIO 0x004fb4f0
extern "C" __declspec(naked) void asm_004fb4f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8832c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xc }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_004fb53d }
	__asm { push 0x3ee }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10ff4] }
	__asm { mov dword ptr [esi], 0x1022f70 }
	__asm { jmp L_004fb53f }
	__asm { L_004fb53d: }
	__asm { xor esi, esi }
	__asm { L_004fb53f: }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10fbc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005002fd();
// FUNCTION: ROBLOXSTUDIO 0x004fb990
extern "C" __declspec(naked) void asm_004fb990()
{
	__asm { L_004fb990: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [edi + 0x11c] }
	__asm { mov esi, dword ptr [edi + 0x118] }
	__asm { cmp esi, eax }
	__asm { je L_004fb9c3 }
	__asm { mov edi, eax }
	__asm { L_004fb9b0: }
	__asm { push dword ptr [esi] }
	__asm { mov ecx, ebx }
	__asm { call L_004fb990 }
	__asm { add esi, 4 }
	__asm { cmp esi, edi }
	__asm { jne L_004fb9b0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_004fb9c3: }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov esi, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp esi, eax }
	__asm { je L_004fb9e2 }
	__asm { L_004fb9d0: }
	__asm { push dword ptr [esi] }
	__asm { mov ecx, ebx }
	__asm { push edi }
	__asm { call fn_005002fd }
	__asm { add esi, 4 }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { jne L_004fb9d0 }
	__asm { L_004fb9e2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10b90[];
extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e11110[];
extern "C" void fn_004fc4e0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004fc360
extern "C" __declspec(naked) void asm_004fc360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd882a1 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x77], 0 }
	__asm { je L_004fc3f3 }
	__asm { push 0 }
	__asm { push 0x12cf2b0 }
	__asm { push 0x12c39ac }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_004fc3f3 }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004fc4e0 }
	__asm { mov esi, eax }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { mov dword ptr [ebp - 0x18], 0x1029570 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10b90] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_004fc3f3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10fbc[];
extern "C" char g_00e10ff4[];
// FUNCTION: ROBLOXSTUDIO 0x004fcf60
extern "C" __declspec(naked) void asm_004fcf60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8832c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi + 0x38], 0 }
	__asm { jne L_004fcfcc }
	__asm { push esi }
	__asm { push 0xc }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_004fcfb3 }
	__asm { push 0x3ed }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10ff4] }
	__asm { mov dword ptr [esi], 0x1022f70 }
	__asm { jmp L_004fcfb5 }
	__asm { L_004fcfb3: }
	__asm { xor esi, esi }
	__asm { L_004fcfb5: }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10fbc] }
	__asm { add esp, 8 }
	__asm { mov byte ptr [edi + 0x38], 1 }
	__asm { pop esi }
	__asm { L_004fcfcc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x004fe180
extern "C" __declspec(naked) void asm_004fe180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd88098 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, ecx }
	__asm { sub esp, 0x14 }
	__asm { cmp dword ptr [edx], 0 }
	__asm { jne L_004fe1cd }
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
	__asm { L_004fe1cd: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ax, word ptr [ebp + 0x14] }
	__asm { mov word ptr [ecx + 0xc], ax }
	__asm { mov ecx, dword ptr [edx] }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" void fn_00477f80();
// FUNCTION: ROBLOXSTUDIO 0x004fe8d0
extern "C" __declspec(naked) void asm_004fe8d0()
{
	__asm { push 0x14 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_004fe8e5 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_004fe8e5: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_004fe8f0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_004fe8f0: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_004fe8f9 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_004fe8f9: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_004fe939 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_004fe91f }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push ecx }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00477f80 }
	__asm { L_004fe91f: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_004fe939: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004fee50
extern "C" __declspec(naked) void asm_004fee50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { je L_004feeb5 }
	__asm { mov edi, edi }
	__asm { L_004fee60: }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_004feeb0 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_004fee8f }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_004feead }
	__asm { L_004fee83: }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { je L_004fee83 }
	__asm { jmp L_004feead }
	__asm { L_004fee8f: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_004feeab }
	__asm { L_004fee98: }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_004feeab }
	__asm { mov eax, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { je L_004fee98 }
	__asm { L_004feeab: }
	__asm { mov eax, ecx }
	__asm { L_004feead: }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { L_004feeb0: }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_004fee60 }
	__asm { L_004feeb5: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004ffff0
extern "C" __declspec(naked) void asm_004ffff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd87c00 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00500049 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0x1022bd0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0050004b }
	__asm { L_00500049: }
	__asm { xor eax, eax }
	__asm { L_0050004b: }
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
	__asm { je L_0050006f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0050006f: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_004b2490();
// FUNCTION: ROBLOXSTUDIO 0x00500150
extern "C" __declspec(naked) void asm_00500150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_004b2490 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_005001af }
	__asm { nop }
	__asm { L_00500170: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_0050017b }
	__asm { add esi, -0x4c }
	__asm { jmp L_0050017d }
	__asm { L_0050017b: }
	__asm { xor esi, esi }
	__asm { L_0050017d: }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_00500198 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x4c] }
	__asm { jmp L_005001aa }
	__asm { L_00500198: }
	__asm { mov eax, dword ptr [esi + 0x4c] }
	__asm { lea edx, [esi + 0x4c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_005001aa: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00500170 }
	__asm { L_005001af: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10c88[];
extern "C" char g_00e129c8[];
// FUNCTION: ROBLOXSTUDIO 0x005004a0
extern "C" __declspec(naked) void asm_005004a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8e609 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10c88] }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e129c8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_005004f2 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005004f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10a5c[];
extern "C" char g_00e10fc0[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e113f4[];
// FUNCTION: ROBLOXSTUDIO 0x00500870
extern "C" __declspec(naked) void asm_00500870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd88d09 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { cmp dword ptr [ebp + 0xc], 0xa }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { jne L_005008de }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_005008de }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call dword ptr [g_00e10fc0] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10a5c] }
	__asm { movzx eax, al }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { and eax, 2 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e113f4] }
	__asm { L_005008de: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e113b4[];
extern "C" char g_00e12984[];
extern "C" char g_00e129cc[];
extern "C" char g_00e12a50[];
// FUNCTION: ROBLOXSTUDIO 0x00500d30
extern "C" __declspec(naked) void asm_00500d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { jle L_00500d79 }
	__asm { push ebx }
	__asm { nop }
	__asm { L_00500d40: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e129cc] }
	__asm { cmp esi, eax }
	__asm { jge L_00500d78 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12984] }
	__asm { mov ebx, eax }
	__asm { mov ecx, ebx }
	__asm { inc esi }
	__asm { call dword ptr [g_00e113b4] }
	__asm { test al, al }
	__asm { je L_00500d6f }
	__asm { test esi, esi }
	__asm { jg L_00500d40 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00500d6f: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12a50] }
	__asm { L_00500d78: }
	__asm { pop ebx }
	__asm { L_00500d79: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10c8c[];
extern "C" char g_00e129c4[];
extern "C" char g_00e12ab4[];
// FUNCTION: ROBLOXSTUDIO 0x005010c0
extern "C" __declspec(naked) void asm_005010c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd888a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x24 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0050113f }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e129c4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0x1024928 }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ecx], 0x21 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12ab4] }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0050113f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11110[];
extern "C" char g_00e11a28[];
extern "C" char g_00e125a8[];
extern "C" char g_00e12690[];
extern "C" char g_00e12794[];
extern "C" char g_00e12ac8[];
extern "C" void fn_00500d80();
extern "C" void fn_00501190();
// FUNCTION: ROBLOXSTUDIO 0x00502360
extern "C" __declspec(naked) void asm_00502360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd788c9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { call fn_00501190 }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12690] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00500d80 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { push 0 }
	__asm { push 1 }
	__asm { call dword ptr [g_00e12ac8] }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { push 0x400000 }
	__asm { call dword ptr [g_00e11a28] }
	__asm { test eax, eax }
	__asm { je L_005023e9 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { push 0x400000 }
	__asm { call dword ptr [g_00e11a28] }
	__asm { push 7 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12794] }
	__asm { L_005023e9: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e125a8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11408[];
extern "C" char g_00e11a38[];
extern "C" char g_00e11b5c[];
extern "C" char g_00e129cc[];
extern "C" void fn_00500d30();
// FUNCTION: ROBLOXSTUDIO 0x00502550
extern "C" __declspec(naked) void asm_00502550()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { call dword ptr [g_00e11a38] }
	__asm { mov ebx, dword ptr [edi + 0x20] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e11408] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0050259b }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e11b5c] }
	__asm { test eax, eax }
	__asm { je L_0050259b }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e129cc] }
	__asm { dec eax }
	__asm { cmp esi, eax }
	__asm { jle L_00502593 }
	__asm { dec esi }
	__asm { L_00502593: }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00500d30 }
	__asm { L_0050259b: }
	__asm { mov byte ptr [edi + 0x38], 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_0131ed88[];
extern "C" char g_0131ed8c[];
extern "C" void fn_005027c0();
// FUNCTION: ROBLOXSTUDIO 0x00502730
extern "C" __declspec(naked) void asm_00502730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88d9a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131ed88] }
	__asm { test al, 1 }
	__asm { jne L_005027a6 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ed88], eax }
	__asm { push 0x20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00502791 }
	__asm { mov ecx, eax }
	__asm { call fn_005027c0 }
	__asm { mov dword ptr [g_0131ed8c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00502791: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131ed8c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005027a6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131ed8c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00503a10();
// FUNCTION: ROBLOXSTUDIO 0x00503970
extern "C" __declspec(naked) void asm_00503970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_00503a10 }
	__asm { mov edx, dword ptr [edi + 0x14] }
	__asm { mov ebx, eax }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { test ebx, ebx }
	__asm { cmove ebx, dword ptr [ebp + 8] }
	__asm { add ecx, 5 }
	__asm { lea ecx, [edx + ecx*4] }
	__asm { lea edx, [edx + eax*4] }
	__asm { add edx, 0x14 }
	__asm { cmp ecx, edx }
	__asm { je L_005039ad }
	__asm { L_005039a0: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp dword ptr [eax], ebx }
	__asm { je L_005039b5 }
	__asm { add ecx, 4 }
	__asm { cmp ecx, edx }
	__asm { jne L_005039a0 }
	__asm { L_005039ad: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005039b5: }
	__asm { mov al, byte ptr [eax + 4] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00503a10();
// FUNCTION: ROBLOXSTUDIO 0x005039c0
extern "C" __declspec(naked) void asm_005039c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_00503a10 }
	__asm { mov edx, dword ptr [edi + 0x14] }
	__asm { mov ebx, eax }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { test ebx, ebx }
	__asm { cmove ebx, dword ptr [ebp + 8] }
	__asm { add ecx, 5 }
	__asm { lea ecx, [edx + ecx*4] }
	__asm { lea edx, [edx + eax*4] }
	__asm { add edx, 0x14 }
	__asm { cmp ecx, edx }
	__asm { je L_005039fd }
	__asm { L_005039f0: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp dword ptr [eax], ebx }
	__asm { je L_00503a05 }
	__asm { add ecx, 4 }
	__asm { cmp ecx, edx }
	__asm { jne L_005039f0 }
	__asm { L_005039fd: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00503a05: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004cc2e0();
// FUNCTION: ROBLOXSTUDIO 0x00503f60
extern "C" __declspec(naked) void asm_00503f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { push ebx }
	__asm { cmp dword ptr [eax], 1 }
	__asm { push esi }
	__asm { push edi }
	__asm { lea edi, [ecx + 8] }
	__asm { je L_00503f80 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax + 8] }
	__asm { call fn_004cc2e0 }
	__asm { L_00503f80: }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { add esi, 0x10 }
	__asm { L_00503f88: }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_00503f9e }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax + 8] }
	__asm { call fn_004cc2e0 }
	__asm { L_00503f9e: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add eax, 4 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { cmp esi, eax }
	__asm { je L_00503fbf }
	__asm { cmp dword ptr [esi], ebx }
	__asm { je L_00503fb6 }
	__asm { add esi, 4 }
	__asm { jmp L_00503f88 }
	__asm { L_00503fb6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00503fbf: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11024[];
extern "C" void fn_00504560();
extern "C" void fn_00504740();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005042a0
extern "C" __declspec(naked) void asm_005042a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88850 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { cmp dword ptr [eax], 1 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { je L_005042ed }
	__asm { sub esp, 8 }
	__asm { call fn_00504560 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jmp L_005042fa }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 0 }
	__asm { dec dword ptr [eax + 0xc] }
	__asm { call fn_00cf67ec }
	__asm { L_005042ed: }
	__asm { call dword ptr [g_00e11024] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { L_005042fa: }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00504740 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10c8c[];
// FUNCTION: ROBLOXSTUDIO 0x00504740
extern "C" __declspec(naked) void asm_00504740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ccfc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 8 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_005047ac }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi], ecx }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { movzx eax, byte ptr [esi + 4] }
	__asm { mov byte ptr [edi + 4], al }
	__asm { movzx eax, byte ptr [esi + 5] }
	__asm { mov byte ptr [edi + 5], al }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], edi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_005047ac: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x005047d0
extern "C" __declspec(naked) void asm_005047d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov edi, dword ptr [esi + 8] }
	__asm { mov eax, ecx }
	__asm { sub eax, edi }
	__asm { test eax, eax }
	__asm { jle L_0050480b }
	__asm { lea edx, [esi + 0x14] }
	__asm { lea edi, [edi*4 + 0x14] }
	__asm { lea edx, [edx + ecx*4] }
	__asm { lea eax, [edi + esi] }
	__asm { cmp eax, edx }
	__asm { je L_0050480b }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov edi, edi }
	__asm { L_00504800: }
	__asm { cmp dword ptr [eax], ecx }
	__asm { je L_00504814 }
	__asm { add eax, 4 }
	__asm { cmp eax, edx }
	__asm { jne L_00504800 }
	__asm { L_0050480b: }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00504814: }
	__asm { sub eax, edi }
	__asm { sub eax, esi }
	__asm { pop edi }
	__asm { sar eax, 2 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10e4c[];
extern "C" char g_00e122d4[];
extern "C" char g_00e129d0[];
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00504a40
extern "C" __declspec(naked) void asm_00504a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call dword ptr [g_00e122d4] }
	__asm { push 0 }
	__asm { push 0x12cf484 }
	__asm { push 0x12bc018 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10e4c] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { mov ecx, eax }
	__asm { push 0 }
	__asm { push 0x12cf460 }
	__asm { push 0x12c39ac }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call dword ptr [g_00e129d0] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { mov eax, ebx }
	__asm { je L_00504aa5 }
	__asm { add dword ptr [ebx], -0x14 }
	__asm { add dword ptr [ebx + 4], 3 }
	__asm { L_00504aa5: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10a44[];
extern "C" char g_00e113cc[];
extern "C" char g_00e11420[];
extern "C" char g_00e11424[];
extern "C" char g_00e12a80[];
// FUNCTION: ROBLOXSTUDIO 0x00504bb0
extern "C" __declspec(naked) void asm_00504bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_00504c03 }
	__asm { push esi }
	__asm { call dword ptr [g_00e12a80] }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e113cc] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11420] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { push 1 }
	__asm { add eax, eax }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { call dword ptr [g_00e10a44] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11424] }
	__asm { L_00504c03: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11110[];
extern "C" char g_00e125d4[];
// FUNCTION: ROBLOXSTUDIO 0x005050a0
extern "C" __declspec(naked) void asm_005050a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88e89 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e125d4] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_005050ee }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005050ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e12a20[];
extern "C" char g_00e12a24[];
extern "C" char g_00e12bcc[];
extern "C" char g_00e12c8c[];
extern "C" void fn_00501790();
// FUNCTION: ROBLOXSTUDIO 0x0050ddd0
extern "C" __declspec(naked) void asm_0050ddd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8832c }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x348], 0 }
	__asm { jne L_0050de29 }
	__asm { push 0x3c }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0050de1a }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00501790 }
	__asm { jmp L_0050de1c }
	__asm { L_0050de1a: }
	__asm { xor eax, eax }
	__asm { L_0050de1c: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi + 0x348], eax }
	__asm { L_0050de29: }
	__asm { mov ecx, dword ptr [esi + 0x348] }
	__asm { call dword ptr [g_00e12c8c] }
	__asm { mov ecx, dword ptr [esi + 0x348] }
	__asm { test al, al }
	__asm { je L_0050de54 }
	__asm { call dword ptr [g_00e12bcc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0050de54: }
	__asm { call dword ptr [g_00e12a20] }
	__asm { mov ecx, dword ptr [esi + 0x348] }
	__asm { call dword ptr [g_00e12a24] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11458[];
extern "C" char g_00e13498[];
extern "C" char g_00e134cc[];
extern "C" char g_00e13608[];
// FUNCTION: ROBLOXSTUDIO 0x0050e570
extern "C" __declspec(naked) void asm_0050e570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x340], 0 }
	__asm { je L_0050e5cf }
	__asm { push esi }
	__asm { call dword ptr [g_00e13498] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e134cc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0050e5c1 }
	__asm { cmp esi, 4 }
	__asm { je L_0050e5b7 }
	__asm { cmp esi, 6 }
	__asm { je L_0050e5b7 }
	__asm { cmp esi, 5 }
	__asm { je L_0050e5b7 }
	__asm { cmp esi, 7 }
	__asm { je L_0050e5b7 }
	__asm { cmp esi, 8 }
	__asm { je L_0050e5b7 }
	__asm { cmp esi, 9 }
	__asm { je L_0050e5b7 }
	__asm { push 4 }
	__asm { jmp L_0050e5b9 }
	__asm { L_0050e5b7: }
	__asm { push 1 }
	__asm { L_0050e5b9: }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11458] }
	__asm { L_0050e5c1: }
	__asm { mov ecx, dword ptr [edi + 0x340] }
	__asm { push esi }
	__asm { call dword ptr [g_00e13608] }
	__asm { pop esi }
	__asm { L_0050e5cf: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0050edb0
extern "C" __declspec(naked) void asm_0050edb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [edx + 0x38] }
	__asm { mov esi, edx }
	__asm { mov eax, edx }
	__asm { test edi, edi }
	__asm { js L_0050ede2 }
	__asm { L_0050edc6: }
	__asm { mov eax, dword ptr [esi + edi*4 + 4] }
	__asm { cmp eax, edx }
	__asm { je L_0050eddf }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { L_0050edd0: }
	__asm { cmp dword ptr [eax - 8], ecx }
	__asm { jae L_0050eddf }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [eax + edi*4 + 4] }
	__asm { cmp eax, edx }
	__asm { jne L_0050edd0 }
	__asm { L_0050eddf: }
	__asm { dec edi }
	__asm { jns L_0050edc6 }
	__asm { L_0050ede2: }
	__asm { cmp eax, edx }
	__asm { je L_0050eded }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { cmp ecx, dword ptr [eax - 8] }
	__asm { jae L_0050edef }
	__asm { L_0050eded: }
	__asm { mov eax, edx }
	__asm { L_0050edef: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10b40[];
extern "C" char g_00e10b54[];
extern "C" char g_00e10b58[];
// FUNCTION: ROBLOXSTUDIO 0x0050f450
extern "C" __declspec(naked) void asm_0050f450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8ac63 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov ecx, dword ptr [eax + 0x3c] }
	__asm { push esi }
	__asm { test ecx, ecx }
	__asm { je L_0050f49c }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { add ecx, 8 }
	__asm { push esi }
	__asm { call dword ptr [edx + 0x10] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0050f49c: }
	__asm { add eax, 0x44 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e10b58] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10b40] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10b54] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131eb88[];
extern "C" void fn_004a4c90();
extern "C" void fn_004a5850();
extern "C" void fn_00510990();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00511060
extern "C" __declspec(naked) void asm_00511060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7579e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x20], 0 }
	__asm { lea esi, [edi + 0x20] }
	__asm { jne L_00511091 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_005110cf }
	__asm { L_00511091: }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_005110c4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { L_005110c4: }
	__asm { push esi }
	__asm { mov ecx, 0x131eb8c }
	__asm { call fn_004a5850 }
	__asm { L_005110cf: }
	__asm { sub esp, 0x10 }
	__asm { mov eax, esp }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { call fn_00510990 }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110d0[];
extern "C" char g_00e11110[];
extern "C" char g_00e11500[];
extern "C" char g_00e11508[];
// FUNCTION: ROBLOXSTUDIO 0x005113f0
extern "C" __declspec(naked) void asm_005113f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd788c9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x20], 0 }
	__asm { jne L_00511418 }
	__asm { cmp dword ptr [esi + 0x28], 0 }
	__asm { je L_0051145d }
	__asm { L_00511418: }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { test ecx, ecx }
	__asm { je L_0051145d }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11508] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110d0] }
	__asm { test al, al }
	__asm { je L_0051144d }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { call dword ptr [g_00e11500] }
	__asm { L_0051144d: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0051145d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043aaf0();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00512110
extern "C" __declspec(naked) void asm_00512110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00512161 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00512130 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00512132 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00512132 }
	__asm { L_00512130: }
	__asm { mov eax, ecx }
	__asm { L_00512132: }
	__asm { test eax, eax }
	__asm { je L_00512161 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00512161 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00512161 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00512161 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_0043aaf0 }
	__asm { L_00512161: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00513a40();
// FUNCTION: ROBLOXSTUDIO 0x00513910
extern "C" __declspec(naked) void asm_00513910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov edi, ecx }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0051395b }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_00513935 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00513935: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { mov ecx, ebx }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { js L_0051395b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0051395b: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00514600
extern "C" __declspec(naked) void asm_00514600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8af10 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00514659 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0x102929c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0051465b }
	__asm { L_00514659: }
	__asm { xor eax, eax }
	__asm { L_0051465b: }
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
	__asm { je L_0051467f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0051467f: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0131eda8[];
extern "C" void fn_005146c0();
extern "C" void fn_00514720();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00514ff0
extern "C" __declspec(naked) void asm_00514ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b36e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0131eda8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test al, 1 }
	__asm { jne L_00515046 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eda8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00514720 }
	__asm { push 0xdde5b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00515046: }
	__asm { push esi }
	__asm { mov ecx, 0x131edac }
	__asm { call fn_005146c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131eda8[];
extern "C" void fn_005146f0();
extern "C" void fn_00514720();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00515070
extern "C" __declspec(naked) void asm_00515070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b36e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0131eda8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test al, 1 }
	__asm { jne L_005150c6 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eda8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00514720 }
	__asm { push 0xdde5b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_005150c6: }
	__asm { push esi }
	__asm { mov ecx, 0x131edac }
	__asm { call fn_005146f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131eda8[];
extern "C" void fn_00403b50();
extern "C" void fn_00514720();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x005151e0
extern "C" __declspec(naked) void asm_005151e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b36e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0131eda8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test al, 1 }
	__asm { jne L_00515236 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eda8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00514720 }
	__asm { push 0xdde5b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00515236: }
	__asm { push esi }
	__asm { mov ecx, 0x131edac }
	__asm { call fn_00403b50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01318fae[];
extern "C" void fn_0041ace0();
extern "C" void fn_00421600();
extern "C" void fn_0051dbd0();
// FUNCTION: ROBLOXSTUDIO 0x0051db80
extern "C" __declspec(naked) void asm_0051db80()
{
	__asm { cmp byte ptr [g_01318fae], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_0051db97 }
	__asm { call fn_0051dbd0 }
	__asm { test al, al }
	__asm { jne L_0051dba1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0051db97: }
	__asm { cmp byte ptr [esi + 0x11], 0 }
	__asm { jne L_0051dba1 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0051dba1: }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { jne L_0051dbab }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0051dbab: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_0051dbc9 }
	__asm { call fn_0041ace0 }
	__asm { test eax, eax }
	__asm { je L_0051dbc9 }
	__asm { mov ecx, eax }
	__asm { call fn_00421600 }
	__asm { cmp eax, 1 }
	__asm { jne L_0051dbc9 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0051dbc9: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e1110c[];
extern "C" void fn_00829b20();
// FUNCTION: ROBLOXSTUDIO 0x0051e110
extern "C" __declspec(naked) void asm_0051e110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c809 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00829b20 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e1110c] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0051e15d }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0051e15d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_0078edd0();
// FUNCTION: ROBLOXSTUDIO 0x0051e9c0
extern "C" __declspec(naked) void asm_0051e9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7e4f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { mov dword ptr [esp + 0x1c], 0xf }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { mov byte ptr [esp + 8], 0 }
	__asm { push 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x30], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { push eax }
	__asm { call fn_0078edd0 }
	__asm { cmp dword ptr [esp + 0x1c], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_0051ea21 }
	__asm { push dword ptr [esp + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0051ea21: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_0078ecb0();
// FUNCTION: ROBLOXSTUDIO 0x0051edd0
extern "C" __declspec(naked) void asm_0051edd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7e4f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { mov dword ptr [esp + 0x1c], 0xf }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { mov byte ptr [esp + 8], 0 }
	__asm { push 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x30], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { push eax }
	__asm { call fn_0078ecb0 }
	__asm { cmp dword ptr [esp + 0x1c], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_0051ee31 }
	__asm { push dword ptr [esp + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0051ee31: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_00960a40();
// FUNCTION: ROBLOXSTUDIO 0x00520820
extern "C" __declspec(naked) void asm_00520820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c828 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x102c0d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0052085a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0052085a: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00960a40 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00520878 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00520878: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_00427010();
// FUNCTION: ROBLOXSTUDIO 0x00520f30
extern "C" __declspec(naked) void asm_00520f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c9b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00427010 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00520fa6 }
	__asm { test al, 1 }
	__asm { jne L_00520f9f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00520f9f }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00520f9f: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_00520fa6: }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { jb L_00520fb8 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00520fb8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_00960a40();
// FUNCTION: ROBLOXSTUDIO 0x00521520
extern "C" __declspec(naked) void asm_00521520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c828 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x102c0b0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0052155a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0052155a: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00960a40 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00521578 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00521578: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00960a40();
// FUNCTION: ROBLOXSTUDIO 0x005220e0
extern "C" __declspec(naked) void asm_005220e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c828 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00522114 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00522114: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00960a40 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00522132 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00522132: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
// FUNCTION: ROBLOXSTUDIO 0x00522360
extern "C" __declspec(naked) void asm_00522360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e4f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x18 }
	__asm { mov esi, ecx }
	__asm { push 0x101e9e0 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_005223c8 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005223c8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0x102c070 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
// FUNCTION: ROBLOXSTUDIO 0x00522ed0
extern "C" __declspec(naked) void asm_00522ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e4f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x10 }
	__asm { mov esi, ecx }
	__asm { push 0x102aa68 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00522f38 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00522f38: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0x102c030 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00523360
extern "C" __declspec(naked) void asm_00523360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c23b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xe }
	__asm { push 0x102aae0 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_005233c9 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005233c9: }
	__asm { mov dword ptr [esi], 0x102bff0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0 }
	__asm { push 0x12d2058 }
	__asm { push 0x12d2038 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00cf67f8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01320164[];
extern "C" void fn_0057e360();
extern "C" void fn_00584010();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00523f90
extern "C" __declspec(naked) void asm_00523f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov ecx, dword ptr [eax + 0xba0] }
	__asm { test ecx, ecx }
	__asm { je L_00524003 }
	__asm { mov al, byte ptr [ecx + 0x1d9] }
	__asm { test al, al }
	__asm { sete al }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { mov byte ptr [ecx + 0x1d9], al }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_00523ffb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00523ffb: }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call fn_00584010 }
	__asm { L_00524003: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01320164[];
extern "C" void fn_0057e360();
extern "C" void fn_005841a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00524130
extern "C" __declspec(naked) void asm_00524130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov ecx, dword ptr [eax + 0xba0] }
	__asm { test ecx, ecx }
	__asm { je L_005241a3 }
	__asm { mov al, byte ptr [ecx + 0x1d8] }
	__asm { test al, al }
	__asm { sete al }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { mov byte ptr [ecx + 0x1d8], al }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_0052419b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0052419b: }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call fn_005841a0 }
	__asm { L_005241a3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_012e06e4[];
extern "C" char g_0131eb88[];
extern "C" char g_0131eba0[];
extern "C" void fn_004a4c90();
extern "C" void fn_00774920();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00526380
extern "C" __declspec(naked) void asm_00526380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7579e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp byte ptr [g_012e06e4], 0 }
	__asm { push esi }
	__asm { je L_005263bd }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xf12990 }
	__asm { push 0x102b220 }
	__asm { push 0xf12f68 }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { L_005263bd: }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_005263ee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_005263ee: }
	__asm { mov esi, dword ptr [g_0131eba0] }
	__asm { push 0x102b1c0 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e1110c[];
extern "C" void fn_00960a40();
// FUNCTION: ROBLOXSTUDIO 0x005264d0
extern "C" __declspec(naked) void asm_005264d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c809 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00960a40 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e1110c] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0052651d }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0052651d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_012e06e4[];
extern "C" char g_0131eb88[];
extern "C" char g_0131eba0[];
extern "C" void fn_004a4c90();
extern "C" void fn_00774920();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00526530
extern "C" __declspec(naked) void asm_00526530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7579e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp byte ptr [g_012e06e4], 0 }
	__asm { push esi }
	__asm { je L_0052656d }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xf12990 }
	__asm { push 0x102b230 }
	__asm { push 0xf12f68 }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { L_0052656d: }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_0052659e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0052659e: }
	__asm { mov esi, dword ptr [g_0131eba0] }
	__asm { push 0x102b268 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10f64[];
extern "C" void fn_00960a40();
// FUNCTION: ROBLOXSTUDIO 0x005266d0
extern "C" __declspec(naked) void asm_005266d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c828 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10f64] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00960a40 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0052671d }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0052671d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
// FUNCTION: ROBLOXSTUDIO 0x005273b0
extern "C" __declspec(naked) void asm_005273b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e4f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push 0x17 }
	__asm { mov esi, ecx }
	__asm { push 0x102b5cc }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00527416 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00527416: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0x102bc14 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00828a60();
// FUNCTION: ROBLOXSTUDIO 0x005274b0
extern "C" __declspec(naked) void asm_005274b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c4b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push 0x12 }
	__asm { mov esi, ecx }
	__asm { push 0x102b644 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_00828a60 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [esi], 0xed5998 }
	__asm { jb L_0052753b }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0052753b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0x102bc34 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
// FUNCTION: ROBLOXSTUDIO 0x00528650
extern "C" __declspec(naked) void asm_00528650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e4f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x15 }
	__asm { mov esi, ecx }
	__asm { push 0x102b8c0 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_005286a6 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_005286a8 }
	__asm { L_005286a6: }
	__asm { xor eax, eax }
	__asm { L_005286a8: }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_005286c6 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005286c6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0x102bb7c }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00574fa0();
// FUNCTION: ROBLOXSTUDIO 0x005293d0
extern "C" __declspec(naked) void asm_005293d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c60e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test esi, esi }
	__asm { je L_00529438 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edi, dword ptr [esi + 0x10c] }
	__asm { test edi, edi }
	__asm { je L_00529416 }
	__asm { mov ecx, edi }
	__asm { call fn_00574fa0 }
	__asm { push edi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00529416: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [esi + 0x108] }
	__asm { pop edi }
	__asm { test ecx, ecx }
	__asm { je L_0052942e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0052942e: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00529438: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" char g_00e10504[];
// FUNCTION: ROBLOXSTUDIO 0x005297a0
extern "C" __declspec(naked) void asm_005297a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { test eax, eax }
	__asm { jne L_005297c8 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005297c8: }
	__asm { cmp eax, 0x1fffffff }
	__asm { jbe L_005297da }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_005297da: }
	__asm { push edi }
	__asm { lea edi, [eax*8] }
	__asm { push edi }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00529802 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00529802: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" void fn_0040c260();
// FUNCTION: ROBLOXSTUDIO 0x0052a870
extern "C" __declspec(naked) void asm_0052a870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0052a8cc }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0052a8b9 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { L_0052a8b9: }
	__asm { mov eax, 0x102ba18 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_0052a8cc: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0040c260();
// FUNCTION: ROBLOXSTUDIO 0x0052ab40
extern "C" __declspec(naked) void asm_0052ab40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0052aba8 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0052ab95 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_0052ab95: }
	__asm { mov eax, 0x102ba08 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_0052aba8: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_0052f690();
extern "C" void fn_009a29d0();
// FUNCTION: ROBLOXSTUDIO 0x0052bef0
extern "C" __declspec(naked) void asm_0052bef0()
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
	__asm { push 0x80 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0052bf3f }
	__asm { mov ecx, eax }
	__asm { call fn_009a29d0 }
	__asm { mov esi, eax }
	__asm { jmp L_0052bf41 }
	__asm { L_0052bf3f: }
	__asm { xor esi, esi }
	__asm { L_0052bf41: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_0052f690 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0052bf72 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0052bf72 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0052bf72: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e92638[];
extern "C" char g_0131ef04[];
extern "C" char g_0131ef08[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0052bf90
extern "C" __declspec(naked) void asm_0052bf90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8bd1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e92638], 0 }
	__asm { jne L_0052bfc4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0052bfc4: }
	__asm { push 0x52e370 }
	__asm { push 0x131c8e4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131ef04] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0052c00e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ef04], eax }
	__asm { push 0xe92638 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131ef08], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0052c00e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131ef08] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e92814[];
extern "C" char g_0131edd0[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0052c370
extern "C" __declspec(naked) void asm_0052c370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8caae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131edd0] }
	__asm { test al, 1 }
	__asm { jne L_0052c3dc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131edd0], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e92814] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131edd8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde880 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0052c3dc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131edd8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x0052d1a0
extern "C" __declspec(naked) void asm_0052d1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7d598 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00422570 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0052d1f2 }
	__asm { test al, 1 }
	__asm { jne L_0052d1f2 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0052d1f2 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0052d1f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_0131ef04[];
extern "C" char g_0131ef08[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0052e370
extern "C" __declspec(naked) void asm_0052e370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8bd1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131ef04] }
	__asm { test al, 1 }
	__asm { jne L_0052e3b2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ef04], eax }
	__asm { push 0xe92638 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131ef08], eax }
	__asm { L_0052e3b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6b744[];
extern "C" char g_0131ef10[];
extern "C" void fn_004199f0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0052e510
extern "C" __declspec(naked) void asm_0052e510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8cb6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131ef10] }
	__asm { test al, 1 }
	__asm { jne L_0052e57c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ef10], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e6b744] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, 0x131ef18 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde8d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0052e57c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131ef18 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6b740[];
extern "C" char g_0131f044[];
extern "C" void fn_0052e510();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0052e590
extern "C" __declspec(naked) void asm_0052e590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8cb8e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131f044] }
	__asm { test al, 1 }
	__asm { jne L_0052e5fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f044], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e6b740] }
	__asm { call fn_0052e510 }
	__asm { push eax }
	__asm { mov ecx, 0x131f048 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0052e5fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131f048 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6b748[];
extern "C" char g_0131f174[];
extern "C" void fn_0052e510();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0052e610
extern "C" __declspec(naked) void asm_0052e610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8cb4e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131f174] }
	__asm { test al, 1 }
	__asm { jne L_0052e67c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f174], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e6b748] }
	__asm { call fn_0052e510 }
	__asm { push eax }
	__asm { mov ecx, 0x131f178 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde8b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0052e67c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131f178 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e88940[];
extern "C" char g_0131f2a4[];
extern "C" void fn_0052e920();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0052e690
extern "C" __declspec(naked) void asm_0052e690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8cace }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131f2a4] }
	__asm { test al, 1 }
	__asm { jne L_0052e6fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f2a4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e88940] }
	__asm { call fn_0052e920 }
	__asm { push eax }
	__asm { mov ecx, 0x131f2a8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde8a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0052e6fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131f2a8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e77d34[];
extern "C" char g_0131f3d4[];
extern "C" void fn_0052e9a0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0052e710
extern "C" __declspec(naked) void asm_0052e710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8ca8e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131f3d4] }
	__asm { test al, 1 }
	__asm { jne L_0052e77c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f3d4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e77d34] }
	__asm { call fn_0052e9a0 }
	__asm { push eax }
	__asm { mov ecx, 0x131f3d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde890 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0052e77c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131f3d8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10500[];
extern "C" void fn_004085f0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0052e860
extern "C" __declspec(naked) void asm_0052e860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0x12d1e20 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [edi] }
	__asm { mov esi, ecx }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test eax, eax }
	__asm { je L_0052e895 }
	__asm { lea eax, [ebp + 8] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { push eax }
	__asm { call fn_004085f0 }
	__asm { L_0052e895: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0052e8cd }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { cmp edx, eax }
	__asm { je L_0052e8cd }
	__asm { L_0052e8a6: }
	__asm { cmp dword ptr [edx], ecx }
	__asm { je L_0052e8b1 }
	__asm { add edx, 4 }
	__asm { cmp edx, eax }
	__asm { jne L_0052e8a6 }
	__asm { L_0052e8b1: }
	__asm { cmp edx, eax }
	__asm { je L_0052e8cd }
	__asm { lea ecx, [edx + 4] }
	__asm { sub eax, ecx }
	__asm { and eax, 0xfffffffc }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { add dword ptr [esi + 0x14], -4 }
	__asm { L_0052e8cd: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e92a6c[];
extern "C" char g_0131f504[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0052e920
extern "C" __declspec(naked) void asm_0052e920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8caee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131f504] }
	__asm { test al, 1 }
	__asm { jne L_0052e98c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f504], eax }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push dword ptr [g_00e92a6c] }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131f508 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde8f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0052e98c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131f508 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e77d30[];
extern "C" char g_0131f634[];
extern "C" void fn_004199f0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0052e9a0
extern "C" __declspec(naked) void asm_0052e9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8cb0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131f634] }
	__asm { test al, 1 }
	__asm { jne L_0052ea0c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f634], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e77d30] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, 0x131f638 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde8e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0052ea0c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131f638 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0052f200
extern "C" __declspec(naked) void asm_0052f200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b930 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0052f259 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0x102b99c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0052f25b }
	__asm { L_0052f259: }
	__asm { xor eax, eax }
	__asm { L_0052f25b: }
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
	__asm { je L_0052f280 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0052f280: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0052f690
extern "C" __declspec(naked) void asm_0052f690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b8b0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0052f6e9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b478 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0052f6eb }
	__asm { L_0052f6e9: }
	__asm { xor eax, eax }
	__asm { L_0052f6eb: }
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

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0052ff50
extern "C" __declspec(naked) void asm_0052ff50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_0052ff99 }
	__asm { cmp eax, 1 }
	__asm { je L_0052ff99 }
	__asm { cmp eax, 2 }
	__asm { je L_0052ffad }
	__asm { cmp eax, 3 }
	__asm { jne L_0052ff89 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12d1cc8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0052ff89: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12d1cc8 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0052ff99: }
	__asm { test esi, esi }
	__asm { je L_0052ffad }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_0052ffad: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0052ffc0
extern "C" __declspec(naked) void asm_0052ffc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_00530009 }
	__asm { cmp eax, 1 }
	__asm { je L_00530009 }
	__asm { cmp eax, 2 }
	__asm { je L_0053001d }
	__asm { cmp eax, 3 }
	__asm { jne L_0052fff9 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12d15d0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0052fff9: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12d15d0 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00530009: }
	__asm { test esi, esi }
	__asm { je L_0053001d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_0053001d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x005303e0
extern "C" __declspec(naked) void asm_005303e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_00530429 }
	__asm { cmp eax, 1 }
	__asm { je L_00530429 }
	__asm { cmp eax, 2 }
	__asm { je L_00530443 }
	__asm { cmp eax, 3 }
	__asm { jne L_00530419 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12d1d88 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00530419: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12d1d88 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00530429: }
	__asm { test esi, esi }
	__asm { je L_00530443 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_00530443: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00530450
extern "C" __declspec(naked) void asm_00530450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_00530499 }
	__asm { cmp eax, 1 }
	__asm { je L_00530499 }
	__asm { cmp eax, 2 }
	__asm { je L_005304b3 }
	__asm { cmp eax, 3 }
	__asm { jne L_00530489 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12d1a88 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00530489: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12d1a88 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00530499: }
	__asm { test esi, esi }
	__asm { je L_005304b3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_005304b3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131f764[];
extern "C" char g_0131f768[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00530860
extern "C" __declspec(naked) void asm_00530860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8bcbe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131f764] }
	__asm { test al, 1 }
	__asm { jne L_0053089a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f764], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_0131f768], eax }
	__asm { L_0053089a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131f76c[];
extern "C" char g_0131f770[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x005308b0
extern "C" __declspec(naked) void asm_005308b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8bc9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131f76c] }
	__asm { test al, 1 }
	__asm { jne L_005308ea }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f76c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_0131f770], eax }
	__asm { L_005308ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00530d90
extern "C" __declspec(naked) void asm_00530d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_00530dd9 }
	__asm { cmp eax, 1 }
	__asm { je L_00530dd9 }
	__asm { cmp eax, 2 }
	__asm { je L_00530df3 }
	__asm { cmp eax, 3 }
	__asm { jne L_00530dc9 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12d1108 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00530dc9: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12d1108 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00530dd9: }
	__asm { test esi, esi }
	__asm { je L_00530df3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_00530df3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00530e00
extern "C" __declspec(naked) void asm_00530e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_00530e49 }
	__asm { cmp eax, 1 }
	__asm { je L_00530e49 }
	__asm { cmp eax, 2 }
	__asm { je L_00530e63 }
	__asm { cmp eax, 3 }
	__asm { jne L_00530e39 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12d11a0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00530e39: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12d11a0 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00530e49: }
	__asm { test esi, esi }
	__asm { je L_00530e63 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_00530e63: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00530ec0
extern "C" __declspec(naked) void asm_00530ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b8a0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00530f19 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0x102b95c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00530f1b }
	__asm { L_00530f19: }
	__asm { xor eax, eax }
	__asm { L_00530f1b: }
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

extern "C" char g_00e10504[];
extern "C" char g_0131c770[];
extern "C" char g_0131c774[];
// FUNCTION: ROBLOXSTUDIO 0x00531830
extern "C" __declspec(naked) void asm_00531830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8dd7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c770] }
	__asm { test al, 1 }
	__asm { jne L_005318a4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c770], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0053188f }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0131c774], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0053188f: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131c774], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005318a4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c774] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c794[];
extern "C" char g_0131c798[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00531e00
extern "C" __declspec(naked) void asm_00531e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8bd3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c798] }
	__asm { test al, 1 }
	__asm { jne L_00531e42 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c798], eax }
	__asm { push 0xe89efc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c794], eax }
	__asm { L_00531e42: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e89efc[];
extern "C" char g_0131c794[];
extern "C" char g_0131c798[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00531e50
extern "C" __declspec(naked) void asm_00531e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8bd3e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_00e89efc], 0 }
	__asm { jne L_00531e85 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00531e85: }
	__asm { push 0x531e00 }
	__asm { push 0x131c79c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c798] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00531ecf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c798], eax }
	__asm { push 0xe89efc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c794], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00531ecf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c794] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c7a4[];
extern "C" char g_0131c7a8[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00531f50
extern "C" __declspec(naked) void asm_00531f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8bc7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c7a8] }
	__asm { test al, 1 }
	__asm { jne L_00531f92 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c7a8], eax }
	__asm { push 0xe68f14 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c7a4], eax }
	__asm { L_00531f92: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e68f14[];
extern "C" char g_0131c7a4[];
extern "C" char g_0131c7a8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00531fa0
extern "C" __declspec(naked) void asm_00531fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8bc7e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_00e68f14], 0 }
	__asm { jne L_00531fd5 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00531fd5: }
	__asm { push 0x531f50 }
	__asm { push 0x131c7ac }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c7a8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0053201f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c7a8], eax }
	__asm { push 0xe68f14 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c7a4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0053201f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c7a4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00532040
extern "C" __declspec(naked) void asm_00532040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b8d0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00532099 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe560f8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0053209b }
	__asm { L_00532099: }
	__asm { xor eax, eax }
	__asm { L_0053209b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00532040();
extern "C" void fn_0098b1c0();
// FUNCTION: ROBLOXSTUDIO 0x005320d0
extern "C" __declspec(naked) void asm_005320d0()
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
	__asm { push 0x108 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0053211f }
	__asm { mov ecx, eax }
	__asm { call fn_0098b1c0 }
	__asm { mov esi, eax }
	__asm { jmp L_00532121 }
	__asm { L_0053211f: }
	__asm { xor esi, esi }
	__asm { L_00532121: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00532040 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00532152 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00532152 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00532152: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e91dc0[];
extern "C" char g_0131c7b4[];
extern "C" void fn_004212b0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00532170
extern "C" __declspec(naked) void asm_00532170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8cb2e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131c7b4] }
	__asm { test al, 1 }
	__asm { jne L_005321dc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c7b4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e91dc0] }
	__asm { call fn_004212b0 }
	__asm { push eax }
	__asm { mov ecx, 0x131c7b8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde910 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_005321dc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131c7b8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00532250
extern "C" __declspec(naked) void asm_00532250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b8c0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_005322a9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3355c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_005322ab }
	__asm { L_005322a9: }
	__asm { xor eax, eax }
	__asm { L_005322ab: }
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

extern "C" char g_00e10508[];
extern "C" void fn_0078edd0();
// FUNCTION: ROBLOXSTUDIO 0x00532410
extern "C" __declspec(naked) void asm_00532410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7e4f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { mov dword ptr [esp + 0x1c], 0xf }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { mov byte ptr [esp + 8], 0 }
	__asm { push 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { call fn_0078edd0 }
	__asm { cmp dword ptr [esp + 0x1c], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_0053246e }
	__asm { push dword ptr [esp + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0053246e: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e102dc[];
extern "C" char g_00e10318[];
extern "C" char g_00e10508[];
extern "C" void fn_00426140();
// FUNCTION: ROBLOXSTUDIO 0x00532570
extern "C" __declspec(naked) void asm_00532570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx - 0x50] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ebx, [ecx - 0x50] }
	__asm { push esi }
	__asm { mov dword ptr [eax + ebx], 0xe3b85c }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x50] }
	__asm { mov dword ptr [ecx + ebx - 4], eax }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov dword ptr [ebx + 4], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [ebx + 4] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [ebx + 8] }
	__asm { call dword ptr [g_00e102dc] }
	__asm { lea ecx, [ebx + 0x50] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_005325cc }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005325cc: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11688[];
extern "C" char g_00e12974[];
extern "C" void fn_004226b0();
extern "C" void fn_006b9e50();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x005347e0
extern "C" __declspec(naked) void asm_005347e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8e823 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0x102cb0c }
	__asm { mov dword ptr [edi + 8], 0x102cbf0 }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_006b9e50 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [g_00e12974] }
	__asm { lea eax, [edi + 0x18] }
	__asm { push 5 }
	__asm { push 8 }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_006b9e50 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0053485b }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0053485b: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11688] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e116ac[];
extern "C" char g_00e116b0[];
extern "C" char g_00e116b4[];
extern "C" char g_00e116b8[];
extern "C" char g_00e12ca4[];
extern "C" char g_012bfc38[];
// FUNCTION: ROBLOXSTUDIO 0x00534c70
extern "C" __declspec(naked) void asm_00534c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_00e12ca4] }
	__asm { mov esi, ecx }
	__asm { call edi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e116ac] }
	__asm { mov ecx, esi }
	__asm { mov ebx, eax }
	__asm { call edi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e116b0] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call dword ptr [g_00e116b4] }
	__asm { cmp byte ptr [g_012bfc38], 0 }
	__asm { je L_00534ccc }
	__asm { cmp ebx, dword ptr [ebp - 4] }
	__asm { jne L_00534ccc }
	__asm { mov ecx, esi }
	__asm { call edi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e116b0] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call edi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e116b8] }
	__asm { L_00534ccc: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00535e60();
extern "C" void fn_009a8a00();
// FUNCTION: ROBLOXSTUDIO 0x00535950
extern "C" __declspec(naked) void asm_00535950()
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
	__asm { push 0x174 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0053599f }
	__asm { mov ecx, eax }
	__asm { call fn_009a8a00 }
	__asm { mov esi, eax }
	__asm { jmp L_005359a1 }
	__asm { L_0053599f: }
	__asm { xor esi, esi }
	__asm { L_005359a1: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00535e60 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_005359d2 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_005359d2 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_005359d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e92bbc[];
extern "C" char g_0131f77c[];
extern "C" char g_0131f780[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x005359f0
extern "C" __declspec(naked) void asm_005359f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8e93e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e92bbc], 0 }
	__asm { jne L_00535a24 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00535a24: }
	__asm { push 0x535da0 }
	__asm { push 0x131c908 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131f77c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00535a6e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f77c], eax }
	__asm { push 0xe92bbc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131f780], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00535a6e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131f780] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131f77c[];
extern "C" char g_0131f780[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00535da0
extern "C" __declspec(naked) void asm_00535da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8e93e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131f77c] }
	__asm { test al, 1 }
	__asm { jne L_00535de2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f77c], eax }
	__asm { push 0xe92bbc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131f780], eax }
	__asm { L_00535de2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00535e60
extern "C" __declspec(naked) void asm_00535e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8e910 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00535eb9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b538 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00535ebb }
	__asm { L_00535eb9: }
	__asm { xor eax, eax }
	__asm { L_00535ebb: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00535ef0
extern "C" __declspec(naked) void asm_00535ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8e920 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00535f49 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0x102cf08 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00535f4b }
	__asm { L_00535f49: }
	__asm { xor eax, eax }
	__asm { L_00535f4b: }
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
	__asm { je L_00535f70 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00535f70: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10f54[];
extern "C" char g_00e10f58[];
// FUNCTION: ROBLOXSTUDIO 0x00536850
extern "C" __declspec(naked) void asm_00536850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8f589 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [ebp + 8], 0x12e1de0 }
	__asm { push esi }
	__asm { sete al }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_005368b7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 4] }
	__asm { test eax, eax }
	__asm { je L_005368b7 }
	__asm { mov cl, byte ptr [eax + 0xb1] }
	__asm { test cl, cl }
	__asm { jne L_005368b7 }
	__asm { add eax, 0x68 }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10f58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x24] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10f54] }
	__asm { L_005368b7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f54[];
extern "C" char g_00e10f58[];
extern "C" void fn_005369b0();
// FUNCTION: ROBLOXSTUDIO 0x00536f20
extern "C" __declspec(naked) void asm_00536f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8f7e9 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x1c], 0 }
	__asm { je L_00536f91 }
	__asm { lea eax, [edi + 0x38] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x10] }
	__asm { call dword ptr [g_00e10f58] }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ebx, eax }
	__asm { lea eax, [edi + 0x18] }
	__asm { mov esi, 0xa }
	__asm { L_00536f70: }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_005369b0 }
	__asm { lea eax, [edi + 0x18] }
	__asm { dec esi }
	__asm { jne L_00536f70 }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { call dword ptr [g_00e10f54] }
	__asm { L_00536f91: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11b70[];
extern "C" char g_00e12bd0[];
extern "C" void fn_0045c560();
extern "C" void fn_004fe4f0();
// FUNCTION: ROBLOXSTUDIO 0x00537180
extern "C" __declspec(naked) void asm_00537180()
{
	__asm { L_00537180: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ebx, ecx }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x30] }
	__asm { call fn_0045c560 }
	__asm { push dword ptr [eax + 4] }
	__asm { lea ecx, [ebx + 0x30] }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_004fe4f0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12bd0] }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_005371dc }
	__asm { xor esi, esi }
	__asm { test edi, edi }
	__asm { jle L_005371dc }
	__asm { L_005371c1: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call dword ptr [g_00e11b70] }
	__asm { test eax, eax }
	__asm { je L_005371d7 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call L_00537180 }
	__asm { L_005371d7: }
	__asm { inc esi }
	__asm { cmp esi, edi }
	__asm { jl L_005371c1 }
	__asm { L_005371dc: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e129c8[];
extern "C" void fn_00536360();
// FUNCTION: ROBLOXSTUDIO 0x005372e0
extern "C" __declspec(naked) void asm_005372e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8e609 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00536360 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e129c8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0053732d }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0053732d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e12a60[];
extern "C" void fn_00891b30();
// FUNCTION: ROBLOXSTUDIO 0x00538030
extern "C" __declspec(naked) void asm_00538030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd788c9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { call fn_00891b30 }
	__asm { add eax, 0x1c }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0053805f }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0053805f: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea ecx, [esi - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12a60] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00539290
extern "C" __declspec(naked) void asm_00539290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x60] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_005392b9 }
	__asm { L_005392a5: }
	__asm { cmp dword ptr [eax + 0x10], edx }
	__asm { jae L_005392af }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_005392b3 }
	__asm { L_005392af: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_005392b3: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_005392a5 }
	__asm { L_005392b9: }
	__asm { cmp ecx, esi }
	__asm { je L_005392c5 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp edx, dword ptr [ecx + 0x10] }
	__asm { jae L_005392c8 }
	__asm { L_005392c5: }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { L_005392c8: }
	__asm { lea eax, [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, esi }
	__asm { pop esi }
	__asm { je L_005392d9 }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005392d9: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12ad0[];
extern "C" char g_00e12c6c[];
extern "C" char g_00e12c70[];
extern "C" void fn_00539290();
extern "C" void fn_0053bbc0();
// FUNCTION: ROBLOXSTUDIO 0x005392e0
extern "C" __declspec(naked) void asm_005392e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_0053933f }
	__asm { push edi }
	__asm { call fn_00539290 }
	__asm { test eax, eax }
	__asm { jne L_00539328 }
	__asm { push dword ptr [edi + 0x38] }
	__asm { mov ecx, esi }
	__asm { call fn_00539290 }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { je L_0053933f }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e12c70] }
	__asm { test al, al }
	__asm { jne L_0053931e }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12c6c] }
	__asm { L_0053931e: }
	__asm { push 1 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_0053bbc0 }
	__asm { L_00539328: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00539290 }
	__asm { test eax, eax }
	__asm { je L_0053933f }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12ad0] }
	__asm { L_0053933f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12c6c[];
extern "C" char g_00e12c70[];
extern "C" void fn_00539290();
extern "C" void fn_0053bbc0();
// FUNCTION: ROBLOXSTUDIO 0x0053b450
extern "C" __declspec(naked) void asm_0053b450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00539290 }
	__asm { test eax, eax }
	__asm { jne L_0053b493 }
	__asm { push dword ptr [esi + 0x38] }
	__asm { mov ecx, edi }
	__asm { call fn_00539290 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_0053b49b }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12c70] }
	__asm { test al, al }
	__asm { jne L_0053b489 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12c6c] }
	__asm { L_0053b489: }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0053bbc0 }
	__asm { L_0053b493: }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0053b49b: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e109f4[];
extern "C" char g_00e10ff4[];
extern "C" char g_01318fa4[];
extern "C" char g_01318fa6[];
// FUNCTION: ROBLOXSTUDIO 0x0053bd90
extern "C" __declspec(naked) void asm_0053bd90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8832c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi + 0xae], 0 }
	__asm { jne L_0053be20 }
	__asm { cmp byte ptr [g_01318fa6], 0 }
	__asm { je L_0053bdc7 }
	__asm { cmp byte ptr [g_01318fa4], 0 }
	__asm { jne L_0053be20 }
	__asm { L_0053bdc7: }
	__asm { push esi }
	__asm { push 0xc }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0053bdf8 }
	__asm { push 0x3ef }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10ff4] }
	__asm { mov dword ptr [esi], 0x1022f70 }
	__asm { jmp L_0053bdfa }
	__asm { L_0053bdf8: }
	__asm { xor esi, esi }
	__asm { L_0053bdfa: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { movzx eax, byte ptr [g_01318fa6] }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e109f4] }
	__asm { add esp, 0xc }
	__asm { mov byte ptr [edi + 0xae], 1 }
	__asm { pop esi }
	__asm { L_0053be20: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10fbc[];
extern "C" char g_00e10ff4[];
// FUNCTION: ROBLOXSTUDIO 0x0053be30
extern "C" __declspec(naked) void asm_0053be30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8832c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi + 0xaf], 0 }
	__asm { jne L_0053beab }
	__asm { cmp byte ptr [edi + 0xae], 0 }
	__asm { jne L_0053beab }
	__asm { push esi }
	__asm { push 0xc }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0053be8f }
	__asm { push 0x3f3 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10ff4] }
	__asm { mov dword ptr [esi], 0x1022f70 }
	__asm { jmp L_0053be91 }
	__asm { L_0053be8f: }
	__asm { xor esi, esi }
	__asm { L_0053be91: }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10fbc] }
	__asm { add esp, 8 }
	__asm { mov byte ptr [edi + 0xaf], 1 }
	__asm { pop esi }
	__asm { L_0053beab: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e11094[];
extern "C" char g_00e12678[];
// FUNCTION: ROBLOXSTUDIO 0x0053dfc0
extern "C" __declspec(naked) void asm_0053dfc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp edx, dword ptr [ecx + 0x14] }
	__asm { jne L_0053dfee }
	__asm { cmp word ptr [eax + 8], 8 }
	__asm { jne L_0053dfee }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x12c0b18 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0053dfee: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x18] }
	__asm { cmp edx, esi }
	__asm { jne L_0053e00c }
	__asm { cmp word ptr [eax + 8], 8 }
	__asm { jne L_0053e00c }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12678] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0053e00c: }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e11094] }
}

extern "C" char g_00e10f6c[];
extern "C" char g_00e11110[];
extern "C" char g_00e12690[];
extern "C" void fn_0053a640();
// FUNCTION: ROBLOXSTUDIO 0x0053e180
extern "C" __declspec(naked) void asm_0053e180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd788c9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12690] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0053e1d9 }
	__asm { push eax }
	__asm { add ecx, 0xa8 }
	__asm { call dword ptr [g_00e10f6c] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [eax + 0xb8], 0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { call fn_0053a640 }
	__asm { L_0053e1d9: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0053f270();
// FUNCTION: ROBLOXSTUDIO 0x0053e7a0
extern "C" __declspec(naked) void asm_0053e7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp esi, ebx }
	__asm { je L_0053e7d7 }
	__asm { L_0053e7b5: }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_0053f270 }
	__asm { add esi, 8 }
	__asm { cmp esi, ebx }
	__asm { jne L_0053e7b5 }
	__asm { L_0053e7d7: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
