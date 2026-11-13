// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0071b170
extern "C" __declspec(naked) void asm_0071b170()
{
	__asm { push -1 }
	__asm { push 0xd19bb1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x18] }
	__asm { mov dword ptr [esp + 4], edi }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { test edi, edi }
	__asm { je L_0071b1e8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov al, byte ptr [esi + 0x18] }
	__asm { mov byte ptr [edi + 0x18], al }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { pop esi }
	__asm { L_0071b1e8: }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0071b340
extern "C" __declspec(naked) void asm_0071b340()
{
	__asm { push -1 }
	__asm { push 0xd19bd1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push 0x24 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [esp + 0x28], esi }
	__asm { mov dword ptr [esp + 4], esi }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { test esi, esi }
	__asm { je L_0071b3c3 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [esp + 0x20] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { mov eax, esi }
	__asm { mov cl, byte ptr [ecx] }
	__asm { mov byte ptr [esi + 0x18], cl }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { mov dword ptr [esi + 0x1c], ecx }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [esi + 0x20], ecx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_0071b3c3: }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_0071afb0();
extern "C" void fn_0071b170();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0071b450
extern "C" __declspec(naked) void asm_0071b450()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { cmp dword ptr [esi + 8], eax }
	__asm { ja L_0071b465 }
	__asm { push 1 }
	__asm { call fn_0071afb0 }
	__asm { L_0071b465: }
	__asm { mov edi, dword ptr [esi + 8] }
	__asm { lea eax, [edi - 1] }
	__asm { and dword ptr [esi + 0xc], eax }
	__asm { cmovne edi, dword ptr [esi + 0xc] }
	__asm { dec edi }
	__asm { and eax, edi }
	__asm { lea ebx, [eax*4] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp dword ptr [ebx + eax], 0 }
	__asm { jne L_0071b4a1 }
	__asm { push 0x38 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_0071b49b }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0071b49b: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebx + eax], ecx }
	__asm { L_0071b4a1: }
	__asm { push dword ptr [esp + 0x10] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ecx, [esp + 0x14] }
	__asm { push dword ptr [eax + ebx] }
	__asm { call fn_0071b170 }
	__asm { inc dword ptr [esi + 0x10] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 4 }
}

extern "C" void fn_0072a490();
// FUNCTION: ROBLOXSTUDIO 0x0071dc10
extern "C" __declspec(naked) void asm_0071dc10()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { cmp ecx, -1 }
	__asm { je L_0071dc49 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0x20] }
	__asm { call fn_0072a490 }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { test eax, eax }
	__asm { jne L_0071dc3d }
	__asm { L_0071dc38: }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0071dc3d: }
	__asm { mov ax, word ptr [esi + 0x24] }
	__asm { mov word ptr [ecx + 0x14], ax }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0071dc49: }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0071dc7f }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { test edx, edx }
	__asm { je L_0071dc7f }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { movzx eax, word ptr [ecx + 0x14] }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_0072a490 }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { test eax, eax }
	__asm { je L_0071dc38 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov ax, word ptr [eax + 0x14] }
	__asm { mov word ptr [ecx + 0x14], ax }
	__asm { L_0071dc7f: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0071dc90
extern "C" __declspec(naked) void asm_0071dc90()
{
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { push esi }
	__asm { push edi }
	__asm { xor edx, edx }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [ecx + 0x24], -1 }
	__asm { jne L_0071dca8 }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { cmp eax, dword ptr [ecx + 0x14] }
	__asm { je L_0071dcad }
	__asm { L_0071dca8: }
	__asm { mov edi, 1 }
	__asm { L_0071dcad: }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { test esi, esi }
	__asm { jle L_0071dcdf }
	__asm { mov ecx, dword ptr [ecx + 0x30] }
	__asm { L_0071dcb7: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { jne L_0071dcc3 }
	__asm { cmp dword ptr [ecx + 0x10], -1 }
	__asm { je L_0071dcc8 }
	__asm { L_0071dcc3: }
	__asm { mov edi, 1 }
	__asm { L_0071dcc8: }
	__asm { cmp eax, 1 }
	__asm { je L_0071dcce }
	__asm { inc edx }
	__asm { L_0071dcce: }
	__asm { add ecx, 0x14 }
	__asm { dec esi }
	__asm { jne L_0071dcb7 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], edx }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0071dcdf: }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10690[];
// FUNCTION: ROBLOXSTUDIO 0x0071e690
extern "C" __declspec(naked) void asm_0071e690()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { sub esp, 0x30 }
	__asm { test eax, eax }
	__asm { jne L_0071e6b0 }
	__asm { mov eax, dword ptr [esp + 0x3c] }
	__asm { test eax, eax }
	__asm { je L_0071e6a9 }
	__asm { mov dword ptr [eax], 0x12 }
	__asm { L_0071e6a9: }
	__asm { or eax, 0xffffffff }
	__asm { add esp, 0x30 }
	__asm { ret }
	__asm { L_0071e6b0: }
	__asm { lea ecx, [esp] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call dword ptr [g_00e10690] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_0071e6e4 }
	__asm { test byte ptr [esp + 0x38], 1 }
	__asm { je L_0071e6cf }
	__asm { xor eax, eax }
	__asm { add esp, 0x30 }
	__asm { ret }
	__asm { L_0071e6cf: }
	__asm { mov eax, dword ptr [esp + 0x3c] }
	__asm { test eax, eax }
	__asm { je L_0071e6dd }
	__asm { mov dword ptr [eax], 0xb }
	__asm { L_0071e6dd: }
	__asm { or eax, 0xffffffff }
	__asm { add esp, 0x30 }
	__asm { ret }
	__asm { L_0071e6e4: }
	__asm { test byte ptr [esp + 0x38], 2 }
	__asm { je L_0071e700 }
	__asm { mov eax, dword ptr [esp + 0x3c] }
	__asm { test eax, eax }
	__asm { je L_0071e6f9 }
	__asm { mov dword ptr [eax], 0xa }
	__asm { L_0071e6f9: }
	__asm { or eax, 0xffffffff }
	__asm { add esp, 0x30 }
	__asm { ret }
	__asm { L_0071e700: }
	__asm { mov eax, 1 }
	__asm { add esp, 0x30 }
	__asm { ret }
}

extern "C" void fn_0071f3c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0071fcb0
extern "C" __declspec(naked) void asm_0071fcb0()
{
	__asm { push -1 }
	__asm { push 0xd19e72 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { mov dword ptr [esp + 0x30], 0xf }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { mov dword ptr [esp + 0x3c], 0 }
	__asm { mov dword ptr [esp + 0x18], 0xf }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { mov byte ptr [esp + 4], 0 }
	__asm { lea eax, [esp + 4] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x4c] }
	__asm { mov byte ptr [esp + 0x48], 1 }
	__asm { call fn_0071f3c0 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [esp + 0x18], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_0071fd2b }
	__asm { push dword ptr [esp + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0071fd2b: }
	__asm { cmp dword ptr [esp + 0x30], 0x10 }
	__asm { mov dword ptr [esp + 0x18], 0xf }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { mov byte ptr [esp + 4], 0 }
	__asm { jb L_0071fd53 }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0071fd53: }
	__asm { mov ecx, dword ptr [esp + 0x34] }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x3c }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_004278c0();
extern "C" void fn_0060e370();
// FUNCTION: ROBLOXSTUDIO 0x00720340
extern "C" __declspec(naked) void asm_00720340()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x14] }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push 0x100d138 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_0060e370 }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { test eax, eax }
	__asm { js L_0072037d }
	__asm { mov edx, dword ptr [edi + 0x10] }
	__asm { sub edx, eax }
	__asm { push edx }
	__asm { inc eax }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_004278c0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_0072037d: }
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
	__asm { pop ecx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007252a0
extern "C" __declspec(naked) void asm_007252a0()
{
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 8] }
	__asm { cmp dword ptr [edi + 0x18], 0 }
	__asm { jne L_007252d3 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 0x2c }
	__asm { push 0 }
	__asm { push edi }
	__asm { call eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { push 0x1000 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [edi + 0x18], esi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { push 0 }
	__asm { push edi }
	__asm { call ecx }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { pop esi }
	__asm { L_007252d3: }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [ecx + 0x20], eax }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [ecx + 8], 0x725100 }
	__asm { mov dword ptr [ecx + 0xc], 0x725110 }
	__asm { mov dword ptr [ecx + 0x10], 0x7251c0 }
	__asm { mov dword ptr [ecx + 0x14], 0x72ca70 }
	__asm { mov dword ptr [ecx + 0x18], 0x725290 }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { pop edi }
	__asm { ret }
}

extern "C" void fn_0072a2c0();
// FUNCTION: ROBLOXSTUDIO 0x00728fb0
extern "C" __declspec(naked) void asm_00728fb0()
{
	__asm { mov edx, dword ptr [esp + 8] }
	__asm { push esi }
	__asm { test edx, edx }
	__asm { js L_0072900a }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x28] }
	__asm { jge L_0072900a }
	__asm { test byte ptr [esp + 0x10], 8 }
	__asm { jne L_00728ff3 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { lea ecx, [edx + edx*4] }
	__asm { cmp dword ptr [eax + ecx*4], 1 }
	__asm { lea eax, [eax + ecx*4] }
	__asm { jne L_00728fec }
	__asm { push 0 }
	__asm { push 0x17 }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00728fec: }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { jne L_0072901c }
	__asm { L_00728ff3: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_0072900a }
	__asm { cmp edx, dword ptr [eax + 4] }
	__asm { jge L_0072900a }
	__asm { mov eax, dword ptr [eax] }
	__asm { shl edx, 6 }
	__asm { pop esi }
	__asm { mov eax, dword ptr [edx + eax + 0x1c] }
	__asm { ret }
	__asm { L_0072900a: }
	__asm { push 0 }
	__asm { push 0x12 }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { L_0072901c: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" char g_00e106cc[];
extern "C" char g_012e0138[];
extern "C" char g_012e013c[];
extern "C" char g_012e0140[];
extern "C" char g_012e0144[];
extern "C" char g_012e0148[];
extern "C" char g_012e014c[];
extern "C" char g_012e0150[];
extern "C" char g_012e0154[];
extern "C" char g_012e0158[];
extern "C" char g_012e015c[];
extern "C" char g_012e0160[];
// FUNCTION: ROBLOXSTUDIO 0x00729b70
extern "C" __declspec(naked) void asm_00729b70()
{
	__asm { mov ecx, dword ptr [g_012e0138] }
	__asm { mov edx, dword ptr [g_012e013c] }
	__asm { mov eax, ecx }
	__asm { or eax, edx }
	__asm { jne L_00729be4 }
	__asm { push 0x12e0140 }
	__asm { mov dword ptr [g_012e0140], eax }
	__asm { mov dword ptr [g_012e0144], 0x20 }
	__asm { mov dword ptr [g_012e0148], 0x17 }
	__asm { mov dword ptr [g_012e014c], 0x18 }
	__asm { mov dword ptr [g_012e0150], 0xb }
	__asm { mov dword ptr [g_012e0154], 0x60 }
	__asm { mov dword ptr [g_012e0158], eax }
	__asm { mov dword ptr [g_012e015c], eax }
	__asm { mov dword ptr [g_012e0160], eax }
	__asm { call dword ptr [g_00e106cc] }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e0138], ecx }
	__asm { mov dword ptr [g_012e013c], edx }
	__asm { L_00729be4: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 8] }
	__asm { xor eax, eax }
	__asm { push dword ptr [edi + 0x24] }
	__asm { mov dword ptr [edi], 0x140000 }
	__asm { mov dword ptr [edi + 4], 0x80002 }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov dword ptr [edi + 0xc], edx }
	__asm { mov dword ptr [edi + 0x32], eax }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov dword ptr [edi + 0x3c], eax }
	__asm { call dword ptr [g_00e104f4] }
	__asm { push dword ptr [edi + 0x2c] }
	__asm { xor eax, eax }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { mov word ptr [edi + 0x28], ax }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 8 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov word ptr [edi + 0x30], ax }
	__asm { pop edi }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_0072a2a0();
extern "C" void fn_0072a2c0();
// FUNCTION: ROBLOXSTUDIO 0x0072aa50
extern "C" __declspec(naked) void asm_0072aa50()
{
	__asm { push esi }
	__asm { push 0x40 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { jne L_0072aa75 }
	__asm { push eax }
	__asm { push 0xe }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0072aa75: }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_0072a2a0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0xffffffff }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0072b450();
extern "C" void fn_0073a460();
// FUNCTION: ROBLOXSTUDIO 0x0072b280
extern "C" __declspec(naked) void asm_0072b280()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, 0xc8 }
	__asm { je L_0072b2b1 }
	__asm { cmp eax, 0xc9 }
	__asm { je L_0072b2b1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x15 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0072b2b1: }
	__asm { push esi }
	__asm { call fn_0072b450 }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { dec ecx }
	__asm { je L_0072b2eb }
	__asm { dec ecx }
	__asm { jne L_0072b2f0 }
	__asm { cmp byte ptr [esp + 0xc], cl }
	__asm { je L_0072b2db }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x35 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0072b2db: }
	__asm { push esi }
	__asm { call fn_0073a460 }
	__asm { add esp, 4 }
	__asm { mov eax, 2 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0072b2eb: }
	__asm { mov eax, 1 }
	__asm { L_0072b2f0: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0072ae00();
extern "C" void fn_0073ca80();
// FUNCTION: ROBLOXSTUDIO 0x0072c300
extern "C" __declspec(naked) void asm_0072c300()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x64 }
	__asm { je L_0072c326 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x15 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0072c326: }
	__asm { cmp byte ptr [esp + 0xc], 0 }
	__asm { je L_0072c338 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_0072ae00 }
	__asm { add esp, 8 }
	__asm { L_0072c338: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { push esi }
	__asm { call fn_0073ca80 }
	__asm { mov eax, dword ptr [esi + 0x168] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { xor eax, eax }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [esi + 0xd0], al }
	__asm { mov dword ptr [esi + 0xf4], 0 }
	__asm { setne al }
	__asm { add eax, 0x65 }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00739e30();
// FUNCTION: ROBLOXSTUDIO 0x00731f70
extern "C" __declspec(naked) void asm_00731f70()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { test eax, eax }
	__asm { je L_00731f7f }
	__asm { or dword ptr [eax + 0x6c], 0x400000 }
	__asm { L_00731f7f: }
	__asm { ret }
	__asm { mov edx, dword ptr [esp + 4] }
	__asm { test edx, edx }
	__asm { je L_00731fe9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x10] }
	__asm { test ebx, ebx }
	__asm { jne L_00731fa1 }
	__asm { push 0xe4ab28 }
	__asm { push edx }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_00731fa1: }
	__asm { or dword ptr [edx + 0x70], 0x80 }
	__asm { fld qword ptr [esp + 0x18] }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx + 0x138], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 0x13c], eax }
	__asm { mov ax, word ptr [ecx + 8] }
	__asm { fstp dword ptr [edx + 0x134] }
	__asm { mov word ptr [edx + 0x140], ax }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { and eax, 0x100 }
	__asm { or dword ptr [edx + 0x70], eax }
	__asm { mov byte ptr [edx + 0x130], bl }
	__asm { pop ebx }
	__asm { L_00731fe9: }
	__asm { ret }
}

extern "C" char g_010380b0[];
extern "C" void fn_00739e30();
// FUNCTION: ROBLOXSTUDIO 0x00738880
extern "C" __declspec(naked) void asm_00738880()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { test esi, esi }
	__asm { je L_007388f4 }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { test edi, edi }
	__asm { je L_007388f3 }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { cmp eax, 0x7fffffff }
	__asm { jle L_007388b2 }
	__asm { push 0xe4b0f8 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { mov eax, 0x7fffffff }
	__asm { jmp L_007388c6 }
	__asm { L_007388b2: }
	__asm { test eax, eax }
	__asm { jns L_007388c6 }
	__asm { push 0xe4b124 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { xor eax, eax }
	__asm { L_007388c6: }
	__asm { or dword ptr [edi + 8], 1 }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { fild dword ptr [esp + 0xc] }
	__asm { mov dword ptr [edi + 0xfc], eax }
	__asm { fmul qword ptr [g_010380b0] }
	__asm { fstp dword ptr [edi + 0x28] }
	__asm { test eax, eax }
	__asm { jne L_007388f3 }
	__asm { push 0xe4b114 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { L_007388f3: }
	__asm { pop edi }
	__asm { L_007388f4: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x00739b20
extern "C" __declspec(naked) void asm_00739b20()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { sub esp, 0x28c }
	__asm { push esi }
	__asm { cmp eax, 2 }
	__asm { jne L_00739b37 }
	__asm { mov esi, 0x120 }
	__asm { jmp L_00739b41 }
	__asm { L_00739b37: }
	__asm { cmp eax, 1 }
	__asm { jne L_00739b8e }
	__asm { mov esi, 0x28c }
	__asm { L_00739b41: }
	__asm { mov ecx, dword ptr [esp + 0x298] }
	__asm { push edi }
	__asm { push esi }
	__asm { test ecx, ecx }
	__asm { je L_00739b68 }
	__asm { mov eax, dword ptr [esp + 0x2a4] }
	__asm { mov dword ptr [esp + 0x250], eax }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 8 }
	__asm { jmp L_00739b71 }
	__asm { L_00739b68: }
	__asm { call dword ptr [g_00e10530] }
	__asm { add esp, 4 }
	__asm { L_00739b71: }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_00739b83 }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00cf6804 }
	__asm { add esp, 0xc }
	__asm { L_00739b83: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0x28c }
	__asm { ret }
	__asm { L_00739b8e: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { add esp, 0x28c }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0073a570
extern "C" __declspec(naked) void asm_0073a570()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [eax], 0xff }
	__asm { inc dword ptr [ecx] }
	__asm { dec dword ptr [ecx + 4] }
	__asm { jne L_0073a5a4 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073a5a4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073a5a4: }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { mov al, byte ptr [esp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov byte ptr [ecx], al }
	__asm { inc dword ptr [edx] }
	__asm { dec dword ptr [edx + 4] }
	__asm { jne L_0073a5d6 }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073a5d6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073a5d6: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0073a5e0
extern "C" __declspec(naked) void asm_0073a5e0()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { mov ecx, ebx }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { sar ecx, 8 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov byte ptr [eax], cl }
	__asm { inc dword ptr [edx] }
	__asm { dec dword ptr [edx + 4] }
	__asm { jne L_0073a61d }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073a61d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073a61d: }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [eax], bl }
	__asm { inc dword ptr [ecx] }
	__asm { dec dword ptr [ecx + 4] }
	__asm { jne L_0073a64b }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073a64b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073a64b: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0073d210
extern "C" __declspec(naked) void asm_0073d210()
{
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { cmp byte ptr [ecx + 0x48], 0 }
	__asm { jne L_0073d2a5 }
	__asm { cmp byte ptr [ecx + 0x10a], 0 }
	__asm { jne L_0073d2a5 }
	__asm { cmp dword ptr [ecx + 0x28], 3 }
	__asm { jne L_0073d2a5 }
	__asm { cmp dword ptr [ecx + 0x24], 3 }
	__asm { jne L_0073d2a5 }
	__asm { cmp dword ptr [ecx + 0x2c], 2 }
	__asm { jne L_0073d2a5 }
	__asm { cmp dword ptr [ecx + 0x64], 3 }
	__asm { jne L_0073d2a5 }
	__asm { mov eax, dword ptr [ecx + 0xc4] }
	__asm { cmp dword ptr [eax + 8], 2 }
	__asm { jne L_0073d2a5 }
	__asm { cmp dword ptr [eax + 0x60], 1 }
	__asm { jne L_0073d2a5 }
	__asm { cmp dword ptr [eax + 0xb8], 1 }
	__asm { jne L_0073d2a5 }
	__asm { cmp dword ptr [eax + 0xc], 2 }
	__asm { jg L_0073d2a5 }
	__asm { cmp dword ptr [eax + 0x64], 1 }
	__asm { jne L_0073d2a5 }
	__asm { cmp dword ptr [eax + 0xbc], 1 }
	__asm { jne L_0073d2a5 }
	__asm { mov edx, dword ptr [ecx + 0x118] }
	__asm { cmp dword ptr [eax + 0x24], edx }
	__asm { jne L_0073d2a5 }
	__asm { cmp dword ptr [eax + 0x7c], edx }
	__asm { jne L_0073d2a5 }
	__asm { cmp dword ptr [eax + 0xd4], edx }
	__asm { jne L_0073d2a5 }
	__asm { mov ecx, dword ptr [ecx + 0x11c] }
	__asm { cmp dword ptr [eax + 0x28], ecx }
	__asm { jne L_0073d2a5 }
	__asm { cmp dword ptr [eax + 0x80], ecx }
	__asm { jne L_0073d2a5 }
	__asm { cmp dword ptr [eax + 0xd8], ecx }
	__asm { jne L_0073d2a5 }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0073d2a5: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" void fn_00739df0();
// FUNCTION: ROBLOXSTUDIO 0x00741060
extern "C" __declspec(naked) void asm_00741060()
{
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov al, byte ptr [ecx] }
	__asm { cmp al, 0x41 }
	__asm { jb L_007410af }
	__asm { cmp al, 0x7a }
	__asm { ja L_007410af }
	__asm { cmp al, 0x5a }
	__asm { jbe L_00741076 }
	__asm { cmp al, 0x61 }
	__asm { jb L_007410af }
	__asm { L_00741076: }
	__asm { mov al, byte ptr [ecx + 1] }
	__asm { cmp al, 0x41 }
	__asm { jb L_007410af }
	__asm { cmp al, 0x7a }
	__asm { ja L_007410af }
	__asm { cmp al, 0x5a }
	__asm { jbe L_00741089 }
	__asm { cmp al, 0x61 }
	__asm { jb L_007410af }
	__asm { L_00741089: }
	__asm { mov al, byte ptr [ecx + 2] }
	__asm { cmp al, 0x41 }
	__asm { jb L_007410af }
	__asm { cmp al, 0x7a }
	__asm { ja L_007410af }
	__asm { cmp al, 0x5a }
	__asm { jbe L_0074109c }
	__asm { cmp al, 0x61 }
	__asm { jb L_007410af }
	__asm { L_0074109c: }
	__asm { mov al, byte ptr [ecx + 3] }
	__asm { cmp al, 0x41 }
	__asm { jb L_007410af }
	__asm { cmp al, 0x7a }
	__asm { ja L_007410af }
	__asm { cmp al, 0x5a }
	__asm { jbe L_007410bc }
	__asm { cmp al, 0x61 }
	__asm { jae L_007410bc }
	__asm { L_007410af: }
	__asm { mov dword ptr [esp + 8], 0xe4c850 }
	__asm { jmp fn_00739df0 }
	__asm { L_007410bc: }
	__asm { ret }
}

extern "C" void fn_00727830();
extern "C" void fn_00727850();
extern "C" void fn_00737920();
extern "C" void fn_00739c20();
extern "C" void fn_00741060();
// FUNCTION: ROBLOXSTUDIO 0x007410c0
extern "C" __declspec(naked) void asm_007410c0()
{
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { push 8 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00737920 }
	__asm { movzx edi, byte ptr [esp + 0x18] }
	__asm { movzx eax, byte ptr [esp + 0x19] }
	__asm { shl edi, 8 }
	__asm { add edi, eax }
	__asm { movzx eax, byte ptr [esp + 0x1a] }
	__asm { shl edi, 8 }
	__asm { add edi, eax }
	__asm { movzx eax, byte ptr [esp + 0x1b] }
	__asm { shl edi, 8 }
	__asm { add edi, eax }
	__asm { add esp, 0xc }
	__asm { cmp edi, 0x7fffffff }
	__asm { jbe L_00741113 }
	__asm { push 0xe4ba60 }
	__asm { push ebx }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { L_00741113: }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { lea esi, [ebx + 0x11c] }
	__asm { push ebx }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00727830 }
	__asm { push 4 }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00727850 }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00741060 }
	__asm { add esp, 0x18 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 8 }
	__asm { ret }
}

extern "C" void fn_00727850();
extern "C" void fn_00737840();
extern "C" void fn_007411d0();
// FUNCTION: ROBLOXSTUDIO 0x00741150
extern "C" __declspec(naked) void asm_00741150()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { test esi, esi }
	__asm { je L_007411c3 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x1c] }
	__asm { push edi }
	__asm { push dword ptr [esp + 0x18] }
	__asm { push esi }
	__asm { call fn_007411d0 }
	__asm { mov ebx, dword ptr [esp + 0x24] }
	__asm { add esp, 0xc }
	__asm { test ebx, ebx }
	__asm { je L_0074118c }
	__asm { test edi, edi }
	__asm { je L_0074118c }
	__asm { push edi }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00737840 }
	__asm { push edi }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00727850 }
	__asm { add esp, 0x18 }
	__asm { L_0074118c: }
	__asm { mov ecx, dword ptr [esi + 0x110] }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x18 }
	__asm { mov byte ptr [esp + 0x10], al }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x10 }
	__asm { mov byte ptr [esp + 0x11], al }
	__asm { mov eax, ecx }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [esp + 0x12], al }
	__asm { push 4 }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [esp + 0x1f], cl }
	__asm { call fn_00737840 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_007411c3: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00727830();
extern "C" void fn_00727850();
extern "C" void fn_00737840();
// FUNCTION: ROBLOXSTUDIO 0x007411d0
extern "C" __declspec(naked) void asm_007411d0()
{
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { test edi, edi }
	__asm { je L_00741232 }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x18 }
	__asm { mov byte ptr [esp + 4], al }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x10 }
	__asm { mov byte ptr [esp + 5], al }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x18] }
	__asm { mov eax, ecx }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [esp + 0xa], al }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { push 8 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov byte ptr [esp + 0x17], cl }
	__asm { call fn_00737840 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov dword ptr [edi + 0x11c], eax }
	__asm { call fn_00727830 }
	__asm { push 4 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00727850 }
	__asm { add esp, 0x1c }
	__asm { pop esi }
	__asm { L_00741232: }
	__asm { pop edi }
	__asm { add esp, 8 }
	__asm { ret }
}

extern "C" void fn_00737840();
extern "C" void fn_007411d0();
// FUNCTION: ROBLOXSTUDIO 0x00741a10
extern "C" __declspec(naked) void asm_00741a10()
{
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [esp + 4], 0x444e4549 }
	__asm { mov byte ptr [esp + 8], 0 }
	__asm { test esi, esi }
	__asm { je L_00741a6b }
	__asm { push 0 }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_007411d0 }
	__asm { mov ecx, dword ptr [esi + 0x110] }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x18 }
	__asm { mov byte ptr [esp + 0x1c], al }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x10 }
	__asm { mov byte ptr [esp + 0x1d], al }
	__asm { mov eax, ecx }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [esp + 0x1e], al }
	__asm { push 4 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [esp + 0x2b], cl }
	__asm { call fn_00737840 }
	__asm { add esp, 0x18 }
	__asm { L_00741a6b: }
	__asm { or dword ptr [esi + 0x68], 0x10 }
	__asm { pop esi }
	__asm { add esp, 8 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00748ef0
extern "C" __declspec(naked) void asm_00748ef0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { push 0xac }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 0x188], eax }
	__asm { mov dword ptr [eax], 0x74aa50 }
	__asm { cmp byte ptr [esi + 0xf8], 0 }
	__asm { pop esi }
	__asm { je L_00748f78 }
	__asm { mov dword ptr [eax + 0x8c], 0 }
	__asm { mov dword ptr [eax + 0x9c], 0 }
	__asm { mov dword ptr [eax + 0x90], 0 }
	__asm { mov dword ptr [eax + 0xa0], 0 }
	__asm { mov dword ptr [eax + 0x94], 0 }
	__asm { mov dword ptr [eax + 0xa4], 0 }
	__asm { mov dword ptr [eax + 0x98], 0 }
	__asm { mov dword ptr [eax + 0xa8], 0 }
	__asm { mov dword ptr [eax + 0x88], 0 }
	__asm { ret }
	__asm { L_00748f78: }
	__asm { mov dword ptr [eax + 0x3c], 0 }
	__asm { mov dword ptr [eax + 0x2c], 0 }
	__asm { mov dword ptr [eax + 0x5c], 0 }
	__asm { mov dword ptr [eax + 0x4c], 0 }
	__asm { mov dword ptr [eax + 0x40], 0 }
	__asm { mov dword ptr [eax + 0x30], 0 }
	__asm { mov dword ptr [eax + 0x60], 0 }
	__asm { mov dword ptr [eax + 0x50], 0 }
	__asm { mov dword ptr [eax + 0x44], 0 }
	__asm { mov dword ptr [eax + 0x34], 0 }
	__asm { mov dword ptr [eax + 0x64], 0 }
	__asm { mov dword ptr [eax + 0x54], 0 }
	__asm { mov dword ptr [eax + 0x48], 0 }
	__asm { mov dword ptr [eax + 0x38], 0 }
	__asm { mov dword ptr [eax + 0x68], 0 }
	__asm { mov dword ptr [eax + 0x58], 0 }
	__asm { ret }
}

extern "C" void fn_00753790();
// FUNCTION: ROBLOXSTUDIO 0x00753700
extern "C" __declspec(naked) void asm_00753700()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { push 0x30 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push edi }
	__asm { call eax }
	__asm { mov esi, eax }
	__asm { mov dword ptr [edi + 0x1a4], esi }
	__asm { mov dword ptr [esi], 0x753860 }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { mov ecx, dword ptr [edi + 0x64] }
	__asm { imul ecx, dword ptr [edi + 0x5c] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { cmp dword ptr [edi + 0x114], 2 }
	__asm { jne L_00753766 }
	__asm { mov dword ptr [esi + 4], 0x753880 }
	__asm { mov dword ptr [esi + 0xc], 0x753af0 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { push edi }
	__asm { call fn_00753790 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00753766: }
	__asm { push edi }
	__asm { mov dword ptr [esi + 4], 0x753940 }
	__asm { mov dword ptr [esi + 0xc], 0x753980 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { call fn_00753790 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0076f570
extern "C" __declspec(naked) void asm_0076f570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, 5 }
	__asm { jae L_0076f584 }
	__asm { lea ecx, [eax*4 + 0x12e019c] }
	__asm { jmp L_0076f586 }
	__asm { L_0076f584: }
	__asm { xor ecx, ecx }
	__asm { L_0076f586: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0076f5ca }
	__asm { test ecx, ecx }
	__asm { jne L_0076f5ce }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0076f5b7 }
	__asm { push 0x33 }
	__asm { push 0xe4dbc0 }
	__asm { push 0xe4dc8c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0076f5d3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0076f5b7: }
	__asm { mov dword ptr [ebp + 0xc], 0xe4dc98 }
	__asm { movzx eax, al }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_006b9740 }
	__asm { L_0076f5ca: }
	__asm { test ecx, ecx }
	__asm { je L_0076f5d3 }
	__asm { L_0076f5ce: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0076f5d3: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00532480();
extern "C" void fn_00865d20();
extern "C" void fn_00a10090();
// FUNCTION: ROBLOXSTUDIO 0x0076fb40
extern "C" __declspec(naked) void asm_0076fb40()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { test edi, edi }
	__asm { je L_0076fb80 }
	__asm { push edi }
	__asm { call fn_00865d20 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0076fb6d }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { cmp eax, ecx }
	__asm { je L_0076fb80 }
	__asm { test ecx, ecx }
	__asm { je L_0076fb6d }
	__asm { push eax }
	__asm { call fn_00532480 }
	__asm { test al, al }
	__asm { jne L_0076fb80 }
	__asm { L_0076fb6d: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x20] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_0076fb80: }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { test edi, edi }
	__asm { je L_0076fb96 }
	__asm { push edi }
	__asm { call fn_00a10090 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0xe8], eax }
	__asm { L_0076fb96: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_00a10090();
// FUNCTION: ROBLOXSTUDIO 0x0076fef0
extern "C" __declspec(naked) void asm_0076fef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { cmp eax, 0x13037d4 }
	__asm { jne L_0076ff24 }
	__asm { L_0076ff01: }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { test edi, edi }
	__asm { je L_0076ff17 }
	__asm { push edi }
	__asm { call fn_00a10090 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0xe8], eax }
	__asm { L_0076ff17: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0076ff24: }
	__asm { cmp eax, 0x1301c40 }
	__asm { je L_0076ff01 }
	__asm { cmp eax, 0x1301c6c }
	__asm { je L_0076ff40 }
	__asm { cmp eax, 0x1301c98 }
	__asm { je L_0076ff40 }
	__asm { cmp eax, 0x1301cc4 }
	__asm { jne L_0076ff45 }
	__asm { L_0076ff40: }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 4] }
	__asm { L_0076ff45: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a10090();
// FUNCTION: ROBLOXSTUDIO 0x00770070
extern "C" __declspec(naked) void asm_00770070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { cmp eax, 0x13037d4 }
	__asm { jne L_007700a4 }
	__asm { L_00770081: }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { test edi, edi }
	__asm { je L_00770097 }
	__asm { push edi }
	__asm { call fn_00a10090 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0xe8], eax }
	__asm { L_00770097: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007700a4: }
	__asm { cmp eax, 0x1301c40 }
	__asm { je L_00770081 }
	__asm { cmp eax, 0x1301c6c }
	__asm { je L_007700ce }
	__asm { cmp eax, 0x1301c98 }
	__asm { je L_007700ce }
	__asm { cmp eax, 0x1301cf0 }
	__asm { je L_007700ce }
	__asm { cmp eax, 0x1301d1c }
	__asm { je L_007700ce }
	__asm { cmp eax, 0x1301cc4 }
	__asm { jne L_007700d3 }
	__asm { L_007700ce: }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 4] }
	__asm { L_007700d3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e9a628[];
extern "C" char g_012e06a4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007706e0
extern "C" __declspec(naked) void asm_007706e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1a6ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e06a4] }
	__asm { test al, 1 }
	__asm { jne L_0077074c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e06a4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9a628] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e0578 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1510 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0077074c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e0578 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9b1bc[];
extern "C" char g_012e0574[];
extern "C" void fn_007706e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00770760
extern "C" __declspec(naked) void asm_00770760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1a70e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e0574] }
	__asm { test al, 1 }
	__asm { jne L_007707cc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0574], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9b1bc] }
	__asm { call fn_007706e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e0448 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1520 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007707cc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e0448 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9a61c[];
extern "C" char g_012e0444[];
extern "C" void fn_007706e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007707e0
extern "C" __declspec(naked) void asm_007707e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1a72e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e0444] }
	__asm { test al, 1 }
	__asm { jne L_0077084c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0444], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9a61c] }
	__asm { call fn_007706e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e0318 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1530 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0077084c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e0318 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9a62c[];
extern "C" char g_012e0314[];
extern "C" void fn_007706e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00770860
extern "C" __declspec(naked) void asm_00770860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1a74e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e0314] }
	__asm { test al, 1 }
	__asm { jne L_007708cc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0314], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9a62c] }
	__asm { call fn_007706e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e01e8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1540 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007708cc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e01e8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00770920
extern "C" __declspec(naked) void asm_00770920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { je L_0077095e }
	__asm { cmp eax, dword ptr [ecx + 0xc] }
	__asm { je L_0077095e }
	__asm { cmp eax, dword ptr [ecx + 0x10] }
	__asm { je L_00770957 }
	__asm { cmp eax, dword ptr [ecx + 0x14] }
	__asm { je L_00770957 }
	__asm { cmp eax, dword ptr [ecx + 0x18] }
	__asm { jne L_00770946 }
	__asm { mov edx, 1 }
	__asm { jmp L_00770963 }
	__asm { L_00770946: }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { mov edx, 4 }
	__asm { cmove edx, esi }
	__asm { pop esi }
	__asm { jmp L_00770963 }
	__asm { L_00770957: }
	__asm { mov edx, 2 }
	__asm { jmp L_00770963 }
	__asm { L_0077095e: }
	__asm { mov edx, 3 }
	__asm { L_00770963: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea edx, [edx + edx*2] }
	__asm { mov ecx, dword ptr [edx*4 + 0x11def70] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx*4 + 0x11def74] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx*4 + 0x11def78] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0068a630();
extern "C" void fn_00770a40();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00770ba0
extern "C" __declspec(naked) void asm_00770ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test byte ptr [eax + 0xe8], 2 }
	__asm { je L_00770bd6 }
	__asm { cmp dword ptr [ecx + 0x10], eax }
	__asm { je L_00770bcd }
	__asm { cmp dword ptr [ecx + 8], eax }
	__asm { je L_00770bcd }
	__asm { cmp dword ptr [ecx + 0x14], eax }
	__asm { je L_00770bcd }
	__asm { cmp dword ptr [ecx + 0xc], eax }
	__asm { je L_00770bcd }
	__asm { cmp dword ptr [ecx + 0x18], eax }
	__asm { je L_00770bcd }
	__asm { cmp dword ptr [ecx + 4], eax }
	__asm { jne L_00770bd6 }
	__asm { L_00770bcd: }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00770a40 }
	__asm { L_00770bd6: }
	__asm { mov eax, dword ptr [eax + 0x38] }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00770c00 }
	__asm { lea esi, [eax + 0x1c] }
	__asm { test esi, esi }
	__asm { je L_00770c00 }
	__asm { mov esi, dword ptr [esi + 0xc] }
	__asm { call fn_0068a630 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00770c00 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00770c00: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00772de0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00772d50
extern "C" __declspec(naked) void asm_00772d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1a9f0 }
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
	__asm { je L_00772da8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe4e230 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00772daa }
	__asm { L_00772da8: }
	__asm { xor eax, eax }
	__asm { L_00772daa: }
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
	__asm { call fn_00772de0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_004038a0();
extern "C" void fn_007734d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007737e0
extern "C" __declspec(naked) void asm_007737e0()
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
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { cmp byte ptr [esi], 0 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { jne L_0077381d }
	__asm { xor edx, edx }
	__asm { jmp L_0077382b }
	__asm { L_0077381d: }
	__asm { mov edx, esi }
	__asm { lea ecx, [edx + 1] }
	__asm { L_00773822: }
	__asm { mov al, byte ptr [edx] }
	__asm { inc edx }
	__asm { test al, al }
	__asm { jne L_00773822 }
	__asm { sub edx, ecx }
	__asm { L_0077382b: }
	__asm { push edx }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007734d0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_0077385d }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0077385d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006b99c0();
extern "C" void fn_007734d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00773930
extern "C" __declspec(naked) void asm_00773930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_006b99c0 }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007734d0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00773985 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00773985: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e4e930[];
// FUNCTION: ROBLOXSTUDIO 0x00774e00
extern "C" __declspec(naked) void asm_00774e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, dword ptr [g_00e4e930] }
	__asm { lea edi, [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_00774e22 }
	__asm { push 2 }
	__asm { push edi }
	__asm { push edi }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00774e22: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00774e3d }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, 0xe4e930 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00774e3d: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004038a0();
extern "C" void fn_00774e50();
extern "C" void fn_00775330();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00774fc0
extern "C" __declspec(naked) void asm_00774fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00774e50 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00775330 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00775035 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00775035: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0121035c[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b8a9c();
extern "C" void fn_00775050();
extern "C" void fn_00d02f60();
// FUNCTION: ROBLOXSTUDIO 0x00775330
extern "C" __declspec(naked) void asm_00775330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_0121035c] }
	__asm { test al, al }
	__asm { je L_00775350 }
	__asm { push dword ptr [ebp + 8] }
	__asm { movzx eax, al }
	__asm { push 0xe4e7f8 }
	__asm { push eax }
	__asm { call fn_006b8a9c }
	__asm { add esp, 0xc }
	__asm { L_00775350: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { lea edi, [eax + 0x10] }
	__asm { jbe L_0077536e }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00775365 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00775365: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00d02f60 }
	__asm { L_0077536e: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00775050 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007753a9 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { jne L_007753a9 }
	__asm { mov al, byte ptr [g_0121035c] }
	__asm { test al, al }
	__asm { je L_007753a9 }
	__asm { pop edi }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { mov dword ptr [ebp + 0xc], 0xe4e80c }
	__asm { movzx eax, al }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_006b8a90 }
	__asm { L_007753a9: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x007760f0
extern "C" __declspec(naked) void asm_007760f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00776106 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00776106: }
	__asm { cmp eax, 1 }
	__asm { jne L_0077611d }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0077611d: }
	__asm { cmp eax, 2 }
	__asm { jne L_0077612d }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0077612d: }
	__asm { cmp eax, 3 }
	__asm { jne L_00776150 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11df158 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00776150: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11df158 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004258f0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00776300
extern "C" __declspec(naked) void asm_00776300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1afd0 }
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
	__asm { je L_00776358 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe4ef68 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0077635a }
	__asm { L_00776358: }
	__asm { xor eax, eax }
	__asm { L_0077635a: }
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
	__asm { call fn_004258f0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007786c0();
extern "C" void fn_007795e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007769f0
extern "C" __declspec(naked) void asm_007769f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b053 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 0xb8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00776a4c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], ecx }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_007786c0 }
	__asm { mov al, byte ptr [ebp + 0xb8] }
	__asm { mov byte ptr [edi + 0xb0], al }
	__asm { pop esi }
	__asm { jmp L_00776a4e }
	__asm { L_00776a4c: }
	__asm { xor edi, edi }
	__asm { L_00776a4e: }
	__asm { mov eax, dword ptr [ebp + 0xc0] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007795e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc0 }
}

extern "C" char g_00e10548[];
extern "C" void fn_0042eba0();
extern "C" void fn_0042ee70();
// FUNCTION: ROBLOXSTUDIO 0x007779a0
extern "C" __declspec(naked) void asm_007779a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_007779f5 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { jne L_007779bb }
	__asm { test esi, esi }
	__asm { jne L_007779ff }
	__asm { L_007779bb: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00777a09 }
	__asm { add eax, 0x10 }
	__asm { mov dword ptr [edi], eax }
	__asm { test esi, esi }
	__asm { js L_007779ff }
	__asm { cmp esi, dword ptr [eax - 8] }
	__asm { jg L_007779ff }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax - 0xc], esi }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { mov byte ptr [esi + eax], 0 }
	__asm { push dword ptr [edi] }
	__asm { call dword ptr [g_00e10548] }
	__asm { add esp, 0x10 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_007779f5: }
	__asm { push 0x80004005 }
	__asm { call fn_0042ee70 }
	__asm { L_007779ff: }
	__asm { push 0x80070057 }
	__asm { call fn_0042ee70 }
	__asm { L_00777a09: }
	__asm { call fn_0042eba0 }
}

extern "C" void fn_00402150();
extern "C" void fn_00403540();
extern "C" void fn_00778ff0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00777e50
extern "C" __declspec(naked) void asm_00777e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b3a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00778ff0 }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00778ff0 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_00402150 }
	__asm { lea ecx, [esi + 0x50] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x58] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00402150 }
	__asm { cmp dword ptr [ebp + 0x6c], 0x10 }
	__asm { jb L_00777ed9 }
	__asm { push dword ptr [ebp + 0x58] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00777ed9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x68 }
}

extern "C" void fn_00402150();
// FUNCTION: ROBLOXSTUDIO 0x00779240
extern "C" __declspec(naked) void asm_00779240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b698 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea esi, [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0077928e }
	__asm { test al, 1 }
	__asm { jne L_00779287 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x58] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00779287 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00779287: }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { L_0077928e: }
	__asm { mov ecx, esi }
	__asm { call fn_00402150 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402150();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00779770
extern "C" __declspec(naked) void asm_00779770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b698 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007797c1 }
	__asm { test al, 1 }
	__asm { jne L_007797ba }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x58] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_007797ba }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007797ba: }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { L_007797c1: }
	__asm { mov ecx, esi }
	__asm { call fn_00402150 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_007797d7 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007797d7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007794e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007797f0
extern "C" __declspec(naked) void asm_007797f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b6b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x78] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00779844 }
	__asm { test al, 1 }
	__asm { jne L_0077983d }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x80] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0077983d }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0077983d: }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { L_00779844: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007794e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00779861 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00779861: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e106ec[];
extern "C" void fn_0042ea80();
extern "C" void fn_0042ee70();
extern "C" void fn_00460390();
// FUNCTION: ROBLOXSTUDIO 0x00779bb0
extern "C" __declspec(naked) void asm_00779bb0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, dword ptr [eax - 0xc] }
	__asm { test esi, esi }
	__asm { js L_00779c00 }
	__asm { mov ecx, 1 }
	__asm { sub ecx, dword ptr [eax - 4] }
	__asm { mov eax, dword ptr [eax - 8] }
	__asm { sub eax, esi }
	__asm { or ecx, eax }
	__asm { jge L_00779bd6 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0042ea80 }
	__asm { L_00779bd6: }
	__asm { lea eax, [esi + 1] }
	__asm { push eax }
	__asm { push dword ptr [edi] }
	__asm { call dword ptr [g_00e106ec] }
	__asm { push eax }
	__asm { call fn_00460390 }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 0xc }
	__asm { cmp esi, dword ptr [eax - 8] }
	__asm { jg L_00779c00 }
	__asm { mov dword ptr [eax - 0xc], esi }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [esi + eax], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00779c00: }
	__asm { push 0x80070057 }
	__asm { call fn_0042ee70 }
}

extern "C" char g_00e100f0[];
extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0077a660
extern "C" __declspec(naked) void asm_0077a660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10c }
	__asm { lea eax, [ebp - 0x10c] }
	__asm { push 0 }
	__asm { push 0x100 }
	__asm { push eax }
	__asm { push 0x800 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0x1000 }
	__asm { call dword ptr [g_00e100f0] }
	__asm { test eax, eax }
	__asm { jne L_0077a6b8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0xe4eaa8 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0x14 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_0077a6b8: }
	__asm { lea eax, [ebp - 0x10c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0xe4eabc }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0x14 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0077cd80
extern "C" __declspec(naked) void asm_0077cd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ba00 }
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
	__asm { je L_0077cdd8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe4fadc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0077cdda }
	__asm { L_0077cdd8: }
	__asm { xor eax, eax }
	__asm { L_0077cdda: }
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
	__asm { je L_0077cdff }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_0077cdff: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0077e650();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0077ceb0
extern "C" __declspec(naked) void asm_0077ceb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ba10 }
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
	__asm { je L_0077cf08 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe4f944 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0077cf0a }
	__asm { L_0077cf08: }
	__asm { xor eax, eax }
	__asm { L_0077cf0a: }
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
	__asm { call fn_0077e650 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0077cfe0
extern "C" __declspec(naked) void asm_0077cfe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ba20 }
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
	__asm { je L_0077d038 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe4f898 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0077d03a }
	__asm { L_0077d038: }
	__asm { xor eax, eax }
	__asm { L_0077d03a: }
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
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0077d070
extern "C" __declspec(naked) void asm_0077d070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c763 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x1c }
	__asm { mov edi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0077d0e7 }
	__asm { push -1 }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], 0xe4f908 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov dword ptr [edi], esi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0077d0e7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00782030();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0077d200
extern "C" __declspec(naked) void asm_0077d200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x38 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0077d240 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call fn_00782030 }
	__asm { jmp L_0077d242 }
	__asm { L_0077d240: }
	__asm { xor eax, eax }
	__asm { L_0077d242: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test ecx, ecx }
	__asm { je L_0077d259 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0077d259: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007820c0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0077d270
extern "C" __declspec(naked) void asm_0077d270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x1c }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0077d2b0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call fn_007820c0 }
	__asm { jmp L_0077d2b2 }
	__asm { L_0077d2b0: }
	__asm { xor eax, eax }
	__asm { L_0077d2b2: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test ecx, ecx }
	__asm { je L_0077d2c9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0077d2c9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0077d380
extern "C" __declspec(naked) void asm_0077d380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x10 }
	__asm { mov edi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_0077d3b3 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe4fa9c }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { jmp L_0077d3b5 }
	__asm { L_0077d3b3: }
	__asm { xor esi, esi }
	__asm { L_0077d3b5: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { test ecx, ecx }
	__asm { je L_0077d3c5 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0077d3c5: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0077e230
extern "C" __declspec(naked) void asm_0077e230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jae L_0077e255 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov dword ptr [edi + 4], edx }
	__asm { L_0077e255: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { jae L_0077e287 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [esi], edx }
	__asm { mov dword ptr [esi + 4], ebx }
	__asm { cmp edx, dword ptr [edi] }
	__asm { jae L_0077e286 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [edi], edx }
	__asm { mov dword ptr [edi + 4], ebx }
	__asm { L_0077e286: }
	__asm { pop ebx }
	__asm { L_0077e287: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0077dda0();
// FUNCTION: ROBLOXSTUDIO 0x0077e400
extern "C" __declspec(naked) void asm_0077e400()
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
	__asm { jle L_0077e45f }
	__asm { add esi, -8 }
	__asm { nop }
	__asm { L_0077e420: }
	__asm { mov eax, dword ptr [esi] }
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
	__asm { call fn_0077dda0 }
	__asm { sub esi, 8 }
	__asm { mov ecx, esi }
	__asm { sub ecx, edi }
	__asm { add ecx, 8 }
	__asm { mov eax, ecx }
	__asm { and eax, 0xfffffff8 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 8 }
	__asm { jg L_0077e420 }
	__asm { L_0077e45f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00411c20();
extern "C" void fn_007830f0();
// FUNCTION: ROBLOXSTUDIO 0x0077e8c0
extern "C" __declspec(naked) void asm_0077e8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bb04 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x3c], 0xe4f8fc }
	__asm { mov dword ptr [esi + 0x44], 0xe1822c }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 2 }
	__asm { call fn_007830f0 }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [esi], 0xe4f8dc }
	__asm { lea edx, [esi + 0x28] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], 0xe4f8e8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x3c], 0xe4f8f0 }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x38], eax }
	__asm { test edi, edi }
	__asm { je L_0077e946 }
	__asm { lea eax, [edi + 0x28] }
	__asm { jmp L_0077e948 }
	__asm { L_0077e946: }
	__asm { xor eax, eax }
	__asm { L_0077e948: }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00783650();
// FUNCTION: ROBLOXSTUDIO 0x0077e9d0
extern "C" __declspec(naked) void asm_0077e9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bb18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00783650 }
	__asm { mov dword ptr [esi], 0xe4f014 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0077ea16 }
	__asm { add edi, 0x40 }
	__asm { jmp L_0077ea18 }
	__asm { L_0077ea16: }
	__asm { xor edi, edi }
	__asm { L_0077ea18: }
	__asm { mov dword ptr [esi + 0x40], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x44], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0077ea2e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0077ea2e: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x48], ecx }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x4c], ecx }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x50], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xe4f85c }
	__asm { mov dword ptr [esi + 0x40], 0xe4f868 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0077ec00
extern "C" __declspec(naked) void asm_0077ec00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bb78 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe4efe8 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0077ec4c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { jmp L_0077ec4e }
	__asm { L_0077ec4c: }
	__asm { xor eax, eax }
	__asm { L_0077ec4e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov dword ptr [edi + 0x10], 0xe18224 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe4f884 }
	__asm { mov dword ptr [edi + 0x10], 0xe4f890 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007870a0();
// FUNCTION: ROBLOXSTUDIO 0x0077f070
extern "C" __declspec(naked) void asm_0077f070()
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
	__asm { call fn_007870a0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0077f0c4 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_0077f0c4 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_0077f0c4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0042e3d0();
extern "C" void fn_0077fce0();
// FUNCTION: ROBLOXSTUDIO 0x0077f450
extern "C" __declspec(naked) void asm_0077f450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bc59 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_0077fce0 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { jl L_0077f4ba }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { cmp ecx, 0x7f }
	__asm { lea eax, [ebp - 0x14] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { cmovbe edx, eax }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp + 0xc], 0x7f }
	__asm { push dword ptr [edx] }
	__asm { push 1 }
	__asm { call fn_0042e3d0 }
	__asm { L_0077f4ba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0077f730();
extern "C" void fn_00784a60();
// FUNCTION: ROBLOXSTUDIO 0x0077f4d0
extern "C" __declspec(naked) void asm_0077f4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bc59 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0077f730 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { jl L_0077f527 }
	__asm { movzx ecx, byte ptr [esi + 5] }
	__asm { push ecx }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00784a60 }
	__asm { L_0077f527: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0077f4d0();
extern "C" void fn_0077faf0();
// FUNCTION: ROBLOXSTUDIO 0x0077f540
extern "C" __declspec(naked) void asm_0077f540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { push eax }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, ecx }
	__asm { call fn_0077f4d0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { js L_0077f571 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0077f571: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [eax], esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { call fn_0077faf0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00781280();
// FUNCTION: ROBLOXSTUDIO 0x0077f590
extern "C" __declspec(naked) void asm_0077f590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0077f5b1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp L_0077f5b4 }
	__asm { L_0077f5b1: }
	__asm { or eax, 0xffffffff }
	__asm { L_0077f5b4: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { test eax, eax }
	__asm { js L_0077f5c5 }
	__asm { pop edi }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0077f5c5: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { push dword ptr [eax] }
	__asm { call fn_00781280 }
}

extern "C" void fn_0077e840();
// FUNCTION: ROBLOXSTUDIO 0x0077f600
extern "C" __declspec(naked) void asm_0077f600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edx, dword ptr [ecx + 0xc] }
	__asm { mov eax, dword ptr [edx] }
	__asm { cmp eax, dword ptr [ecx + 0x10] }
	__asm { je L_0077f64a }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { cmp al, byte ptr [esi] }
	__asm { jne L_0077f64a }
	__asm { inc dword ptr [edx] }
	__asm { push dword ptr [ecx + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push esi }
	__asm { add ecx, 5 }
	__asm { call fn_0077e840 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0077f64a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e105d4[];
extern "C" void fn_0077e840();
// FUNCTION: ROBLOXSTUDIO 0x0077f6c0
extern "C" __declspec(naked) void asm_0077f6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [edi + 0x10] }
	__asm { je L_0077f718 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call dword ptr [g_00e105d4] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0077f718 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { lea ecx, [edi + 5] }
	__asm { inc dword ptr [eax] }
	__asm { push dword ptr [edi + 0xc] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0077e840 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0077f718: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0077f590();
extern "C" void fn_0077f600();
// FUNCTION: ROBLOXSTUDIO 0x0077fa90
extern "C" __declspec(naked) void asm_0077fa90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { push eax }
	__asm { call fn_0077f600 }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { js L_0077fad2 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0077f590 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { js L_0077fad2 }
	__asm { lea ecx, [eax + esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0077fad2: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0077f450();
extern "C" void fn_0077f600();
// FUNCTION: ROBLOXSTUDIO 0x0077faf0
extern "C" __declspec(naked) void asm_0077faf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { push eax }
	__asm { call fn_0077f600 }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { js L_0077fb31 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0077f450 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { js L_0077fb31 }
	__asm { lea ecx, [eax + esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0077fb31: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0077f600();
extern "C" void fn_00784620();
// FUNCTION: ROBLOXSTUDIO 0x0077fb50
extern "C" __declspec(naked) void asm_0077fb50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { push eax }
	__asm { call fn_0077f600 }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { js L_0077fba3 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00784620 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { js L_0077fba3 }
	__asm { lea ecx, [eax + esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0077fba3: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0077f600();
extern "C" void fn_0077fb50();
// FUNCTION: ROBLOXSTUDIO 0x0077fbc0
extern "C" __declspec(naked) void asm_0077fbc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_0077fb50 }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { test esi, esi }
	__asm { js L_0077fc02 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_0077f600 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { js L_0077fc02 }
	__asm { lea ecx, [eax + esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0077fc02: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0077e880();
extern "C" void fn_0077eca0();
// FUNCTION: ROBLOXSTUDIO 0x0077fd10
extern "C" __declspec(naked) void asm_0077fd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [edi + 0x10] }
	__asm { je L_0077fd71 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0077eca0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_0077fd71 }
	__asm { push dword ptr [edi + 0xc] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea ecx, [edi + 5] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0077e880 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0077fd71: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007804b0();
extern "C" void fn_007810b0();
extern "C" void fn_00784db0();
// FUNCTION: ROBLOXSTUDIO 0x0077fde0
extern "C" __declspec(naked) void asm_0077fde0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bc59 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { push dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { call fn_007810b0 }
	__asm { add esp, 0xc }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_007804b0 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { jl L_0077fe3f }
	__asm { movzx ecx, byte ptr [esi + 5] }
	__asm { push ecx }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_00784db0 }
	__asm { L_0077fe3f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0077fd90();
extern "C" void fn_00780b00();
// FUNCTION: ROBLOXSTUDIO 0x00780060
extern "C" __declspec(naked) void asm_00780060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { push eax }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, ecx }
	__asm { call fn_0077fd90 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { js L_00780091 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00780091: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [eax], esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea ecx, [ebx + 8] }
	__asm { call fn_00780b00 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_007804b0();
extern "C" void fn_00781280();
// FUNCTION: ROBLOXSTUDIO 0x007802c0
extern "C" __declspec(naked) void asm_007802c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bc59 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_007804b0 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { jge L_00780332 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 4] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push dword ptr [eax] }
	__asm { call fn_00781280 }
	__asm { L_00780332: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_007810b0();
extern "C" void fn_00781280();
// FUNCTION: ROBLOXSTUDIO 0x00780350
extern "C" __declspec(naked) void asm_00780350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { push esi }
	__asm { push dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { call fn_007810b0 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { jne L_0078037f }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0078037f: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { push 0 }
	__asm { lea eax, [edi + 4] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push dword ptr [eax] }
	__asm { call fn_00781280 }
}

extern "C" void fn_00403540();
extern "C" void fn_0077fd90();
extern "C" void fn_00781280();
// FUNCTION: ROBLOXSTUDIO 0x007803c0
extern "C" __declspec(naked) void asm_007803c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bc59 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_0077fd90 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { jge L_00780432 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push dword ptr [eax] }
	__asm { call fn_00781280 }
	__asm { L_00780432: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0077e840();
extern "C" void fn_007810b0();
// FUNCTION: ROBLOXSTUDIO 0x007804b0
extern "C" __declspec(naked) void asm_007804b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push edi }
	__asm { push dword ptr [edi] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007810b0 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [edi + 0x10] }
	__asm { je L_00780508 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { cmp al, byte ptr [esi] }
	__asm { jne L_00780508 }
	__asm { inc dword ptr [ecx] }
	__asm { push dword ptr [edi + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push esi }
	__asm { lea ecx, [edi + 5] }
	__asm { call fn_0077e840 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00780508: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0077e840();
extern "C" void fn_007810b0();
// FUNCTION: ROBLOXSTUDIO 0x00780520
extern "C" __declspec(naked) void asm_00780520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push edi }
	__asm { push dword ptr [edi] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007810b0 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [edi + 0x10] }
	__asm { je L_0078057d }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { cmp al, byte ptr [esi] }
	__asm { jl L_0078057d }
	__asm { cmp byte ptr [esi + 1], al }
	__asm { jl L_0078057d }
	__asm { inc dword ptr [ecx] }
	__asm { push dword ptr [edi + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push esi }
	__asm { lea ecx, [edi + 5] }
	__asm { call fn_0077e840 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0078057d: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e105c8[];
extern "C" void fn_0077e840();
extern "C" void fn_007810b0();
// FUNCTION: ROBLOXSTUDIO 0x007805a0
extern "C" __declspec(naked) void asm_007805a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push edi }
	__asm { push dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007810b0 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [edi + 0x10] }
	__asm { je L_00780604 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call dword ptr [g_00e105c8] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00780604 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { lea ecx, [edi + 5] }
	__asm { inc dword ptr [eax] }
	__asm { push dword ptr [edi + 0xc] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0077e840 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00780604: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007805a0();
// FUNCTION: ROBLOXSTUDIO 0x00780950
extern "C" __declspec(naked) void asm_00780950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov eax, ecx }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_007805a0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], eax }
	__asm { test eax, eax }
	__asm { js L_0078099e }
	__asm { push esi }
	__asm { L_00780978: }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov esi, dword ptr [esi] }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_007805a0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { test eax, eax }
	__asm { js L_00780998 }
	__asm { add dword ptr [edi], eax }
	__asm { jmp L_00780978 }
	__asm { L_00780998: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { L_0078099e: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007802c0();
extern "C" void fn_00780450();
// FUNCTION: ROBLOXSTUDIO 0x007809b0
extern "C" __declspec(naked) void asm_007809b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_00780450 }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { test esi, esi }
	__asm { js L_007809f2 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_007802c0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { js L_007809f2 }
	__asm { lea ecx, [eax + esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007809f2: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007804b0();
extern "C" void fn_007806e0();
// FUNCTION: ROBLOXSTUDIO 0x00780a10
extern "C" __declspec(naked) void asm_00780a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { push eax }
	__asm { call fn_007804b0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { js L_00780a52 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_007806e0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { js L_00780a52 }
	__asm { lea ecx, [eax + esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00780a52: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0077fde0();
extern "C" void fn_00780060();
// FUNCTION: ROBLOXSTUDIO 0x00780cc0
extern "C" __declspec(naked) void asm_00780cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { push eax }
	__asm { call fn_0077fde0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { js L_00780d02 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00780060 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { js L_00780d02 }
	__asm { lea ecx, [eax + esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00780d02: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00780620();
extern "C" void fn_007807c0();
// FUNCTION: ROBLOXSTUDIO 0x00780d20
extern "C" __declspec(naked) void asm_00780d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { push eax }
	__asm { call fn_00780620 }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { js L_00780d62 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_007807c0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { js L_00780d62 }
	__asm { lea ecx, [eax + esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00780d62: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
extern "C" void fn_00781430();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00781280
extern "C" __declspec(naked) void asm_00781280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bd00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x40 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x4c], 0xe4f508 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00781315 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00781315: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00781430 }
}

extern "C" void fn_00783380();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00781700
extern "C" __declspec(naked) void asm_00781700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bdc3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00781775 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00783380 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00781775: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007830f0();
// FUNCTION: ROBLOXSTUDIO 0x00781940
extern "C" __declspec(naked) void asm_00781940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1be0c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0078198a }
	__asm { mov dword ptr [esi + 0x3c], 0xe4f8fc }
	__asm { mov dword ptr [esi + 0x44], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0078198a: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_007830f0 }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xe4f8dc }
	__asm { mov dword ptr [esi + 0x28], 0xe4f8e8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x3c], 0xe4f8f0 }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x38], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00783650();
// FUNCTION: ROBLOXSTUDIO 0x007831a0
extern "C" __declspec(naked) void asm_007831a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c208 }
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
	__asm { call fn_00783650 }
	__asm { mov dword ptr [esi], 0xe4f014 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_007831df }
	__asm { add edi, 0x40 }
	__asm { jmp L_007831e1 }
	__asm { L_007831df: }
	__asm { xor edi, edi }
	__asm { L_007831e1: }
	__asm { mov dword ptr [esi + 0x40], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x44], ecx }
	__asm { test ecx, ecx }
	__asm { je L_007831f7 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_007831f7: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x4c], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { mov dword ptr [esi], 0xe4f85c }
	__asm { mov dword ptr [esi + 0x40], 0xe4f868 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007835c0
extern "C" __declspec(naked) void asm_007835c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { push -1 }
	__asm { mov dword ptr [esi], 0xe4f508 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_0078362e }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0078362e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00783820
extern "C" __declspec(naked) void asm_00783820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c328 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe4efe8 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0078387a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0078387a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007869a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007839d0
extern "C" __declspec(naked) void asm_007839d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c353 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov edi, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { test edi, edi }
	__asm { je L_00783a20 }
	__asm { lea ecx, [edi + 9] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007869a0 }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf6522 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { L_00783a20: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00783a30 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00783a30: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x00783ac0
extern "C" __declspec(naked) void asm_00783ac0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [esi], 0xe4f918 }
	__asm { mov dword ptr [esi + 0x10], 0xe4f924 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x24], 0xe4f92c }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x20], eax }
	__asm { mov dword ptr [esi], 0xe4f884 }
	__asm { mov dword ptr [esi + 0x10], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00783b11 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00783b11 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { L_00783b11: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esi], 0xe4efe8 }
	__asm { test ecx, ecx }
	__asm { je L_00783b24 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00783b24: }
	__asm { mov dword ptr [esi], 0xe4efdc }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" void fn_007839d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007841a0
extern "C" __declspec(naked) void asm_007841a0()
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
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007839d0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_007841de }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007841de: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00784940();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007845b0
extern "C" __declspec(naked) void asm_007845b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x3c }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007845f0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call fn_00784940 }
	__asm { jmp L_007845f2 }
	__asm { L_007845f0: }
	__asm { xor eax, eax }
	__asm { L_007845f2: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test ecx, ecx }
	__asm { je L_00784609 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00784609: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0077f890();
// FUNCTION: ROBLOXSTUDIO 0x00784620
extern "C" __declspec(naked) void asm_00784620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov al, byte ptr [eax + 4] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 0xc], al }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov esi, dword ptr [esi] }
	__asm { push edi }
	__asm { lea eax, [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { push eax }
	__asm { lea ecx, [ebp - 8] }
	__asm { mov dword ptr [ebx], 0 }
	__asm { call fn_0077f890 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { js L_0078467d }
	__asm { L_00784662: }
	__asm { add dword ptr [ebx], eax }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { push edi }
	__asm { mov esi, dword ptr [esi] }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_0077f890 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { jns L_00784662 }
	__asm { L_0078467d: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], esi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00adee70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00785500
extern "C" __declspec(naked) void asm_00785500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c678 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe4fa8c }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00adee70 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0xe4fa2c }
	__asm { je L_00785549 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00785549: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00785630
extern "C" __declspec(naked) void asm_00785630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4f884 }
	__asm { mov dword ptr [esi + 0x10], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0078565c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0078565c }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { L_0078565c: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esi], 0xe4efe8 }
	__asm { test ecx, ecx }
	__asm { je L_0078566f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0078566f: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0xe4efdc }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0078568c }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0078568c: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00409230();
// FUNCTION: ROBLOXSTUDIO 0x007858b0
extern "C" __declspec(naked) void asm_007858b0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov eax, ecx }
	__asm { sub eax, edi }
	__asm { test eax, 0xfffffffc }
	__asm { je L_007858d5 }
	__asm { mov eax, dword ptr [ecx - 4] }
	__asm { cmp edi, ecx }
	__asm { je L_0078590d }
	__asm { add ecx, -4 }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { pop esi }
	__asm { ret }
	__asm { L_007858d5: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [esi] }
	__asm { sub ecx, edi }
	__asm { sar ecx, 2 }
	__asm { cmp ecx, eax }
	__asm { ja L_00785908 }
	__asm { lea eax, [eax + eax*2] }
	__asm { shr eax, 1 }
	__asm { inc eax }
	__asm { cmp ecx, eax }
	__asm { jae L_00785908 }
	__asm { cmp eax, 0x3fffffff }
	__asm { jbe L_007858ff }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_007858ff: }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_00409230 }
	__asm { L_00785908: }
	__asm { mov eax, dword ptr [esi] }
	__asm { inc eax }
	__asm { mov dword ptr [esi], eax }
	__asm { L_0078590d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_01210356[];
extern "C" void fn_00424610();
extern "C" void fn_006b8aa8();
extern "C" void fn_00785c60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00785be0
extern "C" __declspec(naked) void asm_00785be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { call fn_00785c60 }
	__asm { add esp, 0xc }
	__asm { cmp byte ptr [g_01210356], 0 }
	__asm { je L_00785c4e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00424610 }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_01210356] }
	__asm { push 0xe4f03c }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b8aa8 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00785c4e }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00785c4e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0077cf40();
extern "C" void fn_0077e6a0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00785da0
extern "C" __declspec(naked) void asm_00785da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x20 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00785de8 }
	__asm { mov ecx, 3 }
	__asm { L_00785dd3: }
	__asm { dec ecx }
	__asm { mov dword ptr [eax + ecx*8 + 8], 0 }
	__asm { mov dword ptr [eax + ecx*8 + 0xc], 0 }
	__asm { jns L_00785dd3 }
	__asm { jmp L_00785dea }
	__asm { L_00785de8: }
	__asm { xor eax, eax }
	__asm { L_00785dea: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0077cf40 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esi }
	__asm { call fn_0077e6a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007819d0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00785f20
extern "C" __declspec(naked) void asm_00785f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd284ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x60 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00785f88 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [esi - 0x5c] }
	__asm { push eax }
	__asm { call fn_007819d0 }
	__asm { test eax, eax }
	__asm { je L_00785f88 }
	__asm { mov ecx, dword ptr [eax + 0x54] }
	__asm { add eax, 0x54 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { add eax, ecx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00785f88: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00781cb0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00785fb0
extern "C" __declspec(naked) void asm_00785fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd284ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x30 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00786018 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [esi - 0x2c] }
	__asm { push eax }
	__asm { call fn_00781cb0 }
	__asm { test eax, eax }
	__asm { je L_00786018 }
	__asm { mov ecx, dword ptr [eax + 0x24] }
	__asm { add eax, 0x24 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { add eax, ecx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00786018: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00782030();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00786030
extern "C" __declspec(naked) void asm_00786030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x38 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0078607e }
	__asm { lea ecx, [esi + 4] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00782030 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0078607e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007820c0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00786090
extern "C" __declspec(naked) void asm_00786090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x1c }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007860de }
	__asm { lea ecx, [esi + 4] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_007820c0 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007860de: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007860f0
extern "C" __declspec(naked) void asm_007860f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c6e3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x20 }
	__asm { mov edi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0078616a }
	__asm { mov dword ptr [esi], 0xe4fa6c }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { lea ecx, [esi + 8] }
	__asm { push -1 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { push 0 }
	__asm { lea edx, [edi + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push edx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0078616a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00781790();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007861b0
extern "C" __declspec(naked) void asm_007861b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c6e3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0078620f }
	__asm { lea ecx, [edi + 4] }
	__asm { push ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe4fa3c }
	__asm { call fn_00781790 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0078620f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00784940();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00786370
extern "C" __declspec(naked) void asm_00786370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x3c }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007863be }
	__asm { lea ecx, [esi + 4] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00784940 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007863be: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007864d0
extern "C" __declspec(naked) void asm_007864d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c763 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x1c }
	__asm { mov edi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00786544 }
	__asm { lea ecx, [esi + 4] }
	__asm { push -1 }
	__asm { mov dword ptr [esi], 0xe4f908 }
	__asm { push 0 }
	__asm { lea edx, [edi + 4] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push edx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00786544: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0042e3d0();
extern "C" void fn_0077f7e0();
extern "C" void fn_0077fa90();
// FUNCTION: ROBLOXSTUDIO 0x00786ac0
extern "C" __declspec(naked) void asm_00786ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { push edi }
	__asm { mov esi, dword ptr [esi] }
	__asm { lea eax, [ecx + 4] }
	__asm { push ebx }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_0077f7e0 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { test edi, edi }
	__asm { js L_00786b07 }
	__asm { movzx eax, byte ptr [esi] }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { push eax }
	__asm { push 1 }
	__asm { call fn_0042e3d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00786b07: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push ebx }
	__asm { mov dword ptr [eax], esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add ecx, 0x14 }
	__asm { call fn_0077fa90 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00780260();
extern "C" void fn_00780350();
// FUNCTION: ROBLOXSTUDIO 0x00786b90
extern "C" __declspec(naked) void asm_00786b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea edi, [ecx + 4] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00780260 }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { test esi, esi }
	__asm { js L_00786bd4 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00780350 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { js L_00786bd4 }
	__asm { lea ecx, [eax + esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00786bd4: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0077f590();
extern "C" void fn_007809b0();
// FUNCTION: ROBLOXSTUDIO 0x00786bf0
extern "C" __declspec(naked) void asm_00786bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea edi, [ecx + 4] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_007809b0 }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { test esi, esi }
	__asm { js L_00786c34 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { call fn_0077f590 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { js L_00786c34 }
	__asm { lea ecx, [eax + esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00786c34: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e103c4[];
// FUNCTION: ROBLOXSTUDIO 0x00786d10
extern "C" __declspec(naked) void asm_00786d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi + 4], 0 }
	__asm { jne L_00786d3d }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_00786d33 }
	__asm { call dword ptr [g_00e103c4] }
	__asm { cmp eax, -1 }
	__asm { je L_00786d33 }
	__asm { mov byte ptr [edi + 5], al }
	__asm { jmp L_00786d39 }
	__asm { L_00786d33: }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_00786d39: }
	__asm { mov byte ptr [edi + 4], 1 }
	__asm { L_00786d3d: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [esi + 4], 0 }
	__asm { jne L_00786d66 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_00786d5c }
	__asm { call dword ptr [g_00e103c4] }
	__asm { cmp eax, -1 }
	__asm { je L_00786d5c }
	__asm { mov byte ptr [esi + 5], al }
	__asm { jmp L_00786d62 }
	__asm { L_00786d5c: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00786d62: }
	__asm { mov byte ptr [esi + 4], 1 }
	__asm { L_00786d66: }
	__asm { cmp dword ptr [edi], 0 }
	__asm { jne L_00786d78 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00786d7d }
	__asm { L_00786d70: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00786d78: }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00786d70 }
	__asm { L_00786d7d: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10398[];
extern "C" char g_00e1039c[];
extern "C" char g_00e1044c[];
extern "C" char g_00e10454[];
extern "C" char g_00e10464[];
extern "C" char g_00e10468[];
extern "C" char g_00e10470[];
// FUNCTION: ROBLOXSTUDIO 0x00786d90
extern "C" __declspec(naked) void asm_00786d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10468] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, esi }
	__asm { call dword ptr [g_00e1039c] }
	__asm { test al, al }
	__asm { je L_00786de1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push 0 }
	__asm { add ecx, esi }
	__asm { call dword ptr [g_00e10398] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0x4000 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, esi }
	__asm { call dword ptr [g_00e10454] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10468] }
	__asm { L_00786de1: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, esi }
	__asm { call dword ptr [g_00e1044c] }
	__asm { test al, al }
	__asm { jne L_00786e00 }
	__asm { push dword ptr [g_00e10470] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10464] }
	__asm { L_00786e00: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007876c0();
// FUNCTION: ROBLOXSTUDIO 0x00787350
extern "C" __declspec(naked) void asm_00787350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { jne L_0078737f }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { cmp esi, edx }
	__asm { jne L_00787375 }
	__asm { mov eax, dword ptr [edx] }
	__asm { and eax, 1 }
	__asm { or eax, ecx }
	__asm { mov dword ptr [edx], eax }
	__asm { jmp L_00787387 }
	__asm { L_00787375: }
	__asm { cmp esi, dword ptr [edx + 4] }
	__asm { jne L_0078738a }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { jmp L_0078738a }
	__asm { L_0078737f: }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { cmp esi, dword ptr [edx + 8] }
	__asm { jne L_0078738a }
	__asm { L_00787387: }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { L_0078738a: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { and eax, 1 }
	__asm { or eax, esi }
	__asm { push edx }
	__asm { mov dword ptr [ecx], eax }
	__asm { push ecx }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { call fn_007876c0 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00788480
extern "C" __declspec(naked) void asm_00788480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c9b0 }
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
	__asm { je L_007884d8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe51770 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007884da }
	__asm { L_007884d8: }
	__asm { xor eax, eax }
	__asm { L_007884da: }
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

extern "C" char g_012e0ac4[];
extern "C" char g_012e4c18[];
extern "C" void fn_004118e0();
extern "C" void fn_007af830();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00788510
extern "C" __declspec(naked) void asm_00788510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c9d6 }
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
	__asm { mov dword ptr [esi], 0xe4fd94 }
	__asm { mov dword ptr [esi + 4], 0xe4fe0c }
	__asm { mov dword ptr [esi + 0x18], 0xe4fe14 }
	__asm { mov dword ptr [esi + 0x1c], 0xe4fe20 }
	__asm { mov eax, dword ptr [g_012e0ac4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_007885aa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0ac4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe4faf0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e0998 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1b40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007885aa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e0998 }
	__asm { inc dword ptr [g_012e4c18] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0040c260();
// FUNCTION: ROBLOXSTUDIO 0x007885d0
extern "C" __declspec(naked) void asm_007885d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00788620 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0078860d }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_0078860d: }
	__asm { mov eax, 0xe51784 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00788620: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00789cb0
extern "C" __declspec(naked) void asm_00789cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jne L_00789cf7 }
	__asm { push 0xc }
	__asm { mov word ptr [esi + 8], 0 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_00789cdb }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00789cdb: }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov byte ptr [esi + 8], 1 }
	__asm { jmp L_00789d01 }
	__asm { L_00789cf7: }
	__asm { cmp byte ptr [esi + 9], 0 }
	__asm { je L_00789d01 }
	__asm { mov byte ptr [esi + 9], 0 }
	__asm { L_00789d01: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00789d11 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00789d11: }
	__asm { mov byte ptr [esi + 9], 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_00487530();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00789df0
extern "C" __declspec(naked) void asm_00789df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00789e41 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00789e10 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00789e12 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00789e12 }
	__asm { L_00789e10: }
	__asm { mov eax, ecx }
	__asm { L_00789e12: }
	__asm { test eax, eax }
	__asm { je L_00789e41 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00789e41 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00789e41 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00789e41 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00487530 }
	__asm { L_00789e41: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00788480();
extern "C" void fn_0078b000();
extern "C" void fn_007de8e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00789e50
extern "C" __declspec(naked) void asm_00789e50()
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
	__asm { push 0x88 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00789e9e }
	__asm { mov ecx, eax }
	__asm { call fn_0078b000 }
	__asm { mov esi, eax }
	__asm { jmp L_00789ea0 }
	__asm { L_00789e9e: }
	__asm { xor esi, esi }
	__asm { L_00789ea0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00788480 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00789ed1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00789ed1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00789ed1: }
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
extern "C" void fn_004876e0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00789ef0
extern "C" __declspec(naked) void asm_00789ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00789f41 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00789f10 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00789f12 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00789f12 }
	__asm { L_00789f10: }
	__asm { mov eax, ecx }
	__asm { L_00789f12: }
	__asm { test eax, eax }
	__asm { je L_00789f41 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00789f41 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00789f41 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00789f41 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_004876e0 }
	__asm { L_00789f41: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403110();
// FUNCTION: ROBLOXSTUDIO 0x0078b2f0
extern "C" __declspec(naked) void asm_0078b2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_0078b323 }
	__asm { sub eax, 4 }
	__asm { L_0078b323: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x34], 0xf }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov byte ptr [esi + 0x20], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0078c4e0
extern "C" __declspec(naked) void asm_0078c4e0()
{
	__asm { L_0078c4e0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov ebx, ecx }
	__asm { mov edi, esi }
	__asm { jne L_0078c523 }
	__asm { L_0078c4f3: }
	__asm { push dword ptr [edi + 8] }
	__asm { mov ecx, ebx }
	__asm { call L_0078c4e0 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov edi, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_0078c512 }
	__asm { lea eax, [esi + 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0078c512: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { mov esi, edi }
	__asm { je L_0078c4f3 }
	__asm { L_0078c523: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0078bea0();
// FUNCTION: ROBLOXSTUDIO 0x0078cb80
extern "C" __declspec(naked) void asm_0078cb80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { add ecx, 0x18 }
	__asm { call fn_0078bea0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { lea edi, [esi + 8] }
	__asm { lea esi, [eax + 4] }
	__asm { mov dword ptr [eax], ecx }
	__asm { cmp edi, esi }
	__asm { je L_0078cbd2 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_0078cbb8 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0078cbb8: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_0078cbd2 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi], eax }
	__asm { L_0078cbd2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e5621c[];
extern "C" char g_012e0d24[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0078daf0
extern "C" __declspec(naked) void asm_0078daf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f5e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e0d24] }
	__asm { test al, 1 }
	__asm { jne L_0078db5c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0d24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x19 }
	__asm { push dword ptr [g_00e5621c] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e0bf8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1b30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0078db5c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e0bf8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0ac4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0078db70
extern "C" __declspec(naked) void asm_0078db70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d05e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e0ac4] }
	__asm { test al, 1 }
	__asm { jne L_0078dbdb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0ac4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe4faf0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e0998 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1b40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0078dbdb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e0998 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78a94[];
extern "C" char g_012e0bf4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0078dbf0
extern "C" __declspec(naked) void asm_0078dbf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d07e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e0bf4] }
	__asm { test al, 1 }
	__asm { jne L_0078dc5c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0bf4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e78a94] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e0ac8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1b50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0078dc5c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e0ac8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0078e1a0
extern "C" __declspec(naked) void asm_0078e1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_0078e1b6: }
	__asm { mov edi, dword ptr [ebx] }
	__asm { test edi, edi }
	__asm { je L_0078e1c1 }
	__asm { add edi, -0x14 }
	__asm { jmp L_0078e1c3 }
	__asm { L_0078e1c1: }
	__asm { xor edi, edi }
	__asm { L_0078e1c3: }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [ebx], eax }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { je L_0078e1f7 }
	__asm { lea ecx, [edi + 8] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { L_0078e1f7: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { dec dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { inc eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp dword ptr [ebx], ecx }
	__asm { jne L_0078e1b6 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}
