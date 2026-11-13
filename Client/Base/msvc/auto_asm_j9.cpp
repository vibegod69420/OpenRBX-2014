// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x005e80a0
extern "C" __declspec(naked) void asm_005e80a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ebx, esi }
	__asm { add esi, 0x24 }
	__asm { cmp esi, edx }
	__asm { je L_005e80ed }
	__asm { push edi }
	__asm { L_005e80b5: }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_005e80e5 }
	__asm { mov edi, ebx }
	__asm { add ebx, 0x24 }
	__asm { cmp edi, esi }
	__asm { je L_005e80d3 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00403540 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_005e80d3: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [edi + 0x20], ecx }
	__asm { L_005e80e5: }
	__asm { add esi, 0x24 }
	__asm { cmp esi, edx }
	__asm { jne L_005e80b5 }
	__asm { pop edi }
	__asm { L_005e80ed: }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005e8db0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e84a0
extern "C" __declspec(naked) void asm_005e84a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x28] }
	__asm { call fn_005e8db0 }
	__asm { push dword ptr [edi + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_005e84ec }
	__asm { test al, 1 }
	__asm { jne L_005e84e5 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [edi + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_005e84e5 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_005e84e5: }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { L_005e84ec: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005e8b70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e8500
extern "C" __declspec(naked) void asm_005e8500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp esi, edi }
	__asm { je L_005e855f }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_005e853b }
	__asm { push dword ptr [esi + 4] }
	__asm { push eax }
	__asm { call fn_005e8b70 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_005e853b: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { L_005e855f: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
extern "C" void fn_00410e50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e86a0
extern "C" __declspec(naked) void asm_005e86a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40368 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test edx, edx }
	__asm { jne L_005e86f3 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp + 8], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe19198 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_005e86f3: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ecx + 8] }
	__asm { push eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { push eax }
	__asm { call fn_00410e50 }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { jb L_005e8723 }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e8723: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_005df3b0();
extern "C" void fn_0060f6f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e8770
extern "C" __declspec(naked) void asm_005e8770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0eb88 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe1ada0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax + 0x3c] }
	__asm { call fn_005df3b0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0060f6f0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_005e87c4 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e87c4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e8bb0
extern "C" __declspec(naked) void asm_005e8bb0()
{
	__asm { L_005e8bb0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov ebx, ecx }
	__asm { mov edi, esi }
	__asm { jne L_005e8c03 }
	__asm { L_005e8bc3: }
	__asm { push dword ptr [edi + 8] }
	__asm { mov ecx, ebx }
	__asm { call L_005e8bb0 }
	__asm { cmp dword ptr [esi + 0x28], 0x10 }
	__asm { mov edi, dword ptr [edi] }
	__asm { jb L_005e8be0 }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e8be0: }
	__asm { mov dword ptr [esi + 0x28], 0xf }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 0x14], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { mov esi, edi }
	__asm { je L_005e8bc3 }
	__asm { L_005e8c03: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005ea450();
// FUNCTION: ROBLOXSTUDIO 0x005e9ae0
extern "C" __declspec(naked) void asm_005e9ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { test eax, eax }
	__asm { jne L_005e9af0 }
	__asm { mov eax, dword ptr [esi + 0x4c] }
	__asm { L_005e9af0: }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_005ea450 }
	__asm { mov edx, dword ptr [esi + 0x50] }
	__asm { add esp, 0x10 }
	__asm { test edx, edx }
	__asm { je L_005e9b28 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp dword ptr [eax + 0x38], 1 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { jne L_005e9b24 }
	__asm { push dword ptr [esi + 0x4c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push ecx }
	__asm { call dword ptr [eax + 0x7c] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_005e9b24: }
	__asm { mov byte ptr [esi + 0x54], 1 }
	__asm { L_005e9b28: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0041fe80();
extern "C" void fn_005eb810();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005eb680
extern "C" __declspec(naked) void asm_005eb680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ecba }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_005eb810 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x5c] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_005eb708 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp + 0xf] }
	__asm { push ecx }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_005eb708: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x005ec140
extern "C" __declspec(naked) void asm_005ec140()
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
	__asm { jne L_005ec168 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005ec168: }
	__asm { cmp eax, 0xccccccc }
	__asm { jbe L_005ec17a }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_005ec17a: }
	__asm { push edi }
	__asm { lea edi, [eax + eax*4] }
	__asm { shl edi, 2 }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_005ec1a0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005ec1a0: }
	__asm { call dword ptr [g_00e1025c] }
}

// FUNCTION: ROBLOXSTUDIO 0x005f2760
extern "C" __declspec(naked) void asm_005f2760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { cmp dword ptr [ebx], edi }
	__asm { jb L_005f27a7 }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { test edi, edi }
	__asm { je L_005f2795 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [edx] }
	__asm { mov edi, edi }
	__asm { L_005f2780: }
	__asm { test edx, edx }
	__asm { je L_005f2795 }
	__asm { test ecx, ecx }
	__asm { je L_005f2795 }
	__asm { mov al, byte ptr [edx] }
	__asm { cmp al, byte ptr [ecx] }
	__asm { jne L_005f2795 }
	__asm { inc esi }
	__asm { inc edx }
	__asm { inc ecx }
	__asm { cmp esi, edi }
	__asm { jb L_005f2780 }
	__asm { L_005f2795: }
	__asm { cmp esi, edi }
	__asm { pop esi }
	__asm { jne L_005f27a7 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add dword ptr [eax], edi }
	__asm { sub dword ptr [ebx], edi }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005f27a7: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9d88[];
extern "C" char g_012d9d8c[];
extern "C" char g_012d9d9c[];
extern "C" char g_012d9da8[];
// FUNCTION: ROBLOXSTUDIO 0x005f2900
extern "C" __declspec(naked) void asm_005f2900()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1ccc4 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1ccd8 }
	__asm { mov dword ptr [g_012d9d88], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d8c], eax }
	__asm { test eax, eax }
	__asm { je L_005f292d }
	__asm { test bl, bl }
	__asm { je L_005f292f }
	__asm { L_005f292d: }
	__asm { mov bl, 1 }
	__asm { L_005f292f: }
	__asm { push 0xe1ccec }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d9c], eax }
	__asm { test eax, eax }
	__asm { je L_005f2943 }
	__asm { test bl, bl }
	__asm { je L_005f2945 }
	__asm { L_005f2943: }
	__asm { mov bl, 1 }
	__asm { L_005f2945: }
	__asm { push 0xe1ccfc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9da8], eax }
	__asm { test eax, eax }
	__asm { je L_005f295e }
	__asm { test bl, bl }
	__asm { jne L_005f295e }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f295e: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012da870[];
extern "C" char g_012da878[];
extern "C" char g_012da880[];
extern "C" char g_012da88c[];
// FUNCTION: ROBLOXSTUDIO 0x005f40b0
extern "C" __declspec(naked) void asm_005f40b0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1e10c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1e124 }
	__asm { mov dword ptr [g_012da870], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012da878], eax }
	__asm { test eax, eax }
	__asm { je L_005f40dd }
	__asm { test bl, bl }
	__asm { je L_005f40df }
	__asm { L_005f40dd: }
	__asm { mov bl, 1 }
	__asm { L_005f40df: }
	__asm { push 0xe1e13c }
	__asm { call esi }
	__asm { mov dword ptr [g_012da880], eax }
	__asm { test eax, eax }
	__asm { je L_005f40f3 }
	__asm { test bl, bl }
	__asm { je L_005f40f5 }
	__asm { L_005f40f3: }
	__asm { mov bl, 1 }
	__asm { L_005f40f5: }
	__asm { push 0xe1e154 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da88c], eax }
	__asm { test eax, eax }
	__asm { je L_005f410e }
	__asm { test bl, bl }
	__asm { jne L_005f410e }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f410e: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012da8e8[];
extern "C" char g_012da8f0[];
extern "C" char g_012da900[];
extern "C" char g_012da908[];
// FUNCTION: ROBLOXSTUDIO 0x005f4230
extern "C" __declspec(naked) void asm_005f4230()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1e240 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1e25c }
	__asm { mov dword ptr [g_012da8e8], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012da8f0], eax }
	__asm { test eax, eax }
	__asm { je L_005f425d }
	__asm { test bl, bl }
	__asm { je L_005f425f }
	__asm { L_005f425d: }
	__asm { mov bl, 1 }
	__asm { L_005f425f: }
	__asm { push 0xe1e274 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da900], eax }
	__asm { test eax, eax }
	__asm { je L_005f4273 }
	__asm { test bl, bl }
	__asm { je L_005f4275 }
	__asm { L_005f4273: }
	__asm { mov bl, 1 }
	__asm { L_005f4275: }
	__asm { push 0xe1e28c }
	__asm { call esi }
	__asm { mov dword ptr [g_012da908], eax }
	__asm { test eax, eax }
	__asm { je L_005f428e }
	__asm { test bl, bl }
	__asm { jne L_005f428e }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f428e: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012daa98[];
extern "C" char g_012daaa8[];
extern "C" char g_012daaac[];
extern "C" char g_012daab8[];
extern "C" char g_012daac0[];
// FUNCTION: ROBLOXSTUDIO 0x005f4730
extern "C" __declspec(naked) void asm_005f4730()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1e720 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1e738 }
	__asm { mov dword ptr [g_012daa98], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012daaa8], eax }
	__asm { test eax, eax }
	__asm { je L_005f475d }
	__asm { test bl, bl }
	__asm { je L_005f475f }
	__asm { L_005f475d: }
	__asm { mov bl, 1 }
	__asm { L_005f475f: }
	__asm { push 0xe1e758 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daaac], eax }
	__asm { test eax, eax }
	__asm { je L_005f4773 }
	__asm { test bl, bl }
	__asm { je L_005f4775 }
	__asm { L_005f4773: }
	__asm { mov bl, 1 }
	__asm { L_005f4775: }
	__asm { push 0xe1e770 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daab8], eax }
	__asm { test eax, eax }
	__asm { je L_005f4789 }
	__asm { test bl, bl }
	__asm { je L_005f478b }
	__asm { L_005f4789: }
	__asm { mov bl, 1 }
	__asm { L_005f478b: }
	__asm { push 0xe1e790 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daac0], eax }
	__asm { test eax, eax }
	__asm { je L_005f47a4 }
	__asm { test bl, bl }
	__asm { jne L_005f47a4 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f47a4: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dab4c[];
extern "C" char g_012dab54[];
extern "C" char g_012dab64[];
extern "C" char g_012dab6c[];
// FUNCTION: ROBLOXSTUDIO 0x005f4940
extern "C" __declspec(naked) void asm_005f4940()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1e908 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1e920 }
	__asm { mov dword ptr [g_012dab4c], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab54], eax }
	__asm { test eax, eax }
	__asm { je L_005f496d }
	__asm { test bl, bl }
	__asm { je L_005f496f }
	__asm { L_005f496d: }
	__asm { mov bl, 1 }
	__asm { L_005f496f: }
	__asm { push 0xe1e93c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab64], eax }
	__asm { test eax, eax }
	__asm { je L_005f4983 }
	__asm { test bl, bl }
	__asm { je L_005f4985 }
	__asm { L_005f4983: }
	__asm { mov bl, 1 }
	__asm { L_005f4985: }
	__asm { push 0xe1e954 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab6c], eax }
	__asm { test eax, eax }
	__asm { je L_005f499e }
	__asm { test bl, bl }
	__asm { jne L_005f499e }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f499e: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dabcc[];
extern "C" char g_012dabd4[];
extern "C" char g_012dabe0[];
extern "C" char g_012dabec[];
extern "C" char g_012dabf0[];
// FUNCTION: ROBLOXSTUDIO 0x005f4ab0
extern "C" __declspec(naked) void asm_005f4ab0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1ea8c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1ea9c }
	__asm { mov dword ptr [g_012dabcc], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dabd4], eax }
	__asm { test eax, eax }
	__asm { je L_005f4add }
	__asm { test bl, bl }
	__asm { je L_005f4adf }
	__asm { L_005f4add: }
	__asm { mov bl, 1 }
	__asm { L_005f4adf: }
	__asm { push 0xe1eaac }
	__asm { call esi }
	__asm { mov dword ptr [g_012dabe0], eax }
	__asm { test eax, eax }
	__asm { je L_005f4af3 }
	__asm { test bl, bl }
	__asm { je L_005f4af5 }
	__asm { L_005f4af3: }
	__asm { mov bl, 1 }
	__asm { L_005f4af5: }
	__asm { push 0xe1eac8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dabec], eax }
	__asm { test eax, eax }
	__asm { je L_005f4b09 }
	__asm { test bl, bl }
	__asm { je L_005f4b0b }
	__asm { L_005f4b09: }
	__asm { mov bl, 1 }
	__asm { L_005f4b0b: }
	__asm { push 0xe1eae0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dabf0], eax }
	__asm { test eax, eax }
	__asm { je L_005f4b24 }
	__asm { test bl, bl }
	__asm { jne L_005f4b24 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f4b24: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dacd0[];
extern "C" char g_012dacdc[];
extern "C" char g_012dace8[];
extern "C" char g_012dacec[];
// FUNCTION: ROBLOXSTUDIO 0x005f4d90
extern "C" __declspec(naked) void asm_005f4d90()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1edac }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1edc0 }
	__asm { mov dword ptr [g_012dacd0], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dacdc], eax }
	__asm { test eax, eax }
	__asm { je L_005f4dbd }
	__asm { test bl, bl }
	__asm { je L_005f4dbf }
	__asm { L_005f4dbd: }
	__asm { mov bl, 1 }
	__asm { L_005f4dbf: }
	__asm { push 0xe1edd8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dace8], eax }
	__asm { test eax, eax }
	__asm { je L_005f4dd3 }
	__asm { test bl, bl }
	__asm { je L_005f4dd5 }
	__asm { L_005f4dd3: }
	__asm { mov bl, 1 }
	__asm { L_005f4dd5: }
	__asm { push 0xe1edf4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dacec], eax }
	__asm { test eax, eax }
	__asm { je L_005f4dee }
	__asm { test bl, bl }
	__asm { jne L_005f4dee }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f4dee: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dad68[];
extern "C" char g_012dad78[];
extern "C" char g_012dad80[];
extern "C" char g_012dad88[];
// FUNCTION: ROBLOXSTUDIO 0x005f4f90
extern "C" __declspec(naked) void asm_005f4f90()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1ef3c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1ef58 }
	__asm { mov dword ptr [g_012dad68], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dad78], eax }
	__asm { test eax, eax }
	__asm { je L_005f4fbd }
	__asm { test bl, bl }
	__asm { je L_005f4fbf }
	__asm { L_005f4fbd: }
	__asm { mov bl, 1 }
	__asm { L_005f4fbf: }
	__asm { push 0xe1ef6c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dad80], eax }
	__asm { test eax, eax }
	__asm { je L_005f4fd3 }
	__asm { test bl, bl }
	__asm { je L_005f4fd5 }
	__asm { L_005f4fd3: }
	__asm { mov bl, 1 }
	__asm { L_005f4fd5: }
	__asm { push 0xe1ef84 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dad88], eax }
	__asm { test eax, eax }
	__asm { je L_005f4fee }
	__asm { test bl, bl }
	__asm { jne L_005f4fee }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f4fee: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dad90[];
extern "C" char g_012dad98[];
extern "C" char g_012dada0[];
extern "C" char g_012dadac[];
// FUNCTION: ROBLOXSTUDIO 0x005f5000
extern "C" __declspec(naked) void asm_005f5000()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1ef94 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1efb0 }
	__asm { mov dword ptr [g_012dad90], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dad98], eax }
	__asm { test eax, eax }
	__asm { je L_005f502d }
	__asm { test bl, bl }
	__asm { je L_005f502f }
	__asm { L_005f502d: }
	__asm { mov bl, 1 }
	__asm { L_005f502f: }
	__asm { push 0xe1efd4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dada0], eax }
	__asm { test eax, eax }
	__asm { je L_005f5043 }
	__asm { test bl, bl }
	__asm { je L_005f5045 }
	__asm { L_005f5043: }
	__asm { mov bl, 1 }
	__asm { L_005f5045: }
	__asm { push 0xe1eff4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dadac], eax }
	__asm { test eax, eax }
	__asm { je L_005f505e }
	__asm { test bl, bl }
	__asm { jne L_005f505e }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f505e: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dadc4[];
extern "C" char g_012dadcc[];
extern "C" char g_012dadd8[];
extern "C" char g_012daddc[];
// FUNCTION: ROBLOXSTUDIO 0x005f50b0
extern "C" __declspec(naked) void asm_005f50b0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1f044 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1f05c }
	__asm { mov dword ptr [g_012dadc4], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dadcc], eax }
	__asm { test eax, eax }
	__asm { je L_005f50dd }
	__asm { test bl, bl }
	__asm { je L_005f50df }
	__asm { L_005f50dd: }
	__asm { mov bl, 1 }
	__asm { L_005f50df: }
	__asm { push 0xe1f078 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dadd8], eax }
	__asm { test eax, eax }
	__asm { je L_005f50f3 }
	__asm { test bl, bl }
	__asm { je L_005f50f5 }
	__asm { L_005f50f3: }
	__asm { mov bl, 1 }
	__asm { L_005f50f5: }
	__asm { push 0xe1f09c }
	__asm { call esi }
	__asm { mov dword ptr [g_012daddc], eax }
	__asm { test eax, eax }
	__asm { je L_005f510e }
	__asm { test bl, bl }
	__asm { jne L_005f510e }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f510e: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012daea0[];
extern "C" char g_012daea8[];
extern "C" char g_012daeac[];
extern "C" char g_012daeb8[];
// FUNCTION: ROBLOXSTUDIO 0x005f52f0
extern "C" __declspec(naked) void asm_005f52f0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1f2a8 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1f2c0 }
	__asm { mov dword ptr [g_012daea0], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012daea8], eax }
	__asm { test eax, eax }
	__asm { je L_005f531d }
	__asm { test bl, bl }
	__asm { je L_005f531f }
	__asm { L_005f531d: }
	__asm { mov bl, 1 }
	__asm { L_005f531f: }
	__asm { push 0xe1f2dc }
	__asm { call esi }
	__asm { mov dword ptr [g_012daeac], eax }
	__asm { test eax, eax }
	__asm { je L_005f5333 }
	__asm { test bl, bl }
	__asm { je L_005f5335 }
	__asm { L_005f5333: }
	__asm { mov bl, 1 }
	__asm { L_005f5335: }
	__asm { push 0xe1f2fc }
	__asm { call esi }
	__asm { mov dword ptr [g_012daeb8], eax }
	__asm { test eax, eax }
	__asm { je L_005f534e }
	__asm { test bl, bl }
	__asm { jne L_005f534e }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f534e: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db128[];
extern "C" char g_012db130[];
extern "C" char g_012db134[];
extern "C" char g_012db144[];
extern "C" char g_012db14c[];
// FUNCTION: ROBLOXSTUDIO 0x005f59e0
extern "C" __declspec(naked) void asm_005f59e0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1f8f8 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1f914 }
	__asm { mov dword ptr [g_012db128], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db130], eax }
	__asm { test eax, eax }
	__asm { je L_005f5a0d }
	__asm { test bl, bl }
	__asm { je L_005f5a0f }
	__asm { L_005f5a0d: }
	__asm { mov bl, 1 }
	__asm { L_005f5a0f: }
	__asm { push 0xe1f92c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db134], eax }
	__asm { test eax, eax }
	__asm { je L_005f5a23 }
	__asm { test bl, bl }
	__asm { je L_005f5a25 }
	__asm { L_005f5a23: }
	__asm { mov bl, 1 }
	__asm { L_005f5a25: }
	__asm { push 0xe1f940 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db144], eax }
	__asm { test eax, eax }
	__asm { je L_005f5a39 }
	__asm { test bl, bl }
	__asm { je L_005f5a3b }
	__asm { L_005f5a39: }
	__asm { mov bl, 1 }
	__asm { L_005f5a3b: }
	__asm { push 0xe1f954 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db14c], eax }
	__asm { test eax, eax }
	__asm { je L_005f5a54 }
	__asm { test bl, bl }
	__asm { jne L_005f5a54 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f5a54: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbb0c[];
extern "C" char g_012dbb14[];
extern "C" char g_012dbb20[];
extern "C" char g_012dbb2c[];
// FUNCTION: ROBLOXSTUDIO 0x005f6ff0
extern "C" __declspec(naked) void asm_005f6ff0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe20de4 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe20df8 }
	__asm { mov dword ptr [g_012dbb0c], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb14], eax }
	__asm { test eax, eax }
	__asm { je L_005f701d }
	__asm { test bl, bl }
	__asm { je L_005f701f }
	__asm { L_005f701d: }
	__asm { mov bl, 1 }
	__asm { L_005f701f: }
	__asm { push 0xe20e08 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb20], eax }
	__asm { test eax, eax }
	__asm { je L_005f7033 }
	__asm { test bl, bl }
	__asm { je L_005f7035 }
	__asm { L_005f7033: }
	__asm { mov bl, 1 }
	__asm { L_005f7035: }
	__asm { push 0xe20e20 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb2c], eax }
	__asm { test eax, eax }
	__asm { je L_005f704e }
	__asm { test bl, bl }
	__asm { jne L_005f704e }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f704e: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbbe4[];
extern "C" char g_012dbbec[];
extern "C" char g_012dbbf4[];
extern "C" char g_012dbbfc[];
// FUNCTION: ROBLOXSTUDIO 0x005f7280
extern "C" __declspec(naked) void asm_005f7280()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe21034 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe21048 }
	__asm { mov dword ptr [g_012dbbe4], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbbec], eax }
	__asm { test eax, eax }
	__asm { je L_005f72ad }
	__asm { test bl, bl }
	__asm { je L_005f72af }
	__asm { L_005f72ad: }
	__asm { mov bl, 1 }
	__asm { L_005f72af: }
	__asm { push 0xe21068 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbbf4], eax }
	__asm { test eax, eax }
	__asm { je L_005f72c3 }
	__asm { test bl, bl }
	__asm { je L_005f72c5 }
	__asm { L_005f72c3: }
	__asm { mov bl, 1 }
	__asm { L_005f72c5: }
	__asm { push 0xe2107c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbbfc], eax }
	__asm { test eax, eax }
	__asm { je L_005f72de }
	__asm { test bl, bl }
	__asm { jne L_005f72de }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f72de: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbc14[];
extern "C" char g_012dbc20[];
extern "C" char g_012dbc28[];
extern "C" char g_012dbc30[];
// FUNCTION: ROBLOXSTUDIO 0x005f7330
extern "C" __declspec(naked) void asm_005f7330()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe210dc }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe210f8 }
	__asm { mov dword ptr [g_012dbc14], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc20], eax }
	__asm { test eax, eax }
	__asm { je L_005f735d }
	__asm { test bl, bl }
	__asm { je L_005f735f }
	__asm { L_005f735d: }
	__asm { mov bl, 1 }
	__asm { L_005f735f: }
	__asm { push 0xe21114 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc28], eax }
	__asm { test eax, eax }
	__asm { je L_005f7373 }
	__asm { test bl, bl }
	__asm { je L_005f7375 }
	__asm { L_005f7373: }
	__asm { mov bl, 1 }
	__asm { L_005f7375: }
	__asm { push 0xe21130 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc30], eax }
	__asm { test eax, eax }
	__asm { je L_005f738e }
	__asm { test bl, bl }
	__asm { jne L_005f738e }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f738e: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbc88[];
extern "C" char g_012dbc8c[];
extern "C" char g_012dbc98[];
extern "C" char g_012dbca0[];
// FUNCTION: ROBLOXSTUDIO 0x005f7490
extern "C" __declspec(naked) void asm_005f7490()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe21230 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe21244 }
	__asm { mov dword ptr [g_012dbc88], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc8c], eax }
	__asm { test eax, eax }
	__asm { je L_005f74bd }
	__asm { test bl, bl }
	__asm { je L_005f74bf }
	__asm { L_005f74bd: }
	__asm { mov bl, 1 }
	__asm { L_005f74bf: }
	__asm { push 0xe2125c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc98], eax }
	__asm { test eax, eax }
	__asm { je L_005f74d3 }
	__asm { test bl, bl }
	__asm { je L_005f74d5 }
	__asm { L_005f74d3: }
	__asm { mov bl, 1 }
	__asm { L_005f74d5: }
	__asm { push 0xe21270 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbca0], eax }
	__asm { test eax, eax }
	__asm { je L_005f74ee }
	__asm { test bl, bl }
	__asm { jne L_005f74ee }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f74ee: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9bfc[];
extern "C" char g_012d9c00[];
extern "C" char g_012d9c0c[];
extern "C" char g_012d9c10[];
// FUNCTION: ROBLOXSTUDIO 0x005f8440
extern "C" __declspec(naked) void asm_005f8440()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe220a4 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe220c0 }
	__asm { mov dword ptr [g_012d9bfc], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c00], eax }
	__asm { test eax, eax }
	__asm { je L_005f846d }
	__asm { test bl, bl }
	__asm { je L_005f846f }
	__asm { L_005f846d: }
	__asm { mov bl, 1 }
	__asm { L_005f846f: }
	__asm { push 0xe220dc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c0c], eax }
	__asm { test eax, eax }
	__asm { je L_005f8483 }
	__asm { test bl, bl }
	__asm { je L_005f8485 }
	__asm { L_005f8483: }
	__asm { mov bl, 1 }
	__asm { L_005f8485: }
	__asm { push 0xe220f4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c10], eax }
	__asm { test eax, eax }
	__asm { je L_005f849e }
	__asm { test bl, bl }
	__asm { jne L_005f849e }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f849e: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012da060[];
extern "C" char g_012da068[];
extern "C" char g_012da074[];
extern "C" char g_012da088[];
extern "C" char g_012da08c[];
// FUNCTION: ROBLOXSTUDIO 0x005f8ed0
extern "C" __declspec(naked) void asm_005f8ed0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe22af8 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe22b0c }
	__asm { mov dword ptr [g_012da060], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012da068], eax }
	__asm { test eax, eax }
	__asm { je L_005f8efd }
	__asm { test bl, bl }
	__asm { je L_005f8eff }
	__asm { L_005f8efd: }
	__asm { mov bl, 1 }
	__asm { L_005f8eff: }
	__asm { push 0xe22b20 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da074], eax }
	__asm { test eax, eax }
	__asm { je L_005f8f13 }
	__asm { test bl, bl }
	__asm { je L_005f8f15 }
	__asm { L_005f8f13: }
	__asm { mov bl, 1 }
	__asm { L_005f8f15: }
	__asm { push 0xe22b38 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da088], eax }
	__asm { test eax, eax }
	__asm { je L_005f8f29 }
	__asm { test bl, bl }
	__asm { je L_005f8f2b }
	__asm { L_005f8f29: }
	__asm { mov bl, 1 }
	__asm { L_005f8f2b: }
	__asm { push 0xe22b50 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da08c], eax }
	__asm { test eax, eax }
	__asm { je L_005f8f44 }
	__asm { test bl, bl }
	__asm { jne L_005f8f44 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f8f44: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012da944[];
extern "C" char g_012da94c[];
extern "C" char g_012da954[];
extern "C" char g_012da960[];
extern "C" char g_012da968[];
// FUNCTION: ROBLOXSTUDIO 0x005fa350
extern "C" __declspec(naked) void asm_005fa350()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe24424 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe2443c }
	__asm { mov dword ptr [g_012da944], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012da94c], eax }
	__asm { test eax, eax }
	__asm { je L_005fa37d }
	__asm { test bl, bl }
	__asm { je L_005fa37f }
	__asm { L_005fa37d: }
	__asm { mov bl, 1 }
	__asm { L_005fa37f: }
	__asm { push 0xe2444c }
	__asm { call esi }
	__asm { mov dword ptr [g_012da954], eax }
	__asm { test eax, eax }
	__asm { je L_005fa393 }
	__asm { test bl, bl }
	__asm { je L_005fa395 }
	__asm { L_005fa393: }
	__asm { mov bl, 1 }
	__asm { L_005fa395: }
	__asm { push 0xe2445c }
	__asm { call esi }
	__asm { mov dword ptr [g_012da960], eax }
	__asm { test eax, eax }
	__asm { je L_005fa3a9 }
	__asm { test bl, bl }
	__asm { je L_005fa3ab }
	__asm { L_005fa3a9: }
	__asm { mov bl, 1 }
	__asm { L_005fa3ab: }
	__asm { push 0xe2446c }
	__asm { call esi }
	__asm { mov dword ptr [g_012da968], eax }
	__asm { test eax, eax }
	__asm { je L_005fa3c4 }
	__asm { test bl, bl }
	__asm { jne L_005fa3c4 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fa3c4: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dacc8[];
extern "C" char g_012dacd4[];
extern "C" char g_012dacd8[];
extern "C" char g_012dace0[];
// FUNCTION: ROBLOXSTUDIO 0x005facd0
extern "C" __declspec(naked) void asm_005facd0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe24d6c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe24d7c }
	__asm { mov dword ptr [g_012dacc8], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dacd4], eax }
	__asm { test eax, eax }
	__asm { je L_005facfd }
	__asm { test bl, bl }
	__asm { je L_005facff }
	__asm { L_005facfd: }
	__asm { mov bl, 1 }
	__asm { L_005facff: }
	__asm { push 0xe24d90 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dacd8], eax }
	__asm { test eax, eax }
	__asm { je L_005fad13 }
	__asm { test bl, bl }
	__asm { je L_005fad15 }
	__asm { L_005fad13: }
	__asm { mov bl, 1 }
	__asm { L_005fad15: }
	__asm { push 0xe24db0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dace0], eax }
	__asm { test eax, eax }
	__asm { je L_005fad2e }
	__asm { test bl, bl }
	__asm { jne L_005fad2e }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fad2e: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db228[];
extern "C" char g_012db230[];
extern "C" char g_012db240[];
extern "C" char g_012db248[];
// FUNCTION: ROBLOXSTUDIO 0x005fbbb0
extern "C" __declspec(naked) void asm_005fbbb0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe25bd4 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe25bec }
	__asm { mov dword ptr [g_012db228], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db230], eax }
	__asm { test eax, eax }
	__asm { je L_005fbbdd }
	__asm { test bl, bl }
	__asm { je L_005fbbdf }
	__asm { L_005fbbdd: }
	__asm { mov bl, 1 }
	__asm { L_005fbbdf: }
	__asm { push 0xe25c04 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db240], eax }
	__asm { test eax, eax }
	__asm { je L_005fbbf3 }
	__asm { test bl, bl }
	__asm { je L_005fbbf5 }
	__asm { L_005fbbf3: }
	__asm { mov bl, 1 }
	__asm { L_005fbbf5: }
	__asm { push 0xe25c1c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db248], eax }
	__asm { test eax, eax }
	__asm { je L_005fbc0e }
	__asm { test bl, bl }
	__asm { jne L_005fbc0e }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fbc0e: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db690[];
extern "C" char g_012db69c[];
extern "C" char g_012db6a0[];
extern "C" char g_012db6b8[];
// FUNCTION: ROBLOXSTUDIO 0x00603ef0
extern "C" __declspec(naked) void asm_00603ef0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2c9dc }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe2c9f0 }
	__asm { mov dword ptr [g_012db690], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db69c], eax }
	__asm { test eax, eax }
	__asm { je L_00603f1d }
	__asm { test bl, bl }
	__asm { je L_00603f1f }
	__asm { L_00603f1d: }
	__asm { mov bl, 1 }
	__asm { L_00603f1f: }
	__asm { push 0xe2ca10 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db6a0], eax }
	__asm { test eax, eax }
	__asm { je L_00603f33 }
	__asm { test bl, bl }
	__asm { je L_00603f35 }
	__asm { L_00603f33: }
	__asm { mov bl, 1 }
	__asm { L_00603f35: }
	__asm { push 0xe2ca24 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db6b8], eax }
	__asm { test eax, eax }
	__asm { je L_00603f4e }
	__asm { test bl, bl }
	__asm { jne L_00603f4e }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_00603f4e: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db754[];
extern "C" char g_012db760[];
extern "C" char g_012db76c[];
extern "C" char g_012db778[];
// FUNCTION: ROBLOXSTUDIO 0x00604080
extern "C" __declspec(naked) void asm_00604080()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2cb78 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe2cb9c }
	__asm { mov dword ptr [g_012db754], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db760], eax }
	__asm { test eax, eax }
	__asm { je L_006040ad }
	__asm { test bl, bl }
	__asm { je L_006040af }
	__asm { L_006040ad: }
	__asm { mov bl, 1 }
	__asm { L_006040af: }
	__asm { push 0xe2cbb4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db76c], eax }
	__asm { test eax, eax }
	__asm { je L_006040c3 }
	__asm { test bl, bl }
	__asm { je L_006040c5 }
	__asm { L_006040c3: }
	__asm { mov bl, 1 }
	__asm { L_006040c5: }
	__asm { push 0xe2cbd0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db778], eax }
	__asm { test eax, eax }
	__asm { je L_006040de }
	__asm { test bl, bl }
	__asm { jne L_006040de }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_006040de: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db788[];
extern "C" char g_012db794[];
extern "C" char g_012db798[];
extern "C" char g_012db7a4[];
// FUNCTION: ROBLOXSTUDIO 0x006040f0
extern "C" __declspec(naked) void asm_006040f0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2cbf0 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe2cc08 }
	__asm { mov dword ptr [g_012db788], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db794], eax }
	__asm { test eax, eax }
	__asm { je L_0060411d }
	__asm { test bl, bl }
	__asm { je L_0060411f }
	__asm { L_0060411d: }
	__asm { mov bl, 1 }
	__asm { L_0060411f: }
	__asm { push 0xe2cc20 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db798], eax }
	__asm { test eax, eax }
	__asm { je L_00604133 }
	__asm { test bl, bl }
	__asm { je L_00604135 }
	__asm { L_00604133: }
	__asm { mov bl, 1 }
	__asm { L_00604135: }
	__asm { push 0xe2cc3c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db7a4], eax }
	__asm { test eax, eax }
	__asm { je L_0060414e }
	__asm { test bl, bl }
	__asm { jne L_0060414e }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0060414e: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db7b0[];
extern "C" char g_012db7bc[];
extern "C" char g_012db7c8[];
extern "C" char g_012db7dc[];
// FUNCTION: ROBLOXSTUDIO 0x00604160
extern "C" __declspec(naked) void asm_00604160()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2cc58 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe2cc74 }
	__asm { mov dword ptr [g_012db7b0], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db7bc], eax }
	__asm { test eax, eax }
	__asm { je L_0060418d }
	__asm { test bl, bl }
	__asm { je L_0060418f }
	__asm { L_0060418d: }
	__asm { mov bl, 1 }
	__asm { L_0060418f: }
	__asm { push 0xe2cc8c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db7c8], eax }
	__asm { test eax, eax }
	__asm { je L_006041a3 }
	__asm { test bl, bl }
	__asm { je L_006041a5 }
	__asm { L_006041a3: }
	__asm { mov bl, 1 }
	__asm { L_006041a5: }
	__asm { push 0xe2cca0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db7dc], eax }
	__asm { test eax, eax }
	__asm { je L_006041be }
	__asm { test bl, bl }
	__asm { jne L_006041be }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_006041be: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db90c[];
extern "C" char g_012db91c[];
extern "C" char g_012db92c[];
extern "C" char g_012db930[];
extern "C" char g_012db940[];
// FUNCTION: ROBLOXSTUDIO 0x00604450
extern "C" __declspec(naked) void asm_00604450()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2cef0 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe2cf0c }
	__asm { mov dword ptr [g_012db90c], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db91c], eax }
	__asm { test eax, eax }
	__asm { je L_0060447d }
	__asm { test bl, bl }
	__asm { je L_0060447f }
	__asm { L_0060447d: }
	__asm { mov bl, 1 }
	__asm { L_0060447f: }
	__asm { push 0xe2cf30 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db92c], eax }
	__asm { test eax, eax }
	__asm { je L_00604493 }
	__asm { test bl, bl }
	__asm { je L_00604495 }
	__asm { L_00604493: }
	__asm { mov bl, 1 }
	__asm { L_00604495: }
	__asm { push 0xe2cf4c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db930], eax }
	__asm { test eax, eax }
	__asm { je L_006044a9 }
	__asm { test bl, bl }
	__asm { je L_006044ab }
	__asm { L_006044a9: }
	__asm { mov bl, 1 }
	__asm { L_006044ab: }
	__asm { push 0xe2cf6c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db940], eax }
	__asm { test eax, eax }
	__asm { je L_006044c4 }
	__asm { test bl, bl }
	__asm { jne L_006044c4 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_006044c4: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00606000();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00605fa0
extern "C" __declspec(naked) void asm_00605fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ed9b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00605fe9 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call fn_00606000 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00605fe9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10868[];
extern "C" char g_00e108ac[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00606290
extern "C" __declspec(naked) void asm_00606290()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { call dword ptr [g_00e108ac] }
	__asm { cmp eax, edi }
	__asm { je L_006062ee }
	__asm { push edi }
	__asm { push dword ptr [esi + 8] }
	__asm { call dword ptr [g_00e10868] }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_006062ee }
	__asm { test eax, eax }
	__asm { jne L_006062ee }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006062dd }
	__asm { push 0x61 }
	__asm { push 0xe2f9c8 }
	__asm { push 0xe2fa14 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006062ee }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_006062dd: }
	__asm { movzx eax, cl }
	__asm { push 0xe2fa20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006062ee: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006071e0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00606490
extern "C" __declspec(naked) void asm_00606490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_0060651c }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { je L_006064da }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006064c5 }
	__asm { push 0x6b }
	__asm { push 0xe2fbc0 }
	__asm { push 0xe2fcb8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006064da }
	__asm { L_006064c5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe2fcd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006064da: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0060651c }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { ja L_0060651c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00606507 }
	__asm { push 0x6c }
	__asm { push 0xe2fbc0 }
	__asm { push 0xe18680 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060651c }
	__asm { L_00606507: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe2fd40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060651c: }
	__asm { lea ecx, [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_006071e0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00606660
extern "C" __declspec(naked) void asm_00606660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_006066bb }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, 8 }
	__asm { jb L_006066ad }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0060669c }
	__asm { push 0x65 }
	__asm { push 0xe2fbc0 }
	__asm { push 0xe2fc10 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006066ad }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0060669c: }
	__asm { movzx eax, al }
	__asm { push 0xe2fc38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006066ad: }
	__asm { mov dword ptr [esi + edi*4 + 0x1c], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006066bb: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + eax*4 + 0x1c], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x006066e0
extern "C" __declspec(naked) void asm_006066e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00606730 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { sub eax, dword ptr [esi + 4] }
	__asm { cmp dword ptr [ebp + 0xc], eax }
	__asm { je L_00606730 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0060671f }
	__asm { push 0x78 }
	__asm { push 0xe2fbc0 }
	__asm { push 0xe2fdac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00606730 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0060671f: }
	__asm { movzx eax, cl }
	__asm { push 0xe2fdd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00606730: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { inc dword ptr [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10500[];
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006070a0
extern "C" __declspec(naked) void asm_006070a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov ebx, ecx }
	__asm { test edi, edi }
	__asm { je L_006070cb }
	__asm { cmp edi, -1 }
	__asm { ja L_006070c5 }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { jne L_006070cb }
	__asm { L_006070c5: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_006070cb: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, eax }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { test eax, eax }
	__asm { je L_006070f8 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { L_006070f8: }
	__asm { lea eax, [esi + edi] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { pop edi }
	__asm { lea eax, [esi + ecx] }
	__asm { mov dword ptr [ebx], esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x00607180
extern "C" __declspec(naked) void asm_00607180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp edi, ecx }
	__asm { jne L_006071a6 }
	__asm { cmp eax, dword ptr [ebx + 4] }
	__asm { jne L_006071a6 }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { L_0060719b: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_006071a6: }
	__asm { cmp edi, eax }
	__asm { je L_0060719b }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { sub esi, eax }
	__asm { push esi }
	__asm { push eax }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0xc }
	__asm { lea eax, [esi + edi] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_005e86a0();
// FUNCTION: ROBLOXSTUDIO 0x00607b00
extern "C" __declspec(naked) void asm_00607b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0eea6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_005e86a0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00607b62 }
	__asm { test al, 1 }
	__asm { jne L_00607b62 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00607b62 }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00607b62: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00608b10();
extern "C" void fn_0060b0a0();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00607df0
extern "C" __declspec(naked) void asm_00607df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0eef5 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { jne L_00607e3a }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0xe19998 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00607e3a: }
	__asm { push 0x68 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00607e62 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_0060b0a0 }
	__asm { jmp L_00607e64 }
	__asm { L_00607e62: }
	__asm { xor eax, eax }
	__asm { L_00607e64: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00608b10 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00608cd0();
extern "C" void fn_0060a110();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00607ec0
extern "C" __declspec(naked) void asm_00607ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ef0a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x40 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00607f10 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_0060a110 }
	__asm { jmp L_00607f12 }
	__asm { L_00607f10: }
	__asm { xor eax, eax }
	__asm { L_00607f12: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00608cd0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_006088b0();
extern "C" void fn_0060a190();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00607f40
extern "C" __declspec(naked) void asm_00607f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ef1f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x40 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00607f90 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_0060a190 }
	__asm { jmp L_00607f92 }
	__asm { L_00607f90: }
	__asm { xor eax, eax }
	__asm { L_00607f92: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006088b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00608e00();
extern "C" void fn_0060a0e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00607fc0
extern "C" __declspec(naked) void asm_00607fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ef34 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x34 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0060800a }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { push esi }
	__asm { call fn_0060a0e0 }
	__asm { jmp L_0060800c }
	__asm { L_0060800a: }
	__asm { xor eax, eax }
	__asm { L_0060800c: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00608e00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00609300();
extern "C" void fn_0060e400();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00608030
extern "C" __declspec(naked) void asm_00608030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ef54 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x64 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0060808c }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_0060e400 }
	__asm { jmp L_0060808e }
	__asm { L_0060808c: }
	__asm { xor eax, eax }
	__asm { L_0060808e: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [ecx], 0 }
	__asm { push ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00609300 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_006089e0();
extern "C" void fn_00609670();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006080d0
extern "C" __declspec(naked) void asm_006080d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ef69 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x48 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00608123 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00609670 }
	__asm { jmp L_00608125 }
	__asm { L_00608123: }
	__asm { xor eax, eax }
	__asm { L_00608125: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006089e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00608780();
extern "C" void fn_0060a270();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00608150
extern "C" __declspec(naked) void asm_00608150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ef7e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x50 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_006081a3 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_0060a270 }
	__asm { jmp L_006081a5 }
	__asm { L_006081a3: }
	__asm { xor eax, eax }
	__asm { L_006081a5: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00608780 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00608650();
extern "C" void fn_00609880();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006081d0
extern "C" __declspec(naked) void asm_006081d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ef93 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x4c }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0060821d }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00609880 }
	__asm { jmp L_0060821f }
	__asm { L_0060821d: }
	__asm { xor eax, eax }
	__asm { L_0060821f: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00608650 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006085c0
extern "C" __declspec(naked) void asm_006085c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0efa0 }
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
	__asm { je L_00608618 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe306f8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0060861a }
	__asm { L_00608618: }
	__asm { xor eax, eax }
	__asm { L_0060861a: }
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
	__asm { je L_0060863e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0060863e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006086f0
extern "C" __declspec(naked) void asm_006086f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0efb0 }
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
	__asm { je L_00608748 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe307b8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0060874a }
	__asm { L_00608748: }
	__asm { xor eax, eax }
	__asm { L_0060874a: }
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
	__asm { je L_0060876e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0060876e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00608820
extern "C" __declspec(naked) void asm_00608820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0efc0 }
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
	__asm { je L_00608878 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe307a0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0060887a }
	__asm { L_00608878: }
	__asm { xor eax, eax }
	__asm { L_0060887a: }
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
	__asm { je L_0060889e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0060889e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00608950
extern "C" __declspec(naked) void asm_00608950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0efd0 }
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
	__asm { je L_006089a8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe30740 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006089aa }
	__asm { L_006089a8: }
	__asm { xor eax, eax }
	__asm { L_006089aa: }
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
	__asm { je L_006089ce }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_006089ce: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00608a80
extern "C" __declspec(naked) void asm_00608a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0efe0 }
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
	__asm { je L_00608ad8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe30788 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00608ada }
	__asm { L_00608ad8: }
	__asm { xor eax, eax }
	__asm { L_00608ada: }
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
	__asm { je L_00608afe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00608afe: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00608bb0
extern "C" __declspec(naked) void asm_00608bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0eff0 }
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
	__asm { je L_00608c08 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe30710 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00608c0a }
	__asm { L_00608c08: }
	__asm { xor eax, eax }
	__asm { L_00608c0a: }
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
	__asm { je L_00608c2e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00608c2e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00608c40
extern "C" __declspec(naked) void asm_00608c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f000 }
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
	__asm { je L_00608c98 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe30770 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00608c9a }
	__asm { L_00608c98: }
	__asm { xor eax, eax }
	__asm { L_00608c9a: }
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
	__asm { je L_00608cbe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00608cbe: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00608d70
extern "C" __declspec(naked) void asm_00608d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f010 }
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
	__asm { je L_00608dc8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe30728 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00608dca }
	__asm { L_00608dc8: }
	__asm { xor eax, eax }
	__asm { L_00608dca: }
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
	__asm { je L_00608dee }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00608dee: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00608ea0
extern "C" __declspec(naked) void asm_00608ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f020 }
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
	__asm { je L_00608ef8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe30758 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00608efa }
	__asm { L_00608ef8: }
	__asm { xor eax, eax }
	__asm { L_00608efa: }
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
	__asm { je L_00608f1e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00608f1e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00608fd0
extern "C" __declspec(naked) void asm_00608fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f030 }
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
	__asm { je L_00609028 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe306e0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0060902a }
	__asm { L_00609028: }
	__asm { xor eax, eax }
	__asm { L_0060902a: }
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
	__asm { je L_0060904e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0060904e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00609510
extern "C" __declspec(naked) void asm_00609510()
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
	__asm { jne L_00609538 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00609538: }
	__asm { cmp eax, 0x15555555 }
	__asm { jbe L_0060954a }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0060954a: }
	__asm { push edi }
	__asm { lea edi, [eax + eax*2] }
	__asm { shl edi, 2 }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00609570 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00609570: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00609ff0
extern "C" __declspec(naked) void asm_00609ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0060a046 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { cmp eax, dword ptr [esi + 0x3c] }
	__asm { jne L_0060a00e }
	__asm { cmp dword ptr [esi + 0x44], 0 }
	__asm { je L_0060a046 }
	__asm { L_0060a00e: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0060a035 }
	__asm { push 0x9e }
	__asm { push 0xe307f0 }
	__asm { push 0xe30ee8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060a046 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0060a035: }
	__asm { movzx eax, cl }
	__asm { push 0xe30f00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060a046: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012dbc8c[];
extern "C" void fn_005ebbb0();
// FUNCTION: ROBLOXSTUDIO 0x0060a360
extern "C" __declspec(naked) void asm_0060a360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f14e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe3107c }
	__asm { cmp dword ptr [esi + 0x48], 0 }
	__asm { lea eax, [esi + 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_0060a39e }
	__asm { push eax }
	__asm { push 1 }
	__asm { call dword ptr [g_012dbc8c] }
	__asm { L_0060a39e: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005ebbb0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012da23c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_005ebb10();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0060a850
extern "C" __declspec(naked) void asm_0060a850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f168 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe31044 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_0060a8c0 }
	__asm { cmp dword ptr [esi + 0x3c], 0 }
	__asm { je L_0060a8c0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0060a8af }
	__asm { push 0x7e }
	__asm { push 0xe31088 }
	__asm { push 0xe31548 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060a8c0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0060a8af: }
	__asm { movzx eax, al }
	__asm { push 0xe31550 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060a8c0: }
	__asm { lea eax, [esi + 0x38] }
	__asm { push eax }
	__asm { push 1 }
	__asm { call dword ptr [g_012da23c] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005ebb10 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012da23c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_005ebb10();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0060a8f0
extern "C" __declspec(naked) void asm_0060a8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f168 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe3100c }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_0060a960 }
	__asm { cmp dword ptr [esi + 0x3c], 0 }
	__asm { je L_0060a960 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0060a94f }
	__asm { push 0x7e }
	__asm { push 0xe31088 }
	__asm { push 0xe31548 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060a960 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0060a94f: }
	__asm { movzx eax, al }
	__asm { push 0xe31550 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060a960: }
	__asm { lea eax, [esi + 0x38] }
	__asm { push eax }
	__asm { push 1 }
	__asm { call dword ptr [g_012da23c] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005ebb10 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dbc8c[];
extern "C" void fn_005ebbb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0060a9f0
extern "C" __declspec(naked) void asm_0060a9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e868 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe3107c }
	__asm { cmp dword ptr [esi + 0x48], 0 }
	__asm { lea eax, [esi + 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_0060aa2e }
	__asm { push eax }
	__asm { push 1 }
	__asm { call dword ptr [g_012dbc8c] }
	__asm { L_0060aa2e: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005ebbb0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0060aa4b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0060aa4b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012da218[];
extern "C" char g_012da228[];
extern "C" char g_012da264[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0060aaf0
extern "C" __declspec(naked) void asm_0060aaf0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { lea edi, [esi + 0x38] }
	__asm { push edi }
	__asm { push 1 }
	__asm { call dword ptr [g_012da264] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0060ab43 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { jne L_0060ab43 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0060ab32 }
	__asm { push 0x76 }
	__asm { push 0xe31088 }
	__asm { push 0x1016e4c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060ab43 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0060ab32: }
	__asm { movzx eax, al }
	__asm { push 0xe31800 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060ab43: }
	__asm { push dword ptr [edi] }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call dword ptr [g_012da218] }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { push dword ptr [eax*4 + 0xe30f78] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { imul eax, dword ptr [esi + 0x28] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call dword ptr [g_012da228] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012da218[];
extern "C" char g_012da230[];
extern "C" char g_012da2e4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x0060ac90
extern "C" __declspec(naked) void asm_0060ac90()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0060acda }
	__asm { cmp dword ptr [esi + 0x3c], 0 }
	__asm { jne L_0060acda }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0060acc9 }
	__asm { push 0xa7 }
	__asm { push 0xe31088 }
	__asm { push 0xe31610 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060acda }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0060acc9: }
	__asm { movzx eax, al }
	__asm { push 0xe31678 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060acda: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push dword ptr [esi + 0x38] }
	__asm { cmp byte ptr [eax + 0x2a], 0 }
	__asm { push dword ptr [esi + 0x34] }
	__asm { je L_0060ad01 }
	__asm { call dword ptr [g_012da218] }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call dword ptr [g_012da2e4] }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0060ad01: }
	__asm { call dword ptr [g_012da218] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { imul eax, dword ptr [esi + 0x28] }
	__asm { push dword ptr [esi + 0x3c] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call dword ptr [g_012da230] }
	__asm { push dword ptr [esi + 0x3c] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012da340[];
extern "C" void fn_0060de00();
extern "C" void fn_0060f6c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0060afe0
extern "C" __declspec(naked) void asm_0060afe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f1dc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xe31874 }
	__asm { push dword ptr [edi + 0x28] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_012da340] }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { test eax, eax }
	__asm { je L_0060b049 }
	__asm { push dword ptr [edi + 0x30] }
	__asm { lea ecx, [edi + 0x2c] }
	__asm { push eax }
	__asm { call fn_0060de00 }
	__asm { push dword ptr [edi + 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { L_0060b049: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0060f6c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00513a40();
// FUNCTION: ROBLOXSTUDIO 0x0060cd30
extern "C" __declspec(naked) void asm_0060cd30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0060cd6f }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_0060cd58 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0060cd58: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { mov ecx, ebx }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { js L_0060cd6f }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { jmp L_0060cd74 }
	__asm { L_0060cd6f: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { L_0060cd74: }
	__asm { lea eax, [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jne L_0060cd84 }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0060cd84: }
	__asm { add eax, 0x28 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x0060ce00
extern "C" __declspec(naked) void asm_0060ce00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_0060ce35 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_0060ce3f }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_0060ce3f }
	__asm { L_0060ce35: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0060ce3f: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_0060ce00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0060da80
extern "C" __declspec(naked) void asm_0060da80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0060ce00 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_0060daea }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0060daea: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0060de00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0060dbb0
extern "C" __declspec(naked) void asm_0060dbb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp esi, edi }
	__asm { je L_0060dc0f }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0060dbeb }
	__asm { push dword ptr [esi + 4] }
	__asm { push eax }
	__asm { call fn_0060de00 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_0060dbeb: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { L_0060dc0f: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012da340[];
extern "C" void fn_0060f690();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0060dd50
extern "C" __declspec(naked) void asm_0060dd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f3a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe31860 }
	__asm { push dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_012da340] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0060f690 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0060dda2 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0060dda2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_0060df30();
extern "C" void fn_00626ae0();
// FUNCTION: ROBLOXSTUDIO 0x0060e1b0
extern "C" __declspec(naked) void asm_0060e1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, 0x92492493 }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { sub esi, ebx }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sar edx, 4 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { cmp ecx, esi }
	__asm { jae L_0060e218 }
	__asm { sub ebx, dword ptr [edi] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ebx }
	__asm { add edx, ebx }
	__asm { sar edx, 4 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mov eax, 0x9249249 }
	__asm { sub eax, ecx }
	__asm { cmp eax, esi }
	__asm { jae L_0060e205 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0060e205: }
	__asm { lea eax, [ecx + esi] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00626ae0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0060df30 }
	__asm { L_0060e218: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x00610280
extern "C" __declspec(naked) void asm_00610280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0f5a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { sub esp, 0x14 }
	__asm { test edx, edx }
	__asm { jne L_006102cc }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp + 8], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x20], 0xe19198 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_006102cc: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ecx + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { and edx, 0xfffffffe }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov eax, edx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x006103a0
extern "C" __declspec(naked) void asm_006103a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sub ecx, edx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { sub ecx, 4 }
	__asm { jb L_006103c5 }
	__asm { L_006103b4: }
	__asm { mov eax, dword ptr [edx] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { jne L_006103ca }
	__asm { add edx, 4 }
	__asm { add esi, 4 }
	__asm { sub ecx, 4 }
	__asm { jae L_006103b4 }
	__asm { L_006103c5: }
	__asm { cmp ecx, -4 }
	__asm { je L_00610404 }
	__asm { L_006103ca: }
	__asm { mov al, byte ptr [edx] }
	__asm { cmp al, byte ptr [esi] }
	__asm { jne L_006103f7 }
	__asm { cmp ecx, -3 }
	__asm { je L_00610404 }
	__asm { mov al, byte ptr [edx + 1] }
	__asm { cmp al, byte ptr [esi + 1] }
	__asm { jne L_006103f7 }
	__asm { cmp ecx, -2 }
	__asm { je L_00610404 }
	__asm { mov al, byte ptr [edx + 2] }
	__asm { cmp al, byte ptr [esi + 2] }
	__asm { jne L_006103f7 }
	__asm { cmp ecx, -1 }
	__asm { je L_00610404 }
	__asm { mov al, byte ptr [edx + 3] }
	__asm { cmp al, byte ptr [esi + 3] }
	__asm { je L_00610404 }
	__asm { L_006103f7: }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00610404: }
	__asm { mov dword ptr [ebp + 0xc], 1 }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x006105a0
extern "C" __declspec(naked) void asm_006105a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_006105e8 }
	__asm { cmp eax, 1 }
	__asm { je L_006105e8 }
	__asm { cmp eax, 2 }
	__asm { je L_006105fc }
	__asm { cmp eax, 3 }
	__asm { jne L_006105d7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11d7100 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006105d7: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11d7100 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006105e8: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_006105fc }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_006105fc: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00617120
extern "C" __declspec(naked) void asm_00617120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f940 }
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
	__asm { je L_00617178 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3352c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0061717a }
	__asm { L_00617178: }
	__asm { xor eax, eax }
	__asm { L_0061717a: }
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
	__asm { je L_0061719e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0061719e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00618b80();
extern "C" void fn_00618e60();
// FUNCTION: ROBLOXSTUDIO 0x006179d0
extern "C" __declspec(naked) void asm_006179d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { call fn_00618e60 }
	__asm { test al, al }
	__asm { je L_006179f3 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00618b80 }
	__asm { add esp, 8 }
	__asm { L_006179f3: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { call fn_00618e60 }
	__asm { test al, al }
	__asm { je L_00617a27 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00618b80 }
	__asm { add esp, 8 }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00618e60 }
	__asm { test al, al }
	__asm { je L_00617a27 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00618b80 }
	__asm { add esp, 8 }
	__asm { L_00617a27: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00617d40();
// FUNCTION: ROBLOXSTUDIO 0x006183b0
extern "C" __declspec(naked) void asm_006183b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, edi }
	__asm { sub esi, ebx }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul esi }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { jle L_00618401 }
	__asm { L_006183d6: }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00617d40 }
	__asm { sub esi, 0x4c }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul esi }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esp, 0x10 }
	__asm { sub edi, 0x4c }
	__asm { cmp eax, 1 }
	__asm { jg L_006183d6 }
	__asm { L_00618401: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00617e30();
// FUNCTION: ROBLOXSTUDIO 0x00618410
extern "C" __declspec(naked) void asm_00618410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, edi }
	__asm { sub esi, ebx }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul esi }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { jle L_00618461 }
	__asm { L_00618436: }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00617e30 }
	__asm { sub esi, 0x4c }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul esi }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esp, 0x10 }
	__asm { sub edi, 0x4c }
	__asm { cmp eax, 1 }
	__asm { jg L_00618436 }
	__asm { L_00618461: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00618a50
extern "C" __declspec(naked) void asm_00618a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_00618aaa }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { add esi, 0xc }
	__asm { L_00618a65: }
	__asm { test edx, edx }
	__asm { je L_00618a97 }
	__asm { mov eax, dword ptr [esi - 0xc] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [esi - 8] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [esi - 4] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { fld dword ptr [esi] }
	__asm { fstp dword ptr [edx + 0xc] }
	__asm { fld dword ptr [esi + 4] }
	__asm { fstp dword ptr [edx + 0x10] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { L_00618a97: }
	__asm { add esi, 0x20 }
	__asm { add edx, 0x20 }
	__asm { lea ecx, [esi - 0xc] }
	__asm { cmp ecx, edi }
	__asm { jne L_00618a65 }
	__asm { pop edi }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00618aaa: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005299d0();
// FUNCTION: ROBLOXSTUDIO 0x006194e0
extern "C" __declspec(naked) void asm_006194e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_00619523 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_00619523 }
	__asm { sub edi, ecx }
	__asm { sar edi, 1 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00619509 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_005299d0 }
	__asm { L_00619509: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0061953e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ax, word ptr [eax + edi*2] }
	__asm { mov word ptr [ecx], ax }
	__asm { add dword ptr [esi + 4], 2 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00619523: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00619531 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_005299d0 }
	__asm { L_00619531: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0061953e }
	__asm { mov ax, word ptr [edi] }
	__asm { mov word ptr [ecx], ax }
	__asm { L_0061953e: }
	__asm { add dword ptr [esi + 4], 2 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0076f960();
// FUNCTION: ROBLOXSTUDIO 0x00619c90
extern "C" __declspec(naked) void asm_00619c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f9e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00619cfa }
	__asm { cmp dword ptr [esi + 0x30], -1 }
	__asm { je L_00619cfa }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00619ce9 }
	__asm { push 0x2d }
	__asm { push 0xe335b0 }
	__asm { push 0xe33604 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00619cfa }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00619ce9: }
	__asm { movzx eax, al }
	__asm { push 0xe33620 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00619cfa: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x30], 0xfffffffe }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0076f960 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00619c90();
extern "C" void fn_00693510();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00619d50
extern "C" __declspec(naked) void asm_00619d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fa08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe336c8 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + 0x1ac] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax + 0x20] }
	__asm { call fn_00693510 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00619c90 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00619dab }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00619dab: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0061e2a0();
extern "C" void fn_0061e780();
// FUNCTION: ROBLOXSTUDIO 0x0061b5a0
extern "C" __declspec(naked) void asm_0061b5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0x1c] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { push edi }
	__asm { sar edx, 5 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { jne L_0061b5d2 }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0061b5d2: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { dec edi }
	__asm { push esi }
	__asm { lea eax, [edi*8] }
	__asm { sub eax, edi }
	__asm { lea esi, [edx*8] }
	__asm { sub esi, edx }
	__asm { lea eax, [ebx + eax*8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + esi*8] }
	__asm { call fn_0061e2a0 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push edi }
	__asm { call fn_0061e780 }
	__asm { pop esi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0061bfa0
extern "C" __declspec(naked) void asm_0061bfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [edi], 0xbaadf00d }
	__asm { cmp dword ptr [esi + 0x44], 0 }
	__asm { jne L_0061bfd6 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { mov edx, dword ptr [ecx + 0x2c] }
	__asm { imul edx, dword ptr [ecx + 0x28] }
	__asm { add edx, eax }
	__asm { mov dword ptr [esi + 0x4c], edx }
	__asm { L_0061bfd6: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ebx, dword ptr [esi + 0x48] }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { mov ecx, eax }
	__asm { imul ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebx + ecx] }
	__asm { cmp eax, dword ptr [esi + 0x4c] }
	__asm { jbe L_0061bff9 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0061bff9: }
	__asm { mov eax, ebx }
	__asm { sub eax, dword ptr [esi + 0x44] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], eax }
	__asm { add dword ptr [esi + 0x48], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00618ac0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0061c4c0
extern "C" __declspec(naked) void asm_0061c4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fb50 }
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
	__asm { je L_0061c518 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe33968 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0061c51a }
	__asm { L_0061c518: }
	__asm { xor eax, eax }
	__asm { L_0061c51a: }
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
	__asm { call fn_00618ac0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0061deb0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0061c5f0
extern "C" __declspec(naked) void asm_0061c5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fb60 }
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
	__asm { je L_0061c648 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe33980 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0061c64a }
	__asm { L_0061c648: }
	__asm { xor eax, eax }
	__asm { L_0061c64a: }
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
	__asm { call fn_0061deb0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10260[];
extern "C" void fn_0061e320();
extern "C" void fn_0061e370();
// FUNCTION: ROBLOXSTUDIO 0x0061e550
extern "C" __declspec(naked) void asm_0061e550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, 0x92492493 }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { sub esi, ebx }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sar edx, 5 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { cmp ecx, esi }
	__asm { jae L_0061e5b8 }
	__asm { sub ebx, dword ptr [edi] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ebx }
	__asm { add edx, ebx }
	__asm { sar edx, 5 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mov eax, 0x4924924 }
	__asm { sub eax, ecx }
	__asm { cmp eax, esi }
	__asm { jae L_0061e5a5 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0061e5a5: }
	__asm { lea eax, [ecx + esi] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0061e320 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0061e370 }
	__asm { L_0061e5b8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0061efc0();
extern "C" void fn_0061f650();
// FUNCTION: ROBLOXSTUDIO 0x0061eea0
extern "C" __declspec(naked) void asm_0061eea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, 0x12de598 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { test ecx, ecx }
	__asm { mov eax, edx }
	__asm { cmovne eax, ecx }
	__asm { cmp dword ptr [eax], 0 }
	__asm { je L_0061ef04 }
	__asm { cmp dword ptr [esi + 0x68], 0 }
	__asm { je L_0061ef04 }
	__asm { mov eax, dword ptr [esi + 0x64] }
	__asm { cmp eax, 7 }
	__asm { jb L_0061eedb }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x64], 0 }
	__asm { call fn_0061f650 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0061eedb: }
	__asm { cmp eax, 6 }
	__asm { jae L_0061eef3 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_0061efc0 }
	__asm { inc dword ptr [esi + 0x64] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0061eef3: }
	__asm { jne L_0061ef01 }
	__asm { test ecx, ecx }
	__asm { cmovne edx, ecx }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x24] }
	__asm { L_0061ef01: }
	__asm { inc dword ptr [esi + 0x64] }
	__asm { L_0061ef04: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012dc240[];
extern "C" void fn_00681fa0();
extern "C" void fn_006b8aae();
// FUNCTION: ROBLOXSTUDIO 0x00620350
extern "C" __declspec(naked) void asm_00620350()
{
	__asm { mov al, byte ptr [g_012dc240] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00620374 }
	__asm { push esi }
	__asm { push dword ptr [esi + 4] }
	__asm { movzx eax, al }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { push 0xe34864 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00620374: }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { cmp dword ptr [ecx + 0xc8], 0 }
	__asm { je L_006203ab }
	__asm { movzx eax, byte ptr [ecx + 0xcc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x38] }
	__asm { mov ecx, dword ptr [ecx + 0x198] }
	__asm { call fn_00681fa0 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 0xce], 1 }
	__asm { ret }
	__asm { L_006203ab: }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 0xce], 1 }
	__asm { ret }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00622480
extern "C" __declspec(naked) void asm_00622480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fe20 }
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
	__asm { je L_006224d8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe35088 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006224da }
	__asm { L_006224d8: }
	__asm { xor eax, eax }
	__asm { L_006224da: }
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
// FUNCTION: ROBLOXSTUDIO 0x00622510
extern "C" __declspec(naked) void asm_00622510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fe30 }
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
	__asm { je L_00622568 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe350e8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0062256a }
	__asm { L_00622568: }
	__asm { xor eax, eax }
	__asm { L_0062256a: }
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
// FUNCTION: ROBLOXSTUDIO 0x006225a0
extern "C" __declspec(naked) void asm_006225a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fe40 }
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
	__asm { je L_006225f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe35100 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006225fa }
	__asm { L_006225f8: }
	__asm { xor eax, eax }
	__asm { L_006225fa: }
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
// FUNCTION: ROBLOXSTUDIO 0x00622630
extern "C" __declspec(naked) void asm_00622630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fe50 }
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
	__asm { je L_00622688 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe350a0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0062268a }
	__asm { L_00622688: }
	__asm { xor eax, eax }
	__asm { L_0062268a: }
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

extern "C" void fn_006226c0();
extern "C" void fn_00626a40();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006229b0
extern "C" __declspec(naked) void asm_006229b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fec1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_00626a40 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00622a03 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006226c0 }
	__asm { L_00622a03: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
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

extern "C" void fn_00622880();
// FUNCTION: ROBLOXSTUDIO 0x00623ba0
extern "C" __declspec(naked) void asm_00623ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { sub ecx, edi }
	__asm { mov eax, ecx }
	__asm { and eax, 0xfffffff8 }
	__asm { cmp eax, 8 }
	__asm { jle L_00623c02 }
	__asm { add esi, -8 }
	__asm { nop }
	__asm { L_00623bc0: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ecx - 8] }
	__asm { sar eax, 3 }
	__asm { push eax }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00622880 }
	__asm { sub esi, 8 }
	__asm { mov ecx, esi }
	__asm { sub ecx, edi }
	__asm { add ecx, 8 }
	__asm { mov eax, ecx }
	__asm { and eax, 0xfffffff8 }
	__asm { add esp, 0x14 }
	__asm { cmp eax, 8 }
	__asm { jg L_00623bc0 }
	__asm { L_00623c02: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e99304[];
extern "C" char g_012dc698[];
extern "C" char g_012dc69c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x006247c0
extern "C" __declspec(naked) void asm_006247c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0ff4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e99304], 0 }
	__asm { jne L_006247f4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006247f4: }
	__asm { push 0x624380 }
	__asm { push 0x12dc678 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012dc69c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0062483e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dc69c], eax }
	__asm { push 0xe99304 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dc698], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0062483e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012dc698] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9a5d4[];
extern "C" char g_012dc6a8[];
extern "C" char g_012dc6ac[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00624860
extern "C" __declspec(naked) void asm_00624860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0ffce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e9a5d4], 0 }
	__asm { jne L_00624894 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00624894: }
	__asm { push 0x6243d0 }
	__asm { push 0x12dc688 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012dc6ac] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_006248de }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dc6ac], eax }
	__asm { push 0xe9a5d4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dc6a8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006248de: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012dc6a8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9a5e4[];
extern "C" char g_012dc6b0[];
extern "C" char g_012dc6b4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00624900
extern "C" __declspec(naked) void asm_00624900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0ffee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e9a5e4], 0 }
	__asm { jne L_00624934 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00624934: }
	__asm { push 0x624420 }
	__asm { push 0x12dc690 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012dc6b4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0062497e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dc6b4], eax }
	__asm { push 0xe9a5e4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dc6b0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0062497e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012dc6b0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e99308[];
extern "C" char g_012dc6a0[];
extern "C" char g_012dc6a4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x006249a0
extern "C" __declspec(naked) void asm_006249a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1000e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e99308], 0 }
	__asm { jne L_006249d4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006249d4: }
	__asm { push 0x624470 }
	__asm { push 0x12dc680 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012dc6a4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00624a1e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dc6a4], eax }
	__asm { push 0xe99308 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dc6a0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00624a1e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012dc6a0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_00626440();
extern "C" void fn_00627be0();
extern "C" void fn_00658b10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00626380
extern "C" __declspec(naked) void asm_00626380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10087 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov ecx, dword ptr [eax + 0x1fc] }
	__asm { call fn_00658b10 }
	__asm { cmp dword ptr [edi + 0xa4], 0 }
	__asm { lea esi, [edi + 0xa4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_006263ef }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_006263ef: }
	__asm { mov eax, dword ptr [edi + 0x9c] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x9c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00627be0 }
	__asm { push dword ptr [edi + 0x9c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_00626440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00626440
extern "C" __declspec(naked) void asm_00626440()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x74], 0x10 }
	__asm { jb L_00626454 }
	__asm { push dword ptr [esi + 0x60] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00626454: }
	__asm { mov dword ptr [esi + 0x74], 0xf }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov byte ptr [esi + 0x60], 0 }
	__asm { cmp dword ptr [esi + 0x58], 0x10 }
	__asm { jb L_00626477 }
	__asm { push dword ptr [esi + 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00626477: }
	__asm { mov dword ptr [esi + 0x58], 0xf }
	__asm { mov dword ptr [esi + 0x54], 0 }
	__asm { mov byte ptr [esi + 0x44], 0 }
	__asm { cmp dword ptr [esi + 0x3c], 0x10 }
	__asm { jb L_0062649a }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0062649a: }
	__asm { mov dword ptr [esi + 0x3c], 0xf }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov byte ptr [esi + 0x28], 0 }
	__asm { cmp dword ptr [esi + 0x1c], 0 }
	__asm { je L_006264db }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { L_006264db: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00626990
extern "C" __declspec(naked) void asm_00626990()
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
	__asm { jne L_006269b8 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006269b8: }
	__asm { cmp eax, 0x71c71c7 }
	__asm { jbe L_006269ca }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006269ca: }
	__asm { push edi }
	__asm { lea edi, [eax + eax*8] }
	__asm { shl edi, 2 }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_006269f0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006269f0: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" char g_00e10260[];
extern "C" void fn_00626ae0();
extern "C" void fn_00626d60();
// FUNCTION: ROBLOXSTUDIO 0x00626fc0
extern "C" __declspec(naked) void asm_00626fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, 0x92492493 }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { sub esi, ebx }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sar edx, 4 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { cmp ecx, esi }
	__asm { jae L_00627028 }
	__asm { sub ebx, dword ptr [edi] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ebx }
	__asm { add edx, ebx }
	__asm { sar edx, 4 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mov eax, 0x9249249 }
	__asm { sub eax, ecx }
	__asm { cmp eax, esi }
	__asm { jae L_00627015 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00627015: }
	__asm { lea eax, [ecx + esi] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00626ae0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00626d60 }
	__asm { L_00627028: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e9a418[];
extern "C" char g_012dc674[];
extern "C" void fn_0052c370();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00627560
extern "C" __declspec(naked) void asm_00627560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1014e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012dc674] }
	__asm { test al, 1 }
	__asm { jne L_006275cc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dc674], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9a418] }
	__asm { call fn_0052c370 }
	__asm { push eax }
	__asm { mov ecx, 0x12dc548 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddfca0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_006275cc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12dc548 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9a5d4[];
extern "C" char g_012dc40c[];
extern "C" void fn_00627560();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x006275e0
extern "C" __declspec(naked) void asm_006275e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1016e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012dc40c] }
	__asm { test al, 1 }
	__asm { jne L_0062764c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dc40c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9a5d4] }
	__asm { call fn_00627560 }
	__asm { push eax }
	__asm { mov ecx, 0x12dc2e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddfcb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0062764c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12dc2e0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9a5e4[];
extern "C" char g_012dc53c[];
extern "C" void fn_00627560();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00627660
extern "C" __declspec(naked) void asm_00627660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1018e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012dc53c] }
	__asm { test al, 1 }
	__asm { jne L_006276cc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dc53c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9a5e4] }
	__asm { call fn_00627560 }
	__asm { push eax }
	__asm { mov ecx, 0x12dc410 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddfcc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_006276cc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12dc410 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00628da0
extern "C" __declspec(naked) void asm_00628da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00628dea }
	__asm { cmp dword ptr [esi + 0x18], 0 }
	__asm { jne L_00628dea }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00628dd9 }
	__asm { push 0x6e }
	__asm { push 0xe33f88 }
	__asm { push 0xe33fd4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00628dea }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00628dd9: }
	__asm { movzx eax, al }
	__asm { push 0xe34048 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00628dea: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov dword ptr [eax + 0x14], 0 }
	__asm { fld dword ptr [esi] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [esi + 4] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { fld dword ptr [esi + 8] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { fld dword ptr [esi + 0xc] }
	__asm { fstp dword ptr [eax + 0xc] }
	__asm { fld dword ptr [esi + 0x10] }
	__asm { fstp dword ptr [eax + 0x10] }
	__asm { fld dword ptr [esi + 0x14] }
	__asm { pop esi }
	__asm { fstp dword ptr [eax + 0x14] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012dc260[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00624860();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00628e40
extern "C" __declspec(naked) void asm_00628e40()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00628eda }
	__asm { cmp dword ptr [g_012dc260], 0x29a }
	__asm { je L_00628e8f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00628e7a }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00628e8f }
	__asm { L_00628e7a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00628e8f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00628eda }
	__asm { cmp dword ptr [g_012dc260], 0x29a }
	__asm { je L_00628eda }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00628ec5 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00628eda }
	__asm { L_00628ec5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00628eda: }
	__asm { jmp fn_00624860 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00629210
extern "C" __declspec(naked) void asm_00629210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test bl, bl }
	__asm { je L_0062927b }
	__asm { mov edx, dword ptr [edi + 0xa0] }
	__asm { sub edx, dword ptr [edi + 0x9c] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp esi, eax }
	__asm { jb L_0062927b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0062926a }
	__asm { push 0x5e }
	__asm { push 0xe33bd8 }
	__asm { push 0xe33c20 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0062927b }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_0062926a: }
	__asm { movzx eax, bl }
	__asm { push 0xe33c38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0062927b: }
	__asm { mov eax, dword ptr [edi + 0x9c] }
	__asm { imul esi, esi, 0x4c }
	__asm { add esi, 0x1c }
	__asm { pop edi }
	__asm { add eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { fld dword ptr [ecx + 0xa4] }
	__asm { ret }
}

extern "C" void fn_006294cf();
// FUNCTION: ROBLOXSTUDIO 0x006292a0
extern "C" __declspec(naked) void asm_006292a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd10230 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { add esi, 0x200 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne fn_006294cf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0062a1f0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0062a0b0
extern "C" __declspec(naked) void asm_0062a0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0062a1f0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0062a11d }
	__asm { cmp dword ptr [esi + 0x18], 0 }
	__asm { je L_0062a11d }
	__asm { cmp dword ptr [esi + 0x20], 0x10000 }
	__asm { jb L_0062a11d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0062a10c }
	__asm { push 0x929 }
	__asm { push 0xe356b0 }
	__asm { push 0xe35b0c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0062a11d }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0062a10c: }
	__asm { movzx eax, cl }
	__asm { push 0xe35b38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0062a11d: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006328e0
extern "C" __declspec(naked) void asm_006328e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10310 }
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
	__asm { je L_00632938 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe360fc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0063293a }
	__asm { L_00632938: }
	__asm { xor eax, eax }
	__asm { L_0063293a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00632970
extern "C" __declspec(naked) void asm_00632970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10320 }
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
	__asm { je L_006329c8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3612c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006329ca }
	__asm { L_006329c8: }
	__asm { xor eax, eax }
	__asm { L_006329ca: }
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
// FUNCTION: ROBLOXSTUDIO 0x00632a00
extern "C" __declspec(naked) void asm_00632a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10330 }
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
	__asm { je L_00632a58 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe36144 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00632a5a }
	__asm { L_00632a58: }
	__asm { xor eax, eax }
	__asm { L_00632a5a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00632a90
extern "C" __declspec(naked) void asm_00632a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10340 }
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
	__asm { je L_00632ae8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe36234 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00632aea }
	__asm { L_00632ae8: }
	__asm { xor eax, eax }
	__asm { L_00632aea: }
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
// FUNCTION: ROBLOXSTUDIO 0x00632b20
extern "C" __declspec(naked) void asm_00632b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10350 }
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
	__asm { je L_00632b78 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe360cc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00632b7a }
	__asm { L_00632b78: }
	__asm { xor eax, eax }
	__asm { L_00632b7a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00632bb0
extern "C" __declspec(naked) void asm_00632bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10360 }
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
	__asm { je L_00632c08 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe360e4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00632c0a }
	__asm { L_00632c08: }
	__asm { xor eax, eax }
	__asm { L_00632c0a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00632c40
extern "C" __declspec(naked) void asm_00632c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10370 }
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
	__asm { je L_00632c98 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe360b4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00632c9a }
	__asm { L_00632c98: }
	__asm { xor eax, eax }
	__asm { L_00632c9a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00632cd0
extern "C" __declspec(naked) void asm_00632cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10380 }
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
	__asm { je L_00632d28 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe36114 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00632d2a }
	__asm { L_00632d28: }
	__asm { xor eax, eax }
	__asm { L_00632d2a: }
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

extern "C" void fn_0063b460();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00632d60
extern "C" __declspec(naked) void asm_00632d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10390 }
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
	__asm { je L_00632db8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3609c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00632dba }
	__asm { L_00632db8: }
	__asm { xor eax, eax }
	__asm { L_00632dba: }
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
	__asm { call fn_0063b460 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006328e0();
extern "C" void fn_007de8e0();
extern "C" void fn_009fb7e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0063b480
extern "C" __declspec(naked) void asm_0063b480()
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
	__asm { push 0x80 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0063b4ce }
	__asm { mov ecx, eax }
	__asm { call fn_009fb7e0 }
	__asm { mov esi, eax }
	__asm { jmp L_0063b4d0 }
	__asm { L_0063b4ce: }
	__asm { xor esi, esi }
	__asm { L_0063b4d0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_006328e0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0063b501 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0063b501 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_0063b501: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00632970();
extern "C" void fn_007de8e0();
extern "C" void fn_009fce90();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0063b520
extern "C" __declspec(naked) void asm_0063b520()
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
	__asm { je L_0063b56b }
	__asm { mov ecx, eax }
	__asm { call fn_009fce90 }
	__asm { mov esi, eax }
	__asm { jmp L_0063b56d }
	__asm { L_0063b56b: }
	__asm { xor esi, esi }
	__asm { L_0063b56d: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00632970 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0063b59e }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0063b59e }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_0063b59e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00632a90();
extern "C" void fn_007de8e0();
extern "C" void fn_00a01910();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0063b650
extern "C" __declspec(naked) void asm_0063b650()
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
	__asm { push 0xa4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0063b69e }
	__asm { mov ecx, eax }
	__asm { call fn_00a01910 }
	__asm { mov esi, eax }
	__asm { jmp L_0063b6a0 }
	__asm { L_0063b69e: }
	__asm { xor esi, esi }
	__asm { L_0063b6a0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00632a90 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0063b6d1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0063b6d1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_0063b6d1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_0063b6f0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x0063b840
extern "C" __declspec(naked) void asm_0063b840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_0063b891 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0063b860 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_0063b862 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_0063b862 }
	__asm { L_0063b860: }
	__asm { mov eax, ecx }
	__asm { L_0063b862: }
	__asm { test eax, eax }
	__asm { je L_0063b891 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0063b891 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0063b891 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0063b891 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_0063b6f0 }
	__asm { L_0063b891: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00632b20();
extern "C" void fn_007de8e0();
extern "C" void fn_009fb9b0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0063b8a0
extern "C" __declspec(naked) void asm_0063b8a0()
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
	__asm { je L_0063b8ee }
	__asm { mov ecx, eax }
	__asm { call fn_009fb9b0 }
	__asm { mov esi, eax }
	__asm { jmp L_0063b8f0 }
	__asm { L_0063b8ee: }
	__asm { xor esi, esi }
	__asm { L_0063b8f0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00632b20 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0063b921 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0063b921 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_0063b921: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00632bb0();
extern "C" void fn_007de8e0();
extern "C" void fn_009fb9e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0063b940
extern "C" __declspec(naked) void asm_0063b940()
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
	__asm { je L_0063b98e }
	__asm { mov ecx, eax }
	__asm { call fn_009fb9e0 }
	__asm { mov esi, eax }
	__asm { jmp L_0063b990 }
	__asm { L_0063b98e: }
	__asm { xor esi, esi }
	__asm { L_0063b990: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00632bb0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0063b9c1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0063b9c1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_0063b9c1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00632c40();
extern "C" void fn_007de8e0();
extern "C" void fn_009fba10();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0063b9e0
extern "C" __declspec(naked) void asm_0063b9e0()
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
	__asm { je L_0063ba2e }
	__asm { mov ecx, eax }
	__asm { call fn_009fba10 }
	__asm { mov esi, eax }
	__asm { jmp L_0063ba30 }
	__asm { L_0063ba2e: }
	__asm { xor esi, esi }
	__asm { L_0063ba30: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00632c40 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0063ba61 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0063ba61 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_0063ba61: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00632cd0();
extern "C" void fn_007de8e0();
extern "C" void fn_009fbae0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0063ba80
extern "C" __declspec(naked) void asm_0063ba80()
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
	__asm { push 0x6c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0063bacb }
	__asm { mov ecx, eax }
	__asm { call fn_009fbae0 }
	__asm { mov esi, eax }
	__asm { jmp L_0063bacd }
	__asm { L_0063bacb: }
	__asm { xor esi, esi }
	__asm { L_0063bacd: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00632cd0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0063bafe }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0063bafe }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_0063bafe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9a630[];
extern "C" char g_012dce18[];
extern "C" char g_012dce1c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0063bb10
extern "C" __declspec(naked) void asm_0063bb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd103de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e9a630], 0 }
	__asm { jne L_0063bb44 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0063bb44: }
	__asm { push 0x63b190 }
	__asm { push 0x12dca48 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012dce1c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0063bb8e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce1c], eax }
	__asm { push 0xe9a630 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dce18], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0063bb8e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012dce18] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9b1bc[];
extern "C" char g_012dce28[];
extern "C" char g_012dce2c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0063bbb0
extern "C" __declspec(naked) void asm_0063bbb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd103fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e9b1bc], 0 }
	__asm { jne L_0063bbe4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0063bbe4: }
	__asm { push 0x63b1e0 }
	__asm { push 0x12dca58 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012dce2c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0063bc2e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce2c], eax }
	__asm { push 0xe9b1bc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dce28], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0063bc2e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012dce28] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9b9d8[];
extern "C" char g_012dce38[];
extern "C" char g_012dce3c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0063bc50
extern "C" __declspec(naked) void asm_0063bc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd104be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e9b9d8], 0 }
	__asm { jne L_0063bc84 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0063bc84: }
	__asm { push 0x63b230 }
	__asm { push 0x12dca68 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012dce3c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0063bcce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce3c], eax }
	__asm { push 0xe9b9d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dce38], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0063bcce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012dce38] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9b7fc[];
extern "C" char g_012dce30[];
extern "C" char g_012dce34[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0063bcf0
extern "C" __declspec(naked) void asm_0063bcf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd437de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e9b7fc], 0 }
	__asm { jne L_0063bd24 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0063bd24: }
	__asm { push 0x63b280 }
	__asm { push 0x12dca60 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012dce34] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0063bd6e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce34], eax }
	__asm { push 0xe9b7fc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dce30], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0063bd6e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012dce30] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9a620[];
extern "C" char g_012dce08[];
extern "C" char g_012dce0c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0063bd90
extern "C" __declspec(naked) void asm_0063bd90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd104de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e9a620], 0 }
	__asm { jne L_0063bdc4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0063bdc4: }
	__asm { push 0x63b2d0 }
	__asm { push 0x12dca38 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012dce0c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0063be0e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce0c], eax }
	__asm { push 0xe9a620 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dce08], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0063be0e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012dce08] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9a624[];
extern "C" char g_012dce10[];
extern "C" char g_012dce14[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0063be30
extern "C" __declspec(naked) void asm_0063be30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1041e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e9a624], 0 }
	__asm { jne L_0063be64 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0063be64: }
	__asm { push 0x63b320 }
	__asm { push 0x12dca40 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012dce14] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0063beae }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce14], eax }
	__asm { push 0xe9a624 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dce10], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0063beae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012dce10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9a62c[];
extern "C" char g_012dce00[];
extern "C" char g_012dce04[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0063bed0
extern "C" __declspec(naked) void asm_0063bed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1043e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e9a62c], 0 }
	__asm { jne L_0063bf04 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0063bf04: }
	__asm { push 0x63b370 }
	__asm { push 0x12dca30 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012dce04] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0063bf4e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce04], eax }
	__asm { push 0xe9a62c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dce00], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0063bf4e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012dce00] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9a618[];
extern "C" char g_012dce20[];
extern "C" char g_012dce24[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0063bf70
extern "C" __declspec(naked) void asm_0063bf70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1045e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e9a618], 0 }
	__asm { jne L_0063bfa4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0063bfa4: }
	__asm { push 0x63b3c0 }
	__asm { push 0x12dca50 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012dce24] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0063bfee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce24], eax }
	__asm { push 0xe9a618 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dce20], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0063bfee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012dce20] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e8893c[];
extern "C" char g_012dcdfc[];
extern "C" void fn_0052e690();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0063edc0
extern "C" __declspec(naked) void asm_0063edc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1053e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012dcdfc] }
	__asm { test al, 1 }
	__asm { jne L_0063ee2c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dcdfc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e8893c] }
	__asm { call fn_0052e690 }
	__asm { push eax }
	__asm { mov ecx, 0x12dccd0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddfe90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0063ee2c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12dccd0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6b2d0[];
extern "C" char g_012dcb9c[];
extern "C" void fn_0052c370();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0063ee40
extern "C" __declspec(naked) void asm_0063ee40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1055e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012dcb9c] }
	__asm { test al, 1 }
	__asm { jne L_0063eeac }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dcb9c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e6b2d0] }
	__asm { call fn_0052c370 }
	__asm { push eax }
	__asm { mov ecx, 0x12dca70 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddfea0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0063eeac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12dca70 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6b518[];
extern "C" char g_012dcccc[];
extern "C" void fn_0063ee40();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0063eec0
extern "C" __declspec(naked) void asm_0063eec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1057e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012dcccc] }
	__asm { test al, 1 }
	__asm { jne L_0063ef2c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dcccc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e6b518] }
	__asm { call fn_0063ee40 }
	__asm { push eax }
	__asm { mov ecx, 0x12dcba0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddfeb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0063ef2c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12dcba0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00641ea0
extern "C" __declspec(naked) void asm_00641ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ecx + 0x6c] }
	__asm { test eax, 0x200000 }
	__asm { je L_00641ec2 }
	__asm { cmp dword ptr [ecx + 0x14], 0 }
	__asm { je L_00641ee4 }
	__asm { mov eax, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00641ec2: }
	__asm { test eax, 0x200 }
	__asm { je L_00641ede }
	__asm { and eax, 0xfc00 }
	__asm { cmp eax, 0xfc00 }
	__asm { jne L_00641f03 }
	__asm { mov eax, 2 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00641ede: }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00641ee4: }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe365b8 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00641f03: }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe365dc }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}
