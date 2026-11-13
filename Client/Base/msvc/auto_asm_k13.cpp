// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012b55c0[];
extern "C" void fn_006b1040();
// FUNCTION: ROBLOXSTUDIO 0x006b2200
extern "C" __declspec(naked) void asm_006b2200()
{
	__asm { push -1 }
	__asm { push 0xd159b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov edi, dword ptr [esp + 0x24] }
	__asm { test edi, edi }
	__asm { jne L_006b2245 }
	__asm { mov eax, 0x80004003 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 0xc }
	__asm { L_006b2245: }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { mov ebx, dword ptr [esi + 0x14] }
	__asm { push ebx }
	__asm { mov dword ptr [esp + 0x28], ebx }
	__asm { call dword ptr [g_00e101ac] }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { je L_006b2286 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov eax, 0x80040204 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 0xc }
	__asm { L_006b2286: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { cmp dword ptr [eax + 0x14], 0 }
	__asm { je L_006b22b6 }
	__asm { cmp byte ptr [esi + 0x19], 0 }
	__asm { jne L_006b22b6 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov eax, 0x80040224 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 0xc }
	__asm { L_006b22b6: }
	__asm { mov ecx, dword ptr [esp + 0x28] }
	__asm { push ecx }
	__asm { add esi, -0xc }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006b1040 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jge L_006b22f3 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [edx + 0x2c] }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { push ebx }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov eax, edi }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 0xc }
	__asm { L_006b22f3: }
	__asm { push ebx }
	__asm { call dword ptr [g_00e101b0] }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 0xc }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x006b2320
extern "C" __declspec(naked) void asm_006b2320()
{
	__asm { push -1 }
	__asm { push 0xd159e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, dword ptr [esp + 0x1c] }
	__asm { mov ebx, dword ptr [esi + 0x14] }
	__asm { push ebx }
	__asm { mov dword ptr [esp + 0x20], ebx }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { cmp dword ptr [eax + 0x14], 0 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { je L_006b2385 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov eax, 0x80040224 }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 4 }
	__asm { L_006b2385: }
	__asm { add esi, -0xc }
	__asm { cmp dword ptr [esi + 0x18], 0 }
	__asm { je L_006b23b5 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [edx + 0x2c] }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test eax, eax }
	__asm { jge L_006b239f }
	__asm { mov esi, eax }
	__asm { jmp L_006b23ba }
	__asm { L_006b239f: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push eax }
	__asm { call edx }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { xor esi, esi }
	__asm { jmp L_006b23ba }
	__asm { L_006b23b5: }
	__asm { mov esi, 1 }
	__asm { L_006b23ba: }
	__asm { push ebx }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 4 }
}

extern "C" char g_012b55c0[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006b24a0
extern "C" __declspec(naked) void asm_006b24a0()
{
	__asm { push -1 }
	__asm { push 0xd15a1b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov ebx, dword ptr [esp + 0x20] }
	__asm { test ebx, ebx }
	__asm { jne L_006b24e3 }
	__asm { mov eax, 0x80004003 }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 8 }
	__asm { L_006b24e3: }
	__asm { push 0x14 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x20], esi }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { test esi, esi }
	__asm { je L_006b2539 }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { add eax, -0xc }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { add eax, 0xc }
	__asm { mov dword ptr [esi], 0xe42f1c }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 0x10], 1 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { push eax }
	__asm { call edx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { call edx }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, esi }
	__asm { jmp L_006b253b }
	__asm { L_006b2539: }
	__asm { xor eax, eax }
	__asm { L_006b253b: }
	__asm { mov dword ptr [ebx], eax }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { and eax, 0x7ff8fff2 }
	__asm { add eax, 0x8007000e }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 8 }
}

extern "C" void fn_0042c130();
// FUNCTION: ROBLOXSTUDIO 0x006b26a0
extern "C" __declspec(naked) void asm_006b26a0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { cmp eax, 1 }
	__asm { jne L_006b2746 }
	__asm { lea eax, [edi + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { push ecx }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { cmp eax, 1 }
	__asm { jne L_006b2746 }
	__asm { lea edx, [edi + 0x2c] }
	__asm { push edx }
	__asm { lea eax, [esi + 0x2c] }
	__asm { push eax }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { cmp eax, 1 }
	__asm { jne L_006b2746 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { cmp eax, dword ptr [edi + 0x40] }
	__asm { jne L_006b2746 }
	__asm { test eax, eax }
	__asm { je L_006b273c }
	__asm { mov esi, dword ptr [esi + 0x44] }
	__asm { test esi, esi }
	__asm { je L_006b2746 }
	__asm { mov ecx, dword ptr [edi + 0x44] }
	__asm { test ecx, ecx }
	__asm { je L_006b2746 }
	__asm { cmp eax, 4 }
	__asm { jb L_006b2718 }
	__asm { L_006b2704: }
	__asm { mov edx, dword ptr [esi] }
	__asm { cmp edx, dword ptr [ecx] }
	__asm { jne L_006b2746 }
	__asm { sub eax, 4 }
	__asm { add ecx, 4 }
	__asm { add esi, 4 }
	__asm { cmp eax, 4 }
	__asm { jae L_006b2704 }
	__asm { L_006b2718: }
	__asm { test eax, eax }
	__asm { je L_006b273c }
	__asm { mov dl, byte ptr [ecx] }
	__asm { cmp dl, byte ptr [esi] }
	__asm { jne L_006b2746 }
	__asm { cmp eax, 1 }
	__asm { jbe L_006b273c }
	__asm { mov dl, byte ptr [ecx + 1] }
	__asm { cmp dl, byte ptr [esi + 1] }
	__asm { jne L_006b2746 }
	__asm { cmp eax, 2 }
	__asm { jbe L_006b273c }
	__asm { mov al, byte ptr [ecx + 2] }
	__asm { cmp al, byte ptr [esi + 2] }
	__asm { jne L_006b2746 }
	__asm { L_006b273c: }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_006b2746: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_0042c130();
// FUNCTION: ROBLOXSTUDIO 0x006b2880
extern "C" __declspec(naked) void asm_006b2880()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { push edi }
	__asm { push 0xe42ee4 }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_006b28ad }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_006b28ad }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_006b28ad: }
	__asm { push ebx }
	__asm { lea ebx, [esi + 0x10] }
	__asm { push 0xe42ee4 }
	__asm { push ebx }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_006b28d4 }
	__asm { lea eax, [edi + 0x10] }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_006b2949 }
	__asm { L_006b28d4: }
	__asm { lea ebx, [esi + 0x2c] }
	__asm { push 0xe42ee4 }
	__asm { push ebx }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_006b2951 }
	__asm { lea ecx, [edi + 0x2c] }
	__asm { push ebx }
	__asm { push ecx }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_006b2949 }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { cmp eax, dword ptr [esi + 0x40] }
	__asm { jne L_006b2949 }
	__asm { test eax, eax }
	__asm { je L_006b2951 }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { mov esi, dword ptr [edi + 0x44] }
	__asm { cmp eax, 4 }
	__asm { jb L_006b2925 }
	__asm { L_006b2911: }
	__asm { mov edx, dword ptr [esi] }
	__asm { cmp edx, dword ptr [ecx] }
	__asm { jne L_006b2949 }
	__asm { sub eax, 4 }
	__asm { add ecx, 4 }
	__asm { add esi, 4 }
	__asm { cmp eax, 4 }
	__asm { jae L_006b2911 }
	__asm { L_006b2925: }
	__asm { test eax, eax }
	__asm { je L_006b2951 }
	__asm { mov dl, byte ptr [ecx] }
	__asm { cmp dl, byte ptr [esi] }
	__asm { jne L_006b2949 }
	__asm { cmp eax, 1 }
	__asm { jbe L_006b2951 }
	__asm { mov dl, byte ptr [ecx + 1] }
	__asm { cmp dl, byte ptr [esi + 1] }
	__asm { jne L_006b2949 }
	__asm { cmp eax, 2 }
	__asm { jbe L_006b2951 }
	__asm { mov al, byte ptr [ecx + 2] }
	__asm { cmp al, byte ptr [esi + 2] }
	__asm { je L_006b2951 }
	__asm { L_006b2949: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_006b2951: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012b55c0[];
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x006b2dc0
extern "C" __declspec(naked) void asm_006b2dc0()
{
	__asm { push -1 }
	__asm { push 0xd15b48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x18] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { lea ebp, [esi + 0x58] }
	__asm { push ebp }
	__asm { mov dword ptr [esp + 0x18], ebp }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { xor ecx, ecx }
	__asm { inc eax }
	__asm { mov edx, 4 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { push ecx }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { jne L_006b2e2e }
	__asm { push ebp }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov eax, 0x8007000e }
	__asm { jmp L_006b2e6f }
	__asm { L_006b2e2e: }
	__asm { mov eax, dword ptr [esi + 0x54] }
	__asm { mov ebx, dword ptr [esp + 0x28] }
	__asm { test eax, eax }
	__asm { je L_006b2e5a }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { add ecx, ecx }
	__asm { add ecx, ecx }
	__asm { push ecx }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00cf67fe }
	__asm { mov edx, dword ptr [esi + 0x50] }
	__asm { mov dword ptr [edi + edx*4], ebx }
	__asm { mov eax, dword ptr [esi + 0x54] }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x10 }
	__asm { L_006b2e5a: }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { mov dword ptr [esi + 0x54], edi }
	__asm { mov dword ptr [edi + ecx*4], ebx }
	__asm { inc dword ptr [esi + 0x50] }
	__asm { push ebp }
	__asm { call dword ptr [g_00e101b0] }
	__asm { xor eax, eax }
	__asm { L_006b2e6f: }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b2e90
extern "C" __declspec(naked) void asm_006b2e90()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 0x50] }
	__asm { xor eax, eax }
	__asm { push edi }
	__asm { test edx, edx }
	__asm { jle L_006b2eb3 }
	__asm { mov edi, dword ptr [esi + 0x54] }
	__asm { mov ebx, dword ptr [esp + 0x10] }
	__asm { mov ecx, edi }
	__asm { L_006b2ea7: }
	__asm { cmp dword ptr [ecx], ebx }
	__asm { je L_006b2ebe }
	__asm { inc eax }
	__asm { add ecx, 4 }
	__asm { cmp eax, edx }
	__asm { jl L_006b2ea7 }
	__asm { L_006b2eb3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { ret 4 }
	__asm { L_006b2ebe: }
	__asm { cmp edx, 1 }
	__asm { jne L_006b2ede }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { dec dword ptr [esi + 0x50] }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x54], 0 }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { ret 4 }
	__asm { L_006b2ede: }
	__asm { inc eax }
	__asm { cmp eax, edx }
	__asm { jge L_006b2ef5 }
	__asm { L_006b2ee3: }
	__asm { mov ecx, dword ptr [esi + 0x54] }
	__asm { mov edx, dword ptr [ecx + eax*4] }
	__asm { lea ecx, [ecx + eax*4] }
	__asm { inc eax }
	__asm { mov dword ptr [ecx - 4], edx }
	__asm { cmp eax, dword ptr [esi + 0x50] }
	__asm { jl L_006b2ee3 }
	__asm { L_006b2ef5: }
	__asm { dec dword ptr [esi + 0x50] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { ret 4 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012b55c0[];
extern "C" void fn_006b26a0();
extern "C" void fn_006b29d0();
extern "C" void fn_006b2a10();
extern "C" void fn_00cf6d5f();
// FUNCTION: ROBLOXSTUDIO 0x006b3120
extern "C" __declspec(naked) void asm_006b3120()
{
	__asm { push -1 }
	__asm { push 0xd15ae0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { sub esp, 0x50 }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { mov dword ptr [esp + 0x4c], eax }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x60] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov ebp, dword ptr [esp + 0x70] }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0xa0] }
	__asm { add esi, 0x58 }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x14], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov dword ptr [esp + 0x68], 0 }
	__asm { call fn_006b2a10 }
	__asm { mov eax, dword ptr [edi - 0x48] }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { lea ecx, [edi - 0x48] }
	__asm { lea edx, [esp + 0x14] }
	__asm { push edx }
	__asm { mov byte ptr [esp + 0x6c], 1 }
	__asm { call eax }
	__asm { push ebp }
	__asm { lea ecx, [esp + 0x18] }
	__asm { call fn_006b26a0 }
	__asm { mov byte ptr [esp + 0x68], 0 }
	__asm { lea ecx, [esp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_006b31b8 }
	__asm { call fn_006b29d0 }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { xor eax, eax }
	__asm { jmp L_006b31c9 }
	__asm { L_006b31b8: }
	__asm { call fn_006b29d0 }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov eax, 0x80004005 }
	__asm { L_006b31c9: }
	__asm { mov ecx, dword ptr [esp + 0x60] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { mov ecx, dword ptr [esp + 0x4c] }
	__asm { xor ecx, esp }
	__asm { call fn_00cf6d5f }
	__asm { add esp, 0x5c }
	__asm { ret 4 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x006b31f0
extern "C" __declspec(naked) void asm_006b31f0()
{
	__asm { push -1 }
	__asm { push 0xd15b18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0xa0] }
	__asm { add esi, 0x58 }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { test eax, eax }
	__asm { jge L_006b3259 }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov eax, 0x80070057 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0x10 }
	__asm { ret 8 }
	__asm { L_006b3259: }
	__asm { jle L_006b327b }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov eax, 0x40103 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0x10 }
	__asm { ret 8 }
	__asm { L_006b327b: }
	__asm { mov eax, dword ptr [edi - 0x48] }
	__asm { mov edx, dword ptr [esp + 0x24] }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { lea ecx, [edi - 0x48] }
	__asm { push edx }
	__asm { call eax }
	__asm { push esi }
	__asm { mov edi, eax }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov eax, edi }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0x10 }
	__asm { ret 8 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012b55c0[];
extern "C" void fn_006b1740();
extern "C" void fn_006b2c60();
extern "C" void fn_006b38a0();
// FUNCTION: ROBLOXSTUDIO 0x006b33f0
extern "C" __declspec(naked) void asm_006b33f0()
{
	__asm { push -1 }
	__asm { push 0xd15b78 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov edi, dword ptr [esi + 0xa0] }
	__asm { add edi, 0x58 }
	__asm { push edi }
	__asm { mov dword ptr [esp + 0x14], edi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { cmp dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { je L_006b348f }
	__asm { mov ecx, esi }
	__asm { call fn_006b1740 }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { jge L_006b3461 }
	__asm { L_006b3445: }
	__asm { push edi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov eax, ebx }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_006b3461: }
	__asm { cmp dword ptr [esi - 0x34], 0 }
	__asm { je L_006b348f }
	__asm { add esi, -0x48 }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { call fn_006b38a0 }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { jl L_006b3445 }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_006b38a0 }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { jl L_006b3445 }
	__asm { mov ecx, esi }
	__asm { call fn_006b2c60 }
	__asm { L_006b348f: }
	__asm { push edi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" char g_012b55c0[];
extern "C" void fn_006b2560();
extern "C" void fn_006b2dc0();
extern "C" void fn_006b37d0();
// FUNCTION: ROBLOXSTUDIO 0x006b36b0
extern "C" __declspec(naked) void asm_006b36b0()
{
	__asm { push -1 }
	__asm { push 0xd15bb3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x18] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 0x14], esi }
	__asm { push 0 }
	__asm { call fn_006b37d0 }
	__asm { mov eax, dword ptr [esp + 0x34] }
	__asm { mov edi, dword ptr [esp + 0x30] }
	__asm { mov ebp, dword ptr [esp + 0x2c] }
	__asm { mov edx, dword ptr [esp + 0x28] }
	__asm { push eax }
	__asm { push ebp }
	__asm { lea ecx, [edi + 0x58] }
	__asm { push ecx }
	__asm { push edi }
	__asm { lea ebx, [esi + 0x48] }
	__asm { push edx }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { call fn_006b2560 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esp + 0x24], 1 }
	__asm { mov dword ptr [esi], 0xe4308c }
	__asm { mov dword ptr [ebx], 0xe4302c }
	__asm { mov dword ptr [esi + 0x54], 0xe42fdc }
	__asm { mov dword ptr [esi + 0x58], 0xe42fc4 }
	__asm { mov dword ptr [esi + 0xe8], edi }
	__asm { call fn_006b2dc0 }
	__asm { mov dword ptr [ebp], eax }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret 0x10 }
}

extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006b4010
extern "C" __declspec(naked) void asm_006b4010()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_006b4071 }
	__asm { nop }
	__asm { L_006b4020: }
	__asm { mov eax, edi }
	__asm { mov ebx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov edi, dword ptr [edi + 4] }
	__asm { test eax, eax }
	__asm { je L_006b403c }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { dec dword ptr [esi + 0x10] }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { test eax, eax }
	__asm { jne L_006b404a }
	__asm { L_006b403c: }
	__asm { push 0xc }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_006b407c }
	__asm { L_006b404a: }
	__asm { mov dword ptr [eax + 8], ebx }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { jne L_006b4064 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_006b4067 }
	__asm { L_006b4064: }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_006b4067: }
	__asm { inc dword ptr [esi + 8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test edi, edi }
	__asm { jne L_006b4020 }
	__asm { L_006b4071: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { ret 4 }
	__asm { L_006b407c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { ret 4 }
}

extern "C" char g_00e1330c[];
extern "C" char g_00e13310[];
extern "C" char g_00e13314[];
extern "C" char g_00e13394[];
extern "C" char g_00e13418[];
extern "C" char g_00e1341c[];
extern "C" char g_00e13420[];
extern "C" char g_00e13424[];
extern "C" char g_00e13428[];
extern "C" char g_00e1342c[];
extern "C" char g_00e13458[];
extern "C" char g_00e1345c[];
extern "C" char g_00e13460[];
extern "C" char g_00e13464[];
extern "C" char g_00e13468[];
extern "C" char g_00e13520[];
extern "C" char g_00e13524[];
extern "C" char g_00e13528[];
extern "C" char g_00e1352c[];
extern "C" char g_00e13530[];
extern "C" char g_00e13534[];
extern "C" char g_00e13538[];
extern "C" char g_00e1353c[];
extern "C" char g_00e13540[];
extern "C" char g_00e13544[];
extern "C" char g_00e13548[];
extern "C" char g_00e1354c[];
extern "C" char g_00e13550[];
extern "C" char g_00e13554[];
extern "C" char g_00e13558[];
extern "C" char g_00e1355c[];
extern "C" char g_00e13560[];
extern "C" char g_00e13564[];
extern "C" char g_00e13568[];
extern "C" char g_00e1356c[];
extern "C" char g_00e13570[];
extern "C" char g_00e13574[];
extern "C" char g_00e13578[];
extern "C" char g_00e1357c[];
extern "C" char g_00e13580[];
extern "C" char g_00e13584[];
extern "C" char g_00e13588[];
extern "C" char g_00e1358c[];
// FUNCTION: ROBLOXSTUDIO 0x006b42a2
extern "C" __declspec(naked) void asm_006b42a2()
{
	__asm { jmp dword ptr [g_00e13314] }
	__asm { jmp dword ptr [g_00e13310] }
	__asm { jmp dword ptr [g_00e1330c] }
	__asm { jmp dword ptr [g_00e13394] }
	__asm { jmp dword ptr [g_00e13418] }
	__asm { jmp dword ptr [g_00e1341c] }
	__asm { jmp dword ptr [g_00e13420] }
	__asm { jmp dword ptr [g_00e13424] }
	__asm { jmp dword ptr [g_00e13428] }
	__asm { jmp dword ptr [g_00e1342c] }
	__asm { jmp dword ptr [g_00e13458] }
	__asm { jmp dword ptr [g_00e1345c] }
	__asm { jmp dword ptr [g_00e13460] }
	__asm { jmp dword ptr [g_00e13464] }
	__asm { jmp dword ptr [g_00e13468] }
	__asm { jmp dword ptr [g_00e13520] }
	__asm { jmp dword ptr [g_00e13524] }
	__asm { jmp dword ptr [g_00e13528] }
	__asm { jmp dword ptr [g_00e1352c] }
	__asm { jmp dword ptr [g_00e13530] }
	__asm { jmp dword ptr [g_00e13534] }
	__asm { jmp dword ptr [g_00e13538] }
	__asm { jmp dword ptr [g_00e1353c] }
	__asm { jmp dword ptr [g_00e13540] }
	__asm { jmp dword ptr [g_00e13544] }
	__asm { jmp dword ptr [g_00e13548] }
	__asm { jmp dword ptr [g_00e1354c] }
	__asm { jmp dword ptr [g_00e13550] }
	__asm { jmp dword ptr [g_00e13554] }
	__asm { jmp dword ptr [g_00e13558] }
	__asm { jmp dword ptr [g_00e1355c] }
	__asm { jmp dword ptr [g_00e13560] }
	__asm { jmp dword ptr [g_00e13564] }
	__asm { jmp dword ptr [g_00e13568] }
	__asm { jmp dword ptr [g_00e1356c] }
	__asm { jmp dword ptr [g_00e13570] }
	__asm { jmp dword ptr [g_00e13574] }
	__asm { jmp dword ptr [g_00e13578] }
	__asm { jmp dword ptr [g_00e1357c] }
	__asm { jmp dword ptr [g_00e13580] }
	__asm { jmp dword ptr [g_00e13584] }
	__asm { jmp dword ptr [g_00e13588] }
	__asm { jmp dword ptr [g_00e1358c] }
}

extern "C" char g_00e10538[];
// FUNCTION: ROBLOXSTUDIO 0x006b4410
extern "C" __declspec(naked) void asm_006b4410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp edx, eax }
	__asm { jae L_006b4475 }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_006b4435 }
	__asm { mov ebx, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 0xc], ebx }
	__asm { jmp L_006b443a }
	__asm { L_006b4435: }
	__asm { mov ebx, edi }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { L_006b443a: }
	__asm { add eax, ebx }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_006b4445 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { jmp L_006b4447 }
	__asm { L_006b4445: }
	__asm { mov ecx, edi }
	__asm { L_006b4447: }
	__asm { lea esi, [ecx + edx] }
	__asm { cmp esi, eax }
	__asm { jae L_006b4475 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { L_006b4451: }
	__asm { test ebx, ebx }
	__asm { je L_006b4481 }
	__asm { movsx eax, byte ptr [esi] }
	__asm { push ebx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10538] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_006b4481 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add eax, dword ptr [ebp + 0xc] }
	__asm { inc esi }
	__asm { cmp esi, eax }
	__asm { jb L_006b4451 }
	__asm { L_006b4475: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_006b4481: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_006b4489 }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_006b4489: }
	__asm { sub esi, edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10538[];
// FUNCTION: ROBLOXSTUDIO 0x006b44a0
extern "C" __declspec(naked) void asm_006b44a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test ebx, ebx }
	__asm { je L_006b4501 }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { cmp edx, eax }
	__asm { jae L_006b4501 }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_006b44c5 }
	__asm { mov esi, dword ptr [edi] }
	__asm { jmp L_006b44c7 }
	__asm { L_006b44c5: }
	__asm { mov esi, edi }
	__asm { L_006b44c7: }
	__asm { add eax, esi }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_006b44d5 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { jmp L_006b44d7 }
	__asm { L_006b44d5: }
	__asm { mov ecx, edi }
	__asm { L_006b44d7: }
	__asm { lea esi, [ecx + edx] }
	__asm { cmp esi, eax }
	__asm { jae L_006b4501 }
	__asm { mov edi, edi }
	__asm { L_006b44e0: }
	__asm { test ebx, ebx }
	__asm { je L_006b44fc }
	__asm { movsx eax, byte ptr [esi] }
	__asm { push ebx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10538] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_006b450b }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { L_006b44fc: }
	__asm { inc esi }
	__asm { cmp esi, eax }
	__asm { jb L_006b44e0 }
	__asm { L_006b4501: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_006b450b: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_006b4513 }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_006b4513: }
	__asm { sub esi, edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00402f60();
extern "C" void fn_00426850();
extern "C" void fn_006b4600();
// FUNCTION: ROBLOXSTUDIO 0x006b4520
extern "C" __declspec(naked) void asm_006b4520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_006b4600 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_006b45f1 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { jb L_006b4547 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b4549 }
	__asm { L_006b4547: }
	__asm { mov ecx, esi }
	__asm { L_006b4549: }
	__asm { mov eax, 1 }
	__asm { cmp edi, eax }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push 0x100d138 }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_006b4575 }
	__asm { cmp edi, 1 }
	__asm { jb L_006b4575 }
	__asm { cmp edi, 1 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { je L_006b45f1 }
	__asm { L_006b4575: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_006b457f }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b4581 }
	__asm { L_006b457f: }
	__asm { mov ecx, esi }
	__asm { L_006b4581: }
	__asm { mov eax, 2 }
	__asm { cmp edi, eax }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push 0x1031424 }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_006b45ad }
	__asm { cmp edi, 2 }
	__asm { jb L_006b45ad }
	__asm { cmp edi, 2 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { je L_006b45f1 }
	__asm { L_006b45ad: }
	__asm { push 1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0x2e }
	__asm { call fn_00426850 }
	__asm { mov edi, eax }
	__asm { cmp edi, -1 }
	__asm { je L_006b45e9 }
	__asm { push 1 }
	__asm { lea ecx, [edi + 1] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0x2e }
	__asm { call fn_00426850 }
	__asm { cmp eax, -1 }
	__asm { jne L_006b45f1 }
	__asm { lea eax, [edi + 5] }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { jbe L_006b45f1 }
	__asm { L_006b45e9: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b45f1: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402f60();
extern "C" void fn_006b46d0();
extern "C" void fn_006b4710();
// FUNCTION: ROBLOXSTUDIO 0x006b4600
extern "C" __declspec(naked) void asm_006b4600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { test edi, edi }
	__asm { je L_006b46c2 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_006b461d }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b461f }
	__asm { L_006b461d: }
	__asm { mov ecx, esi }
	__asm { L_006b461f: }
	__asm { mov eax, 1 }
	__asm { cmp edi, eax }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push 0x100d138 }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_006b464b }
	__asm { cmp edi, 1 }
	__asm { jb L_006b464b }
	__asm { cmp edi, 1 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { je L_006b46bc }
	__asm { L_006b464b: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_006b4655 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b4657 }
	__asm { L_006b4655: }
	__asm { mov ecx, esi }
	__asm { L_006b4657: }
	__asm { mov eax, 2 }
	__asm { cmp edi, eax }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push 0x1031424 }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_006b4683 }
	__asm { cmp edi, 2 }
	__asm { jb L_006b4683 }
	__asm { cmp edi, 2 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { je L_006b46bc }
	__asm { L_006b4683: }
	__asm { push esi }
	__asm { call fn_006b4710 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_006b46c2 }
	__asm { push esi }
	__asm { call fn_006b46d0 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_006b46c2 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_006b46a9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_006b46ab }
	__asm { L_006b46a9: }
	__asm { mov eax, esi }
	__asm { L_006b46ab: }
	__asm { cmp byte ptr [eax], 0x2e }
	__asm { je L_006b46c2 }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_006b46b7 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_006b46b7: }
	__asm { cmp byte ptr [esi], 0x2d }
	__asm { je L_006b46c2 }
	__asm { L_006b46bc: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b46c2: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011dc4d0[];
extern "C" char g_011dc4e0[];
extern "C" char g_011dc4e4[];
extern "C" void fn_00422630();
extern "C" void fn_006b44a0();
// FUNCTION: ROBLOXSTUDIO 0x006b4710
extern "C" __declspec(naked) void asm_006b4710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_006b479c }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_006b4727 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_006b4729 }
	__asm { L_006b4727: }
	__asm { mov eax, esi }
	__asm { L_006b4729: }
	__asm { cmp byte ptr [eax], 0x20 }
	__asm { je L_006b479c }
	__asm { push dword ptr [g_011dc4e0] }
	__asm { cmp dword ptr [g_011dc4e4], 0x10 }
	__asm { mov eax, 0x11dc4d0 }
	__asm { cmovae eax, dword ptr [g_011dc4d0] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006b44a0 }
	__asm { cmp eax, -1 }
	__asm { jne L_006b479c }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_006b4762 }
	__asm { mov edx, dword ptr [esi] }
	__asm { jmp L_006b4764 }
	__asm { L_006b4762: }
	__asm { mov edx, esi }
	__asm { L_006b4764: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp byte ptr [eax + edx - 1], 0x20 }
	__asm { je L_006b479c }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_006b4777 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b4779 }
	__asm { L_006b4777: }
	__asm { mov ecx, esi }
	__asm { L_006b4779: }
	__asm { cmp byte ptr [eax + ecx - 1], 0x2e }
	__asm { jne L_006b4797 }
	__asm { cmp eax, 1 }
	__asm { je L_006b4797 }
	__asm { push 0x1031424 }
	__asm { push esi }
	__asm { call fn_00422630 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_006b479c }
	__asm { L_006b4797: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b479c: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b4950();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x006b47b0
extern "C" __declspec(naked) void asm_006b47b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd15c08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x200 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test edi, edi }
	__asm { jne L_006b47ec }
	__asm { mov ecx, ebx }
	__asm { lea edx, [ecx + 1] }
	__asm { nop }
	__asm { L_006b47e0: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_006b47e0 }
	__asm { sub ecx, edx }
	__asm { lea edi, [ecx + ebx] }
	__asm { L_006b47ec: }
	__asm { cmp ebx, edi }
	__asm { je L_006b486e }
	__asm { mov eax, edi }
	__asm { sub eax, ebx }
	__asm { lea eax, [eax + eax*2] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp eax, 0x100 }
	__asm { jbe L_006b4853 }
	__asm { xor ecx, ecx }
	__asm { mov edx, 2 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { push esi }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { push ecx }
	__asm { call fn_00cf64a0 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [esi + eax*2] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b4950 }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b4853: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20c] }
	__asm { push eax }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_006b4950 }
	__asm { add esp, 0x18 }
	__asm { L_006b486e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b4a10();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x006b4880
extern "C" __declspec(naked) void asm_006b4880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd15c08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x100 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test edi, edi }
	__asm { jne L_006b48c2 }
	__asm { mov ecx, ebx }
	__asm { lea edx, [ecx + 2] }
	__asm { nop }
	__asm { L_006b48b0: }
	__asm { mov ax, word ptr [ecx] }
	__asm { add ecx, 2 }
	__asm { test ax, ax }
	__asm { jne L_006b48b0 }
	__asm { sub ecx, edx }
	__asm { sar ecx, 1 }
	__asm { lea edi, [ebx + ecx*2] }
	__asm { L_006b48c2: }
	__asm { cmp ebx, edi }
	__asm { je L_006b4939 }
	__asm { mov eax, edi }
	__asm { sub eax, ebx }
	__asm { sar eax, 1 }
	__asm { lea eax, [eax*4 + 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp eax, 0x100 }
	__asm { jbe L_006b491e }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b4a10 }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b491e: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10c] }
	__asm { push eax }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_006b4a10 }
	__asm { add esp, 0x18 }
	__asm { L_006b4939: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e103fc[];
extern "C" char g_00e10528[];
extern "C" void fn_006b6ab0();
extern "C" void fn_006b8870();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006b4950
extern "C" __declspec(naked) void asm_006b4950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x3c }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e103fc] }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jne L_006b49c0 }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { mov esi, dword ptr [edx + 0x14] }
	__asm { cmp esi, 8 }
	__asm { jb L_006b4995 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { jmp L_006b4997 }
	__asm { L_006b4995: }
	__asm { mov ecx, edx }
	__asm { L_006b4997: }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { add eax, eax }
	__asm { add ecx, eax }
	__asm { cmp esi, 8 }
	__asm { jb L_006b49a7 }
	__asm { mov esi, dword ptr [edx] }
	__asm { jmp L_006b49a9 }
	__asm { L_006b49a7: }
	__asm { mov esi, edx }
	__asm { L_006b49a9: }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { add eax, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, edx }
	__asm { call fn_006b6ab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b49c0: }
	__asm { call fn_006b8870 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 8], 0xe43564 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x10fd6ac }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x3c], 0xe1823c }
	__asm { mov dword ptr [ebp - 0x30], edi }
	__asm { mov dword ptr [ebp - 0x2c], esi }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10400[];
extern "C" char g_00e10528[];
extern "C" void fn_006b8870();
extern "C" void fn_009310b0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006b4a10
extern "C" __declspec(naked) void asm_006b4a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x3c }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10400] }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jne L_006b4a7e }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { cmp eax, 0x10 }
	__asm { jb L_006b4a55 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { jmp L_006b4a57 }
	__asm { L_006b4a55: }
	__asm { mov ecx, edx }
	__asm { L_006b4a57: }
	__asm { mov esi, dword ptr [edx + 0x10] }
	__asm { add ecx, esi }
	__asm { cmp eax, 0x10 }
	__asm { jb L_006b4a65 }
	__asm { mov eax, dword ptr [edx] }
	__asm { jmp L_006b4a67 }
	__asm { L_006b4a65: }
	__asm { mov eax, edx }
	__asm { L_006b4a67: }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { add eax, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, edx }
	__asm { call fn_009310b0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b4a7e: }
	__asm { call fn_006b8870 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 8], 0xe43590 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x10fd6ac }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x3c], 0xe1823c }
	__asm { mov dword ptr [ebp - 0x30], edi }
	__asm { mov dword ptr [ebp - 0x2c], esi }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0042c030();
extern "C" void fn_006b5ac0();
extern "C" void fn_006b6ab0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b50a0
extern "C" __declspec(naked) void asm_006b50a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15c30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi + 0x14], 7 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov word ptr [esi], ax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, eax }
	__asm { je L_006b516a }
	__asm { push ebx }
	__asm { sub eax, ecx }
	__asm { push edi }
	__asm { sar eax, 1 }
	__asm { push eax }
	__asm { xor edx, edx }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 7 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x28], dx }
	__asm { call fn_0042c030 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006b5ac0 }
	__asm { cmp dword ptr [ebp - 0x14], 8 }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { lea edi, [ebp - 0x28] }
	__asm { cmovae edi, dword ptr [ebp - 0x28] }
	__asm { lea ebx, [ebp - 0x28] }
	__asm { cmovae ebx, dword ptr [ebp - 0x28] }
	__asm { cmp edx, 8 }
	__asm { jb L_006b5130 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b5132 }
	__asm { L_006b5130: }
	__asm { mov ecx, esi }
	__asm { L_006b5132: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, eax }
	__asm { add ecx, eax }
	__asm { cmp edx, 8 }
	__asm { jb L_006b5142 }
	__asm { mov edx, dword ptr [esi] }
	__asm { jmp L_006b5144 }
	__asm { L_006b5142: }
	__asm { mov edx, esi }
	__asm { L_006b5144: }
	__asm { add eax, edx }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { lea edx, [edi + edx*2] }
	__asm { push edx }
	__asm { push ebx }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006b6ab0 }
	__asm { cmp dword ptr [ebp - 0x14], 8 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { jb L_006b516a }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b516a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10344[];
extern "C" char g_00e10348[];
extern "C" char g_00e1034c[];
extern "C" char g_00e10350[];
extern "C" char g_00e10418[];
extern "C" char g_00e10430[];
extern "C" char g_00e10518[];
extern "C" char g_012de60c[];
extern "C" void fn_00cf64e2();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006b51f0
extern "C" __declspec(naked) void asm_006b51f0()
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
	__asm { mov eax, dword ptr [g_012de60c] }
	__asm { mov ecx, dword ptr [g_00e10430] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call dword ptr [g_00e10350] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov edi, eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { cmp edi, dword ptr [eax + 0xc] }
	__asm { jae L_006b524c }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov esi, dword ptr [ecx + edi*4] }
	__asm { test esi, esi }
	__asm { jne L_006b52b8 }
	__asm { jmp L_006b524e }
	__asm { L_006b524c: }
	__asm { xor esi, esi }
	__asm { L_006b524e: }
	__asm { cmp byte ptr [eax + 0x14], 0 }
	__asm { je L_006b5265 }
	__asm { call dword ptr [g_00e1034c] }
	__asm { cmp edi, dword ptr [eax + 0xc] }
	__asm { jae L_006b5269 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov esi, dword ptr [eax + edi*4] }
	__asm { L_006b5265: }
	__asm { test esi, esi }
	__asm { jne L_006b52b8 }
	__asm { L_006b5269: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { jne L_006b52b8 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push ebx }
	__asm { push eax }
	__asm { call dword ptr [g_00e10418] }
	__asm { add esp, 8 }
	__asm { cmp eax, -1 }
	__asm { jne L_006b529f }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e10518] }
	__asm { push 0x1179e30 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_006b529f: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [g_012de60c], esi }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 4] }
	__asm { push esi }
	__asm { call fn_00cf64e2 }
	__asm { add esp, 4 }
	__asm { L_006b52b8: }
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

extern "C" void fn_0042bd60();
extern "C" void fn_006b55f0();
extern "C" void fn_006b6610();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b5460
extern "C" __declspec(naked) void asm_006b5460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd15c78 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [edi + 0x10], 0 }
	__asm { je L_006b5534 }
	__asm { cmp esi, edi }
	__asm { jne L_006b550a }
	__asm { xor eax, eax }
	__asm { push -1 }
	__asm { push eax }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 7 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x24], ax }
	__asm { call fn_0042bd60 }
	__asm { cmp dword ptr [ebp - 0x10], 8 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { movzx eax, word ptr [eax] }
	__asm { cmp eax, 0x2f }
	__asm { je L_006b54d6 }
	__asm { cmp eax, 0x5c }
	__asm { je L_006b54d6 }
	__asm { mov ecx, esi }
	__asm { call fn_006b6610 }
	__asm { L_006b54d6: }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006b55f0 }
	__asm { cmp dword ptr [ebp - 0x10], 8 }
	__asm { jb L_006b5534 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006b550a: }
	__asm { cmp dword ptr [edi + 0x14], 8 }
	__asm { jb L_006b5514 }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_006b5516 }
	__asm { L_006b5514: }
	__asm { mov eax, edi }
	__asm { L_006b5516: }
	__asm { movzx eax, word ptr [eax] }
	__asm { cmp eax, 0x2f }
	__asm { je L_006b5528 }
	__asm { cmp eax, 0x5c }
	__asm { je L_006b5528 }
	__asm { call fn_006b6610 }
	__asm { L_006b5528: }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006b55f0 }
	__asm { L_006b5534: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_0042bea0();
extern "C" void fn_006b5590();
// FUNCTION: ROBLOXSTUDIO 0x006b56f0
extern "C" __declspec(naked) void asm_006b56f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { or eax, 0xffffffff }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { sub eax, ecx }
	__asm { cmp eax, ebx }
	__asm { ja L_006b5711 }
	__asm { push 0xf12f48 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006b5711: }
	__asm { test ebx, ebx }
	__asm { je L_006b579f }
	__asm { push edi }
	__asm { lea edi, [ecx + ebx] }
	__asm { cmp edi, 0x7ffffffe }
	__asm { jbe L_006b5730 }
	__asm { push 0xf12f48 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006b5730: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, edi }
	__asm { jae L_006b576c }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_0042bea0 }
	__asm { test edi, edi }
	__asm { je L_006b579e }
	__asm { L_006b5744: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push ebx }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_006b5590 }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { jb L_006b5796 }
	__asm { mov eax, dword ptr [esi] }
	__asm { xor ecx, ecx }
	__asm { mov word ptr [eax + edi*2], cx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006b576c: }
	__asm { test edi, edi }
	__asm { jne L_006b5744 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { cmp eax, 8 }
	__asm { jb L_006b5788 }
	__asm { mov eax, dword ptr [esi] }
	__asm { xor ecx, ecx }
	__asm { pop edi }
	__asm { mov word ptr [eax], cx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006b5788: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { xor ecx, ecx }
	__asm { pop esi }
	__asm { mov word ptr [eax], cx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006b5796: }
	__asm { mov eax, esi }
	__asm { xor ecx, ecx }
	__asm { mov word ptr [eax + edi*2], cx }
	__asm { L_006b579e: }
	__asm { pop edi }
	__asm { L_006b579f: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10260[];
extern "C" void fn_0042bea0();
extern "C" void fn_006b5590();
// FUNCTION: ROBLOXSTUDIO 0x006b58d0
extern "C" __declspec(naked) void asm_006b58d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp edi, -1 }
	__asm { jne L_006b58ea }
	__asm { push 0xf12f48 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006b58ea: }
	__asm { cmp edi, 0x7ffffffe }
	__asm { jbe L_006b58fd }
	__asm { push 0xf12f48 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006b58fd: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, edi }
	__asm { jae L_006b5937 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push edi }
	__asm { call fn_0042bea0 }
	__asm { test edi, edi }
	__asm { je L_006b5967 }
	__asm { L_006b5911: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { call fn_006b5590 }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { jb L_006b595f }
	__asm { mov eax, dword ptr [esi] }
	__asm { xor ecx, ecx }
	__asm { mov word ptr [eax + edi*2], cx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006b5937: }
	__asm { test edi, edi }
	__asm { jne L_006b5911 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { cmp eax, 8 }
	__asm { jb L_006b5952 }
	__asm { mov eax, dword ptr [esi] }
	__asm { xor ecx, ecx }
	__asm { mov word ptr [eax], cx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006b5952: }
	__asm { mov eax, esi }
	__asm { xor ecx, ecx }
	__asm { pop edi }
	__asm { mov word ptr [eax], cx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006b595f: }
	__asm { mov eax, esi }
	__asm { xor ecx, ecx }
	__asm { mov word ptr [eax + edi*2], cx }
	__asm { L_006b5967: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10264[];
// FUNCTION: ROBLOXSTUDIO 0x006b5b50
extern "C" __declspec(naked) void asm_006b5b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { cmp ecx, edx }
	__asm { jae L_006b5b6a }
	__asm { push 0xf12f30 }
	__asm { call dword ptr [g_00e10264] }
	__asm { L_006b5b6a: }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { sub ecx, edx }
	__asm { cmp ecx, edi }
	__asm { cmovb edi, ecx }
	__asm { cmp dword ptr [eax + 0x14], 8 }
	__asm { jb L_006b5b7f }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006b5b7f: }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { cmp edi, ebx }
	__asm { mov esi, ebx }
	__asm { cmovb esi, edi }
	__asm { test esi, esi }
	__asm { je L_006b5ba4 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea edx, [eax + edx*2] }
	__asm { L_006b5b93: }
	__asm { mov ax, word ptr [edx] }
	__asm { cmp ax, word ptr [ecx] }
	__asm { jne L_006b5bb8 }
	__asm { add edx, 2 }
	__asm { add ecx, 2 }
	__asm { dec esi }
	__asm { jne L_006b5b93 }
	__asm { L_006b5ba4: }
	__asm { xor eax, eax }
	__asm { L_006b5ba6: }
	__asm { test eax, eax }
	__asm { jne L_006b5bcd }
	__asm { cmp edi, ebx }
	__asm { jae L_006b5bc6 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_006b5bb8: }
	__asm { movzx eax, word ptr [edx] }
	__asm { cmp ax, word ptr [ecx] }
	__asm { sbb eax, eax }
	__asm { and eax, 0xfffffffe }
	__asm { inc eax }
	__asm { jmp L_006b5ba6 }
	__asm { L_006b5bc6: }
	__asm { xor eax, eax }
	__asm { cmp edi, ebx }
	__asm { setne al }
	__asm { L_006b5bcd: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10350[];
extern "C" char g_00e10404[];
extern "C" char g_00e10408[];
extern "C" char g_00e1040c[];
extern "C" char g_00e10410[];
extern "C" char g_00e10414[];
extern "C" char g_00e10418[];
extern "C" char g_00e10430[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006b5be0
extern "C" __declspec(naked) void asm_006b5be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15d03 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10410] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { push 0x34 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_006b5c42 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10414] }
	__asm { mov dword ptr [edi], 0xe435d4 }
	__asm { jmp L_006b5c44 }
	__asm { L_006b5c42: }
	__asm { xor edi, edi }
	__asm { L_006b5c44: }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10408] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebx], eax }
	__asm { test edi, edi }
	__asm { je L_006b5c9a }
	__asm { mov ecx, dword ptr [g_00e10430] }
	__asm { call dword ptr [g_00e10350] }
	__asm { push eax }
	__asm { push edi }
	__asm { push dword ptr [ebx] }
	__asm { call dword ptr [g_00e1040c] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10418] }
	__asm { add esp, 0x14 }
	__asm { cmp eax, -1 }
	__asm { je L_006b5c9a }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { push 0x100dee0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { add ecx, 0x18 }
	__asm { call dword ptr [g_00e10404] }
	__asm { L_006b5c9a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006b5cb8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_006b5cb8 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_006b5cb8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e435c0[];
extern "C" void fn_006b61c0();
extern "C" void fn_006b6b50();
// FUNCTION: ROBLOXSTUDIO 0x006b6000
extern "C" __declspec(naked) void asm_006b6000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp edi, 2 }
	__asm { jne L_006b604a }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, 8 }
	__asm { jb L_006b601c }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b601e }
	__asm { L_006b601c: }
	__asm { mov ecx, esi }
	__asm { L_006b601e: }
	__asm { movzx ecx, word ptr [ecx] }
	__asm { cmp ecx, 0x2f }
	__asm { je L_006b602b }
	__asm { cmp ecx, 0x5c }
	__asm { jne L_006b604e }
	__asm { L_006b602b: }
	__asm { cmp eax, 8 }
	__asm { jb L_006b6034 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_006b6036 }
	__asm { L_006b6034: }
	__asm { mov eax, esi }
	__asm { L_006b6036: }
	__asm { movzx eax, word ptr [eax + 2] }
	__asm { cmp eax, 0x2f }
	__asm { je L_006b6044 }
	__asm { cmp eax, 0x5c }
	__asm { jne L_006b604e }
	__asm { L_006b6044: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b604a: }
	__asm { test edi, edi }
	__asm { je L_006b6070 }
	__asm { L_006b604e: }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { jb L_006b6058 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_006b605a }
	__asm { L_006b6058: }
	__asm { mov eax, esi }
	__asm { L_006b605a: }
	__asm { movzx eax, word ptr [eax + edi*2 - 2] }
	__asm { cmp eax, 0x2f }
	__asm { je L_006b6069 }
	__asm { cmp eax, 0x5c }
	__asm { jne L_006b6070 }
	__asm { L_006b6069: }
	__asm { lea eax, [edi - 1] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b6070: }
	__asm { xor ecx, ecx }
	__asm { cmp word ptr [g_00e435c0], cx }
	__asm { mov eax, 2 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { lea eax, [edi - 1] }
	__asm { push eax }
	__asm { push 0xe435c0 }
	__asm { mov ecx, esi }
	__asm { call fn_006b61c0 }
	__asm { cmp eax, -1 }
	__asm { jne L_006b60b4 }
	__asm { push 1 }
	__asm { lea eax, [edi - 2] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 0xc], 0x3a }
	__asm { call fn_006b6b50 }
	__asm { cmp eax, -1 }
	__asm { je L_006b6044 }
	__asm { L_006b60b4: }
	__asm { cmp eax, 1 }
	__asm { jne L_006b60d6 }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { jb L_006b60c1 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_006b60c1: }
	__asm { movzx ecx, word ptr [esi] }
	__asm { cmp ecx, 0x2f }
	__asm { je L_006b6044 }
	__asm { cmp ecx, 0x5c }
	__asm { je L_006b6044 }
	__asm { L_006b60d6: }
	__asm { pop edi }
	__asm { inc eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b60e0();
// FUNCTION: ROBLOXSTUDIO 0x006b6390
extern "C" __declspec(naked) void asm_006b6390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { je L_006b63f9 }
	__asm { mov edx, dword ptr [ecx + 0x14] }
	__asm { L_006b63a1: }
	__asm { cmp edx, 8 }
	__asm { jb L_006b63aa }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp L_006b63ac }
	__asm { L_006b63aa: }
	__asm { mov eax, ecx }
	__asm { L_006b63ac: }
	__asm { movzx eax, word ptr [eax + esi*2 - 2] }
	__asm { cmp eax, 0x2f }
	__asm { je L_006b63bb }
	__asm { cmp eax, 0x5c }
	__asm { jne L_006b63be }
	__asm { L_006b63bb: }
	__asm { dec esi }
	__asm { jne L_006b63a1 }
	__asm { L_006b63be: }
	__asm { test esi, esi }
	__asm { je L_006b63f9 }
	__asm { cmp esi, 2 }
	__asm { jne L_006b63fe }
	__asm { mov edx, dword ptr [ecx + 0x14] }
	__asm { cmp edx, 8 }
	__asm { jb L_006b63d3 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp L_006b63d5 }
	__asm { L_006b63d3: }
	__asm { mov eax, ecx }
	__asm { L_006b63d5: }
	__asm { movzx eax, word ptr [eax] }
	__asm { cmp eax, 0x61 }
	__asm { jb L_006b63e2 }
	__asm { cmp eax, 0x7a }
	__asm { jbe L_006b63eb }
	__asm { L_006b63e2: }
	__asm { add eax, -0x41 }
	__asm { cmp ax, 0x19 }
	__asm { ja L_006b644d }
	__asm { L_006b63eb: }
	__asm { cmp edx, 8 }
	__asm { jb L_006b63f2 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_006b63f2: }
	__asm { cmp word ptr [ecx + 2], 0x3a }
	__asm { jne L_006b644d }
	__asm { L_006b63f9: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b63fe: }
	__asm { cmp esi, 3 }
	__asm { jb L_006b644d }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { cmp eax, 8 }
	__asm { jb L_006b640f }
	__asm { mov edx, dword ptr [ecx] }
	__asm { jmp L_006b6411 }
	__asm { L_006b640f: }
	__asm { mov edx, ecx }
	__asm { L_006b6411: }
	__asm { movzx edx, word ptr [edx] }
	__asm { cmp edx, 0x2f }
	__asm { je L_006b641e }
	__asm { cmp edx, 0x5c }
	__asm { jne L_006b644d }
	__asm { L_006b641e: }
	__asm { cmp eax, 8 }
	__asm { jb L_006b6427 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp L_006b6429 }
	__asm { L_006b6427: }
	__asm { mov eax, ecx }
	__asm { L_006b6429: }
	__asm { movzx eax, word ptr [eax + 2] }
	__asm { cmp eax, 0x2f }
	__asm { je L_006b6437 }
	__asm { cmp eax, 0x5c }
	__asm { jne L_006b644d }
	__asm { L_006b6437: }
	__asm { push 2 }
	__asm { push 0xe435c0 }
	__asm { call fn_006b60e0 }
	__asm { xor ecx, ecx }
	__asm { cmp eax, esi }
	__asm { sete al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b644d: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b6000();
extern "C" void fn_006b6c10();
// FUNCTION: ROBLOXSTUDIO 0x006b66b0
extern "C" __declspec(naked) void asm_006b66b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { push ebx }
	__asm { call fn_006b6000 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebx + 0x10], 0 }
	__asm { mov edi, eax }
	__asm { je L_006b66ec }
	__asm { cmp dword ptr [ebx + 0x14], 8 }
	__asm { jb L_006b66d6 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { jmp L_006b66d8 }
	__asm { L_006b66d6: }
	__asm { mov eax, ebx }
	__asm { L_006b66d8: }
	__asm { movzx eax, word ptr [eax + edi*2] }
	__asm { cmp eax, 0x2f }
	__asm { je L_006b66e6 }
	__asm { cmp eax, 0x5c }
	__asm { jne L_006b66ec }
	__asm { L_006b66e6: }
	__asm { mov byte ptr [ebp - 1], 1 }
	__asm { jmp L_006b66f0 }
	__asm { L_006b66ec: }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { L_006b66f0: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_006b6c10 }
	__asm { add esp, 8 }
	__asm { mov edx, eax }
	__asm { test edi, edi }
	__asm { je L_006b6725 }
	__asm { L_006b6700: }
	__asm { lea ecx, [edi - 1] }
	__asm { cmp ecx, edx }
	__asm { je L_006b6725 }
	__asm { cmp dword ptr [ebx + 0x14], 8 }
	__asm { jb L_006b6711 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { jmp L_006b6713 }
	__asm { L_006b6711: }
	__asm { mov eax, ebx }
	__asm { L_006b6713: }
	__asm { movzx eax, word ptr [eax + edi*2 - 2] }
	__asm { cmp eax, 0x2f }
	__asm { je L_006b6722 }
	__asm { cmp eax, 0x5c }
	__asm { jne L_006b6725 }
	__asm { L_006b6722: }
	__asm { dec edi }
	__asm { jne L_006b6700 }
	__asm { L_006b6725: }
	__asm { cmp edi, 1 }
	__asm { jne L_006b673c }
	__asm { test edx, edx }
	__asm { jne L_006b673c }
	__asm { cmp byte ptr [ebp - 1], dl }
	__asm { je L_006b673c }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b673c: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0042bd60();
extern "C" void fn_006b50a0();
extern "C" void fn_006b66b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b6960
extern "C" __declspec(naked) void asm_006b6960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15d92 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_006b66b0 }
	__asm { mov edx, eax }
	__asm { cmp edx, -1 }
	__asm { jne L_006b69b7 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x2c], 7 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov word ptr [ebp - 0x40], ax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ebx, 1 }
	__asm { jmp L_006b69e5 }
	__asm { L_006b69b7: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, 8 }
	__asm { jb L_006b69c3 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b69c5 }
	__asm { L_006b69c3: }
	__asm { mov ecx, esi }
	__asm { L_006b69c5: }
	__asm { cmp eax, 8 }
	__asm { jb L_006b69cc }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_006b69cc: }
	__asm { lea eax, [ecx + edx*2] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_006b50a0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ebx, 2 }
	__asm { L_006b69e5: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { push -1 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 7 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov word ptr [esi], cx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_0042bd60 }
	__asm { or ebx, 4 }
	__asm { test bl, 2 }
	__asm { je L_006b6a39 }
	__asm { and ebx, 0xfffffffd }
	__asm { cmp dword ptr [ebp - 0x14], 8 }
	__asm { jb L_006b6a25 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b6a25: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x14], 7 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x28], ax }
	__asm { L_006b6a39: }
	__asm { test bl, 1 }
	__asm { je L_006b6a4f }
	__asm { cmp dword ptr [ebp - 0x2c], 8 }
	__asm { jb L_006b6a4f }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b6a4f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0042bca0();
extern "C" void fn_006b4e90();
// FUNCTION: ROBLOXSTUDIO 0x006b6ab0
extern "C" __declspec(naked) void asm_006b6ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov esi, ecx }
	__asm { cmp edi, edx }
	__asm { jne L_006b6b09 }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { jb L_006b6acb }
	__asm { mov edx, dword ptr [esi] }
	__asm { jmp L_006b6acd }
	__asm { L_006b6acb: }
	__asm { mov edx, esi }
	__asm { L_006b6acd: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_006b6adb }
	__asm { xor ecx, ecx }
	__asm { jmp L_006b6adf }
	__asm { L_006b6adb: }
	__asm { sub ecx, eax }
	__asm { sar ecx, 1 }
	__asm { L_006b6adf: }
	__asm { test eax, eax }
	__asm { jne L_006b6af4 }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0042bca0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_006b6af4: }
	__asm { sub eax, edx }
	__asm { push ecx }
	__asm { sar eax, 1 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0042bca0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_006b6b09: }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { push ebx }
	__asm { jb L_006b6b14 }
	__asm { mov ebx, dword ptr [esi] }
	__asm { jmp L_006b6b16 }
	__asm { L_006b6b14: }
	__asm { mov ebx, esi }
	__asm { L_006b6b16: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_006b6b24 }
	__asm { xor ecx, ecx }
	__asm { jmp L_006b6b28 }
	__asm { L_006b6b24: }
	__asm { sub ecx, eax }
	__asm { sar ecx, 1 }
	__asm { L_006b6b28: }
	__asm { test eax, eax }
	__asm { je L_006b6b30 }
	__asm { sub eax, ebx }
	__asm { sar eax, 1 }
	__asm { L_006b6b30: }
	__asm { sub edx, edi }
	__asm { sar edx, 1 }
	__asm { push edx }
	__asm { push edi }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006b4e90 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e1010c[];
extern "C" char g_00e10118[];
extern "C" char g_00e10194[];
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x006b7d50
extern "C" __declspec(naked) void asm_006b7d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15ed8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [eax + 0x14], 8 }
	__asm { jb L_006b7d74 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006b7d74: }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0x2200000 }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push 7 }
	__asm { push 8 }
	__asm { push eax }
	__asm { call dword ptr [g_00e1010c] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp esi, -1 }
	__asm { jne L_006b7dad }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b7dad: }
	__asm { push ebx }
	__asm { push edi }
	__asm { push 0x4000 }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { mov edi, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 0x4000 }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x900a8 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10118] }
	__asm { test eax, eax }
	__asm { jne L_006b7de2 }
	__asm { xor bl, bl }
	__asm { jmp L_006b7deb }
	__asm { L_006b7de2: }
	__asm { cmp dword ptr [edi], 0xa000000c }
	__asm { sete bl }
	__asm { L_006b7deb: }
	__asm { push edi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10194] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0067cb60();
extern "C" void fn_006b93d0();
// FUNCTION: ROBLOXSTUDIO 0x006b8be0
extern "C" __declspec(naked) void asm_006b8be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_006b93d0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi], eax }
	__asm { cmp edi, 3 }
	__asm { jne L_006b8c19 }
	__asm { push ecx }
	__asm { mov ecx, 1 }
	__asm { mov eax, esp }
	__asm { push ecx }
	__asm { mov word ptr [eax], cx }
	__asm { mov eax, esp }
	__asm { push ecx }
	__asm { mov word ptr [eax], cx }
	__asm { mov ecx, 0x578 }
	__asm { jmp L_006b8c3f }
	__asm { L_006b8c19: }
	__asm { cmp edi, 4 }
	__asm { jne L_006b8c50 }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov ecx, 1 }
	__asm { push ecx }
	__asm { mov edx, 0x1f }
	__asm { mov word ptr [eax], dx }
	__asm { mov eax, esp }
	__asm { mov ecx, 0xc }
	__asm { mov word ptr [eax], cx }
	__asm { push ecx }
	__asm { mov ecx, 0x270f }
	__asm { L_006b8c3f: }
	__asm { mov eax, esp }
	__asm { mov word ptr [eax], cx }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_0067cb60 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_006b8c50: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e103a8[];
extern "C" char g_00e103b4[];
extern "C" char g_00e103b8[];
extern "C" void fn_004276b0();
extern "C" void fn_0048f020();
extern "C" void fn_006b9590();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b8c60
extern "C" __declspec(naked) void asm_006b8c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16081 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xe43790 }
	__asm { lea esi, [edi + 0x40] }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_006b9590 }
	__asm { push 0xe437fc }
	__asm { push esi }
	__asm { call fn_004276b0 }
	__asm { add esi, 0x60 }
	__asm { add esp, 0x10 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0048f020 }
	__asm { mov eax, dword ptr [g_00e103b8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_00e103b4] }
	__asm { push esi }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e103a8] }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [edi + 0x38], 0x10 }
	__asm { jb L_006b8cdd }
	__asm { push dword ptr [edi + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b8cdd: }
	__asm { mov dword ptr [edi + 0x38], 0xf }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov byte ptr [edi + 0x24], 0 }
	__asm { cmp dword ptr [edi + 0x1c], 0x10 }
	__asm { jb L_006b8d00 }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b8d00: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x1c], 0xf }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov byte ptr [edi + 8], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0067de10();
extern "C" void fn_006b8be0();
extern "C" void fn_006b92a0();
extern "C" void fn_00cf6970();
// FUNCTION: ROBLOXSTUDIO 0x006b8f50
extern "C" __declspec(naked) void asm_006b8f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { sub esp, 8 }
	__asm { test edx, edx }
	__asm { jne L_006b8f66 }
	__asm { cmp eax, 0x80000000 }
	__asm { je L_006b8f7e }
	__asm { L_006b8f66: }
	__asm { cmp edx, -1 }
	__asm { jne L_006b8f72 }
	__asm { cmp eax, 0x7fffffff }
	__asm { je L_006b8f7e }
	__asm { L_006b8f72: }
	__asm { cmp edx, -2 }
	__asm { jne L_006b8fe6 }
	__asm { cmp eax, 0x7fffffff }
	__asm { jne L_006b8fe6 }
	__asm { L_006b8f7e: }
	__asm { cmp edx, -2 }
	__asm { jne L_006b8f9e }
	__asm { cmp eax, 0x7fffffff }
	__asm { jne L_006b8f9e }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { push eax }
	__asm { call fn_006b8be0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006b8f9e: }
	__asm { test edx, edx }
	__asm { jne L_006b8fc0 }
	__asm { cmp eax, 0x80000000 }
	__asm { jne L_006b8fc0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, 1 }
	__asm { push eax }
	__asm { call fn_006b8be0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006b8fc0: }
	__asm { cmp edx, -1 }
	__asm { jne L_006b8fcf }
	__asm { cmp eax, 0x7fffffff }
	__asm { lea eax, [edx + 3] }
	__asm { je L_006b8fd4 }
	__asm { L_006b8fcf: }
	__asm { mov eax, 5 }
	__asm { L_006b8fd4: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_006b8be0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006b8fe6: }
	__asm { push 0x14 }
	__asm { push 0x1dd76000 }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_00cf6970 }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_006b92a0 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_0067de10 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0067df20();
extern "C" void fn_0067f0e0();
extern "C" void fn_00cf6d70();
// FUNCTION: ROBLOXSTUDIO 0x006b9430
extern "C" __declspec(naked) void asm_006b9430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { test edx, edx }
	__asm { jne L_006b9447 }
	__asm { cmp ecx, 0x80000000 }
	__asm { je L_006b9461 }
	__asm { L_006b9447: }
	__asm { cmp edx, -1 }
	__asm { jne L_006b9454 }
	__asm { cmp ecx, 0x7fffffff }
	__asm { je L_006b9461 }
	__asm { L_006b9454: }
	__asm { cmp edx, -2 }
	__asm { jne L_006b94cb }
	__asm { cmp ecx, 0x7fffffff }
	__asm { jne L_006b94cb }
	__asm { L_006b9461: }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov ecx, edx }
	__asm { cmp ecx, -2 }
	__asm { jne L_006b9485 }
	__asm { cmp eax, 0x7fffffff }
	__asm { jne L_006b9485 }
	__asm { xor eax, eax }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0067df20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b9485: }
	__asm { test ecx, ecx }
	__asm { jne L_006b94a6 }
	__asm { cmp eax, 0x80000000 }
	__asm { jne L_006b94a6 }
	__asm { mov eax, 1 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0067df20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b94a6: }
	__asm { cmp ecx, -1 }
	__asm { jne L_006b94b5 }
	__asm { cmp eax, 0x7fffffff }
	__asm { lea eax, [ecx + 3] }
	__asm { je L_006b94ba }
	__asm { L_006b94b5: }
	__asm { mov eax, 5 }
	__asm { L_006b94ba: }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0067df20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b94cb: }
	__asm { push 0x14 }
	__asm { push 0x1dd76000 }
	__asm { push ecx }
	__asm { push edx }
	__asm { call fn_00cf6d70 }
	__asm { push edx }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_0067f0e0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_006b9ee0();
// FUNCTION: ROBLOXSTUDIO 0x006b9bc0
extern "C" __declspec(naked) void asm_006b9bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd160d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_006b9ee0 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9ee0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { cmp ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sete bl }
	__asm { test eax, eax }
	__asm { je L_006b9c46 }
	__asm { lea esi, [eax + 5] }
	__asm { test esi, esi }
	__asm { je L_006b9c18 }
	__asm { add esi, -5 }
	__asm { jmp L_006b9c1a }
	__asm { L_006b9c18: }
	__asm { xor esi, esi }
	__asm { L_006b9c1a: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_006b9c46 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_006b9c46 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_006b9c46: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_006b9c8e }
	__asm { lea esi, [eax + 5] }
	__asm { test esi, esi }
	__asm { je L_006b9c60 }
	__asm { add esi, -5 }
	__asm { jmp L_006b9c62 }
	__asm { L_006b9c60: }
	__asm { xor esi, esi }
	__asm { L_006b9c62: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_006b9c8e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_006b9c8e }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_006b9c8e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_006b9ee0();
// FUNCTION: ROBLOXSTUDIO 0x006b9cb0
extern "C" __declspec(naked) void asm_006b9cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd160d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_006b9ee0 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9ee0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { cmp ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { setne bl }
	__asm { test eax, eax }
	__asm { je L_006b9d36 }
	__asm { lea esi, [eax + 5] }
	__asm { test esi, esi }
	__asm { je L_006b9d08 }
	__asm { add esi, -5 }
	__asm { jmp L_006b9d0a }
	__asm { L_006b9d08: }
	__asm { xor esi, esi }
	__asm { L_006b9d0a: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_006b9d36 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_006b9d36 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_006b9d36: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_006b9d7e }
	__asm { lea esi, [eax + 5] }
	__asm { test esi, esi }
	__asm { je L_006b9d50 }
	__asm { add esi, -5 }
	__asm { jmp L_006b9d52 }
	__asm { L_006b9d50: }
	__asm { xor esi, esi }
	__asm { L_006b9d52: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_006b9d7e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_006b9d7e }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_006b9d7e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_006b9ee0();
// FUNCTION: ROBLOXSTUDIO 0x006b9da0
extern "C" __declspec(naked) void asm_006b9da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd160d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_006b9ee0 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006b9de3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_006b9de3 }
	__asm { mov bl, 1 }
	__asm { jmp L_006b9de5 }
	__asm { L_006b9de3: }
	__asm { xor bl, bl }
	__asm { L_006b9de5: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006b9e3c }
	__asm { add esi, 5 }
	__asm { je L_006b9dfa }
	__asm { add esi, -5 }
	__asm { jmp L_006b9dfc }
	__asm { L_006b9dfa: }
	__asm { xor esi, esi }
	__asm { L_006b9dfc: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_006b9e29 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_006b9e29 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_006b9e29: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b9e3c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_006b9ee0();
// FUNCTION: ROBLOXSTUDIO 0x006b9e50
extern "C" __declspec(naked) void asm_006b9e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd160d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_006b9ee0 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006b9e88 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { L_006b9e88: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006b9ecd }
	__asm { add esi, 5 }
	__asm { je L_006b9e9d }
	__asm { add esi, -5 }
	__asm { jmp L_006b9e9f }
	__asm { L_006b9e9d: }
	__asm { xor esi, esi }
	__asm { L_006b9e9f: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_006b9ecc }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_006b9ecc }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_006b9ecc: }
	__asm { pop edi }
	__asm { L_006b9ecd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006ba500();
extern "C" void fn_008ed6c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006ba0f0
extern "C" __declspec(naked) void asm_006ba0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16158 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x40 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ed6c0 }
	__asm { mov ecx, esi }
	__asm { call fn_006ba500 }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006ba14e }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ba14e: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { test eax, eax }
	__asm { je L_006ba180 }
	__asm { test al, 1 }
	__asm { jne L_006ba180 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006ba180 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006ba180: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" void fn_008ed6c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006ba2e0
extern "C" __declspec(naked) void asm_006ba2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16143 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x40 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006ba32b }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_008ed6c0 }
	__asm { jmp L_006ba32d }
	__asm { L_006ba32b: }
	__asm { xor esi, esi }
	__asm { L_006ba32d: }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { jb L_006ba34b }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ba34b: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { test eax, eax }
	__asm { je L_006ba37d }
	__asm { test al, 1 }
	__asm { jne L_006ba37d }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006ba37d }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006ba37d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" void fn_0040c260();
extern "C" void fn_006ba2e0();
extern "C" void fn_008ed6c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006ba390
extern "C" __declspec(naked) void asm_006ba390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16158 }
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
	__asm { jne L_006ba3ef }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x48] }
	__asm { sub esp, 0x40 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_008ed6c0 }
	__asm { mov ecx, esi }
	__asm { call fn_006ba2e0 }
	__asm { mov bl, 1 }
	__asm { jmp L_006ba3f1 }
	__asm { L_006ba3ef: }
	__asm { xor bl, bl }
	__asm { L_006ba3f1: }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006ba409 }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ba409: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { test eax, eax }
	__asm { je L_006ba43b }
	__asm { test al, 1 }
	__asm { jne L_006ba43b }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006ba43b }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006ba43b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" void fn_006ba390();
extern "C" void fn_008ed6c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006ba450
extern "C" __declspec(naked) void asm_006ba450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16158 }
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
	__asm { push dword ptr [ebp + 0x48] }
	__asm { sub esp, 0x40 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_008ed6c0 }
	__asm { mov ecx, esi }
	__asm { call fn_006ba390 }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006ba4b6 }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ba4b6: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { test eax, eax }
	__asm { je L_006ba4e8 }
	__asm { test al, 1 }
	__asm { jne L_006ba4e8 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006ba4e8 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006ba4e8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" void fn_006ba450();
extern "C" void fn_008ed6c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006ba500
extern "C" __declspec(naked) void asm_006ba500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16158 }
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
	__asm { sub esp, 0x40 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_008ed6c0 }
	__asm { mov esi, 0xe439c8 }
	__asm { mov ecx, esi }
	__asm { call fn_006ba450 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006ba56b }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ba56b: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { test eax, eax }
	__asm { je L_006ba59d }
	__asm { test al, 1 }
	__asm { jne L_006ba59d }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006ba59d }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006ba59d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00b021e0();
extern "C" void fn_00be5350();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006ba5b0
extern "C" __declspec(naked) void asm_006ba5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1618b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_006ba63b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_00b021e0 }
	__asm { push 0x30 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_006ba624 }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00b021e0 }
	__asm { jmp L_006ba626 }
	__asm { L_006ba624: }
	__asm { xor esi, esi }
	__asm { L_006ba626: }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00be5350 }
	__asm { mov bl, 1 }
	__asm { jmp L_006ba63d }
	__asm { L_006ba63b: }
	__asm { xor bl, bl }
	__asm { L_006ba63d: }
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
	__asm { ret 0x38 }
}

extern "C" void fn_006ba5b0();
extern "C" void fn_00b021e0();
extern "C" void fn_00be5350();
// FUNCTION: ROBLOXSTUDIO 0x006ba660
extern "C" __declspec(naked) void asm_006ba660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd161b0 }
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
	__asm { call fn_00b021e0 }
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
	__asm { call fn_00b021e0 }
	__asm { mov esi, 0xe439d0 }
	__asm { mov ecx, esi }
	__asm { call fn_006ba5b0 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00be5350 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" char g_00e101fc[];
extern "C" char g_00e10200[];
extern "C" char g_00e10598[];
extern "C" char g_00e131ac[];
extern "C" void fn_0045f760();
extern "C" void fn_0045fe60();
extern "C" void fn_004ae050();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006babb0
extern "C" __declspec(naked) void asm_006babb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16292 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x60 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e101fc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10200] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_006bac14 }
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
	__asm { L_006bac14: }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e131ac] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0x40] }
	__asm { mov dword ptr [esi], 0xe439dc }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { call fn_004ae050 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
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

extern "C" void fn_00403540();
extern "C" void fn_006baed0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006bacb0
extern "C" __declspec(naked) void asm_006bacb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd162b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_006bad54 }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_006bad3d }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_006bad54 }
	__asm { L_006bad3d: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006bad54: }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006baed0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_006bad8a }
	__asm { test al, 1 }
	__asm { jne L_006bad83 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006bad83 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006bad83: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_006bad8a: }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { jb L_006bad9b }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006bad9b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" void fn_00403540();
extern "C" void fn_007af180();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006baed0
extern "C" __declspec(naked) void asm_006baed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16308 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_006baf4d }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_006baf36 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_006baf4d }
	__asm { L_006baf36: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006baf4d: }
	__asm { mov ecx, esi }
	__asm { call fn_007af180 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_006bafa4 }
	__asm { test al, 1 }
	__asm { jne L_006baf9d }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006baf9d }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006baf9d: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_006bafa4: }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { jb L_006bafb5 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006bafb5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_006ba230();
extern "C" void fn_006ba2a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006bb870
extern "C" __declspec(naked) void asm_006bb870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd163f0 }
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
	__asm { je L_006bb8c6 }
	__asm { cmp ebx, 0x3fffffff }
	__asm { ja L_006bb8c0 }
	__asm { lea eax, [ebx*4] }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_006bb8c6 }
	__asm { L_006bb8c0: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_006bb8c6: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi] }
	__asm { call fn_006ba2a0 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, edx }
	__asm { sub eax, ecx }
	__asm { sar eax, 2 }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { test ecx, ecx }
	__asm { je L_006bb90f }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push edx }
	__asm { push ecx }
	__asm { call fn_006ba230 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_006bb90f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + ebx*4] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [edi], esi }
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
extern "C" void fn_006bb870();
// FUNCTION: ROBLOXSTUDIO 0x006bb950
extern "C" __declspec(naked) void asm_006bb950()
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
	__asm { jae L_006bb9bd }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0x3fffffff }
	__asm { sar esi, 2 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_006bb987 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006bb987: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { pop ebx }
	__asm { jae L_006bb9ab }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_006bb870 }
	__asm { L_006bb9ab: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_006bb870 }
	__asm { L_006bb9bd: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_006ba0f0();
extern "C" void fn_006ba710();
// FUNCTION: ROBLOXSTUDIO 0x006bc660
extern "C" __declspec(naked) void asm_006bc660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd436f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { push 0 }
	__asm { sub esp, 0x40 }
	__asm { mov ebx, esp }
	__asm { sub esp, 0x18 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [edx + 0x14], 0xf }
	__asm { mov dword ptr [edx + 0x10], 0 }
	__asm { mov byte ptr [edx], 0 }
	__asm { cmp byte ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { jne L_006bc6b1 }
	__asm { xor ecx, ecx }
	__asm { jmp L_006bc6bf }
	__asm { L_006bc6b1: }
	__asm { mov ecx, esi }
	__asm { lea edi, [ecx + 1] }
	__asm { L_006bc6b6: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_006bc6b6 }
	__asm { sub ecx, edi }
	__asm { L_006bc6bf: }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, edx }
	__asm { call fn_004038a0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { test edx, edx }
	__asm { je L_006bc724 }
	__asm { mov dword ptr [ecx], edx }
	__asm { test dl, 1 }
	__asm { je L_006bc710 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { jmp L_006bc724 }
	__asm { L_006bc710: }
	__asm { lea eax, [ecx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006bc724: }
	__asm { push 0x6bc5c0 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006ba710 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0x40 }
	__asm { call fn_006ba0f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006bdb60
extern "C" __declspec(naked) void asm_006bdb60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [edx + 4] }
	__asm { push esi }
	__asm { mov esi, eax }
	__asm { push edi }
	__asm { cmp esi, dword ptr [eax] }
	__asm { je L_006bdb9d }
	__asm { L_006bdb75: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_006bdb81 }
	__asm { add eax, -0x10 }
	__asm { jmp L_006bdb83 }
	__asm { L_006bdb81: }
	__asm { xor eax, eax }
	__asm { L_006bdb83: }
	__asm { push eax }
	__asm { push ebx }
	__asm { call dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_006bdba6 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { cmp esi, dword ptr [edx + 4] }
	__asm { lea eax, [edx + 4] }
	__asm { jne L_006bdb75 }
	__asm { L_006bdb9d: }
	__asm { test ebx, ebx }
	__asm { je L_006bdbc8 }
	__asm { add ebx, 0x10 }
	__asm { jmp L_006bdbca }
	__asm { L_006bdba6: }
	__asm { test ebx, ebx }
	__asm { je L_006bdbaf }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { jmp L_006bdbb1 }
	__asm { L_006bdbaf: }
	__asm { xor ecx, ecx }
	__asm { L_006bdbb1: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { inc dword ptr [eax] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006bdbc8: }
	__asm { xor ebx, ebx }
	__asm { L_006bdbca: }
	__asm { mov ecx, dword ptr [eax] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov dword ptr [ecx + 4], ebx }
	__asm { mov dword ptr [eax], ebx }
	__asm { inc dword ptr [edx] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_006bd990();
extern "C" void fn_00971be0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006be9a0
extern "C" __declspec(naked) void asm_006be9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd168b0 }
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
	__asm { je L_006be9f5 }
	__asm { cmp edi, 0x15555555 }
	__asm { ja L_006be9ef }
	__asm { lea eax, [edi + edi*2] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_006be9f5 }
	__asm { L_006be9ef: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_006be9f5: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_006bd990 }
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
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { test eax, eax }
	__asm { je L_006bea55 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 4] }
	__asm { push eax }
	__asm { call fn_00971be0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { add esp, 0x14 }
	__asm { L_006bea55: }
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

extern "C" char g_00e10260[];
extern "C" void fn_006be9a0();
// FUNCTION: ROBLOXSTUDIO 0x006beaa0
extern "C" __declspec(naked) void asm_006beaa0()
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
	__asm { jae L_006beb38 }
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
	__asm { jae L_006beaef }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006beaef: }
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
	__asm { jae L_006beb25 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_006be9a0 }
	__asm { L_006beb25: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_006be9a0 }
	__asm { L_006beb38: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006bede0
extern "C" __declspec(naked) void asm_006bede0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_006bee8e }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x4c] }
	__asm { cmp ecx, esi }
	__asm { je L_006bee3c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x14] }
	__asm { cmp eax, esi }
	__asm { je L_006bee3c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006bee27 }
	__asm { push 0xb5 }
	__asm { push 0xe43cec }
	__asm { push 0xe43d2c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006bee3c }
	__asm { L_006bee27: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe43d48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006bee3c: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006bee8e }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 0x4c] }
	__asm { cmp ecx, esi }
	__asm { je L_006bee8e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x14] }
	__asm { cmp eax, esi }
	__asm { je L_006bee8e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006bee79 }
	__asm { push 0xb6 }
	__asm { push 0xe43cec }
	__asm { push 0xe43db0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006bee8e }
	__asm { L_006bee79: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe43dc8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006bee8e: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de653[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012de7c8[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006bf040
extern "C" __declspec(naked) void asm_006bf040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de653] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_006bf065 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe444e8 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_006bf065: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_006bf0b8 }
	__asm { cmp byte ptr [g_012de7c8], 0 }
	__asm { je L_006bf0b8 }
	__asm { cmp byte ptr [esi + 0x8c], 0 }
	__asm { je L_006bf0b8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006bf0a7 }
	__asm { push 0x1c2 }
	__asm { push 0xe43cec }
	__asm { push 0xe44520 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006bf0b8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006bf0a7: }
	__asm { movzx eax, al }
	__asm { push 0xe44568 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006bf0b8: }
	__asm { test esi, esi }
	__asm { je L_006bf0c1 }
	__asm { lea edx, [esi + 0x18] }
	__asm { jmp L_006bf0c3 }
	__asm { L_006bf0c1: }
	__asm { xor edx, edx }
	__asm { L_006bf0c3: }
	__asm { mov eax, dword ptr [edi + 0x4c] }
	__asm { lea ecx, [edi + 0x48] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { mov dword ptr [eax], edx }
	__asm { inc dword ptr [edi + 0x44] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00ca5a20();
// FUNCTION: ROBLOXSTUDIO 0x006c21d0
extern "C" __declspec(naked) void asm_006c21d0()
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
	__asm { jae L_006c223d }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0x1fffffff }
	__asm { sar esi, 3 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_006c2207 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006c2207: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { pop ebx }
	__asm { jae L_006c222b }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_00ca5a20 }
	__asm { L_006c222b: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_00ca5a20 }
	__asm { L_006c223d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e13180[];
extern "C" char g_00e13184[];
extern "C" char g_00e131c4[];
extern "C" void fn_0067d6f0();
extern "C" void fn_0067dca0();
// FUNCTION: ROBLOXSTUDIO 0x006c2a00
extern "C" __declspec(naked) void asm_006c2a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp - 4] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 8] }
	__asm { push eax }
	__asm { mov byte ptr [ebx + 0xc], 1 }
	__asm { call dword ptr [g_00e13180] }
	__asm { add esp, 4 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e131c4] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { cmp ecx, dword ptr [esi] }
	__asm { je L_006c2a7a }
	__asm { mov esi, dword ptr [ebx + 8] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x67e460 }
	__asm { push eax }
	__asm { call fn_0067dca0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x1312d00 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_0067d6f0 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e13184] }
	__asm { L_006c2a7a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0067d7a0();
extern "C" void fn_006c1f50();
extern "C" void fn_006c20a0();
extern "C" void fn_006c35a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006c3c80
extern "C" __declspec(naked) void asm_006c3c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16c70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { sub eax, dword ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sar eax, 3 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { cmp edi, eax }
	__asm { je L_006c3d25 }
	__asm { push edi }
	__asm { call fn_0067d7a0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { test ecx, ecx }
	__asm { jne L_006c3cc6 }
	__asm { xor ebx, ebx }
	__asm { jmp L_006c3cc9 }
	__asm { L_006c3cc6: }
	__asm { mov ebx, dword ptr [esi + 8] }
	__asm { L_006c3cc9: }
	__asm { cmp ecx, edi }
	__asm { lea edx, [ebp + 8] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { cmovae eax, edx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { mov dword ptr [ebp - 0x20], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006c20a0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { push edi }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { call fn_006c1f50 }
	__asm { add esp, 0x18 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_006c35a0 }
	__asm { L_006c3d25: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { test eax, eax }
	__asm { je L_006c3d48 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006c3d48: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e1025c[];
extern "C" void fn_006c53e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006c3d60
extern "C" __declspec(naked) void asm_006c3d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16c93 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x80 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_006c3da2 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_006c3da2: }
	__asm { lea eax, [ecx + 0x80] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edi + 0xc], ecx }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { fldz }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fstp qword ptr [edi + 0x18] }
	__asm { lea esi, [edi + 0x18] }
	__asm { push 0x80 }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_006c3df1 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_006c3df1: }
	__asm { lea eax, [ecx + 0x80] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x1c], ecx }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { lea eax, [esi + 0x28] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_006c53e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" void fn_004955ca();
// FUNCTION: ROBLOXSTUDIO 0x006c48f0
extern "C" __declspec(naked) void asm_006c48f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd16e48 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 0x44] }
	__asm { sub eax, dword ptr [ebx + 0x40] }
	__asm { push edi }
	__asm { test eax, 0xfffffff8 }
	__asm { jne L_006c4930 }
	__asm { xor al, al }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c4930: }
	__asm { lea esi, [ebx + 0x28] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [ebx + 0x44] }
	__asm { mov edi, dword ptr [ebx + 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { cmp edi, eax }
	__asm { je L_006c4969 }
	__asm { mov esi, eax }
	__asm { L_006c4953: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push ebx }
	__asm { call fn_004955ca }
	__asm { test al, al }
	__asm { jne L_006c4966 }
	__asm { add edi, 8 }
	__asm { cmp edi, esi }
	__asm { jne L_006c4953 }
	__asm { L_006c4966: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_006c4969: }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { cmp edi, dword ptr [ebp - 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { setne al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006c54a0();
extern "C" void fn_006c5500();
// FUNCTION: ROBLOXSTUDIO 0x006c51f0
extern "C" __declspec(naked) void asm_006c51f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_006c54a0 }
	__asm { fldz }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { fst qword ptr [ebp - 0x28] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { fstp qword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { lea eax, [esi + 0x98] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { mov dword ptr [ebp - 0x30], edx }
	__asm { call fn_006c5500 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x28], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0xa8] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [esi + 0xac] }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { fld qword ptr [eax] }
	__asm { fadd qword ptr [ebp - 8] }
	__asm { fstp qword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [esi + 0xc8], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xcc], eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x006c5360
extern "C" __declspec(naked) void asm_006c5360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea esi, [ebx + 8] }
	__asm { push esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [ebx + 0x20] }
	__asm { mov ecx, dword ptr [ebx + 0x24] }
	__asm { sub ecx, eax }
	__asm { sar ecx, 2 }
	__asm { xor edi, edi }
	__asm { test ecx, ecx }
	__asm { je L_006c53cc }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { L_006c5386: }
	__asm { cmp dword ptr [eax], edx }
	__asm { je L_006c53a0 }
	__asm { inc edi }
	__asm { add eax, 4 }
	__asm { cmp edi, ecx }
	__asm { jb L_006c5386 }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006c53a0: }
	__asm { mov eax, dword ptr [ebx + 0x20] }
	__asm { mov edx, dword ptr [ebx + 0x24] }
	__asm { lea eax, [eax + edi*4] }
	__asm { lea ecx, [eax + 4] }
	__asm { sub edx, ecx }
	__asm { and edx, 0xfffffffc }
	__asm { push edx }
	__asm { push ecx }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { add dword ptr [ebx + 0x24], -4 }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { add esp, 0xc }
	__asm { cmp eax, edi }
	__asm { jbe L_006c53cc }
	__asm { dec eax }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { L_006c53cc: }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1005c[];
extern "C" char g_00e100e4[];
extern "C" char g_00e10528[];
extern "C" char g_00e1310c[];
extern "C" char g_00e13110[];
extern "C" char g_00e13114[];
extern "C" char g_00e13118[];
extern "C" char g_010381d0[];
extern "C" char g_012df32c[];
extern "C" char g_012df330[];
extern "C" char g_012df334[];
extern "C" char g_012df358[];
extern "C" char g_012df360[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006c5930
extern "C" __declspec(naked) void asm_006c5930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 8 }
	__asm { push eax }
	__asm { call dword ptr [g_00e13118] }
	__asm { test eax, eax }
	__asm { jne L_006c59f6 }
	__asm { cmp dword ptr [ebp - 0x10], 1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { lea edx, [ebp - 4] }
	__asm { cmovae edx, eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { cmp eax, dword ptr [edx] }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { cmovae ecx, edx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { fild dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { jns L_006c5978 }
	__asm { fadd qword ptr [g_010381d0] }
	__asm { L_006c5978: }
	__asm { lea ecx, [esi + esi*4] }
	__asm { fstp qword ptr [g_012df358] }
	__asm { add ecx, ecx }
	__asm { xor edx, edx }
	__asm { mov eax, 0x3e8 }
	__asm { div ecx }
	__asm { mov dword ptr [g_012df360], eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1005c] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call dword ptr [g_00e100e4] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [g_012df330], eax }
	__asm { mov dword ptr [g_012df334], ecx }
	__asm { call dword ptr [g_00e1310c] }
	__asm { push esi }
	__asm { mov dword ptr [g_012df32c], eax }
	__asm { call dword ptr [g_00e13110] }
	__asm { cmp dword ptr [g_012df360], 2 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { mov ecx, 0x6c5740 }
	__asm { mov eax, 0x6c55f0 }
	__asm { cmovge eax, ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { push esi }
	__asm { call dword ptr [g_00e13114] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_006c5a1f }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c59f6: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xe458ec }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x1c], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_006c5a1f: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xe45904 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x1c], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10208[];
extern "C" void fn_006b58d0();
// FUNCTION: ROBLOXSTUDIO 0x006c5a50
extern "C" __declspec(naked) void asm_006c5a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jb L_006c5a6a }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_006c5a6c }
	__asm { L_006c5a6a: }
	__asm { mov eax, esi }
	__asm { L_006c5a6c: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0xfde9 }
	__asm { call dword ptr [g_00e10208] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { mov dword ptr [edi + 0x14], 7 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov word ptr [edi], cx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_006b58d0 }
	__asm { cmp dword ptr [edi + 0x14], 8 }
	__asm { jb L_006c5aad }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_006c5aaf }
	__asm { L_006c5aad: }
	__asm { mov eax, edi }
	__asm { L_006c5aaf: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { jb L_006c5aba }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_006c5aba: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0xfde9 }
	__asm { call dword ptr [g_00e10208] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101cc[];
extern "C" void fn_0042e290();
// FUNCTION: ROBLOXSTUDIO 0x006c5ae0
extern "C" __declspec(naked) void asm_006c5ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jb L_006c5afa }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_006c5afc }
	__asm { L_006c5afa: }
	__asm { mov eax, esi }
	__asm { L_006c5afc: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0xfde9 }
	__asm { call dword ptr [g_00e101cc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_0042e290 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_006c5b40 }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_006c5b42 }
	__asm { L_006c5b40: }
	__asm { mov eax, edi }
	__asm { L_006c5b42: }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { jb L_006c5b4d }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_006c5b4d: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0xfde9 }
	__asm { call dword ptr [g_00e101cc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006c5bf0
extern "C" __declspec(naked) void asm_006c5bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jg L_006c5bfe }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c5bfe: }
	__asm { cmp ecx, 0x1e }
	__asm { jg L_006c5c07 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c5c07: }
	__asm { cmp ecx, 0x28 }
	__asm { jge L_006c5c13 }
	__asm { mov eax, 0x1f }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c5c13: }
	__asm { cmp ecx, 0x32 }
	__asm { jge L_006c5c1f }
	__asm { mov eax, 0x20 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c5c1f: }
	__asm { cmp ecx, 0x3c }
	__asm { jge L_006c5c2b }
	__asm { mov eax, 0x21 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c5c2b: }
	__asm { cmp ecx, 0x50 }
	__asm { jge L_006c5c37 }
	__asm { mov eax, 0x22 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c5c37: }
	__asm { cmp ecx, 0x64 }
	__asm { jge L_006c5c43 }
	__asm { mov eax, 0x23 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c5c43: }
	__asm { cmp ecx, 0x78 }
	__asm { jge L_006c5c4f }
	__asm { mov eax, 0x24 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c5c4f: }
	__asm { xor eax, eax }
	__asm { cmp ecx, 0x78 }
	__asm { setne al }
	__asm { add eax, 0x25 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038228[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006c5bf0();
// FUNCTION: ROBLOXSTUDIO 0x006c5ca0
extern "C" __declspec(naked) void asm_006c5ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_006c5cb2 }
	__asm { fld qword ptr [g_01038228] }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c5cb2: }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_006c5bf0 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, eax }
	__asm { je L_006c5d44 }
	__asm { cmp edi, 4 }
	__asm { jl L_006c5d03 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006c5cee }
	__asm { push 0x61 }
	__asm { push 0xe45ef0 }
	__asm { push 0xe45f2c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006c5d03 }
	__asm { L_006c5cee: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe45f38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006c5d03: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006c5d44 }
	__asm { cmp esi, 0x25 }
	__asm { jb L_006c5d44 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006c5d2f }
	__asm { push 0x62 }
	__asm { push 0xe45ef0 }
	__asm { push 0xe45f8c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006c5d44 }
	__asm { L_006c5d2f: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe45fa8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006c5d44: }
	__asm { lea eax, [edi + esi*4] }
	__asm { add eax, esi }
	__asm { pop edi }
	__asm { fld qword ptr [eax*8 + 0xe45930] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e13020[];
extern "C" void fn_004038a0();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x006c5d60
extern "C" __declspec(naked) void asm_006c5d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1ac }
	__asm { push esi }
	__asm { push 0x1a8 }
	__asm { lea eax, [ebp - 0x1ac] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf6804 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x1ac] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x1ac], 0x1a8 }
	__asm { call dword ptr [g_00e13020] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [ebp - 0x188], 0 }
	__asm { jne L_006c5dd9 }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x188] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c5dd9: }
	__asm { lea ecx, [ebp - 0x188] }
	__asm { lea edx, [ecx + 1] }
	__asm { L_006c5de2: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_006c5de2 }
	__asm { sub ecx, edx }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x188] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_006ceec0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006cf030
extern "C" __declspec(naked) void asm_006cf030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16fd0 }
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
	__asm { je L_006cf086 }
	__asm { cmp ebx, 0x1fffffff }
	__asm { ja L_006cf080 }
	__asm { lea eax, [ebx*8] }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_006cf086 }
	__asm { L_006cf080: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_006cf086: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi] }
	__asm { call fn_006ceec0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test ecx, ecx }
	__asm { je L_006cf0be }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006cf0be: }
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
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e102c4[];
extern "C" char g_00e102dc[];
extern "C" char g_00e10318[];
extern "C" char g_00e1031c[];
extern "C" char g_00e10394[];
extern "C" char g_00e103a8[];
extern "C" char g_00e103b4[];
extern "C" char g_00e103b8[];
extern "C" char g_00e103dc[];
extern "C" void fn_00426140();
extern "C" void fn_004276b0();
extern "C" void fn_00532500();
// FUNCTION: ROBLOXSTUDIO 0x006cf400
extern "C" __declspec(naked) void asm_006cf400()
{
	__asm { push -1 }
	__asm { push 0xd17023 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xa0 }
	__asm { mov dword ptr [esp + 4], 0 }
	__asm { mov eax, dword ptr [g_00e103b8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 0xc], 0x102c20c }
	__asm { mov dword ptr [esp + 0x5c], eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0xb8], 0 }
	__asm { mov dword ptr [esp + 0x14], 2 }
	__asm { call dword ptr [g_00e10394] }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [esp + 0xac], 1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [esp + eax + 0xc], 0xe3b85c }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x50] }
	__asm { mov dword ptr [esp + ecx + 8], eax }
	__asm { lea ecx, [esp + 0x10] }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [esp + 0x10], 0xe1827c }
	__asm { mov dword ptr [esp + 0x48], 0 }
	__asm { mov dword ptr [esp + 0x4c], 4 }
	__asm { fld dword ptr [esi + 0x28] }
	__asm { push 0x100bc14 }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { lea eax, [esp + 0x14] }
	__asm { push 0xe4635c }
	__asm { push ecx }
	__asm { mov dword ptr [esp + 0xbc], 3 }
	__asm { fstp dword ptr [esp] }
	__asm { push 0xe46360 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e103dc] }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e102c4] }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { mov esi, dword ptr [esp + 0xbc] }
	__asm { add esp, 8 }
	__asm { lea ecx, [esp + 0xc] }
	__asm { push esi }
	__asm { call fn_00532500 }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [esp + 0xac], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [esp + eax + 0xc], 0xe3b85c }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x50] }
	__asm { mov dword ptr [esp + ecx + 8], eax }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x10], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [esp + 0x14] }
	__asm { call dword ptr [g_00e102dc] }
	__asm { mov ecx, dword ptr [g_00e103b4] }
	__asm { lea eax, [esp + 0x5c] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x60], ecx }
	__asm { call dword ptr [g_00e103a8] }
	__asm { mov ecx, dword ptr [esp + 0xa8] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0xac }
	__asm { ret 4 }
}

extern "C" void fn_005dbcf0();
// FUNCTION: ROBLOXSTUDIO 0x006cf6a0
extern "C" __declspec(naked) void asm_006cf6a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { cmp edi, ecx }
	__asm { jae L_006cf6fd }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_006cf6fd }
	__asm { sub edi, eax }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edi }
	__asm { sar edx, 1 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_006cf6d5 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_005dbcf0 }
	__asm { L_006cf6d5: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi + edi*2] }
	__asm { lea edx, [eax + ecx*4] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_006cf722 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { add dword ptr [esi + 4], 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_006cf6fd: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_006cf70b }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_005dbcf0 }
	__asm { L_006cf70b: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_006cf722 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { L_006cf722: }
	__asm { add dword ptr [esi + 4], 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e10534[];
extern "C" char g_00e1055c[];
extern "C" char g_00e10560[];
extern "C" char g_00e10644[];
extern "C" char g_00e10648[];
extern "C" char g_012dfa78[];
extern "C" void fn_00403540();
extern "C" void fn_0070b590();
extern "C" void fn_0070cb10();
// FUNCTION: ROBLOXSTUDIO 0x006d7970
extern "C" __declspec(naked) void asm_006d7970()
{
	__asm { push -1 }
	__asm { push 0xd1713d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esp + 8], edi }
	__asm { lea ecx, [edi + 8] }
	__asm { mov dword ptr [edi], 0xe46634 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { cmp ecx, esi }
	__asm { je L_006d79cb }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00403540 }
	__asm { L_006d79cb: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_006d79d3 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_006d79d3: }
	__asm { push 0xe46638 }
	__asm { push esi }
	__asm { call fn_0070b590 }
	__asm { mov ecx, eax }
	__asm { call fn_0070cb10 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { test eax, eax }
	__asm { je L_006d7a39 }
	__asm { push 0x800 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10560] }
	__asm { mov esi, dword ptr [g_00e10644] }
	__asm { push 0xe4663c }
	__asm { push dword ptr [edi + 4] }
	__asm { call esi }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10534] }
	__asm { lea eax, [esp + 0x24] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10648] }
	__asm { push eax }
	__asm { push 0xe46650 }
	__asm { push dword ptr [edi + 4] }
	__asm { call esi }
	__asm { push dword ptr [edi + 4] }
	__asm { call dword ptr [g_00e1055c] }
	__asm { add esp, 0x30 }
	__asm { L_006d7a39: }
	__asm { mov eax, dword ptr [g_012dfa78] }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { test eax, eax }
	__asm { cmove eax, edi }
	__asm { mov dword ptr [g_012dfa78], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x14 }
	__asm { ret 8 }
}

extern "C" char g_00e10550[];
extern "C" char g_00e1055c[];
extern "C" char g_00e10644[];
extern "C" char g_012dfa78[];
extern "C" void fn_004038a0();
extern "C" void fn_006d78b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006d7a60
extern "C" __declspec(naked) void asm_006d7a60()
{
	__asm { push -1 }
	__asm { push 0xd1715a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esp + 8], esi }
	__asm { mov dword ptr [esi], 0xe46634 }
	__asm { push 8 }
	__asm { push 0xe4665c }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { mov dword ptr [esp + 0x28], 0xf }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [g_00e10644] }
	__asm { test eax, eax }
	__asm { je L_006d7ae4 }
	__asm { push 0xe46684 }
	__asm { push eax }
	__asm { call edi }
	__asm { cmp dword ptr [esp + 0x28], 0x10 }
	__asm { lea eax, [esp + 0x14] }
	__asm { cmovae eax, dword ptr [esp + 0x14] }
	__asm { push eax }
	__asm { push 0xe466bc }
	__asm { push dword ptr [esi + 4] }
	__asm { call edi }
	__asm { add esp, 0x14 }
	__asm { L_006d7ae4: }
	__asm { cmp dword ptr [esp + 0x20], 0x10 }
	__asm { jb L_006d7af7 }
	__asm { push dword ptr [esp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006d7af7: }
	__asm { push 0x10 }
	__asm { push 0xe46668 }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov dword ptr [esp + 0x28], 0xf }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_004038a0 }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { mov byte ptr [esp + 0x2c], 1 }
	__asm { je L_006d7b53 }
	__asm { mov ecx, esi }
	__asm { call fn_006d78b0 }
	__asm { cmp dword ptr [esp + 0x20], 0x10 }
	__asm { lea eax, [esp + 0xc] }
	__asm { cmovae eax, dword ptr [esp + 0xc] }
	__asm { push eax }
	__asm { push 0xe466d4 }
	__asm { push dword ptr [esi + 4] }
	__asm { call edi }
	__asm { push dword ptr [esi + 4] }
	__asm { call dword ptr [g_00e1055c] }
	__asm { add esp, 0x10 }
	__asm { L_006d7b53: }
	__asm { cmp dword ptr [esp + 0x20], 0x10 }
	__asm { jb L_006d7b66 }
	__asm { push dword ptr [esp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006d7b66: }
	__asm { mov eax, dword ptr [g_012dfa78] }
	__asm { xor ecx, ecx }
	__asm { cmp eax, esi }
	__asm { cmove eax, ecx }
	__asm { mov dword ptr [g_012dfa78], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_006d7b88 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10550] }
	__asm { add esp, 4 }
	__asm { L_006d7b88: }
	__asm { cmp dword ptr [esi + 0x1c], 0x10 }
	__asm { jb L_006d7b99 }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006d7b99: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [esi + 0x1c], 0xf }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x28 }
	__asm { ret }
}

extern "C" char g_012dfa78[];
extern "C" void fn_004039a0();
extern "C" void fn_006d7970();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006d7d00
extern "C" __declspec(naked) void asm_006d7d00()
{
	__asm { push -1 }
	__asm { push 0xd1719a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [esp + 4], ebx }
	__asm { mov eax, dword ptr [g_012dfa78] }
	__asm { test eax, eax }
	__asm { jne L_006d7d92 }
	__asm { push esi }
	__asm { push 0x24 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0xc], esi }
	__asm { mov dword ptr [esp + 0x30], ebx }
	__asm { test esi, esi }
	__asm { je L_006d7d6d }
	__asm { push 0xe4667c }
	__asm { lea ecx, [esp + 0x14] }
	__asm { call fn_004039a0 }
	__asm { push 0 }
	__asm { lea eax, [esp + 0x14] }
	__asm { mov ebx, 1 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esp + 0x38], 1 }
	__asm { mov dword ptr [esp + 0x10], ebx }
	__asm { call fn_006d7970 }
	__asm { jmp L_006d7d6f }
	__asm { L_006d7d6d: }
	__asm { xor eax, eax }
	__asm { L_006d7d6f: }
	__asm { mov dword ptr [g_012dfa78], eax }
	__asm { pop esi }
	__asm { test bl, 1 }
	__asm { je L_006d7d92 }
	__asm { cmp dword ptr [esp + 0x20], 0x10 }
	__asm { jb L_006d7d92 }
	__asm { push dword ptr [esp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [g_012dfa78] }
	__asm { add esp, 4 }
	__asm { L_006d7d92: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x2c }
	__asm { ret }
}

extern "C" char g_00e100b8[];
extern "C" void fn_00403540();
extern "C" void fn_004278c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006d88c0
extern "C" __declspec(naked) void asm_006d88c0()
{
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x2c] }
	__asm { mov dword ptr [esp + 8], 0 }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { cmp eax, 0x400 }
	__asm { jae L_006d88f7 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_006d88ec }
	__asm { mov eax, dword ptr [edi] }
	__asm { push eax }
	__asm { call dword ptr [g_00e100b8] }
	__asm { jmp L_006d8946 }
	__asm { L_006d88ec: }
	__asm { mov eax, edi }
	__asm { push eax }
	__asm { call dword ptr [g_00e100b8] }
	__asm { jmp L_006d8946 }
	__asm { L_006d88f7: }
	__asm { xor esi, esi }
	__asm { test eax, eax }
	__asm { je L_006d8946 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e100b8] }
	__asm { L_006d8904: }
	__asm { push 0x400 }
	__asm { push esi }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004278c0 }
	__asm { cmp dword ptr [esp + 0x24], 0x10 }
	__asm { lea eax, [esp + 0x10] }
	__asm { cmovae eax, dword ptr [esp + 0x10] }
	__asm { push eax }
	__asm { call ebx }
	__asm { cmp dword ptr [esp + 0x24], 0x10 }
	__asm { jb L_006d893a }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006d893a: }
	__asm { add esi, 0x400 }
	__asm { cmp esi, dword ptr [edi + 0x10] }
	__asm { jb L_006d8904 }
	__asm { pop ebx }
	__asm { L_006d8946: }
	__asm { mov esi, dword ptr [esp + 0x28] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { add esp, 0x1c }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_006dfdf0();
extern "C" void fn_00704720();
extern "C" void fn_00704f70();
extern "C" void fn_007058c0();
extern "C" void fn_00706700();
extern "C" void fn_00706b80();
extern "C" void fn_00706e00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006dd290
extern "C" __declspec(naked) void asm_006dd290()
{
	__asm { push -1 }
	__asm { push 0xd17408 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 7 }
	__asm { mov edi, ecx }
	__asm { push 0x1032f54 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x24], 0xf }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { mov byte ptr [esp + 0x10], 0 }
	__asm { call fn_004038a0 }
	__asm { mov esi, dword ptr [esp + 0x30] }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { call fn_00706700 }
	__asm { cmp dword ptr [esp + 0x1c], 0x10 }
	__asm { mov dword ptr [esp + 0x28], 0xffffffff }
	__asm { jb L_006dd304 }
	__asm { push dword ptr [esp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006dd304: }
	__asm { push 4 }
	__asm { push 5 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x24], 0xf }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { mov byte ptr [esp + 0x10], 0 }
	__asm { call fn_00706b80 }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { call fn_00706e00 }
	__asm { mov ecx, esi }
	__asm { call fn_00704720 }
	__asm { mov ecx, esi }
	__asm { cmp eax, 4 }
	__asm { jne L_006dd369 }
	__asm { push 0 }
	__asm { call fn_00704f70 }
	__asm { mov ecx, eax }
	__asm { call fn_007058c0 }
	__asm { fstp dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00704f70 }
	__asm { mov ecx, eax }
	__asm { call fn_007058c0 }
	__asm { fstp dword ptr [edi + 4] }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { call fn_00704f70 }
	__asm { jmp L_006dd39e }
	__asm { L_006dd369: }
	__asm { push 0xe46a08 }
	__asm { call fn_006dfdf0 }
	__asm { mov ecx, eax }
	__asm { call fn_007058c0 }
	__asm { fstp dword ptr [edi] }
	__asm { push 0xe46a0c }
	__asm { mov ecx, esi }
	__asm { call fn_006dfdf0 }
	__asm { mov ecx, eax }
	__asm { call fn_007058c0 }
	__asm { fstp dword ptr [edi + 4] }
	__asm { push 0xe46a10 }
	__asm { mov ecx, esi }
	__asm { call fn_006dfdf0 }
	__asm { L_006dd39e: }
	__asm { mov ecx, eax }
	__asm { call fn_007058c0 }
	__asm { fstp dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x24 }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_006dfdf0();
extern "C" void fn_00704720();
extern "C" void fn_00704f70();
extern "C" void fn_007058c0();
extern "C" void fn_00706700();
extern "C" void fn_00706b80();
extern "C" void fn_00706e00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006e2fb0
extern "C" __declspec(naked) void asm_006e2fb0()
{
	__asm { push -1 }
	__asm { push 0xd17638 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 7 }
	__asm { mov edi, ecx }
	__asm { push 0xe46b9c }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x24], 0xf }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { mov byte ptr [esp + 0x10], 0 }
	__asm { call fn_004038a0 }
	__asm { mov esi, dword ptr [esp + 0x30] }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { call fn_00706700 }
	__asm { cmp dword ptr [esp + 0x1c], 0x10 }
	__asm { mov dword ptr [esp + 0x28], 0xffffffff }
	__asm { jb L_006e3024 }
	__asm { push dword ptr [esp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006e3024: }
	__asm { push 4 }
	__asm { push 5 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x24], 0xf }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { mov byte ptr [esp + 0x10], 0 }
	__asm { call fn_00706b80 }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00706e00 }
	__asm { mov ecx, esi }
	__asm { call fn_00704720 }
	__asm { mov ecx, esi }
	__asm { cmp eax, 4 }
	__asm { jne L_006e309c }
	__asm { push 0 }
	__asm { call fn_00704f70 }
	__asm { mov ecx, eax }
	__asm { call fn_007058c0 }
	__asm { fstp dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00704f70 }
	__asm { mov ecx, eax }
	__asm { call fn_007058c0 }
	__asm { fstp dword ptr [edi + 4] }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { call fn_00704f70 }
	__asm { mov ecx, eax }
	__asm { call fn_007058c0 }
	__asm { fstp dword ptr [edi + 8] }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { call fn_00704f70 }
	__asm { jmp L_006e30e7 }
	__asm { L_006e309c: }
	__asm { push 0xe46a08 }
	__asm { call fn_006dfdf0 }
	__asm { mov ecx, eax }
	__asm { call fn_007058c0 }
	__asm { fstp dword ptr [edi] }
	__asm { push 0xe46a0c }
	__asm { mov ecx, esi }
	__asm { call fn_006dfdf0 }
	__asm { mov ecx, eax }
	__asm { call fn_007058c0 }
	__asm { fstp dword ptr [edi + 4] }
	__asm { push 0xe46a10 }
	__asm { mov ecx, esi }
	__asm { call fn_006dfdf0 }
	__asm { mov ecx, eax }
	__asm { call fn_007058c0 }
	__asm { fstp dword ptr [edi + 8] }
	__asm { push 0xe46638 }
	__asm { mov ecx, esi }
	__asm { call fn_006dfdf0 }
	__asm { L_006e30e7: }
	__asm { mov ecx, eax }
	__asm { call fn_007058c0 }
	__asm { fstp dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x24 }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_00703ce0();
extern "C" void fn_00703fc0();
extern "C" void fn_00704100();
extern "C" void fn_007050e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006e3110
extern "C" __declspec(naked) void asm_006e3110()
{
	__asm { push -1 }
	__asm { push 0xd17692 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xdc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [esp + 8], 0 }
	__asm { push 7 }
	__asm { mov edi, ecx }
	__asm { push 0xe46b9c }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov dword ptr [esp + 0xf4], 0 }
	__asm { mov dword ptr [esp + 0x28], 0xf }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_004038a0 }
	__asm { mov esi, dword ptr [esp + 0xf4] }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0xf4], 1 }
	__asm { call fn_00703fc0 }
	__asm { cmp dword ptr [esp + 0x20], 0x10 }
	__asm { mov dword ptr [esp + 8], 1 }
	__asm { mov byte ptr [esp + 0xec], 0 }
	__asm { jb L_006e31aa }
	__asm { push dword ptr [esp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006e31aa: }
	__asm { fld dword ptr [edi + 0xc] }
	__asm { sub esp, 8 }
	__asm { lea ecx, [esp + 0xbc] }
	__asm { fstp qword ptr [esp] }
	__asm { mov dword ptr [esp + 0x28], 0xf }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_00703ce0 }
	__asm { fld dword ptr [edi + 8] }
	__asm { sub esp, 8 }
	__asm { lea ecx, [esp + 0x5c] }
	__asm { fstp qword ptr [esp] }
	__asm { mov dword ptr [esp + 0xf4], 2 }
	__asm { call fn_00703ce0 }
	__asm { fld dword ptr [edi + 4] }
	__asm { sub esp, 8 }
	__asm { lea ecx, [esp + 0x8c] }
	__asm { fstp qword ptr [esp] }
	__asm { mov byte ptr [esp + 0xf4], 3 }
	__asm { call fn_00703ce0 }
	__asm { fld dword ptr [edi] }
	__asm { sub esp, 8 }
	__asm { lea ecx, [esp + 0x2c] }
	__asm { fstp qword ptr [esp] }
	__asm { mov byte ptr [esp + 0xf4], 4 }
	__asm { call fn_00703ce0 }
	__asm { lea eax, [esp + 0xb4] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x58] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x8c] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x30] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esp + 0xfc], 5 }
	__asm { call fn_007050e0 }
	__asm { lea ecx, [esp + 0x24] }
	__asm { mov byte ptr [esp + 0xec], 4 }
	__asm { call fn_00704100 }
	__asm { lea ecx, [esp + 0x84] }
	__asm { mov byte ptr [esp + 0xec], 3 }
	__asm { call fn_00704100 }
	__asm { lea ecx, [esp + 0x54] }
	__asm { mov byte ptr [esp + 0xec], 2 }
	__asm { call fn_00704100 }
	__asm { lea ecx, [esp + 0xb4] }
	__asm { mov byte ptr [esp + 0xec], 0 }
	__asm { call fn_00704100 }
	__asm { mov ecx, dword ptr [esp + 0xe4] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0xe8 }
	__asm { ret 4 }
}

extern "C" char g_00e10550[];
extern "C" char g_00e10654[];
extern "C" char g_00e10658[];
extern "C" char g_00e1065c[];
extern "C" void fn_006f1750();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006e88f0
extern "C" __declspec(naked) void asm_006e88f0()
{
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { mov ebx, dword ptr [esi + 0x38] }
	__asm { add ebx, dword ptr [esi + 0x58] }
	__asm { mov ebp, dword ptr [esi + 0x3c] }
	__asm { adc ebp, dword ptr [esi + 0x5c] }
	__asm { cmp dword ptr [esi + 0x4c], ecx }
	__asm { push edi }
	__asm { lea edi, [esi + 0x48] }
	__asm { jg L_006e8934 }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { jl L_006e8918 }
	__asm { cmp dword ptr [edi], eax }
	__asm { jae L_006e8934 }
	__asm { L_006e8918: }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x50] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { call fn_006f1750 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { test eax, eax }
	__asm { je L_006e89c0 }
	__asm { L_006e8934: }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { cmp dword ptr [esi + 0x20], 0x10 }
	__asm { lea eax, [esi + 0xc] }
	__asm { jb L_006e894d }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006e894d: }
	__asm { push 0xe46c4c }
	__asm { push eax }
	__asm { call dword ptr [g_00e10654] }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x38] }
	__asm { mov dword ptr [esp + 0x2c], eax }
	__asm { push eax }
	__asm { call dword ptr [g_00e1065c] }
	__asm { mov edx, dword ptr [esi + 0x40] }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { add esp, 0x14 }
	__asm { sub edx, dword ptr [esi + 0x38] }
	__asm { sbb ecx, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [esp + 0x14], edx }
	__asm { mov dword ptr [esp + 0x18], ecx }
	__asm { cmp ecx, dword ptr [edi + 4] }
	__asm { jg L_006e898f }
	__asm { jl L_006e898b }
	__asm { cmp edx, dword ptr [edi] }
	__asm { jae L_006e898f }
	__asm { L_006e898b: }
	__asm { lea edi, [esp + 0x14] }
	__asm { L_006e898f: }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { push dword ptr [edi] }
	__asm { push 1 }
	__asm { push dword ptr [esi + 0x50] }
	__asm { call dword ptr [g_00e10658] }
	__asm { push dword ptr [esp + 0x2c] }
	__asm { call dword ptr [g_00e10550] }
	__asm { add esp, 0x14 }
	__asm { sub ebx, dword ptr [esi + 0x38] }
	__asm { pop edi }
	__asm { sbb ebp, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [esi + 0x58], ebx }
	__asm { mov dword ptr [esi + 0x5c], ebp }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { ret 0x10 }
	__asm { L_006e89c0: }
	__asm { push 0x10ffe10 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x24], 0xe46c08 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006e88f0();
// FUNCTION: ROBLOXSTUDIO 0x006e9150
extern "C" __declspec(naked) void asm_006e9150()
{
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 0x58] }
	__asm { mov eax, dword ptr [esi + 0x5c] }
	__asm { mov ecx, edx }
	__asm { add ecx, 8 }
	__asm { adc eax, 0 }
	__asm { cmp eax, dword ptr [esi + 0x4c] }
	__asm { jl L_006e9188 }
	__asm { jg L_006e9170 }
	__asm { cmp ecx, dword ptr [esi + 0x48] }
	__asm { jbe L_006e9188 }
	__asm { L_006e9170: }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { add ecx, edx }
	__asm { adc eax, dword ptr [esi + 0x5c] }
	__asm { push 0 }
	__asm { push 8 }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_006e88f0 }
	__asm { L_006e9188: }
	__asm { cmp byte ptr [esi + 0x24], 0 }
	__asm { je L_006e91e8 }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { add ecx, dword ptr [esi + 0x58] }
	__asm { movzx eax, byte ptr [ecx + 7] }
	__asm { mov byte ptr [esp + 4], al }
	__asm { movzx eax, byte ptr [ecx + 6] }
	__asm { mov byte ptr [esp + 5], al }
	__asm { movzx eax, byte ptr [ecx + 5] }
	__asm { mov byte ptr [esp + 6], al }
	__asm { movzx eax, byte ptr [ecx + 4] }
	__asm { mov byte ptr [esp + 7], al }
	__asm { movzx eax, byte ptr [ecx + 3] }
	__asm { mov byte ptr [esp + 8], al }
	__asm { movzx eax, byte ptr [ecx + 2] }
	__asm { mov byte ptr [esp + 9], al }
	__asm { movzx eax, byte ptr [ecx + 1] }
	__asm { mov byte ptr [esp + 0xa], al }
	__asm { movzx eax, byte ptr [ecx] }
	__asm { add dword ptr [esi + 0x58], 8 }
	__asm { mov byte ptr [esp + 0xb], al }
	__asm { mov edx, dword ptr [esp + 8] }
	__asm { adc dword ptr [esi + 0x5c], 0 }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { pop esi }
	__asm { add esp, 8 }
	__asm { ret }
	__asm { L_006e91e8: }
	__asm { mov ecx, dword ptr [esi + 0x58] }
	__asm { mov edx, dword ptr [esi + 0x50] }
	__asm { mov eax, dword ptr [edx + ecx] }
	__asm { mov edx, dword ptr [edx + ecx + 4] }
	__asm { add dword ptr [esi + 0x58], 8 }
	__asm { adc dword ptr [esi + 0x5c], 0 }
	__asm { pop esi }
	__asm { add esp, 8 }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_006e88f0();
extern "C" void fn_006f1600();
extern "C" void fn_006f1800();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x006e9270
extern "C" __declspec(naked) void asm_006e9270()
{
	__asm { push -1 }
	__asm { push 0xd177fb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x20] }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0x20] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 0xc], 0 }
	__asm { mov edx, dword ptr [esi + 0x58] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x5c] }
	__asm { mov ecx, edx }
	__asm { add ecx, ebp }
	__asm { mov eax, edi }
	__asm { adc eax, ebx }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { cmp eax, dword ptr [esi + 0x4c] }
	__asm { jl L_006e92d3 }
	__asm { jg L_006e92be }
	__asm { cmp ecx, dword ptr [esi + 0x48] }
	__asm { jbe L_006e92d3 }
	__asm { L_006e92be: }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { push ebx }
	__asm { add ecx, edx }
	__asm { push ebp }
	__asm { adc eax, edi }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_006e88f0 }
	__asm { L_006e92d3: }
	__asm { lea eax, [ebp + 1] }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { call fn_006f1600 }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { add ecx, dword ptr [esi + 0x58] }
	__asm { push ebp }
	__asm { mov edi, eax }
	__asm { push ecx }
	__asm { push edi }
	__asm { call fn_00cf67fe }
	__asm { mov ebx, dword ptr [esp + 0x38] }
	__asm { mov byte ptr [edi + ebp], 0 }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { add esp, 0x14 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { cmp byte ptr [edi], 0 }
	__asm { jne L_006e9313 }
	__asm { xor ecx, ecx }
	__asm { jmp L_006e9321 }
	__asm { L_006e9313: }
	__asm { mov ecx, edi }
	__asm { lea edx, [ecx + 1] }
	__asm { L_006e9318: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_006e9318 }
	__asm { sub ecx, edx }
	__asm { L_006e9321: }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_004038a0 }
	__asm { push edi }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { mov dword ptr [esp + 0x14], 1 }
	__asm { call fn_006f1800 }
	__asm { mov eax, dword ptr [esp + 0x30] }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { add esp, 4 }
	__asm { add dword ptr [esi + 0x58], ebp }
	__asm { pop edi }
	__asm { adc dword ptr [esi + 0x5c], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret 0xc }
}

extern "C" char g_00e105fc[];
extern "C" char g_011dd418[];
extern "C" void fn_004039a0();
extern "C" void fn_006d8660();
extern "C" void fn_006d86d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006eb520
extern "C" __declspec(naked) void asm_006eb520()
{
	__asm { push -1 }
	__asm { push 0xd19bf9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [esp + 0x14], ebx }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov ebp, dword ptr [edi] }
	__asm { lea esi, [edi + 8] }
	__asm { add eax, eax }
	__asm { push eax }
	__asm { call dword ptr [edx + 4] }
	__asm { mov dword ptr [edi], eax }
	__asm { test eax, eax }
	__asm { jne L_006eb5fd }
	__asm { call fn_006d8660 }
	__asm { cmp dword ptr [g_011dd418], ebx }
	__asm { je L_006eb5af }
	__asm { push 0xe37130 }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { call fn_004039a0 }
	__asm { mov dword ptr [esp + 0x38], ebx }
	__asm { mov ebx, 1 }
	__asm { push ebx }
	__asm { push 0x9e }
	__asm { push 0xe370e8 }
	__asm { lea eax, [esp + 0x24] }
	__asm { push eax }
	__asm { push 0xe37160 }
	__asm { mov dword ptr [esp + 0x28], ebx }
	__asm { call dword ptr [g_011dd418] }
	__asm { add esp, 0x14 }
	__asm { mov byte ptr [esp + 0x13], bl }
	__asm { test al, al }
	__asm { jne L_006eb5b4 }
	__asm { L_006eb5af: }
	__asm { mov byte ptr [esp + 0x13], 0 }
	__asm { L_006eb5b4: }
	__asm { mov dword ptr [esp + 0x38], 0xffffffff }
	__asm { test bl, 1 }
	__asm { je L_006eb5e9 }
	__asm { cmp dword ptr [esp + 0x2c], 0x10 }
	__asm { jb L_006eb5d4 }
	__asm { push dword ptr [esp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006eb5d4: }
	__asm { mov dword ptr [esp + 0x2c], 0xf }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { mov byte ptr [esp + 0x18], 0 }
	__asm { L_006eb5e9: }
	__asm { cmp byte ptr [esp + 0x13], 0 }
	__asm { je L_006eb5f8 }
	__asm { push -1 }
	__asm { call dword ptr [g_00e105fc] }
	__asm { L_006eb5f8: }
	__asm { call fn_006d86d0 }
	__asm { L_006eb5fd: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, dword ptr [esp + 0x40] }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea edx, [esp + 0x40] }
	__asm { cmovl edx, esi }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov edx, ebp }
	__asm { lea esi, [eax + ecx*2] }
	__asm { cmp eax, esi }
	__asm { jae L_006eb62b }
	__asm { L_006eb617: }
	__asm { test eax, eax }
	__asm { je L_006eb621 }
	__asm { mov cx, word ptr [edx] }
	__asm { mov word ptr [eax], cx }
	__asm { L_006eb621: }
	__asm { add eax, 2 }
	__asm { add edx, 2 }
	__asm { cmp eax, esi }
	__asm { jb L_006eb617 }
	__asm { L_006eb62b: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push ebp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [esp + 0x30] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x2c }
	__asm { ret 4 }
}

extern "C" char g_00e105fc[];
extern "C" char g_011dd418[];
extern "C" void fn_004039a0();
extern "C" void fn_006d8660();
extern "C" void fn_006d86d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006eb650
extern "C" __declspec(naked) void asm_006eb650()
{
	__asm { push -1 }
	__asm { push 0xd19bf9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [esp + 0x14], ebx }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov ebp, dword ptr [edi] }
	__asm { lea esi, [edi + 8] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call dword ptr [edx + 4] }
	__asm { mov dword ptr [edi], eax }
	__asm { test eax, eax }
	__asm { jne L_006eb72e }
	__asm { call fn_006d8660 }
	__asm { cmp dword ptr [g_011dd418], ebx }
	__asm { je L_006eb6e0 }
	__asm { push 0xe37130 }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { call fn_004039a0 }
	__asm { mov dword ptr [esp + 0x38], ebx }
	__asm { mov ebx, 1 }
	__asm { push ebx }
	__asm { push 0x9e }
	__asm { push 0xe370e8 }
	__asm { lea eax, [esp + 0x24] }
	__asm { push eax }
	__asm { push 0xe37160 }
	__asm { mov dword ptr [esp + 0x28], ebx }
	__asm { call dword ptr [g_011dd418] }
	__asm { add esp, 0x14 }
	__asm { mov byte ptr [esp + 0x13], bl }
	__asm { test al, al }
	__asm { jne L_006eb6e5 }
	__asm { L_006eb6e0: }
	__asm { mov byte ptr [esp + 0x13], 0 }
	__asm { L_006eb6e5: }
	__asm { mov dword ptr [esp + 0x38], 0xffffffff }
	__asm { test bl, 1 }
	__asm { je L_006eb71a }
	__asm { cmp dword ptr [esp + 0x2c], 0x10 }
	__asm { jb L_006eb705 }
	__asm { push dword ptr [esp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006eb705: }
	__asm { mov dword ptr [esp + 0x2c], 0xf }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { mov byte ptr [esp + 0x18], 0 }
	__asm { L_006eb71a: }
	__asm { cmp byte ptr [esp + 0x13], 0 }
	__asm { je L_006eb729 }
	__asm { push -1 }
	__asm { call dword ptr [g_00e105fc] }
	__asm { L_006eb729: }
	__asm { call fn_006d86d0 }
	__asm { L_006eb72e: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, dword ptr [esp + 0x40] }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea edx, [esp + 0x40] }
	__asm { cmovl edx, esi }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov edx, ebp }
	__asm { lea esi, [eax + ecx*4] }
	__asm { cmp eax, esi }
	__asm { jae L_006eb75a }
	__asm { L_006eb748: }
	__asm { test eax, eax }
	__asm { je L_006eb750 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_006eb750: }
	__asm { add eax, 4 }
	__asm { add edx, 4 }
	__asm { cmp eax, esi }
	__asm { jb L_006eb748 }
	__asm { L_006eb75a: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push ebp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [esp + 0x30] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x2c }
	__asm { ret 4 }
}

extern "C" char g_00e105fc[];
extern "C" char g_011dd418[];
extern "C" void fn_004039a0();
extern "C" void fn_006d8660();
extern "C" void fn_006d86d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006ebab0
extern "C" __declspec(naked) void asm_006ebab0()
{
	__asm { push -1 }
	__asm { push 0xd19bf9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [esp + 0x14], ebx }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov ebp, dword ptr [edi] }
	__asm { lea esi, [edi + 8] }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { call dword ptr [edx + 4] }
	__asm { mov dword ptr [edi], eax }
	__asm { test eax, eax }
	__asm { jne L_006ebb8e }
	__asm { call fn_006d8660 }
	__asm { cmp dword ptr [g_011dd418], ebx }
	__asm { je L_006ebb40 }
	__asm { push 0xe37130 }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { call fn_004039a0 }
	__asm { mov dword ptr [esp + 0x38], ebx }
	__asm { mov ebx, 1 }
	__asm { push ebx }
	__asm { push 0x9e }
	__asm { push 0xe370e8 }
	__asm { lea eax, [esp + 0x24] }
	__asm { push eax }
	__asm { push 0xe37160 }
	__asm { mov dword ptr [esp + 0x28], ebx }
	__asm { call dword ptr [g_011dd418] }
	__asm { add esp, 0x14 }
	__asm { mov byte ptr [esp + 0x13], bl }
	__asm { test al, al }
	__asm { jne L_006ebb45 }
	__asm { L_006ebb40: }
	__asm { mov byte ptr [esp + 0x13], 0 }
	__asm { L_006ebb45: }
	__asm { mov dword ptr [esp + 0x38], 0xffffffff }
	__asm { test bl, 1 }
	__asm { je L_006ebb7a }
	__asm { cmp dword ptr [esp + 0x2c], 0x10 }
	__asm { jb L_006ebb65 }
	__asm { push dword ptr [esp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ebb65: }
	__asm { mov dword ptr [esp + 0x2c], 0xf }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { mov byte ptr [esp + 0x18], 0 }
	__asm { L_006ebb7a: }
	__asm { cmp byte ptr [esp + 0x13], 0 }
	__asm { je L_006ebb89 }
	__asm { push -1 }
	__asm { call dword ptr [g_00e105fc] }
	__asm { L_006ebb89: }
	__asm { call fn_006d86d0 }
	__asm { L_006ebb8e: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, dword ptr [esp + 0x40] }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea edx, [esp + 0x40] }
	__asm { cmovl edx, esi }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov edx, ebp }
	__asm { lea esi, [eax + ecx*8] }
	__asm { cmp eax, esi }
	__asm { jae L_006ebbc0 }
	__asm { L_006ebba8: }
	__asm { test eax, eax }
	__asm { je L_006ebbb6 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { L_006ebbb6: }
	__asm { add eax, 8 }
	__asm { add edx, 8 }
	__asm { cmp eax, esi }
	__asm { jb L_006ebba8 }
	__asm { L_006ebbc0: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push ebp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [esp + 0x30] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x2c }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
extern "C" void fn_006eada0();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x006ec0d0
extern "C" __declspec(naked) void asm_006ec0d0()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { mov ecx, eax }
	__asm { sub ecx, edx }
	__asm { cmp ecx, esi }
	__asm { jbe L_006ec114 }
	__asm { add esi, edx }
	__asm { cmp esi, edx }
	__asm { jne L_006ec0f3 }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { pop ebx }
	__asm { ret 4 }
	__asm { L_006ec0f3: }
	__asm { cmp esi, eax }
	__asm { je L_006ec13e }
	__asm { push edi }
	__asm { mov edi, eax }
	__asm { sub edi, eax }
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
	__asm { ret 4 }
	__asm { L_006ec114: }
	__asm { jae L_006ec13e }
	__asm { sub edx, eax }
	__asm { add edx, esi }
	__asm { push edx }
	__asm { mov ecx, ebx }
	__asm { call fn_006eada0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { sub eax, ecx }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { push 0 }
	__asm { push ecx }
	__asm { call fn_00cf6804 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0xc }
	__asm { add eax, esi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { L_006ec13e: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
extern "C" void fn_00654930();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x006ec150
extern "C" __declspec(naked) void asm_006ec150()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { mov ecx, eax }
	__asm { sub ecx, edx }
	__asm { cmp ecx, esi }
	__asm { jbe L_006ec194 }
	__asm { add esi, edx }
	__asm { cmp esi, edx }
	__asm { jne L_006ec173 }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { pop ebx }
	__asm { ret 4 }
	__asm { L_006ec173: }
	__asm { cmp esi, eax }
	__asm { je L_006ec1be }
	__asm { push edi }
	__asm { mov edi, eax }
	__asm { sub edi, eax }
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
	__asm { ret 4 }
	__asm { L_006ec194: }
	__asm { jae L_006ec1be }
	__asm { sub edx, eax }
	__asm { add edx, esi }
	__asm { push edx }
	__asm { mov ecx, ebx }
	__asm { call fn_00654930 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { sub eax, ecx }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { push 0 }
	__asm { push ecx }
	__asm { call fn_00cf6804 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0xc }
	__asm { add eax, esi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { L_006ec1be: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
extern "C" void fn_006ea820();
// FUNCTION: ROBLOXSTUDIO 0x006ec300
extern "C" __declspec(naked) void asm_006ec300()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx] }
	__asm { mov edx, eax }
	__asm { sub edx, edi }
	__asm { sar edx, 2 }
	__asm { cmp edx, esi }
	__asm { jbe L_006ec353 }
	__asm { lea esi, [edi + esi*4] }
	__asm { cmp esi, edi }
	__asm { jne L_006ec329 }
	__asm { mov dword ptr [ebx + 4], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_006ec329: }
	__asm { cmp esi, eax }
	__asm { je L_006ec367 }
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
	__asm { ret 8 }
	__asm { L_006ec353: }
	__asm { jae L_006ec367 }
	__asm { push dword ptr [esp + 0x14] }
	__asm { sub esi, edx }
	__asm { push esi }
	__asm { push eax }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { call fn_006ea820 }
	__asm { L_006ec367: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
}

extern "C" void fn_006ea6b0();
extern "C" void fn_006eaa40();
extern "C" void fn_006eaff0();
extern "C" void fn_006eb110();
// FUNCTION: ROBLOXSTUDIO 0x006ec550
extern "C" __declspec(naked) void asm_006ec550()
{
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x20] }
	__asm { push ebp }
	__asm { mov ebp, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { cmp ebx, esi }
	__asm { jbe L_006ec5ba }
	__asm { mov edi, dword ptr [ebp] }
	__asm { xor edx, edx }
	__asm { test esi, esi }
	__asm { je L_006ec59a }
	__asm { mov edx, esi }
	__asm { test edx, edx }
	__asm { jns L_006ec58f }
	__asm { mov eax, edx }
	__asm { neg eax }
	__asm { je L_006ec58f }
	__asm { or ecx, 0xffffffff }
	__asm { sub ecx, edx }
	__asm { shr ecx, 5 }
	__asm { shl ecx, 2 }
	__asm { mov eax, 0xfffffffc }
	__asm { sub eax, ecx }
	__asm { add edi, eax }
	__asm { jmp L_006ec597 }
	__asm { L_006ec58f: }
	__asm { mov eax, edx }
	__asm { shr eax, 5 }
	__asm { lea edi, [edi + eax*4] }
	__asm { L_006ec597: }
	__asm { and edx, 0x1f }
	__asm { L_006ec59a: }
	__asm { lea eax, [esp + 0x30] }
	__asm { push eax }
	__asm { sub ebx, esi }
	__asm { push ebx }
	__asm { push edx }
	__asm { push edi }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { mov ecx, ebp }
	__asm { call fn_006eaa40 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x18 }
	__asm { ret 8 }
	__asm { L_006ec5ba: }
	__asm { jae L_006ec5fc }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { call fn_006eaff0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { push ebx }
	__asm { lea eax, [esp + 0x24] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { call fn_006ea6b0 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, ebp }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { call fn_006eb110 }
	__asm { L_006ec5fc: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x18 }
	__asm { ret 8 }
}

extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x006ee8c0
extern "C" __declspec(naked) void asm_006ee8c0()
{
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x28] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x18] }
	__asm { lea eax, [ecx + esi] }
	__asm { cmp dword ptr [edi + 0x10], eax }
	__asm { jl L_006ee975 }
	__asm { mov ebp, dword ptr [esp + 0x30] }
	__asm { mov edx, dword ptr [esp + 0x28] }
	__asm { lea eax, [edx + ebp] }
	__asm { cmp dword ptr [edi + 0x14], eax }
	__asm { jl L_006ee975 }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { mov ebx, dword ptr [esp + 0x14] }
	__asm { add eax, esi }
	__asm { cmp dword ptr [ebx + 0x10], eax }
	__asm { jl L_006ee975 }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { lea eax, [esi + ebp] }
	__asm { cmp dword ptr [ebx + 0x14], eax }
	__asm { jl L_006ee975 }
	__asm { test edx, edx }
	__asm { js L_006ee975 }
	__asm { test ecx, ecx }
	__asm { js L_006ee975 }
	__asm { test esi, esi }
	__asm { js L_006ee975 }
	__asm { cmp dword ptr [esp + 0x1c], 0 }
	__asm { jl L_006ee975 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { cmp eax, dword ptr [ebx + 0xc] }
	__asm { jne L_006ee975 }
	__asm { test ebp, ebp }
	__asm { jle L_006ee96e }
	__asm { sub edx, esi }
	__asm { mov dword ptr [esp + 0x28], edx }
	__asm { L_006ee930: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { imul eax, dword ptr [esp + 0x2c] }
	__asm { push eax }
	__asm { lea eax, [edx + esi] }
	__asm { imul eax, dword ptr [edi + 0x10] }
	__asm { add eax, dword ptr [esp + 0x28] }
	__asm { imul eax, dword ptr [edi + 0xc] }
	__asm { add eax, dword ptr [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { imul eax, esi }
	__asm { add eax, dword ptr [esp + 0x24] }
	__asm { imul eax, dword ptr [ebx + 0xc] }
	__asm { add eax, dword ptr [ebx + 8] }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov edx, dword ptr [esp + 0x34] }
	__asm { add esp, 0xc }
	__asm { inc esi }
	__asm { dec ebp }
	__asm { jne L_006ee930 }
	__asm { L_006ee96e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_006ee975: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006f1470
extern "C" __declspec(naked) void asm_006f1470()
{
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 8], 0 }
	__asm { je L_006f152b }
	__asm { push ebx }
	__asm { mov eax, 1 }
	__asm { mov ecx, 0 }
	__asm { cpuid }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov dword ptr [esp + 0x14], ebx }
	__asm { mov dword ptr [esp + 0xc], ecx }
	__asm { mov dword ptr [esp + 8], edx }
	__asm { mov edx, dword ptr [esp + 8] }
	__asm { mov eax, edx }
	__asm { shr eax, 4 }
	__asm { and al, 1 }
	__asm { mov byte ptr [esi + 9], al }
	__asm { mov eax, edx }
	__asm { shr eax, 0x17 }
	__asm { and al, 1 }
	__asm { mov byte ptr [esi + 0xa], al }
	__asm { mov eax, edx }
	__asm { shr eax, 0x19 }
	__asm { and al, 1 }
	__asm { mov byte ptr [esi + 0xb], al }
	__asm { mov al, byte ptr [esp + 0xc] }
	__asm { shr edx, 0x1a }
	__asm { and dl, 1 }
	__asm { and al, 1 }
	__asm { cmp dword ptr [esi + 0xb8], 0x80000001 }
	__asm { mov byte ptr [esi + 0xc], dl }
	__asm { mov byte ptr [esi + 0xd], al }
	__asm { jb L_006f1520 }
	__asm { mov eax, 0x80000001 }
	__asm { mov ecx, 0 }
	__asm { cpuid }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { mov dword ptr [esp + 0x10], ebx }
	__asm { mov dword ptr [esp + 8], ecx }
	__asm { mov dword ptr [esp + 0xc], edx }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x16 }
	__asm { and al, 1 }
	__asm { mov byte ptr [esi + 0x10], al }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x1f }
	__asm { and al, 1 }
	__asm { shr ecx, 0x1e }
	__asm { and cl, 1 }
	__asm { pop ebx }
	__asm { mov byte ptr [esi + 0xe], al }
	__asm { mov byte ptr [esi + 0xf], cl }
	__asm { pop esi }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_006f1520: }
	__asm { mov word ptr [esi + 0xf], 0 }
	__asm { mov byte ptr [esi + 0xe], 0 }
	__asm { pop ebx }
	__asm { L_006f152b: }
	__asm { pop esi }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" char g_00e100d4[];
extern "C" char g_00e10140[];
extern "C" void fn_006e84d0();
extern "C" void fn_006e85b0();
// FUNCTION: ROBLOXSTUDIO 0x006f5290
extern "C" __declspec(naked) void asm_006f5290()
{
	__asm { push -1 }
	__asm { push 0xd18423 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi], 0xe470fc }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { call fn_006e85b0 }
	__asm { add esp, 4 }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov byte ptr [esp + 0x1c], 1 }
	__asm { cmp ebx, edi }
	__asm { je L_006f5325 }
	__asm { test edi, edi }
	__asm { je L_006f5314 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_006f530d }
	__asm { mov ecx, edi }
	__asm { call fn_006e84d0 }
	__asm { test edi, edi }
	__asm { je L_006f530d }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { L_006f530d: }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_006f5314: }
	__asm { test ebx, ebx }
	__asm { je L_006f5325 }
	__asm { lea eax, [ebx + 4] }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x10], ebx }
	__asm { call dword ptr [g_00e100d4] }
	__asm { L_006f5325: }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { test edi, edi }
	__asm { je L_006f5353 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_006f5353 }
	__asm { mov ecx, edi }
	__asm { call fn_006e84d0 }
	__asm { test edi, edi }
	__asm { je L_006f5353 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { L_006f5353: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x14 }
	__asm { ret }
}

extern "C" void fn_006f5380();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006f55b0
extern "C" __declspec(naked) void asm_006f55b0()
{
	__asm { push -1 }
	__asm { push 0xd1845b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 4], esi }
	__asm { cmp dword ptr [esi + 0x98], 0x10 }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { jb L_006f55ec }
	__asm { push dword ptr [esi + 0x84] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f55ec: }
	__asm { mov dword ptr [esi + 0x98], 0xf }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { mov byte ptr [esi + 0x84], 0 }
	__asm { cmp dword ptr [esi + 0x78], 0x10 }
	__asm { jb L_006f5618 }
	__asm { push dword ptr [esi + 0x64] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f5618: }
	__asm { mov dword ptr [esi + 0x78], 0xf }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov byte ptr [esi + 0x64], 0 }
	__asm { cmp dword ptr [esi + 0x60], 0x10 }
	__asm { jb L_006f563b }
	__asm { push dword ptr [esi + 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f563b: }
	__asm { mov dword ptr [esi + 0x60], 0xf }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { lea ecx, [esi + 0x24] }
	__asm { mov byte ptr [esi + 0x4c], 0 }
	__asm { call fn_006f5380 }
	__asm { cmp dword ptr [esi + 0x20], 0x10 }
	__asm { jb L_006f5666 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f5666: }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov dword ptr [esi + 0x20], 0xf }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov byte ptr [esi + 0xc], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_006f6210();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006f5720
extern "C" __declspec(naked) void asm_006f5720()
{
	__asm { L_006f5720: }
	__asm { push -1 }
	__asm { push 0xd184b4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 4], esi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jge L_006f5792 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea edx, [ecx + ecx*2] }
	__asm { lea ecx, [eax + edx*8] }
	__asm { mov dword ptr [esp + 8], ecx }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { test ecx, ecx }
	__asm { je L_006f577d }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [esp + 0x3c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { L_006f577d: }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x2c }
	__asm { ret 4 }
	__asm { L_006f5792: }
	__asm { mov edx, dword ptr [esi] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x38] }
	__asm { cmp edi, edx }
	__asm { jb L_006f5804 }
	__asm { lea eax, [ecx + ecx*2] }
	__asm { lea eax, [edx + eax*8] }
	__asm { cmp edi, eax }
	__asm { jae L_006f5804 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { mov dword ptr [esp + 0x30], 0xf }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { call fn_00403540 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x34], 1 }
	__asm { call L_006f5720 }
	__asm { cmp dword ptr [esp + 0x24], 0x10 }
	__asm { jb L_006f582d }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x2c }
	__asm { ret 4 }
	__asm { L_006f5804: }
	__asm { lea eax, [ecx + 1] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006f6210 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ecx - 3] }
	__asm { lea ecx, [eax + ecx*8] }
	__asm { cmp ecx, edi }
	__asm { je L_006f582d }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00403540 }
	__asm { L_006f582d: }
	__asm { mov ecx, dword ptr [esp + 0x28] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x2c }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" char g_00e10550[];
extern "C" char g_00e10554[];
extern "C" void fn_00402fd0();
extern "C" void fn_006e0070();
extern "C" void fn_006f1820();
extern "C" void fn_0070b590();
extern "C" void fn_0070cb10();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006f77a0
extern "C" __declspec(naked) void asm_006f77a0()
{
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { push 8 }
	__asm { mov edi, ecx }
	__asm { push 0xe46c50 }
	__asm { push dword ptr [edi + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { je L_006f785c }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0x18] }
	__asm { cmp ebp, dword ptr [edi + 0x38] }
	__asm { jg L_006f788a }
	__asm { mov eax, 0x55555556 }
	__asm { imul dword ptr [edi + 0x34] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [edi + 0x34] }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { sub ebx, 0xa00000 }
	__asm { add eax, edx }
	__asm { cmp ebx, eax }
	__asm { cmovl ebx, dword ptr [edi + 0x34] }
	__asm { cmp dword ptr [edi + 0x44], 0 }
	__asm { mov ecx, 0xe474c8 }
	__asm { mov eax, 0xe474cc }
	__asm { cmovbe ecx, eax }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { push esi }
	__asm { jb L_006f7808 }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_006f780a }
	__asm { L_006f7808: }
	__asm { mov eax, edi }
	__asm { L_006f780a: }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_0070b590 }
	__asm { mov ecx, eax }
	__asm { call fn_0070cb10 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { push ebx }
	__asm { push 1 }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call dword ptr [g_00e10554] }
	__asm { push esi }
	__asm { call dword ptr [g_00e10550] }
	__asm { mov ecx, dword ptr [edi + 0x30] }
	__asm { sub dword ptr [edi + 0x34], ebx }
	__asm { push dword ptr [edi + 0x34] }
	__asm { add dword ptr [edi + 0x44], ebx }
	__asm { sub dword ptr [edi + 0x3c], ebx }
	__asm { lea eax, [ecx + ebx] }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_006f1820 }
	__asm { add esp, 0x20 }
	__asm { mov ecx, edi }
	__asm { push ebp }
	__asm { call fn_006e0070 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { add esp, 0xc }
	__asm { ret 4 }
	__asm { L_006f785c: }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 0x18], 0xe47420 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_006f788a: }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x1c], 0xe47468 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
extern "C" void fn_006f1040();
extern "C" void fn_006f7c70();
// FUNCTION: ROBLOXSTUDIO 0x006f79e0
extern "C" __declspec(naked) void asm_006f79e0()
{
	__asm { push -1 }
	__asm { push 0xd185da }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esp + 8], edi }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x2c], esi }
	__asm { call fn_006f1040 }
	__asm { cmp esi, dword ptr [eax + 0x48] }
	__asm { setne al }
	__asm { mov byte ptr [edi + 0x28], al }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { cmp edi, eax }
	__asm { je L_006f7a4e }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00403540 }
	__asm { L_006f7a4e: }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov byte ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { mov byte ptr [edi + 0x18], 0 }
	__asm { mov byte ptr [edi + 0x48], 1 }
	__asm { call fn_006f7c70 }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov byte ptr [edi + 0x18], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret 8 }
}

extern "C" void fn_006f78c0();
// FUNCTION: ROBLOXSTUDIO 0x006f81a0
extern "C" __declspec(naked) void asm_006f81a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { mov edx, dword ptr [esi + 0x3c] }
	__asm { add edx, 8 }
	__asm { mov eax, ecx }
	__asm { cmp eax, edx }
	__asm { cmovge edx, eax }
	__asm { mov dword ptr [esi + 0x34], edx }
	__asm { cmp edx, dword ptr [esi + 0x38] }
	__asm { jle L_006f81c5 }
	__asm { push ecx }
	__asm { push 8 }
	__asm { mov ecx, esi }
	__asm { call fn_006f78c0 }
	__asm { L_006f81c5: }
	__asm { cmp byte ptr [esi + 0x28], 0 }
	__asm { je L_006f823a }
	__asm { mov edx, dword ptr [esi + 0x3c] }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov al, byte ptr [esp + 0xf] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { mov edx, dword ptr [esi + 0x3c] }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov al, byte ptr [esp + 0xe] }
	__asm { mov byte ptr [edx + ecx + 1], al }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov edx, dword ptr [esp + 0xc] }
	__asm { mov byte ptr [ecx + eax + 2], dh }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov byte ptr [ecx + eax + 3], dl }
	__asm { mov edx, dword ptr [esi + 0x3c] }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov al, byte ptr [esp + 0xb] }
	__asm { mov byte ptr [edx + ecx + 4], al }
	__asm { mov edx, dword ptr [esi + 0x3c] }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov al, byte ptr [esp + 0xa] }
	__asm { mov byte ptr [edx + ecx + 5], al }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov edx, dword ptr [esp + 8] }
	__asm { mov byte ptr [ecx + eax + 6], dh }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov byte ptr [ecx + eax + 7], dl }
	__asm { add dword ptr [esi + 0x3c], 8 }
	__asm { pop esi }
	__asm { ret 8 }
	__asm { L_006f823a: }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { mov edx, dword ptr [esi + 0x30] }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { mov dword ptr [edx + ecx], eax }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [edx + ecx + 4], eax }
	__asm { add dword ptr [esi + 0x3c], 8 }
	__asm { pop esi }
	__asm { ret 8 }
}

extern "C" void fn_006dd1a0();
// FUNCTION: ROBLOXSTUDIO 0x00700190
extern "C" __declspec(naked) void asm_00700190()
{
	__asm { L_00700190: }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jge L_007001c8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea edx, [ecx + ecx*2] }
	__asm { lea edx, [eax + edx*4] }
	__asm { test edx, edx }
	__asm { je L_007001be }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { L_007001be: }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { add esp, 0xc }
	__asm { ret 4 }
	__asm { L_007001c8: }
	__asm { mov edx, dword ptr [esi] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x18] }
	__asm { cmp edi, edx }
	__asm { jb L_00700205 }
	__asm { lea eax, [ecx + ecx*2] }
	__asm { lea eax, [edx + eax*4] }
	__asm { cmp edi, eax }
	__asm { jae L_00700205 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call L_00700190 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0xc }
	__asm { ret 4 }
	__asm { L_00700205: }
	__asm { lea eax, [ecx + 1] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006dd1a0 }
	__asm { fld dword ptr [edi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [esi] }
	__asm { fstp dword ptr [eax + ecx*4 - 0xc] }
	__asm { fld dword ptr [edi + 4] }
	__asm { fstp dword ptr [eax + ecx*4 - 8] }
	__asm { fld dword ptr [edi + 8] }
	__asm { pop edi }
	__asm { fstp dword ptr [eax + ecx*4 - 4] }
	__asm { pop esi }
	__asm { add esp, 0xc }
	__asm { ret 4 }
}

extern "C" void fn_00708a10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00702040
extern "C" __declspec(naked) void asm_00702040()
{
	__asm { push -1 }
	__asm { push 0xd18849 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 4], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [esp + 0x10], 2 }
	__asm { sub eax, 3 }
	__asm { je L_00702087 }
	__asm { dec eax }
	__asm { je L_0070207d }
	__asm { dec eax }
	__asm { jne L_007020ad }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { jmp L_007020ad }
	__asm { L_0070207d: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { call fn_00708a10 }
	__asm { jmp L_007020ad }
	__asm { L_00702087: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_0070209b }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070209b: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { pop edi }
	__asm { L_007020ad: }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { cmp dword ptr [esi + 0x50], 0x10 }
	__asm { jb L_007020c5 }
	__asm { push dword ptr [esi + 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007020c5: }
	__asm { mov dword ptr [esi + 0x50], 0xf }
	__asm { mov dword ptr [esi + 0x4c], 0 }
	__asm { mov byte ptr [esi + 0x3c], 0 }
	__asm { cmp dword ptr [esi + 0x34], 0x10 }
	__asm { jb L_007020e8 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007020e8: }
	__asm { mov dword ptr [esi + 0x34], 0xf }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov byte ptr [esi + 0x20], 0 }
	__asm { cmp dword ptr [esi + 0x1c], 0x10 }
	__asm { jb L_0070210b }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070210b: }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov dword ptr [esi + 0x1c], 0xf }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" char g_00e10140[];
extern "C" void fn_00403540();
extern "C" void fn_006e84d0();
extern "C" void fn_006e85b0();
extern "C" void fn_00708630();
// FUNCTION: ROBLOXSTUDIO 0x00703e10
extern "C" __declspec(naked) void asm_00703e10()
{
	__asm { push -1 }
	__asm { push 0xd18adf }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { mov dword ptr [esp + 0xc], ebx }
	__asm { mov byte ptr [ebx], 0 }
	__asm { fldz }
	__asm { lea eax, [esp + 8] }
	__asm { mov dword ptr [ebx + 0x18], 3 }
	__asm { fstp qword ptr [ebx + 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { call fn_006e85b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push 0x74 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [esp + 0x1c], 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { test eax, eax }
	__asm { je L_00703e81 }
	__asm { push 3 }
	__asm { mov ecx, eax }
	__asm { call fn_00708630 }
	__asm { mov edi, eax }
	__asm { jmp L_00703e83 }
	__asm { L_00703e81: }
	__asm { xor edi, edi }
	__asm { L_00703e83: }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { test esi, esi }
	__asm { je L_00703eb2 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_00703eb2 }
	__asm { mov ecx, esi }
	__asm { call fn_006e84d0 }
	__asm { test esi, esi }
	__asm { je L_00703eb2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_00703eb2: }
	__asm { lea eax, [edi + 0x5c] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00703ecd }
	__asm { mov dword ptr [eax + 0x14], 0xf }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { jmp L_00703ecf }
	__asm { L_00703ecd: }
	__asm { xor eax, eax }
	__asm { L_00703ecf: }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { mov dword ptr [ebx + 0x28], edi }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { cmp ecx, eax }
	__asm { je L_00703eea }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00703eea: }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x14 }
	__asm { ret 4 }
}

extern "C" char g_00e105fc[];
extern "C" char g_011dd418[];
extern "C" void fn_00402fd0();
extern "C" void fn_00403540();
extern "C" void fn_004039a0();
extern "C" void fn_006d8660();
extern "C" void fn_006d86d0();
extern "C" void fn_007021c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00703fc0
extern "C" __declspec(naked) void asm_00703fc0()
{
	__asm { push -1 }
	__asm { push 0xd18b1c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { xor ebx, ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 8], ebx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], ebx }
	__asm { mov dword ptr [esp + 0xc], esi }
	__asm { mov byte ptr [esi], bl }
	__asm { fldz }
	__asm { mov eax, dword ptr [esp + 0x38] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { fstp qword ptr [esi + 0x20] }
	__asm { mov dword ptr [esp + 0x30], ebx }
	__asm { mov dword ptr [esi + 0x28], ebx }
	__asm { cmp eax, 4 }
	__asm { je L_0070409f }
	__asm { cmp eax, 5 }
	__asm { je L_0070409f }
	__asm { call fn_006d8660 }
	__asm { cmp dword ptr [g_011dd418], ebx }
	__asm { je L_00704066 }
	__asm { push 0xe47bfc }
	__asm { lea ecx, [esp + 0x14] }
	__asm { call fn_004039a0 }
	__asm { mov ebx, 1 }
	__asm { push ebx }
	__asm { push 0x13b }
	__asm { push 0xe47b40 }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { push 0xe47c2c }
	__asm { mov byte ptr [esp + 0x44], 1 }
	__asm { mov dword ptr [esp + 0x1c], ebx }
	__asm { call dword ptr [g_011dd418] }
	__asm { add esp, 0x14 }
	__asm { mov byte ptr [esp + 0x38], bl }
	__asm { test al, al }
	__asm { jne L_0070406b }
	__asm { L_00704066: }
	__asm { mov byte ptr [esp + 0x38], 0 }
	__asm { L_0070406b: }
	__asm { mov dword ptr [esp + 0x30], 0 }
	__asm { test bl, 1 }
	__asm { je L_0070408b }
	__asm { cmp dword ptr [esp + 0x24], 0x10 }
	__asm { jb L_0070408b }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070408b: }
	__asm { cmp byte ptr [esp + 0x38], 0 }
	__asm { je L_0070409a }
	__asm { push -1 }
	__asm { call dword ptr [g_00e105fc] }
	__asm { L_0070409a: }
	__asm { call fn_006d86d0 }
	__asm { L_0070409f: }
	__asm { cmp dword ptr [esi + 0x28], 0 }
	__asm { jne L_007040b3 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call fn_007021c0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { L_007040b3: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x40] }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, edi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { je L_007040e3 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { add ecx, 0x20 }
	__asm { cmp ecx, edi }
	__asm { je L_007040e3 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00403540 }
	__asm { L_007040e3: }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x2c }
	__asm { ret 8 }
}

extern "C" char g_012e00c0[];
extern "C" char g_012e00d0[];
extern "C" char g_012e00d4[];
extern "C" char g_012e00d8[];
extern "C" void fn_00451670();
extern "C" void fn_00702370();
extern "C" void fn_00706420();
extern "C" void fn_0070a1f0();
extern "C" void fn_0070a4d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00706700
extern "C" __declspec(naked) void asm_00706700()
{
	__asm { push -1 }
	__asm { push 0xd18e56 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00702370 }
	__asm { mov esi, dword ptr [esp + 0x64] }
	__asm { push esi }
	__asm { lea eax, [esp + 0x40] }
	__asm { push 0xe47e28 }
	__asm { push eax }
	__asm { call fn_00451670 }
	__asm { mov ebx, eax }
	__asm { lea eax, [esp + 0x30] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x70], 0 }
	__asm { call fn_0070a4d0 }
	__asm { add esp, 0x14 }
	__asm { mov esi, eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esp + 0x5c], 1 }
	__asm { call fn_00702370 }
	__asm { mov ecx, dword ptr [g_012e00d8] }
	__asm { test cl, 1 }
	__asm { jne L_00706798 }
	__asm { or ecx, 1 }
	__asm { push 0xde1360 }
	__asm { mov dword ptr [g_012e00d8], ecx }
	__asm { mov dword ptr [g_012e00d4], 0xf }
	__asm { mov dword ptr [g_012e00d0], 0 }
	__asm { mov byte ptr [g_012e00c0], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00706798: }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { test eax, eax }
	__asm { je L_007067a4 }
	__asm { add eax, 0x20 }
	__asm { jmp L_007067a9 }
	__asm { L_007067a4: }
	__asm { mov eax, 0x12e00c0 }
	__asm { L_007067a9: }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { call fn_0070a4d0 }
	__asm { add esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push eax }
	__asm { mov byte ptr [esp + 0x68], 2 }
	__asm { call fn_0070a1f0 }
	__asm { movzx eax, al }
	__asm { add esp, 8 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { call fn_00706420 }
	__asm { cmp dword ptr [esp + 0x20], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jb L_007067e7 }
	__asm { push dword ptr [esp] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007067e7: }
	__asm { cmp dword ptr [esp + 0x2c], 0x10 }
	__asm { mov dword ptr [esp + 0x14], 0xf }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { mov byte ptr [esp], 0 }
	__asm { jb L_0070680e }
	__asm { push dword ptr [esp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070680e: }
	__asm { cmp dword ptr [esp + 0x44], 0x10 }
	__asm { mov dword ptr [esp + 0x2c], 0xf }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { mov byte ptr [esp + 0x18], 0 }
	__asm { jb L_00706836 }
	__asm { push dword ptr [esp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00706836: }
	__asm { mov ecx, dword ptr [esp + 0x48] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x54 }
	__asm { ret 4 }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00610420();
// FUNCTION: ROBLOXSTUDIO 0x007076d0
extern "C" __declspec(naked) void asm_007076d0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_007076e1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_007076e3 }
	__asm { L_007076e1: }
	__asm { mov eax, edi }
	__asm { L_007076e3: }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov esi, dword ptr [esp + 0x18] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, esi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jns L_0070771f }
	__asm { cmp esi, edi }
	__asm { je L_0070771f }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00610420 }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [edi + 0x14], ecx }
	__asm { L_0070771f: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00707729 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_0070772b }
	__asm { L_00707729: }
	__asm { mov eax, esi }
	__asm { L_0070772b: }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ebx, dword ptr [esp + 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { mov ecx, ebx }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jns L_007077ab }
	__asm { cmp ebx, esi }
	__asm { je L_00707767 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00610420 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [ebx + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { L_00707767: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00707771 }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_00707773 }
	__asm { L_00707771: }
	__asm { mov eax, edi }
	__asm { L_00707773: }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jns L_007077ab }
	__asm { cmp esi, edi }
	__asm { je L_007077ab }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00610420 }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [edi + 0x14], ecx }
	__asm { L_007077ab: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_007076d0();
// FUNCTION: ROBLOXSTUDIO 0x007077b0
extern "C" __declspec(naked) void asm_007077b0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { mov ecx, esi }
	__asm { sub ecx, edi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 0x28 }
	__asm { jle L_00707831 }
	__asm { inc eax }
	__asm { cdq }
	__asm { and edx, 7 }
	__asm { add eax, edx }
	__asm { sar eax, 3 }
	__asm { push ebx }
	__asm { lea ecx, [eax + eax*2] }
	__asm { shl ecx, 4 }
	__asm { lea ebx, [eax + eax*2] }
	__asm { push ebp }
	__asm { shl ebx, 3 }
	__asm { lea eax, [ecx + edi] }
	__asm { push eax }
	__asm { lea ebp, [ebx + edi] }
	__asm { push ebp }
	__asm { push edi }
	__asm { mov dword ptr [esp + 0x20], ecx }
	__asm { call fn_007076d0 }
	__asm { mov edi, dword ptr [esp + 0x24] }
	__asm { lea eax, [ebx + edi] }
	__asm { push eax }
	__asm { mov eax, edi }
	__asm { sub eax, ebx }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_007076d0 }
	__asm { mov eax, esi }
	__asm { push eax }
	__asm { sub eax, dword ptr [esp + 0x30] }
	__asm { sub esi, ebx }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_007076d0 }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebp }
	__asm { call fn_007076d0 }
	__asm { add esp, 0x30 }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00707831: }
	__asm { push esi }
	__asm { push dword ptr [esp + 0x14] }
	__asm { push edi }
	__asm { call fn_007076d0 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10500[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00707850
extern "C" __declspec(naked) void asm_00707850()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { cmp ebx, esi }
	__asm { je L_007078e3 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [g_00e10500] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x1c] }
	__asm { mov edi, edi }
	__asm { L_00707870: }
	__asm { sub esi, 0x18 }
	__asm { sub edi, 0x18 }
	__asm { cmp edi, esi }
	__asm { je L_007078d8 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_0070788a }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070788a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_007078b1 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_007078bb }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call ebp }
	__asm { add esp, 0xc }
	__asm { jmp L_007078bb }
	__asm { L_007078b1: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007078bb: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_007078d8: }
	__asm { cmp esi, ebx }
	__asm { jne L_00707870 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_007078e3: }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e10500[];
extern "C" void fn_00412c00();
extern "C" void fn_00707020();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007078f0
extern "C" __declspec(naked) void asm_007078f0()
{
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x38] }
	__asm { mov dword ptr [esp + 0x20], 0xf }
	__asm { cmp dword ptr [edi - 4], 0x10 }
	__asm { lea esi, [edi - 0x18] }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { jae L_00707945 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_00707951 }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { push esi }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00707951 }
	__asm { L_00707945: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00707951: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [esp + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [esp + 0x20], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov ebx, dword ptr [esp + 0x34] }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { cmp esi, ebx }
	__asm { je L_007079a9 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00707990 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00707990: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00412c00 }
	__asm { L_007079a9: }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { sub edi, ebx }
	__asm { sub edi, 0x18 }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edi }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { push 0 }
	__asm { push ebx }
	__asm { call fn_00707020 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [esp + 0x20], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jb L_007079e5 }
	__asm { push dword ptr [esp] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007079e5: }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x24 }
	__asm { ret }
}

extern "C" char g_00e100d4[];
extern "C" char g_00e10140[];
extern "C" void fn_006e84d0();
extern "C" void fn_006e85b0();
// FUNCTION: ROBLOXSTUDIO 0x00708540
extern "C" __declspec(naked) void asm_00708540()
{
	__asm { push -1 }
	__asm { push 0xd18423 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi], 0xe47bf8 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { call fn_006e85b0 }
	__asm { add esp, 4 }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov byte ptr [esp + 0x1c], 1 }
	__asm { cmp ebx, edi }
	__asm { je L_007085d5 }
	__asm { test edi, edi }
	__asm { je L_007085c4 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_007085bd }
	__asm { mov ecx, edi }
	__asm { call fn_006e84d0 }
	__asm { test edi, edi }
	__asm { je L_007085bd }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { L_007085bd: }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_007085c4: }
	__asm { test ebx, ebx }
	__asm { je L_007085d5 }
	__asm { lea eax, [ebx + 4] }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x10], ebx }
	__asm { call dword ptr [g_00e100d4] }
	__asm { L_007085d5: }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { test edi, edi }
	__asm { je L_00708603 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_00708603 }
	__asm { mov ecx, edi }
	__asm { call fn_006e84d0 }
	__asm { test edi, edi }
	__asm { je L_00708603 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { L_00708603: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x14 }
	__asm { ret }
}

extern "C" char g_00e10140[];
extern "C" void fn_00403a70();
extern "C" void fn_006e84d0();
extern "C" void fn_007024f0();
// FUNCTION: ROBLOXSTUDIO 0x00708a10
extern "C" __declspec(naked) void asm_00708a10()
{
	__asm { push -1 }
	__asm { push 0xd18f83 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esp + 0xc], edi }
	__asm { xor ebp, ebp }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { cmp dword ptr [edi + 4], ebp }
	__asm { jle L_00708a71 }
	__asm { push ebx }
	__asm { xor ebx, ebx }
	__asm { L_00708a43: }
	__asm { mov esi, dword ptr [edi] }
	__asm { add esi, ebx }
	__asm { mov dword ptr [esp + 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esp + 0x20], 1 }
	__asm { call fn_007024f0 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esp + 0x28], 0 }
	__asm { call fn_00403a70 }
	__asm { inc ebp }
	__asm { add ebx, 0x30 }
	__asm { cmp ebp, dword ptr [edi + 4] }
	__asm { jl L_00708a43 }
	__asm { pop ebx }
	__asm { L_00708a71: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push dword ptr [edi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00708ac6 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_00708abf }
	__asm { mov ecx, esi }
	__asm { call fn_006e84d0 }
	__asm { test esi, esi }
	__asm { je L_00708abf }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_00708abf: }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { L_00708ac6: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x14 }
	__asm { ret }
}

extern "C" char g_00e100d4[];
extern "C" char g_00e10140[];
extern "C" void fn_004038a0();
extern "C" void fn_007022e0();
extern "C" void fn_00702370();
extern "C" void fn_00709d20();
// FUNCTION: ROBLOXSTUDIO 0x00708d90
extern "C" __declspec(naked) void asm_00708d90()
{
	__asm { push ecx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x14] }
	__asm { push 1 }
	__asm { push dword ptr [edi + 4] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 0x14], esi }
	__asm { call fn_00709d20 }
	__asm { xor ebp, ebp }
	__asm { cmp dword ptr [esi + 4], ebp }
	__asm { jle L_00708e43 }
	__asm { push ebx }
	__asm { xor ebx, ebx }
	__asm { L_00708db6: }
	__asm { mov edi, dword ptr [edi] }
	__asm { mov esi, dword ptr [esi] }
	__asm { add edi, ebx }
	__asm { mov ecx, edi }
	__asm { add esi, ebx }
	__asm { call fn_00702370 }
	__asm { cmp esi, edi }
	__asm { je L_00708e2d }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00708ddd }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { L_00708ddd: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { test eax, eax }
	__asm { je L_00708dfd }
	__asm { add eax, 0x38 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jg L_00708dfd }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call fn_007022e0 }
	__asm { add esp, 4 }
	__asm { L_00708dfd: }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { test eax, eax }
	__asm { je L_00708e2d }
	__asm { add eax, 0x38 }
	__asm { push eax }
	__asm { call dword ptr [g_00e100d4] }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { L_00708e2d: }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { mov edi, dword ptr [esp + 0x18] }
	__asm { inc ebp }
	__asm { add ebx, 0x30 }
	__asm { cmp ebp, dword ptr [esi + 4] }
	__asm { jl L_00708db6 }
	__asm { pop ebx }
	__asm { L_00708e43: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ecx }
	__asm { ret 4 }
}

extern "C" void fn_00402fd0();
extern "C" void fn_007054a0();
// FUNCTION: ROBLOXSTUDIO 0x00708ea0
extern "C" __declspec(naked) void asm_00708ea0()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esp + 8], 0 }
	__asm { jb L_00708ebb }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_00708ebd }
	__asm { L_00708ebb: }
	__asm { mov eax, esi }
	__asm { L_00708ebd: }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jne L_00708ef1 }
	__asm { lea eax, [esi + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x18] }
	__asm { call fn_007054a0 }
	__asm { test al, al }
	__asm { je L_00708ef1 }
	__asm { mov ecx, 1 }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { pop edi }
	__asm { sete al }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret 4 }
	__asm { L_00708ef1: }
	__asm { xor ecx, ecx }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { pop edi }
	__asm { sete al }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret 4 }
	__asm { mov edx, dword ptr [esp + 4] }
	__asm { mov al, byte ptr [edx + 0x14] }
	__asm { test al, al }
	__asm { jne L_00708f26 }
	__asm { cmp byte ptr [ecx + 0x14], al }
	__asm { jne L_00708f26 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp eax, dword ptr [edx + 8] }
	__asm { jne L_00708f3f }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { cmp eax, dword ptr [edx + 4] }
	__asm { jne L_00708f3f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [edx] }
	__asm { jmp L_00708f31 }
	__asm { L_00708f26: }
	__asm { cmp byte ptr [ecx + 0x14], al }
	__asm { jne L_00708f3f }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { L_00708f31: }
	__asm { jne L_00708f3f }
	__asm { mov cl, 1 }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { sete al }
	__asm { ret 4 }
	__asm { L_00708f3f: }
	__asm { xor cl, cl }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { sete al }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00709120
extern "C" __declspec(naked) void asm_00709120()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00709171 }
	__asm { L_0070912b: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { dec eax }
	__asm { add eax, ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { dec ecx }
	__asm { and ecx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [eax + ecx*4] }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_0070914d }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070914d: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { dec dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { jne L_0070916d }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_0070916d: }
	__asm { test ecx, ecx }
	__asm { jne L_0070912b }
	__asm { L_00709171: }
	__asm { mov edi, dword ptr [esi + 8] }
	__asm { test edi, edi }
	__asm { je L_00709190 }
	__asm { L_00709178: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { dec edi }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { test eax, eax }
	__asm { je L_0070918c }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070918c: }
	__asm { test edi, edi }
	__asm { jne L_00709178 }
	__asm { L_00709190: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_007091a0 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007091a0: }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00402f60();
extern "C" void fn_00701c40();
// FUNCTION: ROBLOXSTUDIO 0x00709990
extern "C" __declspec(naked) void asm_00709990()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { jne L_0070999f }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_0070999f: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_007099ae }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_007099b0 }
	__asm { L_007099ae: }
	__asm { mov eax, edi }
	__asm { L_007099b0: }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push dword ptr [edi + 0x10] }
	__asm { push eax }
	__asm { call fn_00701c40 }
	__asm { xor edx, edx }
	__asm { mov ecx, eax }
	__asm { div dword ptr [esi + 0xc] }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esp + 0x14], ecx }
	__asm { mov esi, dword ptr [esi + edx*4] }
	__asm { test esi, esi }
	__asm { je L_00709a24 }
	__asm { L_007099d3: }
	__asm { cmp dword ptr [esi + 0x48], ecx }
	__asm { jne L_00709a1d }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov ebx, dword ptr [edi + 0x10] }
	__asm { jb L_007099e5 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { jmp L_007099e7 }
	__asm { L_007099e5: }
	__asm { mov ecx, edi }
	__asm { L_007099e7: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov ebp, dword ptr [esi + 0x10] }
	__asm { jb L_007099f4 }
	__asm { mov edx, dword ptr [esi] }
	__asm { jmp L_007099f6 }
	__asm { L_007099f4: }
	__asm { mov edx, esi }
	__asm { L_007099f6: }
	__asm { mov eax, ebx }
	__asm { cmp ebp, ebx }
	__asm { cmovb eax, ebp }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00709a19 }
	__asm { cmp ebp, ebx }
	__asm { jb L_00709a19 }
	__asm { cmp ebp, ebx }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { je L_00709a2d }
	__asm { L_00709a19: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { L_00709a1d: }
	__asm { mov esi, dword ptr [esi + 0x4c] }
	__asm { test esi, esi }
	__asm { jne L_007099d3 }
	__asm { L_00709a24: }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_00709a2d: }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e105cc[];
extern "C" void fn_00403540();
extern "C" void fn_0070ab80();
// FUNCTION: ROBLOXSTUDIO 0x0070a4d0
extern "C" __declspec(naked) void asm_0070a4d0()
{
	__asm { push -1 }
	__asm { push 0xd19156 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [esp + 8], 0 }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [esp + 0x2c] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { mov dword ptr [esp + 8], 1 }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0070a53a }
	__asm { mov edi, dword ptr [esi] }
	__asm { jmp L_0070a53c }
	__asm { L_0070a53a: }
	__asm { mov edi, esi }
	__asm { L_0070a53c: }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0070a545 }
	__asm { mov edx, dword ptr [esi] }
	__asm { jmp L_0070a547 }
	__asm { L_0070a545: }
	__asm { mov edx, esi }
	__asm { L_0070a547: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, edx }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0070a555 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_0070a557 }
	__asm { L_0070a555: }
	__asm { mov ecx, esi }
	__asm { L_0070a557: }
	__asm { cmp ecx, eax }
	__asm { je L_0070a571 }
	__asm { push dword ptr [g_00e105cc] }
	__asm { push edi }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { call fn_0070ab80 }
	__asm { add esp, 0x14 }
	__asm { L_0070a571: }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x14 }
	__asm { ret }
}

extern "C" void fn_004037f0();
extern "C" void fn_0040f890();
extern "C" void fn_0042e3d0();
// FUNCTION: ROBLOXSTUDIO 0x0070aad0
extern "C" __declspec(naked) void asm_0070aad0()
{
	__asm { push -1 }
	__asm { push 0xd19209 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov dword ptr [esp + 4], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x1c] }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov ebx, dword ptr [esp + 0x24] }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { inc eax }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { mov dword ptr [esp + 0xc], 1 }
	__asm { cmp edi, eax }
	__asm { ja L_0070ab4b }
	__asm { cmp dword ptr [esi + 0x14], eax }
	__asm { je L_0070ab4b }
	__asm { push 1 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004037f0 }
	__asm { test al, al }
	__asm { je L_0070ab4b }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { jb L_0070ab45 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_0070ab47 }
	__asm { L_0070ab45: }
	__asm { mov eax, esi }
	__asm { L_0070ab47: }
	__asm { mov byte ptr [eax + edi], 0 }
	__asm { L_0070ab4b: }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_0040f890 }
	__asm { push dword ptr [esp + 0x28] }
	__asm { mov ecx, esi }
	__asm { push 1 }
	__asm { call fn_0042e3d0 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" void fn_0042e6e0();
extern "C" void fn_006636c0();
extern "C" void fn_0070aad0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0070cd40
extern "C" __declspec(naked) void asm_0070cd40()
{
	__asm { push -1 }
	__asm { push 0xd194e7 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, dword ptr [esp + 0x30] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { push esi }
	__asm { mov dword ptr [esp + 8], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0070cde8 }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { cmp edx, 0x10 }
	__asm { jb L_0070cd79 }
	__asm { mov esi, dword ptr [eax] }
	__asm { jmp L_0070cd7b }
	__asm { L_0070cd79: }
	__asm { mov esi, eax }
	__asm { L_0070cd7b: }
	__asm { mov bl, byte ptr [esi + ecx - 1] }
	__asm { cmp bl, 0x5c }
	__asm { je L_0070cde8 }
	__asm { cmp bl, 0x2f }
	__asm { je L_0070cde8 }
	__asm { cmp edx, 0x10 }
	__asm { jb L_0070cd92 }
	__asm { mov edx, dword ptr [eax] }
	__asm { jmp L_0070cd94 }
	__asm { L_0070cd92: }
	__asm { mov edx, eax }
	__asm { L_0070cd94: }
	__asm { cmp byte ptr [edx + ecx - 1], 0x3a }
	__asm { je L_0070cde8 }
	__asm { push 0x2f }
	__asm { push eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { call fn_0070aad0 }
	__asm { push dword ptr [esp + 0x48] }
	__asm { mov esi, dword ptr [esp + 0x44] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x44], 0 }
	__asm { call fn_0042e6e0 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [esp + 0x20], 0x10 }
	__asm { jb L_0070cdfa }
	__asm { push dword ptr [esp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x28 }
	__asm { ret }
	__asm { L_0070cde8: }
	__asm { push dword ptr [esp + 0x3c] }
	__asm { mov esi, dword ptr [esp + 0x38] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_006636c0 }
	__asm { add esp, 0xc }
	__asm { L_0070cdfa: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x28 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0070ce10
extern "C" __declspec(naked) void asm_0070ce10()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { cmp edx, 2 }
	__asm { jae L_0070ce1f }
	__asm { L_0070ce1c: }
	__asm { xor al, al }
	__asm { ret }
	__asm { L_0070ce1f: }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { push esi }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0070ce2c }
	__asm { mov esi, dword ptr [eax] }
	__asm { jmp L_0070ce2e }
	__asm { L_0070ce2c: }
	__asm { mov esi, eax }
	__asm { L_0070ce2e: }
	__asm { cmp byte ptr [esi + 1], 0x3a }
	__asm { pop esi }
	__asm { jne L_0070ce57 }
	__asm { cmp edx, 2 }
	__asm { je L_0070ce80 }
	__asm { cmp edx, 3 }
	__asm { jne L_0070ce57 }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0070ce48 }
	__asm { mov edx, dword ptr [eax] }
	__asm { jmp L_0070ce4a }
	__asm { L_0070ce48: }
	__asm { mov edx, eax }
	__asm { L_0070ce4a: }
	__asm { mov dl, byte ptr [edx + 2] }
	__asm { cmp dl, 0x5c }
	__asm { je L_0070ce80 }
	__asm { cmp dl, 0x2f }
	__asm { je L_0070ce80 }
	__asm { L_0070ce57: }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0070ce60 }
	__asm { mov edx, dword ptr [eax] }
	__asm { jmp L_0070ce62 }
	__asm { L_0070ce60: }
	__asm { mov edx, eax }
	__asm { L_0070ce62: }
	__asm { mov dl, byte ptr [edx] }
	__asm { cmp dl, 0x5c }
	__asm { je L_0070ce6e }
	__asm { cmp dl, 0x2f }
	__asm { jne L_0070ce1c }
	__asm { L_0070ce6e: }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0070ce75 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0070ce75: }
	__asm { mov al, byte ptr [eax + 1] }
	__asm { cmp al, 0x5c }
	__asm { je L_0070ce80 }
	__asm { cmp al, 0x2f }
	__asm { jne L_0070ce1c }
	__asm { L_0070ce80: }
	__asm { mov al, 1 }
	__asm { ret }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x0070d3c0
extern "C" __declspec(naked) void asm_0070d3c0()
{
	__asm { push ecx }
	__asm { mov edx, dword ptr [esp + 0xc] }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x28] }
	__asm { cmp esi, 0x10 }
	__asm { lea ecx, [esp + 0x14] }
	__asm { cmovae ecx, edx }
	__asm { lea ebx, [esp + 0x14] }
	__asm { cmovae ebx, edx }
	__asm { push edi }
	__asm { add eax, ecx }
	__asm { cmp esi, 0x10 }
	__asm { lea edi, [esp + 0x18] }
	__asm { cmovae edi, edx }
	__asm { mov dword ptr [esp + 0xc], 0 }
	__asm { cmp edi, eax }
	__asm { je L_0070d414 }
	__asm { sub ebx, edi }
	__asm { mov esi, 0x2f }
	__asm { L_0070d400: }
	__asm { movsx ecx, byte ptr [edi] }
	__asm { movzx edx, cl }
	__asm { cmp ecx, 0x5c }
	__asm { cmove edx, esi }
	__asm { mov byte ptr [ebx + edi], dl }
	__asm { inc edi }
	__asm { cmp edi, eax }
	__asm { jne L_0070d400 }
	__asm { L_0070d414: }
	__asm { mov esi, dword ptr [esp + 0x14] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov edx, dword ptr [esp + 0x2c] }
	__asm { cmp edx, 0x10 }
	__asm { jae L_0070d45e }
	__asm { mov eax, dword ptr [esp + 0x28] }
	__asm { inc eax }
	__asm { je L_0070d464 }
	__asm { push eax }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov edx, dword ptr [esp + 0x38] }
	__asm { mov ecx, dword ptr [esp + 0x34] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x14], edx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_0070d45e: }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov dword ptr [esi], ecx }
	__asm { L_0070d464: }
	__asm { mov ecx, dword ptr [esp + 0x28] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov dword ptr [esi + 0x14], edx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e100d4[];
extern "C" char g_00e10140[];
extern "C" void fn_006e84d0();
extern "C" void fn_006e85b0();
// FUNCTION: ROBLOXSTUDIO 0x0070da00
extern "C" __declspec(naked) void asm_0070da00()
{
	__asm { push -1 }
	__asm { push 0xd195a3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { call fn_006e85b0 }
	__asm { add esp, 4 }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { mov byte ptr [esp + 0x1c], 1 }
	__asm { cmp ebx, edi }
	__asm { je L_0070da8f }
	__asm { test edi, edi }
	__asm { je L_0070da7e }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_0070da77 }
	__asm { mov ecx, edi }
	__asm { call fn_006e84d0 }
	__asm { test edi, edi }
	__asm { je L_0070da77 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { L_0070da77: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_0070da7e: }
	__asm { test ebx, ebx }
	__asm { je L_0070da8f }
	__asm { lea eax, [ebx + 4] }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0xc], ebx }
	__asm { call dword ptr [g_00e100d4] }
	__asm { L_0070da8f: }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { test edi, edi }
	__asm { je L_0070dad1 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_0070dad1 }
	__asm { mov ecx, edi }
	__asm { call fn_006e84d0 }
	__asm { test edi, edi }
	__asm { je L_0070dad1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { L_0070dad1: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x14 }
	__asm { ret }
}

extern "C" char g_00e100d4[];
extern "C" char g_00e10140[];
extern "C" void fn_006e84d0();
extern "C" void fn_006e85b0();
// FUNCTION: ROBLOXSTUDIO 0x0070daf0
extern "C" __declspec(naked) void asm_0070daf0()
{
	__asm { push -1 }
	__asm { push 0xd18423 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi], 0xe47ec8 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { call fn_006e85b0 }
	__asm { add esp, 4 }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov byte ptr [esp + 0x1c], 1 }
	__asm { cmp ebx, edi }
	__asm { je L_0070db85 }
	__asm { test edi, edi }
	__asm { je L_0070db74 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_0070db6d }
	__asm { mov ecx, edi }
	__asm { call fn_006e84d0 }
	__asm { test edi, edi }
	__asm { je L_0070db6d }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { L_0070db6d: }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_0070db74: }
	__asm { test ebx, ebx }
	__asm { je L_0070db85 }
	__asm { lea eax, [ebx + 4] }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x10], ebx }
	__asm { call dword ptr [g_00e100d4] }
	__asm { L_0070db85: }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { test edi, edi }
	__asm { je L_0070dbb3 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_0070dbb3 }
	__asm { mov ecx, edi }
	__asm { call fn_006e84d0 }
	__asm { test edi, edi }
	__asm { je L_0070dbb3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { L_0070dbb3: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x14 }
	__asm { ret }
}

extern "C" char g_00e100d4[];
extern "C" char g_00e10140[];
extern "C" void fn_006e84d0();
extern "C" void fn_006e85b0();
// FUNCTION: ROBLOXSTUDIO 0x0070dbe0
extern "C" __declspec(naked) void asm_0070dbe0()
{
	__asm { push -1 }
	__asm { push 0xd18423 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi], 0xe47b28 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { call fn_006e85b0 }
	__asm { add esp, 4 }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov byte ptr [esp + 0x1c], 1 }
	__asm { cmp ebx, edi }
	__asm { je L_0070dc75 }
	__asm { test edi, edi }
	__asm { je L_0070dc64 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_0070dc5d }
	__asm { mov ecx, edi }
	__asm { call fn_006e84d0 }
	__asm { test edi, edi }
	__asm { je L_0070dc5d }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { L_0070dc5d: }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_0070dc64: }
	__asm { test ebx, ebx }
	__asm { je L_0070dc75 }
	__asm { lea eax, [ebx + 4] }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x10], ebx }
	__asm { call dword ptr [g_00e100d4] }
	__asm { L_0070dc75: }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { test edi, edi }
	__asm { je L_0070dca3 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_0070dca3 }
	__asm { mov ecx, edi }
	__asm { call fn_006e84d0 }
	__asm { test edi, edi }
	__asm { je L_0070dca3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { L_0070dca3: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x14 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0070e030
extern "C" __declspec(naked) void asm_0070e030()
{
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { xor ebp, ebp }
	__asm { push edi }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { test eax, eax }
	__asm { jle L_0070e102 }
	__asm { mov edx, dword ptr [esp + 0x1c] }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { L_0070e055: }
	__asm { cmp dword ptr [edx + 0x14], 0x10 }
	__asm { jb L_0070e05d }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_0070e05d: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov ebx, dword ptr [edi + 0x10] }
	__asm { jb L_0070e06a }
	__asm { mov esi, dword ptr [edi] }
	__asm { jmp L_0070e06c }
	__asm { L_0070e06a: }
	__asm { mov esi, edi }
	__asm { L_0070e06c: }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { cmp ebx, ecx }
	__asm { mov eax, ecx }
	__asm { cmovb eax, ebx }
	__asm { test eax, eax }
	__asm { je L_0070e0d4 }
	__asm { sub eax, 4 }
	__asm { jb L_0070e091 }
	__asm { L_0070e080: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, dword ptr [edx] }
	__asm { jne L_0070e096 }
	__asm { add esi, 4 }
	__asm { add edx, 4 }
	__asm { sub eax, 4 }
	__asm { jae L_0070e080 }
	__asm { L_0070e091: }
	__asm { cmp eax, -4 }
	__asm { je L_0070e0ca }
	__asm { L_0070e096: }
	__asm { mov cl, byte ptr [esi] }
	__asm { cmp cl, byte ptr [edx] }
	__asm { jne L_0070e0c3 }
	__asm { cmp eax, -3 }
	__asm { je L_0070e0ca }
	__asm { mov cl, byte ptr [esi + 1] }
	__asm { cmp cl, byte ptr [edx + 1] }
	__asm { jne L_0070e0c3 }
	__asm { cmp eax, -2 }
	__asm { je L_0070e0ca }
	__asm { mov cl, byte ptr [esi + 2] }
	__asm { cmp cl, byte ptr [edx + 2] }
	__asm { jne L_0070e0c3 }
	__asm { cmp eax, -1 }
	__asm { je L_0070e0ca }
	__asm { mov al, byte ptr [esi + 3] }
	__asm { cmp al, byte ptr [edx + 3] }
	__asm { je L_0070e0ca }
	__asm { L_0070e0c3: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { jmp L_0070e0cc }
	__asm { L_0070e0ca: }
	__asm { xor eax, eax }
	__asm { L_0070e0cc: }
	__asm { test eax, eax }
	__asm { jne L_0070e0e3 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { L_0070e0d4: }
	__asm { cmp ebx, ecx }
	__asm { jb L_0070e0e3 }
	__asm { xor eax, eax }
	__asm { cmp ebx, ecx }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { je L_0070e0f6 }
	__asm { L_0070e0e3: }
	__asm { inc ebp }
	__asm { add edi, 0x18 }
	__asm { cmp ebp, dword ptr [esp + 0x14] }
	__asm { jge L_0070e102 }
	__asm { mov edx, dword ptr [esp + 0x1c] }
	__asm { jmp L_0070e055 }
	__asm { L_0070e0f6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { add esp, 8 }
	__asm { ret 4 }
	__asm { L_0070e102: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { add esp, 8 }
	__asm { ret 4 }
}
