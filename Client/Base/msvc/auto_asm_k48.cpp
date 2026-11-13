// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00ce8180();
extern "C" void fn_00ceeb10();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00ce8290
extern "C" __declspec(naked) void asm_00ce8290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00cf40a0 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { xor edi, edi }
	__asm { L_00ce82a5: }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov edx, dword ptr [esi + 0x34] }
	__asm { cmp ecx, edx }
	__asm { ja L_00ce82b3 }
	__asm { sub edx, ecx }
	__asm { jmp L_00ce82ba }
	__asm { L_00ce82b3: }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { sub eax, ecx }
	__asm { add edx, eax }
	__asm { L_00ce82ba: }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { cmp edi, edx }
	__asm { jae L_00ce82f8 }
	__asm { lea edx, [ecx + edi] }
	__asm { cmp edx, eax }
	__asm { jb L_00ce82e2 }
	__asm { sub ecx, eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { add ecx, edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax] }
	__asm { call fn_00ceeb10 }
	__asm { inc edi }
	__asm { jmp L_00ce82a5 }
	__asm { L_00ce82e2: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [eax + edx*4] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax] }
	__asm { call fn_00ceeb10 }
	__asm { inc edi }
	__asm { jmp L_00ce82a5 }
	__asm { L_00ce82f8: }
	__asm { test eax, eax }
	__asm { je L_00ce8321 }
	__asm { cmp eax, 0x20 }
	__asm { jbe L_00ce8313 }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { L_00ce8313: }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { L_00ce8321: }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00cf40b0 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00cf40a0 }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00ce8180 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00cf40b0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00ce8180();
extern "C" void fn_00ceecf0();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00ce8350
extern "C" __declspec(naked) void asm_00ce8350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00cf40a0 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { xor edi, edi }
	__asm { L_00ce8365: }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov edx, dword ptr [esi + 0x34] }
	__asm { cmp ecx, edx }
	__asm { ja L_00ce8373 }
	__asm { sub edx, ecx }
	__asm { jmp L_00ce837a }
	__asm { L_00ce8373: }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { sub eax, ecx }
	__asm { add edx, eax }
	__asm { L_00ce837a: }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { cmp edi, edx }
	__asm { jae L_00ce83b8 }
	__asm { lea edx, [ecx + edi] }
	__asm { cmp edx, eax }
	__asm { jb L_00ce83a2 }
	__asm { sub ecx, eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { add ecx, edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax] }
	__asm { call fn_00ceecf0 }
	__asm { inc edi }
	__asm { jmp L_00ce8365 }
	__asm { L_00ce83a2: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [eax + edx*4] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax] }
	__asm { call fn_00ceecf0 }
	__asm { inc edi }
	__asm { jmp L_00ce8365 }
	__asm { L_00ce83b8: }
	__asm { test eax, eax }
	__asm { je L_00ce83e1 }
	__asm { cmp eax, 0x20 }
	__asm { jbe L_00ce83d3 }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { L_00ce83d3: }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { L_00ce83e1: }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00cf40b0 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00cf40a0 }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00ce8180 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00cf40b0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012afa4c[];
extern "C" void fn_00ce8290();
extern "C" void fn_00ceeb10();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
// FUNCTION: ROBLOXSTUDIO 0x00ce85d0
extern "C" __declspec(naked) void asm_00ce85d0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea esi, [ecx + 0x310] }
	__asm { L_00ce85d9: }
	__asm { lea edi, [esi + 0x3c] }
	__asm { mov ecx, edi }
	__asm { call fn_00cf40a0 }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { cmp ecx, dword ptr [esi + 0x34] }
	__asm { je L_00ce8655 }
	__asm { inc ecx }
	__asm { mov dword ptr [esi + 0x30], ecx }
	__asm { cmp ecx, dword ptr [esi + 0x38] }
	__asm { jne L_00ce85fd }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { jmp L_00ce8601 }
	__asm { L_00ce85fd: }
	__asm { test ecx, ecx }
	__asm { jne L_00ce8604 }
	__asm { L_00ce8601: }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { L_00ce8604: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov ebx, dword ptr [eax + ecx*4 - 4] }
	__asm { mov ecx, edi }
	__asm { call fn_00cf40b0 }
	__asm { test ebx, ebx }
	__asm { je L_00ce865c }
	__asm { mov eax, dword ptr [ebx + 0x4c] }
	__asm { test eax, eax }
	__asm { je L_00ce8631 }
	__asm { push 0xfde }
	__asm { push 0xf045f0 }
	__asm { push eax }
	__asm { call dword ptr [g_012afa4c] }
	__asm { add esp, 0xc }
	__asm { L_00ce8631: }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00cf40a0 }
	__asm { push 0xfe0 }
	__asm { push 0xf045f0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00ceeb10 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00cf40b0 }
	__asm { jmp L_00ce85d9 }
	__asm { L_00ce8655: }
	__asm { mov ecx, edi }
	__asm { call fn_00cf40b0 }
	__asm { L_00ce865c: }
	__asm { push 0xfe2 }
	__asm { push 0xf045f0 }
	__asm { mov ecx, esi }
	__asm { call fn_00ce8290 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00cf1810();
extern "C" void fn_00cf4e70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ce8d00
extern "C" __declspec(naked) void asm_00ce8d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e248 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edx, ecx }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ce8d85 }
	__asm { cmp byte ptr [edx + 4], 0 }
	__asm { jne L_00ce8d85 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { test eax, eax }
	__asm { je L_00ce8d85 }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov ecx, 0xff }
	__asm { cmp edi, ecx }
	__asm { cmovg edi, ecx }
	__asm { xor ecx, ecx }
	__asm { cmp dword ptr [ebp + 0x10], ecx }
	__asm { cmove edi, ecx }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00ce8d62 }
	__asm { inc dword ptr [eax] }
	__asm { L_00ce8d62: }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov ecx, edx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00cf1810 }
	__asm { mov esi, eax }
	__asm { jmp L_00ce8d8a }
	__asm { L_00ce8d85: }
	__asm { mov esi, 1 }
	__asm { L_00ce8d8a: }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00ce8dc6 }
	__asm { dec dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { jne L_00ce8dc6 }
	__asm { mov edi, dword ptr [ebp + 0x18] }
	__asm { test edi, edi }
	__asm { je L_00ce8db9 }
	__asm { mov ecx, edi }
	__asm { call fn_00cf4e70 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { add esp, 4 }
	__asm { L_00ce8db9: }
	__asm { test eax, eax }
	__asm { je L_00ce8dc6 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ce8dc6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00cf4e70();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x00ce8e60
extern "C" __declspec(naked) void asm_00ce8e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor ebx, ebx }
	__asm { cmp dword ptr [edi + 0x430], ebx }
	__asm { jbe L_00ce8ec8 }
	__asm { L_00ce8e73: }
	__asm { mov eax, dword ptr [edi + 0x42c] }
	__asm { lea esi, [eax + ebx*8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00ce8eb2 }
	__asm { dec dword ptr [eax] }
	__asm { jne L_00ce8eb2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test eax, eax }
	__asm { je L_00ce8ea2 }
	__asm { mov ecx, eax }
	__asm { call fn_00cf4e70 }
	__asm { push dword ptr [ebp - 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ce8ea2: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00ce8eb2 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ce8eb2: }
	__asm { inc ebx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { cmp ebx, dword ptr [edi + 0x430] }
	__asm { jb L_00ce8e73 }
	__asm { L_00ce8ec8: }
	__asm { cmp dword ptr [edi + 0x434], 0 }
	__asm { je L_00ce8f15 }
	__asm { mov eax, dword ptr [edi + 0x42c] }
	__asm { test eax, eax }
	__asm { je L_00ce8ef7 }
	__asm { push 0xce69d0 }
	__asm { push dword ptr [eax - 4] }
	__asm { lea esi, [eax - 4] }
	__asm { push 8 }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ce8ef7: }
	__asm { mov dword ptr [edi + 0x434], 0 }
	__asm { mov dword ptr [edi + 0x42c], 0 }
	__asm { mov dword ptr [edi + 0x430], 0 }
	__asm { L_00ce8f15: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005765c0();
// FUNCTION: ROBLOXSTUDIO 0x00ce8fd0
extern "C" __declspec(naked) void asm_00ce8fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_00ce9069 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { je L_00ce9026 }
	__asm { mov edx, dword ptr [edi + 0x2e0] }
	__asm { test edx, edx }
	__asm { je L_00ce9058 }
	__asm { mov ebx, dword ptr [edi + 0x2dc] }
	__asm { mov eax, ebx }
	__asm { L_00ce9004: }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_00ce9012 }
	__asm { inc ecx }
	__asm { add eax, 4 }
	__asm { cmp ecx, edx }
	__asm { jb L_00ce9004 }
	__asm { jmp L_00ce9058 }
	__asm { L_00ce9012: }
	__asm { cmp ecx, -1 }
	__asm { je L_00ce9058 }
	__asm { mov eax, dword ptr [ebx + edx*4 - 4] }
	__asm { mov dword ptr [ebx + ecx*4], eax }
	__asm { dec dword ptr [edi + 0x2e0] }
	__asm { jmp L_00ce9058 }
	__asm { L_00ce9026: }
	__asm { mov edx, dword ptr [edi + 0x2d4] }
	__asm { test edx, edx }
	__asm { je L_00ce9058 }
	__asm { mov ebx, dword ptr [edi + 0x2d0] }
	__asm { mov eax, ebx }
	__asm { L_00ce9038: }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_00ce9046 }
	__asm { inc ecx }
	__asm { add eax, 4 }
	__asm { cmp ecx, edx }
	__asm { jb L_00ce9038 }
	__asm { jmp L_00ce9058 }
	__asm { L_00ce9046: }
	__asm { cmp ecx, -1 }
	__asm { je L_00ce9058 }
	__asm { mov eax, dword ptr [ebx + edx*4 - 4] }
	__asm { mov dword ptr [ebx + ecx*4], eax }
	__asm { dec dword ptr [edi + 0x2d4] }
	__asm { L_00ce9058: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_005765c0 }
	__asm { pop ebx }
	__asm { L_00ce9069: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c68910();
extern "C" void fn_00cea1a0();
// FUNCTION: ROBLOXSTUDIO 0x00ce9170
extern "C" __declspec(naked) void asm_00ce9170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov esi, ecx }
	__asm { push 0x131581c }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { jne L_00ce921c }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00cea1a0 }
	__asm { cmp eax, -1 }
	__asm { je L_00ce921c }
	__asm { mov ecx, dword ptr [esi + 0x22c] }
	__asm { imul eax, eax, 0x1208 }
	__asm { add ecx, eax }
	__asm { cmp byte ptr [ecx], 1 }
	__asm { jne L_00ce921c }
	__asm { test ecx, ecx }
	__asm { je L_00ce921c }
	__asm { push ebx }
	__asm { xor edx, edx }
	__asm { push edi }
	__asm { mov edi, 0xffff }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { xor esi, esi }
	__asm { add ecx, 0x1168 }
	__asm { mov edx, edi }
	__asm { L_00ce91e7: }
	__asm { movzx eax, word ptr [ecx] }
	__asm { cmp ax, dx }
	__asm { je L_00ce920e }
	__asm { mov edx, eax }
	__asm { cmp edx, edi }
	__asm { jge L_00ce9200 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov edi, edx }
	__asm { L_00ce9200: }
	__asm { inc esi }
	__asm { add ecx, 0x10 }
	__asm { mov edx, 0xffff }
	__asm { cmp esi, 5 }
	__asm { jl L_00ce91e7 }
	__asm { L_00ce920e: }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00ce921c: }
	__asm { xor eax, eax }
	__asm { xor edx, edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00c688b0();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00ce9240
extern "C" __declspec(naked) void asm_00ce9240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e320 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00ce933e }
	__asm { cmp dword ptr [ecx + 0x22c], 0 }
	__asm { je L_00ce9339 }
	__asm { cmp byte ptr [ecx + 4], 1 }
	__asm { je L_00ce9339 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x24] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [eax + 0x80] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { test ebx, ebx }
	__asm { je L_00ce92fc }
	__asm { push esi }
	__asm { xor eax, eax }
	__asm { xor esi, esi }
	__asm { cmp ax, word ptr [edi] }
	__asm { jae L_00ce92f6 }
	__asm { L_00ce92d5: }
	__asm { movzx eax, si }
	__asm { cmp eax, dword ptr [ebp - 0x14] }
	__asm { jae L_00ce92f6 }
	__asm { lea ecx, [eax + eax*4] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { shl ecx, 2 }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { add ecx, ebx }
	__asm { call fn_00c688b0 }
	__asm { inc esi }
	__asm { cmp si, word ptr [edi] }
	__asm { jb L_00ce92d5 }
	__asm { L_00ce92f6: }
	__asm { mov word ptr [edi], si }
	__asm { pop esi }
	__asm { jmp L_00ce9303 }
	__asm { L_00ce92fc: }
	__asm { mov ax, word ptr [ebp - 0x14] }
	__asm { mov word ptr [edi], ax }
	__asm { L_00ce9303: }
	__asm { cmp dword ptr [ebp - 0x1c], 0 }
	__asm { pop ebx }
	__asm { jbe L_00ce9315 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ce9315: }
	__asm { cmp dword ptr [ebp - 0x10], 0 }
	__asm { jbe L_00ce9326 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ce9326: }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce9339: }
	__asm { xor eax, eax }
	__asm { mov word ptr [edi], ax }
	__asm { L_00ce933e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c68910();
// FUNCTION: ROBLOXSTUDIO 0x00ce96b0
extern "C" __declspec(naked) void asm_00ce96b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x131581c }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { je L_00ce96d2 }
	__asm { lea eax, [edi + 0x458] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00ce96d2: }
	__asm { mov ax, word ptr [ebp + 0x1a] }
	__asm { mov ecx, 0xffff }
	__asm { cmp ax, cx }
	__asm { je L_00ce9724 }
	__asm { cmp ax, word ptr [edi + 0xe] }
	__asm { jae L_00ce9724 }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { movzx ecx, ax }
	__asm { mov eax, dword ptr [edi + 0x22c] }
	__asm { imul ecx, ecx, 0x1208 }
	__asm { add eax, 4 }
	__asm { add ecx, eax }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { je L_00ce9724 }
	__asm { movzx ecx, word ptr [ebp + 0x1a] }
	__asm { mov eax, dword ptr [edi + 0x22c] }
	__asm { imul ecx, ecx, 0x1208 }
	__asm { add ecx, 0x11e0 }
	__asm { add eax, ecx }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00ce9724: }
	__asm { push ebx }
	__asm { push esi }
	__asm { xor eax, eax }
	__asm { xor esi, esi }
	__asm { cmp ax, word ptr [edi + 0xe] }
	__asm { jae L_00ce9759 }
	__asm { xor ebx, ebx }
	__asm { L_00ce9732: }
	__asm { mov ecx, dword ptr [edi + 0x22c] }
	__asm { lea eax, [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { push eax }
	__asm { add ecx, ebx }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { jne L_00ce9765 }
	__asm { movzx eax, word ptr [edi + 0xe] }
	__asm { inc esi }
	__asm { add ebx, 0x1208 }
	__asm { cmp esi, eax }
	__asm { jb L_00ce9732 }
	__asm { L_00ce9759: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov eax, 0x12b1ef8 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00ce9765: }
	__asm { mov eax, dword ptr [edi + 0x22c] }
	__asm { imul esi, esi, 0x1208 }
	__asm { add eax, 0x11e0 }
	__asm { add eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_0131581c[];
extern "C" char g_01315820[];
extern "C" char g_01315824[];
extern "C" char g_01315828[];
extern "C" char g_0131582c[];
extern "C" void fn_00c68910();
extern "C" void fn_00cea0a0();
// FUNCTION: ROBLOXSTUDIO 0x00ce9a10
extern "C" __declspec(naked) void asm_00ce9a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x131581c }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { je L_00ce9a65 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { lea eax, [eax + eax*4] }
	__asm { mov ecx, dword ptr [esi + eax*4 + 0x498] }
	__asm { lea edx, [esi + eax*4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 0x49c] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 0x4a0] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx + 0x4a4] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [edx + 0x4a8] }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x1c }
	__asm { L_00ce9a65: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 1 }
	__asm { push 0 }
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
	__asm { mov ecx, esi }
	__asm { call fn_00cea0a0 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00ce9acc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_0131581c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [g_01315820] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [g_01315824] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [g_01315828] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [g_0131582c] }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x1c }
	__asm { L_00ce9acc: }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { pop esi }
	__asm { lea eax, [eax + eax*4] }
	__asm { lea edx, [ecx + eax*4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx + 0x2c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 0x30] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 0x34] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx + 0x38] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [edx + 0x3c] }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00ce9f90();
// FUNCTION: ROBLOXSTUDIO 0x00ce9b00
extern "C" __declspec(naked) void asm_00ce9b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { mov ebx, ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00c687d0 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c68890 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ax, word ptr [ebp + 0x10] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c688b0 }
	__asm { mov ecx, ebx }
	__asm { call fn_00ce9f90 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00ce9b56 }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x28 }
	__asm { L_00ce9b56: }
	__asm { mov eax, dword ptr [ecx + 0x11b8] }
	__asm { or eax, dword ptr [ecx + 0x11bc] }
	__asm { jne L_00ce9b72 }
	__asm { movzx eax, word ptr [ecx + 0x11a8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x28 }
	__asm { L_00ce9b72: }
	__asm { mov eax, dword ptr [ecx + 0x11b8] }
	__asm { pop edi }
	__asm { add eax, eax }
	__asm { pop esi }
	__asm { movzx eax, word ptr [ecx + eax*8 + 0x1158] }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_0131581c[];
extern "C" char g_01315820[];
extern "C" char g_01315824[];
extern "C" char g_01315828[];
extern "C" char g_0131582c[];
extern "C" void fn_00cf6698();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x00ce9cd0
extern "C" __declspec(naked) void asm_00ce9cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e268 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 0x11c] }
	__asm { cmp dword ptr [ebp - 0x14], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jbe L_00ce9d65 }
	__asm { cmp dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [edx + eax*8] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { jbe L_00ce9db5 }
	__asm { test edx, edx }
	__asm { je L_00ce9db5 }
	__asm { push 0xce69d0 }
	__asm { push dword ptr [edx - 4] }
	__asm { lea esi, [edx - 4] }
	__asm { push 8 }
	__asm { push edx }
	__asm { jmp L_00ce9da7 }
	__asm { L_00ce9d65: }
	__asm { cmp dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [g_0131581c] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [g_01315820] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [g_01315824] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [g_01315828] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [g_0131582c] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { jbe L_00ce9db5 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { test eax, eax }
	__asm { je L_00ce9db5 }
	__asm { push 0xce69d0 }
	__asm { push dword ptr [eax - 4] }
	__asm { lea esi, [eax - 4] }
	__asm { push 8 }
	__asm { push eax }
	__asm { L_00ce9da7: }
	__asm { call fn_00cf669e }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ce9db5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c688f0();
// FUNCTION: ROBLOXSTUDIO 0x00ceab20
extern "C" __declspec(naked) void asm_00ceab20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x12b1ef8 }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00c688f0 }
	__asm { test al, al }
	__asm { je L_00ceab3f }
	__asm { L_00ceab37: }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00ceab3f: }
	__asm { lea eax, [edi + 0x458] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00c688f0 }
	__asm { test al, al }
	__asm { jne L_00ceab37 }
	__asm { mov ax, word ptr [ebp + 0x10] }
	__asm { mov ecx, 0xffff }
	__asm { cmp ax, cx }
	__asm { je L_00ceab92 }
	__asm { cmp ax, word ptr [edi + 0xe] }
	__asm { jae L_00ceab92 }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { movzx ecx, ax }
	__asm { mov eax, dword ptr [edi + 0x22c] }
	__asm { imul ecx, ecx, 0x1208 }
	__asm { add eax, 0x11e0 }
	__asm { add ecx, eax }
	__asm { call fn_00c688f0 }
	__asm { test al, al }
	__asm { je L_00ceab92 }
	__asm { movzx eax, word ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00ceab92: }
	__asm { push ebx }
	__asm { push esi }
	__asm { xor eax, eax }
	__asm { xor esi, esi }
	__asm { cmp ax, word ptr [edi + 0xe] }
	__asm { jae L_00ceabca }
	__asm { xor ebx, ebx }
	__asm { L_00ceaba0: }
	__asm { mov ecx, dword ptr [edi + 0x22c] }
	__asm { lea eax, [ebp + 8] }
	__asm { add ecx, 0x11e0 }
	__asm { push eax }
	__asm { add ecx, ebx }
	__asm { call fn_00c688f0 }
	__asm { test al, al }
	__asm { jne L_00ceabd4 }
	__asm { movzx eax, word ptr [edi + 0xe] }
	__asm { inc esi }
	__asm { add ebx, 0x1208 }
	__asm { cmp esi, eax }
	__asm { jb L_00ceaba0 }
	__asm { L_00ceabca: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00ceabd4: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00ceb080();
extern "C" void fn_00ceb120();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00ceabe0
extern "C" __declspec(naked) void asm_00ceabe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { cmp dword ptr [ebx + 8], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00ceac0f }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebx + 8], 0 }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { L_00ceac0f: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_00ceac36 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { L_00ceac36: }
	__asm { cmp dword ptr [edi + 0x22c], 0 }
	__asm { je L_00ceaca6 }
	__asm { cmp byte ptr [edi + 4], 1 }
	__asm { je L_00ceaca6 }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0x234], esi }
	__asm { jbe L_00ceaca6 }
	__asm { nop }
	__asm { L_00ceac50: }
	__asm { mov eax, dword ptr [edi + 0x230] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { cmp byte ptr [eax], 0 }
	__asm { je L_00ceac9d }
	__asm { cmp dword ptr [eax + 0x1200], 7 }
	__asm { jne L_00ceac9d }
	__asm { push 0x673 }
	__asm { push 0xf045f0 }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00ceb120 }
	__asm { mov eax, dword ptr [edi + 0x230] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { push 0x674 }
	__asm { push 0xf045f0 }
	__asm { add eax, 0x11e0 }
	__asm { push eax }
	__asm { call fn_00ceb080 }
	__asm { L_00ceac9d: }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0x234] }
	__asm { jb L_00ceac50 }
	__asm { L_00ceaca6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012afa44[];
extern "C" char g_012afa4c[];
// FUNCTION: ROBLOXSTUDIO 0x00ceae00
extern "C" __declspec(naked) void asm_00ceae00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov ebx, eax }
	__asm { push eax }
	__asm { xor esi, esi }
	__asm { shr ebx, 6 }
	__asm { call dword ptr [g_012afa44] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { test eax, eax }
	__asm { je L_00ceae61 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebx*4] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_012afa44] }
	__asm { mov ecx, eax }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [edi], ecx }
	__asm { test ecx, ecx }
	__asm { jne L_00ceae6c }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [edi + 8] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { add esp, 0xc }
	__asm { L_00ceae61: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00ceae6c: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { test ebx, ebx }
	__asm { jle L_00ceae81 }
	__asm { L_00ceae73: }
	__asm { mov dword ptr [eax + 0x38], edi }
	__asm { mov dword ptr [ecx + esi*4], eax }
	__asm { inc esi }
	__asm { add eax, 0x40 }
	__asm { cmp esi, ebx }
	__asm { jl L_00ceae73 }
	__asm { L_00ceae81: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [edi + 4], ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012afa44[];
extern "C" char g_012afa4c[];
// FUNCTION: ROBLOXSTUDIO 0x00ceaea0
extern "C" __declspec(naked) void asm_00ceaea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, 0x51d07eaf }
	__asm { mul esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ebx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { sub ebx, edx }
	__asm { shr ebx, 1 }
	__asm { add ebx, edx }
	__asm { push esi }
	__asm { xor edi, edi }
	__asm { shr ebx, 0xa }
	__asm { call dword ptr [g_012afa44] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { test eax, eax }
	__asm { je L_00ceaf0e }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebx*4] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_012afa44] }
	__asm { mov ecx, eax }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi], ecx }
	__asm { test ecx, ecx }
	__asm { jne L_00ceaf19 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [esi + 8] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { add esp, 0xc }
	__asm { L_00ceaf0e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00ceaf19: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test ebx, ebx }
	__asm { jle L_00ceaf33 }
	__asm { L_00ceaf20: }
	__asm { mov dword ptr [eax + 0x608], esi }
	__asm { mov dword ptr [ecx + edi*4], eax }
	__asm { inc edi }
	__asm { add eax, 0x610 }
	__asm { cmp edi, ebx }
	__asm { jl L_00ceaf20 }
	__asm { L_00ceaf33: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [esi + 4], ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012afa44[];
extern "C" char g_012afa4c[];
// FUNCTION: ROBLOXSTUDIO 0x00ceaf50
extern "C" __declspec(naked) void asm_00ceaf50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov ebx, eax }
	__asm { push eax }
	__asm { xor esi, esi }
	__asm { shr ebx, 4 }
	__asm { call dword ptr [g_012afa44] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { test eax, eax }
	__asm { je L_00ceafb1 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebx*4] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_012afa44] }
	__asm { mov ecx, eax }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [edi], ecx }
	__asm { test ecx, ecx }
	__asm { jne L_00ceafbc }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [edi + 8] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { add esp, 0xc }
	__asm { L_00ceafb1: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00ceafbc: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { test ebx, ebx }
	__asm { jle L_00ceafd1 }
	__asm { L_00ceafc3: }
	__asm { mov dword ptr [eax + 0xc], edi }
	__asm { mov dword ptr [ecx + esi*4], eax }
	__asm { inc esi }
	__asm { add eax, 0x10 }
	__asm { cmp esi, ebx }
	__asm { jl L_00ceafc3 }
	__asm { L_00ceafd1: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [edi + 4], ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00ceaff0
extern "C" __declspec(naked) void asm_00ceaff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { jne L_00ceb060 }
	__asm { test eax, eax }
	__asm { jne L_00ceb00b }
	__asm { mov dword ptr [esi + 8], 0x10 }
	__asm { jmp L_00ceb010 }
	__asm { L_00ceb00b: }
	__asm { add eax, eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_00ceb010: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { jne L_00ceb01c }
	__asm { xor edi, edi }
	__asm { jmp L_00ceb037 }
	__asm { L_00ceb01c: }
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
	__asm { L_00ceb037: }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00ceb05d }
	__asm { xor ecx, ecx }
	__asm { cmp dword ptr [esi + 4], ecx }
	__asm { jbe L_00ceb053 }
	__asm { L_00ceb043: }
	__asm { mov eax, dword ptr [esi] }
	__asm { inc ecx }
	__asm { mov eax, dword ptr [eax + ecx*4 - 4] }
	__asm { mov dword ptr [edi + ecx*4 - 4], eax }
	__asm { cmp ecx, dword ptr [esi + 4] }
	__asm { jb L_00ceb043 }
	__asm { L_00ceb053: }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ceb05d: }
	__asm { mov dword ptr [esi], edi }
	__asm { pop edi }
	__asm { L_00ceb060: }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + edx*4], eax }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00ce5f90();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00ceb080
extern "C" __declspec(naked) void asm_00ceb080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { jne L_00ceb0f4 }
	__asm { test eax, eax }
	__asm { jne L_00ceb09b }
	__asm { mov dword ptr [esi + 8], 0x10 }
	__asm { jmp L_00ceb0a0 }
	__asm { L_00ceb09b: }
	__asm { add eax, eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_00ceb0a0: }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00ce5f90 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [esi], 0 }
	__asm { mov ebx, eax }
	__asm { je L_00ceb0f1 }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [esi + 4], edi }
	__asm { jbe L_00ceb0e6 }
	__asm { xor edx, edx }
	__asm { L_00ceb0c3: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { inc edi }
	__asm { mov eax, dword ptr [ecx + edx] }
	__asm { mov dword ptr [edx + ebx], eax }
	__asm { mov eax, dword ptr [ecx + edx + 4] }
	__asm { mov dword ptr [edx + ebx + 4], eax }
	__asm { mov ax, word ptr [ecx + edx + 8] }
	__asm { mov word ptr [edx + ebx + 8], ax }
	__asm { lea edx, [edx + 0x10] }
	__asm { cmp edi, dword ptr [esi + 4] }
	__asm { jb L_00ceb0c3 }
	__asm { L_00ceb0e6: }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { L_00ceb0f1: }
	__asm { mov dword ptr [esi], ebx }
	__asm { pop ebx }
	__asm { L_00ceb0f4: }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { shl edx, 4 }
	__asm { add edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov ax, word ptr [ecx + 8] }
	__asm { mov word ptr [edx + 8], ax }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c688b0();
extern "C" void fn_00ce60e0();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00ceb120
extern "C" __declspec(naked) void asm_00ceb120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { jne L_00ceb18f }
	__asm { test eax, eax }
	__asm { jne L_00ceb13b }
	__asm { mov dword ptr [esi + 8], 0x10 }
	__asm { jmp L_00ceb140 }
	__asm { L_00ceb13b: }
	__asm { add eax, eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_00ceb140: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00ce60e0 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [esi], 0 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { je L_00ceb18d }
	__asm { push ebx }
	__asm { xor ebx, ebx }
	__asm { cmp dword ptr [esi + 4], ebx }
	__asm { jbe L_00ceb17f }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { L_00ceb166: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, edi }
	__asm { push eax }
	__asm { add ecx, edi }
	__asm { call fn_00c688b0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { inc ebx }
	__asm { add edi, 0x14 }
	__asm { cmp ebx, dword ptr [esi + 4] }
	__asm { jb L_00ceb166 }
	__asm { pop edi }
	__asm { L_00ceb17f: }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6698 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 4 }
	__asm { pop ebx }
	__asm { L_00ceb18d: }
	__asm { mov dword ptr [esi], ecx }
	__asm { L_00ceb18f: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [eax + eax*4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { call fn_00c688b0 }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cc4e00();
extern "C" void fn_00ce6230();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x00ceb300
extern "C" __declspec(naked) void asm_00ceb300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { cmp dword ptr [edi + 4], eax }
	__asm { jne L_00ceb380 }
	__asm { test eax, eax }
	__asm { jne L_00ceb31b }
	__asm { mov dword ptr [edi + 8], 0x10 }
	__asm { jmp L_00ceb320 }
	__asm { L_00ceb31b: }
	__asm { add eax, eax }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { L_00ceb320: }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00ce6230 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov ebx, eax }
	__asm { je L_00ceb37d }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 4], esi }
	__asm { jbe L_00ceb35a }
	__asm { L_00ceb341: }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [esi*4] }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { add ecx, ebx }
	__asm { call fn_00cc4e00 }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 4] }
	__asm { jb L_00ceb341 }
	__asm { L_00ceb35a: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00ceb37c }
	__asm { push 0xcc4df0 }
	__asm { push dword ptr [eax - 4] }
	__asm { lea esi, [eax - 4] }
	__asm { push 4 }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ceb37c: }
	__asm { pop esi }
	__asm { L_00ceb37d: }
	__asm { mov dword ptr [edi], ebx }
	__asm { pop ebx }
	__asm { L_00ceb380: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { call fn_00cc4e00 }
	__asm { inc dword ptr [edi + 4] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00cee3a0
extern "C" __declspec(naked) void asm_00cee3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { jne L_00cee3ed }
	__asm { xor ecx, ecx }
	__asm { mov eax, 0x10 }
	__asm { mov edx, 4 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { push ecx }
	__asm { call fn_00cf64a0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 1 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [esi + 0xc], 0x10 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cee3ed: }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + edx*4], eax }
	__asm { inc dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { xor edx, edx }
	__asm { cmp eax, ecx }
	__asm { cmove eax, edx }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { jne L_00cee478 }
	__asm { lea eax, [ecx + ecx] }
	__asm { test eax, eax }
	__asm { je L_00cee478 }
	__asm { xor ecx, ecx }
	__asm { mov edx, 4 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { push edi }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { push ecx }
	__asm { call fn_00cf64a0 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00cee477 }
	__asm { xor ecx, ecx }
	__asm { cmp dword ptr [esi + 0xc], ecx }
	__asm { jbe L_00cee459 }
	__asm { L_00cee440: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, ecx }
	__asm { xor edx, edx }
	__asm { div dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [esi] }
	__asm { inc ecx }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [edi + ecx*4 - 4], eax }
	__asm { cmp ecx, dword ptr [esi + 0xc] }
	__asm { jb L_00cee440 }
	__asm { L_00cee459: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { add eax, eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], edi }
	__asm { L_00cee477: }
	__asm { pop edi }
	__asm { L_00cee478: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cee3a0();
// FUNCTION: ROBLOXSTUDIO 0x00cee4b0
extern "C" __declspec(naked) void asm_00cee4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cee3a0 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov ebx, dword ptr [edi + 8] }
	__asm { cmp ecx, ebx }
	__asm { ja L_00cee4d9 }
	__asm { mov eax, ebx }
	__asm { sub eax, ecx }
	__asm { jmp L_00cee4e0 }
	__asm { L_00cee4d9: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { sub eax, ecx }
	__asm { add eax, ebx }
	__asm { L_00cee4e0: }
	__asm { cmp eax, 1 }
	__asm { je L_00cee573 }
	__asm { cmp ecx, ebx }
	__asm { ja L_00cee4f1 }
	__asm { sub ebx, ecx }
	__asm { jmp L_00cee4f8 }
	__asm { L_00cee4f1: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { sub eax, ecx }
	__asm { add ebx, eax }
	__asm { L_00cee4f8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { dec ebx }
	__asm { push esi }
	__asm { lea edx, [ebx - 1] }
	__asm { cmp edx, ecx }
	__asm { jb L_00cee542 }
	__asm { L_00cee504: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { lea esi, [eax + ebx] }
	__asm { cmp esi, ecx }
	__asm { jb L_00cee517 }
	__asm { mov esi, eax }
	__asm { sub esi, ecx }
	__asm { add esi, ebx }
	__asm { L_00cee517: }
	__asm { lea edi, [eax + edx] }
	__asm { mov dword ptr [ebp + 0x14], edi }
	__asm { cmp edi, ecx }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { jb L_00cee52a }
	__asm { sub eax, ecx }
	__asm { add eax, edx }
	__asm { jmp L_00cee52d }
	__asm { L_00cee52a: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { L_00cee52d: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ecx + eax*4] }
	__asm { mov dword ptr [ecx + esi*4], eax }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_00cee542 }
	__asm { dec edx }
	__asm { dec ebx }
	__asm { cmp edx, ecx }
	__asm { jae L_00cee504 }
	__asm { L_00cee542: }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { lea eax, [edx + ecx] }
	__asm { cmp eax, esi }
	__asm { jb L_00cee566 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub edx, esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { add edx, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov dword ptr [ecx + edx*4], eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00cee566: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + edx*4], eax }
	__asm { L_00cee573: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00cee3a0();
extern "C" void fn_00cee4b0();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
// FUNCTION: ROBLOXSTUDIO 0x00cee580
extern "C" __declspec(naked) void asm_00cee580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { test edi, edi }
	__asm { je L_00cee691 }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { cmp dword ptr [ebx + 0x2d4], ecx }
	__asm { jbe L_00cee5e5 }
	__asm { L_00cee5a1: }
	__asm { mov eax, dword ptr [ebx + 0x2d0] }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, dword ptr [eax + ecx*4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov edx, esp }
	__asm { push dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push dword ptr [edi + 0x30] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { call dword ptr [esi + 0x40] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { inc ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { cmp ecx, dword ptr [ebx + 0x2d4] }
	__asm { jb L_00cee5a1 }
	__asm { L_00cee5e5: }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { cmp dword ptr [ebx + 0x2e0], ecx }
	__asm { jbe L_00cee636 }
	__asm { L_00cee5f2: }
	__asm { mov eax, dword ptr [ebx + 0x2dc] }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, dword ptr [eax + ecx*4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov edx, esp }
	__asm { push dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push dword ptr [edi + 0x30] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { call dword ptr [esi + 0x40] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { inc ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { cmp ecx, dword ptr [ebx + 0x2e0] }
	__asm { jb L_00cee5f2 }
	__asm { L_00cee636: }
	__asm { lea ecx, [ebx + 0x5a0] }
	__asm { call fn_00cf40a0 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { lea ecx, [ebx + 0x5b8] }
	__asm { je L_00cee676 }
	__asm { push 0x9f8 }
	__asm { push 0xf045f0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cee4b0 }
	__asm { lea ecx, [ebx + 0x5a0] }
	__asm { call fn_00cf40b0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cee676: }
	__asm { push 0x9fa }
	__asm { push 0xf045f0 }
	__asm { push eax }
	__asm { call fn_00cee3a0 }
	__asm { lea ecx, [ebx + 0x5a0] }
	__asm { call fn_00cf40b0 }
	__asm { L_00cee691: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012afa4c[];
// FUNCTION: ROBLOXSTUDIO 0x00ceeb10
extern "C" __declspec(naked) void asm_00ceeb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [ecx + 0x70] }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { test edx, edx }
	__asm { jne L_00ceeb8d }
	__asm { mov dword ptr [eax], ecx }
	__asm { inc dword ptr [ebx + 4] }
	__asm { dec dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { cmp dword ptr [esi + 0xc], edx }
	__asm { jle L_00ceeb52 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp ebx, eax }
	__asm { jne L_00ceeb52 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_00ceeb52: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { test ecx, ecx }
	__asm { jne L_00ceeb6d }
	__asm { mov dword ptr [esi], ebx }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0xc], ebx }
	__asm { mov dword ptr [ebx + 0x10], ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ceeb6d: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ebx }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 0x10], ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ceeb8d: }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { inc dword ptr [ebx + 4] }
	__asm { mov eax, 0x88888889 }
	__asm { mul dword ptr [esi + 0x10] }
	__asm { shr edx, 6 }
	__asm { cmp dword ptr [ebx + 4], edx }
	__asm { jne L_00ceebf0 }
	__asm { cmp dword ptr [esi + 8], 4 }
	__asm { jl L_00ceebf0 }
	__asm { cmp ebx, dword ptr [esi] }
	__asm { jne L_00ceebb2 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00ceebb2: }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { dec dword ptr [esi + 8] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebx] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebx + 8] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { push edi }
	__asm { push esi }
	__asm { push ebx }
	__asm { call dword ptr [g_012afa4c] }
	__asm { add esp, 0x24 }
	__asm { pop edi }
	__asm { L_00ceebf0: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012afa4c[];
// FUNCTION: ROBLOXSTUDIO 0x00ceec00
extern "C" __declspec(naked) void asm_00ceec00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 0x38] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { test esi, esi }
	__asm { jne L_00ceec7d }
	__asm { mov dword ptr [eax], ecx }
	__asm { inc dword ptr [ebx + 4] }
	__asm { dec dword ptr [edx + 0xc] }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { cmp dword ptr [edx + 0xc], esi }
	__asm { jle L_00ceec42 }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { cmp ebx, eax }
	__asm { jne L_00ceec42 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_00ceec42: }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { test ecx, ecx }
	__asm { jne L_00ceec5d }
	__asm { mov dword ptr [edx], ebx }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0xc], ebx }
	__asm { mov dword ptr [ebx + 0x10], ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ceec5d: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ebx }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax + 0x10], ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ceec7d: }
	__asm { mov dword ptr [eax + esi*4], ecx }
	__asm { inc dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { shr eax, 6 }
	__asm { cmp dword ptr [ebx + 4], eax }
	__asm { jne L_00ceecdb }
	__asm { cmp dword ptr [edx + 8], 4 }
	__asm { jl L_00ceecdb }
	__asm { cmp ebx, dword ptr [edx] }
	__asm { jne L_00ceec9d }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [edx], eax }
	__asm { L_00ceec9d: }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { dec dword ptr [edx + 8] }
	__asm { push esi }
	__asm { push dword ptr [ebx] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebx + 8] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { push edi }
	__asm { push esi }
	__asm { push ebx }
	__asm { call dword ptr [g_012afa4c] }
	__asm { add esp, 0x24 }
	__asm { pop edi }
	__asm { L_00ceecdb: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012afa4c[];
// FUNCTION: ROBLOXSTUDIO 0x00ceedf0
extern "C" __declspec(naked) void asm_00ceedf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { test esi, esi }
	__asm { jne L_00ceee6d }
	__asm { mov dword ptr [eax], ecx }
	__asm { inc dword ptr [ebx + 4] }
	__asm { dec dword ptr [edx + 0xc] }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { cmp dword ptr [edx + 0xc], esi }
	__asm { jle L_00ceee32 }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { cmp ebx, eax }
	__asm { jne L_00ceee32 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_00ceee32: }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { test ecx, ecx }
	__asm { jne L_00ceee4d }
	__asm { mov dword ptr [edx], ebx }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0xc], ebx }
	__asm { mov dword ptr [ebx + 0x10], ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ceee4d: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ebx }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax + 0x10], ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ceee6d: }
	__asm { mov dword ptr [eax + esi*4], ecx }
	__asm { inc dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { shr eax, 4 }
	__asm { cmp dword ptr [ebx + 4], eax }
	__asm { jne L_00ceeecb }
	__asm { cmp dword ptr [edx + 8], 4 }
	__asm { jl L_00ceeecb }
	__asm { cmp ebx, dword ptr [edx] }
	__asm { jne L_00ceee8d }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [edx], eax }
	__asm { L_00ceee8d: }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { dec dword ptr [edx + 8] }
	__asm { push esi }
	__asm { push dword ptr [ebx] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebx + 8] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { push edi }
	__asm { push esi }
	__asm { push ebx }
	__asm { call dword ptr [g_012afa4c] }
	__asm { add esp, 0x24 }
	__asm { pop edi }
	__asm { L_00ceeecb: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cc8890();
extern "C" void fn_00ceb740();
extern "C" void fn_00cf13f0();
// FUNCTION: ROBLOXSTUDIO 0x00cf1d40
extern "C" __declspec(naked) void asm_00cf1d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { je L_00cf1dbf }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { je L_00cf1dbf }
	__asm { cmp dword ptr [esi + 0x22c], 0 }
	__asm { je L_00cf1dbf }
	__asm { cmp byte ptr [esi + 4], 1 }
	__asm { je L_00cf1dbf }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { je L_00cf1dbf }
	__asm { cmp byte ptr [ebp + 0x48], 0 }
	__asm { jne L_00cf1d7a }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { call fn_00ceb740 }
	__asm { test al, al }
	__asm { jne L_00cf1dbf }
	__asm { L_00cf1d7a: }
	__asm { mov edi, dword ptr [ebp + 0x4c] }
	__asm { test edi, edi }
	__asm { jne L_00cf1d8a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x48] }
	__asm { mov edi, eax }
	__asm { L_00cf1d8a: }
	__asm { push edi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x48] }
	__asm { lea eax, [ebp + 0x20] }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00cc8890 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf13f0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x48 }
	__asm { L_00cf1dbf: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" void fn_00c688b0();
extern "C" void fn_00ce7460();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00cf1dd0
extern "C" __declspec(naked) void asm_00cf1dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00cf1e75 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { test ebx, ebx }
	__asm { js L_00cf1e74 }
	__asm { push esi }
	__asm { push 0x4ae }
	__asm { push 0xf045f0 }
	__asm { push ebx }
	__asm { call fn_00ce7460 }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [edi + 0x49c] }
	__asm { mov ecx, dword ptr [edi + 0x498] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x4a0] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x4a4] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [edi + 0x4a8] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c688b0 }
	__asm { mov eax, dword ptr [edi + 0x458] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x45c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov ax, word ptr [edi + 0x460] }
	__asm { mov word ptr [esi + 0x20], ax }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x10c] }
	__asm { pop esi }
	__asm { L_00cf1e74: }
	__asm { pop ebx }
	__asm { L_00cf1e75: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c68910();
extern "C" void fn_00cc0c40();
extern "C" void fn_00cea0a0();
// FUNCTION: ROBLOXSTUDIO 0x00cf2240
extern "C" __declspec(naked) void asm_00cf2240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push 0x131581c }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { je L_00cf22a3 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebx + 0x454], ecx }
	__asm { cmp ax, word ptr [ebx + 0xe] }
	__asm { jae L_00cf22e2 }
	__asm { xor edi, edi }
	__asm { mov edi, edi }
	__asm { L_00cf2270: }
	__asm { mov eax, dword ptr [ebx + 0x22c] }
	__asm { cmp byte ptr [eax + edi], 0 }
	__asm { je L_00cf228d }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0xf8] }
	__asm { add ecx, edi }
	__asm { call fn_00cc0c40 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { L_00cf228d: }
	__asm { movzx eax, word ptr [ebx + 0xe] }
	__asm { inc esi }
	__asm { add edi, 0x1208 }
	__asm { cmp esi, eax }
	__asm { jb L_00cf2270 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_00cf22a3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 1 }
	__asm { push 0 }
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
	__asm { mov ecx, ebx }
	__asm { call fn_00cea0a0 }
	__asm { test eax, eax }
	__asm { je L_00cf22e2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [eax + 0xf8] }
	__asm { call fn_00cc0c40 }
	__asm { L_00cf22e2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_01313910[];
extern "C" char g_01313914[];
extern "C" void fn_00c6c260();
extern "C" void fn_00c6c320();
extern "C" void fn_00c6c4d0();
extern "C" void fn_00c6ca80();
extern "C" void fn_00c6cab0();
extern "C" void fn_00c6cf00();
extern "C" void fn_00c6e2e0();
extern "C" void fn_00ce9170();
// FUNCTION: ROBLOXSTUDIO 0x00cf2360
extern "C" __declspec(naked) void asm_00cf2360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e6d9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x124 }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x130] }
	__asm { call fn_00c6c260 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x130] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6e2e0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x14 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { call fn_00ce9170 }
	__asm { sub dword ptr [ebp - 0x14], eax }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x130] }
	__asm { sbb dword ptr [ebp - 0x10], edx }
	__asm { call fn_00c6cab0 }
	__asm { mov eax, dword ptr [g_01313914] }
	__asm { test al, 1 }
	__asm { jne L_00cf240c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313914], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00c6c4d0 }
	__asm { mov byte ptr [g_01313910], al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00cf2411 }
	__asm { L_00cf240c: }
	__asm { mov al, byte ptr [g_01313910] }
	__asm { L_00cf2411: }
	__asm { test al, al }
	__asm { jne L_00cf242c }
	__asm { push 8 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00c6ca80 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { jmp L_00cf242f }
	__asm { L_00cf242c: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { L_00cf242f: }
	__asm { push 1 }
	__asm { push 0x40 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x130] }
	__asm { call fn_00c6cf00 }
	__asm { lea ecx, [ebp - 0x130] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c6c320 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00cf33b0
extern "C" __declspec(naked) void asm_00cf33b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xc }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { jne L_00cf33ed }
	__asm { call fn_00cf661e }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi], 1 }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cf33ed: }
	__asm { cmp eax, 1 }
	__asm { jne L_00cf3439 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi], 2 }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cf3439: }
	__asm { call fn_00cf661e }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, eax }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { inc dword ptr [esi] }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6cf00();
// FUNCTION: ROBLOXSTUDIO 0x00cf3530
extern "C" __declspec(naked) void asm_00cf3530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test ebx, ebx }
	__asm { je L_00cf3569 }
	__asm { L_00cf3546: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { movzx eax, byte ptr [esi + eax] }
	__asm { lea ecx, [ecx + eax*8] }
	__asm { movzx eax, word ptr [ecx + 8] }
	__asm { push eax }
	__asm { push dword ptr [ecx + 4] }
	__asm { mov ecx, edi }
	__asm { call fn_00c6cf00 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { inc esi }
	__asm { cmp esi, ebx }
	__asm { jb L_00cf3546 }
	__asm { L_00cf3569: }
	__asm { test byte ptr [edi], 7 }
	__asm { je L_00cf35ac }
	__asm { mov al, byte ptr [edi] }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { and al, 7 }
	__asm { mov bl, 8 }
	__asm { sub bl, al }
	__asm { xor ecx, ecx }
	__asm { movzx edx, bl }
	__asm { lea eax, [esi + 8] }
	__asm { L_00cf3581: }
	__asm { cmp word ptr [eax], dx }
	__asm { ja L_00cf359b }
	__asm { inc ecx }
	__asm { add eax, 8 }
	__asm { cmp ecx, 0x100 }
	__asm { jb L_00cf3581 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cf359b: }
	__asm { movzx eax, bl }
	__asm { push 0 }
	__asm { push eax }
	__asm { push dword ptr [esi + ecx*8 + 4] }
	__asm { mov ecx, edi }
	__asm { call fn_00c6cf00 }
	__asm { L_00cf35ac: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00cf3990
extern "C" __declspec(naked) void asm_00cf3990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xc }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { jne L_00cf39cd }
	__asm { call fn_00cf661e }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi], 1 }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cf39cd: }
	__asm { cmp eax, 1 }
	__asm { jne L_00cf3a19 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi], 2 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cf3a19: }
	__asm { call fn_00cf661e }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, eax }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { jne L_00cf3a56 }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { L_00cf3a56: }
	__asm { inc dword ptr [esi] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf3df0
extern "C" __declspec(naked) void asm_00cf3df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { or eax, dword ptr [esi + 0x24] }
	__asm { jne L_00cf3e0a }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { L_00cf3e0a: }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, ecx }
	__asm { jne L_00cf3e2d }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { inc eax }
	__asm { and eax, 0xffffff }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_00cf3e2d: }
	__asm { mov edx, ecx }
	__asm { sub edx, eax }
	__asm { and edx, 0xffffff }
	__asm { cmp edx, 0x7fffff }
	__asm { jbe L_00cf3e7b }
	__asm { mov edx, eax }
	__asm { sub edx, ecx }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { and edx, 0xffffff }
	__asm { mov dword ptr [ecx], edx }
	__asm { cmp edx, 0x3e8 }
	__asm { jbe L_00cf3e6b }
	__asm { cmp edx, 0xc350 }
	__asm { jbe L_00cf3e65 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_00cf3e65: }
	__asm { mov dword ptr [ecx], 0x3e8 }
	__asm { L_00cf3e6b: }
	__asm { inc eax }
	__asm { and eax, 0xffffff }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_00cf3e7b: }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e101a8[];
extern "C" char g_0131c9ac[];
extern "C" void fn_00cf6221();
extern "C" void fn_00cf624c();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x00cf60f0
extern "C" __declspec(naked) void asm_00cf60f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [ebp + 0xc], esi }
	__asm { jbe L_00cf6136 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 8] }
	__asm { L_00cf6100: }
	__asm { movzx edx, word ptr [ecx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ebx, edx }
	__asm { shr ebx, 8 }
	__asm { xor bl, byte ptr [esi + eax] }
	__asm { inc esi }
	__asm { movzx eax, bl }
	__asm { add ax, dx }
	__asm { movzx edx, word ptr [ecx + 2] }
	__asm { imul ax, dx }
	__asm { movzx edx, word ptr [ecx + 4] }
	__asm { add ax, dx }
	__asm { mov word ptr [ecx], ax }
	__asm { movzx eax, bl }
	__asm { add edi, eax }
	__asm { mov dword ptr [ecx + 8], edi }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { jb L_00cf6100 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00cf6136: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call L_00cf6179 }
	__asm { mov eax, 0x400000 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov dword ptr [esi], 0x38 }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi + 0xc], 0xb00 }
	__asm { mov dword ptr [esi + 0x10], 0xf04ba0 }
	__asm { call fn_00cf6221 }
	__asm { test eax, eax }
	__asm { jns L_00cf6175 }
	__asm { mov byte ptr [g_0131c9ac], 1 }
	__asm { L_00cf6175: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00cf6179: }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0x18 }
	__asm { xor edi, edi }
	__asm { lea eax, [esi + 0x14] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00cf6804 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 0x2c], edi }
	__asm { mov dword ptr [esi + 0x30], edi }
	__asm { mov dword ptr [esi + 0x34], edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [esi + 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e101a8] }
	__asm { lea ecx, [esi + 0x2c] }
	__asm { pop esi }
	__asm { jmp fn_00cf624c }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_00e101c0[];
extern "C" void fn_00555960();
extern "C" void fn_00cf61b2();
extern "C" void fn_00cf6674();
// FUNCTION: ROBLOXSTUDIO 0x00cf61dc
extern "C" __declspec(naked) void asm_00cf61dc()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea edi, [esi + 0x14] }
	__asm { push edi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [esi + 0x30] }
	__asm { jg L_00cf6210 }
	__asm { test eax, eax }
	__asm { js L_00cf6210 }
	__asm { cmp eax, dword ptr [esi + 0x30] }
	__asm { jne L_00cf6203 }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { jmp L_00cf6212 }
	__asm { L_00cf6203: }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x2c] }
	__asm { call fn_00cf61b2 }
	__asm { mov esi, dword ptr [eax] }
	__asm { jmp L_00cf6212 }
	__asm { L_00cf6210: }
	__asm { xor esi, esi }
	__asm { L_00cf6212: }
	__asm { push edi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { push esi }
	__asm { push esi }
	__asm { push ecx }
	__asm { call fn_00555960 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00cf6248 }
	__asm { call dword ptr [g_00e101c0] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jle L_00cf6248 }
	__asm { movzx esi, si }
	__asm { or esi, 0x80070000 }
	__asm { L_00cf6248: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00cf625f }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6674 }
	__asm { and dword ptr [esi], 0 }
	__asm { pop ecx }
	__asm { L_00cf625f: }
	__asm { and dword ptr [esi + 4], 0 }
	__asm { and dword ptr [esi + 8], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012b55c0[];
extern "C" void fn_00cf7200();
extern "C" void fn_00cf7310();
// FUNCTION: ROBLOXSTUDIO 0x00cf7250
extern "C" __declspec(naked) void asm_00cf7250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -2 }
	__asm { push 0x1178de8 }
	__asm { push 0xcf7009 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor dword ptr [ebp - 8], eax }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x400000 }
	__asm { call fn_00cf7310 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00cf72ef }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub eax, 0x400000 }
	__asm { push eax }
	__asm { push 0x400000 }
	__asm { call fn_00cf7200 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00cf72ef }
	__asm { mov eax, dword ptr [eax + 0x24] }
	__asm { shr eax, 0x1f }
	__asm { not eax }
	__asm { and eax, 1 }
	__asm { mov dword ptr [ebp - 4], 0xfffffffe }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { xor ecx, ecx }
	__asm { cmp dword ptr [eax], 0xc0000005 }
	__asm { sete cl }
	__asm { mov eax, ecx }
	__asm { ret }
	__asm { mov esp, dword ptr [ebp - 0x18] }
	__asm { L_00cf72ef: }
	__asm { mov dword ptr [ebp - 4], 0xfffffffe }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf76ea
extern "C" __declspec(naked) void asm_00cf76ea()
{
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00cf76f9 }
	__asm { and dword ptr [eax], 0 }
	__asm { L_00cf76f9: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { test ebx, ebx }
	__asm { je L_00cf7704 }
	__asm { and dword ptr [ebx], 0 }
	__asm { L_00cf7704: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { test edx, edx }
	__asm { jne L_00cf7715 }
	__asm { mov eax, 0x8876086c }
	__asm { jmp L_00cf77a0 }
	__asm { L_00cf7715: }
	__asm { push edi }
	__asm { mov edi, dword ptr [edx] }
	__asm { mov eax, edi }
	__asm { mov ecx, 0xffff0000 }
	__asm { and eax, ecx }
	__asm { cmp eax, 0x46580000 }
	__asm { je L_00cf774f }
	__asm { cmp eax, 0x54580000 }
	__asm { je L_00cf774f }
	__asm { cmp eax, 0x7ffe0000 }
	__asm { je L_00cf774f }
	__asm { cmp eax, 0x7fff0000 }
	__asm { je L_00cf774f }
	__asm { cmp eax, 0xfffe0000 }
	__asm { je L_00cf774f }
	__asm { cmp eax, ecx }
	__asm { je L_00cf774f }
	__asm { mov eax, 0x88760b59 }
	__asm { jmp L_00cf779f }
	__asm { L_00cf774f: }
	__asm { lea ecx, [edx + 4] }
	__asm { mov edx, 0xffff }
	__asm { push esi }
	__asm { L_00cf7758: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { js L_00cf77c4 }
	__asm { mov esi, eax }
	__asm { and esi, edx }
	__asm { cmp esi, edx }
	__asm { je L_00cf77cc }
	__asm { cmp esi, 0xfffe }
	__asm { jne L_00cf77a5 }
	__asm { shr eax, 0x10 }
	__asm { and eax, 0x7fff }
	__asm { cmp eax, 1 }
	__asm { jbe L_00cf77b7 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, dword ptr [ecx + 4] }
	__asm { jne L_00cf77b7 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { test edx, edx }
	__asm { je L_00cf778f }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [edx], ecx }
	__asm { L_00cf778f: }
	__asm { test ebx, ebx }
	__asm { je L_00cf779c }
	__asm { lea eax, [eax*4 - 4] }
	__asm { mov dword ptr [ebx], eax }
	__asm { L_00cf779c: }
	__asm { xor eax, eax }
	__asm { L_00cf779e: }
	__asm { pop esi }
	__asm { L_00cf779f: }
	__asm { pop edi }
	__asm { L_00cf77a0: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00cf77a5: }
	__asm { mov ebx, edi }
	__asm { and ebx, edx }
	__asm { cmp ebx, 0x200 }
	__asm { jb L_00cf77bc }
	__asm { shr eax, 0x18 }
	__asm { and eax, 0xf }
	__asm { L_00cf77b7: }
	__asm { lea ecx, [ecx + eax*4] }
	__asm { jmp L_00cf77c4 }
	__asm { L_00cf77bc: }
	__asm { cmp esi, 0x51 }
	__asm { jne L_00cf77c4 }
	__asm { add ecx, 0x14 }
	__asm { L_00cf77c4: }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { add ecx, 4 }
	__asm { jmp L_00cf7758 }
	__asm { L_00cf77cc: }
	__asm { xor eax, eax }
	__asm { inc eax }
	__asm { jmp L_00cf779e }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf77d1();
extern "C" void fn_00cfa9f8();
extern "C" void fn_00cfaa19();
// FUNCTION: ROBLOXSTUDIO 0x00cf77f2
extern "C" __declspec(naked) void asm_00cf77f2()
{
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { cmp ebx, esi }
	__asm { push edi }
	__asm { je L_00cf7805 }
	__asm { mov dword ptr [ebx], esi }
	__asm { L_00cf7805: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, esi }
	__asm { je L_00cf7810 }
	__asm { cmp ebx, esi }
	__asm { jne L_00cf7817 }
	__asm { L_00cf7810: }
	__asm { mov eax, 0x8876086c }
	__asm { jmp L_00cf786c }
	__asm { L_00cf7817: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, 0xffff0000 }
	__asm { and eax, ecx }
	__asm { cmp eax, 0xfffe0000 }
	__asm { je L_00cf782b }
	__asm { cmp eax, ecx }
	__asm { jne L_00cf7868 }
	__asm { L_00cf782b: }
	__asm { push 0x20 }
	__asm { call fn_00cf661e }
	__asm { cmp eax, esi }
	__asm { pop ecx }
	__asm { je L_00cf7840 }
	__asm { mov ecx, eax }
	__asm { call fn_00cfa9f8 }
	__asm { mov esi, eax }
	__asm { L_00cf7840: }
	__asm { test esi, esi }
	__asm { jne L_00cf784b }
	__asm { mov eax, 0x8007000e }
	__asm { jmp L_00cf786c }
	__asm { L_00cf784b: }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00cfaa19 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jge L_00cf7868 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00cf77d1 }
	__asm { mov eax, edi }
	__asm { jmp L_00cf786c }
	__asm { L_00cf7868: }
	__asm { mov dword ptr [ebx], esi }
	__asm { xor eax, eax }
	__asm { L_00cf786c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf7873
extern "C" __declspec(naked) void asm_00cf7873()
{
	__asm { L_00cf7873: }
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov cx, word ptr [esi + 0xa] }
	__asm { test cx, cx }
	__asm { push edi }
	__asm { je L_00cf78d6 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { add eax, dword ptr [edi + 8] }
	__asm { and dword ptr [ebp + 0x10], 0 }
	__asm { test cx, cx }
	__asm { jbe L_00cf7928 }
	__asm { push ebx }
	__asm { lea ebx, [eax + 4] }
	__asm { L_00cf78a0: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { test ecx, ecx }
	__asm { je L_00cf78c4 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { add eax, ecx }
	__asm { movzx ecx, word ptr [eax + 8] }
	__asm { imul ecx, dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call L_00cf7873 }
	__asm { L_00cf78c4: }
	__asm { movzx eax, word ptr [esi + 0xa] }
	__asm { inc dword ptr [ebp + 0x10] }
	__asm { add ebx, 8 }
	__asm { cmp dword ptr [ebp + 0x10], eax }
	__asm { jb L_00cf78a0 }
	__asm { pop ebx }
	__asm { jmp L_00cf7928 }
	__asm { L_00cf78d6: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp word ptr [eax + 4], 0 }
	__asm { jne L_00cf78ea }
	__asm { movzx ecx, word ptr [esi + 6] }
	__asm { movzx eax, word ptr [esi + 4] }
	__asm { jmp L_00cf7908 }
	__asm { L_00cf78ea: }
	__asm { cmp word ptr [esi], 3 }
	__asm { je L_00cf78fa }
	__asm { movzx ecx, word ptr [esi + 6] }
	__asm { movzx eax, word ptr [esi + 4] }
	__asm { jmp L_00cf7902 }
	__asm { L_00cf78fa: }
	__asm { movzx ecx, word ptr [esi + 4] }
	__asm { movzx eax, word ptr [esi + 6] }
	__asm { L_00cf7902: }
	__asm { add ecx, 3 }
	__asm { sar ecx, 2 }
	__asm { L_00cf7908: }
	__asm { imul ecx, eax }
	__asm { imul ecx, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { add dword ptr [eax], ecx }
	__asm { movzx eax, word ptr [esi + 4] }
	__asm { movzx ecx, word ptr [esi + 6] }
	__asm { imul ecx, eax }
	__asm { imul ecx, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { add dword ptr [eax], ecx }
	__asm { L_00cf7928: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00cfdff0();
extern "C" void fn_00cff670();
extern "C" void fn_00cff780();
// FUNCTION: ROBLOXSTUDIO 0x00cfbbb0
extern "C" __declspec(naked) void asm_00cfbbb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x38 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0x38 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { push 0xe48230 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_00cff780 }
	__asm { test eax, eax }
	__asm { jne L_00cfbc45 }
	__asm { push esi }
	__asm { push 4 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { call fn_00cfdff0 }
	__asm { mov esi, eax }
	__asm { cmp esi, 1 }
	__asm { je L_00cfbc36 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { call fn_00cff670 }
	__asm { cmp esi, 2 }
	__asm { je L_00cfbc29 }
	__asm { cmp esi, -5 }
	__asm { jne L_00cfbc1f }
	__asm { cmp dword ptr [ebp - 0x34], 0 }
	__asm { je L_00cfbc29 }
	__asm { L_00cfbc1f: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00cfbc29: }
	__asm { pop esi }
	__asm { mov eax, 0xfffffffd }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00cfbc36: }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [edi], eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { call fn_00cff670 }
	__asm { pop esi }
	__asm { L_00cfbc45: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00cfc9f0();
extern "C" void fn_00cfd260();
extern "C" void fn_00cfd570();
// FUNCTION: ROBLOXSTUDIO 0x00cfbc50
extern "C" __declspec(naked) void asm_00cfbc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x38 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x38 }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0xe48230 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cfd570 }
	__asm { test eax, eax }
	__asm { jne L_00cfbcdc }
	__asm { push esi }
	__asm { push 4 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { call fn_00cfc9f0 }
	__asm { mov esi, eax }
	__asm { cmp esi, 1 }
	__asm { je L_00cfbccd }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { call fn_00cfd260 }
	__asm { mov eax, 0xfffffffb }
	__asm { test esi, esi }
	__asm { cmove esi, eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00cfbccd: }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [edi], eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { call fn_00cfd260 }
	__asm { pop esi }
	__asm { L_00cfbcdc: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cfd260
extern "C" __declspec(naked) void asm_00cfd260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00cfd32c }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00cfd32c }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { cmp edi, 0x2a }
	__asm { je L_00cfd2af }
	__asm { cmp edi, 0x45 }
	__asm { je L_00cfd2af }
	__asm { cmp edi, 0x49 }
	__asm { je L_00cfd2af }
	__asm { cmp edi, 0x5b }
	__asm { je L_00cfd2af }
	__asm { cmp edi, 0x67 }
	__asm { je L_00cfd2af }
	__asm { cmp edi, 0x71 }
	__asm { je L_00cfd2af }
	__asm { cmp edi, 0x29a }
	__asm { je L_00cfd2af }
	__asm { pop edi }
	__asm { mov eax, 0xfffffffe }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cfd2af: }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00cfd2c2 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00cfd2c2: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [eax + 0x44] }
	__asm { test eax, eax }
	__asm { je L_00cfd2d8 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00cfd2d8: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [eax + 0x40] }
	__asm { test eax, eax }
	__asm { je L_00cfd2ee }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00cfd2ee: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [eax + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00cfd304 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00cfd304: }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { xor eax, eax }
	__asm { cmp edi, 0x71 }
	__asm { mov ecx, 0xfffffffd }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { cmove eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cfd32c: }
	__asm { mov eax, 0xfffffffe }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cfbcf0();
extern "C" void fn_00cffa40();
extern "C" void fn_00d00010();
// FUNCTION: ROBLOXSTUDIO 0x00cfd5c0
extern "C" __declspec(naked) void asm_00cfd5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { je L_00cfd667 }
	__asm { mov edi, dword ptr [esi + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00cfd667 }
	__asm { cmp dword ptr [esi + 0x20], 0 }
	__asm { je L_00cfd667 }
	__asm { cmp dword ptr [esi + 0x24], 0 }
	__asm { je L_00cfd667 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x2c], 2 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { test eax, eax }
	__asm { jns L_00cfd620 }
	__asm { neg eax }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { L_00cfd620: }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { test ecx, ecx }
	__asm { push 0 }
	__asm { mov eax, 0x71 }
	__asm { mov edx, 0x2a }
	__asm { cmovne eax, edx }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { push 0 }
	__asm { cmp ecx, 2 }
	__asm { jne L_00cfd647 }
	__asm { call fn_00cfbcf0 }
	__asm { jmp L_00cfd64c }
	__asm { L_00cfd647: }
	__asm { call fn_00cffa40 }
	__asm { L_00cfd64c: }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { push edi }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { call fn_00d00010 }
	__asm { add esp, 4 }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cfd667: }
	__asm { pop edi }
	__asm { mov eax, 0xfffffffe }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cff7a0();
// FUNCTION: ROBLOXSTUDIO 0x00cff6c0
extern "C" __declspec(naked) void asm_00cff6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00cff771 }
	__asm { cmp byte ptr [eax], 0x31 }
	__asm { jne L_00cff771 }
	__asm { cmp dword ptr [ebp + 0x14], 0x38 }
	__asm { jne L_00cff771 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { jne L_00cff6f1 }
	__asm { lea eax, [esi - 2] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00cff6f1: }
	__asm { cmp dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { jne L_00cff70c }
	__asm { mov dword ptr [esi + 0x20], 0xcffcc0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { L_00cff70c: }
	__asm { cmp dword ptr [esi + 0x24], 0 }
	__asm { jne L_00cff719 }
	__asm { mov dword ptr [esi + 0x24], 0xcffce0 }
	__asm { L_00cff719: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { push edi }
	__asm { push 0x1bcc }
	__asm { push 1 }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call eax }
	__asm { mov edi, eax }
	__asm { add esp, 0xc }
	__asm { test edi, edi }
	__asm { jne L_00cff73b }
	__asm { lea eax, [edi - 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00cff73b: }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x1c], edi }
	__asm { push esi }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_00cff7a0 }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { je L_00cff768 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call ecx }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { L_00cff768: }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00cff771: }
	__asm { mov eax, 0xfffffffa }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00cff8a0();
// FUNCTION: ROBLOXSTUDIO 0x00cff7a0
extern "C" __declspec(naked) void asm_00cff7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00cff84a }
	__asm { mov ebx, dword ptr [edi + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00cff84a }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { jns L_00cff7ce }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { neg esi }
	__asm { jmp L_00cff7df }
	__asm { L_00cff7ce: }
	__asm { mov eax, esi }
	__asm { sar eax, 4 }
	__asm { inc eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp esi, 0x30 }
	__asm { jge L_00cff7df }
	__asm { and esi, 0xf }
	__asm { L_00cff7df: }
	__asm { test esi, esi }
	__asm { je L_00cff7ed }
	__asm { cmp esi, 8 }
	__asm { jl L_00cff83e }
	__asm { cmp esi, 0xf }
	__asm { jg L_00cff83e }
	__asm { L_00cff7ed: }
	__asm { mov eax, dword ptr [ebx + 0x34] }
	__asm { test eax, eax }
	__asm { je L_00cff80c }
	__asm { cmp dword ptr [ebx + 0x24], esi }
	__asm { je L_00cff80c }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x28] }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebx + 0x34], 0 }
	__asm { L_00cff80c: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov dword ptr [ebx + 0x24], esi }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00cff83e }
	__asm { push edi }
	__asm { mov dword ptr [eax + 0x28], 0 }
	__asm { mov dword ptr [eax + 0x2c], 0 }
	__asm { mov dword ptr [eax + 0x30], 0 }
	__asm { call fn_00cff8a0 }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cff83e: }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov eax, 0xfffffffe }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cff84a: }
	__asm { pop edi }
	__asm { mov eax, 0xfffffffe }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00d00180();
// FUNCTION: ROBLOXSTUDIO 0x00d008c0
extern "C" __declspec(naked) void asm_00d008c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00d00180 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp + 0x14], 0 }
	__asm { je L_00d0091a }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov byte ptr [ecx + eax], bl }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ecx, ebx }
	__asm { shr ecx, 8 }
	__asm { mov byte ptr [edx + eax], cl }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov cl, bl }
	__asm { not cl }
	__asm { mov byte ptr [edx + eax], cl }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ecx, ebx }
	__asm { not ecx }
	__asm { shr ecx, 8 }
	__asm { mov byte ptr [edx + eax], cl }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { L_00d0091a: }
	__asm { test ebx, ebx }
	__asm { je L_00d00937 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_00d00922: }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov al, byte ptr [edi] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { lea edi, [edi + 1] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { dec ebx }
	__asm { jne L_00d00922 }
	__asm { pop edi }
	__asm { L_00d00937: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00d00d30
extern "C" __declspec(naked) void asm_00d00d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [eax + 0x1450] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov ebx, dword ptr [eax + edi*4 + 0xb5c] }
	__asm { lea edx, [edi + edi] }
	__asm { mov dword ptr [ebp + 0x10], ebx }
	__asm { cmp edx, ecx }
	__asm { jg L_00d00e07 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea esi, [esi + ebx*4] }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { L_00d00d61: }
	__asm { jge L_00d00da1 }
	__asm { mov ebx, dword ptr [eax + edx*4 + 0xb60] }
	__asm { mov esi, dword ptr [eax + edx*4 + 0xb5c] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { movzx esi, word ptr [eax + esi*4] }
	__asm { movzx ecx, word ptr [ecx + ebx*4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp cx, si }
	__asm { jb L_00d00da0 }
	__asm { jne L_00d00da1 }
	__asm { mov esi, dword ptr [eax + edx*4 + 0xb5c] }
	__asm { mov cl, byte ptr [ebx + eax + 0x1458] }
	__asm { cmp cl, byte ptr [esi + eax + 0x1458] }
	__asm { ja L_00d00da1 }
	__asm { L_00d00da0: }
	__asm { inc edx }
	__asm { L_00d00da1: }
	__asm { mov esi, dword ptr [eax + edx*4 + 0xb5c] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { movzx ecx, word ptr [ecx] }
	__asm { movzx ebx, word ptr [ebx + esi*4] }
	__asm { cmp cx, bx }
	__asm { jb L_00d00df6 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { jne L_00d00dcf }
	__asm { mov cl, byte ptr [ebx + eax + 0x1458] }
	__asm { cmp cl, byte ptr [esi + eax + 0x1458] }
	__asm { jbe L_00d00de8 }
	__asm { L_00d00dcf: }
	__asm { mov dword ptr [eax + edi*4 + 0xb5c], esi }
	__asm { mov ecx, dword ptr [eax + 0x1450] }
	__asm { mov edi, edx }
	__asm { add edx, edx }
	__asm { cmp edx, ecx }
	__asm { jle L_00d00d61 }
	__asm { L_00d00de8: }
	__asm { pop esi }
	__asm { mov dword ptr [eax + edi*4 + 0xb5c], ebx }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d00df6: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { mov dword ptr [eax + edi*4 + 0xb5c], ecx }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d00e07: }
	__asm { mov dword ptr [eax + edi*4 + 0xb5c], ebx }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00d00e20
extern "C" __declspec(naked) void asm_00d00e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { movzx ebx, word ptr [eax + 2] }
	__asm { xor edx, edx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { lea edi, [edx + 7] }
	__asm { lea esi, [edx + 4] }
	__asm { test ebx, ebx }
	__asm { jne L_00d00e49 }
	__asm { mov edi, 0x8a }
	__asm { lea esi, [edx + 3] }
	__asm { L_00d00e49: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov edx, 0xffff }
	__asm { mov word ptr [eax + ecx*4 + 6], dx }
	__asm { mov edx, 0 }
	__asm { test ecx, ecx }
	__asm { js L_00d00ef0 }
	__asm { add eax, 6 }
	__asm { inc ecx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { L_00d00e70: }
	__asm { mov ecx, ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { inc edx }
	__asm { movzx ebx, word ptr [ebx] }
	__asm { cmp edx, edi }
	__asm { jge L_00d00e81 }
	__asm { cmp ecx, ebx }
	__asm { je L_00d00ee7 }
	__asm { L_00d00e81: }
	__asm { cmp edx, esi }
	__asm { jge L_00d00e8f }
	__asm { add word ptr [eax + ecx*4 + 0xa7c], dx }
	__asm { jmp L_00d00ebe }
	__asm { L_00d00e8f: }
	__asm { test ecx, ecx }
	__asm { je L_00d00ea9 }
	__asm { cmp ecx, dword ptr [ebp - 4] }
	__asm { je L_00d00ea0 }
	__asm { inc word ptr [eax + ecx*4 + 0xa7c] }
	__asm { L_00d00ea0: }
	__asm { inc word ptr [eax + 0xabc] }
	__asm { jmp L_00d00ebe }
	__asm { L_00d00ea9: }
	__asm { cmp edx, 0xa }
	__asm { jg L_00d00eb7 }
	__asm { inc word ptr [eax + 0xac0] }
	__asm { jmp L_00d00ebe }
	__asm { L_00d00eb7: }
	__asm { inc word ptr [eax + 0xac4] }
	__asm { L_00d00ebe: }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test ebx, ebx }
	__asm { jne L_00d00ed1 }
	__asm { mov edi, 0x8a }
	__asm { lea esi, [edx + 3] }
	__asm { jmp L_00d00ee7 }
	__asm { L_00d00ed1: }
	__asm { cmp ecx, ebx }
	__asm { jne L_00d00edf }
	__asm { mov edi, 6 }
	__asm { lea esi, [edi - 3] }
	__asm { jmp L_00d00ee7 }
	__asm { L_00d00edf: }
	__asm { mov edi, 7 }
	__asm { lea esi, [edi - 3] }
	__asm { L_00d00ee7: }
	__asm { add dword ptr [ebp + 0xc], 4 }
	__asm { dec dword ptr [ebp + 0x10] }
	__asm { jne L_00d00e70 }
	__asm { L_00d00ef0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x00d01f20
extern "C" __declspec(naked) void asm_00d01f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e80c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00d01f6c }
	__asm { mov dword ptr [edi + 0x2c], 0xf10e24 }
	__asm { mov dword ptr [edi + 0x34], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00d01f6c: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe844fc }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xf10de4 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { lea ebx, [esi + 0x18] }
	__asm { lea esi, [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00d01fb8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00d01fb8: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [edi], 0xf10e04 }
	__asm { mov dword ptr [esi], 0xf10e10 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x2c], 0xf10e18 }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x28], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x00d02020
extern "C" __declspec(naked) void asm_00d02020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e80c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00d0206c }
	__asm { mov dword ptr [edi + 0x2c], 0xf10e24 }
	__asm { mov dword ptr [edi + 0x34], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00d0206c: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe844fc }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xf10de4 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { lea ebx, [esi + 0x18] }
	__asm { lea esi, [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00d020b8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00d020b8: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [edi], 0xf10e04 }
	__asm { mov dword ptr [esi], 0xf10e10 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x2c], 0xf10e18 }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x28], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00d02120
extern "C" __declspec(naked) void asm_00d02120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e844 }
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
	__asm { je L_00d0216b }
	__asm { mov dword ptr [esi + 0x2c], 0xf10e24 }
	__asm { mov dword ptr [esi + 0x34], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00d0216b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844fc }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi], 0xf10de4 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x18], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x1c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00d021b2 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00d021b2: }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [esi], 0xf10e04 }
	__asm { mov dword ptr [esi + 0x18], 0xf10e10 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x2c], 0xf10e18 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x28], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00d027c0
extern "C" __declspec(naked) void asm_00d027c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e891 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x34] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf10e24 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp - 0x48], 0xf10de4 }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00d02842 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00d02842: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x48], 0xf10e04 }
	__asm { mov dword ptr [ebp - 0x30], 0xf10e10 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x1178f70 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xf10e18 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_004034a0();
// FUNCTION: ROBLOXSTUDIO 0x00d02d70
extern "C" __declspec(naked) void asm_00d02d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp eax, 0x10 }
	__asm { jb L_00d02d88 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { jmp L_00d02d8b }
	__asm { L_00d02d88: }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { L_00d02d8b: }
	__asm { mov edx, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { cmp eax, 0x10 }
	__asm { jb L_00d02d9a }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { jmp L_00d02d9c }
	__asm { L_00d02d9a: }
	__asm { mov ecx, ebx }
	__asm { L_00d02d9c: }
	__asm { push esi }
	__asm { lea esi, [edx + ecx] }
	__asm { cmp eax, 0x10 }
	__asm { jb L_00d02da9 }
	__asm { mov edi, dword ptr [ebx] }
	__asm { jmp L_00d02dab }
	__asm { L_00d02da9: }
	__asm { mov edi, ebx }
	__asm { L_00d02dab: }
	__asm { cmp esi, edi }
	__asm { je L_00d02dc9 }
	__asm { nop }
	__asm { L_00d02db0: }
	__asm { movzx eax, byte ptr [esi - 1] }
	__asm { dec esi }
	__asm { push eax }
	__asm { call dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_00d02dc6 }
	__asm { cmp esi, edi }
	__asm { jne L_00d02db0 }
	__asm { jmp L_00d02dc9 }
	__asm { L_00d02dc6: }
	__asm { lea edi, [esi + 1] }
	__asm { L_00d02dc9: }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { jb L_00d02dd3 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { jmp L_00d02dd5 }
	__asm { L_00d02dd3: }
	__asm { mov eax, ebx }
	__asm { L_00d02dd5: }
	__asm { test edi, edi }
	__asm { jne L_00d02ddd }
	__asm { xor ecx, ecx }
	__asm { jmp L_00d02de1 }
	__asm { L_00d02ddd: }
	__asm { mov ecx, edi }
	__asm { sub ecx, eax }
	__asm { L_00d02de1: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { pop esi }
	__asm { add eax, dword ptr [ebp + 8] }
	__asm { jne L_00d02df9 }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, ebx }
	__asm { call fn_004034a0 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d02df9: }
	__asm { sub eax, edi }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, ebx }
	__asm { call fn_004034a0 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00403540();
extern "C" void fn_00513a40();
extern "C" void fn_008b9d00();
extern "C" void fn_00b67f70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00d02e10
extern "C" __declspec(naked) void asm_00d02e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3dd98 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { je L_00d02e5f }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_00d02e4d }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00d02e4d: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, edi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jns L_00d02ebc }
	__asm { L_00d02e5f: }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b67f70 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008b9d00 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { jb L_00d02ebc }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00d02ebc: }
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

// FUNCTION: ROBLOXSTUDIO 0x00d02ee0
extern "C" __declspec(naked) void asm_00d02ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, 0x100f9d0 }
	__asm { mov eax, ecx }
	__asm { push ebx }
	__asm { mov edi, edi }
	__asm { L_00d02ef0: }
	__asm { mov bl, byte ptr [eax] }
	__asm { cmp bl, byte ptr [edx] }
	__asm { jne L_00d02f10 }
	__asm { test bl, bl }
	__asm { je L_00d02f0c }
	__asm { mov bl, byte ptr [eax + 1] }
	__asm { cmp bl, byte ptr [edx + 1] }
	__asm { jne L_00d02f10 }
	__asm { add eax, 2 }
	__asm { add edx, 2 }
	__asm { test bl, bl }
	__asm { jne L_00d02ef0 }
	__asm { L_00d02f0c: }
	__asm { xor eax, eax }
	__asm { jmp L_00d02f15 }
	__asm { L_00d02f10: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { L_00d02f15: }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { je L_00d02f4d }
	__asm { mov eax, 0xe6d2d4 }
	__asm { nop }
	__asm { L_00d02f20: }
	__asm { mov dl, byte ptr [ecx] }
	__asm { cmp dl, byte ptr [eax] }
	__asm { jne L_00d02f40 }
	__asm { test dl, dl }
	__asm { je L_00d02f3c }
	__asm { mov dl, byte ptr [ecx + 1] }
	__asm { cmp dl, byte ptr [eax + 1] }
	__asm { jne L_00d02f40 }
	__asm { add ecx, 2 }
	__asm { add eax, 2 }
	__asm { test dl, dl }
	__asm { jne L_00d02f20 }
	__asm { L_00d02f3c: }
	__asm { xor eax, eax }
	__asm { jmp L_00d02f45 }
	__asm { L_00d02f40: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { L_00d02f45: }
	__asm { test eax, eax }
	__asm { je L_00d02f4d }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d02f4d: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10000[];
extern "C" char g_00e10004[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00426850();
extern "C" void fn_006b9740();
extern "C" void fn_00d03680();
// FUNCTION: ROBLOXSTUDIO 0x00d037c0
extern "C" __declspec(naked) void asm_00d037c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0x5c }
	__asm { call fn_00426850 }
	__asm { mov edi, eax }
	__asm { cmp edi, -1 }
	__asm { jne L_00d037ed }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d037ed: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00d037f7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_00d037f9 }
	__asm { L_00d037f7: }
	__asm { mov eax, esi }
	__asm { L_00d037f9: }
	__asm { push ebx }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00d03680 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00d03887 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00d03851 }
	__asm { lea eax, [edi + 1] }
	__asm { cmp dword ptr [esi + 0x10], eax }
	__asm { ja L_00d03851 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d03840 }
	__asm { push 0x35 }
	__asm { push 0xf10f98 }
	__asm { push 0xf10fd8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d03851 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00d03840: }
	__asm { movzx eax, cl }
	__asm { push 0xf10ff0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d03851: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00d03859 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00d03859: }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0x20019 }
	__asm { push 0 }
	__asm { lea eax, [edi + 1] }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10000] }
	__asm { test eax, eax }
	__asm { jne L_00d03887 }
	__asm { push dword ptr [ebp - 8] }
	__asm { call dword ptr [g_00e10004] }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d03887: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1026c[];
extern "C" char g_00e1031c[];
extern "C" char g_00e10328[];
extern "C" char g_00e10354[];
extern "C" char g_00e103b4[];
extern "C" char g_00e103b8[];
extern "C" char g_0131ab88[];
extern "C" void fn_006a70e0();
// FUNCTION: ROBLOXSTUDIO 0x00d03c80
extern "C" __declspec(naked) void asm_00d03c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e94d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_00d03cd9 }
	__asm { mov dword ptr [edi], 0x10065e4 }
	__asm { mov dword ptr [edi + 0x10], 0x1004fbc }
	__asm { mov eax, dword ptr [g_00e103b4] }
	__asm { mov dword ptr [edi + 0x78], eax }
	__asm { mov eax, dword ptr [g_00e103b8] }
	__asm { mov dword ptr [edi + 0x78], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00d03cd9: }
	__asm { push esi }
	__asm { push 0 }
	__asm { lea esi, [edi + 0x18] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10328] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0x14], esi }
	__asm { mov dword ptr [edi + eax], 0xf1129c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x78] }
	__asm { mov dword ptr [ecx + edi - 4], eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi], 0xe3addc }
	__asm { mov byte ptr [esi + 0x4c], 0 }
	__asm { mov byte ptr [esi + 0x45], 0 }
	__asm { call dword ptr [g_00e10354] }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov eax, dword ptr [g_0131ab88] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006a70e0 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { jne L_00d03d6b }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 2 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, edi }
	__asm { call dword ptr [g_00e1026c] }
	__asm { L_00d03d6b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10204[];
extern "C" void fn_0042c030();
extern "C" void fn_00986940();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00d04480
extern "C" __declspec(naked) void asm_00d04480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6ea18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x10], 7 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x24], ax }
	__asm { cmp word ptr [edx], ax }
	__asm { jne L_00d044bb }
	__asm { xor ecx, ecx }
	__asm { jmp L_00d044d1 }
	__asm { L_00d044bb: }
	__asm { mov ecx, edx }
	__asm { push esi }
	__asm { lea esi, [ecx + 2] }
	__asm { L_00d044c1: }
	__asm { mov ax, word ptr [ecx] }
	__asm { add ecx, 2 }
	__asm { test ax, ax }
	__asm { jne L_00d044c1 }
	__asm { sub ecx, esi }
	__asm { sar ecx, 1 }
	__asm { pop esi }
	__asm { L_00d044d1: }
	__asm { push ecx }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_0042c030 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00986940 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x10], 8 }
	__asm { jb L_00d04503 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00d04503: }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { push ebx }
	__asm { push 0 }
	__asm { push 0x80 }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { cmovae eax, dword ptr [ebp - 0x3c] }
	__asm { push 0x80000000 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10204] }
	__asm { xor bl, bl }
	__asm { cmp eax, -1 }
	__asm { je L_00d04538 }
	__asm { push eax }
	__asm { mov bl, 1 }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_00d04538: }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { jb L_00d04549 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00d04549: }
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
extern "C" void fn_006b9740();
extern "C" void fn_0088fab0();
// FUNCTION: ROBLOXSTUDIO 0x00d08840
extern "C" __declspec(naked) void asm_00d08840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00d088cc }
	__asm { test esi, esi }
	__asm { jne L_00d0888a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d08875 }
	__asm { push 0x3c }
	__asm { push 0xf11cb0 }
	__asm { push 0x10041ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d0888a }
	__asm { L_00d08875: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf11cf8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d0888a: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00d088cc }
	__asm { cmp dword ptr [esi + 4], -1 }
	__asm { je L_00d088cc }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d088b7 }
	__asm { push 0x3d }
	__asm { push 0xf11cb0 }
	__asm { push 0xe8fc90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d088cc }
	__asm { L_00d088b7: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf11d50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d088cc: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0088fab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0088fab0();
// FUNCTION: ROBLOXSTUDIO 0x00d088f0
extern "C" __declspec(naked) void asm_00d088f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00d0897c }
	__asm { test esi, esi }
	__asm { jne L_00d0893a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d08925 }
	__asm { push 0x3c }
	__asm { push 0xf11cb0 }
	__asm { push 0x10041ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d0893a }
	__asm { L_00d08925: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf11cf8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d0893a: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00d0897c }
	__asm { cmp dword ptr [esi + 8], -1 }
	__asm { je L_00d0897c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d08967 }
	__asm { push 0x3d }
	__asm { push 0xf11cb0 }
	__asm { push 0xe8fc90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d0897c }
	__asm { L_00d08967: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf11d50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d0897c: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0088fab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0088fab0();
// FUNCTION: ROBLOXSTUDIO 0x00d089a0
extern "C" __declspec(naked) void asm_00d089a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00d08a2c }
	__asm { test esi, esi }
	__asm { jne L_00d089ea }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d089d5 }
	__asm { push 0x3c }
	__asm { push 0xf11cb0 }
	__asm { push 0x10041ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d089ea }
	__asm { L_00d089d5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf11cf8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d089ea: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00d08a2c }
	__asm { cmp dword ptr [esi + 0xc], -1 }
	__asm { je L_00d08a2c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d08a17 }
	__asm { push 0x3d }
	__asm { push 0xf11cb0 }
	__asm { push 0xe8fc90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d08a2c }
	__asm { L_00d08a17: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf11d50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d08a2c: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0088fab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00896d00();
// FUNCTION: ROBLOXSTUDIO 0x00d08a50
extern "C" __declspec(naked) void asm_00d08a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00d08ae1 }
	__asm { test esi, esi }
	__asm { jns L_00d08a9e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d08a89 }
	__asm { push 0x4a }
	__asm { push 0xf11cb0 }
	__asm { push 0xe8fd10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d08a9e }
	__asm { L_00d08a89: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf11db8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d08a9e: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00d08ae1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + esi*4], ebx }
	__asm { je L_00d08ae1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d08acc }
	__asm { push 0x4b }
	__asm { push 0xf11cb0 }
	__asm { push 0xe8fd8c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d08ae1 }
	__asm { L_00d08acc: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf11e20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d08ae1: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx + eax*4 - 4] }
	__asm { mov dword ptr [ecx + esi*4], eax }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { dec eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00896d00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00896d00();
// FUNCTION: ROBLOXSTUDIO 0x00d08b10
extern "C" __declspec(naked) void asm_00d08b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00d08ba1 }
	__asm { test esi, esi }
	__asm { jns L_00d08b5e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d08b49 }
	__asm { push 0x4a }
	__asm { push 0xf11cb0 }
	__asm { push 0xe8fd10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d08b5e }
	__asm { L_00d08b49: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf11db8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d08b5e: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00d08ba1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + esi*4], ebx }
	__asm { je L_00d08ba1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d08b8c }
	__asm { push 0x4b }
	__asm { push 0xf11cb0 }
	__asm { push 0xe8fd8c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d08ba1 }
	__asm { L_00d08b8c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf11e20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d08ba1: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx + eax*4 - 4] }
	__asm { mov dword ptr [ecx + esi*4], eax }
	__asm { mov dword ptr [eax + 8], esi }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { dec eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00896d00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 8], 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00896d00();
// FUNCTION: ROBLOXSTUDIO 0x00d08bd0
extern "C" __declspec(naked) void asm_00d08bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00d08c61 }
	__asm { test esi, esi }
	__asm { jns L_00d08c1e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d08c09 }
	__asm { push 0x4a }
	__asm { push 0xf11cb0 }
	__asm { push 0xe8fd10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d08c1e }
	__asm { L_00d08c09: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf11db8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d08c1e: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00d08c61 }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + esi*4], ebx }
	__asm { je L_00d08c61 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d08c4c }
	__asm { push 0x4b }
	__asm { push 0xf11cb0 }
	__asm { push 0xe8fd8c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d08c61 }
	__asm { L_00d08c4c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf11e20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d08c61: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx + eax*4 - 4] }
	__asm { mov dword ptr [ecx + esi*4], eax }
	__asm { mov dword ptr [eax + 0xc], esi }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { dec eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00896d00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0xc], 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00d08f80();
// FUNCTION: ROBLOXSTUDIO 0x00d08c90
extern "C" __declspec(naked) void asm_00d08c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00d08daa }
	__asm { cmp dword ptr [esi + 4], -1 }
	__asm { je L_00d08ce0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d08ccb }
	__asm { push 0x5d }
	__asm { push 0xf114c0 }
	__asm { push 0xf11848 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d08ce0 }
	__asm { L_00d08ccb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf11860 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d08ce0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00d08daa }
	__asm { cmp dword ptr [esi + 8], -1 }
	__asm { je L_00d08d26 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d08d11 }
	__asm { push 0x5e }
	__asm { push 0xf114c0 }
	__asm { push 0xf118d0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d08d26 }
	__asm { L_00d08d11: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf118e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d08d26: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00d08daa }
	__asm { cmp dword ptr [esi + 0xc], -1 }
	__asm { je L_00d08d68 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d08d53 }
	__asm { push 0x5f }
	__asm { push 0xf114c0 }
	__asm { push 0xf11958 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d08d68 }
	__asm { L_00d08d53: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf11970 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d08d68: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00d08daa }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00d08daa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d08d95 }
	__asm { push 0x60 }
	__asm { push 0xf114c0 }
	__asm { push 0xf119e8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d08daa }
	__asm { L_00d08d95: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf11a00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d08daa: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { call fn_00d08f80 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fc993[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00d09110
extern "C" __declspec(naked) void asm_00d09110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012fc993] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00d09134 }
	__asm { push dword ptr [edi + 4] }
	__asm { movzx eax, al }
	__asm { push 0xf11c40 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00d09134: }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 4], esi }
	__asm { jle L_00d0919b }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { nop }
	__asm { L_00d09140: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00d09189 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { cmp dword ptr [eax + 4], esi }
	__asm { je L_00d09189 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d09178 }
	__asm { push 0x67 }
	__asm { push 0xf11cb0 }
	__asm { push 0xe68c94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d09189 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00d09178: }
	__asm { movzx eax, cl }
	__asm { push 0xf11e90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d09189: }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [eax + esi*4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x18] }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 4] }
	__asm { jl L_00d09140 }
	__asm { pop ebx }
	__asm { L_00d0919b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fc993[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00d091b0
extern "C" __declspec(naked) void asm_00d091b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012fc993] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00d091d4 }
	__asm { push dword ptr [edi + 0x14] }
	__asm { movzx eax, al }
	__asm { push 0xf11c64 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00d091d4: }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0x14], esi }
	__asm { jle L_00d0923d }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { nop }
	__asm { L_00d091e0: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00d0922a }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { cmp dword ptr [eax + 8], esi }
	__asm { je L_00d0922a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d09219 }
	__asm { push 0x67 }
	__asm { push 0xf11cb0 }
	__asm { push 0xe68c94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d0922a }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00d09219: }
	__asm { movzx eax, cl }
	__asm { push 0xf11e90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d0922a: }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [eax + esi*4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x20] }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0x14] }
	__asm { jl L_00d091e0 }
	__asm { pop ebx }
	__asm { L_00d0923d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10384[];
extern "C" char g_00e103b0[];
extern "C" char g_00e10528[];
extern "C" void fn_00cf67ec();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x00d09920
extern "C" __declspec(naked) void asm_00d09920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 2 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e103b0] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { test byte ptr [eax + esi + 0xc], 6 }
	__asm { jne L_00d099b7 }
	__asm { movzx eax, word ptr [ebx] }
	__asm { cmp eax, 0xc }
	__asm { lea edx, [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { cmovbe ecx, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp + 0xc], 0xc }
	__asm { mov edi, dword ptr [ecx] }
	__asm { push 0 }
	__asm { lea eax, [edi - 2] }
	__asm { push eax }
	__asm { lea eax, [ebx + 2] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e103b0] }
	__asm { cmp edi, 0xc }
	__asm { jbe L_00d0998c }
	__asm { push 1 }
	__asm { lea eax, [edi - 0xc] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10384] }
	__asm { jmp L_00d099a4 }
	__asm { L_00d0998c: }
	__asm { jae L_00d099a4 }
	__asm { mov eax, 0xc }
	__asm { sub eax, edi }
	__asm { push eax }
	__asm { lea eax, [edi + ebx] }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf6804 }
	__asm { add esp, 0xc }
	__asm { L_00d099a4: }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { test byte ptr [eax + esi + 0xc], 6 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jne L_00d099e0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d099b7: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 0xc], 0xf11ff4 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00d099e0: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 0xc], 0xf11ff4 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
extern "C" void fn_00d098e0();
// FUNCTION: ROBLOXSTUDIO 0x00d09c30
extern "C" __declspec(naked) void asm_00d09c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f060 }
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
	__asm { je L_00d09c85 }
	__asm { cmp edi, 0x71c71c7 }
	__asm { ja L_00d09c7f }
	__asm { lea eax, [edi + edi*8] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00d09c85 }
	__asm { L_00d09c7f: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00d09c85: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00d098e0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { sar edx, 3 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { test eax, eax }
	__asm { je L_00d09cce }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { L_00d09cce: }
	__asm { lea eax, [edi + edi*8] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { lea eax, [ecx + ecx*8] }
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

extern "C" char g_00e10260[];
extern "C" void fn_00d09c30();
// FUNCTION: ROBLOXSTUDIO 0x00d09d10
extern "C" __declspec(naked) void asm_00d09d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_00d09dab }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul esi }
	__asm { sar edx, 3 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x71c71c7 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00d09d61 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00d09d61: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ebx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x71c71c7 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_00d09d98 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00d09c30 }
	__asm { L_00d09d98: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00d09c30 }
	__asm { L_00d09dab: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005dbcf0();
extern "C" void fn_00665970();
extern "C" void fn_00cf67ec();
extern "C" void fn_00d09870();
extern "C" void fn_00d09f60();
// FUNCTION: ROBLOXSTUDIO 0x00d0aa80
extern "C" __declspec(naked) void asm_00d0aa80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f0c0 }
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
	__asm { sar edx, 1 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add ecx, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { cmp ecx, edi }
	__asm { jbe L_00d0aaec }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { lea eax, [edi + edi*2] }
	__asm { push esi }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00d09f60 }
	__asm { L_00d0aad9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00d0aaec: }
	__asm { jae L_00d0aad9 }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_005dbcf0 }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 1 }
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
	__asm { call fn_00d09870 }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add esp, 0x14 }
	__asm { add eax, edx }
	__asm { sub edi, eax }
	__asm { lea eax, [edi + edi*2] }
	__asm { pop edi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 4], eax }
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

extern "C" void fn_00665970();
extern "C" void fn_00cf67ec();
extern "C" void fn_00d098a0();
extern "C" void fn_00d09d10();
extern "C" void fn_00d09fc0();
// FUNCTION: ROBLOXSTUDIO 0x00d0ab80
extern "C" __declspec(naked) void asm_00d0ab80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f0d0 }
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
	__asm { mov eax, 0x38e38e39 }
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
	__asm { jbe L_00d0abed }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { lea eax, [edi + edi*8] }
	__asm { push esi }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00d09fc0 }
	__asm { L_00d0abda: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00d0abed: }
	__asm { jae L_00d0abda }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00d09d10 }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x38e38e39 }
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
	__asm { call fn_00d098a0 }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add esp, 0x14 }
	__asm { add eax, edx }
	__asm { sub edi, eax }
	__asm { lea eax, [edi + edi*8] }
	__asm { pop edi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 4], eax }
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

extern "C" void fn_004038a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6970();
extern "C" void fn_00d03890();
extern "C" void fn_00d0c7a0();
// FUNCTION: ROBLOXSTUDIO 0x00d0c310
extern "C" __declspec(naked) void asm_00d0c310()
{
	__asm { push -1 }
	__asm { push 0xd6f13d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push 0x46 }
	__asm { push 0xf12298 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x2c], 0xf }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { mov byte ptr [esp + 0x18], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x38], 0 }
	__asm { call fn_00d03890 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esp + 0x24], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_00d0c37d }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00d0c37d: }
	__asm { test bl, bl }
	__asm { je L_00d0c390 }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { cmp eax, 0x12c }
	__asm { jg L_00d0c41c }
	__asm { L_00d0c390: }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { xor edi, edi }
	__asm { xor ebx, ebx }
	__asm { xor ebp, ebp }
	__asm { mov dword ptr [esp + 0x10], 2 }
	__asm { L_00d0c3a3: }
	__asm { push 0x32 }
	__asm { push 0xd0c840 }
	__asm { call fn_00d0c7a0 }
	__asm { add esi, eax }
	__asm { push 0x32 }
	__asm { push 0xd0c8b0 }
	__asm { adc edi, edx }
	__asm { call fn_00d0c7a0 }
	__asm { add esp, 0x10 }
	__asm { add ebx, eax }
	__asm { adc ebp, edx }
	__asm { dec dword ptr [esp + 0x10] }
	__asm { jne L_00d0c3a3 }
	__asm { push 0 }
	__asm { sub esi, ebx }
	__asm { push 2 }
	__asm { sbb edi, ebp }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00cf6970 }
	__asm { push 0 }
	__asm { push 0x32 }
	__asm { push edx }
	__asm { push eax }
	__asm { call fn_00cf6970 }
	__asm { push 0 }
	__asm { push 0x3e8 }
	__asm { push edx }
	__asm { push eax }
	__asm { call fn_00cf6970 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { test edx, edx }
	__asm { jl L_00d0c40f }
	__asm { jg L_00d0c40f }
	__asm { cmp eax, 0x64 }
	__asm { jb L_00d0c40f }
	__asm { test edx, edx }
	__asm { jl L_00d0c41c }
	__asm { jg L_00d0c40f }
	__asm { cmp eax, 0xc350 }
	__asm { jbe L_00d0c41c }
	__asm { L_00d0c40f: }
	__asm { mov eax, 0x578 }
	__asm { mov dword ptr [esp + 0xc], 0 }
	__asm { L_00d0c41c: }
	__asm { mov ecx, dword ptr [esp + 0x28] }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x30 }
	__asm { ret }
}

extern "C" void fn_00701aa0();
extern "C" void fn_00cf6522();
extern "C" void fn_00d037c0();
// FUNCTION: ROBLOXSTUDIO 0x00d0c430
extern "C" __declspec(naked) void asm_00d0c430()
{
	__asm { push -1 }
	__asm { push 0xd6f14f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { push esi }
	__asm { lea eax, [esp + 8] }
	__asm { push 0xf12250 }
	__asm { push eax }
	__asm { call fn_00701aa0 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x34], esi }
	__asm { call fn_00d037c0 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { je L_00d0c4b5 }
	__asm { L_00d0c470: }
	__asm { inc esi }
	__asm { cmp dword ptr [esp + 0x18], 0x10 }
	__asm { mov dword ptr [esp + 0x24], 0xffffffff }
	__asm { jb L_00d0c48c }
	__asm { push dword ptr [esp + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00d0c48c: }
	__asm { push esi }
	__asm { lea eax, [esp + 8] }
	__asm { push 0xf12250 }
	__asm { push eax }
	__asm { call fn_00701aa0 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { call fn_00d037c0 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { jne L_00d0c470 }
	__asm { L_00d0c4b5: }
	__asm { cmp dword ptr [esp + 0x18], 0x10 }
	__asm { jb L_00d0c4c8 }
	__asm { push dword ptr [esp + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00d0c4c8: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x24 }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_00410e50();
extern "C" void fn_00cf6522();
extern "C" void fn_00d03a80();
// FUNCTION: ROBLOXSTUDIO 0x00d0c4e0
extern "C" __declspec(naked) void asm_00d0c4e0()
{
	__asm { push -1 }
	__asm { push 0xd6f169 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [esp + 8], 0 }
	__asm { mov dword ptr [esp + 0x20], 0xf }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { push 0x55 }
	__asm { push 0xf121f8 }
	__asm { lea ecx, [esp + 0x2c] }
	__asm { mov dword ptr [esp + 0x4c], 0 }
	__asm { mov dword ptr [esp + 0x40], 0xf }
	__asm { mov dword ptr [esp + 0x3c], 0 }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x28] }
	__asm { push eax }
	__asm { mov byte ptr [esp + 0x4c], 1 }
	__asm { call fn_00d03a80 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esp + 0x38], 0x10 }
	__asm { mov bl, al }
	__asm { mov byte ptr [esp + 0x44], 0 }
	__asm { jb L_00d0c575 }
	__asm { push dword ptr [esp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00d0c575: }
	__asm { mov esi, dword ptr [esp + 0x4c] }
	__asm { mov ecx, esi }
	__asm { test bl, bl }
	__asm { je L_00d0c58b }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { call fn_00410e50 }
	__asm { jmp L_00d0c5a8 }
	__asm { L_00d0c58b: }
	__asm { push 1 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0x101eb04 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { L_00d0c5a8: }
	__asm { cmp dword ptr [esp + 0x20], 0x10 }
	__asm { jb L_00d0c5bb }
	__asm { push dword ptr [esp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00d0c5bb: }
	__asm { mov ecx, dword ptr [esp + 0x3c] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x40 }
	__asm { ret }
}

extern "C" char g_00e13084[];
extern "C" char g_00e1308c[];
extern "C" void fn_00b868b0();
extern "C" void fn_00b86af0();
extern "C" void fn_00b86b40();
// FUNCTION: ROBLOXSTUDIO 0x00d0d1f0
extern "C" __declspec(naked) void asm_00d0d1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push 0xf12474 }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e1308c] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { test edx, edx }
	__asm { je L_00d0d2a1 }
	__asm { push ebx }
	__asm { push edi }
	__asm { L_00d0d217: }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { lea edi, [ebp - 8] }
	__asm { mov ebx, dword ptr [eax + ecx*8 + 4] }
	__asm { add ebx, dword ptr [eax + ecx*8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov ecx, ebx }
	__asm { sub ecx, dword ptr [esi + 0x14] }
	__asm { cmp ecx, edx }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov edi, dword ptr [eax] }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x14] }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00b868b0 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { add dword ptr [esi + 0x14], edi }
	__asm { sub edx, edi }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { cmp dword ptr [esi + 0x14], ebx }
	__asm { jne L_00d0d297 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { sub ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { sar ecx, 3 }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x10], edx }
	__asm { mov eax, dword ptr [eax + edx*8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { test edx, edx }
	__asm { jne L_00d0d294 }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00b86b40 }
	__asm { push 0x2a }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { call fn_00b86af0 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_00d0d294: }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { L_00d0d297: }
	__asm { test edx, edx }
	__asm { jne L_00d0d217 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00d0d2a1: }
	__asm { call dword ptr [g_00e13084] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0e24[];
extern "C" char g_012e0e28[];
extern "C" void fn_00403540();
extern "C" void fn_00412da0();
extern "C" void fn_00793ee0();
extern "C" void fn_00794230();
extern "C" void fn_00d0d600();
// FUNCTION: ROBLOXSTUDIO 0x00d0d360
extern "C" __declspec(naked) void asm_00d0d360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f216 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00d0d600 }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { test ebx, ebx }
	__asm { je L_00d0d465 }
	__asm { push 0x28 }
	__asm { call fn_00794230 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00d0d3ba }
	__asm { push dword ptr [g_012e0e24] }
	__asm { mov ecx, eax }
	__asm { call fn_00793ee0 }
	__asm { mov esi, eax }
	__asm { jmp L_00d0d3bc }
	__asm { L_00d0d3ba: }
	__asm { xor esi, esi }
	__asm { L_00d0d3bc: }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00794230 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00d0d3ec }
	__asm { push dword ptr [g_012e0e28] }
	__asm { mov ecx, eax }
	__asm { call fn_00793ee0 }
	__asm { mov edi, eax }
	__asm { jmp L_00d0d3ee }
	__asm { L_00d0d3ec: }
	__asm { xor edi, edi }
	__asm { L_00d0d3ee: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_00412da0 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { jne L_00d0d42b }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { jmp L_00d0d42d }
	__asm { L_00d0d42b: }
	__asm { mov dword ptr [eax], edi }
	__asm { L_00d0d42d: }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { test edi, edi }
	__asm { jne L_00d0d44d }
	__asm { mov dword ptr [esi + 4], ebx }
	__asm { mov dword ptr [esi + 8], ebx }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d0d44d: }
	__asm { mov dword ptr [edi], ebx }
	__asm { mov dword ptr [esi + 8], ebx }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d0d465: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f91c8[];
extern "C" char g_012f92bc[];
extern "C" void fn_00844130();
extern "C" void fn_00844280();
extern "C" void fn_00844350();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dad6e0
extern "C" __declspec(naked) void asm_00dad6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f92bc }
	__asm { push 0 }
	__asm { push 0xe5e4d4 }
	__asm { push 0xae0 }
	__asm { call fn_00844350 }
	__asm { push 0xde9090 }
	__asm { mov dword ptr [g_012f92bc], 0xe5e3d8 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f86f4 }
	__asm { push 0 }
	__asm { push 0xe5dccc }
	__asm { push 0xe5dcd8 }
	__asm { push 0xe5dce0 }
	__asm { push 0xccc }
	__asm { call fn_00844130 }
	__asm { push 0xde90f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f91c8 }
	__asm { push 0 }
	__asm { push 0xe5e3f4 }
	__asm { push 0xad4 }
	__asm { call fn_00844350 }
	__asm { push 0xde9150 }
	__asm { mov dword ptr [g_012f91c8], 0xe5e3d8 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f9290 }
	__asm { push 0 }
	__asm { push 0xe5e4a4 }
	__asm { push 0xe5e4b4 }
	__asm { push 0xad0 }
	__asm { call fn_00844280 }
	__asm { push 0xde91b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_00842800();
extern "C" void fn_00843260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dadfb0
extern "C" __declspec(naked) void asm_00dadfb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 5 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 3 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xe5de24 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0xe5de28 }
	__asm { push 0 }
	__asm { push 0xe5de50 }
	__asm { push 0xe37160 }
	__asm { push 0xe5dcf8 }
	__asm { push 0xe5de70 }
	__asm { push 0 }
	__asm { push 0x856d30 }
	__asm { mov ecx, 0x12f8a78 }
	__asm { call fn_00842800 }
	__asm { push 0xde9c00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8888 }
	__asm { push 3 }
	__asm { push 0xe5dcf8 }
	__asm { push 0xe5dd74 }
	__asm { push 0 }
	__asm { push 0x858e20 }
	__asm { call fn_00843260 }
	__asm { push 0xde9c10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006bc950();
extern "C" void fn_008677a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf6b0
extern "C" __declspec(naked) void asm_00daf6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 0 }
	__asm { sub esp, 0x20 }
	__asm { mov esi, esp }
	__asm { lea ebx, [esi + 4] }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00daf717 }
	__asm { test bl, 3 }
	__asm { je L_00daf717 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00daf706 }
	__asm { push 0x130 }
	__asm { push 0x10042f8 }
	__asm { push 0x1004338 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00daf717 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00daf706: }
	__asm { movzx eax, al }
	__asm { push 0x1004360 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00daf717: }
	__asm { push 0x131b1b0 }
	__asm { mov dword ptr [ebx], 0 }
	__asm { call fn_006bc950 }
	__asm { fld1 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe52388 }
	__asm { push 0x1032ed8 }
	__asm { push 0 }
	__asm { push 0xe62244 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { fstp dword ptr [esp] }
	__asm { push 0x1004e30 }
	__asm { push 3 }
	__asm { push 0xe62250 }
	__asm { push 1 }
	__asm { push 0xe6225c }
	__asm { push 0xe6226c }
	__asm { push 0xe622a4 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { push 0x8791b0 }
	__asm { mov ecx, 0x12f9878 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi], 0xe61960 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { call fn_008677a0 }
	__asm { push 0xdeb490 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006bc950();
extern "C" void fn_008677a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf7b0
extern "C" __declspec(naked) void asm_00daf7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 0 }
	__asm { sub esp, 0x20 }
	__asm { mov esi, esp }
	__asm { lea ebx, [esi + 4] }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00daf817 }
	__asm { test bl, 3 }
	__asm { je L_00daf817 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00daf806 }
	__asm { push 0x130 }
	__asm { push 0x10042f8 }
	__asm { push 0x1004338 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00daf817 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00daf806: }
	__asm { movzx eax, al }
	__asm { push 0x1004360 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00daf817: }
	__asm { push 0x131b1b0 }
	__asm { mov dword ptr [ebx], 0 }
	__asm { call fn_006bc950 }
	__asm { fld1 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe52388 }
	__asm { push 0x1032ed8 }
	__asm { push 0 }
	__asm { push 0xe62244 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { fstp dword ptr [esp] }
	__asm { push 0x1004e30 }
	__asm { push 3 }
	__asm { push 0xe62250 }
	__asm { push 1 }
	__asm { push 0xe6225c }
	__asm { push 0xe62278 }
	__asm { push 0xe622b4 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { push 0x8796e0 }
	__asm { mov ecx, 0x12f98c0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi], 0xe61960 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { call fn_008677a0 }
	__asm { push 0xdeb560 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006bc950();
extern "C" void fn_00867460();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf8b0
extern "C" __declspec(naked) void asm_00daf8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 0 }
	__asm { sub esp, 0x20 }
	__asm { mov esi, esp }
	__asm { lea ebx, [esi + 4] }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00daf917 }
	__asm { test bl, 3 }
	__asm { je L_00daf917 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00daf906 }
	__asm { push 0x130 }
	__asm { push 0x10042f8 }
	__asm { push 0x1004338 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00daf917 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00daf906: }
	__asm { movzx eax, al }
	__asm { push 0x1004360 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00daf917: }
	__asm { push 0x131b1b0 }
	__asm { mov dword ptr [ebx], 0 }
	__asm { call fn_006bc950 }
	__asm { fld1 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe52388 }
	__asm { push 0x1032ed8 }
	__asm { push 0 }
	__asm { push 0xe62244 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { fstp dword ptr [esp] }
	__asm { push 0x1004e30 }
	__asm { push 3 }
	__asm { push 0xe62250 }
	__asm { push 1 }
	__asm { push 0xe6225c }
	__asm { push 0xe6226c }
	__asm { push 0xe62278 }
	__asm { push 0xe62280 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { push 0x8797e0 }
	__asm { mov ecx, 0x12f9828 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi], 0xe61960 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { call fn_00867460 }
	__asm { push 0xdeb630 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fb278[];
extern "C" char g_012fb294[];
extern "C" char g_012fb2a0[];
extern "C" char g_012fb2a4[];
extern "C" char g_012fb2a8[];
extern "C" void fn_00825140();
extern "C" void fn_0088ccc0();
extern "C" void fn_0088ce80();
extern "C" void fn_0088d350();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db1fc0
extern "C" __declspec(naked) void asm_00db1fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x12fb918 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fb950 }
	__asm { push 0xe674b0 }
	__asm { push 0xe674d8 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x892a10 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0088ccc0 }
	__asm { push 0xdec900 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x12fb8a8 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fb8e0 }
	__asm { push 0xe674b0 }
	__asm { push 0xe674c4 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x892ad0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0088ce80 }
	__asm { push 0xdec960 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c31a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0x12fb240 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fb278 }
	__asm { push 0 }
	__asm { push 0xe67194 }
	__asm { call fn_0088d350 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fb278], 0xe67180 }
	__asm { mov dword ptr [g_012fb2a0], 0x88f0d4 }
	__asm { mov dword ptr [g_012fb2a4], 0 }
	__asm { mov dword ptr [g_012fb2a8], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdec9c0 }
	__asm { mov dword ptr [g_012fb294], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0089bba0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db2de0
extern "C" __declspec(naked) void asm_00db2de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x12fbb90 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fbc00 }
	__asm { push 0 }
	__asm { push 0xe5519c }
	__asm { push 0xe69740 }
	__asm { push 0 }
	__asm { push 0x89c500 }
	__asm { call fn_0089bba0 }
	__asm { push 0xded320 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x12fbb90 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fbbc8 }
	__asm { push 0 }
	__asm { push 0xe5519c }
	__asm { push 0xe69738 }
	__asm { push 0 }
	__asm { push 0x89c500 }
	__asm { call fn_0089bba0 }
	__asm { push 0xded3d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fbb58 }
	__asm { push 0 }
	__asm { push 0xe5519c }
	__asm { push 0xe69720 }
	__asm { push 0 }
	__asm { push 0x89c300 }
	__asm { call fn_0089bba0 }
	__asm { push 0xded480 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013011b8[];
extern "C" char g_013011d4[];
extern "C" char g_013011e0[];
extern "C" char g_013011e4[];
extern "C" char g_013011e8[];
extern "C" void fn_007d5390();
extern "C" void fn_009639e0();
extern "C" void fn_00964330();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbc9f0
extern "C" __declspec(naked) void asm_00dbc9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x1300f38 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1300f78 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe85eec }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push 0xe85e80 }
	__asm { push 0xe85f04 }
	__asm { push 0xe85f18 }
	__asm { mov dword ptr [eax], 0 }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9630a0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009639e0 }
	__asm { push 0xdf4b70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3a61a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x13011b8 }
	__asm { push 0 }
	__asm { push 0xe86104 }
	__asm { call fn_00964330 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_013011b8], 0xe860e4 }
	__asm { mov dword ptr [g_013011e0], 0x968d20 }
	__asm { mov dword ptr [g_013011e4], 0 }
	__asm { mov dword ptr [g_013011e8], 0 }
	__asm { call fn_007d5390 }
	__asm { push 0xdf4b80 }
	__asm { mov dword ptr [g_013011d4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00963cd0();
extern "C" void fn_00963e80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbd080
extern "C" __declspec(naked) void asm_00dbd080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x1300e78 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1300eb8 }
	__asm { push 0 }
	__asm { push 0x14 }
	__asm { push 0xe85e74 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push 0xe85e80 }
	__asm { push 0xe6a304 }
	__asm { push 0xe85eb0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x968640 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00963cd0 }
	__asm { push 0xdf4eb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1300e08 }
	__asm { push 1 }
	__asm { push 0xe85e60 }
	__asm { push 0xe671a0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x969b80 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00963e80 }
	__asm { push 0xdf4ec0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301824[];
extern "C" void fn_00973b60();
extern "C" void fn_00973f60();
extern "C" void fn_00974290();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbdb20
extern "C" __declspec(naked) void asm_00dbdb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1301a08 }
	__asm { push 0 }
	__asm { push 0xe87d3c }
	__asm { push 0xe6275c }
	__asm { push 0xe62764 }
	__asm { push 0x350 }
	__asm { call fn_00973f60 }
	__asm { push 0xdf5610 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1301a60 }
	__asm { push 0 }
	__asm { push 0xe87d3c }
	__asm { push 0xe6275c }
	__asm { push 0xe62780 }
	__asm { push 0x358 }
	__asm { call fn_00973f60 }
	__asm { push 0xdf5670 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1301a34 }
	__asm { push 0 }
	__asm { push 0xe87d3c }
	__asm { push 0xe6275c }
	__asm { push 0xe62770 }
	__asm { push 0x354 }
	__asm { call fn_00973f60 }
	__asm { push 0xdf56d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1301824 }
	__asm { push 0 }
	__asm { push 0xe87cc8 }
	__asm { push 0x368 }
	__asm { call fn_00974290 }
	__asm { push 0xdf5730 }
	__asm { mov dword ptr [g_01301824], 0xe87cac }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1301900 }
	__asm { push 0 }
	__asm { push 0xe87d3c }
	__asm { push 0xe50278 }
	__asm { push 0xe62618 }
	__asm { push 0xe626e0 }
	__asm { push 0x338 }
	__asm { call fn_00973b60 }
	__asm { push 0xdf5790 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303870[];
extern "C" char g_013038a0[];
extern "C" char g_013038a4[];
extern "C" char g_013038a8[];
extern "C" char g_013038d8[];
extern "C" char g_013038dc[];
extern "C" char g_01303950[];
extern "C" char g_01303980[];
extern "C" char g_01303984[];
extern "C" void fn_009a7cb0();
extern "C" void fn_009a8130();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc03f0
extern "C" __declspec(naked) void asm_00dc03f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1303870 }
	__asm { push 0 }
	__asm { push 0xe7383c }
	__asm { push 0x1004e08 }
	__asm { push 0xe83694 }
	__asm { push 0xe92f7c }
	__asm { push 0x70 }
	__asm { call fn_009a7cb0 }
	__asm { push 0xdf7690 }
	__asm { mov dword ptr [g_01303870], 0xe92f60 }
	__asm { mov dword ptr [g_013038a0], 0 }
	__asm { mov dword ptr [g_013038a4], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x13038a8 }
	__asm { push 0 }
	__asm { push 0xe7383c }
	__asm { push 0xe92f90 }
	__asm { push 0xe83694 }
	__asm { push 0xe92fa0 }
	__asm { push 0x78 }
	__asm { call fn_009a7cb0 }
	__asm { push 0xdf76f0 }
	__asm { mov dword ptr [g_013038a8], 0xe92f60 }
	__asm { mov dword ptr [g_013038d8], 0 }
	__asm { mov dword ptr [g_013038dc], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1303950 }
	__asm { push 0 }
	__asm { push 0x1018974 }
	__asm { push 0xe93094 }
	__asm { push 0x90 }
	__asm { call fn_009a8130 }
	__asm { push 0xdf7750 }
	__asm { mov dword ptr [g_01303950], 0xe93078 }
	__asm { mov dword ptr [g_01303980], 0 }
	__asm { mov dword ptr [g_01303984], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013043e8[];
extern "C" char g_01304418[];
extern "C" char g_0130441c[];
extern "C" char g_01304420[];
extern "C" char g_01304450[];
extern "C" char g_01304454[];
extern "C" void fn_009bb150();
extern "C" void fn_009bb660();
extern "C" void fn_009bb840();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0f40
extern "C" __declspec(naked) void asm_00dc0f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x13043e8 }
	__asm { push 6 }
	__asm { push 0xe4e724 }
	__asm { push 0xe7383c }
	__asm { push 0xe7383c }
	__asm { push 0xe949fc }
	__asm { push 0x68 }
	__asm { call fn_009bb660 }
	__asm { push 0xdf89d0 }
	__asm { mov dword ptr [g_013043e8], 0xe949e0 }
	__asm { mov dword ptr [g_01304418], 1 }
	__asm { mov dword ptr [g_0130441c], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1304420 }
	__asm { push 6 }
	__asm { push 0xe73c50 }
	__asm { push 0xe7383c }
	__asm { push 0xe7383c }
	__asm { push 0xe94a54 }
	__asm { push 0x70 }
	__asm { call fn_009bb840 }
	__asm { push 0xdf8a30 }
	__asm { mov dword ptr [g_01304420], 0xe94a38 }
	__asm { mov dword ptr [g_01304450], 0 }
	__asm { mov dword ptr [g_01304454], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1304340 }
	__asm { push 3 }
	__asm { push 0xe5dcf8 }
	__asm { push 0xe94988 }
	__asm { push 0 }
	__asm { push 0x9c1720 }
	__asm { call fn_009bb150 }
	__asm { push 0xdf8a90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e4de68[];
extern "C" char g_00e4de70[];
extern "C" char g_00e4de7c[];
extern "C" char g_00e4de88[];
extern "C" char g_00e4de94[];
extern "C" char g_00e678d0[];
extern "C" char g_0123fc50[];
extern "C" char g_0123fc60[];
extern "C" char g_0123fc64[];
extern "C" char g_0123fc68[];
extern "C" char g_0123fc78[];
extern "C" char g_0123fc7c[];
extern "C" char g_0123fc80[];
extern "C" char g_0123fc90[];
extern "C" char g_0123fc94[];
extern "C" char g_0123fc98[];
extern "C" char g_0123fca8[];
extern "C" char g_0123fcac[];
extern "C" char g_0123fcb0[];
extern "C" char g_0123fcc0[];
extern "C" char g_0123fcc4[];
extern "C" char g_0123fcc8[];
extern "C" char g_0123fcd8[];
extern "C" char g_0123fcdc[];
extern "C" void fn_004038a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc2f40
extern "C" __declspec(naked) void asm_00dc2f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4128c }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [g_00e678d0], cl }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, 0x10 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xe678d0 }
	__asm { mov ecx, 0x123fc38 }
	__asm { call fn_004038a0 }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [g_00e4de68], cl }
	__asm { mov eax, 4 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xe4de68 }
	__asm { mov ecx, 0x123fc50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0123fc64], 0xf }
	__asm { mov dword ptr [g_0123fc60], 0 }
	__asm { mov byte ptr [g_0123fc50], 0 }
	__asm { call fn_004038a0 }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [g_00e4de94], cl }
	__asm { mov edi, 9 }
	__asm { mov eax, edi }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xe4de94 }
	__asm { mov ecx, 0x123fc68 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0123fc7c], 0xf }
	__asm { mov dword ptr [g_0123fc78], 0 }
	__asm { mov byte ptr [g_0123fc68], 0 }
	__asm { call fn_004038a0 }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [g_00e4de88], cl }
	__asm { mov esi, 8 }
	__asm { mov eax, esi }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xe4de88 }
	__asm { mov ecx, 0x123fc80 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [g_0123fc94], 0xf }
	__asm { mov dword ptr [g_0123fc90], 0 }
	__asm { mov byte ptr [g_0123fc80], 0 }
	__asm { call fn_004038a0 }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [g_00e4de7c], al }
	__asm { mov ecx, 0x123fc98 }
	__asm { cmove edi, eax }
	__asm { push edi }
	__asm { push 0xe4de7c }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [g_0123fcac], 0xf }
	__asm { mov dword ptr [g_0123fca8], 0 }
	__asm { mov byte ptr [g_0123fc98], 0 }
	__asm { call fn_004038a0 }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [g_00e4de70], al }
	__asm { mov ecx, 0x123fcb0 }
	__asm { cmove esi, eax }
	__asm { push esi }
	__asm { push 0xe4de70 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [g_0123fcc4], 0xf }
	__asm { mov dword ptr [g_0123fcc0], 0 }
	__asm { mov byte ptr [g_0123fcb0], 0 }
	__asm { call fn_004038a0 }
	__asm { push 5 }
	__asm { push 0xe3d9d0 }
	__asm { mov ecx, 0x123fcc8 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [g_0123fcdc], 0xf }
	__asm { mov dword ptr [g_0123fcd8], 0 }
	__asm { mov byte ptr [g_0123fcc8], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0xdfae80 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a74480();
extern "C" void fn_00a74630();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc9480
extern "C" __declspec(naked) void asm_00dc9480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13091e8 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe52df8 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push 0xe3ef24 }
	__asm { push 0xeae454 }
	__asm { push 0xeae460 }
	__asm { push 0xeae46c }
	__asm { push 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0xa776f0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { call fn_00a74630 }
	__asm { push 0xdfefe0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1309168 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe52df8 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push 0xe3ef24 }
	__asm { push 0x1022f74 }
	__asm { push 0xeae43c }
	__asm { push 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0xa778c0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { call fn_00a74480 }
	__asm { push 0xdfeff0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013090f8[];
extern "C" char g_01309114[];
extern "C" char g_01309120[];
extern "C" char g_01309124[];
extern "C" void fn_00825140();
extern "C" void fn_00a74630();
extern "C" void fn_00a752a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc9820
extern "C" __declspec(naked) void asm_00dc9820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1309228 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe52df8 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push 0xe3ef24 }
	__asm { push 0xeae454 }
	__asm { push 0xeae460 }
	__asm { push 0xeae474 }
	__asm { push 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0xa7d010 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { call fn_00a74630 }
	__asm { push 0xdff300 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4acba }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x13090f8 }
	__asm { push 1 }
	__asm { push 0x101d144 }
	__asm { call fn_00a752a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_013090f8], 0xeae41c }
	__asm { mov dword ptr [g_01309120], 0xa7d1b0 }
	__asm { mov dword ptr [g_01309124], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdff310 }
	__asm { mov dword ptr [g_01309114], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130b758[];
extern "C" char g_0130b788[];
extern "C" char g_0130b78c[];
extern "C" char g_0130bab8[];
extern "C" char g_0130bae8[];
extern "C" char g_0130baec[];
extern "C" void fn_008258f0();
extern "C" void fn_00ab5d30();
extern "C" void fn_00ab6470();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcd4e0
extern "C" __declspec(naked) void asm_00dcd4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push eax }
	__asm { call fn_008258f0 }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { add esp, 0xc }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x130bab8 }
	__asm { push dword ptr [eax] }
	__asm { push 0 }
	__asm { push 0xeb9ea0 }
	__asm { push 0xeb9a50 }
	__asm { push 0xe7383c }
	__asm { push 0xeb9f04 }
	__asm { push 0x100 }
	__asm { call fn_00ab5d30 }
	__asm { push 0xe019f0 }
	__asm { mov dword ptr [g_0130bab8], 0xeb9ee8 }
	__asm { mov dword ptr [g_0130bae8], 1 }
	__asm { mov dword ptr [g_0130baec], esi }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130b758 }
	__asm { push 5 }
	__asm { push 0xeb9aec }
	__asm { push 0xeb9afc }
	__asm { push 0xeb9a50 }
	__asm { push 0xe73878 }
	__asm { push 0xeb9b28 }
	__asm { push 0xf8 }
	__asm { call fn_00ab6470 }
	__asm { push 0xe01a50 }
	__asm { mov dword ptr [g_0130b758], 0xeb9ad0 }
	__asm { mov dword ptr [g_0130b788], 1 }
	__asm { mov dword ptr [g_0130b78c], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ab53b0();
extern "C" void fn_00ab5580();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcd7b0
extern "C" __declspec(naked) void asm_00dcd7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130ba40 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xeb9aec }
	__asm { push 1 }
	__asm { push 0xeb9afc }
	__asm { push 0xeb9a50 }
	__asm { push 0xe73878 }
	__asm { push 0xeb9e48 }
	__asm { push 0 }
	__asm { push 0xac5970 }
	__asm { call fn_00ab53b0 }
	__asm { push 0xe01c40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130ba00 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xeb9aec }
	__asm { push 1 }
	__asm { push 0xeb9afc }
	__asm { push 0x1004e08 }
	__asm { push 0xe73878 }
	__asm { push 0xeb9e38 }
	__asm { push 0 }
	__asm { push 0xac5c50 }
	__asm { call fn_00ab53b0 }
	__asm { push 0xe01c50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130b920 }
	__asm { push 2 }
	__asm { push 0xeb9a50 }
	__asm { push 0xe73878 }
	__asm { push 0xeb9d5c }
	__asm { push 0 }
	__asm { push 0xac5f30 }
	__asm { call fn_00ab5580 }
	__asm { push 0xe01c60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ccc4[];
extern "C" void fn_00af8c10();
extern "C" void fn_00af8d60();
extern "C" void fn_00af8f80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcf5a0
extern "C" __declspec(naked) void asm_00dcf5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130ccc4 }
	__asm { push 5 }
	__asm { push 0xec0ce0 }
	__asm { push 0xa4 }
	__asm { call fn_00af8f80 }
	__asm { push 0xe03c90 }
	__asm { mov dword ptr [g_0130ccc4], 0xec0cc4 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130cc6c }
	__asm { push 5 }
	__asm { push 0xec0c2c }
	__asm { push 0xe83694 }
	__asm { push 0xec0c38 }
	__asm { push 0xa0 }
	__asm { call fn_00af8c10 }
	__asm { push 0xe03cf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130d080 }
	__asm { push 5 }
	__asm { push 0xec0ec8 }
	__asm { push 0xec0ed8 }
	__asm { push 0xac }
	__asm { call fn_00af8d60 }
	__asm { push 0xe03d50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130cec4[];
extern "C" char g_0130cfb8[];
extern "C" char g_0130cfd4[];
extern "C" char g_0130cfe0[];
extern "C" char g_0130cfe4[];
extern "C" char g_0130d0ac[];
extern "C" void fn_007d5390();
extern "C" void fn_00af8e30();
extern "C" void fn_00af8f80();
extern "C" void fn_00af9030();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcf660
extern "C" __declspec(naked) void asm_00dcf660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130d0ac }
	__asm { push 5 }
	__asm { push 0xec0eec }
	__asm { push 0xb0 }
	__asm { call fn_00af8f80 }
	__asm { push 0xe03db0 }
	__asm { mov dword ptr [g_0130d0ac], 0xec0cc4 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130cc98 }
	__asm { push 5 }
	__asm { push 0xec0c2c }
	__asm { push 0xe83694 }
	__asm { push 0xec0c64 }
	__asm { push 0xa8 }
	__asm { call fn_00af8e30 }
	__asm { push 0xe03e10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130cec4 }
	__asm { push 5 }
	__asm { push 0xec0e14 }
	__asm { push 0x9c }
	__asm { call fn_00af8f80 }
	__asm { push 0xe03e70 }
	__asm { mov dword ptr [g_0130cec4], 0xec0cc4 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52e7a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130cfb8 }
	__asm { push 5 }
	__asm { push 0xec0e58 }
	__asm { call fn_00af9030 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130cfb8], 0xec0e2c }
	__asm { mov dword ptr [g_0130cfe0], 0xafd5d0 }
	__asm { mov dword ptr [g_0130cfe4], 0 }
	__asm { call fn_007d5390 }
	__asm { push 0xe03ed0 }
	__asm { mov dword ptr [g_0130cfd4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c40050();
extern "C" void fn_00c403d0();
extern "C" void fn_00c40740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd5490
extern "C" __declspec(naked) void asm_00dd5490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13119b0 }
	__asm { push 0 }
	__asm { push 0xef0844 }
	__asm { push 0xe5dfd8 }
	__asm { push 0xeabff4 }
	__asm { push 0x1ac }
	__asm { call fn_00c403d0 }
	__asm { push 0xe0a890 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1311d44 }
	__asm { push 5 }
	__asm { push 0xef08dc }
	__asm { push 0xe73878 }
	__asm { push 0xef08ec }
	__asm { push 0x1c0 }
	__asm { call fn_00c40740 }
	__asm { push 0xe0a8f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1310ee4 }
	__asm { push 0 }
	__asm { push 0x1004e30 }
	__asm { push 0xef08b4 }
	__asm { push 0x1bc }
	__asm { call fn_00c40050 }
	__asm { push 0xe0a950 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0840[];
extern "C" char g_012e0860[];
extern "C" char g_012e0870[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de1d50
extern "C" __declspec(naked) void asm_00de1d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012e0870] }
	__asm { test edi, edi }
	__asm { je L_00de1da4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00de1d8a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de1d8a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de1da4: }
	__asm { mov ecx, 0x12e0860 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e0860] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e0840], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1158[];
extern "C" char g_012e1178[];
extern "C" char g_012e1188[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de26c0
extern "C" __declspec(naked) void asm_00de26c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012e1188] }
	__asm { test edi, edi }
	__asm { je L_00de2714 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00de26fa }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de26fa: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de2714: }
	__asm { mov ecx, 0x12e1178 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1178] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1158], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e19f0[];
extern "C" char g_012e1a10[];
extern "C" char g_012e1a20[];
extern "C" char g_012e1a24[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de3700
extern "C" __declspec(naked) void asm_00de3700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_012e1a24] }
	__asm { call fn_00cf6522 }
	__asm { mov edi, dword ptr [g_012e1a20] }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00de3762 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00de3748 }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de3748: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de3762: }
	__asm { mov ecx, 0x12e1a10 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1a10] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e19f0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1a28[];
extern "C" char g_012e1a48[];
extern "C" char g_012e1a58[];
extern "C" char g_012e1a5c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de37c0
extern "C" __declspec(naked) void asm_00de37c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_012e1a5c] }
	__asm { call fn_00cf6522 }
	__asm { mov edi, dword ptr [g_012e1a58] }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00de3822 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00de3808 }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de3808: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de3822: }
	__asm { mov ecx, 0x12e1a48 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1a48] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1a28], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1da8[];
extern "C" char g_012e1dc8[];
extern "C" char g_012e1dd8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de3ad0
extern "C" __declspec(naked) void asm_00de3ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012e1dd8] }
	__asm { test edi, edi }
	__asm { je L_00de3b24 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00de3b0a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de3b0a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de3b24: }
	__asm { mov ecx, 0x12e1dc8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1dc8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1da8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1980[];
extern "C" char g_012e19a0[];
extern "C" char g_012e19b0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de3d60
extern "C" __declspec(naked) void asm_00de3d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012e19b0] }
	__asm { test edi, edi }
	__asm { je L_00de3db4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00de3d9a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de3d9a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de3db4: }
	__asm { mov ecx, 0x12e19a0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e19a0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1980], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e19b8[];
extern "C" char g_012e19d8[];
extern "C" char g_012e19e8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de3e10
extern "C" __declspec(naked) void asm_00de3e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012e19e8] }
	__asm { test edi, edi }
	__asm { je L_00de3e64 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00de3e4a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de3e4a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de3e64: }
	__asm { mov ecx, 0x12e19d8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e19d8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e19b8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e35b8[];
extern "C" char g_012e35d8[];
extern "C" char g_012e35e8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de4740
extern "C" __declspec(naked) void asm_00de4740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012e35e8] }
	__asm { test edi, edi }
	__asm { je L_00de4794 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00de477a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de477a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de4794: }
	__asm { mov ecx, 0x12e35d8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e35d8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e35b8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3620[];
extern "C" char g_012e3640[];
extern "C" char g_012e3650[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de4850
extern "C" __declspec(naked) void asm_00de4850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012e3650] }
	__asm { test edi, edi }
	__asm { je L_00de48a4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00de488a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de488a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de48a4: }
	__asm { mov ecx, 0x12e3640 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e3640] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e3620], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8cb8[];
extern "C" char g_012f8cd8[];
extern "C" char g_012f8ce8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de93a0
extern "C" __declspec(naked) void asm_00de93a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012f8ce8] }
	__asm { test edi, edi }
	__asm { je L_00de93f4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00de93da }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de93da: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de93f4: }
	__asm { mov ecx, 0x12f8cd8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f8cd8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f8cb8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f87a8[];
extern "C" char g_012f87c8[];
extern "C" char g_012f87d8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de9680
extern "C" __declspec(naked) void asm_00de9680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012f87d8] }
	__asm { test edi, edi }
	__asm { je L_00de96d4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00de96ba }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de96ba: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de96d4: }
	__asm { mov ecx, 0x12f87c8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f87c8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f87a8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8770[];
extern "C" char g_012f8790[];
extern "C" char g_012f87a0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de9730
extern "C" __declspec(naked) void asm_00de9730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012f87a0] }
	__asm { test edi, edi }
	__asm { je L_00de9784 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00de976a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de976a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de9784: }
	__asm { mov ecx, 0x12f8790 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f8790] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f8770], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8de8[];
extern "C" char g_012f8e08[];
extern "C" char g_012f8e18[];
extern "C" char g_012f8e1c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de97e0
extern "C" __declspec(naked) void asm_00de97e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_012f8e1c] }
	__asm { call fn_00cf6522 }
	__asm { mov edi, dword ptr [g_012f8e18] }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00de9842 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00de9828 }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de9828: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de9842: }
	__asm { mov ecx, 0x12f8e08 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f8e08] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f8de8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8db0[];
extern "C" char g_012f8dd0[];
extern "C" char g_012f8de0[];
extern "C" char g_012f8de4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de98a0
extern "C" __declspec(naked) void asm_00de98a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_012f8de4] }
	__asm { call fn_00cf6522 }
	__asm { mov edi, dword ptr [g_012f8de0] }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00de9902 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00de98e8 }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de98e8: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de9902: }
	__asm { mov ecx, 0x12f8dd0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f8dd0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f8db0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f89c8[];
extern "C" char g_012f89e8[];
extern "C" char g_012f89f8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de9a80
extern "C" __declspec(naked) void asm_00de9a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012f89f8] }
	__asm { test edi, edi }
	__asm { je L_00de9ad4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00de9aba }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de9aba: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de9ad4: }
	__asm { mov ecx, 0x12f89e8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f89e8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f89c8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8888[];
extern "C" char g_012f88a8[];
extern "C" char g_012f88b8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de9c10
extern "C" __declspec(naked) void asm_00de9c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012f88b8] }
	__asm { test edi, edi }
	__asm { je L_00de9c64 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00de9c4a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de9c4a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de9c64: }
	__asm { mov ecx, 0x12f88a8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f88a8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f8888], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9350[];
extern "C" char g_012f9370[];
extern "C" char g_012f9380[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de9f00
extern "C" __declspec(naked) void asm_00de9f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012f9380] }
	__asm { test edi, edi }
	__asm { je L_00de9f54 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00de9f3a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de9f3a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de9f54: }
	__asm { mov ecx, 0x12f9370 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f9370] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f9350], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8b30[];
extern "C" char g_012f8b50[];
extern "C" char g_012f8b60[];
extern "C" char g_012f8c50[];
extern "C" char g_012f8c70[];
extern "C" char g_012f8c7c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de9fb0
extern "C" __declspec(naked) void asm_00de9fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2812a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [g_012f8c7c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00de9fe0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00de9fe0: }
	__asm { push esi }
	__asm { mov ecx, 0x12f8c70 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f8c70] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f8c50], 0xe33a28 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012f8b60] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12f8b50 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f8b50] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f8b30], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f88c0[];
extern "C" char g_012f88e0[];
extern "C" char g_012f88f0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dea0b0
extern "C" __declspec(naked) void asm_00dea0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012f88f0] }
	__asm { test edi, edi }
	__asm { je L_00dea104 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dea0ea }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dea0ea: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dea104: }
	__asm { mov ecx, 0x12f88e0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f88e0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f88c0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9220[];
extern "C" char g_012f9240[];
extern "C" char g_012f9250[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dea5e0
extern "C" __declspec(naked) void asm_00dea5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012f9250] }
	__asm { test edi, edi }
	__asm { je L_00dea634 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dea61a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dea61a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dea634: }
	__asm { mov ecx, 0x12f9240 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f9240] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f9220], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8960[];
extern "C" char g_012f8980[];
extern "C" char g_012f8990[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dea690
extern "C" __declspec(naked) void asm_00dea690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012f8990] }
	__asm { test edi, edi }
	__asm { je L_00dea6e4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dea6ca }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dea6ca: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dea6e4: }
	__asm { mov ecx, 0x12f8980 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f8980] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f8960], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9258[];
extern "C" char g_012f9278[];
extern "C" char g_012f9288[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dea740
extern "C" __declspec(naked) void asm_00dea740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012f9288] }
	__asm { test edi, edi }
	__asm { je L_00dea794 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dea77a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dea77a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dea794: }
	__asm { mov ecx, 0x12f9278 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f9278] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f9258], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9ff0[];
extern "C" char g_012fa010[];
extern "C" char g_012fa020[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deb3e0
extern "C" __declspec(naked) void asm_00deb3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012fa020] }
	__asm { test edi, edi }
	__asm { je L_00deb434 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00deb41a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00deb41a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00deb434: }
	__asm { mov ecx, 0x12fa010 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fa010] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f9ff0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
