// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e102d4[];
extern "C" char g_00e1031c[];
extern "C" char g_00e10328[];
extern "C" char g_00e11104[];
// FUNCTION: ROBLOXSTUDIO 0x0047aa50
extern "C" __declspec(naked) void asm_0047aa50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd79f8b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { call dword ptr [g_00e11104] }
	__asm { lea edi, [ebx + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebx], 0x1011c4c }
	__asm { lea ecx, [edi + 0x68] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [edi], 0x1004fbc }
	__asm { mov dword ptr [edi + 0x10], 0x1004fb4 }
	__asm { call dword ptr [g_00e102d4] }
	__asm { push 0 }
	__asm { lea esi, [edi + 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e10328] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + eax], 0xe18340 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x68] }
	__asm { mov dword ptr [ecx + edi - 4], eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0xe1827c }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e110b0[];
extern "C" char g_00e110c0[];
extern "C" char g_00e110e4[];
extern "C" void fn_00402150();
extern "C" void fn_004032a0();
extern "C" void fn_004033d0();
extern "C" void fn_007737e0();
extern "C" void fn_007739a0();
extern "C" void fn_0077c700();
extern "C" void fn_0077ca20();
// FUNCTION: ROBLOXSTUDIO 0x0047abb0
extern "C" __declspec(naked) void asm_0047abb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd79fc4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x7c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e110b0] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110c0] }
	__asm { mov esi, eax }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_0077ca20 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0047ac60 }
	__asm { mov dword ptr [ebp - 0x24], 0xf }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov byte ptr [ebp - 0x38], 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x88] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004032a0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push 0x120f0d4 }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x88] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0077c700 }
	__asm { lea ecx, [ebp - 0x88] }
	__asm { call fn_00402150 }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { jb L_0047ac60 }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0047ac60: }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e110e4] }
	__asm { mov al, 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { call fn_007737e0 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_004033d0 }
	__asm { mov eax, 0x47acbb }
	__asm { ret }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e110e4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_004637b0();
extern "C" void fn_0047c420();
extern "C" void fn_008f7590();
// FUNCTION: ROBLOXSTUDIO 0x0047c760
extern "C" __declspec(naked) void asm_0047c760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ae48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_0047c7c6 }
	__asm { call fn_004637b0 }
	__asm { jmp L_0047c7c8 }
	__asm { L_0047c7c6: }
	__asm { xor eax, eax }
	__asm { L_0047c7c8: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008f7590 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { test eax, eax }
	__asm { je L_0047c7fa }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { L_0047c7fa: }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call fn_0047c420 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0047c81b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx + esi] }
	__asm { add ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_0047c81b: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_0047c82d }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0047c82d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10c70[];
extern "C" char g_00e10c74[];
extern "C" char g_00e10c78[];
extern "C" char g_00e11064[];
extern "C" char g_00e11074[];
extern "C" char g_00e110ec[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11c30[];
extern "C" void fn_008be480();
// FUNCTION: ROBLOXSTUDIO 0x0047cb10
extern "C" __declspec(naked) void asm_0047cb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a9d3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push 1 }
	__asm { push eax }
	__asm { call fn_008be480 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0047cb4c }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0047cb4c: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { jb L_0047cb6c }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0047cb6c: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { call dword ptr [g_00e11064] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e10c78] }
	__asm { test al, al }
	__asm { jne L_0047cba9 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e10c74] }
	__asm { L_0047cba9: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10c70] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e11c30] }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e110ec] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11074] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10c70[];
extern "C" char g_00e10c74[];
extern "C" char g_00e10c78[];
extern "C" char g_00e11064[];
extern "C" char g_00e11074[];
extern "C" char g_00e110ec[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11c30[];
extern "C" void fn_008be480();
// FUNCTION: ROBLOXSTUDIO 0x0047cc00
extern "C" __declspec(naked) void asm_0047cc00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a9d3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push 0 }
	__asm { push 2 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push 1 }
	__asm { push eax }
	__asm { call fn_008be480 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0047cc3c }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0047cc3c: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { jb L_0047cc5c }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0047cc5c: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { call dword ptr [g_00e11064] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e10c78] }
	__asm { test al, al }
	__asm { jne L_0047cc99 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e10c74] }
	__asm { L_0047cc99: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10c70] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e11c30] }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e110ec] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11074] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e110dc[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" char g_00e11c20[];
extern "C" char g_00e11dd0[];
extern "C" char g_00e11dd4[];
extern "C" char g_00e11de4[];
extern "C" char g_00e12bcc[];
extern "C" void fn_00547ac0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0047e060
extern "C" __declspec(naked) void asm_0047e060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ae9b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { push 0x12c89ec }
	__asm { push 0x12bc018 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf67f8 }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { add esp, 0x14 }
	__asm { mov ebx, eax }
	__asm { test ecx, ecx }
	__asm { je L_0047e0be }
	__asm { call dword ptr [g_00e12bcc] }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { call dword ptr [g_00e110dc] }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { L_0047e0be: }
	__asm { push 0 }
	__asm { push 3 }
	__asm { push 0x12c0968 }
	__asm { push edi }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { push ecx }
	__asm { lea eax, [edi + 0x10] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov ecx, dword ptr [ebx + 0x20] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00547ac0 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call dword ptr [g_00e11c20] }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11dd4] }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call dword ptr [g_00e11dd0] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12c0968 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11de4] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10fb8[];
extern "C" char g_00e11c18[];
extern "C" char g_00e120dc[];
extern "C" char g_01320164[];
extern "C" char g_01320190[];
extern "C" void fn_00480d00();
extern "C" void fn_0057e360();
extern "C" void fn_005849e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0047e660
extern "C" __declspec(naked) void asm_0047e660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8acbc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { test al, 1 }
	__asm { jne L_0047e6b0 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0047e6b0: }
	__asm { mov esi, dword ptr [g_01320190] }
	__asm { mov dword ptr [ebp - 0x10], 0xa }
	__asm { cmp dword ptr [esi + 0x3c], 0 }
	__asm { je L_0047e6ee }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x1320190 }
	__asm { call fn_005849e0 }
	__asm { mov edx, eax }
	__asm { cmp edx, esi }
	__asm { je L_0047e6ee }
	__asm { mov eax, dword ptr [edx - 8] }
	__asm { mov ecx, dword ptr [edx - 0xc] }
	__asm { mov esi, dword ptr [edx - 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [edx - 4] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { jmp L_0047e6f1 }
	__asm { L_0047e6ee: }
	__asm { mov esi, dword ptr [ebp - 0x24] }
	__asm { L_0047e6f1: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e120dc] }
	__asm { test al, al }
	__asm { jne L_0047e707 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11c18] }
	__asm { L_0047e707: }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { lea esi, [ebp - 0x14] }
	__asm { test al, 1 }
	__asm { jne L_0047e73b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0047e73b: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x1007d5c }
	__asm { push esi }
	__asm { push 2 }
	__asm { push 0x1012a4c }
	__asm { push ecx }
	__asm { mov ecx, 0x1320168 }
	__asm { call fn_00480d00 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x5c }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10fb8[];
extern "C" char g_01318f9a[];
extern "C" char g_01320164[];
extern "C" void fn_00480d00();
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0047e790
extern "C" __declspec(naked) void asm_0047e790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp byte ptr [g_01318f9a], 0 }
	__asm { je L_0047e826 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_0047e7e2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0047e7e2: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 2 }
	__asm { push 0x1012a58 }
	__asm { push ecx }
	__asm { mov ecx, 0x1320168 }
	__asm { call fn_00480d00 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { L_0047e826: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10fb8[];
extern "C" char g_01318f9a[];
extern "C" char g_01320164[];
extern "C" void fn_00480d00();
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0047e840
extern "C" __declspec(naked) void asm_0047e840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_01318f9a], 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { je L_0047e8e0 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { lea esi, [ebp - 0x10] }
	__asm { test al, 1 }
	__asm { jne L_0047e89a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0047e89a: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x1007d5c }
	__asm { push esi }
	__asm { push 2 }
	__asm { push 0x1012a70 }
	__asm { push ecx }
	__asm { mov ecx, 0x1320168 }
	__asm { call fn_00480d00 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { L_0047e8e0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1026c[];
extern "C" char g_00e102d4[];
extern "C" char g_00e1031c[];
extern "C" char g_00e10354[];
extern "C" char g_00e1037c[];
extern "C" char g_0131ab88[];
extern "C" void fn_0042d2c0();
// FUNCTION: ROBLOXSTUDIO 0x00480130
extern "C" __declspec(naked) void asm_00480130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a73d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_0048017b }
	__asm { lea ecx, [edi + 0x70] }
	__asm { mov dword ptr [edi], 0x1012b64 }
	__asm { call dword ptr [g_00e102d4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0048017b: }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea esi, [edi + 0x10] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e1037c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 0x14], esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + eax], 0xe3ed74 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x70] }
	__asm { mov dword ptr [ecx + edi - 4], eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0xe3addc }
	__asm { mov byte ptr [esi + 0x4c], 0 }
	__asm { mov byte ptr [esi + 0x45], 0 }
	__asm { call dword ptr [g_00e10354] }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov eax, dword ptr [g_0131ab88] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { or eax, 1 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0042d2c0 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { jne L_00480213 }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 2 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, edi }
	__asm { call dword ptr [g_00e1026c] }
	__asm { L_00480213: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00422570();
extern "C" void fn_00486c00();
// FUNCTION: ROBLOXSTUDIO 0x00481010
extern "C" __declspec(naked) void asm_00481010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a209 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0x18] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00422570 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { call fn_00486c00 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi], 0x57a2b0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add eax, 8 }
	__asm { mov dword ptr [esi + 0xc], ecx }
	__asm { lea ecx, [esi + 0x10] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test eax, eax }
	__asm { je L_004810be }
	__asm { test al, 1 }
	__asm { jne L_004810b7 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004810b7 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004810b7: }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { L_004810be: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { test eax, eax }
	__asm { je L_004810e2 }
	__asm { test al, 1 }
	__asm { jne L_004810e2 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004810e2 }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004810e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10c60[];
extern "C" char g_00e11024[];
extern "C" char g_00e110ec[];
extern "C" void fn_00487980();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00481340
extern "C" __declspec(naked) void asm_00481340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7acb2 }
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
	__asm { je L_004813b9 }
	__asm { sub esp, 8 }
	__asm { call fn_00487980 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00481395 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10c60] }
	__asm { L_00481395: }
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
	__asm { L_004813b9: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 9 }
	__asm { call dword ptr [g_00e10c60] }
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
	__asm { call dword ptr [g_00e110ec] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00483240();
// FUNCTION: ROBLOXSTUDIO 0x004818c0
extern "C" __declspec(naked) void asm_004818c0()
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
	__asm { je L_0048190b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0048190b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0048195e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0x1012b30 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1012b40 }
	__asm { mov dword ptr [esi + 8], 0x1012b38 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x1012b58 }
	__asm { mov dword ptr [esi + 8], 0x1012b50 }
	__asm { jmp L_00481960 }
	__asm { L_0048195e: }
	__asm { xor esi, esi }
	__asm { L_00481960: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00483240 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0048197d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0048197d: }
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
extern "C" void fn_00488a40();
extern "C" void fn_0090faf0();
// FUNCTION: ROBLOXSTUDIO 0x00481ba0
extern "C" __declspec(naked) void asm_00481ba0()
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
	__asm { push 0x128 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00481bf1 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_0090faf0 }
	__asm { mov esi, eax }
	__asm { jmp L_00481bf3 }
	__asm { L_00481bf1: }
	__asm { xor esi, esi }
	__asm { L_00481bf3: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00488a40 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00481c24 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00481c24 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00481c24: }
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
extern "C" void fn_00489070();
extern "C" void fn_00916360();
// FUNCTION: ROBLOXSTUDIO 0x00482280
extern "C" __declspec(naked) void asm_00482280()
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
	__asm { push 0x158 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004822d1 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_00916360 }
	__asm { mov esi, eax }
	__asm { jmp L_004822d3 }
	__asm { L_004822d1: }
	__asm { xor esi, esi }
	__asm { L_004822d3: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00489070 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00482304 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00482304 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00482304: }
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
extern "C" void fn_00489100();
extern "C" void fn_00919080();
// FUNCTION: ROBLOXSTUDIO 0x00482320
extern "C" __declspec(naked) void asm_00482320()
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
	__asm { push 0x268 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00482371 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_00919080 }
	__asm { mov esi, eax }
	__asm { jmp L_00482373 }
	__asm { L_00482371: }
	__asm { xor esi, esi }
	__asm { L_00482373: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00489100 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004823a4 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_004823a4 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_004823a4: }
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
extern "C" char g_0131b6c0[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_004803e0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004836f0
extern "C" __declspec(naked) void asm_004836f0()
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
	__asm { mov dword ptr [esi], 0xe593ec }
	__asm { test al, al }
	__asm { je L_00483761 }
	__asm { cmp dword ptr [g_0131b6c0], 0x29a }
	__asm { je L_00483761 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00483750 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00483761 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00483750: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00483761: }
	__asm { mov ecx, esi }
	__asm { call fn_004803e0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_004837bb }
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
	__asm { L_004837bb: }
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
extern "C" char g_0131b6bc[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00480440();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00483a00
extern "C" __declspec(naked) void asm_00483a00()
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
	__asm { mov dword ptr [esi], 0xe4dcfc }
	__asm { test al, al }
	__asm { je L_00483a71 }
	__asm { cmp dword ptr [g_0131b6bc], 0x29a }
	__asm { je L_00483a71 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00483a60 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00483a71 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00483a60: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00483a71: }
	__asm { mov ecx, esi }
	__asm { call fn_00480440 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_00483acb }
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
	__asm { L_00483acb: }
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
extern "C" char g_0131e0c4[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_004804a0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00483d10
extern "C" __declspec(naked) void asm_00483d10()
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
	__asm { mov dword ptr [esi], 0xe4fee4 }
	__asm { test al, al }
	__asm { je L_00483d81 }
	__asm { cmp dword ptr [g_0131e0c4], 0x29a }
	__asm { je L_00483d81 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00483d70 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00483d81 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00483d70: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00483d81: }
	__asm { mov ecx, esi }
	__asm { call fn_004804a0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_00483ddb }
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
	__asm { L_00483ddb: }
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
extern "C" char g_0131e0c8[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00480500();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00484020
extern "C" __declspec(naked) void asm_00484020()
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
	__asm { mov dword ptr [esi], 0xe4feec }
	__asm { test al, al }
	__asm { je L_00484091 }
	__asm { cmp dword ptr [g_0131e0c8], 0x29a }
	__asm { je L_00484091 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00484080 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00484091 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00484080: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00484091: }
	__asm { mov ecx, esi }
	__asm { call fn_00480500 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_004840eb }
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
	__asm { L_004840eb: }
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
extern "C" char g_0131e0cc[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00480560();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00484330
extern "C" __declspec(naked) void asm_00484330()
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
	__asm { mov dword ptr [esi], 0xe4fef4 }
	__asm { test al, al }
	__asm { je L_004843a1 }
	__asm { cmp dword ptr [g_0131e0cc], 0x29a }
	__asm { je L_004843a1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00484390 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004843a1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00484390: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004843a1: }
	__asm { mov ecx, esi }
	__asm { call fn_00480560 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_004843fb }
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
	__asm { L_004843fb: }
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
extern "C" char g_0131e0d0[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_004805c0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00484640
extern "C" __declspec(naked) void asm_00484640()
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
	__asm { mov dword ptr [esi], 0xe4fefc }
	__asm { test al, al }
	__asm { je L_004846b1 }
	__asm { cmp dword ptr [g_0131e0d0], 0x29a }
	__asm { je L_004846b1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004846a0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004846b1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004846a0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004846b1: }
	__asm { mov ecx, esi }
	__asm { call fn_004805c0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0048470b }
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
	__asm { L_0048470b: }
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
extern "C" char g_0131e0d4[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00480620();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00484950
extern "C" __declspec(naked) void asm_00484950()
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
	__asm { mov dword ptr [esi], 0xe4ff04 }
	__asm { test al, al }
	__asm { je L_004849c1 }
	__asm { cmp dword ptr [g_0131e0d4], 0x29a }
	__asm { je L_004849c1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004849b0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004849c1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004849b0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004849c1: }
	__asm { mov ecx, esi }
	__asm { call fn_00480620 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_00484a1b }
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
	__asm { L_00484a1b: }
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
extern "C" char g_0131e0d8[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00480680();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00484c60
extern "C" __declspec(naked) void asm_00484c60()
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
	__asm { mov dword ptr [esi], 0xe4ff0c }
	__asm { test al, al }
	__asm { je L_00484cd1 }
	__asm { cmp dword ptr [g_0131e0d8], 0x29a }
	__asm { je L_00484cd1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00484cc0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00484cd1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00484cc0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00484cd1: }
	__asm { mov ecx, esi }
	__asm { call fn_00480680 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_00484d2b }
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
	__asm { L_00484d2b: }
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
extern "C" char g_0131e0dc[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_004806e0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00484f70
extern "C" __declspec(naked) void asm_00484f70()
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
	__asm { mov dword ptr [esi], 0xe4ff14 }
	__asm { test al, al }
	__asm { je L_00484fe1 }
	__asm { cmp dword ptr [g_0131e0dc], 0x29a }
	__asm { je L_00484fe1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00484fd0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00484fe1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00484fd0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00484fe1: }
	__asm { mov ecx, esi }
	__asm { call fn_004806e0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0048503b }
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
	__asm { L_0048503b: }
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
extern "C" char g_0131e0e0[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00480740();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00485280
extern "C" __declspec(naked) void asm_00485280()
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
	__asm { mov dword ptr [esi], 0xe4ff1c }
	__asm { test al, al }
	__asm { je L_004852f1 }
	__asm { cmp dword ptr [g_0131e0e0], 0x29a }
	__asm { je L_004852f1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004852e0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004852f1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004852e0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004852f1: }
	__asm { mov ecx, esi }
	__asm { call fn_00480740 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0048534b }
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
	__asm { L_0048534b: }
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
extern "C" char g_0131e0e4[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_004807a0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00485590
extern "C" __declspec(naked) void asm_00485590()
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
	__asm { mov dword ptr [esi], 0xe4ff24 }
	__asm { test al, al }
	__asm { je L_00485601 }
	__asm { cmp dword ptr [g_0131e0e4], 0x29a }
	__asm { je L_00485601 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004855f0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00485601 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004855f0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00485601: }
	__asm { mov ecx, esi }
	__asm { call fn_004807a0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0048565b }
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
	__asm { L_0048565b: }
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
extern "C" char g_0131e0e8[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00480800();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004858a0
extern "C" __declspec(naked) void asm_004858a0()
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
	__asm { mov dword ptr [esi], 0xe4ff2c }
	__asm { test al, al }
	__asm { je L_00485911 }
	__asm { cmp dword ptr [g_0131e0e8], 0x29a }
	__asm { je L_00485911 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00485900 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00485911 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00485900: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00485911: }
	__asm { mov ecx, esi }
	__asm { call fn_00480800 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0048596b }
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
	__asm { L_0048596b: }
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
extern "C" char g_0131e0ec[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00480860();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00485bb0
extern "C" __declspec(naked) void asm_00485bb0()
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
	__asm { mov dword ptr [esi], 0xe5939c }
	__asm { test al, al }
	__asm { je L_00485c21 }
	__asm { cmp dword ptr [g_0131e0ec], 0x29a }
	__asm { je L_00485c21 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00485c10 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00485c21 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00485c10: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00485c21: }
	__asm { mov ecx, esi }
	__asm { call fn_00480860 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_00485c7b }
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
	__asm { L_00485c7b: }
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
extern "C" char g_0131e0f0[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_004808c0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00485ec0
extern "C" __declspec(naked) void asm_00485ec0()
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
	__asm { mov dword ptr [esi], 0xe593e4 }
	__asm { test al, al }
	__asm { je L_00485f31 }
	__asm { cmp dword ptr [g_0131e0f0], 0x29a }
	__asm { je L_00485f31 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00485f20 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00485f31 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00485f20: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00485f31: }
	__asm { mov ecx, esi }
	__asm { call fn_004808c0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_00485f8b }
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
	__asm { L_00485f8b: }
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
extern "C" char g_0131b6b8[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00480920();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004861d0
extern "C" __declspec(naked) void asm_004861d0()
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
	__asm { mov dword ptr [esi], 0xe5948c }
	__asm { test al, al }
	__asm { je L_00486241 }
	__asm { cmp dword ptr [g_0131b6b8], 0x29a }
	__asm { je L_00486241 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00486230 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00486241 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00486230: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00486241: }
	__asm { mov ecx, esi }
	__asm { call fn_00480920 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0048629b }
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
	__asm { L_0048629b: }
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
extern "C" char g_0131b6b4[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00480980();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004864e0
extern "C" __declspec(naked) void asm_004864e0()
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
	__asm { mov dword ptr [esi], 0xe59494 }
	__asm { test al, al }
	__asm { je L_00486551 }
	__asm { cmp dword ptr [g_0131b6b4], 0x29a }
	__asm { je L_00486551 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00486540 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00486551 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00486540: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00486551: }
	__asm { mov ecx, esi }
	__asm { call fn_00480980 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_004865ab }
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
	__asm { L_004865ab: }
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
extern "C" char g_0131b6b0[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_004809e0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004867f0
extern "C" __declspec(naked) void asm_004867f0()
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
	__asm { mov dword ptr [esi], 0xe5949c }
	__asm { test al, al }
	__asm { je L_00486861 }
	__asm { cmp dword ptr [g_0131b6b0], 0x29a }
	__asm { je L_00486861 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00486850 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00486861 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00486850: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00486861: }
	__asm { mov ecx, esi }
	__asm { call fn_004809e0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_004868bb }
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
	__asm { L_004868bb: }
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
extern "C" char g_0131b6ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00480aa0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00486b00
extern "C" __declspec(naked) void asm_00486b00()
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
	__asm { mov dword ptr [esi], 0xe501f0 }
	__asm { test al, al }
	__asm { je L_00486b71 }
	__asm { cmp dword ptr [g_0131b6ac], 0x29a }
	__asm { je L_00486b71 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00486b60 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00486b71 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00486b60: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00486b71: }
	__asm { mov ecx, esi }
	__asm { call fn_00480aa0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_00486bcb }
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
	__asm { L_00486bcb: }
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

extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x00486c00
extern "C" __declspec(naked) void asm_00486c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a780 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00422570 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { test eax, eax }
	__asm { je L_00486c77 }
	__asm { test al, 1 }
	__asm { jne L_00486c70 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00486c70 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00486c70: }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { L_00486c77: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { test eax, eax }
	__asm { je L_00486c9e }
	__asm { test al, 1 }
	__asm { jne L_00486c9e }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00486c9e }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00486c9e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_00422570();
extern "C" void fn_004883e0();
// FUNCTION: ROBLOXSTUDIO 0x004874a0
extern "C" __declspec(naked) void asm_004874a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d428 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x30 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { add ecx, 0x10 }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { mov ecx, esi }
	__asm { call fn_004883e0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { test eax, eax }
	__asm { je L_00487519 }
	__asm { test al, 1 }
	__asm { jne L_00487519 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00487519 }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00487519: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_00422570();
extern "C" void fn_00489b30();
// FUNCTION: ROBLOXSTUDIO 0x004883e0
extern "C" __declspec(naked) void asm_004883e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d428 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x30 }
	__asm { mov ecx, esp }
	__asm { add ecx, 0x10 }
	__asm { mov dword ptr [ecx - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { call fn_00489b30 }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { mov ecx, 0x1012b1c }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { cmove ecx, edx }
	__asm { mov dword ptr [esi], ecx }
	__asm { test eax, eax }
	__asm { je L_00488464 }
	__asm { test al, 1 }
	__asm { jne L_00488464 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00488464 }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00488464: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" char g_00e10c60[];
extern "C" char g_00e110ec[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00488760
extern "C" __declspec(naked) void asm_00488760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ae71 }
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
	__asm { L_00488791: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp esi, ebx }
	__asm { je L_004887da }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test esi, esi }
	__asm { je L_004887ac }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10c60] }
	__asm { L_004887ac: }
	__asm { add esi, 4 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { add edi, 4 }
	__asm { jmp L_00488791 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp edi, esi }
	__asm { je L_004887d1 }
	__asm { L_004887c2: }
	__asm { sub edi, 4 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e110ec] }
	__asm { cmp edi, esi }
	__asm { jne L_004887c2 }
	__asm { L_004887d1: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_004887da: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10524[];
extern "C" void fn_00483180();
extern "C" void fn_00489890();
// FUNCTION: ROBLOXSTUDIO 0x004897b0
extern "C" __declspec(naked) void asm_004897b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { jne L_004897e7 }
	__asm { mov edi, dword ptr [edi] }
	__asm { push 0x20 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_004897df }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00483180 }
	__asm { pop edi }
	__asm { mov dword ptr [esi], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004897df: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { mov dword ptr [esi], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004897e7: }
	__asm { cmp eax, 1 }
	__asm { jne L_004897fa }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004897fa: }
	__asm { cmp eax, 2 }
	__asm { jne L_00489815 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_0048980b }
	__asm { push ecx }
	__asm { call fn_00489890 }
	__asm { L_0048980b: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00489815: }
	__asm { cmp eax, 3 }
	__asm { jne L_00489833 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12c8488 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_0048980b }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov dword ptr [esi], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00489833: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12c8488 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00422570();
extern "C" void fn_0048a040();
// FUNCTION: ROBLOXSTUDIO 0x00489b30
extern "C" __declspec(naked) void asm_00489b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d428 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { sub esp, 0x30 }
	__asm { mov ecx, esp }
	__asm { add ecx, 0x10 }
	__asm { mov dword ptr [ecx - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { call fn_0048a040 }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { test eax, eax }
	__asm { je L_00489bac }
	__asm { test al, 1 }
	__asm { jne L_00489bac }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00489bac }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00489bac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00422570();
extern "C" void fn_0048a350();
// FUNCTION: ROBLOXSTUDIO 0x0048a040
extern "C" __declspec(naked) void asm_0048a040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d428 }
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
	__asm { jne L_0048a0a6 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { sub esp, 0x30 }
	__asm { mov ecx, esp }
	__asm { add ecx, 0x10 }
	__asm { mov dword ptr [ecx - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { call fn_0048a350 }
	__asm { mov bl, 1 }
	__asm { jmp L_0048a0a8 }
	__asm { L_0048a0a6: }
	__asm { xor bl, bl }
	__asm { L_0048a0a8: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { test eax, eax }
	__asm { je L_0048a0cf }
	__asm { test al, 1 }
	__asm { jne L_0048a0cf }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0048a0cf }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0048a0cf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x0048a2a0
extern "C" __declspec(naked) void asm_0048a2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xffffffc0 }
	__asm { push -1 }
	__asm { push 0xd7a168 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x6c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esp + 0x3c], 0xf }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esp + 0x38], 0 }
	__asm { mov byte ptr [esp + 0x28], 0 }
	__asm { cmp byte ptr [esi], 0 }
	__asm { jne L_0048a2e3 }
	__asm { xor edx, edx }
	__asm { jmp L_0048a2f1 }
	__asm { L_0048a2e3: }
	__asm { mov edx, esi }
	__asm { lea ecx, [edx + 1] }
	__asm { L_0048a2e8: }
	__asm { mov al, byte ptr [edx] }
	__asm { inc edx }
	__asm { test al, al }
	__asm { jne L_0048a2e8 }
	__asm { sub edx, ecx }
	__asm { L_0048a2f1: }
	__asm { push edx }
	__asm { push esi }
	__asm { lea ecx, [esp + 0x30] }
	__asm { call fn_004038a0 }
	__asm { mov dword ptr [esp + 0x7c], 0 }
	__asm { fild dword ptr [edi + 0x10] }
	__asm { sub esp, 8 }
	__asm { lea eax, [esp + 0x30] }
	__asm { fstp qword ptr [esp] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { cmp dword ptr [esp + 0x3c], 0x10 }
	__asm { jb L_0048a335 }
	__asm { push dword ptr [esp + 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0048a335: }
	__asm { mov ecx, dword ptr [esp + 0x74] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10504[];
extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x0048a350
extern "C" __declspec(naked) void asm_0048a350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d544 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0048a3a8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { jmp L_0048a3aa }
	__asm { L_0048a3a8: }
	__asm { xor esi, esi }
	__asm { L_0048a3aa: }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_0048a3d7 }
	__asm { test al, 1 }
	__asm { jne L_0048a3d7 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0048a3d7 }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0048a3d7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131b470[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_0048ab40();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0048a5d0
extern "C" __declspec(naked) void asm_0048a5d0()
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
	__asm { mov dword ptr [esi], 0xe501e8 }
	__asm { test al, al }
	__asm { je L_0048a641 }
	__asm { cmp dword ptr [g_0131b470], 0x29a }
	__asm { je L_0048a641 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0048a630 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0048a641 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0048a630: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0048a641: }
	__asm { mov ecx, esi }
	__asm { call fn_0048ab40 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0048a69b }
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
	__asm { L_0048a69b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x0048ad50
extern "C" __declspec(naked) void asm_0048ad50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8763c }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 2 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0048add9 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { jne L_0048adbd }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov dword ptr [edi + 8], esi }
	__asm { jmp L_0048ade0 }
	__asm { L_0048adbd: }
	__asm { mov ecx, edx }
	__asm { lea ebx, [ecx + 1] }
	__asm { L_0048adc2: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_0048adc2 }
	__asm { sub ecx, ebx }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov dword ptr [edi + 8], esi }
	__asm { jmp L_0048ade0 }
	__asm { L_0048add9: }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { L_0048ade0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
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
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131b6ec[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_0048b6a0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0048b700
extern "C" __declspec(naked) void asm_0048b700()
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
	__asm { mov dword ptr [esi], 0xe501e0 }
	__asm { test al, al }
	__asm { je L_0048b771 }
	__asm { cmp dword ptr [g_0131b6ec], 0x29a }
	__asm { je L_0048b771 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0048b760 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0048b771 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0048b760: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0048b771: }
	__asm { mov ecx, esi }
	__asm { call fn_0048b6a0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0048b7cb }
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
	__asm { L_0048b7cb: }
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
// FUNCTION: ROBLOXSTUDIO 0x0048c170
extern "C" __declspec(naked) void asm_0048c170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_0048c184 }
	__asm { lea edx, [esi + 0x24] }
	__asm { jmp L_0048c186 }
	__asm { L_0048c184: }
	__asm { xor edx, edx }
	__asm { L_0048c186: }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov eax, ecx }
	__asm { cmp dword ptr [eax], edx }
	__asm { je L_0048c196 }
	__asm { mov edi, edi }
	__asm { L_0048c190: }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp dword ptr [eax], edx }
	__asm { jne L_0048c190 }
	__asm { L_0048c196: }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { cmp dword ptr [eax], eax }
	__asm { jne L_0048c1ad }
	__asm { L_0048c1a5: }
	__asm { add eax, 4 }
	__asm { inc ecx }
	__asm { cmp dword ptr [eax], eax }
	__asm { je L_0048c1a5 }
	__asm { L_0048c1ad: }
	__asm { mov ebx, dword ptr [g_00e10508] }
	__asm { mov dword ptr [edi + 0x1c], ecx }
	__asm { mov edi, dword ptr [esi + 0x18] }
	__asm { test edi, edi }
	__asm { je L_0048c1e1 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_0048c1ca }
	__asm { push dword ptr [edi] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0048c1ca: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0048c1e1: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0048c1ee }
	__asm { push dword ptr [esi] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0048c1ee: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { pop edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_0048c170();
// FUNCTION: ROBLOXSTUDIO 0x0048c210
extern "C" __declspec(naked) void asm_0048c210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov edx, dword ptr [eax + 0xc] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { push edi }
	__asm { lea edi, [edx + eax*4] }
	__asm { test esi, esi }
	__asm { je L_0048c232 }
	__asm { lea eax, [esi + 0x24] }
	__asm { jmp L_0048c234 }
	__asm { L_0048c232: }
	__asm { xor eax, eax }
	__asm { L_0048c234: }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp edx, eax }
	__asm { ja L_0048c249 }
	__asm { cmp eax, edi }
	__asm { ja L_0048c249 }
	__asm { mov edi, edi }
	__asm { L_0048c240: }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax], eax }
	__asm { je L_0048c240 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0048c249: }
	__asm { test eax, eax }
	__asm { je L_0048c252 }
	__asm { add eax, -0x24 }
	__asm { jmp L_0048c254 }
	__asm { L_0048c252: }
	__asm { xor eax, eax }
	__asm { L_0048c254: }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { test ecx, ecx }
	__asm { je L_0048c260 }
	__asm { add ecx, -0xc }
	__asm { jmp L_0048c262 }
	__asm { L_0048c260: }
	__asm { xor ecx, ecx }
	__asm { L_0048c262: }
	__asm { dec dword ptr [ecx + 0x2c] }
	__asm { push esi }
	__asm { add ecx, 0xc }
	__asm { call fn_0048c170 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1026c[];
extern "C" char g_00e102d4[];
extern "C" char g_00e1031c[];
extern "C" char g_00e10354[];
extern "C" char g_00e10394[];
extern "C" char g_0131ab88[];
extern "C" void fn_0042d2c0();
// FUNCTION: ROBLOXSTUDIO 0x0048cba0
extern "C" __declspec(naked) void asm_0048cba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b21d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_0048cbeb }
	__asm { lea ecx, [edi + 0x60] }
	__asm { mov dword ptr [edi], 0x10065ec }
	__asm { call dword ptr [g_00e102d4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0048cbeb: }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea esi, [edi + 4] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10394] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 0x14], esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + eax], 0xe3ae1c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x60] }
	__asm { mov dword ptr [ecx + edi - 4], eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0xe3addc }
	__asm { mov byte ptr [esi + 0x4c], 0 }
	__asm { mov byte ptr [esi + 0x45], 0 }
	__asm { call dword ptr [g_00e10354] }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov eax, dword ptr [g_0131ab88] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { or eax, 2 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0042d2c0 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { jne L_0048cc83 }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 2 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, edi }
	__asm { call dword ptr [g_00e1026c] }
	__asm { L_0048cc83: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00793ca0();
extern "C" void fn_007d5550();
// FUNCTION: ROBLOXSTUDIO 0x0048d4a0
extern "C" __declspec(naked) void asm_0048d4a0()
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
	__asm { call fn_007d5550 }
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
	__asm { mov dword ptr [edi], 0xe5234c }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_0048d537 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0048d526 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_0048d526: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0048d537 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_0048d537: }
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

extern "C" void fn_00402fd0();
extern "C" void fn_00403540();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0048d5b0
extern "C" __declspec(naked) void asm_0048d5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_0048d5c4 }
	__asm { add edi, -0x1c }
	__asm { jmp L_0048d5c6 }
	__asm { L_0048d5c4: }
	__asm { xor edi, edi }
	__asm { L_0048d5c6: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { add ecx, edi }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { jb L_0048d5d8 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { jmp L_0048d5da }
	__asm { L_0048d5d8: }
	__asm { mov eax, ebx }
	__asm { L_0048d5da: }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { je L_0048d61a }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { add ecx, edi }
	__asm { cmp ecx, ebx }
	__asm { je L_0048d5ff }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { call fn_00403540 }
	__asm { L_0048d5ff: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { test eax, eax }
	__asm { je L_0048d610 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push dword ptr [esi + 4] }
	__asm { add ecx, edi }
	__asm { call eax }
	__asm { L_0048d610: }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, edi }
	__asm { call fn_007b4f50 }
	__asm { L_0048d61a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10260[];
extern "C" void fn_0048dd50();
// FUNCTION: ROBLOXSTUDIO 0x0048de40
extern "C" __declspec(naked) void asm_0048de40()
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
	__asm { sar eax, 4 }
	__asm { cmp eax, edi }
	__asm { jae L_0048dead }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0xfffffff }
	__asm { sar esi, 4 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_0048de77 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0048de77: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { pop ebx }
	__asm { jae L_0048de9b }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_0048dd50 }
	__asm { L_0048de9b: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_0048dd50 }
	__asm { L_0048dead: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131abd4[];
extern "C" char g_0131abd8[];
extern "C" char g_0131abdc[];
extern "C" char g_0131abe0[];
extern "C" void fn_00403540();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0048e3f0
extern "C" __declspec(naked) void asm_0048e3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6f971 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131abd4] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0048e44a }
	__asm { or eax, 1 }
	__asm { push 0xddc6b0 }
	__asm { mov dword ptr [g_0131abd4], eax }
	__asm { mov dword ptr [g_0131abd8], 0x12be0b8 }
	__asm { mov dword ptr [g_0131abe0], 0x43eb70 }
	__asm { mov dword ptr [g_0131abdc], 0x43ebd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0048e44a: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131abd8 }
	__asm { jne L_0048e47b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { cmp ecx, eax }
	__asm { je L_0048e4c8 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0048e47b: }
	__asm { test ecx, ecx }
	__asm { je L_0048e491 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0048e491: }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0048e4c2 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { L_0048e4c2: }
	__asm { mov dword ptr [esi], 0x131abd8 }
	__asm { L_0048e4c8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00402fd0();
extern "C" void fn_00405b90();
// FUNCTION: ROBLOXSTUDIO 0x0048e570
extern "C" __declspec(naked) void asm_0048e570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7b360 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [esp + 0x2c] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00405b90 }
	__asm { mov edi, eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x54], 0 }
	__asm { call fn_00405b90 }
	__asm { mov byte ptr [esp + 0x4c], 1 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { jb L_0048e5c9 }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_0048e5c9: }
	__asm { push ecx }
	__asm { push edi }
	__asm { push dword ptr [eax + 0x10] }
	__asm { mov ecx, eax }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { mov esi, dword ptr [g_00e10508] }
	__asm { test eax, eax }
	__asm { sete bl }
	__asm { cmp dword ptr [esp + 0x24], 0x10 }
	__asm { jb L_0048e5f2 }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_0048e5f2: }
	__asm { cmp dword ptr [esp + 0x3c], 0x10 }
	__asm { mov dword ptr [esp + 0x24], 0xf }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { mov byte ptr [esp + 0x10], 0 }
	__asm { jb L_0048e617 }
	__asm { push dword ptr [esp + 0x28] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_0048e617: }
	__asm { mov ecx, dword ptr [esp + 0x44] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c07c[];
extern "C" char g_0131c080[];
extern "C" char g_0131c08c[];
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0048f0b0
extern "C" __declspec(naked) void asm_0048f0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b13e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0048f115 }
	__asm { cmp dword ptr [g_0131c08c], 0x29a }
	__asm { je L_0048f115 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0048f104 }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0048f115 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0048f104: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0048f115: }
	__asm { push 0x48f390 }
	__asm { push 0x131c084 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c07c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0048f15f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c07c], eax }
	__asm { push 0xf1b29c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c080], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0048f15f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c080] }
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
extern "C" char g_0131c08c[];
extern "C" char g_0131e43c[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_0048f0b0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0048f180
extern "C" __declspec(naked) void asm_0048f180()
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
	__asm { mov dword ptr [g_0131e43c], 0x1012e7c }
	__asm { test al, al }
	__asm { je L_0048f1f2 }
	__asm { cmp dword ptr [g_0131c08c], 0x29a }
	__asm { je L_0048f1f2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0048f1e1 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0048f1f2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0048f1e1: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0048f1f2: }
	__asm { call fn_0048f0b0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0048f249 }
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
	__asm { L_0048f249: }
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

extern "C" char g_00e10504[];
extern "C" char g_0131e408[];
extern "C" void fn_0040e0a0();
extern "C" void fn_0048ccd0();
extern "C" void fn_0048f6d0();
extern "C" void fn_007af680();
// FUNCTION: ROBLOXSTUDIO 0x0048f760
extern "C" __declspec(naked) void asm_0048f760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b16e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x68 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0048f802 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0x1012dfc }
	__asm { mov dword ptr [esi + 4], 0x1012e74 }
	__asm { mov dword ptr [esi + 0x18], 0x1012e84 }
	__asm { mov dword ptr [esi + 0x1c], 0x1012e90 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0048ccd0 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_0131e408] }
	__asm { mov dword ptr [esi], 0x1012ec4 }
	__asm { mov dword ptr [esi + 4], 0x1012ebc }
	__asm { mov dword ptr [esi + 0x18], 0x1012eb0 }
	__asm { mov dword ptr [esi + 0x1c], 0x1012ea0 }
	__asm { mov dword ptr [esi + 0x64], 0 }
	__asm { jmp L_0048f804 }
	__asm { L_0048f802: }
	__asm { xor esi, esi }
	__asm { L_0048f804: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_0048f6d0 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_0048f832 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0048f832 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0048f832: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131e6e0[];
extern "C" char g_0131e710[];
extern "C" char g_0131e714[];
extern "C" char g_0131e718[];
extern "C" char g_0131e71c[];
extern "C" char g_0131e720[];
extern "C" char g_0131e724[];
extern "C" char g_0131e728[];
extern "C" char g_0131e72c[];
extern "C" char g_0131e730[];
extern "C" char g_0131e734[];
extern "C" char g_0131e738[];
extern "C" char g_0131e73c[];
extern "C" char g_0131e740[];
extern "C" char g_0131e744[];
extern "C" char g_0131e748[];
extern "C" char g_0131e74c[];
extern "C" char g_0131e750[];
extern "C" char g_0131e754[];
extern "C" char g_0131e758[];
extern "C" char g_0131e75c[];
extern "C" char g_0131e760[];
extern "C" char g_0131e764[];
extern "C" void fn_00409860();
extern "C" void fn_00491130();
extern "C" void fn_007939d0();
// FUNCTION: ROBLOXSTUDIO 0x0048f8d0
extern "C" __declspec(naked) void asm_0048f8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fc60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x12ca688 }
	__asm { push 0x10131c8 }
	__asm { mov ecx, 0x131e6e0 }
	__asm { mov dword ptr [ebp - 0x10], 0x131e6e0 }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131e6e0], 0x1013c14 }
	__asm { mov dword ptr [g_0131e710], 0 }
	__asm { mov dword ptr [g_0131e714], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [g_0131e710], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131e718], 0 }
	__asm { mov dword ptr [g_0131e71c], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [g_0131e718], eax }
	__asm { mov dword ptr [g_0131e720], 0 }
	__asm { mov dword ptr [g_0131e724], 0 }
	__asm { mov dword ptr [g_0131e728], 0 }
	__asm { mov dword ptr [g_0131e72c], 0 }
	__asm { mov dword ptr [g_0131e730], 0 }
	__asm { mov dword ptr [g_0131e734], 0 }
	__asm { mov dword ptr [g_0131e738], 0 }
	__asm { mov dword ptr [g_0131e73c], 0 }
	__asm { mov dword ptr [g_0131e740], 0 }
	__asm { mov dword ptr [g_0131e744], 0 }
	__asm { mov dword ptr [g_0131e748], 0 }
	__asm { mov dword ptr [g_0131e74c], 0 }
	__asm { mov dword ptr [g_0131e750], 0 }
	__asm { mov dword ptr [g_0131e754], 0 }
	__asm { mov dword ptr [g_0131e758], 0 }
	__asm { mov dword ptr [g_0131e75c], 0 }
	__asm { mov dword ptr [g_0131e760], 0 }
	__asm { mov dword ptr [g_0131e764], 0 }
	__asm { push 0x10131d4 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00491130 }
	__asm { push 0x10131dc }
	__asm { push 4 }
	__asm { call fn_00491130 }
	__asm { push 0x10131e0 }
	__asm { push 8 }
	__asm { call fn_00491130 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131e6e0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c1e8[];
extern "C" char g_0131c218[];
extern "C" char g_0131c21c[];
extern "C" char g_0131c220[];
extern "C" char g_0131c224[];
extern "C" char g_0131c228[];
extern "C" char g_0131c22c[];
extern "C" char g_0131c230[];
extern "C" char g_0131c234[];
extern "C" char g_0131c238[];
extern "C" char g_0131c23c[];
extern "C" char g_0131c240[];
extern "C" char g_0131c244[];
extern "C" char g_0131c248[];
extern "C" char g_0131c24c[];
extern "C" char g_0131c250[];
extern "C" char g_0131c254[];
extern "C" char g_0131c258[];
extern "C" char g_0131c25c[];
extern "C" char g_0131c260[];
extern "C" char g_0131c264[];
extern "C" char g_0131c268[];
extern "C" char g_0131c26c[];
extern "C" void fn_00409860();
extern "C" void fn_004916a0();
extern "C" void fn_00491930();
extern "C" void fn_007939d0();
// FUNCTION: ROBLOXSTUDIO 0x0048fa50
extern "C" __declspec(naked) void asm_0048fa50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fc60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x12ca658 }
	__asm { push 0x10131e4 }
	__asm { mov ecx, 0x131c1e8 }
	__asm { mov dword ptr [ebp - 0x10], 0x131c1e8 }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131c1e8], 0x1013bfc }
	__asm { mov dword ptr [g_0131c218], 0 }
	__asm { mov dword ptr [g_0131c21c], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [g_0131c218], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131c220], 0 }
	__asm { mov dword ptr [g_0131c224], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [g_0131c220], eax }
	__asm { mov dword ptr [g_0131c228], 0 }
	__asm { mov dword ptr [g_0131c22c], 0 }
	__asm { mov dword ptr [g_0131c230], 0 }
	__asm { mov dword ptr [g_0131c234], 0 }
	__asm { mov dword ptr [g_0131c238], 0 }
	__asm { mov dword ptr [g_0131c23c], 0 }
	__asm { mov dword ptr [g_0131c240], 0 }
	__asm { mov dword ptr [g_0131c244], 0 }
	__asm { mov dword ptr [g_0131c248], 0 }
	__asm { mov dword ptr [g_0131c24c], 0 }
	__asm { mov dword ptr [g_0131c250], 0 }
	__asm { mov dword ptr [g_0131c254], 0 }
	__asm { mov dword ptr [g_0131c258], 0 }
	__asm { mov dword ptr [g_0131c25c], 0 }
	__asm { mov dword ptr [g_0131c260], 0 }
	__asm { mov dword ptr [g_0131c264], 0 }
	__asm { mov dword ptr [g_0131c268], 0 }
	__asm { mov dword ptr [g_0131c26c], 0 }
	__asm { push 0x10131f4 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_004916a0 }
	__asm { push 0x1013200 }
	__asm { push 3 }
	__asm { call fn_004916a0 }
	__asm { push 0x101320c }
	__asm { push 4 }
	__asm { call fn_004916a0 }
	__asm { push 0x1013214 }
	__asm { push 5 }
	__asm { call fn_004916a0 }
	__asm { sub esp, 0xc }
	__asm { call fn_00491930 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131c1e8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131e770[];
extern "C" char g_0131e7a0[];
extern "C" char g_0131e7a4[];
extern "C" char g_0131e7a8[];
extern "C" char g_0131e7ac[];
extern "C" char g_0131e7b0[];
extern "C" char g_0131e7b4[];
extern "C" char g_0131e7b8[];
extern "C" char g_0131e7bc[];
extern "C" char g_0131e7c0[];
extern "C" char g_0131e7c4[];
extern "C" char g_0131e7c8[];
extern "C" char g_0131e7cc[];
extern "C" char g_0131e7d0[];
extern "C" char g_0131e7d4[];
extern "C" char g_0131e7d8[];
extern "C" char g_0131e7dc[];
extern "C" char g_0131e7e0[];
extern "C" char g_0131e7e4[];
extern "C" char g_0131e7e8[];
extern "C" char g_0131e7ec[];
extern "C" char g_0131e7f0[];
extern "C" char g_0131e7f4[];
extern "C" void fn_00409860();
extern "C" void fn_00491c10();
extern "C" void fn_007939d0();
// FUNCTION: ROBLOXSTUDIO 0x0048fbe0
extern "C" __declspec(naked) void asm_0048fbe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fc60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x12ca620 }
	__asm { push 0x1013230 }
	__asm { mov ecx, 0x131e770 }
	__asm { mov dword ptr [ebp - 0x10], 0x131e770 }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131e770], 0x1013be4 }
	__asm { mov dword ptr [g_0131e7a0], 0 }
	__asm { mov dword ptr [g_0131e7a4], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [g_0131e7a0], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131e7a8], 0 }
	__asm { mov dword ptr [g_0131e7ac], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [g_0131e7a8], eax }
	__asm { mov dword ptr [g_0131e7b0], 0 }
	__asm { mov dword ptr [g_0131e7b4], 0 }
	__asm { mov dword ptr [g_0131e7b8], 0 }
	__asm { mov dword ptr [g_0131e7bc], 0 }
	__asm { mov dword ptr [g_0131e7c0], 0 }
	__asm { mov dword ptr [g_0131e7c4], 0 }
	__asm { mov dword ptr [g_0131e7c8], 0 }
	__asm { mov dword ptr [g_0131e7cc], 0 }
	__asm { mov dword ptr [g_0131e7d0], 0 }
	__asm { mov dword ptr [g_0131e7d4], 0 }
	__asm { mov dword ptr [g_0131e7d8], 0 }
	__asm { mov dword ptr [g_0131e7dc], 0 }
	__asm { mov dword ptr [g_0131e7e0], 0 }
	__asm { mov dword ptr [g_0131e7e4], 0 }
	__asm { mov dword ptr [g_0131e7e8], 0 }
	__asm { mov dword ptr [g_0131e7ec], 0 }
	__asm { mov dword ptr [g_0131e7f0], 0 }
	__asm { mov dword ptr [g_0131e7f4], 0 }
	__asm { push 0x10131f4 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00491c10 }
	__asm { push 0x1013248 }
	__asm { push 1 }
	__asm { call fn_00491c10 }
	__asm { push 0x101324c }
	__asm { push 2 }
	__asm { call fn_00491c10 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131e770 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131e800[];
extern "C" char g_0131e830[];
extern "C" char g_0131e834[];
extern "C" char g_0131e838[];
extern "C" char g_0131e83c[];
extern "C" char g_0131e840[];
extern "C" char g_0131e844[];
extern "C" char g_0131e848[];
extern "C" char g_0131e84c[];
extern "C" char g_0131e850[];
extern "C" char g_0131e854[];
extern "C" char g_0131e858[];
extern "C" char g_0131e85c[];
extern "C" char g_0131e860[];
extern "C" char g_0131e864[];
extern "C" char g_0131e868[];
extern "C" char g_0131e86c[];
extern "C" char g_0131e870[];
extern "C" char g_0131e874[];
extern "C" char g_0131e878[];
extern "C" char g_0131e87c[];
extern "C" char g_0131e880[];
extern "C" char g_0131e884[];
extern "C" void fn_00409860();
extern "C" void fn_00492110();
extern "C" void fn_007939d0();
// FUNCTION: ROBLOXSTUDIO 0x0048fd60
extern "C" __declspec(naked) void asm_0048fd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fc60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x12ca5ec }
	__asm { push 0x1013250 }
	__asm { mov ecx, 0x131e800 }
	__asm { mov dword ptr [ebp - 0x10], 0x131e800 }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131e800], 0x1013bcc }
	__asm { mov dword ptr [g_0131e830], 0 }
	__asm { mov dword ptr [g_0131e834], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [g_0131e830], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131e838], 0 }
	__asm { mov dword ptr [g_0131e83c], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [g_0131e838], eax }
	__asm { mov dword ptr [g_0131e840], 0 }
	__asm { mov dword ptr [g_0131e844], 0 }
	__asm { mov dword ptr [g_0131e848], 0 }
	__asm { mov dword ptr [g_0131e84c], 0 }
	__asm { mov dword ptr [g_0131e850], 0 }
	__asm { mov dword ptr [g_0131e854], 0 }
	__asm { mov dword ptr [g_0131e858], 0 }
	__asm { mov dword ptr [g_0131e85c], 0 }
	__asm { mov dword ptr [g_0131e860], 0 }
	__asm { mov dword ptr [g_0131e864], 0 }
	__asm { mov dword ptr [g_0131e868], 0 }
	__asm { mov dword ptr [g_0131e86c], 0 }
	__asm { mov dword ptr [g_0131e870], 0 }
	__asm { mov dword ptr [g_0131e874], 0 }
	__asm { mov dword ptr [g_0131e878], 0 }
	__asm { mov dword ptr [g_0131e87c], 0 }
	__asm { mov dword ptr [g_0131e880], 0 }
	__asm { mov dword ptr [g_0131e884], 0 }
	__asm { push 0x10131f4 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00492110 }
	__asm { push 0x101324c }
	__asm { push 2 }
	__asm { call fn_00492110 }
	__asm { push 0x1013248 }
	__asm { push 1 }
	__asm { call fn_00492110 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131e800 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
extern "C" void fn_004115f0();
extern "C" void fn_0044c6d0();
extern "C" void fn_00490da0();
extern "C" void fn_00490f20();
extern "C" void fn_006b9830();
extern "C" void fn_0076ddc0();
extern "C" void fn_007b5bb0();
// FUNCTION: ROBLOXSTUDIO 0x00490680
extern "C" __declspec(naked) void asm_00490680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b742 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00490da0 }
	__asm { lea ecx, [edi + 0x68] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0076ddc0 }
	__asm { mov dword ptr [edi], 0x1013b24 }
	__asm { mov dword ptr [edi + 4], 0x1013b18 }
	__asm { mov dword ptr [edi + 0x18], 0x1013b0c }
	__asm { mov dword ptr [edi + 0x1c], 0x1013afc }
	__asm { mov dword ptr [edi + 0x68], 0x1013af4 }
	__asm { mov dword ptr [edi + 0xc0], 0xf }
	__asm { mov dword ptr [edi + 0xbc], 0 }
	__asm { mov byte ptr [edi + 0xac], 0 }
	__asm { lea ebx, [edi + 0xc4] }
	__asm { mov dword ptr [ebx], 0x2580320 }
	__asm { mov dword ptr [edi + 0xc8], 0 }
	__asm { mov dword ptr [edi + 0xcc], 0 }
	__asm { mov dword ptr [edi + 0xd0], 0 }
	__asm { lea eax, [edi + 0xd8] }
	__asm { mov word ptr [edi + 0xd4], 0x100 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x44c760 }
	__asm { push 0x131b234 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0044c6d0 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { push 9 }
	__asm { push 0x1013584 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_007b5bb0 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_0049079b }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0049079b: }
	__asm { push ebx }
	__asm { lea ecx, [edi + 0xc8] }
	__asm { call fn_00490f20 }
	__asm { call fn_006b9830 }
	__asm { mov dword ptr [ebp - 0x10], 0x3000400 }
	__asm { cmp eax, 0xf42400 }
	__asm { jae L_004907c1 }
	__asm { mov dword ptr [ebp - 0x10], 0x2580320 }
	__asm { L_004907c1: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x98], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_01013590[];
extern "C" char g_01319c10[];
extern "C" void fn_00402fd0();
extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00490930
extern "C" __declspec(naked) void asm_00490930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7e4f8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { xor edx, edx }
	__asm { cmp byte ptr [g_01013590], dl }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, 9 }
	__asm { mov eax, esi }
	__asm { mov edi, ecx }
	__asm { cmove eax, edx }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xac] }
	__asm { push 0x1013590 }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push edx }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { je L_004909d9 }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [g_01013590], al }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { cmove esi, eax }
	__asm { push esi }
	__asm { push 0x1013590 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_004909b5 }
	__asm { lea edx, [edi + 0x1c] }
	__asm { jmp L_004909b7 }
	__asm { L_004909b5: }
	__asm { xor edx, edx }
	__asm { L_004909b7: }
	__asm { mov ecx, dword ptr [g_01319c10] }
	__asm { lea esi, [ebp - 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { push edx }
	__asm { call dword ptr [eax + 0xc] }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_004909d9 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004909d9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040ba00();
extern "C" void fn_004933f0();
extern "C" void fn_00494bd0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00493e80
extern "C" __declspec(naked) void asm_00493e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b5a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00494bd0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004933f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0040ba00 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [esi], 0x1013860 }
	__asm { je L_00493f67 }
	__asm { push 0x12ca564 }
	__asm { mov ecx, 0x12ca564 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00493f67 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00493f52 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00493f67 }
	__asm { L_00493f52: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00493f67: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01319c74[];
extern "C" void fn_0040bac0();
extern "C" void fn_004933f0();
extern "C" void fn_00494cc0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00494600
extern "C" __declspec(naked) void asm_00494600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f918 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov edx, 0x495660 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x14], 0x1319c74 }
	__asm { call fn_00494cc0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { push 0x1013458 }
	__asm { push 0x10134cc }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004933f0 }
	__asm { push eax }
	__asm { mov ecx, 0x1319c74 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0040bac0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_01319c74], 0x1013778 }
	__asm { je L_004946f6 }
	__asm { push 0x12ca564 }
	__asm { mov ecx, 0x12ca564 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_004946f6 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004946e1 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004946f6 }
	__asm { L_004946e1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004946f6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x1319c74 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040ba00();
extern "C" void fn_004933f0();
extern "C" void fn_00494d10();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00494710
extern "C" __declspec(naked) void asm_00494710()
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
	__asm { call fn_00494d10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { push 0x1013458 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004933f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0040ba00 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [esi], 0x1013860 }
	__asm { je L_004947fc }
	__asm { push 0x12ca564 }
	__asm { mov ecx, 0x12ca564 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_004947fc }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_004947e7 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004947fc }
	__asm { L_004947e7: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004947fc: }
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
extern "C" void fn_0040bac0();
extern "C" void fn_004933f0();
extern "C" void fn_00494dd0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x004949e0
extern "C" __declspec(naked) void asm_004949e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b5a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00494dd0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { push 0x1013548 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004933f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0040bac0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [esi], 0x1013778 }
	__asm { je L_00494ac9 }
	__asm { push 0x12ca564 }
	__asm { mov ecx, 0x12ca564 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00494ac9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00494ab4 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00494ac9 }
	__asm { L_00494ab4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00494ac9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10504[];
extern "C" char g_012ffaa0[];
extern "C" void fn_0040e0a0();
extern "C" void fn_004959d0();
extern "C" void fn_00496110();
extern "C" void fn_007af680();
// FUNCTION: ROBLOXSTUDIO 0x00495a80
extern "C" __declspec(naked) void asm_00495a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b99e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x98 }
	__asm { mov ebx, edx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00495b44 }
	__asm { push 0 }
	__asm { mov ecx, esi }
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
	__asm { mov dword ptr [esi], 0x1013ca4 }
	__asm { mov dword ptr [esi + 4], 0x1013c98 }
	__asm { mov dword ptr [esi + 0x18], 0x1013c8c }
	__asm { mov dword ptr [esi + 0x1c], 0x1013c7c }
	__asm { mov dword ptr [esi + 0x94], ebx }
	__asm { jmp L_00495b46 }
	__asm { L_00495b44: }
	__asm { xor esi, esi }
	__asm { L_00495b46: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00496110 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00495b74 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00495b74 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00495b74: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00495f10();
extern "C" void fn_004961a0();
// FUNCTION: ROBLOXSTUDIO 0x00495e20
extern "C" __declspec(naked) void asm_00495e20()
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
	__asm { push 0xa8 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00495e72 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_00495f10 }
	__asm { mov esi, eax }
	__asm { jmp L_00495e74 }
	__asm { L_00495e72: }
	__asm { xor esi, esi }
	__asm { L_00495e74: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_004961a0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00495ea5 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00495ea5 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00495ea5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ffaa0[];
extern "C" void fn_0040c260();
extern "C" void fn_004959d0();
extern "C" void fn_007af680();
// FUNCTION: ROBLOXSTUDIO 0x00495f10
extern "C" __declspec(naked) void asm_00495f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7b9f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [esp + 8], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe3baa4 }
	__asm { mov dword ptr [esi + 4], 0xe3bb1c }
	__asm { mov dword ptr [esi + 0x18], 0xe3bb24 }
	__asm { mov dword ptr [esi + 0x1c], 0xe3bb30 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { call fn_004959d0 }
	__asm { fldz }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012ffaa0] }
	__asm { fstp qword ptr [esi + 0x68] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x84], 0xf }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov byte ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { lea eax, [esp + 8] }
	__asm { mov dword ptr [esi], 0xe3c6d4 }
	__asm { mov dword ptr [esi + 4], 0xe3c750 }
	__asm { mov dword ptr [esi + 0x18], 0xe3c758 }
	__asm { mov dword ptr [esi + 0x1c], 0xe3c764 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [esp + 0xc], 0x496100 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00496008 }
	__asm { lea ecx, [esi + 0x90] }
	__asm { test ecx, ecx }
	__asm { je L_00495fe6 }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_00495fe6: }
	__asm { mov eax, 0x1013c58 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00496008: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" char g_00e11104[];
extern "C" char g_01318f74[];
extern "C" char g_0131b3d8[];
extern "C" void fn_004021e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00496350
extern "C" __declspec(naked) void asm_00496350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bf8a }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01318f74] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { jne L_0049641d }
	__asm { push 8 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_004963a6 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11104] }
	__asm { mov dword ptr [esi], 0x1014014 }
	__asm { jmp L_004963a8 }
	__asm { L_004963a6: }
	__asm { xor esi, esi }
	__asm { L_004963a8: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [g_0131b3d8] }
	__asm { mov dword ptr [g_01318f74], esi }
	__asm { test al, 1 }
	__asm { jne L_004963e6 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b3d8], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_004021e0 }
	__asm { push 0xddc850 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004963e6: }
	__asm { mov esi, dword ptr [g_00e110a8] }
	__asm { push 0 }
	__asm { push 0x1013d30 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [g_01318f74] }
	__asm { push 0x1013d98 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push 0x131b3c8 }
	__asm { call dword ptr [g_00e110ac] }
	__asm { mov eax, dword ptr [g_01318f74] }
	__asm { add esp, 0x14 }
	__asm { L_0049641d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10c54[];
extern "C" char g_00e10c58[];
extern "C" char g_00e10f08[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" char g_00e11104[];
extern "C" char g_0131c46c[];
extern "C" char g_0131e9ec[];
extern "C" char g_0131e9f4[];
extern "C" char g_0131e9f8[];
extern "C" char g_0131e9fc[];
extern "C" void fn_0045bf10();
extern "C" void fn_00497c60();
// FUNCTION: ROBLOXSTUDIO 0x00496430
extern "C" __declspec(naked) void asm_00496430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7bce0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov ecx, 0x131e9ec }
	__asm { mov dword ptr [ebp - 0x10], 0x131e9ec }
	__asm { call dword ptr [g_00e11104] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131e9ec], 0x1013fe4 }
	__asm { mov dword ptr [g_0131e9f4], 0x1013fd4 }
	__asm { call fn_0045bf10 }
	__asm { push 0x18 }
	__asm { mov dword ptr [g_0131e9f8], eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_004964b2 }
	__asm { push 0x131e9ec }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10f08] }
	__asm { mov dword ptr [esi], 0x1008400 }
	__asm { jmp L_004964b4 }
	__asm { L_004964b2: }
	__asm { xor esi, esi }
	__asm { L_004964b4: }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { cmp dword ptr [g_0131c46c], 0 }
	__asm { mov dword ptr [g_0131e9fc], esi }
	__asm { jne L_004964d4 }
	__asm { or edx, 0xffffffff }
	__asm { call fn_00497c60 }
	__asm { mov dword ptr [g_0131c46c], eax }
	__asm { L_004964d4: }
	__asm { mov eax, dword ptr [g_0131c46c] }
	__asm { cmp eax, -1 }
	__asm { je L_004964ef }
	__asm { push eax }
	__asm { push 0x1013d1c }
	__asm { call dword ptr [g_00e10c58] }
	__asm { add esp, 8 }
	__asm { jmp L_00496507 }
	__asm { L_004964ef: }
	__asm { push 0x499710 }
	__asm { push 0x412ca0 }
	__asm { push 0x1013d1c }
	__asm { call dword ptr [g_00e10c54] }
	__asm { add esp, 0xc }
	__asm { L_00496507: }
	__asm { mov esi, dword ptr [g_00e110a8] }
	__asm { push 0 }
	__asm { push 0x1013e30 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push 0x131e9ec }
	__asm { push 0x1013e80 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [g_0131e9fc] }
	__asm { call dword ptr [g_00e110ac] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x14 }
	__asm { mov eax, 0x131e9ec }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_0131e9e8[];
extern "C" void fn_00496430();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00496c40
extern "C" __declspec(naked) void asm_00496c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bee0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x18], 0x10 }
	__asm { lea eax, [esi + 4] }
	__asm { jb L_00496c6a }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00496c6a: }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [g_0131e9e8] }
	__asm { test al, 1 }
	__asm { jne L_00496ca2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e9e8], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00496430 }
	__asm { push 0xddd590 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00496ca2: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12c0978 }
	__asm { push 0x131e9ec }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_004985a0();
// FUNCTION: ROBLOXSTUDIO 0x00497cc0
extern "C" __declspec(naked) void asm_00497cc0()
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
	__asm { push 0x20 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00497d0b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00497d0b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00497d4c }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xeacd08 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1013fac }
	__asm { mov dword ptr [esi + 8], 0x1013fa4 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [esi], 0x1013fc4 }
	__asm { mov dword ptr [esi + 8], 0x1013fbc }
	__asm { jmp L_00497d4e }
	__asm { L_00497d4c: }
	__asm { xor esi, esi }
	__asm { L_00497d4e: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_004985a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00497d6b }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00497d6b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_00496f30();
extern "C" void fn_004984f0();
extern "C" void fn_004993a0();
// FUNCTION: ROBLOXSTUDIO 0x00497d80
extern "C" __declspec(naked) void asm_00497d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7bb60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x40] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004993a0 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_004984f0 }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { call fn_00496f30 }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov esi, dword ptr [g_00e10508] }
	__asm { jb L_00497e6b }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_00497e6b: }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { jb L_00497e8b }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_00497e8b: }
	__asm { cmp dword ptr [ebp + 0x54], 0x10 }
	__asm { mov dword ptr [ebp + 0x3c], 0xf }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { mov byte ptr [ebp + 0x28], 0 }
	__asm { jb L_00497eab }
	__asm { push dword ptr [ebp + 0x40] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_00497eab: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x004984f0
extern "C" __declspec(naked) void asm_004984f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7bc70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { push -1 }
	__asm { mov dword ptr [edi], eax }
	__asm { lea ecx, [edi + 4] }
	__asm { push 0 }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [edi + 0x34] }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x34] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131c43c[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00497a80();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00498970
extern "C" __declspec(naked) void asm_00498970()
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
	__asm { mov dword ptr [esi], 0xe372cc }
	__asm { test al, al }
	__asm { je L_004989e1 }
	__asm { cmp dword ptr [g_0131c43c], 0x29a }
	__asm { je L_004989e1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004989d0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004989e1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004989d0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004989e1: }
	__asm { mov ecx, esi }
	__asm { call fn_00497a80 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_00498a3b }
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
	__asm { L_00498a3b: }
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
extern "C" char g_0131c438[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00497ae0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00498c80
extern "C" __declspec(naked) void asm_00498c80()
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
	__asm { mov dword ptr [esi], 0xe372d4 }
	__asm { test al, al }
	__asm { je L_00498cf1 }
	__asm { cmp dword ptr [g_0131c438], 0x29a }
	__asm { je L_00498cf1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00498ce0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00498cf1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00498ce0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00498cf1: }
	__asm { mov ecx, esi }
	__asm { call fn_00497ae0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_00498d4b }
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
	__asm { L_00498d4b: }
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
extern "C" char g_0131eb34[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00497b40();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00498f90
extern "C" __declspec(naked) void asm_00498f90()
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
	__asm { mov dword ptr [esi], 0xe590a0 }
	__asm { test al, al }
	__asm { je L_00499001 }
	__asm { cmp dword ptr [g_0131eb34], 0x29a }
	__asm { je L_00499001 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00498ff0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00499001 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00498ff0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00499001: }
	__asm { mov ecx, esi }
	__asm { call fn_00497b40 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0049905b }
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
	__asm { L_0049905b: }
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
extern "C" char g_0131eb38[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00497ba0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004992a0
extern "C" __declspec(naked) void asm_004992a0()
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
	__asm { mov dword ptr [esi], 0xe58ca8 }
	__asm { test al, al }
	__asm { je L_00499311 }
	__asm { cmp dword ptr [g_0131eb38], 0x29a }
	__asm { je L_00499311 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00499300 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00499311 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00499300: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00499311: }
	__asm { mov ecx, esi }
	__asm { call fn_00497ba0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0049936b }
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
	__asm { L_0049936b: }
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
extern "C" void fn_00403540();
extern "C" void fn_004994e0();
// FUNCTION: ROBLOXSTUDIO 0x004993a0
extern "C" __declspec(naked) void asm_004993a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7bc18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x3c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004994e0 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov esi, dword ptr [g_00e10508] }
	__asm { jb L_0049945f }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_0049945f: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_0049947f }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_0049947f: }
	__asm { cmp dword ptr [ebp + 0x50], 0x10 }
	__asm { mov dword ptr [ebp + 0x38], 0xf }
	__asm { mov dword ptr [ebp + 0x34], 0 }
	__asm { mov byte ptr [ebp + 0x24], 0 }
	__asm { jb L_0049949f }
	__asm { push dword ptr [ebp + 0x3c] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_0049949f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_00499600();
// FUNCTION: ROBLOXSTUDIO 0x004994e0
extern "C" __declspec(naked) void asm_004994e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7bca8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00499600 }
	__asm { lea ecx, [edi + 0x34] }
	__asm { push -1 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x3c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov esi, dword ptr [g_00e10508] }
	__asm { jb L_0049959d }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_0049959d: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_004995bd }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_004995bd: }
	__asm { cmp dword ptr [ebp + 0x50], 0x10 }
	__asm { mov dword ptr [ebp + 0x38], 0xf }
	__asm { mov dword ptr [ebp + 0x34], 0 }
	__asm { mov byte ptr [ebp + 0x24], 0 }
	__asm { jb L_004995dd }
	__asm { push dword ptr [ebp + 0x3c] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_004995dd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00499600
extern "C" __declspec(naked) void asm_00499600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7bc50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov edi, dword ptr [g_00e10508] }
	__asm { jb L_00499689 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_00499689: }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { push -1 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_004996ce }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_004996ce: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_004996ee }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_004996ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" char g_0131c3f8[];
extern "C" char g_0131c3fc[];
extern "C" char g_0131c400[];
extern "C" char g_0131c404[];
extern "C" char g_0131eb60[];
extern "C" char g_0131eb64[];
extern "C" char g_0131eb68[];
extern "C" char g_0131eb6c[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00499740
extern "C" __declspec(naked) void asm_00499740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bbbe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c404] }
	__asm { test al, 1 }
	__asm { jne L_00499782 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c404], eax }
	__asm { push 0xe82238 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c400], eax }
	__asm { L_00499782: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bbde }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c3fc] }
	__asm { test al, 1 }
	__asm { jne L_004997d2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c3fc], eax }
	__asm { push 0xe82230 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c3f8], eax }
	__asm { L_004997d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bb9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131eb60] }
	__asm { test al, 1 }
	__asm { jne L_00499822 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb60], eax }
	__asm { push 0xe81e3c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131eb64], eax }
	__asm { L_00499822: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bb7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131eb68] }
	__asm { test al, 1 }
	__asm { jne L_00499872 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb68], eax }
	__asm { push 0xe8291c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131eb6c], eax }
	__asm { L_00499872: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00496f30();
extern "C" void fn_004984f0();
extern "C" void fn_00499dd0();
// FUNCTION: ROBLOXSTUDIO 0x00499880
extern "C" __declspec(naked) void asm_00499880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7bae0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x64], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_004984f0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x68] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push esi }
	__asm { sub esp, 0x58 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x64] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { call fn_004984f0 }
	__asm { call fn_00499dd0 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov bl, al }
	__asm { call fn_00496f30 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { mov ecx, 0x1013f98 }
	__asm { cmove ecx, eax }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_00496f30 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x58 }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040c260();
extern "C" void fn_00496f30();
extern "C" void fn_004984f0();
// FUNCTION: ROBLOXSTUDIO 0x00499dd0
extern "C" __declspec(naked) void asm_00499dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7bb1c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00499e73 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x64], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_004984f0 }
	__asm { push 0x58 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00499e60 }
	__asm { mov ecx, dword ptr [ebp - 0x68] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x64] }
	__asm { lea eax, [ebp - 0x60] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_004984f0 }
	__asm { mov eax, dword ptr [ebp + 0x60] }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [eax], esi }
	__asm { call fn_00496f30 }
	__asm { mov bl, 1 }
	__asm { jmp L_00499e75 }
	__asm { L_00499e60: }
	__asm { mov eax, dword ptr [ebp + 0x60] }
	__asm { xor esi, esi }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [eax], esi }
	__asm { call fn_00496f30 }
	__asm { mov bl, 1 }
	__asm { jmp L_00499e75 }
	__asm { L_00499e73: }
	__asm { xor bl, bl }
	__asm { L_00499e75: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_00496f30 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x60 }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" void fn_00414cb0();
// FUNCTION: ROBLOXSTUDIO 0x0049a820
extern "C" __declspec(naked) void asm_0049a820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7c0a4 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { je L_0049a880 }
	__asm { push 0xf128a8 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00414cb0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00414cb0 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0049a880: }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { je L_0049a8c3 }
	__asm { push 0xf12898 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00414cb0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00414cb0 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0049a8c3: }
	__asm { cmp byte ptr [ebp + 0x14], 0 }
	__asm { je L_0049a8f9 }
	__asm { push 0x100efe4 }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00414cb0 }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0049a8f9: }
	__asm { cmp byte ptr [ebp + 0x18], 0 }
	__asm { je L_0049a92f }
	__asm { push 0x100f004 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_00414cb0 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0049a92f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10190[];
extern "C" char g_00e10504[];
extern "C" char g_00e1100c[];
extern "C" char g_00e11030[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e12da8[];
extern "C" char g_00e12dac[];
// FUNCTION: ROBLOXSTUDIO 0x0049ac60
extern "C" __declspec(naked) void asm_0049ac60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7c1ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { jne L_0049ad5a }
	__asm { push esi }
	__asm { push 8 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0049acb5 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12da8] }
	__asm { mov dword ptr [esi], 0x1014270 }
	__asm { jmp L_0049acb7 }
	__asm { L_0049acb5: }
	__asm { xor esi, esi }
	__asm { L_0049acb7: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi + 8], esi }
	__asm { mov esi, dword ptr [g_00e110a8] }
	__asm { push 0 }
	__asm { push 0x10141a0 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0x1014208 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [edi + 8] }
	__asm { call dword ptr [g_00e110ac] }
	__asm { add esp, 0x14 }
	__asm { call dword ptr [g_00e10190] }
	__asm { mov byte ptr [ebp - 0x10], 0x20 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [ebp - 0xe] }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e11030] }
	__asm { push 0x1014050 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea ecx, [ebp - 0xe] }
	__asm { push ecx }
	__asm { push 0xa }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e1100c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12dac] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { pop esi }
	__asm { L_0049ad5a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10c00[];
extern "C" char g_00e10c88[];
extern "C" char g_00e10c8c[];
extern "C" char g_00e10f4c[];
extern "C" char g_00e10f8c[];
extern "C" void fn_0049b3a0();
extern "C" void fn_0049b400();
extern "C" void fn_0057e300();
extern "C" void fn_00581270();
// FUNCTION: ROBLOXSTUDIO 0x0049b0b0
extern "C" __declspec(naked) void asm_0049b0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7c150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10f4c] }
	__asm { mov ecx, dword ptr [g_00e10c00] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { test eax, eax }
	__asm { je L_0049b1b7 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push edi }
	__asm { push eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0049b400 }
	__asm { cmp eax, -1 }
	__asm { je L_0049b121 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc] }
	__asm { call fn_0049b3a0 }
	__asm { mov byte ptr [ebp - 0xd], 1 }
	__asm { jmp L_0049b125 }
	__asm { L_0049b121: }
	__asm { mov byte ptr [ebp - 0xd], 0 }
	__asm { L_0049b125: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10c88] }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [ebp - 0xd], 0 }
	__asm { jne L_0049b194 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0049b400 }
	__asm { cmp eax, -1 }
	__asm { je L_0049b170 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_0049b3a0 }
	__asm { L_0049b170: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10c88] }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0049b194: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_0049b1b6 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_0049b1b6 }
	__asm { call fn_0057e300 }
	__asm { mov ecx, eax }
	__asm { call fn_00581270 }
	__asm { L_0049b1b6: }
	__asm { pop edi }
	__asm { L_0049b1b7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10c8c[];
extern "C" char g_00e11024[];
extern "C" void fn_0049b460();
extern "C" void fn_0049b5f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0049b2d0
extern "C" __declspec(naked) void asm_0049b2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7c02c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { cmp dword ptr [eax], 1 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { je L_0049b372 }
	__asm { sub esp, 8 }
	__asm { call fn_0049b460 }
	__asm { push 4 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0049b34a }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0049b34a: }
	__asm { xor esi, esi }
	__asm { mov dword ptr [edi], esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 0 }
	__asm { dec dword ptr [eax + 0xc] }
	__asm { call fn_00cf67ec }
	__asm { L_0049b372: }
	__asm { call dword ptr [g_00e11024] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { push eax }
	__asm { call fn_0049b5f0 }
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
extern "C" void fn_0049b670();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0049b6d0
extern "C" __declspec(naked) void asm_0049b6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7c12c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { L_0049b6fe: }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { je L_0049b773 }
	__asm { push 4 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0049b73c }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], esi }
	__asm { add esp, 4 }
	__asm { add edi, 4 }
	__asm { add ebx, 4 }
	__asm { jmp L_0049b6fe }
	__asm { L_0049b73c: }
	__asm { xor esi, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], esi }
	__asm { add edi, 4 }
	__asm { add ebx, 4 }
	__asm { jmp L_0049b6fe }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp esi, edi }
	__asm { je L_0049b76a }
	__asm { L_0049b756: }
	__asm { mov ecx, dword ptr [esi - 4] }
	__asm { sub esi, 4 }
	__asm { test ecx, ecx }
	__asm { je L_0049b766 }
	__asm { push ecx }
	__asm { call fn_0049b670 }
	__asm { L_0049b766: }
	__asm { cmp esi, edi }
	__asm { jne L_0049b756 }
	__asm { L_0049b76a: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0049b773: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10f70[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_0049bf60();
extern "C" void fn_0049bff0();
// FUNCTION: ROBLOXSTUDIO 0x0049ba50
extern "C" __declspec(naked) void asm_0049ba50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7c228 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { jne L_0049baa9 }
	__asm { L_0049ba87: }
	__asm { push ebx }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call edx }
	__asm { test al, al }
	__asm { je L_0049ba96 }
	__asm { mov edi, dword ptr [edi + 8] }
	__asm { jmp L_0049ba9a }
	__asm { L_0049ba96: }
	__asm { mov esi, edi }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_0049ba9a: }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { je L_0049ba87 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { L_0049baa9: }
	__asm { cmp esi, dword ptr [eax] }
	__asm { je L_0049bab9 }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call edx }
	__asm { test al, al }
	__asm { je L_0049bb02 }
	__asm { L_0049bab9: }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0049bf60 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0049bff0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0049bb02: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x14] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f70[];
// FUNCTION: ROBLOXSTUDIO 0x0049be50
extern "C" __declspec(naked) void asm_0049be50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { mov edi, ebx }
	__asm { jne L_0049beb9 }
	__asm { L_0049be77: }
	__asm { lea ebx, [esi + 0x10] }
	__asm { push ecx }
	__asm { mov ecx, ebx }
	__asm { call edx }
	__asm { test al, al }
	__asm { je L_0049be8b }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { jmp L_0049bea7 }
	__asm { L_0049be8b: }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { je L_0049bea0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10f70] }
	__asm { test al, al }
	__asm { cmovne edi, esi }
	__asm { L_0049bea0: }
	__asm { mov ebx, esi }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { L_0049bea7: }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { je L_0049be77 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { L_0049beb9: }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { je L_0049bec6 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { jmp L_0049bec8 }
	__asm { L_0049bec6: }
	__asm { mov esi, dword ptr [edi] }
	__asm { L_0049bec8: }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { jne L_0049bef2 }
	__asm { mov edi, edi }
	__asm { L_0049bed0: }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { call edx }
	__asm { test al, al }
	__asm { je L_0049bee0 }
	__asm { mov edi, esi }
	__asm { mov esi, dword ptr [esi] }
	__asm { jmp L_0049bee3 }
	__asm { L_0049bee0: }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { L_0049bee3: }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { je L_0049bed0 }
	__asm { L_0049bef2: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" char g_00e11ed8[];
extern "C" char g_00e12e7c[];
// FUNCTION: ROBLOXSTUDIO 0x0049c4b0
extern "C" __declspec(naked) void asm_0049c4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7c249 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call dword ptr [g_00e12e7c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edi, dword ptr [g_00e110a8] }
	__asm { push 0 }
	__asm { push 0x1014438 }
	__asm { mov dword ptr [ebx], 0x101468c }
	__asm { mov dword ptr [ebx + 8], 0x101475c }
	__asm { mov dword ptr [ebx + 0x18], 0 }
	__asm { mov dword ptr [ebx + 0x1c], 0 }
	__asm { mov dword ptr [ebx + 0x20], 0 }
	__asm { mov dword ptr [ebx + 0x24], 0 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push 0x1014510 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { call dword ptr [g_00e110ac] }
	__asm { add esp, 0x14 }
	__asm { push 0 }
	__asm { push 0x10144b0 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push 0x1014570 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { call dword ptr [g_00e110ac] }
	__asm { add esp, 0x14 }
	__asm { mov ecx, ebx }
	__asm { push 1 }
	__asm { call dword ptr [g_00e11ed8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1023c[];
extern "C" char g_00e10508[];
extern "C" char g_00e10d0c[];
extern "C" char g_00e11070[];
extern "C" char g_00e110ec[];
extern "C" char g_00e11110[];
extern "C" char g_00e12e84[];
extern "C" char g_01318f84[];
extern "C" void fn_0049c920();
// FUNCTION: ROBLOXSTUDIO 0x0049c840
extern "C" __declspec(naked) void asm_0049c840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7c32a }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { cmp byte ptr [g_01318f84], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_0049c905 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12e84] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10d0c] }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11070] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0049c8ad }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0049c8ad: }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_01318f84] }
	__asm { push 0x10145cc }
	__asm { push eax }
	__asm { call dword ptr [g_00e1023c] }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { jb L_0049c8d6 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0049c8d6: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e110ec] }
	__asm { L_0049c905: }
	__asm { mov ecx, esi }
	__asm { call fn_0049c920 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10efc[];
extern "C" char g_00e10f00[];
extern "C" char g_00e10f08[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
// FUNCTION: ROBLOXSTUDIO 0x0049c920
extern "C" __declspec(naked) void asm_0049c920()
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
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0049c95f }
	__asm { call dword ptr [g_00e10f00] }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0049c958 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0049c958: }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { L_0049c95f: }
	__asm { push 0x18 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0049c98b }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10f08] }
	__asm { mov dword ptr [esi], 0x1008400 }
	__asm { jmp L_0049c98d }
	__asm { L_0049c98b: }
	__asm { xor esi, esi }
	__asm { L_0049c98d: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi + 0x20], esi }
	__asm { mov esi, dword ptr [g_00e110a8] }
	__asm { push 0 }
	__asm { push 0x1014638 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0x10145e0 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call dword ptr [g_00e110ac] }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { add esp, 0x14 }
	__asm { push 0x21 }
	__asm { call dword ptr [g_00e10efc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11104[];
extern "C" char g_0131eb80[];
extern "C" char g_0131eb84[];
// FUNCTION: ROBLOXSTUDIO 0x0049cfe0
extern "C" __declspec(naked) void asm_0049cfe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7c433 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131eb80] }
	__asm { test al, 1 }
	__asm { jne L_0049d07c }
	__asm { or eax, 1 }
	__asm { push esi }
	__asm { mov dword ptr [g_0131eb80], eax }
	__asm { push 0xc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0049d063 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11104] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { push 0xf12f68 }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [esi], 0x101508c }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov dword ptr [g_0131eb84], esi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0049d063: }
	__asm { xor esi, esi }
	__asm { mov dword ptr [g_0131eb84], esi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0049d07c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131eb84] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10cec[];
extern "C" char g_00e10f4c[];
extern "C" char g_00e10f6c[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e1290c[];
extern "C" char g_00e12eec[];
extern "C" char g_00e12ef0[];
extern "C" char g_00e12efc[];
extern "C" char g_01318f85[];
extern "C" char g_01318f86[];
extern "C" char g_01318f98[];
extern "C" void fn_00478c30();
extern "C" void fn_0049c920();
// FUNCTION: ROBLOXSTUDIO 0x0049d6d0
extern "C" __declspec(naked) void asm_0049d6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd91b02 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [g_01318f98], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_0049d78f }
	__asm { push edi }
	__asm { push 0x1014c90 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edx, eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00478c30 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10f6c] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { cmp byte ptr [g_01318f85], 0 }
	__asm { je L_0049d763 }
	__asm { push 0x1014c7c }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { call dword ptr [g_00e10cec] }
	__asm { L_0049d763: }
	__asm { cmp byte ptr [g_01318f86], 0 }
	__asm { je L_0049d77a }
	__asm { push 0x1014c68 }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { call dword ptr [g_00e10cec] }
	__asm { L_0049d77a: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { call fn_0049c920 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x20], 1 }
	__asm { call dword ptr [g_00e1290c] }
	__asm { pop edi }
	__asm { L_0049d78f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd788c9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x1014d90 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10f4c] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12ef0] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12eec] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12efc] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1290c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_0131b3d8[];
extern "C" void fn_004021e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0049edd0
extern "C" __declspec(naked) void asm_0049edd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7c4fc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12bff08 }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { mov eax, dword ptr [g_0131b3d8] }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_0049ee4f }
	__asm { test al, 1 }
	__asm { jne L_0049ee48 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b3d8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004021e0 }
	__asm { push 0xddc850 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0049ee48: }
	__asm { push 0x10151d8 }
	__asm { jmp L_0049ee80 }
	__asm { L_0049ee4f: }
	__asm { test al, 1 }
	__asm { jne L_0049ee7b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b3d8], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_004021e0 }
	__asm { push 0xddc850 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0049ee7b: }
	__asm { push 0x1015170 }
	__asm { L_0049ee80: }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push 0x131b3c8 }
	__asm { push 0x3e8 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11024[];
extern "C" char g_00e12de8[];
extern "C" char g_00e12dec[];
extern "C" void fn_0049f650();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0049f060
extern "C" __declspec(naked) void asm_0049f060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7c4d2 }
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
	__asm { je L_0049f0d9 }
	__asm { sub esp, 8 }
	__asm { call fn_0049f650 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_0049f0b5 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12de8] }
	__asm { L_0049f0b5: }
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
	__asm { L_0049f0d9: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 9 }
	__asm { call dword ptr [g_00e12de8] }
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
	__asm { call dword ptr [g_00e12dec] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10f78[];
extern "C" char g_00e10f7c[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" char g_00e12de8[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0049fb40
extern "C" __declspec(naked) void asm_0049fb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7c7e5 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 4 }
	__asm { push 8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e10f7c] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi - 8] }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0049fb99 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11108] }
	__asm { L_0049fb99: }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test ecx, ecx }
	__asm { je L_0049fbb0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call dword ptr [g_00e12de8] }
	__asm { L_0049fbb0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call dword ptr [g_00e11110] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e10f78] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10f78[];
extern "C" char g_00e10f7c[];
extern "C" char g_00e11108[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0049fca0
extern "C" __declspec(naked) void asm_0049fca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7c801 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 4 }
	__asm { push 8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e10f7c] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi - 8] }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0049fcf9 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11108] }
	__asm { L_0049fcf9: }
	__asm { add esi, 4 }
	__asm { je L_0049fd05 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [esi], al }
	__asm { L_0049fd05: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e10f78] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e12de8[];
extern "C" char g_00e12dec[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0049fd70
extern "C" __declspec(naked) void asm_0049fd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7c781 }
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
	__asm { L_0049fda1: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp esi, ebx }
	__asm { je L_0049fdea }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test esi, esi }
	__asm { je L_0049fdbc }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12de8] }
	__asm { L_0049fdbc: }
	__asm { add esi, 4 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { add edi, 4 }
	__asm { jmp L_0049fda1 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp edi, esi }
	__asm { je L_0049fde1 }
	__asm { L_0049fdd2: }
	__asm { sub edi, 4 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12dec] }
	__asm { cmp edi, esi }
	__asm { jne L_0049fdd2 }
	__asm { L_0049fde1: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0049fdea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10f74[];
extern "C" char g_00e11008[];
extern "C" void fn_004a2730();
// FUNCTION: ROBLOXSTUDIO 0x004a0240
extern "C" __declspec(naked) void asm_004a0240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebx + 0x40], 0xffffffff }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { xor esi, esi }
	__asm { mov edx, dword ptr [eax + 0xc] }
	__asm { sub edx, dword ptr [eax + 8] }
	__asm { push edi }
	__asm { test edx, edx }
	__asm { jle L_004a02db }
	__asm { mov edi, edi }
	__asm { L_004a0260: }
	__asm { test esi, esi }
	__asm { js L_004a0271 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { sub ecx, dword ptr [eax + 8] }
	__asm { cmp esi, ecx }
	__asm { jl L_004a028e }
	__asm { L_004a0271: }
	__asm { push 0x1c7 }
	__asm { push 0x1002fd0 }
	__asm { push 0x1002fbc }
	__asm { push 0x1002fa4 }
	__asm { call dword ptr [g_00e11008] }
	__asm { add esp, 0x10 }
	__asm { L_004a028e: }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_004a02a4 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { lea ecx, [ebx + 0x18] }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_004a2730 }
	__asm { L_004a02a4: }
	__asm { mov ecx, dword ptr [ebx + 0x18] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add eax, esi }
	__asm { mov ecx, dword ptr [ecx + eax*4 + 0x14] }
	__asm { add ecx, 0x30 }
	__asm { call dword ptr [g_00e10f74] }
	__asm { test al, al }
	__asm { jne L_004a02d5 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { inc esi }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { sub ecx, dword ptr [eax + 8] }
	__asm { cmp esi, ecx }
	__asm { jl L_004a0260 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004a02d5: }
	__asm { mov dword ptr [ebx + 0x40], esi }
	__asm { mov dword ptr [ebx + 0x44], esi }
	__asm { L_004a02db: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_004a2150();
// FUNCTION: ROBLOXSTUDIO 0x004a02f0
extern "C" __declspec(naked) void asm_004a02f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7cc9e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ecx + 0x40] }
	__asm { push ebx }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { jns L_004a0337 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ebx, 1 }
	__asm { jmp L_004a0359 }
	__asm { L_004a0337: }
	__asm { push eax }
	__asm { add ecx, 0x18 }
	__asm { call fn_004a2150 }
	__asm { add eax, 0x30 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov ebx, 2 }
	__asm { L_004a0359: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call dword ptr [g_00e11108] }
	__asm { or ebx, 4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test bl, 2 }
	__asm { je L_004a0386 }
	__asm { and ebx, 0xfffffffd }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_004a0386: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test bl, 1 }
	__asm { je L_004a03a1 }
	__asm { and ebx, 0xfffffffe }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_004a03a1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10b78[];
extern "C" char g_00e11008[];
extern "C" void fn_004a2730();
// FUNCTION: ROBLOXSTUDIO 0x004a0b80
extern "C" __declspec(naked) void asm_004a0b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea esi, [ecx + 0x18] }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { sub ecx, dword ptr [eax + 8] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { test ecx, ecx }
	__asm { jle L_004a0c18 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { L_004a0ba1: }
	__asm { fild dword ptr [ebx] }
	__asm { fstp qword ptr [esp + 0x10] }
	__asm { fild dword ptr [ebx + 4] }
	__asm { fstp qword ptr [esp + 0x18] }
	__asm { test edi, edi }
	__asm { js L_004a0bbe }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { sub ecx, dword ptr [eax + 8] }
	__asm { cmp edi, ecx }
	__asm { jl L_004a0bdb }
	__asm { L_004a0bbe: }
	__asm { push 0x1c7 }
	__asm { push 0x1002fd0 }
	__asm { push 0x1002fbc }
	__asm { push 0x1002fa4 }
	__asm { call dword ptr [g_00e11008] }
	__asm { add esp, 0x10 }
	__asm { L_004a0bdb: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_004a0bee }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_004a2730 }
	__asm { L_004a0bee: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add eax, edi }
	__asm { mov ecx, dword ptr [ecx + eax*4 + 0x14] }
	__asm { add ecx, 0x10 }
	__asm { call dword ptr [g_00e10b78] }
	__asm { test al, al }
	__asm { jne L_004a0c24 }
	__asm { mov eax, dword ptr [esi] }
	__asm { inc edi }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { sub ecx, dword ptr [eax + 8] }
	__asm { cmp edi, ecx }
	__asm { jl L_004a0ba1 }
	__asm { L_004a0c18: }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004a0c24: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_0043a6e0();
// FUNCTION: ROBLOXSTUDIO 0x004a1210
extern "C" __declspec(naked) void asm_004a1210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7cc9e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { push ebx }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { jns L_004a1257 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ebx, 1 }
	__asm { jmp L_004a1276 }
	__asm { L_004a1257: }
	__asm { push eax }
	__asm { add ecx, 0x18 }
	__asm { call fn_0043a6e0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov ebx, 2 }
	__asm { L_004a1276: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call dword ptr [g_00e11108] }
	__asm { or ebx, 4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test bl, 2 }
	__asm { je L_004a12a3 }
	__asm { and ebx, 0xfffffffd }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_004a12a3: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test bl, 1 }
	__asm { je L_004a12be }
	__asm { and ebx, 0xfffffffe }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_004a12be: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e10ef8[];
extern "C" char g_00e12a28[];
extern "C" char g_00e12c84[];
extern "C" void fn_0043a6e0();
// FUNCTION: ROBLOXSTUDIO 0x004a1710
extern "C" __declspec(naked) void asm_004a1710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { add edi, 0x10 }
	__asm { push edi }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e12c84] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10ef8] }
	__asm { test al, al }
	__asm { je L_004a1796 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, 4 }
	__asm { cdq }
	__asm { and edx, 0x1f }
	__asm { lea ecx, [edx + eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { sub eax, 4 }
	__asm { cdq }
	__asm { and edx, 0x1f }
	__asm { add eax, edx }
	__asm { sar ecx, 5 }
	__asm { sar eax, 5 }
	__asm { lea edi, [eax + ecx*4] }
	__asm { test edi, edi }
	__asm { js L_004a1796 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov edx, dword ptr [eax + 0xc] }
	__asm { sub edx, dword ptr [eax + 8] }
	__asm { cmp edi, edx }
	__asm { jge L_004a1796 }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x20], edi }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call fn_0043a6e0 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12c0998 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { L_004a1796: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12a28] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10ef8[];
extern "C" char g_00e11b74[];
extern "C" char g_00e11bac[];
extern "C" char g_00e11bb0[];
extern "C" char g_00e12288[];
extern "C" char g_00e12784[];
extern "C" void fn_004a1b90();
// FUNCTION: ROBLOXSTUDIO 0x004a1980
extern "C" __declspec(naked) void asm_004a1980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7ccd9 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x74 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [edi + 0x20], 1 }
	__asm { jne L_004a1a5b }
	__asm { lea ecx, [esp + 0x18] }
	__asm { call dword ptr [g_00e11bb0] }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x88], 0 }
	__asm { call dword ptr [g_00e11bac] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12288] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push esi }
	__asm { push 2 }
	__asm { lea ecx, [esp + 0x20] }
	__asm { push ecx }
	__asm { push 4 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x68] }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { cmp eax, dword ptr [esp + 0x10] }
	__asm { jg L_004a1a46 }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { cmp eax, dword ptr [esp + 0x14] }
	__asm { jg L_004a1a46 }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x10] }
	__asm { call dword ptr [g_00e10ef8] }
	__asm { test al, al }
	__asm { je L_004a1a46 }
	__asm { mov ecx, esi }
	__asm { call fn_004a1b90 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x84], 0xffffffff }
	__asm { call dword ptr [g_00e11b74] }
	__asm { mov ecx, dword ptr [esp + 0x7c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004a1a46: }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x84], 0xffffffff }
	__asm { call dword ptr [g_00e11b74] }
	__asm { L_004a1a5b: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12784] }
	__asm { mov ecx, dword ptr [esp + 0x7c] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11100[];
extern "C" char g_00e11110[];
extern "C" char g_00e11b94[];
extern "C" char g_00e11b98[];
extern "C" char g_00e11b9c[];
extern "C" char g_00e11ba0[];
extern "C" char g_00e11ba4[];
extern "C" char g_00e11ba8[];
extern "C" char g_00e121f4[];
extern "C" char g_00e12304[];
extern "C" char g_00e125b4[];
// FUNCTION: ROBLOXSTUDIO 0x004a1a80
extern "C" __declspec(naked) void asm_004a1a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7ccc2 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_004a1b6f }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11ba8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11ba0] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11ba4] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e125b4] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11b9c] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x3c], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e121f4] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x50], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x54], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { add eax, 0x28 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x58] }
	__asm { call dword ptr [g_00e12304] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11b98] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x44] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11100] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov dword ptr [esi + 0x34], 0x14 }
	__asm { mov dword ptr [esi + 0x2c], 2 }
	__asm { mov dword ptr [esi + 0x30], 2 }
	__asm { or dword ptr [esi + 8], 4 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11b94] }
	__asm { mov dword ptr [esi + 0x4c], eax }
	__asm { L_004a1b6f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10cf4[];
extern "C" char g_00e10cf8[];
extern "C" char g_00e10cfc[];
extern "C" char g_00e10e58[];
extern "C" char g_00e11be4[];
extern "C" char g_00e12284[];
extern "C" char g_00e12a20[];
extern "C" void fn_004a1c80();
// FUNCTION: ROBLOXSTUDIO 0x004a1b90
extern "C" __declspec(naked) void asm_004a1b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7ce79 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { call dword ptr [eax + 0xd4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_004a1c6d }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebx + 0x18], 1 }
	__asm { call dword ptr [g_00e10cfc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { sub eax, dword ptr [ecx + 0x10] }
	__asm { mov edx, dword ptr [ecx + 0x1c] }
	__asm { sub edx, dword ptr [ecx + 0x14] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { inc edx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { call fn_004a1c80 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12284] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12a20] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e11be4] }
	__asm { mov esi, dword ptr [g_00e10e58] }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push 0x12c09a8 }
	__asm { push ebx }
	__asm { call esi }
	__asm { add esp, 0xc }
	__asm { mov eax, esp }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [eax], 0 }
	__asm { call dword ptr [g_00e10cf8] }
	__asm { push 0 }
	__asm { push 2 }
	__asm { push 0x12c09a8 }
	__asm { push ebx }
	__asm { call esi }
	__asm { add esp, 0x10 }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebx + 0x18], 0 }
	__asm { call dword ptr [g_00e11be4] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10cf4] }
	__asm { L_004a1c6d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11e04[];
extern "C" char g_00e121f8[];
extern "C" char g_00e12c84[];
extern "C" char g_00e12cb0[];
// FUNCTION: ROBLOXSTUDIO 0x004a1c80
extern "C" __declspec(naked) void asm_004a1c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { call dword ptr [g_00e12cb0] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11e04] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12c84] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ebx, dword ptr [g_00e121f8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call ebx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { sub eax, dword ptr [ebp - 0x2c] }
	__asm { mov edx, dword ptr [edx + 4] }
	__asm { add ecx, edx }
	__asm { inc eax }
	__asm { cmp ecx, eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { jg L_004a1cfc }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { jmp L_004a1d01 }
	__asm { L_004a1cfc: }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { sub eax, edx }
	__asm { L_004a1d01: }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call ebx }
	__asm { mov esi, dword ptr [ebp - 0x30] }
	__asm { mov ecx, eax }
	__asm { lea ebx, [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { sub ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, ecx }
	__asm { cmovge edx, ebx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp esi, dword ptr [edx] }
	__asm { lea ecx, [ebp - 4] }
	__asm { cmovl ecx, edx }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [edi], ecx }
	__asm { inc dword ptr [edi + 4] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_01225dd8[];
extern "C" void fn_0049ff70();
extern "C" void fn_008ea020();
// FUNCTION: ROBLOXSTUDIO 0x004a1df0
extern "C" __declspec(naked) void asm_004a1df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7cc45 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x14], 0 }
	__asm { jne L_004a1e70 }
	__asm { push 0x48 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004a1e37 }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_0049ff70 }
	__asm { jmp L_004a1e39 }
	__asm { L_004a1e37: }
	__asm { xor eax, eax }
	__asm { L_004a1e39: }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push 0x10154d0 }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0x10154d0 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call dword ptr [g_00e110ac] }
	__asm { add esp, 0x14 }
	__asm { L_004a1e70: }
	__asm { mov eax, dword ptr [g_01225dd8] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_008ea020 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_004a1e88 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_004a1e88: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0xc8] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e11024[];
extern "C" char g_00e11b84[];
extern "C" void fn_004a2530();
extern "C" void fn_004a2660();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004a2230
extern "C" __declspec(naked) void asm_004a2230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7cbec }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { cmp dword ptr [eax], 1 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { je L_004a22d2 }
	__asm { sub esp, 8 }
	__asm { call fn_004a2530 }
	__asm { push 0xc }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004a22aa }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11b84] }
	__asm { mov dword ptr [esi], 0x101566c }
	__asm { mov dword ptr [edi], esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004a22aa: }
	__asm { xor esi, esi }
	__asm { mov dword ptr [edi], esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 0 }
	__asm { dec dword ptr [eax + 0xc] }
	__asm { call fn_00cf67ec }
	__asm { L_004a22d2: }
	__asm { call dword ptr [g_00e11024] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { push eax }
	__asm { call fn_004a2660 }
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
extern "C" char g_00e11b84[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004a2900
extern "C" __declspec(naked) void asm_004a2900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7cd3c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { L_004a292e: }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { je L_004a29a3 }
	__asm { push 0xc }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004a296c }
	__asm { push dword ptr [ebx] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11b84] }
	__asm { mov dword ptr [esi], 0x101566c }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], esi }
	__asm { add edi, 4 }
	__asm { add ebx, 4 }
	__asm { jmp L_004a292e }
	__asm { L_004a296c: }
	__asm { xor esi, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], esi }
	__asm { add edi, 4 }
	__asm { add ebx, 4 }
	__asm { jmp L_004a292e }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp esi, edi }
	__asm { je L_004a299a }
	__asm { L_004a2986: }
	__asm { mov ecx, dword ptr [esi - 4] }
	__asm { sub esi, 4 }
	__asm { test ecx, ecx }
	__asm { je L_004a2996 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_004a2996: }
	__asm { cmp esi, edi }
	__asm { jne L_004a2986 }
	__asm { L_004a299a: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_004a29a3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_01038148[];
extern "C" char g_012ffab0[];
extern "C" void fn_00403110();
extern "C" void fn_004a47b0();
extern "C" void fn_007af830();
// FUNCTION: ROBLOXSTUDIO 0x004a2ad0
extern "C" __declspec(naked) void asm_004a2ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b9d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push 0x1015c18 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af830 }
	__asm { mov dword ptr [esi], 0xe3bbe4 }
	__asm { mov dword ptr [esi + 4], 0xe3bc5c }
	__asm { mov dword ptr [esi + 0x18], 0xe3bc64 }
	__asm { mov dword ptr [esi + 0x1c], 0xe3bc70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a47b0 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012ffab0] }
	__asm { mov byte ptr [esi + 0x64], 1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [esi], 0xe3bc84 }
	__asm { mov dword ptr [esi + 4], 0xe3bcfc }
	__asm { mov dword ptr [esi + 0x18], 0xe3bd04 }
	__asm { mov dword ptr [esi + 0x1c], 0xe3bd10 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x7c], 0xf }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { push 0xf12f28 }
	__asm { mov byte ptr [esi + 0x68], 0 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [esi + 0x80], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_004a2b8c }
	__asm { sub eax, 4 }
	__asm { L_004a2b8c: }
	__asm { mov eax, dword ptr [eax] }
	__asm { fld qword ptr [g_01038148] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x84], eax }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [esi + 0x8c], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { mov dword ptr [esi + 0xb0], 0xf }
	__asm { mov dword ptr [esi + 0xac], 0 }
	__asm { mov byte ptr [esi + 0x9c], 0 }
	__asm { fstp qword ptr [esi + 0xb8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_004226b0();
extern "C" void fn_004a43f0();
extern "C" void fn_006b9e50();
extern "C" void fn_007b00e0();
// FUNCTION: ROBLOXSTUDIO 0x004a2c30
extern "C" __declspec(naked) void asm_004a2c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d0d9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [edi + 0xb0], 0x10 }
	__asm { mov ebx, dword ptr [g_00e10508] }
	__asm { jb L_004a2c73 }
	__asm { push dword ptr [edi + 0x9c] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_004a2c73: }
	__asm { push esi }
	__asm { lea esi, [edi + 0x98] }
	__asm { mov dword ptr [edi + 0xb0], 0xf }
	__asm { mov dword ptr [edi + 0xac], 0 }
	__asm { mov byte ptr [edi + 0x9c], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_006b9e50 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_004a2cb9 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_004a2cb9: }
	__asm { mov ecx, dword ptr [edi + 0x94] }
	__asm { lea esi, [edi + 0x80] }
	__asm { test ecx, ecx }
	__asm { je L_004a2cf5 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_004a2cdf }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004a43f0 }
	__asm { L_004a2cdf: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_004a2cf5: }
	__asm { cmp dword ptr [edi + 0x7c], 0x10 }
	__asm { pop esi }
	__asm { jb L_004a2d04 }
	__asm { push dword ptr [edi + 0x68] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_004a2d04: }
	__asm { mov dword ptr [edi + 0x7c], 0xf }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11b70[];
extern "C" char g_00e12a60[];
extern "C" char g_00e12bd0[];
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004a3310
extern "C" __declspec(naked) void asm_004a3310()
{
	__asm { L_004a3310: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd788c9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x20] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x74] }
	__asm { add esi, 0x70 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_004a3342 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_004a3342: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12a60] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, edi }
	__asm { xor esi, esi }
	__asm { call dword ptr [g_00e12bd0] }
	__asm { test eax, eax }
	__asm { jle L_004a33b8 }
	__asm { nop }
	__asm { L_004a3380: }
	__asm { push 0 }
	__asm { push 0x12cba28 }
	__asm { push 0x12c39ac }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11b70] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_004a33ab }
	__asm { mov ecx, eax }
	__asm { call L_004a3310 }
	__asm { L_004a33ab: }
	__asm { mov ecx, edi }
	__asm { inc esi }
	__asm { call dword ptr [g_00e12bd0] }
	__asm { cmp esi, eax }
	__asm { jl L_004a3380 }
	__asm { L_004a33b8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bb80();
// FUNCTION: ROBLOXSTUDIO 0x004a4010
extern "C" __declspec(naked) void asm_004a4010()
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
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_004a405b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_004a405b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_004a40a2 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3cb14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1015d04 }
	__asm { mov dword ptr [esi + 8], 0x1015cec }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0x1015d34 }
	__asm { mov dword ptr [esi + 8], 0x1015d1c }
	__asm { jmp L_004a40a4 }
	__asm { L_004a40a2: }
	__asm { xor esi, esi }
	__asm { L_004a40a4: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_004a40c1 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_004a40c1: }
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
// FUNCTION: ROBLOXSTUDIO 0x004a41d0
extern "C" __declspec(naked) void asm_004a41d0()
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
	__asm { je L_004a421b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_004a421b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_004a426e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3cb14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1015cf4 }
	__asm { mov dword ptr [esi + 8], 0x1015ce4 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x1015d24 }
	__asm { mov dword ptr [esi + 8], 0x1015d14 }
	__asm { jmp L_004a4270 }
	__asm { L_004a426e: }
	__asm { xor esi, esi }
	__asm { L_004a4270: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_004a428d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_004a428d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004a6590();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x004a5260
extern "C" __declspec(naked) void asm_004a5260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_004a52ea }
	__asm { mov edx, ecx }
	__asm { push esi }
	__asm { mov edx, dword ptr [edx + 0x20] }
	__asm { mov esi, edx }
	__asm { mov ecx, dword ptr [edx + 0x38] }
	__asm { mov eax, edx }
	__asm { test ecx, ecx }
	__asm { js L_004a52a2 }
	__asm { L_004a5287: }
	__asm { mov eax, dword ptr [esi + ecx*4 + 4] }
	__asm { cmp eax, edx }
	__asm { je L_004a529f }
	__asm { nop }
	__asm { L_004a5290: }
	__asm { cmp dword ptr [eax - 0xc], edi }
	__asm { jae L_004a529f }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [eax + ecx*4 + 4] }
	__asm { cmp eax, edx }
	__asm { jne L_004a5290 }
	__asm { L_004a529f: }
	__asm { dec ecx }
	__asm { jns L_004a5287 }
	__asm { L_004a52a2: }
	__asm { pop esi }
	__asm { cmp eax, edx }
	__asm { je L_004a52ac }
	__asm { cmp edi, dword ptr [eax - 0xc] }
	__asm { jae L_004a52ae }
	__asm { L_004a52ac: }
	__asm { mov eax, edx }
	__asm { L_004a52ae: }
	__asm { cmp eax, edx }
	__asm { jne L_004a52ea }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_004a52d9 }
	__asm { push 0x92 }
	__asm { push 0x1015f20 }
	__asm { push 0x1015ff4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004a52ea }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_004a52d9: }
	__asm { movzx eax, bl }
	__asm { push 0x10160a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004a52ea: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { lea eax, [ebp + 8] }
	__asm { lea ecx, [ecx + 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { call fn_004a6590 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11110[];
extern "C" void fn_0044e770();
extern "C" void fn_0044ff90();
extern "C" void fn_004500c0();
extern "C" void fn_00450860();
extern "C" void fn_004a5d70();
extern "C" void fn_004a5f10();
extern "C" void fn_004a64a0();
// FUNCTION: ROBLOXSTUDIO 0x004a5a90
extern "C" __declspec(naked) void asm_004a5a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd95e49 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [esp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { call fn_004a64a0 }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { cmp edi, dword ptr [esi + 0x10] }
	__asm { jne L_004a5af9 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_004a5d70 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_004a5af9: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { test eax, eax }
	__asm { je L_004a5b05 }
	__asm { add eax, 8 }
	__asm { jmp L_004a5b07 }
	__asm { L_004a5b05: }
	__asm { xor eax, eax }
	__asm { L_004a5b07: }
	__asm { cmp edi, eax }
	__asm { jne L_004a5b1a }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { call fn_00450860 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { L_004a5b1a: }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { test ecx, ecx }
	__asm { je L_004a5b44 }
	__asm { push edi }
	__asm { call fn_0044ff90 }
	__asm { test al, al }
	__asm { jne L_004a5b44 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push edi }
	__asm { call fn_0044e770 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { call fn_004500c0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004a5d70 }
	__asm { L_004a5b44: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, esi }
	__asm { call fn_004a5f10 }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f70[];
extern "C" char g_00e10f78[];
extern "C" char g_00e11110[];
extern "C" void fn_004781c0();
// FUNCTION: ROBLOXSTUDIO 0x004a64a0
extern "C" __declspec(naked) void asm_004a64a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x3c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { je L_004a64b8 }
	__asm { call fn_004781c0 }
	__asm { L_004a64b8: }
	__asm { mov ebx, dword ptr [edi] }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { mov ecx, dword ptr [ebx + 0x38] }
	__asm { mov eax, dword ptr [ebx + 0x3c] }
	__asm { mov esi, ebx }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test ecx, ecx }
	__asm { js L_004a651f }
	__asm { mov eax, 4 }
	__asm { lea esi, [ebp - 0x3c] }
	__asm { sub eax, esi }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { nop }
	__asm { L_004a64e0: }
	__asm { mov esi, dword ptr [ebx + ecx*4 + 4] }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_004a6515 }
	__asm { L_004a64e8: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi - 8] }
	__asm { call edx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { test al, al }
	__asm { je L_004a650f }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { add eax, esi }
	__asm { mov ebx, esi }
	__asm { mov esi, dword ptr [ebp + eax - 0x3c] }
	__asm { cmp esi, dword ptr [edi] }
	__asm { jne L_004a64e8 }
	__asm { L_004a650f: }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { L_004a6515: }
	__asm { mov dword ptr [ebp + ecx*4 - 0x3c], ebx }
	__asm { dec ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { jns L_004a64e0 }
	__asm { L_004a651f: }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_004a6570 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [esi - 8] }
	__asm { push eax }
	__asm { call edx }
	__asm { test al, al }
	__asm { jne L_004a6570 }
	__asm { L_004a6530: }
	__asm { mov ebx, esi }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_004a654e }
	__asm { lea eax, [esi - 8] }
	__asm { lea ecx, [ebx - 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10f70] }
	__asm { mov byte ptr [ebp + 0xb], 1 }
	__asm { test al, al }
	__asm { je L_004a6552 }
	__asm { L_004a654e: }
	__asm { mov byte ptr [ebp + 0xb], 0 }
	__asm { L_004a6552: }
	__asm { lea ecx, [ebx - 8] }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push ebx }
	__asm { push 8 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10f78] }
	__asm { cmp byte ptr [ebp + 0xb], 0 }
	__asm { jne L_004a6530 }
	__asm { L_004a6570: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { sub eax, dword ptr [ecx + 0x3c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
