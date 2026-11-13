// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_0078ba60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0078e220
extern "C" __declspec(naked) void asm_0078e220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { xor edi, edi }
	__asm { L_0078e231: }
	__asm { test eax, eax }
	__asm { je L_0078e23a }
	__asm { lea esi, [eax - 0x40] }
	__asm { jmp L_0078e23c }
	__asm { L_0078e23a: }
	__asm { xor esi, esi }
	__asm { L_0078e23c: }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebx], eax }
	__asm { call fn_0078ba60 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [ecx + 8] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { inc edi }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_0078e231 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0078dc70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0078e7b0
extern "C" __declspec(naked) void asm_0078e7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp edx, dword ptr [ecx] }
	__asm { jne L_0078e7d9 }
	__asm { cmp eax, ecx }
	__asm { jne L_0078e7d9 }
	__asm { mov ecx, edi }
	__asm { call fn_0078dc70 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0078e7d9: }
	__asm { cmp edx, eax }
	__asm { je L_0078e80c }
	__asm { push esi }
	__asm { mov edi, edi }
	__asm { L_0078e7e0: }
	__asm { mov esi, dword ptr [edx] }
	__asm { cmp edx, dword ptr [edi] }
	__asm { je L_0078e802 }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { push edx }
	__asm { mov dword ptr [eax], esi }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [edi + 4] }
	__asm { L_0078e802: }
	__asm { mov edx, esi }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { cmp esi, eax }
	__asm { jne L_0078e7e0 }
	__asm { pop esi }
	__asm { L_0078e80c: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0078ecb0
extern "C" __declspec(naked) void asm_0078ecb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { cmp byte ptr [edx + 0x91], 0 }
	__asm { jne L_0078ecc4 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0078ecc4: }
	__asm { mov eax, dword ptr [edx + 0x84] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { xor ecx, ecx }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { jle L_0078ece3 }
	__asm { mov edi, dword ptr [edx + 0x7c] }
	__asm { L_0078ecd8: }
	__asm { cmp eax, edi }
	__asm { je L_0078ece8 }
	__asm { mov eax, dword ptr [eax] }
	__asm { inc ecx }
	__asm { cmp ecx, esi }
	__asm { jl L_0078ecd8 }
	__asm { L_0078ece3: }
	__asm { cmp eax, dword ptr [edx + 0x7c] }
	__asm { jne L_0078ecf0 }
	__asm { L_0078ece8: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0078ecf0: }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add eax, 0x20 }
	__asm { cmp ecx, eax }
	__asm { je L_0078ed07 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_0078ed07: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0078eff0
extern "C" __declspec(naked) void asm_0078eff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { je L_0078f00f }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { test eax, eax }
	__asm { je L_0078f00f }
	__asm { add eax, -0x40 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jmp L_0078f016 }
	__asm { L_0078f00f: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_0078f016: }
	__asm { lea eax, [ebp - 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0078f032 }
	__asm { nop }
	__asm { L_0078f020: }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { jne L_0078f038 }
	__asm { mov eax, dword ptr [eax + 0x40] }
	__asm { test eax, eax }
	__asm { je L_0078f032 }
	__asm { add eax, -0x40 }
	__asm { jne L_0078f020 }
	__asm { L_0078f032: }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0078f038: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0078f140
extern "C" __declspec(naked) void asm_0078f140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_0078f188 }
	__asm { cmp eax, 1 }
	__asm { je L_0078f188 }
	__asm { cmp eax, 2 }
	__asm { je L_0078f1a8 }
	__asm { cmp eax, 3 }
	__asm { jne L_0078f177 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11e57d8 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0078f177: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11e57d8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0078f188: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_0078f1a8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { L_0078f1a8: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0078f1b0
extern "C" __declspec(naked) void asm_0078f1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_0078f1f8 }
	__asm { cmp eax, 1 }
	__asm { je L_0078f1f8 }
	__asm { cmp eax, 2 }
	__asm { je L_0078f20c }
	__asm { cmp eax, 3 }
	__asm { jne L_0078f1e7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11e5870 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0078f1e7: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11e5870 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0078f1f8: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_0078f20c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_0078f20c: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007915d0();
// FUNCTION: ROBLOXSTUDIO 0x0078f7f0
extern "C" __declspec(naked) void asm_0078f7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ecx + 0x91], 0 }
	__asm { je L_0078f80f }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub eax, 0 }
	__asm { je L_0078f80a }
	__asm { dec eax }
	__asm { je L_0078f813 }
	__asm { dec eax }
	__asm { jne L_0078f80f }
	__asm { L_0078f80a: }
	__asm { call fn_007915d0 }
	__asm { L_0078f80f: }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0078f813: }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0078f80f }
	__asm { mov edx, dword ptr [ecx + 0x88] }
	__asm { mov dword ptr [ecx + 0x8c], edx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0078f80f }
	__asm { cmp edx, dword ptr [ecx + 0x7c] }
	__asm { jne L_0078f80f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0078f85a }
	__asm { push 0x5e6 }
	__asm { push 0xe503b0 }
	__asm { push 0xe5086c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0078f80f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0078f85a: }
	__asm { movzx eax, al }
	__asm { push 0xe51280 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009b53d0();
// FUNCTION: ROBLOXSTUDIO 0x00790830
extern "C" __declspec(naked) void asm_00790830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_009b53d0 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_00790891 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_00790850: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_0079085b }
	__asm { add esi, -0x40 }
	__asm { jmp L_0079085d }
	__asm { L_0079085b: }
	__asm { xor esi, esi }
	__asm { L_0079085d: }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_00790878 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x40] }
	__asm { jmp L_0079088a }
	__asm { L_00790878: }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { lea edx, [esi + 0x40] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_0079088a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00790850 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00790891: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e0d38[];
extern "C" char g_012e0d3c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007910a0
extern "C" __declspec(naked) void asm_007910a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1d1ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e0d3c] }
	__asm { test al, 1 }
	__asm { jne L_00791113 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0d3c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007910fe }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012e0d38], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007910fe: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012e0d38], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00791113: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012e0d38] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00792b60();
extern "C" void fn_008b8590();
// FUNCTION: ROBLOXSTUDIO 0x00792e10
extern "C" __declspec(naked) void asm_00792e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp eax, 5 }
	__asm { jne L_00792e2d }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00792e2d: }
	__asm { push edi }
	__asm { cmp eax, 2 }
	__asm { jne L_00792e61 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_008b8590 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00792e61 }
	__asm { mov ecx, esi }
	__asm { call fn_00792b60 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], 5 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00792e61: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00792b60();
extern "C" void fn_008b85e0();
// FUNCTION: ROBLOXSTUDIO 0x00792e70
extern "C" __declspec(naked) void asm_00792e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp eax, 6 }
	__asm { jne L_00792e8d }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00792e8d: }
	__asm { push edi }
	__asm { cmp eax, 2 }
	__asm { jne L_00792ec1 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_008b85e0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00792ec1 }
	__asm { mov ecx, esi }
	__asm { call fn_00792b60 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], 6 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00792ec1: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00792b60();
extern "C" void fn_008b87e0();
// FUNCTION: ROBLOXSTUDIO 0x00792f70
extern "C" __declspec(naked) void asm_00792f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cmp eax, 9 }
	__asm { jne L_00792f8d }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld qword ptr [edi + 8] }
	__asm { pop edi }
	__asm { fstp qword ptr [eax] }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00792f8d: }
	__asm { push esi }
	__asm { cmp eax, 7 }
	__asm { jne L_00792f9d }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { fld dword ptr [edi + 8] }
	__asm { fstp qword ptr [esi] }
	__asm { jmp L_00792fb7 }
	__asm { L_00792f9d: }
	__asm { cmp eax, 2 }
	__asm { jne L_00792fd0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_008b87e0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00792fd0 }
	__asm { mov ecx, edi }
	__asm { L_00792fb7: }
	__asm { call fn_00792b60 }
	__asm { fld qword ptr [esi] }
	__asm { pop esi }
	__asm { fstp qword ptr [edi + 8] }
	__asm { mov dword ptr [edi + 4], 9 }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00792fd0: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00792b60();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00792fe0
extern "C" __declspec(naked) void asm_00792fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cmp eax, 1 }
	__asm { jne L_00793000 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00793000: }
	__asm { cmp eax, 2 }
	__asm { jne L_00793042 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00793010 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00793010: }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00792b60 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { pop esi }
	__asm { mov dword ptr [edi + 4], 1 }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00793042: }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00792b60();
extern "C" void fn_008b8900();
// FUNCTION: ROBLOXSTUDIO 0x00793380
extern "C" __declspec(naked) void asm_00793380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp eax, 4 }
	__asm { jne L_0079339d }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov cl, byte ptr [esi + 8] }
	__asm { mov byte ptr [eax], cl }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0079339d: }
	__asm { push edi }
	__asm { cmp eax, 2 }
	__asm { jne L_007933d1 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_008b8900 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007933d1 }
	__asm { mov ecx, esi }
	__asm { call fn_00792b60 }
	__asm { mov al, byte ptr [edi] }
	__asm { mov byte ptr [esi + 8], al }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], 4 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007933d1: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402fd0();
// FUNCTION: ROBLOXSTUDIO 0x007933e0
extern "C" __declspec(naked) void asm_007933e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { dec eax }
	__asm { je L_0079341d }
	__asm { dec eax }
	__asm { je L_007933f4 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007933f4: }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { jb L_00793405 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_00793405: }
	__asm { push edx }
	__asm { push ecx }
	__asm { push dword ptr [eax + 0x14] }
	__asm { lea ecx, [eax + 4] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { inc eax }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0079341d: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { cmp ecx, dword ptr [edx + 8] }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e0d60[];
extern "C" void fn_00792b60();
extern "C" void fn_008b8900();
// FUNCTION: ROBLOXSTUDIO 0x00793430
extern "C" __declspec(naked) void asm_00793430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_0079344d }
	__asm { mov ecx, dword ptr [g_012e0d60] }
	__asm { L_00793442: }
	__asm { cmp dword ptr [eax + 8], ecx }
	__asm { je L_00793454 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { jne L_00793442 }
	__asm { L_0079344d: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00793454: }
	__asm { lea esi, [eax + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp eax, 4 }
	__asm { jne L_00793464 }
	__asm { mov al, byte ptr [esi + 8] }
	__asm { jmp L_00793493 }
	__asm { L_00793464: }
	__asm { cmp eax, 2 }
	__asm { jne L_0079344d }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_008b8900 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0079344d }
	__asm { mov ecx, esi }
	__asm { call fn_00792b60 }
	__asm { mov al, byte ptr [ebp - 1] }
	__asm { mov byte ptr [esi + 8], al }
	__asm { mov dword ptr [esi + 4], 4 }
	__asm { mov al, byte ptr [ebp - 1] }
	__asm { L_00793493: }
	__asm { test al, al }
	__asm { je L_0079344d }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131b4bc[];
extern "C" void fn_00407e90();
// FUNCTION: ROBLOXSTUDIO 0x007936a0
extern "C" __declspec(naked) void asm_007936a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3366b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 1 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { cmp byte ptr [g_0131b4bc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00793719 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 8], 0x131b6d0 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 8], 0x48acf0 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0131b4bc], 1 }
	__asm { L_00793719: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004831d0();
extern "C" void fn_007936a0();
// FUNCTION: ROBLOXSTUDIO 0x00793830
extern "C" __declspec(naked) void asm_00793830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d34b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x18 }
	__asm { mov esi, ecx }
	__asm { call fn_004831d0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00793873 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007936a0 }
	__asm { jmp L_00793875 }
	__asm { L_00793873: }
	__asm { xor eax, eax }
	__asm { L_00793875: }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { test ecx, ecx }
	__asm { jne L_00793893 }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00793893: }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e0e40[];
extern "C" char g_012e0e5c[];
extern "C" void fn_00793730();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00793960
extern "C" __declspec(naked) void asm_00793960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1d36e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e0e5c] }
	__asm { test al, 1 }
	__asm { jne L_007939b8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0e5c], eax }
	__asm { push 0 }
	__asm { push 0x1022668 }
	__asm { mov ecx, 0x12e0e40 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00793730 }
	__asm { push 0xde2070 }
	__asm { mov dword ptr [g_012e0e40], 0xe51d54 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007939b8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e0e40 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0e3d[];
extern "C" void fn_00407e90();
// FUNCTION: ROBLOXSTUDIO 0x00793ee0
extern "C" __declspec(naked) void asm_00793ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3368b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { cmp byte ptr [g_012e0e3d], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00793f61 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 8], 0x131b6d8 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 8], 0x794be0 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_012e0e3d], 1 }
	__asm { L_00793f61: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e0e60[];
extern "C" char g_012e0e64[];
extern "C" char g_012e0e68[];
extern "C" void fn_008b19b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00794500
extern "C" __declspec(naked) void asm_00794500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1d41e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e0e68] }
	__asm { test al, 1 }
	__asm { jne L_00794560 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0e68], eax }
	__asm { mov ecx, 0x12e0e60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e0e60], 0 }
	__asm { mov dword ptr [g_012e0e64], 0 }
	__asm { call fn_008b19b0 }
	__asm { push 0xde1e70 }
	__asm { mov dword ptr [g_012e0e60], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00794560: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e0e60 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0ea0[];
extern "C" char g_012e0ea4[];
extern "C" char g_012e0ea8[];
extern "C" char g_012e0eac[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00794a20
extern "C" __declspec(naked) void asm_00794a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { shr esi, 3 }
	__asm { add esi, dword ptr [ecx] }
	__asm { mov edx, eax }
	__asm { mov ecx, esi }
	__asm { shl ecx, 6 }
	__asm { add ecx, eax }
	__asm { mov eax, esi }
	__asm { shr eax, 2 }
	__asm { shr edx, 3 }
	__asm { add ecx, edx }
	__asm { add eax, 0x9e3779b9 }
	__asm { add eax, ecx }
	__asm { xor eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [g_012e0eac] }
	__asm { test al, 1 }
	__asm { jne L_00794a8a }
	__asm { or eax, 1 }
	__asm { push 0xde1f80 }
	__asm { mov dword ptr [g_012e0eac], eax }
	__asm { mov dword ptr [g_012e0ea0], 0 }
	__asm { mov dword ptr [g_012e0ea4], 0 }
	__asm { mov dword ptr [g_012e0ea8], 0 }
	__asm { call fn_00cf6609 }
	__asm { pop ecx }
	__asm { L_00794a8a: }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00794af0
extern "C" __declspec(naked) void asm_00794af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00794b43 }
	__asm { test byte ptr [esi + 0x1c], 8 }
	__asm { je L_00794b43 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00794b43 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00794b2e }
	__asm { push 0x5e }
	__asm { push 0xe4fb58 }
	__asm { push 0xe51cb0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00794b43 }
	__asm { L_00794b2e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51cd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00794b43: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { shr eax, 3 }
	__asm { test al, 1 }
	__asm { je L_00794b5d }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { L_00794b5d: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00795ab0
extern "C" __declspec(naked) void asm_00795ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d5d0 }
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
	__asm { je L_00795b08 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe54a40 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00795b0a }
	__asm { L_00795b08: }
	__asm { xor eax, eax }
	__asm { L_00795b0a: }
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

extern "C" void fn_00403540();
extern "C" void fn_00799920();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00796790
extern "C" __declspec(naked) void asm_00796790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d638 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x24 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { call fn_00799920 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_0079680b }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0079680b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00403540();
extern "C" void fn_00796790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00796820
extern "C" __declspec(naked) void asm_00796820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d638 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x24 }
	__asm { mov edx, esp }
	__asm { push -1 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { call fn_00796790 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00796897 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00796897: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00403160();
extern "C" void fn_0041fe80();
extern "C" void fn_00795930();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00796980
extern "C" __declspec(naked) void asm_00796980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1d678 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sub esp, 0x10 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [edi], esi }
	__asm { push esi }
	__asm { lea ecx, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { call fn_00795930 }
	__asm { push esi }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00403160 }
	__asm { add esp, 0xc }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_007969fd }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { je L_007969fd }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_007969fd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00795d00();
extern "C" void fn_007a10c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00797d00
extern "C" __declspec(naked) void asm_00797d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d7b1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_007a10c0 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00797d53 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00795d00 }
	__asm { L_00797d53: }
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

extern "C" void fn_007a1080();
extern "C" void fn_008c00e0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00797d80
extern "C" __declspec(naked) void asm_00797d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d7d1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007a1080 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00797dd1 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_008c00e0 }
	__asm { L_00797dd1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x00798c20
extern "C" __declspec(naked) void asm_00798c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00798c49 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00798c4e }
	__asm { L_00798c49: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00798c4e: }
	__asm { cmp ecx, 0x11e66c8 }
	__asm { je L_00798c97 }
	__asm { test eax, eax }
	__asm { je L_00798c5e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00798c63 }
	__asm { L_00798c5e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00798c63: }
	__asm { push 0x11e66c8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00798c97 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00798c97: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e18b0[];
extern "C" char g_012e18b4[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0079a020
extern "C" __declspec(naked) void asm_0079a020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1d9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e18b4] }
	__asm { test al, 1 }
	__asm { jne L_0079a062 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e18b4], eax }
	__asm { push 0xe52210 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e18b0], eax }
	__asm { L_0079a062: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00795ab0();
extern "C" void fn_0079ea70();
extern "C" void fn_007de8e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0079a6d0
extern "C" __declspec(naked) void asm_0079a6d0()
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
	__asm { push 0xc8 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0079a71e }
	__asm { mov ecx, eax }
	__asm { call fn_0079ea70 }
	__asm { mov esi, eax }
	__asm { jmp L_0079a720 }
	__asm { L_0079a71e: }
	__asm { xor esi, esi }
	__asm { L_0079a720: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00795ab0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0079a751 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0079a751 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_0079a751: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4e58[];
extern "C" char g_0131de68[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0079d900
extern "C" __declspec(naked) void asm_0079d900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1de96 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe526ec }
	__asm { mov dword ptr [esi + 4], 0xe52764 }
	__asm { mov dword ptr [esi + 0x18], 0xe5276c }
	__asm { mov dword ptr [esi + 0x1c], 0xe52778 }
	__asm { mov eax, dword ptr [g_0131de68] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0079d999 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131de68], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5223c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131de70 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc690 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0079d999: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131de70 }
	__asm { inc dword ptr [g_012e4e58] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1864[];
extern "C" char g_012e4e50[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0079d9c0
extern "C" __declspec(naked) void asm_0079d9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1deb6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe5245c }
	__asm { mov dword ptr [esi + 4], 0xe524d4 }
	__asm { mov dword ptr [esi + 0x18], 0xe524dc }
	__asm { mov dword ptr [esi + 0x1c], 0xe524e8 }
	__asm { mov eax, dword ptr [g_012e1864] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0079da59 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e1864], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5221c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e1738 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde22e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0079da59: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e1738 }
	__asm { inc dword ptr [g_012e4e50] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1864[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0079dcf0
extern "C" __declspec(naked) void asm_0079dcf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1dece }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e1864] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0079dd65 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e1864], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5221c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e1738 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde22e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0079dd65: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12e1738 }
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

extern "C" char g_0131b144[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0079dda0
extern "C" __declspec(naked) void asm_0079dda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1deee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131b144] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0079de15 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b144], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5222c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131b018 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc640 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0079de15: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x131b018 }
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

extern "C" void fn_006b97e0();
// FUNCTION: ROBLOXSTUDIO 0x0079f230
extern "C" __declspec(naked) void asm_0079f230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e248 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0079f268 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_0079f268: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006b97e0();
extern "C" void fn_006bc950();
extern "C" void fn_008bfe40();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0079f280
extern "C" __declspec(naked) void asm_0079f280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e273 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x12e171c }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_006bc950 }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_0079f2d3 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call fn_008bfe40 }
	__asm { jmp L_0079f2d5 }
	__asm { L_0079f2d3: }
	__asm { xor eax, eax }
	__asm { L_0079f2d5: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { test eax, eax }
	__asm { je L_0079f2e8 }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { call fn_006b97e0 }
	__asm { L_0079f2e8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0041eaa0();
extern "C" void fn_00421370();
// FUNCTION: ROBLOXSTUDIO 0x007a0d20
extern "C" __declspec(naked) void asm_007a0d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c2f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007a0d6d }
	__asm { test al, 1 }
	__asm { jne L_007a0d66 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_007a0d66 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007a0d66: }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_007a0d6d: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0041eaa0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_007a0d8a }
	__asm { push esi }
	__asm { call fn_00421370 }
	__asm { add esp, 4 }
	__asm { L_007a0d8a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007a3000();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007a0df0
extern "C" __declspec(naked) void asm_007a0df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5efb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { cmp byte ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_007a0e41 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { call fn_007a3000 }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [edi + 0x10], 0 }
	__asm { pop esi }
	__asm { L_007a0e41: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe18248 }
	__asm { je L_007a0e56 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007a0e56: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_0041fe80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007a0e70
extern "C" __declspec(naked) void asm_007a0e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e608 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_007a0ee5 }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { push edi }
	__asm { je L_007a0ee0 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x18] }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { L_007a0ee0: }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { pop edi }
	__asm { L_007a0ee5: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0xe18248 }
	__asm { je L_007a0efa }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007a0efa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007a0fa0
extern "C" __declspec(naked) void asm_007a0fa0()
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
	__asm { jne L_007a0fc8 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a0fc8: }
	__asm { cmp eax, 0x3c3c3c3 }
	__asm { jbe L_007a0fda }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_007a0fda: }
	__asm { push edi }
	__asm { mov edi, eax }
	__asm { shl edi, 4 }
	__asm { add edi, eax }
	__asm { shl edi, 2 }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007a1004 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a1004: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007a1100
extern "C" __declspec(naked) void asm_007a1100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd12008 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea esi, [edi + 0x10] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007a113d }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007a113d: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_007a114d }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007a114d: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_0043e3c0();
extern "C" void fn_007a1230();
// FUNCTION: ROBLOXSTUDIO 0x007a1350
extern "C" __declspec(naked) void asm_007a1350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, 0x88888889 }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { sub esi, ebx }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sar edx, 6 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { cmp ecx, esi }
	__asm { jae L_007a13b8 }
	__asm { sub ebx, dword ptr [edi] }
	__asm { mov eax, 0x88888889 }
	__asm { imul ebx }
	__asm { add edx, ebx }
	__asm { sar edx, 6 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mov eax, 0x2222222 }
	__asm { sub eax, ecx }
	__asm { cmp eax, esi }
	__asm { jae L_007a13a5 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_007a13a5: }
	__asm { lea eax, [ecx + esi] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0043e3c0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_007a1230 }
	__asm { L_007a13b8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_0079a770();
extern "C" void fn_007b5ea0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007a1810
extern "C" __declspec(naked) void asm_007a1810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e8a1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
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
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_0079a770 }
	__asm { add esp, 0x1c }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_007b5ea0 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_007a188e }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007a188e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00439ec0();
extern "C" void fn_0043c990();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x007a19e0
extern "C" __declspec(naked) void asm_007a19e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_007a1a33 }
	__asm { add edi, 0x1c }
	__asm { je L_007a1a14 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00439ec0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_007a1a14 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_007a1a14 }
	__asm { L_007a1a0c: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a1a14: }
	__asm { test edi, edi }
	__asm { je L_007a1a33 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043c990 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_007a1a33 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_007a1a0c }
	__asm { L_007a1a33: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x007a1df0
extern "C" __declspec(naked) void asm_007a1df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd40368 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { sub esp, 0x10 }
	__asm { test edx, edx }
	__asm { jne L_007a1e3d }
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
	__asm { L_007a1e3d: }
	__asm { lea eax, [ecx + 0x18] }
	__asm { and edx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1864[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007a1ff0
extern "C" __declspec(naked) void asm_007a1ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1dece }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e1864] }
	__asm { test al, 1 }
	__asm { jne L_007a205b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e1864], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5221c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e1738 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde22e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007a205b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e1738 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35b70();
extern "C" void fn_00a35d10();
extern "C" void fn_00a455d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007a2a10
extern "C" __declspec(naked) void asm_007a2a10()
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
	__asm { mov edi, dword ptr [ebp + 0x24] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a455d0 }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { jne L_007a2a4b }
	__asm { xor bl, bl }
	__asm { jmp L_007a2a70 }
	__asm { L_007a2a4b: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { lea eax, [ebp + 8] }
	__asm { cmovae eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push 0xffffd8ee }
	__asm { push edi }
	__asm { call fn_00a35b70 }
	__asm { neg esi }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x14 }
	__asm { mov bl, 1 }
	__asm { L_007a2a70: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_007a2a81 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007a2a81: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6f2b0();
// FUNCTION: ROBLOXSTUDIO 0x007a3a80
extern "C" __declspec(naked) void asm_007a3a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ecx + 0x70], 0 }
	__asm { je L_007a3ac8 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { test edx, edx }
	__asm { je L_007a3ac8 }
	__asm { movzx eax, byte ptr [ecx + 0x68] }
	__asm { add ecx, 0x68 }
	__asm { inc eax }
	__asm { add eax, ecx }
	__asm { je L_007a3aa0 }
	__asm { inc eax }
	__asm { jmp L_007a3aa2 }
	__asm { L_007a3aa0: }
	__asm { xor eax, eax }
	__asm { L_007a3aa2: }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov eax, edx }
	__asm { shr eax, 3 }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00c6f2b0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { test eax, eax }
	__asm { je L_007a3ac8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a3ac8: }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e18b0[];
extern "C" char g_012e18b4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x007a3d90
extern "C" __declspec(naked) void asm_007a3d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1d9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x79a020 }
	__asm { push 0x12e1868 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012e18b4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007a3df2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e18b4], eax }
	__asm { push 0xe52210 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e18b0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007a3df2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012e18b0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040c260();
extern "C" void fn_0079c0d0();
// FUNCTION: ROBLOXSTUDIO 0x007a3fb0
extern "C" __declspec(naked) void asm_007a3fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { sub esp, 0x20 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov esi, esp }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0x7a8820 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_007a4007 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_007a3ffb }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_007a3ffb: }
	__asm { mov eax, 0xe54adc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_007a400d }
	__asm { L_007a4007: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007a400d: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0079c0d0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0040c260();
extern "C" void fn_0079c0d0();
// FUNCTION: ROBLOXSTUDIO 0x007a4500
extern "C" __declspec(naked) void asm_007a4500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { sub esp, 0x20 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov esi, esp }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0x7a8b10 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_007a4557 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_007a454b }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_007a454b: }
	__asm { mov eax, 0xe54ad4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_007a455d }
	__asm { L_007a4557: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007a455d: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0079c0d0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0040c260();
extern "C" void fn_0079c0d0();
// FUNCTION: ROBLOXSTUDIO 0x007a4fe0
extern "C" __declspec(naked) void asm_007a4fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { sub esp, 0x20 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov esi, esp }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0x7a90e0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_007a5037 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_007a502b }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_007a502b: }
	__asm { mov eax, 0xe54ad4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_007a503d }
	__asm { L_007a5037: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007a503d: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0079c0d0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a35060();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x007a5960
extern "C" __declspec(naked) void asm_007a5960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { cmp dword ptr [esi + 0x120], eax }
	__asm { je L_007a59ac }
	__asm { push 0x1032eb8 }
	__asm { push 0xffffd8ef }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x120], eax }
	__asm { call fn_00a35060 }
	__asm { push -1 }
	__asm { push edi }
	__asm { call fn_00a360a0 }
	__asm { push -2 }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x124], eax }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x1c }
	__asm { L_007a59ac: }
	__asm { mov ecx, dword ptr [esi + 0x11c] }
	__asm { xor eax, eax }
	__asm { cmp ecx, dword ptr [esi + 0x124] }
	__asm { pop edi }
	__asm { setne al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x007a62e0
extern "C" __declspec(naked) void asm_007a62e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_007a6342 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_007a62fc }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_007a62fc }
	__asm { xor edx, edx }
	__asm { jmp L_007a6301 }
	__asm { L_007a62fc: }
	__asm { mov edx, 1 }
	__asm { L_007a6301: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { setne al }
	__asm { cmp eax, edx }
	__asm { je L_007a6342 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007a6331 }
	__asm { push 0x58 }
	__asm { push 0xe53f10 }
	__asm { push 0xe54240 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007a6342 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_007a6331: }
	__asm { movzx eax, cl }
	__asm { push 0xe54280 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007a6342: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { setne al }
	__asm { ret }
}

extern "C" void fn_006b97e0();
extern "C" void fn_006bc950();
// FUNCTION: ROBLOXSTUDIO 0x007a6350
extern "C" __declspec(naked) void asm_007a6350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ed38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0x14] }
	__asm { push 0x12e171c }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_006bc950 }
	__asm { add esp, 4 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], edi }
	__asm { test edi, edi }
	__asm { je L_007a639b }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { L_007a639b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x007a6770
extern "C" __declspec(naked) void asm_007a6770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_007a67b8 }
	__asm { cmp eax, 1 }
	__asm { je L_007a67b8 }
	__asm { cmp eax, 2 }
	__asm { je L_007a67cc }
	__asm { cmp eax, 3 }
	__asm { jne L_007a67a7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11e6c40 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007a67a7: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11e6c40 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007a67b8: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_007a67cc }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_007a67cc: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x007a67d0
extern "C" __declspec(naked) void asm_007a67d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_007a6818 }
	__asm { cmp eax, 1 }
	__asm { je L_007a6818 }
	__asm { cmp eax, 2 }
	__asm { je L_007a682c }
	__asm { cmp eax, 3 }
	__asm { jne L_007a6807 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11e6df0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007a6807: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11e6df0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007a6818: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_007a682c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_007a682c: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b53d0();
// FUNCTION: ROBLOXSTUDIO 0x007a97c0
extern "C" __declspec(naked) void asm_007a97c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_009b53d0 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_007a9821 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_007a97e0: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_007a97eb }
	__asm { add esi, -0x4c }
	__asm { jmp L_007a97ed }
	__asm { L_007a97eb: }
	__asm { xor esi, esi }
	__asm { L_007a97ed: }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_007a9808 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x4c] }
	__asm { jmp L_007a981a }
	__asm { L_007a9808: }
	__asm { mov eax, dword ptr [esi + 0x4c] }
	__asm { lea edx, [esi + 0x4c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_007a981a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_007a97e0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_007a9821: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402ce0();
// FUNCTION: ROBLOXSTUDIO 0x007a9830
extern "C" __declspec(naked) void asm_007a9830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_00402ce0 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_007a9891 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_007a9850: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_007a985b }
	__asm { add esi, -8 }
	__asm { jmp L_007a985d }
	__asm { L_007a985b: }
	__asm { xor esi, esi }
	__asm { L_007a985d: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_007a9878 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { jmp L_007a988a }
	__asm { L_007a9878: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { lea edx, [esi + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_007a988a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_007a9850 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_007a9891: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007a97c0();
extern "C" void fn_009b53d0();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x007a9940
extern "C" __declspec(naked) void asm_007a9940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_007a9974 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c876a0 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [ebp + 8] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_009b53d0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a9974: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_007a99aa }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { cmp edx, ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_00c876a0 }
	__asm { pop edi }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_007a99aa }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007a97c0 }
	__asm { L_007a99aa: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402c40();
extern "C" void fn_00402ce0();
extern "C" void fn_007a9830();
// FUNCTION: ROBLOXSTUDIO 0x007a99c0
extern "C" __declspec(naked) void asm_007a99c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_007a99f4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00402c40 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [ebp + 8] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_00402ce0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a99f4: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_007a9a2a }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { cmp edx, ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_00402c40 }
	__asm { pop edi }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_007a9a2a }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007a9830 }
	__asm { L_007a9a2a: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e18a0[];
extern "C" char g_012e18a4[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007aa110
extern "C" __declspec(naked) void asm_007aa110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1f0ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e18a4] }
	__asm { test al, 1 }
	__asm { jne L_007aa183 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e18a4], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007aa16e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012e18a0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007aa16e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012e18a0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007aa183: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012e18a0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" void fn_00cf67ec();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x007aad40
extern "C" __declspec(naked) void asm_007aad40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_007aad6d }
	__asm { push 0 }
	__asm { push 0x12bdbf4 }
	__asm { push 0x12bc2e4 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { jne L_007aad6f }
	__asm { jmp L_007aad88 }
	__asm { L_007aad6d: }
	__asm { xor eax, eax }
	__asm { L_007aad6f: }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007aad88: }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { call dword ptr [g_00e10518] }
	__asm { push 0x1179e30 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" void fn_007a9b70();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007abca0
extern "C" __declspec(naked) void asm_007abca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0xb0], 0 }
	__asm { jne L_007abcbb }
	__asm { cmp dword ptr [esi + 0xb8], 0 }
	__asm { je L_007abd09 }
	__asm { L_007abcbb: }
	__asm { push 0xc }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007abcdc }
	__asm { mov dword ptr [eax], 0xe52b20 }
	__asm { mov byte ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { jmp L_007abcde }
	__asm { L_007abcdc: }
	__asm { xor eax, eax }
	__asm { L_007abcde: }
	__asm { mov ecx, dword ptr [esi + 0xa4] }
	__asm { mov dword ptr [esi + 0xa4], eax }
	__asm { test ecx, ecx }
	__asm { je L_007abcf4 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_007abcf4: }
	__asm { cmp byte ptr [esi + 0xbd], 0 }
	__asm { je L_007abd04 }
	__asm { mov ecx, esi }
	__asm { call fn_007a9b70 }
	__asm { L_007abd04: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007abd09: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe532c4 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" void fn_007a9b70();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007abdf0
extern "C" __declspec(naked) void asm_007abdf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0xb0], 0 }
	__asm { jne L_007abe0b }
	__asm { cmp dword ptr [esi + 0xb8], 0 }
	__asm { je L_007abe60 }
	__asm { L_007abe0b: }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007abe33 }
	__asm { mov dword ptr [eax], 0xe52b2c }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov byte ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { jmp L_007abe35 }
	__asm { L_007abe33: }
	__asm { xor eax, eax }
	__asm { L_007abe35: }
	__asm { mov ecx, dword ptr [esi + 0xa4] }
	__asm { mov dword ptr [esi + 0xa4], eax }
	__asm { test ecx, ecx }
	__asm { je L_007abe4b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_007abe4b: }
	__asm { cmp byte ptr [esi + 0xbd], 0 }
	__asm { je L_007abe5b }
	__asm { mov ecx, esi }
	__asm { call fn_007a9b70 }
	__asm { L_007abe5b: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007abe60: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe532c4 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" void fn_007a9b70();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007abf50
extern "C" __declspec(naked) void asm_007abf50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0xb0], 0 }
	__asm { jne L_007abf6b }
	__asm { cmp dword ptr [esi + 0xb8], 0 }
	__asm { je L_007abfc0 }
	__asm { L_007abf6b: }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007abf93 }
	__asm { mov dword ptr [eax], 0xe52c5c }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov byte ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { jmp L_007abf95 }
	__asm { L_007abf93: }
	__asm { xor eax, eax }
	__asm { L_007abf95: }
	__asm { mov ecx, dword ptr [esi + 0xa4] }
	__asm { mov dword ptr [esi + 0xa4], eax }
	__asm { test ecx, ecx }
	__asm { je L_007abfab }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_007abfab: }
	__asm { cmp byte ptr [esi + 0xbd], 0 }
	__asm { je L_007abfbb }
	__asm { mov ecx, esi }
	__asm { call fn_007a9b70 }
	__asm { L_007abfbb: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007abfc0: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe532c4 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00a45b00();
// FUNCTION: ROBLOXSTUDIO 0x007ac0b0
extern "C" __declspec(naked) void asm_007ac0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax + 0x48] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test eax, eax }
	__asm { je L_007ac109 }
	__asm { mov cl, byte ptr [eax + 8] }
	__asm { mov edi, 1 }
	__asm { shl edi, cl }
	__asm { test edi, edi }
	__asm { je L_007ac109 }
	__asm { mov ebx, edi }
	__asm { shl ebx, 5 }
	__asm { L_007ac0d6: }
	__asm { mov esi, dword ptr [eax + 0x14] }
	__asm { sub ebx, 0x20 }
	__asm { add esi, ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { dec edi }
	__asm { call fn_00a45b00 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_007ac0f5 }
	__asm { cmp dword ptr [esi + 0x18], 4 }
	__asm { je L_007ac0fe }
	__asm { L_007ac0f5: }
	__asm { test edi, edi }
	__asm { je L_007ac109 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { jmp L_007ac0d6 }
	__asm { L_007ac0fe: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add eax, 0x10 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007ac109: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008c0180();
extern "C" void fn_008c0570();
extern "C" void fn_008c0750();
// FUNCTION: ROBLOXSTUDIO 0x007ac260
extern "C" __declspec(naked) void asm_007ac260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push -1 }
	__asm { push 0xd2f1a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { test edx, edx }
	__asm { je L_007ac2d1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_007ac2d1 }
	__asm { mov ecx, dword ptr [eax + 0xb4] }
	__asm { push esi }
	__asm { lea esi, [eax + 0xa0] }
	__asm { test ecx, ecx }
	__asm { je L_007ac2a6 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 8], eax }
	__asm { sete al }
	__asm { test al, al }
	__asm { je L_007ac2d0 }
	__asm { L_007ac2a6: }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_008c0180 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008c0750 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c0570 }
	__asm { L_007ac2d0: }
	__asm { pop esi }
	__asm { L_007ac2d1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00439d00();
extern "C" void fn_007cd560();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007ac3b0
extern "C" __declspec(naked) void asm_007ac3b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_007ac3e0 }
	__asm { add edi, 0x1c }
	__asm { je L_007ac3e7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00439d00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007ac3e7 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_007ac3e7 }
	__asm { L_007ac3e0: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007ac3e7: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 8], 0xe53e90 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" void fn_00439d00();
extern "C" void fn_007cd560();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007ac420
extern "C" __declspec(naked) void asm_007ac420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_007ac450 }
	__asm { add edi, 0x1c }
	__asm { je L_007ac457 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00439d00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007ac457 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_007ac457 }
	__asm { L_007ac450: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007ac457: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 8], 0xe53ec0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" void fn_007a1ff0();
extern "C" void fn_007cd560();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007ac490
extern "C" __declspec(naked) void asm_007ac490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_007ac4c0 }
	__asm { add edi, 0x1c }
	__asm { je L_007ac4c7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_007a1ff0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007ac4c7 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_007ac4c7 }
	__asm { L_007ac4c0: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007ac4c7: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 8], 0xe53834 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007ad8e0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007ad010
extern "C" __declspec(naked) void asm_007ad010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f330 }
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
	__asm { je L_007ad068 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe560e0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007ad06a }
	__asm { L_007ad068: }
	__asm { xor eax, eax }
	__asm { L_007ad06a: }
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
	__asm { call fn_007ad8e0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007ad0a0
extern "C" __declspec(naked) void asm_007ad0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f340 }
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
	__asm { je L_007ad0f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe55004 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007ad0fa }
	__asm { L_007ad0f8: }
	__asm { xor eax, eax }
	__asm { L_007ad0fa: }
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
	__asm { je L_007ad11e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_007ad11e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012e2f58[];
extern "C" char g_012e2f5c[];
extern "C" char g_012e2f60[];
extern "C" char g_012e2f64[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007ad220
extern "C" __declspec(naked) void asm_007ad220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012e2f64] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007ad262 }
	__asm { or eax, 1 }
	__asm { push 0xde40e0 }
	__asm { mov dword ptr [g_012e2f64], eax }
	__asm { mov dword ptr [g_012e2f58], 0x11e6648 }
	__asm { mov dword ptr [g_012e2f60], 0x40d810 }
	__asm { mov dword ptr [g_012e2f5c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007ad262: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12e2f58 }
	__asm { jne L_007ad27b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007ad27b: }
	__asm { test ecx, ecx }
	__asm { je L_007ad291 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007ad291: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007ad29f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007ad29f: }
	__asm { mov dword ptr [esi], 0x12e2f58 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007ad560
extern "C" __declspec(naked) void asm_007ad560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007ad589 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007ad58e }
	__asm { L_007ad589: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007ad58e: }
	__asm { cmp ecx, 0x11e6648 }
	__asm { je L_007ad5d7 }
	__asm { test eax, eax }
	__asm { je L_007ad59e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007ad5a3 }
	__asm { L_007ad59e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007ad5a3: }
	__asm { push 0x11e6648 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007ad5d7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007ad5d7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e2f48[];
extern "C" char g_012e2f4c[];
extern "C" char g_012e2f68[];
extern "C" char g_012e2f6c[];
extern "C" void fn_007cb250();
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x007ad840
extern "C" __declspec(naked) void asm_007ad840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1f39e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e2f4c] }
	__asm { test al, 1 }
	__asm { jne L_007ad882 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2f4c], eax }
	__asm { push 0xea7fa4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e2f48], eax }
	__asm { L_007ad882: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1f3be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e2f6c] }
	__asm { test al, 1 }
	__asm { jne L_007ad8ca }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2f6c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012e2f68], eax }
	__asm { L_007ad8ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ea7fa4[];
extern "C" char g_012e2f48[];
extern "C" char g_012e2f4c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007adaa0
extern "C" __declspec(naked) void asm_007adaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1f39e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ea7fa4], 0 }
	__asm { jne L_007adad4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007adad4: }
	__asm { push 0x7ad840 }
	__asm { push 0x12e1fd0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012e2f4c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007adb1e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2f4c], eax }
	__asm { push 0xea7fa4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e2f48], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007adb1e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012e2f48] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007ade20();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x007adf70
extern "C" __declspec(naked) void asm_007adf70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_007adfc1 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_007adf90 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_007adf92 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_007adf92 }
	__asm { L_007adf90: }
	__asm { mov eax, ecx }
	__asm { L_007adf92: }
	__asm { test eax, eax }
	__asm { je L_007adfc1 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_007adfc1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007adfc1 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_007adfc1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_007ade20 }
	__asm { L_007adfc1: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007adfd0
extern "C" __declspec(naked) void asm_007adfd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_007adffe }
	__asm { nop }
	__asm { L_007adfe0: }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_007adfec }
	__asm { add eax, 0x1c }
	__asm { jmp L_007adfee }
	__asm { L_007adfec: }
	__asm { xor eax, eax }
	__asm { L_007adfee: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add ecx, dword ptr [ebp + 0x18] }
	__asm { push eax }
	__asm { call dword ptr [ebp + 0x14] }
	__asm { add esi, 4 }
	__asm { cmp esi, edi }
	__asm { jne L_007adfe0 }
	__asm { L_007adffe: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x20] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3fa4[];
extern "C" char g_012e4ae8[];
extern "C" char g_0131a2e8[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbce0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007aeac0
extern "C" __declspec(naked) void asm_007aeac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f429 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe54b88 }
	__asm { mov eax, dword ptr [g_0131a2e8] }
	__asm { mov byte ptr [g_012e3fa4], 1 }
	__asm { test al, 1 }
	__asm { jne L_007aeb2d }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2e8], eax }
	__asm { mov ecx, 0x131a2f0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007cbce0 }
	__asm { push 0xddc160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007aeb2d: }
	__asm { mov dword ptr [esi + 0xc], 0x131a2f0 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_004118e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { inc dword ptr [g_012e4ae8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
// FUNCTION: ROBLOXSTUDIO 0x007afb50
extern "C" __declspec(naked) void asm_007afb50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007afbb0 }
	__asm { test edx, edx }
	__asm { je L_007afbb0 }
	__asm { push edx }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_007afbb0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007afb9b }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007afbb0 }
	__asm { L_007afb9b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007afbb0: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_007b2800();
// FUNCTION: ROBLOXSTUDIO 0x007afd20
extern "C" __declspec(naked) void asm_007afd20()
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
	__asm { call fn_007b2800 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_007afd92 }
	__asm { add esi, 5 }
	__asm { je L_007afd62 }
	__asm { add esi, -5 }
	__asm { jmp L_007afd64 }
	__asm { L_007afd62: }
	__asm { xor esi, esi }
	__asm { L_007afd64: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007afd91 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007afd91 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_007afd91: }
	__asm { pop edi }
	__asm { L_007afd92: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_007b2b90();
// FUNCTION: ROBLOXSTUDIO 0x007afdb0
extern "C" __declspec(naked) void asm_007afdb0()
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
	__asm { call fn_007b2b90 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_007afe22 }
	__asm { add esi, 5 }
	__asm { je L_007afdf2 }
	__asm { add esi, -5 }
	__asm { jmp L_007afdf4 }
	__asm { L_007afdf2: }
	__asm { xor esi, esi }
	__asm { L_007afdf4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007afe21 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007afe21 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_007afe21: }
	__asm { pop edi }
	__asm { L_007afe22: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402fd0();
extern "C" void fn_007b0750();
// FUNCTION: ROBLOXSTUDIO 0x007b07f0
extern "C" __declspec(naked) void asm_007b07f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_007b0750 }
	__asm { test al, al }
	__asm { je L_007b0845 }
	__asm { mov al, byte ptr [esi + 0x1a] }
	__asm { cmp al, byte ptr [edi + 0x1a] }
	__asm { jne L_007b0845 }
	__asm { mov al, byte ptr [esi + 0x18] }
	__asm { cmp al, byte ptr [edi + 0x18] }
	__asm { jne L_007b0845 }
	__asm { mov al, byte ptr [esi + 0x19] }
	__asm { cmp al, byte ptr [edi + 0x19] }
	__asm { jne L_007b0845 }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { add edi, 0x1c }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_007b082d }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_007b082d: }
	__asm { push eax }
	__asm { push edi }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jne L_007b0845 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007b0845: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b0030();
extern "C" void fn_007b0690();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007b0ce0
extern "C" __declspec(naked) void asm_007b0ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c2d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe56004 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007b0d18 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [eax] }
	__asm { L_007b0d18: }
	__asm { mov dword ptr [esi], 0xe54d08 }
	__asm { cmp dword ptr [esi + 0x30], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_007b0d36 }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007b0d36: }
	__asm { mov dword ptr [esi + 0x30], 0xf }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x1c], 0 }
	__asm { call fn_007b0030 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_007b0d5e }
	__asm { push esi }
	__asm { call fn_007b0690 }
	__asm { add esp, 4 }
	__asm { L_007b0d5e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00793ee0();
extern "C" void fn_00794230();
// FUNCTION: ROBLOXSTUDIO 0x007b0ff0
extern "C" __declspec(naked) void asm_007b0ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f22b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x28 }
	__asm { mov esi, ecx }
	__asm { call fn_00794230 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007b1030 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call fn_00793ee0 }
	__asm { jmp L_007b1032 }
	__asm { L_007b1030: }
	__asm { xor eax, eax }
	__asm { L_007b1032: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_007b1050 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007b1050: }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e77198[];
extern "C" char g_012e2e14[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b1440
extern "C" __declspec(naked) void asm_007b1440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4fb9e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e2e14] }
	__asm { test al, 1 }
	__asm { jne L_007b14ac }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2e14], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e77198] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2ce8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde33f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007b14ac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e2ce8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e75fec[];
extern "C" char g_012e2bb4[];
extern "C" void fn_007b1540();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b14c0
extern "C" __declspec(naked) void asm_007b14c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1fa5e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e2bb4] }
	__asm { test al, 1 }
	__asm { jne L_007b152c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2bb4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e75fec] }
	__asm { call fn_007b1540 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2a88 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3400 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007b152c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e2a88 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e77b1c[];
extern "C" char g_012e2f44[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b1540
extern "C" __declspec(naked) void asm_007b1540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1fa7e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e2f44] }
	__asm { test al, 1 }
	__asm { jne L_007b15ac }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2f44], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e77b1c] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2e18 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3410 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007b15ac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e2e18 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e873ec[];
extern "C" char g_012e2364[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b15c0
extern "C" __declspec(naked) void asm_007b15c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ac8e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e2364] }
	__asm { test al, 1 }
	__asm { jne L_007b162c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2364], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { push dword ptr [g_00e873ec] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2238 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3420 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007b162c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e2238 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9445c[];
extern "C" char g_012e26f4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b1640
extern "C" __declspec(naked) void asm_007b1640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f42e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e26f4] }
	__asm { test al, 1 }
	__asm { jne L_007b16ac }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e26f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9445c] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e25c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3430 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007b16ac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e25c8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e89afc[];
extern "C" char g_012e25c4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b16c0
extern "C" __declspec(naked) void asm_007b16c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1fa9e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e25c4] }
	__asm { test al, 1 }
	__asm { jne L_007b172c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e25c4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e89afc] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2498 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3440 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007b172c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e2498 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e66034[];
extern "C" char g_012e2ce4[];
extern "C" void fn_00532170();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b1740
extern "C" __declspec(naked) void asm_007b1740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1fabe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e2ce4] }
	__asm { test al, 1 }
	__asm { jne L_007b17ac }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2ce4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e66034] }
	__asm { call fn_00532170 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2bb8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3450 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007b17ac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e2bb8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e89728[];
extern "C" char g_012e2a84[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b17c0
extern "C" __declspec(naked) void asm_007b17c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1fade }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e2a84] }
	__asm { test al, 1 }
	__asm { jne L_007b182c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2a84], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e89728] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2958 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3460 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007b182c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e2958 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e899bc[];
extern "C" char g_012e2494[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b1840
extern "C" __declspec(naked) void asm_007b1840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1fafe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e2494] }
	__asm { test al, 1 }
	__asm { jne L_007b18ac }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2494], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x19 }
	__asm { push dword ptr [g_00e899bc] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2368 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007b18ac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e2368 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e89efc[];
extern "C" char g_012e2104[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b18c0
extern "C" __declspec(naked) void asm_007b18c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3cb8e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e2104] }
	__asm { test al, 1 }
	__asm { jne L_007b192c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2104], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { push dword ptr [g_00e89efc] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e1fd8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3480 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007b192c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e1fd8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e77194[];
extern "C" char g_012e2824[];
extern "C" void fn_007b1440();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b1940
extern "C" __declspec(naked) void asm_007b1940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33b0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e2824] }
	__asm { test al, 1 }
	__asm { jne L_007b19ac }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2824], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e77194] }
	__asm { call fn_007b1440 }
	__asm { push eax }
	__asm { mov ecx, 0x12e26f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3490 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007b19ac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e26f8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e7f76c[];
extern "C" char g_012e2954[];
extern "C" void fn_0048b090();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b19c0
extern "C" __declspec(naked) void asm_007b19c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1fb1e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e2954] }
	__asm { test al, 1 }
	__asm { jne L_007b1a2c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2954], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e7f76c] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2828 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde34a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007b1a2c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e2828 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e852e0[];
extern "C" char g_012e2234[];
extern "C" void fn_007b1740();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b1a40
extern "C" __declspec(naked) void asm_007b1a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1fb3e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e2234] }
	__asm { test al, 1 }
	__asm { jne L_007b1aac }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2234], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e852e0] }
	__asm { call fn_007b1740 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2108 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde34b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007b1aac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e2108 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007afa40();
extern "C" void fn_007b0620();
// FUNCTION: ROBLOXSTUDIO 0x007b3cc0
extern "C" __declspec(naked) void asm_007b3cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1fc5b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x14 }
	__asm { call fn_007b0620 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007b3d06 }
	__asm { mov ecx, eax }
	__asm { call fn_007afa40 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b3d06: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cd590();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007b3dd0
extern "C" __declspec(naked) void asm_007b3dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { cmovae eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cd590 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_007b3e17 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007b3e17: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_006b98f0();
extern "C" void fn_006bcfa0();
extern "C" void fn_007b1ac0();
extern "C" void fn_00b15430();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007b4010
extern "C" __declspec(naked) void asm_007b4010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { lea eax, [ebp - 4] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x10], 0x7b2260 }
	__asm { call fn_00b15430 }
	__asm { push dword ptr [ebp - 4] }
	__asm { call fn_006bcfa0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007b4062 }
	__asm { push 2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_007b1ac0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007b4062: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push 0xe55b4c }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x007b4250
extern "C" __declspec(naked) void asm_007b4250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_007b4266 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b4266: }
	__asm { cmp eax, 1 }
	__asm { jne L_007b427d }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b427d: }
	__asm { cmp eax, 2 }
	__asm { jne L_007b428d }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b428d: }
	__asm { cmp eax, 3 }
	__asm { jne L_007b42b0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11eb644 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b42b0: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11eb644 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x007b44b0
extern "C" __declspec(naked) void asm_007b44b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_007b44f8 }
	__asm { cmp eax, 1 }
	__asm { je L_007b44f8 }
	__asm { cmp eax, 2 }
	__asm { je L_007b450c }
	__asm { cmp eax, 3 }
	__asm { jne L_007b44e7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11eb668 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b44e7: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11eb668 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b44f8: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_007b450c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_007b450c: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x007b49a0
extern "C" __declspec(naked) void asm_007b49a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { test eax, eax }
	__asm { jne L_007b4a09 }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { test ecx, ecx }
	__asm { je L_007b49bf }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_007b49bf: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov esi, dword ptr [esi + 0x50] }
	__asm { test al, al }
	__asm { je L_007b4a07 }
	__asm { test esi, esi }
	__asm { jne L_007b4a07 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007b49f6 }
	__asm { push 0x42a }
	__asm { push 0xe55474 }
	__asm { push 0xe55d1c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007b4a07 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007b49f6: }
	__asm { movzx eax, al }
	__asm { push 0xe55d28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007b4a07: }
	__asm { mov eax, esi }
	__asm { L_007b4a09: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00421eb0();
extern "C" void fn_007a0870();
extern "C" void fn_007b49a0();
// FUNCTION: ROBLOXSTUDIO 0x007b4a10
extern "C" __declspec(naked) void asm_007b4a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53888 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x50], 0 }
	__asm { je L_007b4a63 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b49a0 }
	__asm { lea ecx, [eax + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007a0870 }
	__asm { L_007b4a63: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007b5ea0();
// FUNCTION: ROBLOXSTUDIO 0x007b4ed0
extern "C" __declspec(naked) void asm_007b4ed0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { L_007b4ed4: }
	__asm { cmp dword ptr [esi + 0x3c], 0 }
	__asm { je L_007b4f3f }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { sub eax, dword ptr [ecx] }
	__asm { test eax, 0xfffffff8 }
	__asm { je L_007b4f3f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov edi, dword ptr [esi + 0x38] }
	__asm { test al, al }
	__asm { je L_007b4f2e }
	__asm { test ecx, ecx }
	__asm { jne L_007b4f2e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007b4f1d }
	__asm { push 0x42 }
	__asm { push 0x10049b8 }
	__asm { push 0x10049fc }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007b4f2e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007b4f1d: }
	__asm { movzx eax, al }
	__asm { push 0x1018178 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007b4f2e: }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call fn_007b5ea0 }
	__asm { jmp L_007b4ed4 }
	__asm { L_007b4f3f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_0097f090();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007b5640
extern "C" __declspec(naked) void asm_007b5640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [eax + 0x114] }
	__asm { push dword ptr [edi] }
	__asm { call fn_0097f090 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007b568c }
	__asm { L_007b5664: }
	__asm { mov esi, dword ptr [esi + 0x38] }
	__asm { test esi, esi }
	__asm { je L_007b5684 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { push dword ptr [eax + 0x114] }
	__asm { push dword ptr [edi] }
	__asm { call fn_0097f090 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_007b5664 }
	__asm { jmp L_007b568c }
	__asm { L_007b5684: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007b568c: }
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

extern "C" char g_012e34d4[];
extern "C" char g_012e34d8[];
extern "C" char g_012e34dc[];
extern "C" char g_012e34e0[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b79d0
extern "C" __declspec(naked) void asm_007b79d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012e34e0] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007b7a12 }
	__asm { or eax, 1 }
	__asm { push 0xde4680 }
	__asm { mov dword ptr [g_012e34e0], eax }
	__asm { mov dword ptr [g_012e34d4], 0x11ece28 }
	__asm { mov dword ptr [g_012e34dc], 0x40d810 }
	__asm { mov dword ptr [g_012e34d8], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007b7a12: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12e34d4 }
	__asm { jne L_007b7a2b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007b7a2b: }
	__asm { test ecx, ecx }
	__asm { je L_007b7a41 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007b7a41: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007b7a4f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007b7a4f: }
	__asm { mov dword ptr [esi], 0x12e34d4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e34b4[];
extern "C" char g_012e34b8[];
extern "C" char g_012e34bc[];
extern "C" char g_012e34c0[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b7a60
extern "C" __declspec(naked) void asm_007b7a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012e34c0] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007b7aa2 }
	__asm { or eax, 1 }
	__asm { push 0xde4690 }
	__asm { mov dword ptr [g_012e34c0], eax }
	__asm { mov dword ptr [g_012e34b4], 0x11ece50 }
	__asm { mov dword ptr [g_012e34bc], 0x40d810 }
	__asm { mov dword ptr [g_012e34b8], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007b7aa2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12e34b4 }
	__asm { jne L_007b7abb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007b7abb: }
	__asm { test ecx, ecx }
	__asm { je L_007b7ad1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007b7ad1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007b7adf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007b7adf: }
	__asm { mov dword ptr [esi], 0x12e34b4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e34c4[];
extern "C" char g_012e34c8[];
extern "C" char g_012e34cc[];
extern "C" char g_012e34d0[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b7af0
extern "C" __declspec(naked) void asm_007b7af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012e34d0] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007b7b32 }
	__asm { or eax, 1 }
	__asm { push 0xde46a0 }
	__asm { mov dword ptr [g_012e34d0], eax }
	__asm { mov dword ptr [g_012e34c4], 0x11ece00 }
	__asm { mov dword ptr [g_012e34cc], 0x40d810 }
	__asm { mov dword ptr [g_012e34c8], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007b7b32: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12e34c4 }
	__asm { jne L_007b7b4b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007b7b4b: }
	__asm { test ecx, ecx }
	__asm { je L_007b7b61 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007b7b61: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007b7b6f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007b7b6f: }
	__asm { mov dword ptr [esi], 0x12e34c4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007b7f60
extern "C" __declspec(naked) void asm_007b7f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007b7f89 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007b7f8e }
	__asm { L_007b7f89: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007b7f8e: }
	__asm { cmp ecx, 0x11ece50 }
	__asm { je L_007b7fd7 }
	__asm { test eax, eax }
	__asm { je L_007b7f9e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007b7fa3 }
	__asm { L_007b7f9e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007b7fa3: }
	__asm { push 0x11ece50 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007b7fd7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007b7fd7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007b7ff0
extern "C" __declspec(naked) void asm_007b7ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007b8019 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007b801e }
	__asm { L_007b8019: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007b801e: }
	__asm { cmp ecx, 0x11ece28 }
	__asm { je L_007b8067 }
	__asm { test eax, eax }
	__asm { je L_007b802e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007b8033 }
	__asm { L_007b802e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007b8033: }
	__asm { push 0x11ece28 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007b8067 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007b8067: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007b8080
extern "C" __declspec(naked) void asm_007b8080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007b80a9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007b80ae }
	__asm { L_007b80a9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007b80ae: }
	__asm { cmp ecx, 0x11ece00 }
	__asm { je L_007b80f7 }
	__asm { test eax, eax }
	__asm { je L_007b80be }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007b80c3 }
	__asm { L_007b80be: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007b80c3: }
	__asm { push 0x11ece00 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007b80f7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007b80f7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_00545640();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x007b8280
extern "C" __declspec(naked) void asm_007b8280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_007b82d1 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_007b82a0 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_007b82a2 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_007b82a2 }
	__asm { L_007b82a0: }
	__asm { mov eax, ecx }
	__asm { L_007b82a2: }
	__asm { test eax, eax }
	__asm { je L_007b82d1 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_007b82d1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007b82d1 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_007b82d1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00545640 }
	__asm { L_007b82d1: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_005457f0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x007b82e0
extern "C" __declspec(naked) void asm_007b82e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_007b8331 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_007b8300 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_007b8302 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_007b8302 }
	__asm { L_007b8300: }
	__asm { mov eax, ecx }
	__asm { L_007b8302: }
	__asm { test eax, eax }
	__asm { je L_007b8331 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_007b8331 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007b8331 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_007b8331 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_005457f0 }
	__asm { L_007b8331: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3578[];
extern "C" void fn_004115f0();
extern "C" void fn_007b93e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b8c10
extern "C" __declspec(naked) void asm_007b8c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd233ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x7bcd00 }
	__asm { push 0x12e34e4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012e3578] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007b8c71 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3578], eax }
	__asm { mov ecx, 0x12e34f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b93e0 }
	__asm { push 0xde4660 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_007b8c71: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12e34f0 }
	__asm { push 1 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_007b8c98 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b8c98: }
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

extern "C" char g_012e0d24[];
extern "C" char g_012e4d48[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b91f0
extern "C" __declspec(naked) void asm_007b91f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20046 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe5630c }
	__asm { mov dword ptr [esi + 4], 0xe56384 }
	__asm { mov dword ptr [esi + 0x18], 0xe5638c }
	__asm { mov dword ptr [esi + 0x1c], 0xe56398 }
	__asm { mov eax, dword ptr [g_012e0d24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_007b9289 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0d24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xf13260 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x19 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e0bf8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1b30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007b9289: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e0bf8 }
	__asm { inc dword ptr [g_012e4d48] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0d24[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b9750
extern "C" __declspec(naked) void asm_007b9750()
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
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007b97c5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0d24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xf13260 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x19 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e0bf8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1b30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_007b97c5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12e0bf8 }
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

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_007bb660();
// FUNCTION: ROBLOXSTUDIO 0x007ba340
extern "C" __declspec(naked) void asm_007ba340()
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
	__asm { call fn_007bb660 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_007ba3b2 }
	__asm { add esi, 5 }
	__asm { je L_007ba382 }
	__asm { add esi, -5 }
	__asm { jmp L_007ba384 }
	__asm { L_007ba382: }
	__asm { xor esi, esi }
	__asm { L_007ba384: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007ba3b1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007ba3b1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_007ba3b1: }
	__asm { pop edi }
	__asm { L_007ba3b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004226b0();
extern "C" void fn_006b9e50();
// FUNCTION: ROBLOXSTUDIO 0x007ba590
extern "C" __declspec(naked) void asm_007ba590()
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
	__asm { lea esi, [ecx + 4] }
	__asm { mov dword ptr [ecx], 0xe56300 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_007ba5de }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_007ba5de: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007ba620
extern "C" __declspec(naked) void asm_007ba620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007ba641 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007ba641: }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { test eax, eax }
	__asm { je L_007ba651 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007ba651: }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { pop esi }
	__asm { je L_007ba67b }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007ba67b: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004226b0();
extern "C" void fn_006b9e50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007ba790
extern "C" __declspec(naked) void asm_007ba790()
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
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [edi], 0xe56300 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007ba7e0 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_007ba7e0: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_007ba7ef }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007ba7ef: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e95b3c[];
extern "C" char g_012e341c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007bb2a0
extern "C" __declspec(naked) void asm_007bb2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd408be }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e341c] }
	__asm { test al, 1 }
	__asm { jne L_007bb30c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e341c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e95b3c] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e32f0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde41b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007bb30c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e32f0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079ae50();
// FUNCTION: ROBLOXSTUDIO 0x007bbec0
extern "C" __declspec(naked) void asm_007bbec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0079ae50 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov edi, eax }
	__asm { test ecx, ecx }
	__asm { je L_007bbef3 }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { add ecx, -0x1c }
	__asm { add ecx, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007bbef3: }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { xor ecx, ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b8980();
// FUNCTION: ROBLOXSTUDIO 0x007bc000
extern "C" __declspec(naked) void asm_007bc000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_007b8980 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov edi, eax }
	__asm { test ecx, ecx }
	__asm { je L_007bc033 }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { add ecx, -0x1c }
	__asm { add ecx, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007bc033: }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { xor ecx, ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00410d50();
extern "C" void fn_0079ae50();
extern "C" void fn_007d5d30();
// FUNCTION: ROBLOXSTUDIO 0x007bc050
extern "C" __declspec(naked) void asm_007bc050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_0079ae50 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov ebx, eax }
	__asm { test ecx, ecx }
	__asm { je L_007bc078 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_007bc07a }
	__asm { L_007bc078: }
	__asm { xor ecx, ecx }
	__asm { L_007bc07a: }
	__asm { add ecx, dword ptr [esi + 0x2c] }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { push ebx }
	__asm { call edx }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00410d50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00410d50();
extern "C" void fn_007b8500();
extern "C" void fn_007d5d30();
// FUNCTION: ROBLOXSTUDIO 0x007bc0b0
extern "C" __declspec(naked) void asm_007bc0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_007b8500 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_007bc0d5 }
	__asm { lea ecx, [eax - 0x1c] }
	__asm { jmp L_007bc0d7 }
	__asm { L_007bc0d5: }
	__asm { xor ecx, ecx }
	__asm { L_007bc0d7: }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { push ecx }
	__asm { add ecx, dword ptr [esi + 0x2c] }
	__asm { fstp dword ptr [esp] }
	__asm { call edx }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00410d50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e3578[];
extern "C" void fn_007b93e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007bcd00
extern "C" __declspec(naked) void asm_007bcd00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd233ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e3578] }
	__asm { test al, 1 }
	__asm { jne L_007bcd47 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3578], eax }
	__asm { mov ecx, 0x12e34f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b93e0 }
	__asm { push 0xde4660 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007bcd47: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e34b0[];
extern "C" void fn_007b9510();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007bcd60
extern "C" __declspec(naked) void asm_007bcd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2023e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e34b0] }
	__asm { test al, 1 }
	__asm { jne L_007bcda7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e34b0], eax }
	__asm { mov ecx, 0x12e3428 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b9510 }
	__asm { push 0xde4670 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007bcda7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0121034d[];
extern "C" void fn_007bc660();
extern "C" void fn_007bec90();
extern "C" void fn_007bee90();
// FUNCTION: ROBLOXSTUDIO 0x007c0430
extern "C" __declspec(naked) void asm_007c0430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x1a4], 0 }
	__asm { je L_007c0480 }
	__asm { cmp byte ptr [g_0121034d], 0 }
	__asm { je L_007c0468 }
	__asm { call fn_007bc660 }
	__asm { mov edx, dword ptr [eax] }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007bee90 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007c0468: }
	__asm { call fn_007bc660 }
	__asm { mov edx, dword ptr [eax] }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007bec90 }
	__asm { L_007c0480: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007c0c00
extern "C" __declspec(naked) void asm_007c0c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd202c0 }
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
	__asm { je L_007c0c58 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe57478 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007c0c5a }
	__asm { L_007c0c58: }
	__asm { xor eax, eax }
	__asm { L_007c0c5a: }
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

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007c0c90
extern "C" __declspec(naked) void asm_007c0c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd202d0 }
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
	__asm { je L_007c0ce8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe57460 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007c0cea }
	__asm { L_007c0ce8: }
	__asm { xor eax, eax }
	__asm { L_007c0cea: }
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

extern "C" char g_012e3598[];
extern "C" char g_012e359c[];
extern "C" char g_012e35a8[];
extern "C" char g_012e35ac[];
extern "C" void fn_007cb250();
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x007c1b40
extern "C" __declspec(naked) void asm_007c1b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2042e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e359c] }
	__asm { test al, 1 }
	__asm { jne L_007c1b82 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e359c], eax }
	__asm { push 0xe57044 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e3598], eax }
	__asm { L_007c1b82: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2030e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e35ac] }
	__asm { test al, 1 }
	__asm { jne L_007c1bca }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e35ac], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012e35a8], eax }
	__asm { L_007c1bca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007c0c00();
extern "C" void fn_007c2080();
extern "C" void fn_007de8e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007c1be0
extern "C" __declspec(naked) void asm_007c1be0()
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
	__asm { je L_007c1c2e }
	__asm { mov ecx, eax }
	__asm { call fn_007c2080 }
	__asm { mov esi, eax }
	__asm { jmp L_007c1c30 }
	__asm { L_007c1c2e: }
	__asm { xor esi, esi }
	__asm { L_007c1c30: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007c0c00 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007c1c61 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007c1c61 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007c1c61: }
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
extern "C" void fn_007c1c80();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x007c1dd0
extern "C" __declspec(naked) void asm_007c1dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_007c1e21 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_007c1df0 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_007c1df2 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_007c1df2 }
	__asm { L_007c1df0: }
	__asm { mov eax, ecx }
	__asm { L_007c1df2: }
	__asm { test eax, eax }
	__asm { je L_007c1e21 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_007c1e21 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007c1e21 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_007c1e21 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_007c1c80 }
	__asm { L_007c1e21: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_004c92a0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x007c2020
extern "C" __declspec(naked) void asm_007c2020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_007c2071 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_007c2040 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_007c2042 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_007c2042 }
	__asm { L_007c2040: }
	__asm { mov eax, ecx }
	__asm { L_007c2042: }
	__asm { test eax, eax }
	__asm { je L_007c2071 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_007c2071 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007c2071 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_007c2071 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_004c92a0 }
	__asm { L_007c2071: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x007c2820
extern "C" __declspec(naked) void asm_007c2820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ecx + 0x44], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, 0xe57364 }
	__asm { mov eax, 0xe57060 }
	__asm { cmove edx, eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_007c286a }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007c286a: }
	__asm { mov ecx, edx }
	__asm { push edi }
	__asm { lea edi, [ecx + 1] }
	__asm { L_007c2870: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_007c2870 }
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
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x007c2890
extern "C" __declspec(naked) void asm_007c2890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ecx + 0x44], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, 0xe57154 }
	__asm { mov eax, 0xe57074 }
	__asm { cmove edx, eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_007c28da }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007c28da: }
	__asm { mov ecx, edx }
	__asm { push edi }
	__asm { lea edi, [ecx + 1] }
	__asm { L_007c28e0: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_007c28e0 }
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
	__asm { ret 4 }
}

extern "C" char g_013000f0[];
extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x007c2900
extern "C" __declspec(naked) void asm_007c2900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_013000f0], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, 0xe57060 }
	__asm { mov eax, 0xe57074 }
	__asm { cmove edx, eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_007c294d }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007c294d: }
	__asm { mov ecx, edx }
	__asm { push edi }
	__asm { lea edi, [ecx + 1] }
	__asm { L_007c2953: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_007c2953 }
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
	__asm { ret 4 }
}
