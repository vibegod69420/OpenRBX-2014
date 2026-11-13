// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10500[];
extern "C" void fn_004088d0();
// FUNCTION: ROBLOXSTUDIO 0x006ec270
extern "C" __declspec(naked) void asm_006ec270()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { mov ecx, eax }
	__asm { sub ecx, edx }
	__asm { sar ecx, 2 }
	__asm { push edi }
	__asm { cmp ecx, esi }
	__asm { jbe L_006ec2c3 }
	__asm { lea esi, [edx + esi*4] }
	__asm { cmp esi, edx }
	__asm { jne L_006ec299 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { pop ebx }
	__asm { ret 4 }
	__asm { L_006ec299: }
	__asm { cmp esi, eax }
	__asm { je L_006ec2f7 }
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
	__asm { ret 4 }
	__asm { L_006ec2c3: }
	__asm { jae L_006ec2f7 }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_004088d0 }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov eax, edi }
	__asm { sub eax, dword ptr [ebx] }
	__asm { mov ecx, esi }
	__asm { sar eax, 2 }
	__asm { sub ecx, eax }
	__asm { je L_006ec2e5 }
	__asm { xor eax, eax }
	__asm { rep stosd }
	__asm { L_006ec2e5: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, ecx }
	__asm { sub eax, dword ptr [ebx] }
	__asm { sar eax, 2 }
	__asm { sub esi, eax }
	__asm { lea eax, [ecx + esi*4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { L_006ec2f7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
extern "C" void fn_00ac80e0();
// FUNCTION: ROBLOXSTUDIO 0x006ec370
extern "C" __declspec(naked) void asm_006ec370()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { mov ecx, eax }
	__asm { sub ecx, edx }
	__asm { sar ecx, 2 }
	__asm { push edi }
	__asm { cmp ecx, esi }
	__asm { jbe L_006ec3c3 }
	__asm { lea esi, [edx + esi*4] }
	__asm { cmp esi, edx }
	__asm { jne L_006ec399 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { pop ebx }
	__asm { ret 4 }
	__asm { L_006ec399: }
	__asm { cmp esi, eax }
	__asm { je L_006ec3f7 }
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
	__asm { ret 4 }
	__asm { L_006ec3c3: }
	__asm { jae L_006ec3f7 }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00ac80e0 }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov eax, edi }
	__asm { sub eax, dword ptr [ebx] }
	__asm { mov ecx, esi }
	__asm { sar eax, 2 }
	__asm { sub ecx, eax }
	__asm { je L_006ec3e5 }
	__asm { xor eax, eax }
	__asm { rep stosd }
	__asm { L_006ec3e5: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, ecx }
	__asm { sub eax, dword ptr [ebx] }
	__asm { sar eax, 2 }
	__asm { sub esi, eax }
	__asm { lea eax, [ecx + esi*4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { L_006ec3f7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
extern "C" void fn_006eae80();
// FUNCTION: ROBLOXSTUDIO 0x006ec400
extern "C" __declspec(naked) void asm_006ec400()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { mov ecx, eax }
	__asm { sub ecx, edx }
	__asm { sar ecx, 3 }
	__asm { push edi }
	__asm { cmp ecx, esi }
	__asm { jbe L_006ec453 }
	__asm { lea esi, [edx + esi*8] }
	__asm { cmp esi, edx }
	__asm { jne L_006ec429 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { pop ebx }
	__asm { ret 4 }
	__asm { L_006ec429: }
	__asm { cmp esi, eax }
	__asm { je L_006ec48f }
	__asm { mov ecx, eax }
	__asm { sub ecx, eax }
	__asm { sar ecx, 3 }
	__asm { lea edi, [ecx*8] }
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
	__asm { L_006ec453: }
	__asm { jae L_006ec48f }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_006eae80 }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov eax, edi }
	__asm { sub eax, dword ptr [ebx] }
	__asm { mov ecx, esi }
	__asm { sar eax, 3 }
	__asm { sub ecx, eax }
	__asm { je L_006ec47d }
	__asm { and ecx, 0x1fffffff }
	__asm { add ecx, ecx }
	__asm { xor eax, eax }
	__asm { rep stosd }
	__asm { L_006ec47d: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, ecx }
	__asm { sub eax, dword ptr [ebx] }
	__asm { sar eax, 3 }
	__asm { sub esi, eax }
	__asm { lea eax, [ecx + esi*8] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { L_006ec48f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
extern "C" void fn_006eae80();
// FUNCTION: ROBLOXSTUDIO 0x006ec4a0
extern "C" __declspec(naked) void asm_006ec4a0()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push ebp }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov ebp, dword ptr [esp + 0xc] }
	__asm { mov ecx, eax }
	__asm { sub ecx, edx }
	__asm { sar ecx, 3 }
	__asm { push esi }
	__asm { push edi }
	__asm { cmp ecx, ebp }
	__asm { jbe L_006ec4f6 }
	__asm { lea esi, [edx + ebp*8] }
	__asm { cmp esi, edx }
	__asm { jne L_006ec4cb }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { pop ebx }
	__asm { ret 4 }
	__asm { L_006ec4cb: }
	__asm { cmp esi, eax }
	__asm { je L_006ec544 }
	__asm { mov ecx, eax }
	__asm { sub ecx, eax }
	__asm { sar ecx, 3 }
	__asm { lea edi, [ecx*8] }
	__asm { push edi }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { lea eax, [edi + esi] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop ebx }
	__asm { ret 4 }
	__asm { L_006ec4f6: }
	__asm { jae L_006ec544 }
	__asm { mov eax, ebp }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_006eae80 }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov eax, edi }
	__asm { sub eax, dword ptr [ebx] }
	__asm { mov ecx, ebp }
	__asm { sar eax, 3 }
	__asm { sub ecx, eax }
	__asm { je L_006ec532 }
	__asm { lea ecx, [ecx*8 - 5] }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { shr ecx, 2 }
	__asm { mov esi, edi }
	__asm { add edi, 8 }
	__asm { rep movsd }
	__asm { L_006ec532: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, ecx }
	__asm { sub eax, dword ptr [ebx] }
	__asm { sar eax, 3 }
	__asm { sub ebp, eax }
	__asm { lea eax, [ecx + ebp*8] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { L_006ec544: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_006e8b70();
extern "C" void fn_006e90b0();
extern "C" void fn_006ed7f0();
extern "C" void fn_006efca0();
extern "C" void fn_006f0c30();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006ee5f0
extern "C" __declspec(naked) void asm_006ee5f0()
{
	__asm { push ebp }
	__asm { lea ebp, [esp - 0x54] }
	__asm { sub esp, 0x54 }
	__asm { push -1 }
	__asm { push 0xd17ad3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x9c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp + 0x4c], 0 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [edi + 8] }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, dword ptr [ebp + 0x5c] }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x78] }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006e8b70 }
	__asm { cmp dword ptr [ebp - 0x34], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jg L_006ee6ec }
	__asm { jl L_006ee670 }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { test eax, eax }
	__asm { jne L_006ee6ef }
	__asm { L_006ee670: }
	__asm { push 0xf }
	__asm { push 0xe46ee8 }
	__asm { lea ecx, [ebp + 0x30] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { call fn_004038a0 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x30] }
	__asm { push eax }
	__asm { lea ecx, [ebp] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp + 0x14], 0xf }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { mov byte ptr [ebp], 0 }
	__asm { call fn_00403540 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp + 0x2c], 0xf }
	__asm { mov dword ptr [ebp + 0x28], 0 }
	__asm { mov byte ptr [ebp + 0x18], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x1100400 }
	__asm { lea eax, [ebp] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00cf67ec }
	__asm { L_006ee6ec: }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { L_006ee6ef: }
	__asm { cmp dword ptr [ebp - 0x3c], 0 }
	__asm { jl L_006ee712 }
	__asm { jg L_006ee6fd }
	__asm { cmp dword ptr [ebp - 0x40], 0 }
	__asm { jbe L_006ee712 }
	__asm { L_006ee6fd: }
	__asm { push 0x10ffe10 }
	__asm { lea eax, [ebp + 0x50] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 0x50], 0xe46d88 }
	__asm { call fn_00cf67ec }
	__asm { L_006ee712: }
	__asm { push dword ptr [ebp + 0x60] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { push esi }
	__asm { call fn_006ed7f0 }
	__asm { add esp, 0x10 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x78] }
	__asm { push eax }
	__asm { call fn_006efca0 }
	__asm { lea ecx, [ebp - 0x78] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_006e90b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { lea esp, [ebp + 0x54] }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 0x5c] }
	__asm { lea ecx, [ebp - 0xa8] }
	__asm { push dword ptr [ebp + 0x48] }
	__asm { call fn_006f0c30 }
	__asm { push 0x1100400 }
	__asm { lea eax, [ebp - 0xa8] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push dword ptr [esi + 8] }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { pop esi }
	__asm { ret }
}
