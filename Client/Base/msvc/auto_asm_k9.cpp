// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x0058a0d0
extern "C" __declspec(naked) void asm_0058a0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd97503 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi + 0x24], 1 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { test eax, eax }
	__asm { je L_0058a160 }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_0058a159 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0058a159: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_0058a160: }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { test eax, eax }
	__asm { je L_0058a19d }
	__asm { cmp byte ptr [esi + 0x24], 0 }
	__asm { je L_0058a196 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0058a196: }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_0058a19d: }
	__asm { mov byte ptr [esi + 0x24], 1 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x0058a1e0
extern "C" __declspec(naked) void asm_0058a1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd97503 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { test eax, eax }
	__asm { je L_0058a234 }
	__asm { cmp byte ptr [esi + 0x24], 0 }
	__asm { je L_0058a22d }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0058a22d: }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_0058a234: }
	__asm { mov byte ptr [esi + 0x24], 1 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { test eax, eax }
	__asm { je L_0058a271 }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_0058a26a }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0058a26a: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_0058a271: }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { test eax, eax }
	__asm { je L_0058a2b2 }
	__asm { cmp byte ptr [esi + 0x24], 0 }
	__asm { je L_0058a2ab }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0058a2ab: }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_0058a2b2: }
	__asm { mov byte ptr [esi + 0x24], 1 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { test eax, eax }
	__asm { je L_0058a2f6 }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_0058a2ef }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0058a2ef: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_0058a2f6: }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x0058a7b0
extern "C" __declspec(naked) void asm_0058a7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96508 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { test eax, eax }
	__asm { je L_0058a804 }
	__asm { cmp byte ptr [esi + 0x24], 0 }
	__asm { je L_0058a7fd }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0058a7fd: }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_0058a804: }
	__asm { mov byte ptr [esi + 0x24], 1 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { test eax, eax }
	__asm { je L_0058a848 }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_0058a841 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0058a841: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_0058a848: }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x0058a880
extern "C" __declspec(naked) void asm_0058a880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd9653b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { test eax, eax }
	__asm { je L_0058a8d4 }
	__asm { cmp byte ptr [esi + 0x34], 0 }
	__asm { je L_0058a8cd }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0058a8cd: }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { L_0058a8d4: }
	__asm { mov byte ptr [esi + 0x34], 1 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { test eax, eax }
	__asm { je L_0058a918 }
	__asm { cmp byte ptr [esi + 0x18], 0 }
	__asm { je L_0058a911 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0058a911: }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { L_0058a918: }
	__asm { mov byte ptr [esi + 0x18], 1 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0058ada0
extern "C" __declspec(naked) void asm_0058ada0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, 3 }
	__asm { push edi }
	__asm { mov esi, 2 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { L_0058adb8: }
	__asm { lea eax, [esi - 1] }
	__asm { cdq }
	__asm { idiv ebx }
	__asm { mov eax, esi }
	__asm { mov ebx, edx }
	__asm { cdq }
	__asm { idiv dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { mov edx, dword ptr [edi] }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { jne L_0058add8 }
	__asm { cmp dword ptr [ecx + ebx*4], eax }
	__asm { je L_0058adf7 }
	__asm { L_0058add8: }
	__asm { cmp edx, eax }
	__asm { jne L_0058ade4 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + ebx*4], eax }
	__asm { je L_0058adf7 }
	__asm { L_0058ade4: }
	__asm { inc esi }
	__asm { add edi, 4 }
	__asm { lea eax, [esi - 2] }
	__asm { cmp eax, 3 }
	__asm { jge L_0058ae09 }
	__asm { mov ebx, 3 }
	__asm { jmp L_0058adb8 }
	__asm { L_0058adf7: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { add eax, 3 }
	__asm { pop esi }
	__asm { lea eax, [ecx + eax*4] }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0058ae09: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 0x12d818c }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012bfc70[];
extern "C" char g_012bfc74[];
extern "C" char g_01318fc0[];
extern "C" char g_01318fc4[];
// FUNCTION: ROBLOXSTUDIO 0x0058af40
extern "C" __declspec(naked) void asm_0058af40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { inc dword ptr [g_01318fc4] }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x10 }
	__asm { push 0x24 }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_012bfc74] }
	__asm { mov edi, eax }
	__asm { add esp, 8 }
	__asm { test edi, edi }
	__asm { je L_0058af96 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov dword ptr [edi + 0xc], 0xffffffff }
	__asm { mov dword ptr [edi + 0x10], 0xffffffff }
	__asm { mov dword ptr [edi + 0x14], 0xffffffff }
	__asm { mov dword ptr [edi + 0x1c], 0xffffffff }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { jmp L_0058af98 }
	__asm { L_0058af96: }
	__asm { xor edi, edi }
	__asm { L_0058af98: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp eax, ecx }
	__asm { jne L_0058b03b }
	__asm { push ebx }
	__asm { lea ebx, [eax + eax] }
	__asm { test eax, eax }
	__asm { jne L_0058afb9 }
	__asm { mov ebx, 1 }
	__asm { L_0058afb9: }
	__asm { cmp ecx, ebx }
	__asm { jge L_0058b03a }
	__asm { test ebx, ebx }
	__asm { je L_0058afe1 }
	__asm { inc dword ptr [g_01318fc4] }
	__asm { lea eax, [ebx*4] }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc74] }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_0058afe6 }
	__asm { L_0058afe1: }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { L_0058afe6: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { test eax, eax }
	__asm { jle L_0058b009 }
	__asm { L_0058aff2: }
	__asm { test ecx, ecx }
	__asm { je L_0058b001 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { L_0058b001: }
	__asm { inc edx }
	__asm { add ecx, 4 }
	__asm { cmp edx, eax }
	__asm { jl L_0058aff2 }
	__asm { L_0058b009: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { test eax, eax }
	__asm { je L_0058b02d }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_0058b026 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0058b026: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_0058b02d: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [esi + 8], ebx }
	__asm { L_0058b03a: }
	__asm { pop ebx }
	__asm { L_0058b03b: }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, edi }
	__asm { lea ecx, [edx + ecx*4] }
	__asm { test ecx, ecx }
	__asm { je L_0058b04c }
	__asm { mov dword ptr [ecx], edi }
	__asm { L_0058b04c: }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x0058e550
extern "C" __declspec(naked) void asm_0058e550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd967a1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0x60 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_0058e601 }
	__asm { mov dword ptr [ebx], 0x1036ff0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { lea edi, [ebx + 0x10] }
	__asm { mov dword ptr [ebx], 0x1037010 }
	__asm { mov byte ptr [ebx + 8], 0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edi], 0x1037004 }
	__asm { mov dword ptr [edi + 0x34], ecx }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { push dword ptr [eax + 8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [esi + 8] }
	__asm { call dword ptr [edx + 8] }
	__asm { mov ecx, dword ptr [edi + 0x34] }
	__asm { mov dword ptr [edi + 0x44], eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x10] }
	__asm { mov eax, ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0058e601: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x0058e620
extern "C" __declspec(naked) void asm_0058e620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd967a1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0x60 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_0058e6d1 }
	__asm { mov dword ptr [ebx], 0x1036ff0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { lea edi, [ebx + 0x10] }
	__asm { mov dword ptr [ebx], 0x1037010 }
	__asm { mov byte ptr [ebx + 8], 1 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edi], 0x1037004 }
	__asm { mov dword ptr [edi + 0x34], ecx }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { push dword ptr [eax + 8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [esi + 8] }
	__asm { call dword ptr [edx + 8] }
	__asm { mov ecx, dword ptr [edi + 0x34] }
	__asm { mov dword ptr [edi + 0x44], eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x10] }
	__asm { mov eax, ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0058e6d1: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012b55c0[];
extern "C" void fn_005aa6e0();
// FUNCTION: ROBLOXSTUDIO 0x0058e6f0
extern "C" __declspec(naked) void asm_0058e6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96734 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0x2c }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0058e79c }
	__asm { mov dword ptr [esi], 0x1036ff0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi], 0x1037134 }
	__asm { mov byte ptr [esi + 0x18], 1 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [esi + 0x1c], 0 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov byte ptr [esi + 0x24], 0 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [ecx + 0x44] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, esi }
	__asm { call fn_005aa6e0 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0058e79c: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012b55c0[];
extern "C" void fn_005aa6e0();
// FUNCTION: ROBLOXSTUDIO 0x0058e7c0
extern "C" __declspec(naked) void asm_0058e7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96734 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0x2c }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0058e86c }
	__asm { mov dword ptr [esi], 0x1036ff0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi], 0x1037134 }
	__asm { mov byte ptr [esi + 0x18], 1 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [esi + 0x1c], 1 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov byte ptr [esi + 0x24], 0 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [ecx + 0x44] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, esi }
	__asm { call fn_005aa6e0 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0058e86c: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x0058e910
extern "C" __declspec(naked) void asm_0058e910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd967f2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov edi, ecx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push 0x1c }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { cmp byte ptr [edi + 4], 0 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { jne L_0058e982 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0058e9ed }
	__asm { mov edx, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi], 0x1036ff0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { jmp L_0058e9ac }
	__asm { L_0058e982: }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_0058e9ed }
	__asm { mov edx, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi], 0x1036ff0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { L_0058e9ac: }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { mov dword ptr [esi + 0x18], edx }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi], 0x103710c }
	__asm { push dword ptr [edi + 8] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebx + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0058e9ef }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebx + 8] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov byte ptr [esi + 8], 1 }
	__asm { jmp L_0058e9ef }
	__asm { L_0058e9ed: }
	__asm { xor esi, esi }
	__asm { L_0058e9ef: }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x0058ea90
extern "C" __declspec(naked) void asm_0058ea90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96829 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0x10 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0058eb25 }
	__asm { mov dword ptr [edi], 0x1036ff0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi], 0x1037120 }
	__asm { mov byte ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push esi }
	__asm { push dword ptr [eax + 8] }
	__asm { call dword ptr [edx + 8] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov byte ptr [edi + 8], 1 }
	__asm { mov eax, edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0058eb25: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x0058eb40
extern "C" __declspec(naked) void asm_0058eb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96869 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0x14 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0058ebe2 }
	__asm { mov cl, byte ptr [ebx + 4] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi], 0x1036ff0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0x10370d8 }
	__asm { mov byte ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], edx }
	__asm { mov byte ptr [edi + 0x10], cl }
	__asm { test edx, edx }
	__asm { jne L_0058ebcc }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push esi }
	__asm { push dword ptr [eax + 8] }
	__asm { call dword ptr [edx + 8] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov byte ptr [edi + 8], 1 }
	__asm { L_0058ebcc: }
	__asm { mov eax, edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0058ebe2: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x0058f6f0
extern "C" __declspec(naked) void asm_0058f6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd968ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0x1036974 }
	__asm { mov dword ptr [edi + 4], 2 }
	__asm { mov byte ptr [edi + 0x18], 1 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0x10369f4 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edi + 0x1488], esi }
	__asm { mov dword ptr [edi + 0x3c], 0x58fd40 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [edi + 0x40], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, edi }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ecx + 0x44], eax }
	__asm { lea edi, [ecx + 0x48] }
	__asm { mov edi, edi }
	__asm { L_0058f780: }
	__asm { xor esi, esi }
	__asm { L_0058f782: }
	__asm { mov ecx, dword ptr [ecx + 0x1488] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [edi], eax }
	__asm { inc esi }
	__asm { add edi, 4 }
	__asm { cmp esi, 0x24 }
	__asm { jl L_0058f782 }
	__asm { inc ebx }
	__asm { cmp ebx, 0x24 }
	__asm { jl L_0058f780 }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
extern "C" char g_01318fc8[];
// FUNCTION: ROBLOXSTUDIO 0x0058fb00
extern "C" __declspec(naked) void asm_0058fb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { dec dword ptr [g_01318fc8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov edi, dword ptr [edi + 0x32c] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { mov edx, dword ptr [eax + edi*4] }
	__asm { lea ecx, [eax + edi*4] }
	__asm { mov eax, dword ptr [eax + esi*4 - 4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [eax + esi*4 - 4], edx }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { mov dword ptr [eax + 0x32c], edi }
	__asm { dec dword ptr [ebx + 0xc] }
	__asm { mov ecx, dword ptr [ebx + 0x44] }
	__asm { mov esi, dword ptr [ecx + 0x10] }
	__asm { cmp edx, esi }
	__asm { jb L_0058fb70 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { imul eax, dword ptr [ecx] }
	__asm { add eax, esi }
	__asm { cmp edx, eax }
	__asm { jae L_0058fb70 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [edx], eax }
	__asm { inc dword ptr [ecx + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [ecx + 0xc], edx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0058fb70: }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push edx }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005902a0
extern "C" __declspec(naked) void asm_005902a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x24] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call dword ptr [edx + 0x18] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], eax }
	__asm { test eax, eax }
	__asm { je L_005902d1 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { L_005902d1: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 0x1036a10 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_012bfc74[];
extern "C" char g_01318fc0[];
extern "C" char g_01318fc4[];
// FUNCTION: ROBLOXSTUDIO 0x005912a0
extern "C" __declspec(naked) void asm_005912a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd969c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { inc dword ptr [g_01318fc4] }
	__asm { push 0x100 }
	__asm { call dword ptr [g_012bfc74] }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { add esp, 8 }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test ebx, ebx }
	__asm { jle L_0059132d }
	__asm { mov edx, eax }
	__asm { L_00591311: }
	__asm { test edx, edx }
	__asm { je L_00591325 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { lea ecx, [eax + edi*8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_00591325: }
	__asm { inc edi }
	__asm { add edx, 8 }
	__asm { cmp edi, ebx }
	__asm { jl L_00591311 }
	__asm { L_0059132d: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00591351 }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_0059134a }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0059134a: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_00591351: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { mov dword ptr [esi + 8], 0x20 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012bfc70[];
extern "C" char g_012bfc74[];
extern "C" char g_01318fc0[];
extern "C" char g_01318fc4[];
// FUNCTION: ROBLOXSTUDIO 0x00591380
extern "C" __declspec(naked) void asm_00591380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { cmp ebx, eax }
	__asm { jne L_00591435 }
	__asm { test ebx, ebx }
	__asm { je L_005913a1 }
	__asm { add ebx, ebx }
	__asm { jmp L_005913a6 }
	__asm { L_005913a1: }
	__asm { mov ebx, 1 }
	__asm { L_005913a6: }
	__asm { cmp eax, ebx }
	__asm { jge L_00591435 }
	__asm { test ebx, ebx }
	__asm { je L_005913d2 }
	__asm { inc dword ptr [g_01318fc4] }
	__asm { lea eax, [ebx*8] }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc74] }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jmp L_005913d7 }
	__asm { L_005913d2: }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { L_005913d7: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { test eax, eax }
	__asm { jle L_00591404 }
	__asm { mov edx, ecx }
	__asm { L_005913e5: }
	__asm { test edx, edx }
	__asm { je L_005913fc }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { lea ecx, [eax + edi*8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { L_005913fc: }
	__asm { inc edi }
	__asm { add edx, 8 }
	__asm { cmp edi, eax }
	__asm { jl L_005913e5 }
	__asm { L_00591404: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00591428 }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_00591421 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_00591421: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_00591428: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [esi + 8], ebx }
	__asm { L_00591435: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ecx, [ecx + eax*8] }
	__asm { test ecx, ecx }
	__asm { je L_0059144d }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_0059144d: }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012bfc70[];
extern "C" char g_012bfc74[];
extern "C" char g_01318fc0[];
extern "C" char g_01318fc4[];
// FUNCTION: ROBLOXSTUDIO 0x00591460
extern "C" __declspec(naked) void asm_00591460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { cmp dword ptr [ebx + 0xc], 0 }
	__asm { je L_00591525 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp eax, edx }
	__asm { jne L_0059150f }
	__asm { push edi }
	__asm { lea edi, [eax + eax] }
	__asm { test eax, eax }
	__asm { jne L_00591493 }
	__asm { mov edi, 1 }
	__asm { L_00591493: }
	__asm { cmp edx, edi }
	__asm { jge L_0059150e }
	__asm { test edi, edi }
	__asm { je L_005914b6 }
	__asm { inc dword ptr [g_01318fc4] }
	__asm { lea eax, [edi*4] }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc74] }
	__asm { add esp, 8 }
	__asm { jmp L_005914b8 }
	__asm { L_005914b6: }
	__asm { xor eax, eax }
	__asm { L_005914b8: }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test ebx, ebx }
	__asm { jle L_005914da }
	__asm { mov ecx, eax }
	__asm { L_005914c6: }
	__asm { test ecx, ecx }
	__asm { je L_005914d2 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_005914d2: }
	__asm { inc edx }
	__asm { add ecx, 4 }
	__asm { cmp edx, ebx }
	__asm { jl L_005914c6 }
	__asm { L_005914da: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { test eax, eax }
	__asm { je L_005914fe }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_005914f7 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005914f7: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_005914fe: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { L_0059150e: }
	__asm { pop edi }
	__asm { L_0059150f: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ecx, [ecx + eax*4] }
	__asm { test ecx, ecx }
	__asm { je L_00591521 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00591521: }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { L_00591525: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00591800
extern "C" __declspec(naked) void asm_00591800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0xc], 0 }
	__asm { jne L_00591825 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { push dword ptr [ebx + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [esi + 8] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { L_00591825: }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { push dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { push dword ptr [edi + 0x18] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [edi + 0x1c] }
	__asm { mov esi, eax }
	__asm { call dword ptr [edx + 4] }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { push dword ptr [edi + 0x20] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [edi + 0x24] }
	__asm { call dword ptr [eax + 8] }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [edi + 0x14] }
	__asm { mov ecx, esi }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x38] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012b55c0[];
extern "C" void fn_00cf6d5f();
// FUNCTION: ROBLOXSTUDIO 0x00591890
extern "C" __declspec(naked) void asm_00591890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x38 }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { push dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { push dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [esi + 0x24] }
	__asm { call dword ptr [eax + 8] }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x34], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov edi, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 0x2c], edx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { jne L_00591940 }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { jne L_00591921 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_00591921: }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { push dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { lea edx, [ebp - 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x34] }
	__asm { push edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_00591940: }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x1c] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x34] }
	__asm { push edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { xor ecx, ebp }
	__asm { pop esi }
	__asm { call fn_00cf6d5f }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00592570();
extern "C" void fn_005932a0();
// FUNCTION: ROBLOXSTUDIO 0x005947e0
extern "C" __declspec(naked) void asm_005947e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { test edx, edx }
	__asm { je L_00594801 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_00594801: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00594820 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0 }
	__asm { call dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x38] }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00594820: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x18], 0xffffffff }
	__asm { mov dword ptr [esi + 0x1c], 0xffffffff }
	__asm { mov dword ptr [esi + 0x20], 0xffffffff }
	__asm { mov dword ptr [esi + 0x24], 0xffffffff }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [edx + 4] }
	__asm { cmp dword ptr [ecx + 4], 0x19 }
	__asm { jne L_00594888 }
	__asm { cmp dword ptr [edi + 4], 0x19 }
	__asm { jne L_00594873 }
	__asm { push edi }
	__asm { push ecx }
	__asm { push edx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00592570 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00594873: }
	__asm { push 0 }
	__asm { push edi }
	__asm { push ecx }
	__asm { push edx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_005932a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00594888: }
	__asm { cmp dword ptr [edi + 4], 0x19 }
	__asm { jne L_0059489b }
	__asm { push 1 }
	__asm { push ecx }
	__asm { push edi }
	__asm { push eax }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_005932a0 }
	__asm { L_0059489b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00594a90();
// FUNCTION: ROBLOXSTUDIO 0x00594b30
extern "C" __declspec(naked) void asm_00594b30()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0x1036c48 }
	__asm { mov dword ptr [esi + 0xb0], 0x3f800000 }
	__asm { mov dword ptr [esi + 0xb4], 0x3f800000 }
	__asm { mov dword ptr [esi + 0xb8], 0x3f800000 }
	__asm { mov dword ptr [esi + 0xbc], 0 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov dword ptr [esi + 0xc0], 0 }
	__asm { mov dword ptr [esi + 0xc4], 0x5d5e0b6b }
	__asm { mov dword ptr [esi + 0xc8], 0 }
	__asm { mov dword ptr [esi + 0xcc], 0 }
	__asm { mov dword ptr [esi + 0xd0], 0 }
	__asm { mov dword ptr [esi + 0xd4], 0 }
	__asm { mov dword ptr [esi + 0xd8], 1 }
	__asm { mov dword ptr [esi + 0xdc], 0xffffffff }
	__asm { mov dword ptr [esi + 0xe0], 0xffffffff }
	__asm { mov dword ptr [esi + 0xe4], 1 }
	__asm { mov dword ptr [esi + 0xe8], 0 }
	__asm { mov dword ptr [esi + 0xec], 0x3f000000 }
	__asm { mov dword ptr [esi + 0xf0], 0 }
	__asm { mov dword ptr [esi + 0xf4], 0 }
	__asm { mov dword ptr [esi + 0xf8], 1 }
	__asm { mov dword ptr [esi + 0xfc], 0 }
	__asm { mov dword ptr [esi + 0x100], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x104], 0 }
	__asm { mov dword ptr [esi + 0x108], 0 }
	__asm { mov dword ptr [esi + 0x10c], 0 }
	__asm { mov dword ptr [esi + 0x110], 0 }
	__asm { call fn_00594a90 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x00595280
extern "C" __declspec(naked) void asm_00595280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96c10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x8c] }
	__asm { test eax, eax }
	__asm { je L_005952dd }
	__asm { cmp byte ptr [esi + 0x90], 0 }
	__asm { je L_005952d3 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005952d3: }
	__asm { mov dword ptr [esi + 0x8c], 0 }
	__asm { L_005952dd: }
	__asm { mov byte ptr [esi + 0x90], 1 }
	__asm { mov dword ptr [esi + 0x8c], 0 }
	__asm { mov dword ptr [esi + 0x84], 0 }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [esi], 0x103714c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { test ecx, ecx }
	__asm { je L_00595333 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0 }
	__asm { call dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { test eax, eax }
	__asm { je L_00595333 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_00595333: }
	__asm { mov dword ptr [esi], 0x1036d34 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b55c0[];
extern "C" void fn_00595e80();
// FUNCTION: ROBLOXSTUDIO 0x00595fe0
extern "C" __declspec(naked) void asm_00595fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff0 }
	__asm { push -1 }
	__asm { push 0xd96c43 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x38] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { mov dword ptr [esi + 0x10], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x14], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x18], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esp + 0x40], 0 }
	__asm { mov dword ptr [esi], 0x1036db8 }
	__asm { mov byte ptr [esi + 0x30], 1 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [esp + 0x40], 1 }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esp + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esp + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esp + 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esp + 0x28], eax }
	__asm { push ecx }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { mov dword ptr [esp + 0x34], 2 }
	__asm { mov dword ptr [esp + 0x38], 0 }
	__asm { call fn_00595e80 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [esp + 0x38] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x0059ad40
extern "C" __declspec(naked) void asm_0059ad40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96ddc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xed0bbc }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi + 0xd8] }
	__asm { test eax, eax }
	__asm { je L_0059ada3 }
	__asm { cmp byte ptr [esi + 0xdc], 0 }
	__asm { je L_0059ad99 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0059ad99: }
	__asm { mov dword ptr [esi + 0xd8], 0 }
	__asm { L_0059ada3: }
	__asm { mov byte ptr [esi + 0xdc], 1 }
	__asm { mov dword ptr [esi + 0xd8], 0 }
	__asm { mov dword ptr [esi + 0xd0], 0 }
	__asm { mov dword ptr [esi + 0xd4], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi + 0xc4] }
	__asm { test eax, eax }
	__asm { je L_0059adf9 }
	__asm { cmp byte ptr [esi + 0xc8], 0 }
	__asm { je L_0059adef }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0059adef: }
	__asm { mov dword ptr [esi + 0xc4], 0 }
	__asm { L_0059adf9: }
	__asm { mov byte ptr [esi + 0xc8], 1 }
	__asm { mov dword ptr [esi + 0xc4], 0 }
	__asm { mov dword ptr [esi + 0xbc], 0 }
	__asm { mov dword ptr [esi + 0xc0], 0 }
	__asm { mov dword ptr [esi + 0xb0], 0xed0af4 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov eax, dword ptr [esi + 0x60] }
	__asm { test eax, eax }
	__asm { je L_0059ae53 }
	__asm { cmp byte ptr [esi + 0x64], 0 }
	__asm { je L_0059ae4c }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0059ae4c: }
	__asm { mov dword ptr [esi + 0x60], 0 }
	__asm { L_0059ae53: }
	__asm { mov byte ptr [esi + 0x64], 1 }
	__asm { mov dword ptr [esi + 0x60], 0 }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { mov dword ptr [esi], 0x1036d34 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b55c0[];
extern "C" void fn_0059c030();
extern "C" void fn_005b84c0();
// FUNCTION: ROBLOXSTUDIO 0x0059b8c0
extern "C" __declspec(naked) void asm_0059b8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96e50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0x10373fc }
	__asm { mov dword ptr [esi + 0x30], edi }
	__asm { mov dword ptr [esi + 4], 0x15 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 0x24] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0059b930 }
	__asm { mov edx, dword ptr [edi] }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { jmp L_0059b937 }
	__asm { L_0059b930: }
	__asm { mov ecx, esi }
	__asm { call fn_005b84c0 }
	__asm { L_0059b937: }
	__asm { cmp byte ptr [ebp + 0x10], 0 }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0x1036eb4 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov byte ptr [esi + 0x48], al }
	__asm { mov byte ptr [esi + 0x49], 0 }
	__asm { mov dword ptr [esi + 4], 0x15 }
	__asm { je L_0059b970 }
	__asm { mov ecx, esi }
	__asm { call fn_0059c030 }
	__asm { L_0059b970: }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf64a0();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x0059c2c0
extern "C" __declspec(naked) void asm_0059c2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov edi, 4 }
	__asm { test eax, eax }
	__asm { je L_0059c306 }
	__asm { lea eax, [eax + eax*2] }
	__asm { xor ecx, ecx }
	__asm { shl eax, 2 }
	__asm { mul edi }
	__asm { seto cl }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { push ecx }
	__asm { call fn_00cf64a0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea ecx, [ecx + ecx*2] }
	__asm { shl ecx, 2 }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0x10 }
	__asm { jmp L_0059c30d }
	__asm { L_0059c306: }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { L_0059c30d: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { test eax, eax }
	__asm { je L_0059c34f }
	__asm { lea eax, [eax + eax*2] }
	__asm { xor ecx, ecx }
	__asm { shl eax, 2 }
	__asm { mul edi }
	__asm { seto cl }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { push ecx }
	__asm { call fn_00cf64a0 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { lea ecx, [ecx + ecx*2] }
	__asm { shl ecx, 2 }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0x10 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_0059c34f: }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e1053c[];
extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x0059c5d0
extern "C" __declspec(naked) void asm_0059c5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96f08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0x1036f3c }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [esi + 8], edi }
	__asm { jle L_0059c654 }
	__asm { L_0059c611: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test eax, eax }
	__asm { je L_0059c64e }
	__asm { mov ebx, dword ptr [eax + 0x20] }
	__asm { test ebx, ebx }
	__asm { je L_0059c644 }
	__asm { push dword ptr [ebx + 4] }
	__asm { call dword ptr [g_00e1053c] }
	__asm { push dword ptr [ebx + 0xc] }
	__asm { call dword ptr [g_00e1053c] }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { add esp, 0xc }
	__asm { L_0059c644: }
	__asm { push eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0059c64e: }
	__asm { inc edi }
	__asm { cmp edi, dword ptr [esi + 8] }
	__asm { jl L_0059c611 }
	__asm { L_0059c654: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { test eax, eax }
	__asm { je L_0059c678 }
	__asm { cmp byte ptr [esi + 0x14], 0 }
	__asm { je L_0059c671 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0059c671: }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_0059c678: }
	__asm { mov byte ptr [esi + 0x14], 1 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xed0ce8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012bfc70[];
extern "C" char g_012bfc74[];
extern "C" char g_01318fc0[];
extern "C" char g_01318fc4[];
// FUNCTION: ROBLOXSTUDIO 0x005a05f0
extern "C" __declspec(naked) void asm_005a05f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { cmp dword ptr [ebx + 0x54], 0 }
	__asm { je L_005a06b5 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp eax, edx }
	__asm { jne L_005a069f }
	__asm { push edi }
	__asm { lea edi, [eax + eax] }
	__asm { test eax, eax }
	__asm { jne L_005a0623 }
	__asm { mov edi, 1 }
	__asm { L_005a0623: }
	__asm { cmp edx, edi }
	__asm { jge L_005a069e }
	__asm { test edi, edi }
	__asm { je L_005a0646 }
	__asm { inc dword ptr [g_01318fc4] }
	__asm { lea eax, [edi*4] }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc74] }
	__asm { add esp, 8 }
	__asm { jmp L_005a0648 }
	__asm { L_005a0646: }
	__asm { xor eax, eax }
	__asm { L_005a0648: }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test ebx, ebx }
	__asm { jle L_005a066a }
	__asm { mov ecx, eax }
	__asm { L_005a0656: }
	__asm { test ecx, ecx }
	__asm { je L_005a0662 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_005a0662: }
	__asm { inc edx }
	__asm { add ecx, 4 }
	__asm { cmp edx, ebx }
	__asm { jl L_005a0656 }
	__asm { L_005a066a: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { test eax, eax }
	__asm { je L_005a068e }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_005a0687 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005a0687: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_005a068e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { L_005a069e: }
	__asm { pop edi }
	__asm { L_005a069f: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ecx, [ecx + eax*4] }
	__asm { test ecx, ecx }
	__asm { je L_005a06b1 }
	__asm { mov eax, dword ptr [ebx + 0x54] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_005a06b1: }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { L_005a06b5: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012bfc70[];
extern "C" char g_012bfc74[];
extern "C" char g_01318fc0[];
extern "C" char g_01318fc4[];
// FUNCTION: ROBLOXSTUDIO 0x005a1b50
extern "C" __declspec(naked) void asm_005a1b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, ecx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { cmp dword ptr [edx + 0xc], 0 }
	__asm { je L_005a1c20 }
	__asm { cmp byte ptr [edx + 8], 0 }
	__asm { je L_005a1c20 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp eax, ecx }
	__asm { jne L_005a1c0a }
	__asm { push edi }
	__asm { lea edi, [eax + eax] }
	__asm { test eax, eax }
	__asm { jne L_005a1b8c }
	__asm { mov edi, 1 }
	__asm { L_005a1b8c: }
	__asm { cmp ecx, edi }
	__asm { jge L_005a1c09 }
	__asm { test edi, edi }
	__asm { je L_005a1baf }
	__asm { inc dword ptr [g_01318fc4] }
	__asm { lea eax, [edi*4] }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc74] }
	__asm { add esp, 8 }
	__asm { jmp L_005a1bb1 }
	__asm { L_005a1baf: }
	__asm { xor eax, eax }
	__asm { L_005a1bb1: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test ebx, ebx }
	__asm { jle L_005a1bd4 }
	__asm { mov ecx, eax }
	__asm { L_005a1bc0: }
	__asm { test ecx, ecx }
	__asm { je L_005a1bcc }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_005a1bcc: }
	__asm { inc edx }
	__asm { add ecx, 4 }
	__asm { cmp edx, ebx }
	__asm { jl L_005a1bc0 }
	__asm { L_005a1bd4: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { je L_005a1bf9 }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_005a1bf2 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005a1bf2: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_005a1bf9: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { L_005a1c09: }
	__asm { pop edi }
	__asm { L_005a1c0a: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ecx, [ecx + eax*4] }
	__asm { test ecx, ecx }
	__asm { je L_005a1c1c }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_005a1c1c: }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { L_005a1c20: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x005a1cf0
extern "C" __declspec(naked) void asm_005a1cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd97178 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], 0x1036ff0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0x103703c }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { push dword ptr [edi + 8] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebx + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_005a1d6f }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebx + 8] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov byte ptr [esi + 8], 1 }
	__asm { L_005a1d6f: }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012bfc70[];
extern "C" char g_012bfc74[];
extern "C" char g_01318fc0[];
extern "C" char g_01318fc4[];
// FUNCTION: ROBLOXSTUDIO 0x005a2250
extern "C" __declspec(naked) void asm_005a2250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, ecx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { cmp dword ptr [edx + 0x14], 0 }
	__asm { je L_005a2320 }
	__asm { cmp byte ptr [edx + 0x10], 0 }
	__asm { je L_005a2320 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp eax, ecx }
	__asm { jne L_005a230a }
	__asm { push edi }
	__asm { lea edi, [eax + eax] }
	__asm { test eax, eax }
	__asm { jne L_005a228c }
	__asm { mov edi, 1 }
	__asm { L_005a228c: }
	__asm { cmp ecx, edi }
	__asm { jge L_005a2309 }
	__asm { test edi, edi }
	__asm { je L_005a22af }
	__asm { inc dword ptr [g_01318fc4] }
	__asm { lea eax, [edi*4] }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc74] }
	__asm { add esp, 8 }
	__asm { jmp L_005a22b1 }
	__asm { L_005a22af: }
	__asm { xor eax, eax }
	__asm { L_005a22b1: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test ebx, ebx }
	__asm { jle L_005a22d4 }
	__asm { mov ecx, eax }
	__asm { L_005a22c0: }
	__asm { test ecx, ecx }
	__asm { je L_005a22cc }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_005a22cc: }
	__asm { inc edx }
	__asm { add ecx, 4 }
	__asm { cmp edx, ebx }
	__asm { jl L_005a22c0 }
	__asm { L_005a22d4: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { je L_005a22f9 }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_005a22f2 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005a22f2: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_005a22f9: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { L_005a2309: }
	__asm { pop edi }
	__asm { L_005a230a: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ecx, [ecx + eax*4] }
	__asm { test ecx, ecx }
	__asm { je L_005a231c }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_005a231c: }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { L_005a2320: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc74[];
extern "C" char g_01318fc4[];
extern "C" void fn_005ce3c0();
// FUNCTION: ROBLOXSTUDIO 0x005a66b0
extern "C" __declspec(naked) void asm_005a66b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd97374 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0x1036ff0 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0x10370f8 }
	__asm { mov byte ptr [esi + 0x1c], 1 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { inc dword ptr [g_01318fc4] }
	__asm { push 0x10 }
	__asm { push 0x44 }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov byte ptr [esi + 0x24], 0 }
	__asm { call dword ptr [g_012bfc74] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_005a6747 }
	__asm { mov ecx, eax }
	__asm { call fn_005ce3c0 }
	__asm { jmp L_005a6749 }
	__asm { L_005a6747: }
	__asm { xor eax, eax }
	__asm { L_005a6749: }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 0x44] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 0x44] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
extern "C" void fn_005a68b0();
// FUNCTION: ROBLOXSTUDIO 0x005a67b0
extern "C" __declspec(naked) void asm_005a67b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd973a3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x10370f8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_005a68b0 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_005a680b }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005a680b: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { test eax, eax }
	__asm { je L_005a6833 }
	__asm { cmp byte ptr [esi + 0x1c], 0 }
	__asm { je L_005a682c }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005a682c: }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_005a6833: }
	__asm { mov byte ptr [esi + 0x1c], 1 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi], 0x1036ff0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x005af860
extern "C" __declspec(naked) void asm_005af860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd97503 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { test eax, eax }
	__asm { je L_005af8b4 }
	__asm { cmp byte ptr [esi + 0x38], 0 }
	__asm { je L_005af8ad }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005af8ad: }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { L_005af8b4: }
	__asm { mov byte ptr [esi + 0x38], 1 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { test eax, eax }
	__asm { je L_005af8f5 }
	__asm { cmp byte ptr [esi + 0x24], 0 }
	__asm { je L_005af8ee }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005af8ee: }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_005af8f5: }
	__asm { mov byte ptr [esi + 0x24], 1 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { test eax, eax }
	__asm { je L_005af939 }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_005af932 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005af932: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_005af939: }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x005b0210
extern "C" __declspec(naked) void asm_005b0210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test eax, eax }
	__asm { jle L_005b027a }
	__asm { push ebx }
	__asm { push esi }
	__asm { xor ebx, ebx }
	__asm { L_005b0225: }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebx + esi + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_005b0252 }
	__asm { cmp byte ptr [ebx + esi + 0x10], 0 }
	__asm { je L_005b024a }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push ecx }
	__asm { call dword ptr [g_012bfc70] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { L_005b024a: }
	__asm { mov dword ptr [ebx + esi + 0xc], 0 }
	__asm { L_005b0252: }
	__asm { mov byte ptr [ebx + esi + 0x10], 1 }
	__asm { mov dword ptr [ebx + esi + 0xc], 0 }
	__asm { mov dword ptr [ebx + esi + 4], 0 }
	__asm { mov dword ptr [ebx + esi + 8], 0 }
	__asm { add ebx, 0x24 }
	__asm { dec eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jne L_005b0225 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_005b027a: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { test eax, eax }
	__asm { je L_005b029e }
	__asm { cmp byte ptr [edi + 0x10], 0 }
	__asm { je L_005b0297 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005b0297: }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { L_005b029e: }
	__asm { mov byte ptr [edi + 0x10], 1 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_012b55c0[];
extern "C" void fn_00409860();
// FUNCTION: ROBLOXSTUDIO 0x005b8b50
extern "C" __declspec(naked) void asm_005b8b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd9781c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { push 0x24 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_005b8bec }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005b8bec: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_005b8ea0();
// FUNCTION: ROBLOXSTUDIO 0x005b8d60
extern "C" __declspec(naked) void asm_005b8d60()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 8] }
	__asm { mov edx, edi }
	__asm { sub edx, esi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { jae L_005b8dea }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul esi }
	__asm { sar edx, 1 }
	__asm { mov esi, edx }
	__asm { push ebx }
	__asm { shr esi, 0x1f }
	__asm { mov ebx, 0x15555555 }
	__asm { add esi, edx }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, 1 }
	__asm { jae L_005b8dad }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_005b8dad: }
	__asm { sub edi, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edi }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { sub ebx, edx }
	__asm { inc esi }
	__asm { cmp ebx, eax }
	__asm { pop ebx }
	__asm { jae L_005b8ddd }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { cmovb eax, esi }
	__asm { push eax }
	__asm { call fn_005b8ea0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_005b8ddd: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { cmovb eax, esi }
	__asm { push eax }
	__asm { call fn_005b8ea0 }
	__asm { L_005b8dea: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" void fn_005b9620();
// FUNCTION: ROBLOXSTUDIO 0x005b8ea0
extern "C" __declspec(naked) void asm_005b8ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov ebx, ecx }
	__asm { test esi, esi }
	__asm { je L_005b8ed5 }
	__asm { cmp esi, 0x15555555 }
	__asm { ja L_005b8ecf }
	__asm { lea eax, [esi + esi*2] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { jne L_005b8ed5 }
	__asm { L_005b8ecf: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_005b8ed5: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { call fn_005b9620 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { sar edx, 1 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { test eax, eax }
	__asm { je L_005b8f14 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { L_005b8f14: }
	__asm { lea eax, [esi + esi*2] }
	__asm { mov dword ptr [ebx], edi }
	__asm { lea eax, [edi + eax*4] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { lea eax, [ecx + ecx*2] }
	__asm { lea eax, [edi + eax*4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10800[];
// FUNCTION: ROBLOXSTUDIO 0x005bd910
extern "C" __declspec(naked) void asm_005bd910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, 3 }
	__asm { push edi }
	__asm { mov esi, 2 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { L_005bd928: }
	__asm { lea eax, [esi - 1] }
	__asm { cdq }
	__asm { idiv ebx }
	__asm { mov eax, esi }
	__asm { mov ebx, edx }
	__asm { cdq }
	__asm { idiv dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { mov edx, dword ptr [edi] }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { jne L_005bd948 }
	__asm { cmp dword ptr [ecx + ebx*4], eax }
	__asm { je L_005bd967 }
	__asm { L_005bd948: }
	__asm { cmp edx, eax }
	__asm { jne L_005bd954 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + ebx*4], eax }
	__asm { je L_005bd967 }
	__asm { L_005bd954: }
	__asm { inc esi }
	__asm { add edi, 4 }
	__asm { lea eax, [esi - 2] }
	__asm { cmp eax, 3 }
	__asm { jge L_005bd979 }
	__asm { mov ebx, 3 }
	__asm { jmp L_005bd928 }
	__asm { L_005bd967: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { add eax, 3 }
	__asm { pop esi }
	__asm { lea eax, [ecx + eax*4] }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_005bd979: }
	__asm { push 0x948 }
	__asm { push 0x1037450 }
	__asm { push 0x1037520 }
	__asm { call dword ptr [g_00e10800] }
	__asm { add esp, 0xc }
	__asm { mov eax, 0x12d96c4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10800[];
extern "C" void fn_005bd910();
// FUNCTION: ROBLOXSTUDIO 0x005bdb70
extern "C" __declspec(naked) void asm_005bdb70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e10800] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, edx }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test eax, eax }
	__asm { js L_005bdb98 }
	__asm { cmp eax, dword ptr [ebx + 4] }
	__asm { jl L_005bdbac }
	__asm { L_005bdb98: }
	__asm { push 0x579 }
	__asm { push 0x1037450 }
	__asm { push 0x1037d60 }
	__asm { call esi }
	__asm { add esp, 0xc }
	__asm { L_005bdbac: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { cmp dword ptr [eax + ecx*4], edi }
	__asm { je L_005bdbca }
	__asm { push 0x965 }
	__asm { push 0x1037450 }
	__asm { push 0x1037b38 }
	__asm { call esi }
	__asm { add esp, 0xc }
	__asm { L_005bdbca: }
	__asm { mov ecx, 2 }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { lea ebx, [edi + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 3 }
	__asm { mov dword ptr [ebp - 0x14], 3 }
	__asm { L_005bdbe3: }
	__asm { lea eax, [ecx - 1] }
	__asm { cdq }
	__asm { idiv dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [edi + edx*4] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { mov ecx, 3 }
	__asm { idiv ecx }
	__asm { mov eax, dword ptr [edi + edx*4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { cmp dword ptr [ebp - 8], eax }
	__asm { jne L_005bdc19 }
	__asm { push 0x96c }
	__asm { push 0x1037450 }
	__asm { push 0x1037a94 }
	__asm { call esi }
	__asm { add esp, 0xc }
	__asm { L_005bdc19: }
	__asm { mov edi, dword ptr [ebx] }
	__asm { test edi, edi }
	__asm { js L_005bdc27 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { cmp edi, dword ptr [eax + 4] }
	__asm { jl L_005bdc3e }
	__asm { L_005bdc27: }
	__asm { push 0x579 }
	__asm { push 0x1037450 }
	__asm { push 0x1037d60 }
	__asm { call esi }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 0xc }
	__asm { L_005bdc3e: }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [eax + edi*4] }
	__asm { call fn_005bd910 }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [edi + 0x18] }
	__asm { je L_005bdc6c }
	__asm { push 0x96d }
	__asm { push 0x1037450 }
	__asm { push 0x1037aa0 }
	__asm { call esi }
	__asm { add esp, 0xc }
	__asm { L_005bdc6c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { inc ecx }
	__asm { add ebx, 4 }
	__asm { dec dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { jne L_005bdbe3 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x005c9e50
extern "C" __declspec(naked) void asm_005c9e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd97988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0x103705c }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0x3f800000 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov dword ptr [edi + 0x28], ecx }
	__asm { mov dword ptr [edi + 0x2c], esi }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { call eax }
	__asm { fstp dword ptr [edi + 0x38] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { call eax }
	__asm { fstp dword ptr [edi + 0x3c] }
	__asm { mov byte ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x48], 0xffffffff }
	__asm { mov dword ptr [edi + 0x54], 1 }
	__asm { mov dword ptr [edi + 0x58], 1 }
	__asm { mov eax, edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x005ce510
extern "C" __declspec(naked) void asm_005ce510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd97a66 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x1037f48 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { test eax, eax }
	__asm { je L_005ce56a }
	__asm { cmp byte ptr [esi + 0x40], 0 }
	__asm { je L_005ce563 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005ce563: }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { L_005ce56a: }
	__asm { mov byte ptr [esi + 0x40], 1 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { test eax, eax }
	__asm { je L_005ce5ab }
	__asm { cmp byte ptr [esi + 0x2c], 0 }
	__asm { je L_005ce5a4 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005ce5a4: }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { L_005ce5ab: }
	__asm { mov byte ptr [esi + 0x2c], 1 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { test eax, eax }
	__asm { je L_005ce5ef }
	__asm { cmp byte ptr [esi + 0x14], 0 }
	__asm { je L_005ce5e8 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005ce5e8: }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_005ce5ef: }
	__asm { mov byte ptr [esi + 0x14], 1 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01319004[];
// FUNCTION: ROBLOXSTUDIO 0x005ce760
extern "C" __declspec(naked) void asm_005ce760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov edx, edi }
	__asm { shl edx, 0x10 }
	__asm { or edx, ebx }
	__asm { mov eax, edx }
	__asm { shl eax, 0xf }
	__asm { not eax }
	__asm { add edx, eax }
	__asm { mov eax, edx }
	__asm { sar eax, 0xa }
	__asm { xor edx, eax }
	__asm { inc dword ptr [g_01319004] }
	__asm { mov esi, ecx }
	__asm { lea ecx, [edx + edx*8] }
	__asm { mov eax, ecx }
	__asm { sar eax, 6 }
	__asm { xor ecx, eax }
	__asm { mov eax, ecx }
	__asm { shl eax, 0xb }
	__asm { not eax }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov edx, ecx }
	__asm { sar edx, 0x10 }
	__asm { xor edx, ecx }
	__asm { dec eax }
	__asm { and edx, eax }
	__asm { cmp edx, dword ptr [esi + 0x20] }
	__asm { jge L_005ce7d9 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { cmp eax, -1 }
	__asm { je L_005ce7d9 }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { mov edi, edi }
	__asm { L_005ce7c0: }
	__asm { lea ecx, [eax + eax*2] }
	__asm { cmp dword ptr [edx + ecx*4], ebx }
	__asm { jne L_005ce7ce }
	__asm { cmp dword ptr [edx + ecx*4 + 4], edi }
	__asm { je L_005ce7e2 }
	__asm { L_005ce7ce: }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { mov eax, dword ptr [ecx + eax*4] }
	__asm { cmp eax, -1 }
	__asm { jne L_005ce7c0 }
	__asm { L_005ce7d9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_005ce7e2: }
	__asm { cmp eax, -1 }
	__asm { je L_005ce7d9 }
	__asm { pop edi }
	__asm { lea eax, [eax + eax*2] }
	__asm { pop esi }
	__asm { lea eax, [edx + eax*4] }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6a20();
// FUNCTION: ROBLOXSTUDIO 0x005cee40
extern "C" __declspec(naked) void asm_005cee40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x2c }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { cdq }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { cdq }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov ecx, eax }
	__asm { mov eax, edx }
	__asm { mov edx, dword ptr [ebx + 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { mov dword ptr [ebp - 0x20], edx }
	__asm { call fn_00cf6a20 }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov edi, edx }
	__asm { push dword ptr [ebp - 8] }
	__asm { push dword ptr [ebx + 0x14] }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { call fn_00cf6a20 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { sub eax, esi }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { sbb edx, edi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { cdq }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x2c], esi }
	__asm { mov dword ptr [ebp - 0x28], ecx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov ebx, edx }
	__asm { call fn_00cf6a20 }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov edi, edx }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6a20 }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { sub esi, eax }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { sbb edi, edx }
	__asm { mov dword ptr [eax + 8], esi }
	__asm { mov dword ptr [eax + 0xc], edi }
	__asm { call fn_00cf6a20 }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov edi, edx }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6a20 }
	__asm { sub esi, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sbb edi, edx }
	__asm { mov dword ptr [eax + 0x14], edi }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 0x10], esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x005cf1c0
extern "C" __declspec(naked) void asm_005cf1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jl L_005cf1eb }
	__asm { jg L_005cf1d3 }
	__asm { test edx, edx }
	__asm { je L_005cf1e1 }
	__asm { L_005cf1d3: }
	__asm { mov dword ptr [ecx + 0x10], 1 }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { jmp L_005cf214 }
	__asm { L_005cf1e1: }
	__asm { test eax, eax }
	__asm { jg L_005cf200 }
	__asm { jl L_005cf1eb }
	__asm { test edx, edx }
	__asm { jae L_005cf200 }
	__asm { L_005cf1eb: }
	__asm { neg edx }
	__asm { adc eax, 0 }
	__asm { neg eax }
	__asm { mov dword ptr [ecx + 0x10], 0xffffffff }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { jmp L_005cf214 }
	__asm { L_005cf200: }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { L_005cf214: }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { test edx, edx }
	__asm { jl L_005cf22f }
	__asm { jg L_005cf23e }
	__asm { test esi, esi }
	__asm { jne L_005cf23e }
	__asm { test edx, edx }
	__asm { jg L_005cf24b }
	__asm { jl L_005cf22f }
	__asm { test esi, esi }
	__asm { jae L_005cf24b }
	__asm { L_005cf22f: }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { neg eax }
	__asm { neg esi }
	__asm { adc edx, 0 }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { neg edx }
	__asm { L_005cf23e: }
	__asm { mov dword ptr [ecx + 8], esi }
	__asm { mov dword ptr [ecx + 0xc], edx }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_005cf24b: }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x005cf6d0
extern "C" __declspec(naked) void asm_005cf6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [edx] }
	__asm { mov ebx, ecx }
	__asm { cmp edi, edx }
	__asm { je L_005cf6f7 }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [eax + 8], edi }
	__asm { jmp L_005cf701 }
	__asm { L_005cf6f7: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { L_005cf701: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, esi }
	__asm { je L_005cf71a }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { jmp L_005cf724 }
	__asm { L_005cf71a: }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { L_005cf724: }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { mov dword ptr [edx + 0xc], 0 }
	__asm { mov dword ptr [edx + 0x10], 0 }
	__asm { mov eax, dword ptr [ebx + 0x38] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [ebx + 0x38], edx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov eax, dword ptr [ebx + 0x38] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [ebx + 0x38], esi }
	__asm { dec dword ptr [ebx + 0x74] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005cf150();
extern "C" void fn_005d56e0();
// FUNCTION: ROBLOXSTUDIO 0x005cf9c0
extern "C" __declspec(naked) void asm_005cf9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x10] }
	__asm { cmp esi, eax }
	__asm { je L_005cf9e5 }
	__asm { sub esi, eax }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005cf9e5: }
	__asm { test esi, esi }
	__asm { jne L_005cf9f4 }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005cf9f4: }
	__asm { push dword ptr [ebx + 4] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push dword ptr [ebx] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push dword ptr [edi + 0xc] }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_005d56e0 }
	__asm { push dword ptr [ebx + 0xc] }
	__asm { lea edx, [ebp - 0x1c] }
	__asm { push dword ptr [ebx + 8] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_005d56e0 }
	__asm { add esp, 0x20 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_005cf150 }
	__asm { imul eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005cf150();
extern "C" void fn_005cf790();
extern "C" void fn_00cf6a20();
// FUNCTION: ROBLOXSTUDIO 0x005cfb40
extern "C" __declspec(naked) void asm_005cfb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 0x24], 0 }
	__asm { je L_005cfb84 }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { push dword ptr [esi] }
	__asm { cdq }
	__asm { push edx }
	__asm { push eax }
	__asm { call fn_00cf6a20 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp edx, esi }
	__asm { jl L_005cfb9b }
	__asm { jg L_005cfbb7 }
	__asm { cmp eax, ecx }
	__asm { ja L_005cfbb7 }
	__asm { cmp edx, esi }
	__asm { jg L_005cfb7a }
	__asm { jl L_005cfb9b }
	__asm { cmp eax, ecx }
	__asm { jb L_005cfb9b }
	__asm { L_005cfb7a: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_005cfb84: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jl L_005cfbb0 }
	__asm { jg L_005cfb94 }
	__asm { test ecx, ecx }
	__asm { je L_005cfba6 }
	__asm { L_005cfb94: }
	__asm { mov edi, dword ptr [esi + 0x20] }
	__asm { test edi, edi }
	__asm { jg L_005cfbcb }
	__asm { L_005cfb9b: }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_005cfba6: }
	__asm { test eax, eax }
	__asm { jg L_005cfbec }
	__asm { jl L_005cfbb0 }
	__asm { test ecx, ecx }
	__asm { jae L_005cfbec }
	__asm { L_005cfbb0: }
	__asm { mov edi, dword ptr [esi + 0x20] }
	__asm { test edi, edi }
	__asm { js L_005cfbc4 }
	__asm { L_005cfbb7: }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_005cfbc4: }
	__asm { neg ecx }
	__asm { adc eax, 0 }
	__asm { neg eax }
	__asm { L_005cfbcb: }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_005cf790 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_005cf150 }
	__asm { imul eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_005cfbec: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc74[];
extern "C" char g_01318fc4[];
extern "C" void fn_005d5920();
// FUNCTION: ROBLOXSTUDIO 0x005d5470
extern "C" __declspec(naked) void asm_005d5470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd97b51 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { test eax, eax }
	__asm { jne L_005d550b }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_005d54af }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { jmp L_005d5504 }
	__asm { L_005d54af: }
	__asm { inc dword ptr [g_01318fc4] }
	__asm { push 0x10 }
	__asm { push 0xc }
	__asm { call dword ptr [g_012bfc74] }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_005d54fb }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { inc dword ptr [g_01318fc4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { imul eax, eax, 0x70 }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { call dword ptr [g_012bfc74] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_005d54fd }
	__asm { L_005d54fb: }
	__asm { xor esi, esi }
	__asm { L_005d54fd: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [edi], esi }
	__asm { L_005d5504: }
	__asm { mov ecx, esi }
	__asm { call fn_005d5920 }
	__asm { L_005d550b: }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov dword ptr [eax + 0x68], 0xffffffff }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc74[];
extern "C" char g_01318fc4[];
extern "C" void fn_005d5960();
// FUNCTION: ROBLOXSTUDIO 0x005d5550
extern "C" __declspec(naked) void asm_005d5550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd97b51 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { test eax, eax }
	__asm { jne L_005d55ee }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_005d558f }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { jmp L_005d55e7 }
	__asm { L_005d558f: }
	__asm { inc dword ptr [g_01318fc4] }
	__asm { push 0x10 }
	__asm { push 0xc }
	__asm { call dword ptr [g_012bfc74] }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_005d55de }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { inc dword ptr [g_01318fc4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea eax, [eax + eax*2] }
	__asm { shl eax, 3 }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { call dword ptr [g_012bfc74] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_005d55e0 }
	__asm { L_005d55de: }
	__asm { xor esi, esi }
	__asm { L_005d55e0: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [edi], esi }
	__asm { L_005d55e7: }
	__asm { mov ecx, esi }
	__asm { call fn_005d5960 }
	__asm { L_005d55ee: }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc74[];
extern "C" char g_01318fc4[];
extern "C" void fn_005d59a0();
// FUNCTION: ROBLOXSTUDIO 0x005d5610
extern "C" __declspec(naked) void asm_005d5610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd97b51 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { test eax, eax }
	__asm { jne L_005d56b2 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_005d564f }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { jmp L_005d56ab }
	__asm { L_005d564f: }
	__asm { inc dword ptr [g_01318fc4] }
	__asm { push 0x10 }
	__asm { push 0xc }
	__asm { call dword ptr [g_012bfc74] }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_005d56a2 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { inc dword ptr [g_01318fc4] }
	__asm { mov eax, ecx }
	__asm { shl eax, 4 }
	__asm { sub eax, ecx }
	__asm { shl eax, 2 }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { call dword ptr [g_012bfc74] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_005d56a4 }
	__asm { L_005d56a2: }
	__asm { xor esi, esi }
	__asm { L_005d56a4: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [edi], esi }
	__asm { L_005d56ab: }
	__asm { mov ecx, esi }
	__asm { call fn_005d59a0 }
	__asm { L_005d56b2: }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6a20();
// FUNCTION: ROBLOXSTUDIO 0x005d56e0
extern "C" __declspec(naked) void asm_005d56e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { call fn_00cf6a20 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push edi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov esi, edx }
	__asm { call fn_00cf6a20 }
	__asm { xor ecx, ecx }
	__asm { add dword ptr [ebp - 4], eax }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { adc ecx, ecx }
	__asm { xor eax, eax }
	__asm { add ecx, edx }
	__asm { adc eax, eax }
	__asm { add ecx, esi }
	__asm { push 0 }
	__asm { adc eax, 0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { call fn_00cf6a20 }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { mov edi, dword ptr [ebp - 0xc] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add esi, eax }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { adc edi, edx }
	__asm { call fn_00cf6a20 }
	__asm { mov ecx, eax }
	__asm { add ecx, 0 }
	__asm { adc edx, dword ptr [ebp - 4] }
	__asm { cmp edx, dword ptr [ebp - 4] }
	__asm { ja L_005d5769 }
	__asm { jb L_005d5763 }
	__asm { test ecx, ecx }
	__asm { jae L_005d5769 }
	__asm { L_005d5763: }
	__asm { add esi, 1 }
	__asm { adc edi, 0 }
	__asm { L_005d5769: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { pop edi }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
extern "C" void fn_005b0210();
// FUNCTION: ROBLOXSTUDIO 0x005d6540
extern "C" __declspec(naked) void asm_005d6540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd97c46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x1037f5c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { test eax, eax }
	__asm { je L_005d659a }
	__asm { cmp byte ptr [esi + 0x48], 0 }
	__asm { je L_005d6593 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005d6593: }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { L_005d659a: }
	__asm { lea ecx, [esi + 0x24] }
	__asm { mov byte ptr [esi + 0x48], 1 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_005b0210 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_005d65ea }
	__asm { cmp byte ptr [esi + 0x20], 0 }
	__asm { je L_005d65e3 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005d65e3: }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { L_005d65ea: }
	__asm { mov byte ptr [esi + 0x20], 1 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x005d74c0
extern "C" __declspec(naked) void asm_005d74c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd97c0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi + 0x48] }
	__asm { test eax, eax }
	__asm { je L_005d7514 }
	__asm { cmp byte ptr [esi + 0x4c], 0 }
	__asm { je L_005d750d }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005d750d: }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { L_005d7514: }
	__asm { mov byte ptr [esi + 0x4c], 1 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { test eax, eax }
	__asm { je L_005d7555 }
	__asm { cmp byte ptr [esi + 0x38], 0 }
	__asm { je L_005d754e }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005d754e: }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { L_005d7555: }
	__asm { mov byte ptr [esi + 0x38], 1 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { test eax, eax }
	__asm { je L_005d7596 }
	__asm { cmp byte ptr [esi + 0x24], 0 }
	__asm { je L_005d758f }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005d758f: }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_005d7596: }
	__asm { mov byte ptr [esi + 0x24], 1 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { test eax, eax }
	__asm { je L_005d75da }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_005d75d3 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005d75d3: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_005d75da: }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005d9f60
extern "C" __declspec(naked) void asm_005d9f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { mov eax, dword ptr [edx + 0x20] }
	__asm { mov dword ptr [ecx + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0x24] }
	__asm { mov dword ptr [ecx + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x28] }
	__asm { mov dword ptr [ecx + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x2c] }
	__asm { mov dword ptr [ecx + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x30] }
	__asm { mov dword ptr [ecx + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x34] }
	__asm { mov dword ptr [ecx + 0x34], eax }
	__asm { mov eax, dword ptr [edx + 0x38] }
	__asm { mov dword ptr [ecx + 0x38], eax }
	__asm { mov eax, dword ptr [edx + 0x3c] }
	__asm { mov dword ptr [ecx + 0x3c], eax }
	__asm { mov eax, dword ptr [edx + 0x40] }
	__asm { mov dword ptr [ecx + 0x40], eax }
	__asm { mov eax, dword ptr [edx + 0x44] }
	__asm { mov dword ptr [ecx + 0x44], eax }
	__asm { mov eax, dword ptr [edx + 0x48] }
	__asm { mov dword ptr [ecx + 0x48], eax }
	__asm { mov eax, dword ptr [edx + 0x4c] }
	__asm { mov dword ptr [ecx + 0x4c], eax }
	__asm { mov eax, dword ptr [edx + 0x50] }
	__asm { mov dword ptr [ecx + 0x50], eax }
	__asm { mov eax, dword ptr [edx + 0x54] }
	__asm { mov dword ptr [ecx + 0x54], eax }
	__asm { mov eax, dword ptr [edx + 0x58] }
	__asm { mov dword ptr [ecx + 0x58], eax }
	__asm { mov eax, dword ptr [edx + 0x5c] }
	__asm { mov dword ptr [ecx + 0x5c], eax }
	__asm { mov eax, dword ptr [edx + 0x60] }
	__asm { mov dword ptr [ecx + 0x60], eax }
	__asm { mov eax, dword ptr [edx + 0x64] }
	__asm { mov dword ptr [ecx + 0x64], eax }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [ecx + 0x68], eax }
	__asm { mov eax, dword ptr [edx + 0x6c] }
	__asm { mov dword ptr [ecx + 0x6c], eax }
	__asm { mov eax, dword ptr [edx + 0x70] }
	__asm { mov dword ptr [ecx + 0x70], eax }
	__asm { mov eax, dword ptr [edx + 0x74] }
	__asm { mov dword ptr [ecx + 0x74], eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_0043e3c0();
extern "C" void fn_005d9f60();
extern "C" void fn_005da650();
// FUNCTION: ROBLOXSTUDIO 0x005da560
extern "C" __declspec(naked) void asm_005da560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { jae L_005da5bc }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_005da5bc }
	__asm { sub edi, eax }
	__asm { mov eax, 0x88888889 }
	__asm { imul edi }
	__asm { add edx, edi }
	__asm { sar edx, 6 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_005da599 }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call L_005da5e0 }
	__asm { L_005da599: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_005da5d6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, edi }
	__asm { shl edx, 4 }
	__asm { sub edx, edi }
	__asm { lea eax, [eax + edx*8] }
	__asm { push eax }
	__asm { call fn_005d9f60 }
	__asm { add dword ptr [esi + 4], 0x78 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005da5bc: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_005da5c9 }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call L_005da5e0 }
	__asm { L_005da5c9: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_005da5d6 }
	__asm { push edi }
	__asm { call fn_005d9f60 }
	__asm { L_005da5d6: }
	__asm { add dword ptr [esi + 4], 0x78 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005da5e0: }
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
	__asm { sar edx, 6 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { cmp ecx, 1 }
	__asm { jae L_005da644 }
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
	__asm { cmp eax, 1 }
	__asm { jae L_005da631 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_005da631: }
	__asm { lea eax, [ecx + 1] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0043e3c0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_005da650 }
	__asm { L_005da644: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" void fn_005da6f0();
// FUNCTION: ROBLOXSTUDIO 0x005da650
extern "C" __declspec(naked) void asm_005da650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov ebx, ecx }
	__asm { test esi, esi }
	__asm { je L_005da689 }
	__asm { cmp esi, 0x2222222 }
	__asm { ja L_005da683 }
	__asm { mov eax, esi }
	__asm { shl eax, 4 }
	__asm { sub eax, esi }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { jne L_005da689 }
	__asm { L_005da683: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_005da689: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { call fn_005da6f0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x88888889 }
	__asm { imul ecx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add edx, ecx }
	__asm { sar edx, 6 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { test eax, eax }
	__asm { je L_005da6cb }
	__asm { push eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { L_005da6cb: }
	__asm { mov eax, esi }
	__asm { shl eax, 4 }
	__asm { sub eax, esi }
	__asm { mov dword ptr [ebx], edi }
	__asm { lea eax, [edi + eax*8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, ecx }
	__asm { shl eax, 4 }
	__asm { sub eax, ecx }
	__asm { lea eax, [edi + eax*8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004115f0();
extern "C" void fn_005db6e0();
extern "C" void fn_005db7f0();
extern "C" void fn_005db9b0();
extern "C" void fn_00984650();
// FUNCTION: ROBLOXSTUDIO 0x005db520
extern "C" __declspec(naked) void asm_005db520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0dfd3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_00984650 }
	__asm { mov dword ptr [ebx], 0xe181e4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebx + 0x28], 0 }
	__asm { mov dword ptr [ebx + 0x2c], ebx }
	__asm { push 0x5dce60 }
	__asm { push 0x12d9744 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004115f0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { call fn_005db7f0 }
	__asm { lea eax, [esi + 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x1c] }
	__asm { call fn_005db6e0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov al, byte ptr [esi + 0xc] }
	__asm { mov byte ptr [ebx + 0xc], al }
	__asm { lea eax, [esi + 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x28] }
	__asm { call fn_005db9b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00609290();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005dbb30
extern "C" __declspec(naked) void asm_005dbb30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e010 }
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
	__asm { je L_005dbb85 }
	__asm { cmp edi, 0x15555555 }
	__asm { ja L_005dbb7f }
	__asm { lea eax, [edi + edi*2] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_005dbb85 }
	__asm { L_005dbb7f: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_005dbb85: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00609290 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { sar edx, 1 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { test eax, eax }
	__asm { je L_005dbbcd }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { L_005dbbcd: }
	__asm { lea eax, [edi + edi*2] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { lea eax, [ecx + ecx*2] }
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

extern "C" char g_00e1025c[];
extern "C" void fn_00a1e450();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005dbc10
extern "C" __declspec(naked) void asm_005dbc10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e020 }
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
	__asm { je L_005dbc65 }
	__asm { cmp edi, 0xaaaaaaa }
	__asm { ja L_005dbc5f }
	__asm { lea eax, [edi + edi*2] }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_005dbc65 }
	__asm { L_005dbc5f: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_005dbc65: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00a1e450 }
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
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { test eax, eax }
	__asm { je L_005dbcae }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { L_005dbcae: }
	__asm { lea eax, [edi + edi*2] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { lea eax, [ecx + ecx*2] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + eax*8] }
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
extern "C" void fn_005dbb30();
// FUNCTION: ROBLOXSTUDIO 0x005dbcf0
extern "C" __declspec(naked) void asm_005dbcf0()
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
	__asm { jae L_005dbd88 }
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
	__asm { jae L_005dbd3f }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_005dbd3f: }
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
	__asm { jae L_005dbd75 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_005dbb30 }
	__asm { L_005dbd75: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_005dbb30 }
	__asm { L_005dbd88: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_005dbc10();
// FUNCTION: ROBLOXSTUDIO 0x005dbd90
extern "C" __declspec(naked) void asm_005dbd90()
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
	__asm { jae L_005dbe2b }
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
	__asm { jae L_005dbde1 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_005dbde1: }
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
	__asm { jae L_005dbe18 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_005dbc10 }
	__asm { L_005dbe18: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_005dbc10 }
	__asm { L_005dbe2b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005dc320();
// FUNCTION: ROBLOXSTUDIO 0x005dc860
extern "C" __declspec(naked) void asm_005dc860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { xor ecx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ebx, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x30c30c31 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { je L_005dc8cf }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov edi, edi }
	__asm { L_005dc890: }
	__asm { lea ecx, [edi + ebx] }
	__asm { lea eax, [ecx + 0xc] }
	__asm { push eax }
	__asm { lea eax, [edx + 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_005dc320 }
	__asm { mov ebx, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { inc dword ptr [ebp - 4] }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x30c30c31 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { add esp, 0x14 }
	__asm { lea edi, [edi + 0x54] }
	__asm { cmp dword ptr [ebp - 4], eax }
	__asm { jb L_005dc890 }
	__asm { pop edi }
	__asm { L_005dc8cf: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005dc320();
// FUNCTION: ROBLOXSTUDIO 0x005dc8e0
extern "C" __declspec(naked) void asm_005dc8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { xor ecx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ebx, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x30c30c31 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { je L_005dc94f }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov edi, edi }
	__asm { L_005dc910: }
	__asm { lea ecx, [edi + ebx] }
	__asm { lea eax, [ecx + 0x38] }
	__asm { push eax }
	__asm { lea eax, [edx + 0x38] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_005dc320 }
	__asm { mov ebx, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { inc dword ptr [ebp - 4] }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x30c30c31 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { add esp, 0x14 }
	__asm { lea edi, [edi + 0x54] }
	__asm { cmp dword ptr [ebp - 4], eax }
	__asm { jb L_005dc910 }
	__asm { pop edi }
	__asm { L_005dc94f: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005dbcf0();
// FUNCTION: ROBLOXSTUDIO 0x005dd030
extern "C" __declspec(naked) void asm_005dd030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { jae L_005dd090 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_005dd090 }
	__asm { sub edi, eax }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edi }
	__asm { sar edx, 1 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_005dd067 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_005dbcf0 }
	__asm { L_005dd067: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi + edi*2] }
	__asm { lea edx, [eax + ecx*4] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_005dd0b5 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { add dword ptr [esi + 4], 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005dd090: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_005dd09e }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_005dbcf0 }
	__asm { L_005dd09e: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_005dd0b5 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { L_005dd0b5: }
	__asm { add dword ptr [esi + 4], 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005dbd90();
// FUNCTION: ROBLOXSTUDIO 0x005dd0c0
extern "C" __declspec(naked) void asm_005dd0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { jae L_005dd133 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_005dd133 }
	__asm { sub edi, eax }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edi }
	__asm { sar edx, 2 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_005dd0f8 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_005dbd90 }
	__asm { L_005dd0f8: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi + edi*2] }
	__asm { lea edx, [eax + ecx*8] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_005dd16a }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { add dword ptr [esi + 4], 0x18 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005dd133: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_005dd141 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_005dbd90 }
	__asm { L_005dd141: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_005dd16a }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { L_005dd16a: }
	__asm { add dword ptr [esi + 4], 0x18 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00529810();
extern "C" void fn_005316c0();
// FUNCTION: ROBLOXSTUDIO 0x005dd180
extern "C" __declspec(naked) void asm_005dd180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { jae L_005dd1d4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_005dd1d4 }
	__asm { sub edi, eax }
	__asm { mov eax, 0x30c30c31 }
	__asm { imul edi }
	__asm { sar edx, 4 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_005dd1b8 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00529810 }
	__asm { L_005dd1b8: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_005dd1ef }
	__asm { imul edi, edi, 0x54 }
	__asm { add edi, dword ptr [esi] }
	__asm { push edi }
	__asm { call fn_005316c0 }
	__asm { add dword ptr [esi + 4], 0x54 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005dd1d4: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_005dd1e2 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00529810 }
	__asm { L_005dd1e2: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_005dd1ef }
	__asm { push edi }
	__asm { call fn_005316c0 }
	__asm { L_005dd1ef: }
	__asm { add dword ptr [esi + 4], 0x54 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x005df190
extern "C" __declspec(naked) void asm_005df190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_005df229 }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { je L_005df1dc }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005df1c7 }
	__asm { push 0x7b }
	__asm { push 0xe185a0 }
	__asm { push 0xe185f4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005df1dc }
	__asm { L_005df1c7: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe18608 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005df1dc: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_005df229 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { jne L_005df220 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005df20b }
	__asm { push 0x7c }
	__asm { push 0xe185a0 }
	__asm { push 0xe18680 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005df220 }
	__asm { L_005df20b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe18690 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005df220: }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005df229: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005dfce0
extern "C" __declspec(naked) void asm_005dfce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 0xac] }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jne L_005dfd03 }
	__asm { mov eax, dword ptr [esi + 0xb0] }
	__asm { cmp eax, dword ptr [edi + 4] }
	__asm { je L_005dfd9a }
	__asm { L_005dfd03: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 0xac], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0xb0], eax }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jne L_005dfd2b }
	__asm { push 0 }
	__asm { push 0x1b }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0xe4] }
	__asm { jmp L_005dfd64 }
	__asm { L_005dfd2b: }
	__asm { push 1 }
	__asm { push 0x1b }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0xe4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push dword ptr [eax*8 + 0xe18434] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push 0x13 }
	__asm { push ecx }
	__asm { call dword ptr [edx + 0xe4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push dword ptr [eax*8 + 0xe18438] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push 0x14 }
	__asm { push ecx }
	__asm { call dword ptr [edx + 0xe4] }
	__asm { L_005dfd64: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { test al, 1 }
	__asm { mov ecx, 1 }
	__asm { cmovne edx, ecx }
	__asm { test al, 2 }
	__asm { je L_005dfd7a }
	__asm { or edx, 2 }
	__asm { L_005dfd7a: }
	__asm { test al, 4 }
	__asm { je L_005dfd81 }
	__asm { or edx, 4 }
	__asm { L_005dfd81: }
	__asm { test al, 8 }
	__asm { je L_005dfd88 }
	__asm { or edx, 8 }
	__asm { L_005dfd88: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push 0xa8 }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0xe4] }
	__asm { L_005dfd9a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012d97c4[];
extern "C" void fn_0060f3f0();
extern "C" void fn_006b8aae();
// FUNCTION: ROBLOXSTUDIO 0x005e0710
extern "C" __declspec(naked) void asm_005e0710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e2f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0060f3f0 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea edi, [esi + 0x2c] }
	__asm { mov dword ptr [esi], 0xe191a4 }
	__asm { mov dword ptr [esi + 0x28], edx }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push edx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [ecx + 0x1d8] }
	__asm { test eax, eax }
	__asm { jns L_005e0790 }
	__asm { mov cl, byte ptr [g_012d97c4] }
	__asm { test cl, cl }
	__asm { je L_005e078a }
	__asm { push 0 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x28] }
	__asm { movzx eax, cl }
	__asm { push 0xe19334 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_005e078a: }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_005e0790: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012d97c4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_005e1f30();
extern "C" void fn_005e2040();
extern "C" void fn_005e21c0();
extern "C" void fn_005e3940();
extern "C" void fn_005eb770();
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x005e0d50
extern "C" __declspec(naked) void asm_005e0d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push eax }
	__asm { call fn_005e21c0 }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { add esp, 8 }
	__asm { cmp byte ptr [esi + 0x18], 0 }
	__asm { jne L_005e0e15 }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { test ecx, ecx }
	__asm { je L_005e0e15 }
	__asm { cmp ebx, dword ptr [ecx + 0x28] }
	__asm { jne L_005e0d92 }
	__asm { cmp edi, dword ptr [ecx + 0x2c] }
	__asm { je L_005e0e15 }
	__asm { L_005e0d92: }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { test ecx, ecx }
	__asm { je L_005e0da3 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_005e0da3: }
	__asm { mov ecx, esi }
	__asm { call fn_005eb770 }
	__asm { cmp dword ptr [esi + 0x70], 0 }
	__asm { lea ecx, [esi + 0x70] }
	__asm { je L_005e0dba }
	__asm { push 0 }
	__asm { call fn_005e3940 }
	__asm { L_005e0dba: }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_005e2040 }
	__asm { test al, al }
	__asm { je L_005e0e25 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_005e0e15 }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { cmp ebx, dword ptr [ecx + 0x28] }
	__asm { jne L_005e0ddd }
	__asm { cmp edi, dword ptr [ecx + 0x2c] }
	__asm { je L_005e0e15 }
	__asm { L_005e0ddd: }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005e0e04 }
	__asm { push 0x167 }
	__asm { push 0xe19450 }
	__asm { push 0xe194a0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e0e15 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005e0e04: }
	__asm { movzx eax, al }
	__asm { push 0xe19508 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e0e15: }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_005e1f30 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005e0e25: }
	__asm { mov byte ptr [esi + 0x18], 1 }
	__asm { mov al, byte ptr [g_012d97c4] }
	__asm { test al, al }
	__asm { je L_005e0e45 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe195c8 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_005e0e45: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005df240();
extern "C" void fn_005e21c0();
// FUNCTION: ROBLOXSTUDIO 0x005e0e50
extern "C" __declspec(naked) void asm_005e0e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push eax }
	__asm { call fn_005e21c0 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_005e0ee2 }
	__asm { cmp byte ptr [esi + 0x18], 0 }
	__asm { jne L_005e0ee2 }
	__asm { cmp edx, dword ptr [eax + 0x28] }
	__asm { jne L_005e0ee2 }
	__asm { cmp ecx, dword ptr [eax + 0x2c] }
	__asm { jne L_005e0ee2 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [eax] }
	__asm { call dword ptr [ecx + 0xc] }
	__asm { test eax, eax }
	__asm { js L_005e0ee2 }
	__asm { mov eax, dword ptr [esi + 0x4c] }
	__asm { mov ecx, dword ptr [eax + 0x2c] }
	__asm { test ecx, ecx }
	__asm { je L_005e0ebb }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { cmp dword ptr [eax + 0x2c], 0 }
	__asm { je L_005e0ebb }
	__asm { mov eax, dword ptr [esi + 0x54] }
	__asm { cmp dword ptr [eax + 0x2c], 0 }
	__asm { je L_005e0ebb }
	__asm { cmp byte ptr [esi + 0x58], 0 }
	__asm { jne L_005e0ebb }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { push ecx }
	__asm { call dword ptr [eax + 0x18] }
	__asm { L_005e0ebb: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [eax] }
	__asm { call dword ptr [ecx + 0xa4] }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { push dword ptr [esi + 0x40] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { call fn_005df240 }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005e0ee2: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005e60e0();
// FUNCTION: ROBLOXSTUDIO 0x005e1700
extern "C" __declspec(naked) void asm_005e1700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e499 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_005e177f }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_005e1768 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_005e177f }
	__asm { L_005e1768: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_005e177f: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_005e60e0 }
	__asm { add esp, 0x2c }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_005e17bc }
	__asm { test al, 1 }
	__asm { jne L_005e17bc }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_005e17bc }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_005e17bc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_005e3df0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x005e1e40
extern "C" __declspec(naked) void asm_005e1e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0e5a0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_005e1ea5 }
	__asm { cmp dword ptr [esi + 0x40], 0 }
	__asm { je L_005e1ea5 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005e1e94 }
	__asm { push 0x25b }
	__asm { push 0xe19450 }
	__asm { push 0xe199bc }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e1ea5 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005e1e94: }
	__asm { movzx eax, al }
	__asm { push 0xe199d0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e1ea5: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { lea edx, [ebp - 0x14] }
	__asm { push edx }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push 0 }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x48] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push edx }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0xa0] }
	__asm { push 0x48 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_005e1efe }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { push esi }
	__asm { call fn_005e3df0 }
	__asm { jmp L_005e1f00 }
	__asm { L_005e1efe: }
	__asm { xor eax, eax }
	__asm { L_005e1f00: }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test ecx, ecx }
	__asm { je L_005e1f18 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_005e1f18: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012d97c4[];
extern "C" void fn_005e2040();
extern "C" void fn_005e2130();
extern "C" void fn_006b8a90();
// FUNCTION: ROBLOXSTUDIO 0x005e1f30
extern "C" __declspec(naked) void asm_005e1f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { push eax }
	__asm { mov edx, dword ptr [eax] }
	__asm { call dword ptr [edx + 0xc] }
	__asm { test eax, eax }
	__asm { js L_005e1f74 }
	__asm { cmp byte ptr [esi + 0x18], 0 }
	__asm { je L_005e1feb }
	__asm { mov al, byte ptr [g_012d97c4] }
	__asm { test al, al }
	__asm { je L_005e2031 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe19a40 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_005e1f74: }
	__asm { cmp eax, 0x88760868 }
	__asm { jne L_005e1fb3 }
	__asm { cmp byte ptr [esi + 0x18], 0 }
	__asm { jne L_005e2031 }
	__asm { mov byte ptr [esi + 0x18], 1 }
	__asm { mov al, byte ptr [g_012d97c4] }
	__asm { test al, al }
	__asm { je L_005e1fa5 }
	__asm { push 0 }
	__asm { push 0xe19a90 }
	__asm { L_005e1f99: }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_005e1fa5: }
	__asm { mov ecx, esi }
	__asm { call fn_005e2130 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_005e1fb3: }
	__asm { cmp eax, 0x88760869 }
	__asm { jne L_005e2015 }
	__asm { cmp byte ptr [esi + 0x18], 0 }
	__asm { jne L_005e1fd6 }
	__asm { mov byte ptr [esi + 0x18], 1 }
	__asm { mov al, byte ptr [g_012d97c4] }
	__asm { test al, al }
	__asm { je L_005e1fa5 }
	__asm { push 0 }
	__asm { push 0xe19ab4 }
	__asm { jmp L_005e1f99 }
	__asm { L_005e1fd6: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_005e2040 }
	__asm { test al, al }
	__asm { je L_005e1ff2 }
	__asm { mov byte ptr [esi + 0x18], 0 }
	__asm { L_005e1feb: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_005e1ff2: }
	__asm { mov al, byte ptr [g_012d97c4] }
	__asm { test al, al }
	__asm { je L_005e2031 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe195c8 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_005e2015: }
	__asm { mov cl, byte ptr [g_012d97c4] }
	__asm { test cl, cl }
	__asm { je L_005e2031 }
	__asm { push eax }
	__asm { movzx eax, cl }
	__asm { push 0xe19af0 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_005e2031: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x005e3840
extern "C" __declspec(naked) void asm_005e3840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd477d1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_005e38b7 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { jne L_005e388b }
	__asm { xor eax, eax }
	__asm { jmp L_005e389b }
	__asm { L_005e388b: }
	__asm { mov eax, edx }
	__asm { push ebx }
	__asm { lea ebx, [eax + 1] }
	__asm { L_005e3891: }
	__asm { mov cl, byte ptr [eax] }
	__asm { inc eax }
	__asm { test cl, cl }
	__asm { jne L_005e3891 }
	__asm { sub eax, ebx }
	__asm { pop ebx }
	__asm { L_005e389b: }
	__asm { push eax }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { pop edi }
	__asm { L_005e38b7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e4760
extern "C" __declspec(naked) void asm_005e4760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x14] }
	__asm { test cl, cl }
	__asm { je L_005e47ba }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { cmp eax, dword ptr [esi + 0x38] }
	__asm { jne L_005e47ba }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e47a9 }
	__asm { push 0xda }
	__asm { push 0xe19d10 }
	__asm { push 0xe19ff4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e47ba }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_005e47a9: }
	__asm { movzx eax, cl }
	__asm { push 0xe1a880 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e47ba: }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push ecx }
	__asm { mov esi, dword ptr [eax + 0x38] }
	__asm { push esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x30] }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 4] }
	__asm { push ecx }
	__asm { push 2 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { push edi }
	__asm { call dword ptr [eax + 0x90] }
	__asm { test eax, eax }
	__asm { js L_005e4806 }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [eax + 0x80] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_005e4826 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005e4806: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0xe1a8f0 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_005e4826: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ecx] }
	__asm { call dword ptr [edx + 8] }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0xe1a928 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_005e9ff0();
extern "C" void fn_006106c0();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e4850
extern "C" __declspec(naked) void asm_005e4850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_005e9ff0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ebx, eax }
	__asm { mov eax, 1 }
	__asm { cmp eax, dword ptr [ebp + 0x18] }
	__asm { sbb edi, edi }
	__asm { and edi, dword ptr [ebp + 0x18] }
	__asm { call fn_006106c0 }
	__asm { add esp, 8 }
	__asm { lea edx, [ebp - 4] }
	__asm { push 0 }
	__asm { push edx }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { test al, al }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push eax }
	__asm { je L_005e48a2 }
	__asm { call dword ptr [ecx + 0x74] }
	__asm { jmp L_005e48a5 }
	__asm { L_005e48a2: }
	__asm { call dword ptr [ecx + 0x70] }
	__asm { L_005e48a5: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { js L_005e48b2 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005e48b2: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0xe19cf0 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006c21d0();
// FUNCTION: ROBLOXSTUDIO 0x005e4b50
extern "C" __declspec(naked) void asm_005e4b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_005e4bae }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_005e4bae }
	__asm { sub edi, ecx }
	__asm { sar edi, 3 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_005e4b7a }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_006c21d0 }
	__asm { L_005e4b7a: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { lea ecx, [eax + edi*8] }
	__asm { test edx, edx }
	__asm { je L_005e4be1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [ecx], 0 }
	__asm { add dword ptr [esi + 4], 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005e4bae: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_005e4bbc }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_006c21d0 }
	__asm { L_005e4bbc: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_005e4be1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_005e4be1: }
	__asm { add dword ptr [esi + 4], 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005ebb50();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e4ee0
extern "C" __declspec(naked) void asm_005e4ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e804 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_005ebb50 }
	__asm { imul ebx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { push 0 }
	__asm { mov dword ptr [eax], 0xe1a9d0 }
	__asm { mov dword ptr [eax + 0x34], 0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { lea edx, [ebp + 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [edi*8 + 0xe1a98c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0 }
	__asm { push dword ptr [edi*8 + 0xe1a990] }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { push ebx }
	__asm { push ecx }
	__asm { call dword ptr [eax + 0x68] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { jns L_005e4f80 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0xe1aa14 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_005e4f80: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0x34], eax }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x005e5080
extern "C" __declspec(naked) void asm_005e5080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { test cl, cl }
	__asm { je L_005e50de }
	__asm { mov edx, dword ptr [esi + 0x2c] }
	__asm { imul edx, dword ptr [esi + 0x28] }
	__asm { lea eax, [ebx + edi] }
	__asm { cmp eax, edx }
	__asm { jbe L_005e50de }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e50cd }
	__asm { push 0xa9 }
	__asm { push 0xe1aa58 }
	__asm { push 0xe1ab90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e50de }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_005e50cd: }
	__asm { movzx eax, cl }
	__asm { push 0xe1abc0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e50de: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0xc] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add eax, ebx }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 0xc }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_005e55d0();
extern "C" void fn_005ebb80();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e5170
extern "C" __declspec(naked) void asm_005e5170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e828 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_005ebb80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xe1a9ec }
	__asm { cmp esi, 2 }
	__asm { je L_005e51db }
	__asm { cmp esi, 4 }
	__asm { je L_005e51db }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0xe1ac48 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_005e51db: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push dword ptr [eax + 0x14] }
	__asm { call fn_005e55d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x005e52f0
extern "C" __declspec(naked) void asm_005e52f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { test cl, cl }
	__asm { je L_005e534e }
	__asm { mov edx, dword ptr [esi + 0x2c] }
	__asm { imul edx, dword ptr [esi + 0x28] }
	__asm { lea eax, [ebx + edi] }
	__asm { cmp eax, edx }
	__asm { jbe L_005e534e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e533d }
	__asm { push 0xea }
	__asm { push 0xe1aa58 }
	__asm { push 0xe1ab90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e534e }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_005e533d: }
	__asm { movzx eax, cl }
	__asm { push 0xe1ac88 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e534e: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0xc] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add eax, ebx }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 0xc }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_005e5650();
// FUNCTION: ROBLOXSTUDIO 0x005e5470
extern "C" __declspec(naked) void asm_005e5470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { mov esi, dword ptr [eax + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { cmp dword ptr [eax], ebx }
	__asm { je L_005e54ec }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { cmp dword ptr [eax], ecx }
	__asm { je L_005e54a3 }
	__asm { mov dword ptr [eax], ecx }
	__asm { push dword ptr [ecx + 0x34] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { call dword ptr [eax + 0x15c] }
	__asm { L_005e54a3: }
	__asm { mov ecx, dword ptr [ebx + 0x30] }
	__asm { mov eax, dword ptr [ebx + 0x34] }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { xor edi, edi }
	__asm { test eax, eax }
	__asm { je L_005e54d9 }
	__asm { L_005e54b4: }
	__asm { mov eax, dword ptr [ecx + edi*8] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push dword ptr [eax + 0x28] }
	__asm { push 0 }
	__asm { push dword ptr [eax + 0x34] }
	__asm { push edi }
	__asm { push esi }
	__asm { call dword ptr [ecx + 0x190] }
	__asm { mov ecx, dword ptr [ebx + 0x30] }
	__asm { mov eax, dword ptr [ebx + 0x34] }
	__asm { sub eax, ecx }
	__asm { inc edi }
	__asm { sar eax, 3 }
	__asm { cmp edi, eax }
	__asm { jb L_005e54b4 }
	__asm { L_005e54d9: }
	__asm { mov ecx, dword ptr [ebx + 0x3c] }
	__asm { test ecx, ecx }
	__asm { je L_005e54ec }
	__asm { push dword ptr [ecx + 0x34] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { call dword ptr [eax + 0x1a0] }
	__asm { L_005e54ec: }
	__asm { cmp dword ptr [ebx + 0x3c], 0 }
	__asm { mov edi, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { je L_005e552d }
	__asm { call fn_005e5650 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 0x44] }
	__asm { push dword ptr [esi*4 + 0xe1a9ac] }
	__asm { push dword ptr [ebp - 4] }
	__asm { call dword ptr [edi + 0x148] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
	__asm { L_005e552d: }
	__asm { call fn_005e5650 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [esi*4 + 0xe1a9ac] }
	__asm { push dword ptr [ebp - 4] }
	__asm { call dword ptr [edi + 0x144] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_005e7020();
extern "C" void fn_005e70e0();
extern "C" void fn_005e8b70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e5a10
extern "C" __declspec(naked) void asm_005e5a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e8e2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x10], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x14], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call fn_005e70e0 }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { add esp, 0x18 }
	__asm { mov edi, eax }
	__asm { test edx, edx }
	__asm { je L_005e5a8d }
	__asm { mov ecx, dword ptr [edx] }
	__asm { push edx }
	__asm { call dword ptr [ecx + 8] }
	__asm { L_005e5a8d: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x38] }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { call fn_005e7020 }
	__asm { mov esi, dword ptr [ebp - 0x24] }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { je L_005e5ace }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push esi }
	__asm { call fn_005e8b70 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e5ace: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005e7020();
extern "C" void fn_005e72e0();
extern "C" void fn_005e8b70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e5c00
extern "C" __declspec(naked) void asm_005e5c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e92e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_005e72e0 }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { add esp, 0x10 }
	__asm { mov edi, eax }
	__asm { test edx, edx }
	__asm { je L_005e5c60 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { push edx }
	__asm { call dword ptr [ecx + 8] }
	__asm { L_005e5c60: }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { call fn_005e7020 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { je L_005e5c96 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push esi }
	__asm { call fn_005e8b70 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e5c96: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_005e6f10();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x005e5d40
extern "C" __declspec(naked) void asm_005e5d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { add eax, 0x38 }
	__asm { push eax }
	__asm { call fn_005e6f10 }
	__asm { mov ecx, dword ptr [edi + 0x30] }
	__asm { add ecx, 0x30 }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov ebx, eax }
	__asm { call fn_005e6f10 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { add esp, 0x10 }
	__asm { mov esi, eax }
	__asm { test cl, cl }
	__asm { je L_005e5db8 }
	__asm { cmp ebx, -1 }
	__asm { jl L_005e5d80 }
	__asm { cmp esi, -1 }
	__asm { jge L_005e5db8 }
	__asm { L_005e5d80: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e5da7 }
	__asm { push 0x184 }
	__asm { push 0xe1aef8 }
	__asm { push 0xe1b4fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e5db8 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_005e5da7: }
	__asm { movzx eax, cl }
	__asm { push 0xe1b518 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e5db8: }
	__asm { test ebx, ebx }
	__asm { jns L_005e5dca }
	__asm { test esi, esi }
	__asm { jns L_005e5dca }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005e5dca: }
	__asm { lea eax, [esi + 1] }
	__asm { pop edi }
	__asm { lea ecx, [ebx + 1] }
	__asm { shl eax, 0x10 }
	__asm { pop esi }
	__asm { or eax, ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10150[];
extern "C" void fn_005e7400();
extern "C" void fn_005e74f0();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e6720
extern "C" __declspec(naked) void asm_005e6720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { call fn_005e7400 }
	__asm { test eax, eax }
	__asm { je L_005e67af }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xe1b6d4 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10150] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_005e67af }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jb L_005e6764 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_005e6764: }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { cmp dword ptr [edx + 0x14], 0x10 }
	__asm { jb L_005e676f }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_005e676f: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov edi, dword ptr [eax + 0x10] }
	__asm { jb L_005e677d }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_005e677d: }
	__asm { push 0 }
	__asm { lea ebx, [ebp - 4] }
	__asm { push ebx }
	__asm { lea ebx, [ebp - 8] }
	__asm { push ebx }
	__asm { push 8 }
	__asm { push ecx }
	__asm { push edx }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push edi }
	__asm { push eax }
	__asm { call esi }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_005e74f0 }
	__asm { add esp, 0x10 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005e67af: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe1b750 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_004038a0();
extern "C" void fn_005e6930();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e6b50
extern "C" __declspec(naked) void asm_005e6b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ea31 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [eax + 0x14] }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 0x24], 0xf }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov byte ptr [ebp - 0x38], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push edi }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_005e6930 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { jb L_005e6bfd }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e6bfd: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_005e6c09 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_005e6c09: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005e6b50();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
extern "C" void fn_00cf77f2();
// FUNCTION: ROBLOXSTUDIO 0x005e6c20
extern "C" __declspec(naked) void asm_005e6c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ea54 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_00cf77f2 }
	__asm { test eax, eax }
	__asm { js L_005e6cb6 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { test eax, eax }
	__asm { jne L_005e6c7f }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0xe1add4 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_005e6c7f: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_005e6b50 }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { call dword ptr [edx + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005e6cb6: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0xe1ae08 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
extern "C" void fn_005e6f10();
// FUNCTION: ROBLOXSTUDIO 0x005e7020
extern "C" __declspec(naked) void asm_005e7020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { xor ecx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { sub ecx, edi }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { je L_005e70d8 }
	__asm { push ebx }
	__asm { xor ebx, ebx }
	__asm { nop }
	__asm { L_005e7050: }
	__asm { cmp dword ptr [ebx + edi + 0x14], 0x10 }
	__asm { lea eax, [ebx + edi] }
	__asm { jb L_005e705c }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_005e705c: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_005e6f10 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { js L_005e709c }
	__asm { mov edi, dword ptr [edi] }
	__asm { mov esi, dword ptr [esi] }
	__asm { add edi, ebx }
	__asm { add esi, ebx }
	__asm { cmp esi, edi }
	__asm { je L_005e7085 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_005e7085: }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { jmp L_005e70b0 }
	__asm { L_005e709c: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebx + eax + 0x1c], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebx + eax + 0x20], 0 }
	__asm { L_005e70b0: }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { inc dword ptr [ebp - 4] }
	__asm { sub ecx, edi }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add ebx, 0x24 }
	__asm { cmp dword ptr [ebp - 4], eax }
	__asm { jb L_005e7050 }
	__asm { pop ebx }
	__asm { L_005e70d8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10344[];
extern "C" char g_00e10348[];
extern "C" char g_00e1034c[];
extern "C" char g_00e10350[];
extern "C" char g_00e103bc[];
extern "C" char g_00e103d0[];
extern "C" char g_00e10518[];
extern "C" char g_012d97b0[];
extern "C" void fn_00cf64e2();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e8290
extern "C" __declspec(naked) void asm_005e8290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27139 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e10348] }
	__asm { mov eax, dword ptr [g_012d97b0] }
	__asm { mov ecx, dword ptr [g_00e103d0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call dword ptr [g_00e10350] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov edi, eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { cmp edi, dword ptr [eax + 0xc] }
	__asm { jae L_005e82ec }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov esi, dword ptr [ecx + edi*4] }
	__asm { test esi, esi }
	__asm { jne L_005e8358 }
	__asm { jmp L_005e82ee }
	__asm { L_005e82ec: }
	__asm { xor esi, esi }
	__asm { L_005e82ee: }
	__asm { cmp byte ptr [eax + 0x14], 0 }
	__asm { je L_005e8305 }
	__asm { call dword ptr [g_00e1034c] }
	__asm { cmp edi, dword ptr [eax + 0xc] }
	__asm { jae L_005e8309 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov esi, dword ptr [eax + edi*4] }
	__asm { L_005e8305: }
	__asm { test esi, esi }
	__asm { jne L_005e8358 }
	__asm { L_005e8309: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { jne L_005e8358 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push ebx }
	__asm { push eax }
	__asm { call dword ptr [g_00e103bc] }
	__asm { add esp, 8 }
	__asm { cmp eax, -1 }
	__asm { jne L_005e833f }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e10518] }
	__asm { push 0x1179e30 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_005e833f: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [g_012d97b0], esi }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 4] }
	__asm { push esi }
	__asm { call fn_00cf64e2 }
	__asm { add esp, 4 }
	__asm { L_005e8358: }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e10344] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10500[];
extern "C" void fn_005e7920();
extern "C" void fn_005e7d10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e8570
extern "C" __declspec(naked) void asm_005e8570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0eb70 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push esi }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov esi, eax }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { jne L_005e85b7 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { L_005e85a2: }
	__asm { cmp dword ptr [edx + 0x10], edi }
	__asm { jae L_005e85ac }
	__asm { mov edx, dword ptr [edx + 8] }
	__asm { jmp L_005e85b0 }
	__asm { L_005e85ac: }
	__asm { mov esi, edx }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_005e85b0: }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { je L_005e85a2 }
	__asm { pop edi }
	__asm { L_005e85b7: }
	__asm { cmp esi, eax }
	__asm { je L_005e85c6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { jae L_005e867e }
	__asm { L_005e85c6: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_005e7920 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_005e7d10 }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { jb L_005e865b }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e865b: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { jb L_005e867e }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e867e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 0x14] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00410ef0();
extern "C" void fn_005e8db0();
extern "C" void fn_006b9740();
extern "C" void fn_00b9a6a0();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x005e8840
extern "C" __declspec(naked) void asm_005e8840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test bl, bl }
	__asm { je L_005e88be }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { lea ecx, [esi + 0x28] }
	__asm { push eax }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { push dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { push dword ptr [eax] }
	__asm { call fn_00b9a6a0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_005e88be }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e88ad }
	__asm { push 0x1c6 }
	__asm { push 0xe1aef8 }
	__asm { push 0xe1b628 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e88be }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_005e88ad: }
	__asm { movzx eax, bl }
	__asm { push 0xe1b640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e88be: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x28] }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { lea ecx, [esi + 0x28] }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_005e8db0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_005e81d0();
extern "C" void fn_005e8b70();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e8c10
extern "C" __declspec(naked) void asm_005e8c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ebc0 }
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
	__asm { je L_005e8c65 }
	__asm { cmp ebx, 0x71c71c7 }
	__asm { ja L_005e8c5f }
	__asm { lea eax, [ebx + ebx*8] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_005e8c65 }
	__asm { L_005e8c5f: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_005e8c65: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi] }
	__asm { call fn_005e81d0 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { sub ecx, dword ptr [edi] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { sar edx, 3 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { test eax, eax }
	__asm { je L_005e8cba }
	__asm { push dword ptr [edi + 4] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { call fn_005e8b70 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { L_005e8cba: }
	__asm { lea eax, [ebx + ebx*8] }
	__asm { mov dword ptr [edi], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { lea eax, [ecx + ecx*8] }
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
extern "C" void fn_005e8c10();
// FUNCTION: ROBLOXSTUDIO 0x005e8d00
extern "C" __declspec(naked) void asm_005e8d00()
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
	__asm { jae L_005e8d9b }
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
	__asm { jae L_005e8d51 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_005e8d51: }
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
	__asm { jae L_005e8d88 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_005e8c10 }
	__asm { L_005e8d88: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_005e8c10 }
	__asm { L_005e8d9b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005e8050();
extern "C" void fn_005e8b70();
// FUNCTION: ROBLOXSTUDIO 0x005e9120
extern "C" __declspec(naked) void asm_005e9120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, ecx }
	__asm { jne L_005e9156 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { cmp edx, esi }
	__asm { jne L_005e9156 }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_005e8b70 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_005e9156: }
	__asm { cmp eax, edx }
	__asm { je L_005e9188 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push edx }
	__asm { call fn_005e8050 }
	__asm { add esp, 0x10 }
	__asm { push dword ptr [edi + 4] }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_005e8b70 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_005e9188: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10538[];
extern "C" void fn_00403380();
// FUNCTION: ROBLOXSTUDIO 0x005e91a0
extern "C" __declspec(naked) void asm_005e91a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test ebx, ebx }
	__asm { je L_005e920a }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { test eax, eax }
	__asm { je L_005e920a }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, eax }
	__asm { jb L_005e91c0 }
	__asm { lea ecx, [eax - 1] }
	__asm { L_005e91c0: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_005e91ca }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_005e91cc }
	__asm { L_005e91ca: }
	__asm { mov eax, edi }
	__asm { L_005e91cc: }
	__asm { lea esi, [eax + ecx] }
	__asm { nop }
	__asm { L_005e91d0: }
	__asm { test ebx, ebx }
	__asm { je L_005e91e9 }
	__asm { movsx eax, byte ptr [esi] }
	__asm { push ebx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10538] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_005e91f7 }
	__asm { L_005e91e9: }
	__asm { mov ecx, edi }
	__asm { call fn_00403380 }
	__asm { cmp esi, eax }
	__asm { je L_005e920a }
	__asm { dec esi }
	__asm { jmp L_005e91d0 }
	__asm { L_005e91f7: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_005e91ff }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_005e91ff: }
	__asm { sub esi, edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_005e920a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
extern "C" void fn_005e8d00();
// FUNCTION: ROBLOXSTUDIO 0x005e9220
extern "C" __declspec(naked) void asm_005e9220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd428b2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { cmp ebx, ecx }
	__asm { jae L_005e9289 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, ebx }
	__asm { ja L_005e9289 }
	__asm { sub ebx, eax }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ebx }
	__asm { sar edx, 3 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_005e926f }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_005e8d00 }
	__asm { L_005e926f: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi + edi*8] }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { lea ebx, [eax + ecx*4] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jmp L_005e92a7 }
	__asm { L_005e9289: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_005e9297 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_005e8d00 }
	__asm { L_005e9297: }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { L_005e92a7: }
	__asm { test edi, edi }
	__asm { je L_005e92da }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov eax, dword ptr [ebx + 0x20] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { L_005e92da: }
	__asm { add dword ptr [esi + 4], 0x24 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005ea030();
extern "C" void fn_00610870();
extern "C" void fn_00b9b4c0();
// FUNCTION: ROBLOXSTUDIO 0x005e9300
extern "C" __declspec(naked) void asm_005e9300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ebee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x24] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_00610870 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov dword ptr [esi], 0xe1b810 }
	__asm { mov dword ptr [esi + 0x4c], 0 }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov byte ptr [esi + 0x54], 0 }
	__asm { lea ecx, [esi + 0x58] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { call fn_00b9b4c0 }
	__asm { mov dword ptr [esi + 0x58], eax }
	__asm { push dword ptr [ebx*8 + 0xe1b7b4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { push dword ptr [ebx*8 + 0xe1b7b0] }
	__asm { mov edi, dword ptr [ebp + 0x20] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp + 0x24], eax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_005ea030 }
	__asm { add esp, 0x24 }
	__asm { mov dword ptr [esi + 0x4c], eax }
	__asm { cmp ebx, 1 }
	__asm { jne L_005e93e8 }
	__asm { push 0 }
	__asm { push 2 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_005ea030 }
	__asm { add esp, 0x24 }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { L_005e93e8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005ea030
extern "C" __declspec(naked) void asm_005ea030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov edx, dword ptr [eax*4 + 0xe1b7c8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov esi, 0x8876086b }
	__asm { sub eax, 0 }
	__asm { je L_005ea0e9 }
	__asm { dec eax }
	__asm { je L_005ea0c5 }
	__asm { dec eax }
	__asm { je L_005ea0a7 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_005ea116 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005ea094 }
	__asm { push 0x45 }
	__asm { push 0xe1b838 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005ea116 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005ea094: }
	__asm { movzx eax, al }
	__asm { push 0xe1b888 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { jmp L_005ea116 }
	__asm { L_005ea0a7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea esi, [ebp - 4] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x64] }
	__asm { jmp L_005ea108 }
	__asm { L_005ea0c5: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea esi, [ebp - 4] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x60] }
	__asm { jmp L_005ea108 }
	__asm { L_005ea0e9: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea esi, [ebp - 4] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x5c] }
	__asm { L_005ea108: }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_005ea116 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005ea116: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0xe1b8e8 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0041fe80();
extern "C" void fn_005eb810();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005eb5a0
extern "C" __declspec(naked) void asm_005eb5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0eca8 }
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
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_005eb810 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push edi }
	__asm { call dword ptr [eax + 0x58] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_005eb62e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp + 0x13] }
	__asm { push ecx }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_005eb62e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_005e56e0();
extern "C" void fn_005ebef0();
extern "C" void fn_005ec140();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005ebf40
extern "C" __declspec(naked) void asm_005ebf40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ed70 }
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
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x66666667 }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_005ec140 }
	__asm { test al, al }
	__asm { je L_005ebfbd }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_005ebef0 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_005ebfbd: }
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
	__asm { call fn_005e56e0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0048a4b0();
extern "C" void fn_006c1fa0();
extern "C" void fn_007943e0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005ebff0
extern "C" __declspec(naked) void asm_005ebff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ed80 }
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
	__asm { sar eax, 3 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_007943e0 }
	__asm { test al, al }
	__asm { je L_005ec05f }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_0048a4b0 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_005ec05f: }
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
	__asm { call fn_006c1fa0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x005f2690
extern "C" __declspec(naked) void asm_005f2690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { test esi, esi }
	__asm { je L_005f26d3 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_005f26e5 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { test edi, edi }
	__asm { je L_005f26c8 }
	__asm { sub esi, eax }
	__asm { push ebx }
	__asm { nop }
	__asm { L_005f26b0: }
	__asm { mov dl, byte ptr [esi + eax] }
	__asm { test dl, dl }
	__asm { je L_005f26c7 }
	__asm { mov bl, byte ptr [eax] }
	__asm { test bl, bl }
	__asm { je L_005f26c7 }
	__asm { cmp dl, bl }
	__asm { jne L_005f26c7 }
	__asm { inc ecx }
	__asm { inc eax }
	__asm { cmp ecx, edi }
	__asm { jb L_005f26b0 }
	__asm { L_005f26c7: }
	__asm { pop ebx }
	__asm { L_005f26c8: }
	__asm { xor eax, eax }
	__asm { cmp ecx, edi }
	__asm { pop edi }
	__asm { sete al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005f26d3: }
	__asm { cmp dword ptr [ebp + 0xc], ecx }
	__asm { jne L_005f26e5 }
	__asm { cmp dword ptr [ebp + 0x10], ecx }
	__asm { jne L_005f26e5 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005f26e5: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005f26f0
extern "C" __declspec(naked) void asm_005f26f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jbe L_005f271d }
	__asm { L_005f2700: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov al, byte ptr [ecx] }
	__asm { cmp al, 0x20 }
	__asm { je L_005f2714 }
	__asm { cmp al, 0xa }
	__asm { je L_005f2714 }
	__asm { cmp al, 0xd }
	__asm { je L_005f2714 }
	__asm { cmp al, 9 }
	__asm { jne L_005f271d }
	__asm { L_005f2714: }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [ebx], eax }
	__asm { dec dword ptr [esi] }
	__asm { jne L_005f2700 }
	__asm { L_005f271d: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { cmp dword ptr [esi], eax }
	__asm { jb L_005f2757 }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { test eax, eax }
	__asm { je L_005f2748 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { L_005f2730: }
	__asm { test edx, edx }
	__asm { je L_005f2748 }
	__asm { test ecx, ecx }
	__asm { je L_005f2748 }
	__asm { mov al, byte ptr [edx] }
	__asm { cmp al, byte ptr [ecx] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { jne L_005f2748 }
	__asm { inc edi }
	__asm { inc edx }
	__asm { inc ecx }
	__asm { cmp edi, eax }
	__asm { jb L_005f2730 }
	__asm { L_005f2748: }
	__asm { cmp edi, eax }
	__asm { pop edi }
	__asm { jne L_005f2757 }
	__asm { add dword ptr [ebx], eax }
	__asm { sub dword ptr [esi], eax }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005f2757: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005f27b0
extern "C" __declspec(naked) void asm_005f27b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp eax, edi }
	__asm { jb L_005f2819 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { test edi, edi }
	__asm { je L_005f27ef }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { L_005f27d4: }
	__asm { test edx, edx }
	__asm { je L_005f27e9 }
	__asm { test ecx, ecx }
	__asm { je L_005f27e9 }
	__asm { mov al, byte ptr [edx] }
	__asm { cmp al, byte ptr [ecx] }
	__asm { jne L_005f27e9 }
	__asm { inc esi }
	__asm { inc edx }
	__asm { inc ecx }
	__asm { cmp esi, edi }
	__asm { jb L_005f27d4 }
	__asm { L_005f27e9: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { L_005f27ef: }
	__asm { cmp esi, edi }
	__asm { jne L_005f2819 }
	__asm { cmp eax, edi }
	__asm { je L_005f280c }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov al, byte ptr [esi + eax] }
	__asm { cmp al, 0x20 }
	__asm { je L_005f280c }
	__asm { cmp al, 0xa }
	__asm { je L_005f280c }
	__asm { cmp al, 0xd }
	__asm { je L_005f280c }
	__asm { cmp al, 9 }
	__asm { jne L_005f2819 }
	__asm { L_005f280c: }
	__asm { add dword ptr [ebx], edi }
	__asm { sub dword ptr [ecx], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005f2819: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012da648[];
extern "C" char g_012da650[];
extern "C" char g_012da65c[];
extern "C" char g_012da660[];
extern "C" char g_012da668[];
extern "C" char g_012da678[];
// FUNCTION: ROBLOXSTUDIO 0x005f3b50
extern "C" __declspec(naked) void asm_005f3b50()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1dc3c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1dc54 }
	__asm { mov dword ptr [g_012da648], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012da650], eax }
	__asm { test eax, eax }
	__asm { je L_005f3b7d }
	__asm { test bl, bl }
	__asm { je L_005f3b7f }
	__asm { L_005f3b7d: }
	__asm { mov bl, 1 }
	__asm { L_005f3b7f: }
	__asm { push 0xe1dc6c }
	__asm { call esi }
	__asm { mov dword ptr [g_012da65c], eax }
	__asm { test eax, eax }
	__asm { je L_005f3b93 }
	__asm { test bl, bl }
	__asm { je L_005f3b95 }
	__asm { L_005f3b93: }
	__asm { mov bl, 1 }
	__asm { L_005f3b95: }
	__asm { push 0xe1dc84 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da660], eax }
	__asm { test eax, eax }
	__asm { je L_005f3ba9 }
	__asm { test bl, bl }
	__asm { je L_005f3bab }
	__asm { L_005f3ba9: }
	__asm { mov bl, 1 }
	__asm { L_005f3bab: }
	__asm { push 0xe1dc9c }
	__asm { call esi }
	__asm { mov dword ptr [g_012da668], eax }
	__asm { test eax, eax }
	__asm { je L_005f3bbf }
	__asm { test bl, bl }
	__asm { je L_005f3bc1 }
	__asm { L_005f3bbf: }
	__asm { mov bl, 1 }
	__asm { L_005f3bc1: }
	__asm { push 0xe1dcb4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da678], eax }
	__asm { test eax, eax }
	__asm { je L_005f3bda }
	__asm { test bl, bl }
	__asm { jne L_005f3bda }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f3bda: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012daac4[];
extern "C" char g_012daad0[];
extern "C" char g_012daadc[];
extern "C" char g_012daae4[];
extern "C" char g_012daaec[];
extern "C" char g_012daaf4[];
extern "C" char g_012dab00[];
extern "C" char g_012dab08[];
// FUNCTION: ROBLOXSTUDIO 0x005f47b0
extern "C" __declspec(naked) void asm_005f47b0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1e7b4 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1e7c8 }
	__asm { mov dword ptr [g_012daac4], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012daad0], eax }
	__asm { test eax, eax }
	__asm { je L_005f47dd }
	__asm { test bl, bl }
	__asm { je L_005f47df }
	__asm { L_005f47dd: }
	__asm { mov bl, 1 }
	__asm { L_005f47df: }
	__asm { push 0xe1e7dc }
	__asm { call esi }
	__asm { mov dword ptr [g_012daadc], eax }
	__asm { test eax, eax }
	__asm { je L_005f47f3 }
	__asm { test bl, bl }
	__asm { je L_005f47f5 }
	__asm { L_005f47f3: }
	__asm { mov bl, 1 }
	__asm { L_005f47f5: }
	__asm { push 0xe1e7f0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daae4], eax }
	__asm { test eax, eax }
	__asm { je L_005f4809 }
	__asm { test bl, bl }
	__asm { je L_005f480b }
	__asm { L_005f4809: }
	__asm { mov bl, 1 }
	__asm { L_005f480b: }
	__asm { push 0xe1e804 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daaec], eax }
	__asm { test eax, eax }
	__asm { je L_005f481f }
	__asm { test bl, bl }
	__asm { je L_005f4821 }
	__asm { L_005f481f: }
	__asm { mov bl, 1 }
	__asm { L_005f4821: }
	__asm { push 0xe1e814 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daaf4], eax }
	__asm { test eax, eax }
	__asm { je L_005f4835 }
	__asm { test bl, bl }
	__asm { je L_005f4837 }
	__asm { L_005f4835: }
	__asm { mov bl, 1 }
	__asm { L_005f4837: }
	__asm { push 0xe1e824 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab00], eax }
	__asm { test eax, eax }
	__asm { je L_005f484b }
	__asm { test bl, bl }
	__asm { je L_005f484d }
	__asm { L_005f484b: }
	__asm { mov bl, 1 }
	__asm { L_005f484d: }
	__asm { push 0xe1e838 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab08], eax }
	__asm { test eax, eax }
	__asm { je L_005f4866 }
	__asm { test bl, bl }
	__asm { jne L_005f4866 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f4866: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dab90[];
extern "C" char g_012dab98[];
extern "C" char g_012daba4[];
extern "C" char g_012dabac[];
extern "C" char g_012dabb0[];
extern "C" char g_012dabbc[];
extern "C" char g_012dabc0[];
// FUNCTION: ROBLOXSTUDIO 0x005f4a00
extern "C" __declspec(naked) void asm_005f4a00()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1e9c4 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1e9e0 }
	__asm { mov dword ptr [g_012dab90], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab98], eax }
	__asm { test eax, eax }
	__asm { je L_005f4a2d }
	__asm { test bl, bl }
	__asm { je L_005f4a2f }
	__asm { L_005f4a2d: }
	__asm { mov bl, 1 }
	__asm { L_005f4a2f: }
	__asm { push 0xe1e9fc }
	__asm { call esi }
	__asm { mov dword ptr [g_012daba4], eax }
	__asm { test eax, eax }
	__asm { je L_005f4a43 }
	__asm { test bl, bl }
	__asm { je L_005f4a45 }
	__asm { L_005f4a43: }
	__asm { mov bl, 1 }
	__asm { L_005f4a45: }
	__asm { push 0xe1ea1c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dabac], eax }
	__asm { test eax, eax }
	__asm { je L_005f4a59 }
	__asm { test bl, bl }
	__asm { je L_005f4a5b }
	__asm { L_005f4a59: }
	__asm { mov bl, 1 }
	__asm { L_005f4a5b: }
	__asm { push 0xe1ea38 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dabb0], eax }
	__asm { test eax, eax }
	__asm { je L_005f4a6f }
	__asm { test bl, bl }
	__asm { je L_005f4a71 }
	__asm { L_005f4a6f: }
	__asm { mov bl, 1 }
	__asm { L_005f4a71: }
	__asm { push 0xe1ea54 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dabbc], eax }
	__asm { test eax, eax }
	__asm { je L_005f4a85 }
	__asm { test bl, bl }
	__asm { je L_005f4a87 }
	__asm { L_005f4a85: }
	__asm { mov bl, 1 }
	__asm { L_005f4a87: }
	__asm { push 0xe1ea70 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dabc0], eax }
	__asm { test eax, eax }
	__asm { je L_005f4aa0 }
	__asm { test bl, bl }
	__asm { jne L_005f4aa0 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f4aa0: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db0e0[];
extern "C" char g_012db0e8[];
extern "C" char g_012db0ec[];
extern "C" char g_012db0f8[];
extern "C" char g_012db100[];
extern "C" char g_012db10c[];
// FUNCTION: ROBLOXSTUDIO 0x005f5910
extern "C" __declspec(naked) void asm_005f5910()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1f830 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1f848 }
	__asm { mov dword ptr [g_012db0e0], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db0e8], eax }
	__asm { test eax, eax }
	__asm { je L_005f593d }
	__asm { test bl, bl }
	__asm { je L_005f593f }
	__asm { L_005f593d: }
	__asm { mov bl, 1 }
	__asm { L_005f593f: }
	__asm { push 0xe1f864 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db0ec], eax }
	__asm { test eax, eax }
	__asm { je L_005f5953 }
	__asm { test bl, bl }
	__asm { je L_005f5955 }
	__asm { L_005f5953: }
	__asm { mov bl, 1 }
	__asm { L_005f5955: }
	__asm { push 0xe1f87c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db0f8], eax }
	__asm { test eax, eax }
	__asm { je L_005f5969 }
	__asm { test bl, bl }
	__asm { je L_005f596b }
	__asm { L_005f5969: }
	__asm { mov bl, 1 }
	__asm { L_005f596b: }
	__asm { push 0xe1f898 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db100], eax }
	__asm { test eax, eax }
	__asm { je L_005f597f }
	__asm { test bl, bl }
	__asm { je L_005f5981 }
	__asm { L_005f597f: }
	__asm { mov bl, 1 }
	__asm { L_005f5981: }
	__asm { push 0xe1f8b0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db10c], eax }
	__asm { test eax, eax }
	__asm { je L_005f599a }
	__asm { test bl, bl }
	__asm { jne L_005f599a }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f599a: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db154[];
extern "C" char g_012db15c[];
extern "C" char g_012db160[];
extern "C" char g_012db170[];
extern "C" char g_012db174[];
extern "C" char g_012db17c[];
// FUNCTION: ROBLOXSTUDIO 0x005f5a60
extern "C" __declspec(naked) void asm_005f5a60()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1f968 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1f97c }
	__asm { mov dword ptr [g_012db154], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db15c], eax }
	__asm { test eax, eax }
	__asm { je L_005f5a8d }
	__asm { test bl, bl }
	__asm { je L_005f5a8f }
	__asm { L_005f5a8d: }
	__asm { mov bl, 1 }
	__asm { L_005f5a8f: }
	__asm { push 0xe1f990 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db160], eax }
	__asm { test eax, eax }
	__asm { je L_005f5aa3 }
	__asm { test bl, bl }
	__asm { je L_005f5aa5 }
	__asm { L_005f5aa3: }
	__asm { mov bl, 1 }
	__asm { L_005f5aa5: }
	__asm { push 0xe1f9a4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db170], eax }
	__asm { test eax, eax }
	__asm { je L_005f5ab9 }
	__asm { test bl, bl }
	__asm { je L_005f5abb }
	__asm { L_005f5ab9: }
	__asm { mov bl, 1 }
	__asm { L_005f5abb: }
	__asm { push 0xe1f9b4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db174], eax }
	__asm { test eax, eax }
	__asm { je L_005f5acf }
	__asm { test bl, bl }
	__asm { je L_005f5ad1 }
	__asm { L_005f5acf: }
	__asm { mov bl, 1 }
	__asm { L_005f5ad1: }
	__asm { push 0xe1f9c4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db17c], eax }
	__asm { test eax, eax }
	__asm { je L_005f5aea }
	__asm { test bl, bl }
	__asm { jne L_005f5aea }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f5aea: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db2d4[];
extern "C" char g_012db2e0[];
extern "C" char g_012db2e4[];
extern "C" char g_012db2f0[];
extern "C" char g_012db2f8[];
extern "C" char g_012db304[];
extern "C" char g_012db308[];
extern "C" char g_012db310[];
// FUNCTION: ROBLOXSTUDIO 0x005f5e50
extern "C" __declspec(naked) void asm_005f5e50()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1fd54 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1fd64 }
	__asm { mov dword ptr [g_012db2d4], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db2e0], eax }
	__asm { test eax, eax }
	__asm { je L_005f5e7d }
	__asm { test bl, bl }
	__asm { je L_005f5e7f }
	__asm { L_005f5e7d: }
	__asm { mov bl, 1 }
	__asm { L_005f5e7f: }
	__asm { push 0xe1fd78 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db2e4], eax }
	__asm { test eax, eax }
	__asm { je L_005f5e93 }
	__asm { test bl, bl }
	__asm { je L_005f5e95 }
	__asm { L_005f5e93: }
	__asm { mov bl, 1 }
	__asm { L_005f5e95: }
	__asm { push 0xe1fd88 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db2f0], eax }
	__asm { test eax, eax }
	__asm { je L_005f5ea9 }
	__asm { test bl, bl }
	__asm { je L_005f5eab }
	__asm { L_005f5ea9: }
	__asm { mov bl, 1 }
	__asm { L_005f5eab: }
	__asm { push 0xe1fd98 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db2f8], eax }
	__asm { test eax, eax }
	__asm { je L_005f5ebf }
	__asm { test bl, bl }
	__asm { je L_005f5ec1 }
	__asm { L_005f5ebf: }
	__asm { mov bl, 1 }
	__asm { L_005f5ec1: }
	__asm { push 0xe1fdb0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db304], eax }
	__asm { test eax, eax }
	__asm { je L_005f5ed5 }
	__asm { test bl, bl }
	__asm { je L_005f5ed7 }
	__asm { L_005f5ed5: }
	__asm { mov bl, 1 }
	__asm { L_005f5ed7: }
	__asm { push 0xe1fdc8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db308], eax }
	__asm { test eax, eax }
	__asm { je L_005f5eeb }
	__asm { test bl, bl }
	__asm { je L_005f5eed }
	__asm { L_005f5eeb: }
	__asm { mov bl, 1 }
	__asm { L_005f5eed: }
	__asm { push 0xe1fdd8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db310], eax }
	__asm { test eax, eax }
	__asm { je L_005f5f06 }
	__asm { test bl, bl }
	__asm { jne L_005f5f06 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f5f06: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db9d4[];
extern "C" char g_012db9d8[];
extern "C" char g_012db9e4[];
extern "C" char g_012db9ec[];
extern "C" char g_012db9f8[];
extern "C" char g_012dba04[];
extern "C" char g_012dba08[];
extern "C" char g_012dba10[];
// FUNCTION: ROBLOXSTUDIO 0x005f6c60
extern "C" __declspec(naked) void asm_005f6c60()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe20ab0 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe20acc }
	__asm { mov dword ptr [g_012db9d4], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db9d8], eax }
	__asm { test eax, eax }
	__asm { je L_005f6c8d }
	__asm { test bl, bl }
	__asm { je L_005f6c8f }
	__asm { L_005f6c8d: }
	__asm { mov bl, 1 }
	__asm { L_005f6c8f: }
	__asm { push 0xe20af0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db9e4], eax }
	__asm { test eax, eax }
	__asm { je L_005f6ca3 }
	__asm { test bl, bl }
	__asm { je L_005f6ca5 }
	__asm { L_005f6ca3: }
	__asm { mov bl, 1 }
	__asm { L_005f6ca5: }
	__asm { push 0xe20b10 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db9ec], eax }
	__asm { test eax, eax }
	__asm { je L_005f6cb9 }
	__asm { test bl, bl }
	__asm { je L_005f6cbb }
	__asm { L_005f6cb9: }
	__asm { mov bl, 1 }
	__asm { L_005f6cbb: }
	__asm { push 0xe20b24 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db9f8], eax }
	__asm { test eax, eax }
	__asm { je L_005f6ccf }
	__asm { test bl, bl }
	__asm { je L_005f6cd1 }
	__asm { L_005f6ccf: }
	__asm { mov bl, 1 }
	__asm { L_005f6cd1: }
	__asm { push 0xe20b3c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba04], eax }
	__asm { test eax, eax }
	__asm { je L_005f6ce5 }
	__asm { test bl, bl }
	__asm { je L_005f6ce7 }
	__asm { L_005f6ce5: }
	__asm { mov bl, 1 }
	__asm { L_005f6ce7: }
	__asm { push 0xe20b5c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba08], eax }
	__asm { test eax, eax }
	__asm { je L_005f6cfb }
	__asm { test bl, bl }
	__asm { je L_005f6cfd }
	__asm { L_005f6cfb: }
	__asm { mov bl, 1 }
	__asm { L_005f6cfd: }
	__asm { push 0xe20b78 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba10], eax }
	__asm { test eax, eax }
	__asm { je L_005f6d16 }
	__asm { test bl, bl }
	__asm { jne L_005f6d16 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f6d16: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dba1c[];
extern "C" char g_012dba28[];
extern "C" char g_012dba2c[];
extern "C" char g_012dba38[];
extern "C" char g_012dba40[];
extern "C" char g_012dba48[];
// FUNCTION: ROBLOXSTUDIO 0x005f6d20
extern "C" __declspec(naked) void asm_005f6d20()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe20b90 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe20bac }
	__asm { mov dword ptr [g_012dba1c], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba28], eax }
	__asm { test eax, eax }
	__asm { je L_005f6d4d }
	__asm { test bl, bl }
	__asm { je L_005f6d4f }
	__asm { L_005f6d4d: }
	__asm { mov bl, 1 }
	__asm { L_005f6d4f: }
	__asm { push 0xe20bc4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba2c], eax }
	__asm { test eax, eax }
	__asm { je L_005f6d63 }
	__asm { test bl, bl }
	__asm { je L_005f6d65 }
	__asm { L_005f6d63: }
	__asm { mov bl, 1 }
	__asm { L_005f6d65: }
	__asm { push 0xe20bd8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba38], eax }
	__asm { test eax, eax }
	__asm { je L_005f6d79 }
	__asm { test bl, bl }
	__asm { je L_005f6d7b }
	__asm { L_005f6d79: }
	__asm { mov bl, 1 }
	__asm { L_005f6d7b: }
	__asm { push 0xe20bf0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba40], eax }
	__asm { test eax, eax }
	__asm { je L_005f6d8f }
	__asm { test bl, bl }
	__asm { je L_005f6d91 }
	__asm { L_005f6d8f: }
	__asm { mov bl, 1 }
	__asm { L_005f6d91: }
	__asm { push 0xe20c04 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba48], eax }
	__asm { test eax, eax }
	__asm { je L_005f6daa }
	__asm { test bl, bl }
	__asm { jne L_005f6daa }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f6daa: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dba60[];
extern "C" char g_012dba68[];
extern "C" char g_012dba74[];
extern "C" char g_012dba80[];
extern "C" char g_012dba84[];
extern "C" char g_012dba8c[];
extern "C" char g_012dba9c[];
// FUNCTION: ROBLOXSTUDIO 0x005f6df0
extern "C" __declspec(naked) void asm_005f6df0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe20c4c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe20c60 }
	__asm { mov dword ptr [g_012dba60], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba68], eax }
	__asm { test eax, eax }
	__asm { je L_005f6e1d }
	__asm { test bl, bl }
	__asm { je L_005f6e1f }
	__asm { L_005f6e1d: }
	__asm { mov bl, 1 }
	__asm { L_005f6e1f: }
	__asm { push 0xe20c70 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba74], eax }
	__asm { test eax, eax }
	__asm { je L_005f6e33 }
	__asm { test bl, bl }
	__asm { je L_005f6e35 }
	__asm { L_005f6e33: }
	__asm { mov bl, 1 }
	__asm { L_005f6e35: }
	__asm { push 0xe20c7c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba80], eax }
	__asm { test eax, eax }
	__asm { je L_005f6e49 }
	__asm { test bl, bl }
	__asm { je L_005f6e4b }
	__asm { L_005f6e49: }
	__asm { mov bl, 1 }
	__asm { L_005f6e4b: }
	__asm { push 0xe20c8c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba84], eax }
	__asm { test eax, eax }
	__asm { je L_005f6e5f }
	__asm { test bl, bl }
	__asm { je L_005f6e61 }
	__asm { L_005f6e5f: }
	__asm { mov bl, 1 }
	__asm { L_005f6e61: }
	__asm { push 0xe20c98 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba8c], eax }
	__asm { test eax, eax }
	__asm { je L_005f6e75 }
	__asm { test bl, bl }
	__asm { je L_005f6e77 }
	__asm { L_005f6e75: }
	__asm { mov bl, 1 }
	__asm { L_005f6e77: }
	__asm { push 0xe20ca4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba9c], eax }
	__asm { test eax, eax }
	__asm { je L_005f6e90 }
	__asm { test bl, bl }
	__asm { jne L_005f6e90 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f6e90: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbad0[];
extern "C" char g_012dbad4[];
extern "C" char g_012dbae0[];
extern "C" char g_012dbae8[];
extern "C" char g_012dbaf4[];
extern "C" char g_012dbafc[];
extern "C" char g_012dbb04[];
// FUNCTION: ROBLOXSTUDIO 0x005f6f40
extern "C" __declspec(naked) void asm_005f6f40()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe20d14 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe20d30 }
	__asm { mov dword ptr [g_012dbad0], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbad4], eax }
	__asm { test eax, eax }
	__asm { je L_005f6f6d }
	__asm { test bl, bl }
	__asm { je L_005f6f6f }
	__asm { L_005f6f6d: }
	__asm { mov bl, 1 }
	__asm { L_005f6f6f: }
	__asm { push 0xe20d4c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbae0], eax }
	__asm { test eax, eax }
	__asm { je L_005f6f83 }
	__asm { test bl, bl }
	__asm { je L_005f6f85 }
	__asm { L_005f6f83: }
	__asm { mov bl, 1 }
	__asm { L_005f6f85: }
	__asm { push 0xe20d68 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbae8], eax }
	__asm { test eax, eax }
	__asm { je L_005f6f99 }
	__asm { test bl, bl }
	__asm { je L_005f6f9b }
	__asm { L_005f6f99: }
	__asm { mov bl, 1 }
	__asm { L_005f6f9b: }
	__asm { push 0xe20d88 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbaf4], eax }
	__asm { test eax, eax }
	__asm { je L_005f6faf }
	__asm { test bl, bl }
	__asm { je L_005f6fb1 }
	__asm { L_005f6faf: }
	__asm { mov bl, 1 }
	__asm { L_005f6fb1: }
	__asm { push 0xe20da8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbafc], eax }
	__asm { test eax, eax }
	__asm { je L_005f6fc5 }
	__asm { test bl, bl }
	__asm { je L_005f6fc7 }
	__asm { L_005f6fc5: }
	__asm { mov bl, 1 }
	__asm { L_005f6fc7: }
	__asm { push 0xe20dc8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb04], eax }
	__asm { test eax, eax }
	__asm { je L_005f6fe0 }
	__asm { test bl, bl }
	__asm { jne L_005f6fe0 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f6fe0: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbb34[];
extern "C" char g_012dbb38[];
extern "C" char g_012dbb48[];
extern "C" char g_012dbb4c[];
extern "C" char g_012dbb54[];
extern "C" char g_012dbb60[];
// FUNCTION: ROBLOXSTUDIO 0x005f7060
extern "C" __declspec(naked) void asm_005f7060()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe20e38 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe20e48 }
	__asm { mov dword ptr [g_012dbb34], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb38], eax }
	__asm { test eax, eax }
	__asm { je L_005f708d }
	__asm { test bl, bl }
	__asm { je L_005f708f }
	__asm { L_005f708d: }
	__asm { mov bl, 1 }
	__asm { L_005f708f: }
	__asm { push 0xe20e58 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb48], eax }
	__asm { test eax, eax }
	__asm { je L_005f70a3 }
	__asm { test bl, bl }
	__asm { je L_005f70a5 }
	__asm { L_005f70a3: }
	__asm { mov bl, 1 }
	__asm { L_005f70a5: }
	__asm { push 0xe20e68 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb4c], eax }
	__asm { test eax, eax }
	__asm { je L_005f70b9 }
	__asm { test bl, bl }
	__asm { je L_005f70bb }
	__asm { L_005f70b9: }
	__asm { mov bl, 1 }
	__asm { L_005f70bb: }
	__asm { push 0xe20e80 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb54], eax }
	__asm { test eax, eax }
	__asm { je L_005f70cf }
	__asm { test bl, bl }
	__asm { je L_005f70d1 }
	__asm { L_005f70cf: }
	__asm { mov bl, 1 }
	__asm { L_005f70d1: }
	__asm { push 0xe20e98 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb60], eax }
	__asm { test eax, eax }
	__asm { je L_005f70ea }
	__asm { test bl, bl }
	__asm { jne L_005f70ea }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f70ea: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbbb0[];
extern "C" char g_012dbbb8[];
extern "C" char g_012dbbc0[];
extern "C" char g_012dbbc8[];
extern "C" char g_012dbbcc[];
extern "C" char g_012dbbd8[];
extern "C" char g_012dbbdc[];
// FUNCTION: ROBLOXSTUDIO 0x005f71d0
extern "C" __declspec(naked) void asm_005f71d0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe20f80 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe20f98 }
	__asm { mov dword ptr [g_012dbbb0], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbbb8], eax }
	__asm { test eax, eax }
	__asm { je L_005f71fd }
	__asm { test bl, bl }
	__asm { je L_005f71ff }
	__asm { L_005f71fd: }
	__asm { mov bl, 1 }
	__asm { L_005f71ff: }
	__asm { push 0xe20fb4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbbc0], eax }
	__asm { test eax, eax }
	__asm { je L_005f7213 }
	__asm { test bl, bl }
	__asm { je L_005f7215 }
	__asm { L_005f7213: }
	__asm { mov bl, 1 }
	__asm { L_005f7215: }
	__asm { push 0xe20fcc }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbbc8], eax }
	__asm { test eax, eax }
	__asm { je L_005f7229 }
	__asm { test bl, bl }
	__asm { je L_005f722b }
	__asm { L_005f7229: }
	__asm { mov bl, 1 }
	__asm { L_005f722b: }
	__asm { push 0xe20fe4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbbcc], eax }
	__asm { test eax, eax }
	__asm { je L_005f723f }
	__asm { test bl, bl }
	__asm { je L_005f7241 }
	__asm { L_005f723f: }
	__asm { mov bl, 1 }
	__asm { L_005f7241: }
	__asm { push 0xe20ffc }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbbd8], eax }
	__asm { test eax, eax }
	__asm { je L_005f7255 }
	__asm { test bl, bl }
	__asm { je L_005f7257 }
	__asm { L_005f7255: }
	__asm { mov bl, 1 }
	__asm { L_005f7257: }
	__asm { push 0xe21018 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbbdc], eax }
	__asm { test eax, eax }
	__asm { je L_005f7270 }
	__asm { test bl, bl }
	__asm { jne L_005f7270 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f7270: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbc34[];
extern "C" char g_012dbc3c[];
extern "C" char g_012dbc48[];
extern "C" char g_012dbc50[];
extern "C" char g_012dbc58[];
extern "C" char g_012dbc5c[];
extern "C" char g_012dbc68[];
extern "C" char g_012dbc70[];
extern "C" char g_012dbc78[];
extern "C" char g_012dbc7c[];
// FUNCTION: ROBLOXSTUDIO 0x005f73a0
extern "C" __declspec(naked) void asm_005f73a0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2114c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe21160 }
	__asm { mov dword ptr [g_012dbc34], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc3c], eax }
	__asm { test eax, eax }
	__asm { je L_005f73cd }
	__asm { test bl, bl }
	__asm { je L_005f73cf }
	__asm { L_005f73cd: }
	__asm { mov bl, 1 }
	__asm { L_005f73cf: }
	__asm { push 0xe21174 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc48], eax }
	__asm { test eax, eax }
	__asm { je L_005f73e3 }
	__asm { test bl, bl }
	__asm { je L_005f73e5 }
	__asm { L_005f73e3: }
	__asm { mov bl, 1 }
	__asm { L_005f73e5: }
	__asm { push 0xe21190 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc50], eax }
	__asm { test eax, eax }
	__asm { je L_005f73f9 }
	__asm { test bl, bl }
	__asm { je L_005f73fb }
	__asm { L_005f73f9: }
	__asm { mov bl, 1 }
	__asm { L_005f73fb: }
	__asm { push 0xe211ac }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc58], eax }
	__asm { test eax, eax }
	__asm { je L_005f740f }
	__asm { test bl, bl }
	__asm { je L_005f7411 }
	__asm { L_005f740f: }
	__asm { mov bl, 1 }
	__asm { L_005f7411: }
	__asm { push 0xe211c4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc5c], eax }
	__asm { test eax, eax }
	__asm { je L_005f7425 }
	__asm { test bl, bl }
	__asm { je L_005f7427 }
	__asm { L_005f7425: }
	__asm { mov bl, 1 }
	__asm { L_005f7427: }
	__asm { push 0xe211dc }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc68], eax }
	__asm { test eax, eax }
	__asm { je L_005f743b }
	__asm { test bl, bl }
	__asm { je L_005f743d }
	__asm { L_005f743b: }
	__asm { mov bl, 1 }
	__asm { L_005f743d: }
	__asm { push 0xe211ec }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc70], eax }
	__asm { test eax, eax }
	__asm { je L_005f7451 }
	__asm { test bl, bl }
	__asm { je L_005f7453 }
	__asm { L_005f7451: }
	__asm { mov bl, 1 }
	__asm { L_005f7453: }
	__asm { push 0xe21204 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc78], eax }
	__asm { test eax, eax }
	__asm { je L_005f7467 }
	__asm { test bl, bl }
	__asm { je L_005f7469 }
	__asm { L_005f7467: }
	__asm { mov bl, 1 }
	__asm { L_005f7469: }
	__asm { push 0xe21218 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc7c], eax }
	__asm { test eax, eax }
	__asm { je L_005f7482 }
	__asm { test bl, bl }
	__asm { jne L_005f7482 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f7482: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbca8[];
extern "C" char g_012dbcac[];
extern "C" char g_012dbcb4[];
extern "C" char g_012dbcbc[];
extern "C" char g_012dbcc8[];
extern "C" char g_012dbcd0[];
extern "C" char g_012dbcd8[];
extern "C" char g_012dbcdc[];
extern "C" char g_012dbce4[];
extern "C" char g_012dbcec[];
// FUNCTION: ROBLOXSTUDIO 0x005f7500
extern "C" __declspec(naked) void asm_005f7500()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe21280 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe21298 }
	__asm { mov dword ptr [g_012dbca8], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbcac], eax }
	__asm { test eax, eax }
	__asm { je L_005f752d }
	__asm { test bl, bl }
	__asm { je L_005f752f }
	__asm { L_005f752d: }
	__asm { mov bl, 1 }
	__asm { L_005f752f: }
	__asm { push 0xe212ac }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbcb4], eax }
	__asm { test eax, eax }
	__asm { je L_005f7543 }
	__asm { test bl, bl }
	__asm { je L_005f7545 }
	__asm { L_005f7543: }
	__asm { mov bl, 1 }
	__asm { L_005f7545: }
	__asm { push 0xe212c0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbcbc], eax }
	__asm { test eax, eax }
	__asm { je L_005f7559 }
	__asm { test bl, bl }
	__asm { je L_005f755b }
	__asm { L_005f7559: }
	__asm { mov bl, 1 }
	__asm { L_005f755b: }
	__asm { push 0xe212d4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbcc8], eax }
	__asm { test eax, eax }
	__asm { je L_005f756f }
	__asm { test bl, bl }
	__asm { je L_005f7571 }
	__asm { L_005f756f: }
	__asm { mov bl, 1 }
	__asm { L_005f7571: }
	__asm { push 0xe212e8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbcd0], eax }
	__asm { test eax, eax }
	__asm { je L_005f7585 }
	__asm { test bl, bl }
	__asm { je L_005f7587 }
	__asm { L_005f7585: }
	__asm { mov bl, 1 }
	__asm { L_005f7587: }
	__asm { push 0xe212fc }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbcd8], eax }
	__asm { test eax, eax }
	__asm { je L_005f759b }
	__asm { test bl, bl }
	__asm { je L_005f759d }
	__asm { L_005f759b: }
	__asm { mov bl, 1 }
	__asm { L_005f759d: }
	__asm { push 0xe21310 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbcdc], eax }
	__asm { test eax, eax }
	__asm { je L_005f75b1 }
	__asm { test bl, bl }
	__asm { je L_005f75b3 }
	__asm { L_005f75b1: }
	__asm { mov bl, 1 }
	__asm { L_005f75b3: }
	__asm { push 0xe21324 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbce4], eax }
	__asm { test eax, eax }
	__asm { je L_005f75c7 }
	__asm { test bl, bl }
	__asm { je L_005f75c9 }
	__asm { L_005f75c7: }
	__asm { mov bl, 1 }
	__asm { L_005f75c9: }
	__asm { push 0xe21338 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbcec], eax }
	__asm { test eax, eax }
	__asm { je L_005f75e2 }
	__asm { test bl, bl }
	__asm { jne L_005f75e2 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f75e2: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbcf8[];
extern "C" char g_012dbcfc[];
extern "C" char g_012dbd04[];
extern "C" char g_012dbd0c[];
extern "C" char g_012dbd18[];
extern "C" char g_012dbd20[];
// FUNCTION: ROBLOXSTUDIO 0x005f75f0
extern "C" __declspec(naked) void asm_005f75f0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe21350 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe21364 }
	__asm { mov dword ptr [g_012dbcf8], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbcfc], eax }
	__asm { test eax, eax }
	__asm { je L_005f761d }
	__asm { test bl, bl }
	__asm { je L_005f761f }
	__asm { L_005f761d: }
	__asm { mov bl, 1 }
	__asm { L_005f761f: }
	__asm { push 0xe2137c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd04], eax }
	__asm { test eax, eax }
	__asm { je L_005f7633 }
	__asm { test bl, bl }
	__asm { je L_005f7635 }
	__asm { L_005f7633: }
	__asm { mov bl, 1 }
	__asm { L_005f7635: }
	__asm { push 0xe21394 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd0c], eax }
	__asm { test eax, eax }
	__asm { je L_005f7649 }
	__asm { test bl, bl }
	__asm { je L_005f764b }
	__asm { L_005f7649: }
	__asm { mov bl, 1 }
	__asm { L_005f764b: }
	__asm { push 0xe213ac }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd18], eax }
	__asm { test eax, eax }
	__asm { je L_005f765f }
	__asm { test bl, bl }
	__asm { je L_005f7661 }
	__asm { L_005f765f: }
	__asm { mov bl, 1 }
	__asm { L_005f7661: }
	__asm { push 0xe213c4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd20], eax }
	__asm { test eax, eax }
	__asm { je L_005f767a }
	__asm { test bl, bl }
	__asm { jne L_005f767a }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f767a: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbd28[];
extern "C" char g_012dbd30[];
extern "C" char g_012dbd34[];
extern "C" char g_012dbd40[];
extern "C" char g_012dbd44[];
extern "C" char g_012dbd50[];
extern "C" char g_012dbd54[];
extern "C" char g_012dbd5c[];
extern "C" char g_012dbd64[];
extern "C" char g_012dbd6c[];
// FUNCTION: ROBLOXSTUDIO 0x005f7680
extern "C" __declspec(naked) void asm_005f7680()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe213dc }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe213f0 }
	__asm { mov dword ptr [g_012dbd28], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd30], eax }
	__asm { test eax, eax }
	__asm { je L_005f76ad }
	__asm { test bl, bl }
	__asm { je L_005f76af }
	__asm { L_005f76ad: }
	__asm { mov bl, 1 }
	__asm { L_005f76af: }
	__asm { push 0xe21404 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd34], eax }
	__asm { test eax, eax }
	__asm { je L_005f76c3 }
	__asm { test bl, bl }
	__asm { je L_005f76c5 }
	__asm { L_005f76c3: }
	__asm { mov bl, 1 }
	__asm { L_005f76c5: }
	__asm { push 0xe21414 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd40], eax }
	__asm { test eax, eax }
	__asm { je L_005f76d9 }
	__asm { test bl, bl }
	__asm { je L_005f76db }
	__asm { L_005f76d9: }
	__asm { mov bl, 1 }
	__asm { L_005f76db: }
	__asm { push 0xe21424 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd44], eax }
	__asm { test eax, eax }
	__asm { je L_005f76ef }
	__asm { test bl, bl }
	__asm { je L_005f76f1 }
	__asm { L_005f76ef: }
	__asm { mov bl, 1 }
	__asm { L_005f76f1: }
	__asm { push 0xe21434 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd50], eax }
	__asm { test eax, eax }
	__asm { je L_005f7705 }
	__asm { test bl, bl }
	__asm { je L_005f7707 }
	__asm { L_005f7705: }
	__asm { mov bl, 1 }
	__asm { L_005f7707: }
	__asm { push 0xe21444 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd54], eax }
	__asm { test eax, eax }
	__asm { je L_005f771b }
	__asm { test bl, bl }
	__asm { je L_005f771d }
	__asm { L_005f771b: }
	__asm { mov bl, 1 }
	__asm { L_005f771d: }
	__asm { push 0xe21454 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd5c], eax }
	__asm { test eax, eax }
	__asm { je L_005f7731 }
	__asm { test bl, bl }
	__asm { je L_005f7733 }
	__asm { L_005f7731: }
	__asm { mov bl, 1 }
	__asm { L_005f7733: }
	__asm { push 0xe21464 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd64], eax }
	__asm { test eax, eax }
	__asm { je L_005f7747 }
	__asm { test bl, bl }
	__asm { je L_005f7749 }
	__asm { L_005f7747: }
	__asm { mov bl, 1 }
	__asm { L_005f7749: }
	__asm { push 0xe21474 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd6c], eax }
	__asm { test eax, eax }
	__asm { je L_005f7762 }
	__asm { test bl, bl }
	__asm { jne L_005f7762 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f7762: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbd78[];
extern "C" char g_012dbd7c[];
extern "C" char g_012dbd88[];
extern "C" char g_012dbd90[];
extern "C" char g_012dbd98[];
extern "C" char g_012dbda0[];
extern "C" char g_012dbda4[];
extern "C" char g_012dbdac[];
extern "C" char g_012dbdb4[];
extern "C" char g_012dbdc0[];
extern "C" char g_012dbdc4[];
// FUNCTION: ROBLOXSTUDIO 0x005f7770
extern "C" __declspec(naked) void asm_005f7770()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe21484 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe21494 }
	__asm { mov dword ptr [g_012dbd78], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd7c], eax }
	__asm { test eax, eax }
	__asm { je L_005f779d }
	__asm { test bl, bl }
	__asm { je L_005f779f }
	__asm { L_005f779d: }
	__asm { mov bl, 1 }
	__asm { L_005f779f: }
	__asm { push 0xe214a4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd88], eax }
	__asm { test eax, eax }
	__asm { je L_005f77b3 }
	__asm { test bl, bl }
	__asm { je L_005f77b5 }
	__asm { L_005f77b3: }
	__asm { mov bl, 1 }
	__asm { L_005f77b5: }
	__asm { push 0xe214b8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd90], eax }
	__asm { test eax, eax }
	__asm { je L_005f77c9 }
	__asm { test bl, bl }
	__asm { je L_005f77cb }
	__asm { L_005f77c9: }
	__asm { mov bl, 1 }
	__asm { L_005f77cb: }
	__asm { push 0xe214cc }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd98], eax }
	__asm { test eax, eax }
	__asm { je L_005f77df }
	__asm { test bl, bl }
	__asm { je L_005f77e1 }
	__asm { L_005f77df: }
	__asm { mov bl, 1 }
	__asm { L_005f77e1: }
	__asm { push 0xe214dc }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbda0], eax }
	__asm { test eax, eax }
	__asm { je L_005f77f5 }
	__asm { test bl, bl }
	__asm { je L_005f77f7 }
	__asm { L_005f77f5: }
	__asm { mov bl, 1 }
	__asm { L_005f77f7: }
	__asm { push 0xe214f8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbda4], eax }
	__asm { test eax, eax }
	__asm { je L_005f780b }
	__asm { test bl, bl }
	__asm { je L_005f780d }
	__asm { L_005f780b: }
	__asm { mov bl, 1 }
	__asm { L_005f780d: }
	__asm { push 0xe21510 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbdac], eax }
	__asm { test eax, eax }
	__asm { je L_005f7821 }
	__asm { test bl, bl }
	__asm { je L_005f7823 }
	__asm { L_005f7821: }
	__asm { mov bl, 1 }
	__asm { L_005f7823: }
	__asm { push 0xe21528 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbdb4], eax }
	__asm { test eax, eax }
	__asm { je L_005f7837 }
	__asm { test bl, bl }
	__asm { je L_005f7839 }
	__asm { L_005f7837: }
	__asm { mov bl, 1 }
	__asm { L_005f7839: }
	__asm { push 0xe21538 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbdc0], eax }
	__asm { test eax, eax }
	__asm { je L_005f784d }
	__asm { test bl, bl }
	__asm { je L_005f784f }
	__asm { L_005f784d: }
	__asm { mov bl, 1 }
	__asm { L_005f784f: }
	__asm { push 0xe21548 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbdc4], eax }
	__asm { test eax, eax }
	__asm { je L_005f7868 }
	__asm { test bl, bl }
	__asm { jne L_005f7868 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f7868: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9b0c[];
extern "C" char g_012d9b14[];
extern "C" char g_012d9b18[];
extern "C" char g_012d9b24[];
extern "C" char g_012d9b2c[];
extern "C" char g_012d9b34[];
extern "C" char g_012d9b38[];
extern "C" char g_012d9b44[];
extern "C" char g_012d9b48[];
extern "C" char g_012d9b50[];
// FUNCTION: ROBLOXSTUDIO 0x005f8170
extern "C" __declspec(naked) void asm_005f8170()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe21e4c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe21e60 }
	__asm { mov dword ptr [g_012d9b0c], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9b14], eax }
	__asm { test eax, eax }
	__asm { je L_005f819d }
	__asm { test bl, bl }
	__asm { je L_005f819f }
	__asm { L_005f819d: }
	__asm { mov bl, 1 }
	__asm { L_005f819f: }
	__asm { push 0xe21e74 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9b18], eax }
	__asm { test eax, eax }
	__asm { je L_005f81b3 }
	__asm { test bl, bl }
	__asm { je L_005f81b5 }
	__asm { L_005f81b3: }
	__asm { mov bl, 1 }
	__asm { L_005f81b5: }
	__asm { push 0xe21e84 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9b24], eax }
	__asm { test eax, eax }
	__asm { je L_005f81c9 }
	__asm { test bl, bl }
	__asm { je L_005f81cb }
	__asm { L_005f81c9: }
	__asm { mov bl, 1 }
	__asm { L_005f81cb: }
	__asm { push 0xe21e94 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9b2c], eax }
	__asm { test eax, eax }
	__asm { je L_005f81df }
	__asm { test bl, bl }
	__asm { je L_005f81e1 }
	__asm { L_005f81df: }
	__asm { mov bl, 1 }
	__asm { L_005f81e1: }
	__asm { push 0xe21ea4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9b34], eax }
	__asm { test eax, eax }
	__asm { je L_005f81f5 }
	__asm { test bl, bl }
	__asm { je L_005f81f7 }
	__asm { L_005f81f5: }
	__asm { mov bl, 1 }
	__asm { L_005f81f7: }
	__asm { push 0xe21eb8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9b38], eax }
	__asm { test eax, eax }
	__asm { je L_005f820b }
	__asm { test bl, bl }
	__asm { je L_005f820d }
	__asm { L_005f820b: }
	__asm { mov bl, 1 }
	__asm { L_005f820d: }
	__asm { push 0xe21ecc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9b44], eax }
	__asm { test eax, eax }
	__asm { je L_005f8221 }
	__asm { test bl, bl }
	__asm { je L_005f8223 }
	__asm { L_005f8221: }
	__asm { mov bl, 1 }
	__asm { L_005f8223: }
	__asm { push 0xe21ee0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9b48], eax }
	__asm { test eax, eax }
	__asm { je L_005f8237 }
	__asm { test bl, bl }
	__asm { je L_005f8239 }
	__asm { L_005f8237: }
	__asm { mov bl, 1 }
	__asm { L_005f8239: }
	__asm { push 0xe21ef4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9b50], eax }
	__asm { test eax, eax }
	__asm { je L_005f8252 }
	__asm { test bl, bl }
	__asm { jne L_005f8252 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f8252: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012da8f4[];
extern "C" char g_012da8fc[];
extern "C" char g_012da904[];
extern "C" char g_012da90c[];
extern "C" char g_012da918[];
extern "C" char g_012da924[];
// FUNCTION: ROBLOXSTUDIO 0x005fa260
extern "C" __declspec(naked) void asm_005fa260()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2434c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe24364 }
	__asm { mov dword ptr [g_012da8f4], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012da8fc], eax }
	__asm { test eax, eax }
	__asm { je L_005fa28d }
	__asm { test bl, bl }
	__asm { je L_005fa28f }
	__asm { L_005fa28d: }
	__asm { mov bl, 1 }
	__asm { L_005fa28f: }
	__asm { push 0xe24378 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da904], eax }
	__asm { test eax, eax }
	__asm { je L_005fa2a3 }
	__asm { test bl, bl }
	__asm { je L_005fa2a5 }
	__asm { L_005fa2a3: }
	__asm { mov bl, 1 }
	__asm { L_005fa2a5: }
	__asm { push 0xe2438c }
	__asm { call esi }
	__asm { mov dword ptr [g_012da90c], eax }
	__asm { test eax, eax }
	__asm { je L_005fa2b9 }
	__asm { test bl, bl }
	__asm { je L_005fa2bb }
	__asm { L_005fa2b9: }
	__asm { mov bl, 1 }
	__asm { L_005fa2bb: }
	__asm { push 0xe243a4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da918], eax }
	__asm { test eax, eax }
	__asm { je L_005fa2cf }
	__asm { test bl, bl }
	__asm { je L_005fa2d1 }
	__asm { L_005fa2cf: }
	__asm { mov bl, 1 }
	__asm { L_005fa2d1: }
	__asm { push 0xe243bc }
	__asm { call esi }
	__asm { mov dword ptr [g_012da924], eax }
	__asm { test eax, eax }
	__asm { je L_005fa2ea }
	__asm { test bl, bl }
	__asm { jne L_005fa2ea }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fa2ea: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}
