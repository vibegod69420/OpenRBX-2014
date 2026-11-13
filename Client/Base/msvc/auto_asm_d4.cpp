// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_01210363[];
extern "C" void fn_006b8a90();
// FUNCTION: ROBLOXSTUDIO 0x00676290
extern "C" __declspec(naked) void asm_00676290()
{
	__asm { mov al, byte ptr [g_01210363] }
	__asm { test al, al }
	__asm { je L_006762c7 }
	__asm { push ecx }
	__asm { movzx eax, al }
	__asm { push 0xe3bf84 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { mov al, byte ptr [g_01210363] }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_006762c7 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe3bfa4 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_006762c7: }
	__asm { ret }
}

extern "C" void fn_00678600();
// FUNCTION: ROBLOXSTUDIO 0x00676320
extern "C" __declspec(naked) void asm_00676320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { fld qword ptr [ebp + 8] }
	__asm { push eax }
	__asm { sub esp, 8 }
	__asm { mov ecx, esi }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00678600 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0067cce0();
extern "C" void fn_0067d620();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0067d358
extern "C" __declspec(naked) void asm_0067d358()
{
	__asm { sub ecx, 0xc }
	__asm { jmp fn_0067d620 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_0067cce0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0067d37a }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067d37a: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0067e860();
// FUNCTION: ROBLOXSTUDIO 0x0067e760
extern "C" __declspec(naked) void asm_0067e760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0067e783 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0067e860 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067e783: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11da910 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00688d80
extern "C" __declspec(naked) void asm_00688d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_00688da4 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 4 }
	__asm { L_00688d90: }
	__asm { lea ecx, [eax - 4] }
	__asm { test ecx, ecx }
	__asm { je L_00688d9e }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax - 4], ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00688d9e: }
	__asm { add eax, 8 }
	__asm { dec edx }
	__asm { jne L_00688d90 }
	__asm { L_00688da4: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0068a1e0
extern "C" __declspec(naked) void asm_0068a1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x28], 0x10 }
	__asm { jb L_0068a1f8 }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068a1f8: }
	__asm { mov dword ptr [esi + 0x28], 0xf }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 0x14], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0068dca0();
// FUNCTION: ROBLOXSTUDIO 0x0068dc60
extern "C" __declspec(naked) void asm_0068dc60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { add ecx, 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call fn_0068dca0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0068eca0();
// FUNCTION: ROBLOXSTUDIO 0x0068f3f0
extern "C" __declspec(naked) void asm_0068f3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [edx] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_0068eca0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00690790();
// FUNCTION: ROBLOXSTUDIO 0x00690750
extern "C" __declspec(naked) void asm_00690750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00690773 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00690790 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00690773: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11db5f0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00692960
extern "C" __declspec(naked) void asm_00692960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { L_00692968: }
	__asm { mov ecx, dword ptr [edx + eax*8] }
	__asm { test ecx, ecx }
	__asm { je L_00692981 }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { cmp ecx, 3 }
	__asm { jne L_00692983 }
	__asm { inc eax }
	__asm { cmp eax, 6 }
	__asm { jl L_00692968 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00692981: }
	__asm { xor ecx, ecx }
	__asm { L_00692983: }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00693740
extern "C" __declspec(naked) void asm_00693740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov dword ptr [ecx], 0xe3f870 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_0084f520();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00693f10
extern "C" __declspec(naked) void asm_00693f10()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00693f49 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_00693f30 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0084f520 }
	__asm { L_00693f30: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00693f49: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_009018c0();
extern "C" void fn_00b7f950();
// FUNCTION: ROBLOXSTUDIO 0x0069b950
extern "C" __declspec(naked) void asm_0069b950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00b7f950 }
	__asm { mov esi, eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0069b974 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009018c0 }
	__asm { mov eax, esi }
	__asm { L_0069b974: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0069fcdb
extern "C" __declspec(naked) void asm_0069fcdb()
{
	__asm { push ebp }
	__asm { or byte ptr [ebx - 0x5f787700], cl }
	__asm { add byte ptr [eax], al }
	__asm { add byte ptr [ecx + 0x12de588], ah }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { je L_0069fcf8 }
	__asm { shl eax, 0x14 }
	__asm { mov dword ptr [edi + 0xa0], eax }
	__asm { L_0069fcf8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006a0770
extern "C" __declspec(naked) void asm_006a0770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0xa0] }
	__asm { mov eax, dword ptr [esi + 0x64] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [esi + 0x6c] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [esi + 0x70] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov ecx, dword ptr [esi + 0x74] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [edx + 0x14], ecx }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006a7a50();
// FUNCTION: ROBLOXSTUDIO 0x006a0aa0
extern "C" __declspec(naked) void asm_006a0aa0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { sub eax, dword ptr [esi + 0x1c] }
	__asm { xor edi, edi }
	__asm { sar eax, 3 }
	__asm { test eax, eax }
	__asm { je L_006a0acc }
	__asm { L_006a0ab3: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { lea ecx, [eax + edi*8] }
	__asm { call fn_006a7a50 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { sub eax, dword ptr [esi + 0x1c] }
	__asm { inc edi }
	__asm { sar eax, 3 }
	__asm { cmp edi, eax }
	__asm { jb L_006a0ab3 }
	__asm { L_006a0acc: }
	__asm { pop edi }
	__asm { lea ecx, [esi + 0x28] }
	__asm { pop esi }
	__asm { jmp fn_006a7a50 }
}

extern "C" void fn_006a7af0();
// FUNCTION: ROBLOXSTUDIO 0x006a0ae0
extern "C" __declspec(naked) void asm_006a0ae0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { sub eax, dword ptr [esi + 0x1c] }
	__asm { xor edi, edi }
	__asm { sar eax, 3 }
	__asm { test eax, eax }
	__asm { je L_006a0b0c }
	__asm { L_006a0af3: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { lea ecx, [eax + edi*8] }
	__asm { call fn_006a7af0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { sub eax, dword ptr [esi + 0x1c] }
	__asm { inc edi }
	__asm { sar eax, 3 }
	__asm { cmp edi, eax }
	__asm { jb L_006a0af3 }
	__asm { L_006a0b0c: }
	__asm { pop edi }
	__asm { lea ecx, [esi + 0x28] }
	__asm { pop esi }
	__asm { jmp fn_006a7af0 }
}

extern "C" char g_00e10338[];
extern "C" char g_00e1033c[];
extern "C" void fn_006a63a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a3e50
extern "C" __declspec(naked) void asm_006a3e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_006a3e8b }
	__asm { mov ecx, esi }
	__asm { call fn_006a63a0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10338] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { call dword ptr [g_00e1033c] }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a3e8b: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10338[];
extern "C" char g_00e1033c[];
extern "C" void fn_006a63a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a6610
extern "C" __declspec(naked) void asm_006a6610()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_006a6648 }
	__asm { mov ecx, esi }
	__asm { call fn_006a63a0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10338] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { call dword ptr [g_00e1033c] }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a6648: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006a6b80();
// FUNCTION: ROBLOXSTUDIO 0x006a6a80
extern "C" __declspec(naked) void asm_006a6a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_006a6aa3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006a6b80 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6aa3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11dba38 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006a6d00();
// FUNCTION: ROBLOXSTUDIO 0x006a6ac0
extern "C" __declspec(naked) void asm_006a6ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_006a6ae3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006a6d00 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6ae3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11dbf88 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006a6e30();
// FUNCTION: ROBLOXSTUDIO 0x006a6b00
extern "C" __declspec(naked) void asm_006a6b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_006a6b23 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006a6e30 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6b23: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11dbb90 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006a6f80();
// FUNCTION: ROBLOXSTUDIO 0x006a6b40
extern "C" __declspec(naked) void asm_006a6b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_006a6b63 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006a6f80 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6b63: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11dbd80 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006a9b30();
extern "C" void fn_006e0800();
// FUNCTION: ROBLOXSTUDIO 0x006a9cb0
extern "C" __declspec(naked) void asm_006a9cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [esi + 0x14], 1 }
	__asm { call fn_006e0800 }
	__asm { push eax }
	__asm { call fn_006e0800 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_006a9b30 }
	__asm { add esp, 0x20 }
	__asm { mov byte ptr [esi + 0x14], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006b03f0
extern "C" __declspec(naked) void asm_006b03f0()
{
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { test eax, eax }
	__asm { jne L_006b0400 }
	__asm { mov eax, 0x80004003 }
	__asm { ret 8 }
	__asm { L_006b0400: }
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { mov edx, dword ptr [ecx + 0x1c] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov edx, dword ptr [ecx + 0x20] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov edx, dword ptr [ecx + 0x24] }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { xor eax, eax }
	__asm { ret 8 }
}

extern "C" char g_00e10140[];
// FUNCTION: ROBLOXSTUDIO 0x006b0970
extern "C" __declspec(naked) void asm_006b0970()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { push edi }
	__asm { lea eax, [esi + 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jne L_006b0997 }
	__asm { test esi, esi }
	__asm { je L_006b0997 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { mov eax, edi }
	__asm { L_006b0997: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_006b3f40();
// FUNCTION: ROBLOXSTUDIO 0x006b09f0
extern "C" __declspec(naked) void asm_006b09f0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { call edx }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [eax + 0x18] }
	__asm { call edx }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_006b3f40 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e10140[];
// FUNCTION: ROBLOXSTUDIO 0x006b0ab0
extern "C" __declspec(naked) void asm_006b0ab0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { push edi }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jne L_006b0ad7 }
	__asm { test esi, esi }
	__asm { je L_006b0ad7 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { mov eax, edi }
	__asm { L_006b0ad7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b12b0
extern "C" __declspec(naked) void asm_006b12b0()
{
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_006b12c0 }
	__asm { mov eax, 0x80004003 }
	__asm { ret 8 }
	__asm { L_006b12c0: }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { test eax, eax }
	__asm { je L_006b12da }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { push eax }
	__asm { call edx }
	__asm { xor eax, eax }
	__asm { ret 8 }
	__asm { L_006b12da: }
	__asm { mov eax, 0x80040209 }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b13d0
extern "C" __declspec(naked) void asm_006b13d0()
{
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { test eax, eax }
	__asm { jne L_006b13e0 }
	__asm { mov eax, 0x80004003 }
	__asm { ret 8 }
	__asm { L_006b13e0: }
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { mov edx, dword ptr [ecx - 0xc] }
	__asm { add ecx, -0xc }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 0x20] }
	__asm { call eax }
	__asm { test eax, eax }
	__asm { jge L_006b13f9 }
	__asm { mov eax, 1 }
	__asm { L_006b13f9: }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b1690
extern "C" __declspec(naked) void asm_006b1690()
{
	__asm { cmp dword ptr [ecx + 0x98], 0 }
	__asm { je L_006b16be }
	__asm { mov edx, dword ptr [esp + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0x98] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push edx }
	__asm { mov edx, dword ptr [esp + 0x10] }
	__asm { push edx }
	__asm { mov edx, dword ptr [esp + 0x10] }
	__asm { push edx }
	__asm { mov edx, dword ptr [esp + 0x10] }
	__asm { push edx }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { call eax }
	__asm { ret 0x10 }
	__asm { L_006b16be: }
	__asm { mov eax, 0x80004002 }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b17a0
extern "C" __declspec(naked) void asm_006b17a0()
{
	__asm { cmp dword ptr [ecx + 0x18], 0 }
	__asm { jne L_006b17ae }
	__asm { mov eax, 0x80040209 }
	__asm { ret 0x18 }
	__asm { L_006b17ae: }
	__asm { fld qword ptr [esp + 0x14] }
	__asm { mov edx, dword ptr [esp + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push edx }
	__asm { mov edx, dword ptr [esp + 0x18] }
	__asm { push edx }
	__asm { mov edx, dword ptr [esp + 0x18] }
	__asm { push edx }
	__asm { mov edx, dword ptr [esp + 0x18] }
	__asm { push edx }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { call eax }
	__asm { ret 0x18 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b2010
extern "C" __declspec(naked) void asm_006b2010()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add eax, 0xc }
	__asm { mov dword ptr [esi], 0xe42f1c }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push eax }
	__asm { call edx }
	__asm { test byte ptr [esp + 8], 1 }
	__asm { je L_006b2037 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b2037: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_006b20f0();
// FUNCTION: ROBLOXSTUDIO 0x006b2560
extern "C" __declspec(naked) void asm_006b2560()
{
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { mov edx, dword ptr [esp + 0xc] }
	__asm { push esi }
	__asm { push 1 }
	__asm { push eax }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { push edx }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_006b20f0 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi + 0x98], eax }
	__asm { mov dword ptr [esi + 0x9c], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 0x14 }
}

extern "C" void fn_0042c130();
// FUNCTION: ROBLOXSTUDIO 0x006b2840
extern "C" __declspec(naked) void asm_006b2840()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xe42ee4 }
	__asm { push esi }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_006b286c }
	__asm { push 0xe42ee4 }
	__asm { add esi, 0x2c }
	__asm { push esi }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_006b286c }
	__asm { pop esi }
	__asm { ret }
	__asm { L_006b286c: }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e132cc[];
// FUNCTION: ROBLOXSTUDIO 0x006b29d0
extern "C" __declspec(naked) void asm_006b29d0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x40], 0 }
	__asm { je L_006b29f1 }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { push eax }
	__asm { call dword ptr [g_00e132cc] }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { L_006b29f1: }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { test eax, eax }
	__asm { je L_006b2a07 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push eax }
	__asm { call edx }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { L_006b2a07: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006b2f60
extern "C" __declspec(naked) void asm_006b2f60()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x50] }
	__asm { xor eax, eax }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { jle L_006b2f8b }
	__asm { mov edx, dword ptr [ecx + 0x54] }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { L_006b2f72: }
	__asm { mov ecx, dword ptr [edx] }
	__asm { test ecx, ecx }
	__asm { je L_006b2f7d }
	__asm { add ecx, 0x54 }
	__asm { jmp L_006b2f7f }
	__asm { L_006b2f7d: }
	__asm { xor ecx, ecx }
	__asm { L_006b2f7f: }
	__asm { cmp ecx, edi }
	__asm { je L_006b2f8e }
	__asm { inc eax }
	__asm { add edx, 4 }
	__asm { cmp eax, esi }
	__asm { jl L_006b2f72 }
	__asm { L_006b2f8b: }
	__asm { or eax, 0xffffffff }
	__asm { L_006b2f8e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e1018c[];
// FUNCTION: ROBLOXSTUDIO 0x006b3780
extern "C" __declspec(naked) void asm_006b3780()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e1018c] }
	__asm { mov dword ptr [esi], eax }
	__asm { test eax, eax }
	__asm { jne L_006b37ad }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006b37ad }
	__asm { cmp dword ptr [eax], 0 }
	__asm { jl L_006b37ad }
	__asm { mov dword ptr [eax], 0x8007000e }
	__asm { L_006b37ad: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 8 }
}

extern "C" char g_00e10188[];
// FUNCTION: ROBLOXSTUDIO 0x006b3920
extern "C" __declspec(naked) void asm_006b3920()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10188] }
	__asm { test eax, eax }
	__asm { je L_006b3939 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_006b3939: }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { test eax, eax }
	__asm { je L_006b3946 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_006b3946: }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b3f80
extern "C" __declspec(naked) void asm_006b3f80()
{
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov eax, edx }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_006b3fa3 }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { L_006b3f8d: }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { cmp ecx, esi }
	__asm { je L_006b3fa5 }
	__asm { test eax, eax }
	__asm { jne L_006b3f9c }
	__asm { mov eax, edx }
	__asm { jmp L_006b3f9f }
	__asm { L_006b3f9c: }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { L_006b3f9f: }
	__asm { test eax, eax }
	__asm { jne L_006b3f8d }
	__asm { L_006b3fa3: }
	__asm { xor eax, eax }
	__asm { L_006b3fa5: }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_011dc4e8[];
extern "C" char g_011dc4f8[];
extern "C" char g_011dc4fc[];
extern "C" void fn_006b4410();
// FUNCTION: ROBLOXSTUDIO 0x006b46d0
extern "C" __declspec(naked) void asm_006b46d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { je L_006b4706 }
	__asm { push dword ptr [g_011dc4f8] }
	__asm { cmp dword ptr [g_011dc4fc], 0x10 }
	__asm { mov eax, 0x11dc4e8 }
	__asm { cmovae eax, dword ptr [g_011dc4e8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_006b4410 }
	__asm { cmp eax, -1 }
	__asm { jne L_006b4706 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b4706: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10424[];
extern "C" char g_00e10428[];
extern "C" char g_00e1042c[];
extern "C" char g_00e10434[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b5550
extern "C" __declspec(naked) void asm_006b5550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov eax, dword ptr [g_00e10434] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_00e1042c] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_00e10428] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_00e10424] }
	__asm { mov dword ptr [esi], eax }
	__asm { je L_006b5581 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b5581: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b5ce0
extern "C" __declspec(naked) void asm_006b5ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xor edx, edx }
	__asm { mov dword ptr [eax + 0x14], 7 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov word ptr [eax], dx }
	__asm { mov dword ptr [eax + 0x18], ecx }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax + 0x1c], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10264[];
extern "C" void fn_006b66b0();
// FUNCTION: ROBLOXSTUDIO 0x006b6a70
extern "C" __declspec(naked) void asm_006b6a70()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_006b66b0 }
	__asm { cmp dword ptr [esi + 0x10], eax }
	__asm { jae L_006b6a88 }
	__asm { push 0xf12f30 }
	__asm { call dword ptr [g_00e10264] }
	__asm { L_006b6a88: }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { jb L_006b6a9d }
	__asm { mov ecx, dword ptr [esi] }
	__asm { xor edx, edx }
	__asm { mov word ptr [ecx + eax*2], dx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_006b6a9d: }
	__asm { mov ecx, esi }
	__asm { xor edx, edx }
	__asm { mov word ptr [ecx + eax*2], dx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0042bd60();
// FUNCTION: ROBLOXSTUDIO 0x006b6db0
extern "C" __declspec(naked) void asm_006b6db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { xor eax, eax }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 7 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov word ptr [esi], ax }
	__asm { call fn_0042bd60 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10114[];
extern "C" char g_012de61c[];
extern "C" char g_012de620[];
// FUNCTION: ROBLOXSTUDIO 0x006b7370
extern "C" __declspec(naked) void asm_006b7370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_006b738a }
	__asm { push eax }
	__asm { call dword ptr [g_00e10114] }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_006b738a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_012de61c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [g_012de620] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de638[];
extern "C" char g_012de63c[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x006b8870
extern "C" __declspec(naked) void asm_006b8870()
{
	__asm { mov eax, dword ptr [g_012de63c] }
	__asm { test al, 1 }
	__asm { jne L_006b8898 }
	__asm { or eax, 1 }
	__asm { push 0xde0b60 }
	__asm { mov dword ptr [g_012de63c], eax }
	__asm { mov dword ptr [g_012de638], 0xe4375c }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_006b8898: }
	__asm { mov eax, 0x12de638 }
	__asm { ret }
}

extern "C" void fn_006b8a90();
extern "C" void fn_006b9b10();
// FUNCTION: ROBLOXSTUDIO 0x006b9740
extern "C" __declspec(naked) void asm_006b9740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, 0xff }
	__asm { jne L_006b975a }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_006b9b10 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b975a: }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105ac[];
extern "C" void fn_004276b0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x006b97a0
extern "C" __declspec(naked) void asm_006b97a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, eax }
	__asm { push 0x13164e0 }
	__asm { call dword ptr [g_00e105ac] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004278c0();
extern "C" void fn_006b9840();
// FUNCTION: ROBLOXSTUDIO 0x006b9980
extern "C" __declspec(naked) void asm_006b9980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push 1 }
	__asm { push -1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov byte ptr [ebp - 4], 0x2f }
	__asm { call fn_006b9840 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { inc eax }
	__asm { push eax }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004278c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" void fn_006bb4a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006ba9c0
extern "C" __declspec(naked) void asm_006ba9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_006ba9ee }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_006bb4a0 }
	__asm { xor ecx, ecx }
	__asm { lea eax, [esi + 4] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_006ba9e5 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_006ba9e5: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ba9ee: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006bb6b0
extern "C" __declspec(naked) void asm_006bb6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_006bb6e5 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_006bb6cb }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006bb6cb: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006bb6e5: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10194[];
extern "C" void fn_006bb4a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006bba60
extern "C" __declspec(naked) void asm_006bba60()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_006bba8b }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_006bb4a0 }
	__asm { xor ecx, ecx }
	__asm { lea eax, [esi + 4] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_006bba82 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_006bba82: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006bba8b: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006bbe70();
// FUNCTION: ROBLOXSTUDIO 0x006bbdf0
extern "C" __declspec(naked) void asm_006bbdf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_006bbe13 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006bbe70 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006bbe13: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11dc720 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006bbf90();
// FUNCTION: ROBLOXSTUDIO 0x006bbe30
extern "C" __declspec(naked) void asm_006bbe30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_006bbe53 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006bbf90 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006bbe53: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11dc828 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1018c[];
extern "C" void fn_006bca00();
// FUNCTION: ROBLOXSTUDIO 0x006bc960
extern "C" __declspec(naked) void asm_006bc960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ebp + 8], al }
	__asm { push esi }
	__asm { setne al }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { push eax }
	__asm { push 0 }
	__asm { call dword ptr [g_00e1018c] }
	__asm { mov dword ptr [esi], eax }
	__asm { test eax, eax }
	__asm { je L_006bc98e }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006bc98e: }
	__asm { call fn_006bca00 }
}

extern "C" char g_00e101c0[];
extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006bca00
extern "C" __declspec(naked) void asm_006bca00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { call dword ptr [g_00e101c0] }
	__asm { test eax, eax }
	__asm { jle L_006bca18 }
	__asm { movzx eax, ax }
	__asm { or eax, 0x80070000 }
	__asm { L_006bca18: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe43a1c }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x006bd100
extern "C" __declspec(naked) void asm_006bd100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x11dcc18 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_006bd120 }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006bd120: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006bdab0
extern "C" __declspec(naked) void asm_006bdab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp ecx, eax }
	__asm { je L_006bdacd }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_006bdac2: }
	__asm { cmp dword ptr [ecx], edx }
	__asm { je L_006bdacd }
	__asm { add ecx, 0xc }
	__asm { cmp ecx, eax }
	__asm { jne L_006bdac2 }
	__asm { L_006bdacd: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006bf0e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006be4a0
extern "C" __declspec(naked) void asm_006be4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_006bf0e0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x006beda0
extern "C" __declspec(naked) void asm_006beda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xe43ba8 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006bf430
extern "C" __declspec(naked) void asm_006bf430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx] }
	__asm { test esi, esi }
	__asm { je L_006bf445 }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_006bf445: }
	__asm { dec dword ptr [ecx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006c54a0();
extern "C" void fn_006c5500();
// FUNCTION: ROBLOXSTUDIO 0x006c00d0
extern "C" __declspec(naked) void asm_006c00d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_006c54a0 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x210] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_006c5500 }
	__asm { add esp, 0x10 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cfb738();
// FUNCTION: ROBLOXSTUDIO 0x006c1110
extern "C" __declspec(naked) void asm_006c1110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x100 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cfb738 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cfb738();
// FUNCTION: ROBLOXSTUDIO 0x006c1150
extern "C" __declspec(naked) void asm_006c1150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x200 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cfb738 }
	__asm { fld qword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { fstp qword ptr [eax] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
// FUNCTION: ROBLOXSTUDIO 0x006c5280
extern "C" __declspec(naked) void asm_006c5280()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 8] }
	__asm { push esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { inc dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { sub eax, dword ptr [edi + 0x20] }
	__asm { sar eax, 2 }
	__asm { cmp dword ptr [edi + 4], eax }
	__asm { jne L_006c52a6 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { L_006c52a6: }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_011dd314[];
extern "C" void fn_006c5410();
extern "C" void fn_006c54a0();
// FUNCTION: ROBLOXSTUDIO 0x006c53e0
extern "C" __declspec(naked) void asm_006c53e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [g_011dd314], 1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { jg L_006c53fe }
	__asm { call fn_006c5410 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c53fe: }
	__asm { call fn_006c54a0 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10154[];
extern "C" char g_00e10158[];
// FUNCTION: ROBLOXSTUDIO 0x006c5e10
extern "C" __declspec(naked) void asm_006c5e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10154] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10158] }
	__asm { test eax, eax }
	__asm { je L_006c5e3c }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { je L_006c5e3c }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c5e3c: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x006c5e50
extern "C" __declspec(naked) void asm_006c5e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 5 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xe46028 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012df70c[];
extern "C" char g_012df710[];
extern "C" char g_012df714[];
extern "C" char g_012df718[];
extern "C" char g_012df71c[];
// FUNCTION: ROBLOXSTUDIO 0x006c60b0
extern "C" __declspec(naked) void asm_006c60b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012df714] }
	__asm { inc dword ptr [g_012df71c] }
	__asm { mov dword ptr [g_012df718], eax }
	__asm { mov eax, dword ptr [g_012df710] }
	__asm { mov dword ptr [g_012df714], eax }
	__asm { mov eax, dword ptr [g_012df70c] }
	__asm { mov dword ptr [g_012df710], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [g_012df70c], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012df8ec[];
extern "C" char g_012df8f0[];
extern "C" char g_012df8f4[];
extern "C" char g_012df8f8[];
// FUNCTION: ROBLOXSTUDIO 0x006d1260
extern "C" __declspec(naked) void asm_006d1260()
{
	__asm { mov eax, dword ptr [g_012df8f8] }
	__asm { test al, 1 }
	__asm { jne L_006d128f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012df8f8], eax }
	__asm { mov dword ptr [g_012df8ec], 0x3f800000 }
	__asm { mov dword ptr [g_012df8f0], 0 }
	__asm { mov dword ptr [g_012df8f4], 0 }
	__asm { L_006d128f: }
	__asm { mov eax, 0x12df8ec }
	__asm { ret }
}

extern "C" char g_012df8fc[];
extern "C" char g_012df900[];
extern "C" char g_012df904[];
extern "C" char g_012df908[];
// FUNCTION: ROBLOXSTUDIO 0x006d12a0
extern "C" __declspec(naked) void asm_006d12a0()
{
	__asm { mov eax, dword ptr [g_012df908] }
	__asm { test al, 1 }
	__asm { jne L_006d12cf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012df908], eax }
	__asm { mov dword ptr [g_012df8fc], 0 }
	__asm { mov dword ptr [g_012df900], 0x3f800000 }
	__asm { mov dword ptr [g_012df904], 0 }
	__asm { L_006d12cf: }
	__asm { mov eax, 0x12df8fc }
	__asm { ret }
}

extern "C" char g_012df90c[];
extern "C" char g_012df910[];
extern "C" char g_012df914[];
extern "C" char g_012df918[];
// FUNCTION: ROBLOXSTUDIO 0x006d12e0
extern "C" __declspec(naked) void asm_006d12e0()
{
	__asm { mov eax, dword ptr [g_012df918] }
	__asm { test al, 1 }
	__asm { jne L_006d130f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012df918], eax }
	__asm { mov dword ptr [g_012df90c], 0 }
	__asm { mov dword ptr [g_012df910], 0 }
	__asm { mov dword ptr [g_012df914], 0x3f800000 }
	__asm { L_006d130f: }
	__asm { mov eax, 0x12df90c }
	__asm { ret }
}

extern "C" char g_012df91c[];
extern "C" char g_012df920[];
extern "C" char g_012df924[];
extern "C" char g_012df928[];
// FUNCTION: ROBLOXSTUDIO 0x006d1320
extern "C" __declspec(naked) void asm_006d1320()
{
	__asm { mov eax, dword ptr [g_012df928] }
	__asm { test al, 1 }
	__asm { jne L_006d134f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012df928], eax }
	__asm { mov dword ptr [g_012df91c], 0x3f333333 }
	__asm { mov dword ptr [g_012df920], 0 }
	__asm { mov dword ptr [g_012df924], 0x3f800000 }
	__asm { L_006d134f: }
	__asm { mov eax, 0x12df91c }
	__asm { ret }
}

extern "C" char g_012df92c[];
extern "C" char g_012df930[];
extern "C" char g_012df934[];
extern "C" char g_012df938[];
// FUNCTION: ROBLOXSTUDIO 0x006d1360
extern "C" __declspec(naked) void asm_006d1360()
{
	__asm { mov eax, dword ptr [g_012df938] }
	__asm { test al, 1 }
	__asm { jne L_006d138f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012df938], eax }
	__asm { mov dword ptr [g_012df92c], 0 }
	__asm { mov dword ptr [g_012df930], 0x3f333333 }
	__asm { mov dword ptr [g_012df934], 0x3f800000 }
	__asm { L_006d138f: }
	__asm { mov eax, 0x12df92c }
	__asm { ret }
}

extern "C" char g_012df93c[];
extern "C" char g_012df940[];
extern "C" char g_012df944[];
extern "C" char g_012df948[];
// FUNCTION: ROBLOXSTUDIO 0x006d13a0
extern "C" __declspec(naked) void asm_006d13a0()
{
	__asm { mov eax, dword ptr [g_012df948] }
	__asm { test al, 1 }
	__asm { jne L_006d13cf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012df948], eax }
	__asm { mov dword ptr [g_012df93c], 0x3f800000 }
	__asm { mov dword ptr [g_012df940], 0x3f800000 }
	__asm { mov dword ptr [g_012df944], 0 }
	__asm { L_006d13cf: }
	__asm { mov eax, 0x12df93c }
	__asm { ret }
}

extern "C" char g_012df94c[];
extern "C" char g_012df950[];
extern "C" char g_012df954[];
extern "C" char g_012df958[];
// FUNCTION: ROBLOXSTUDIO 0x006d13e0
extern "C" __declspec(naked) void asm_006d13e0()
{
	__asm { mov eax, dword ptr [g_012df958] }
	__asm { test al, 1 }
	__asm { jne L_006d140f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012df958], eax }
	__asm { mov dword ptr [g_012df94c], 0x3f000000 }
	__asm { mov dword ptr [g_012df950], 0x3f000000 }
	__asm { mov dword ptr [g_012df954], 0 }
	__asm { L_006d140f: }
	__asm { mov eax, 0x12df94c }
	__asm { ret }
}

extern "C" char g_012df95c[];
extern "C" char g_012df960[];
extern "C" char g_012df964[];
extern "C" char g_012df968[];
// FUNCTION: ROBLOXSTUDIO 0x006d1420
extern "C" __declspec(naked) void asm_006d1420()
{
	__asm { mov eax, dword ptr [g_012df968] }
	__asm { test al, 1 }
	__asm { jne L_006d144f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012df968], eax }
	__asm { mov dword ptr [g_012df95c], 0x3f800000 }
	__asm { mov dword ptr [g_012df960], 0x3f000000 }
	__asm { mov dword ptr [g_012df964], 0 }
	__asm { L_006d144f: }
	__asm { mov eax, 0x12df95c }
	__asm { ret }
}

extern "C" char g_012df96c[];
extern "C" char g_012df970[];
extern "C" char g_012df974[];
extern "C" char g_012df978[];
// FUNCTION: ROBLOXSTUDIO 0x006d1460
extern "C" __declspec(naked) void asm_006d1460()
{
	__asm { mov eax, dword ptr [g_012df978] }
	__asm { test al, 1 }
	__asm { jne L_006d148f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012df978], eax }
	__asm { mov dword ptr [g_012df96c], 0 }
	__asm { mov dword ptr [g_012df970], 0 }
	__asm { mov dword ptr [g_012df974], 0 }
	__asm { L_006d148f: }
	__asm { mov eax, 0x12df96c }
	__asm { ret }
}

extern "C" char g_012df99c[];
extern "C" char g_012df9a0[];
extern "C" char g_012df9a4[];
extern "C" char g_012df9a8[];
// FUNCTION: ROBLOXSTUDIO 0x006d14a0
extern "C" __declspec(naked) void asm_006d14a0()
{
	__asm { mov eax, dword ptr [g_012df9a8] }
	__asm { test al, 1 }
	__asm { jne L_006d14cf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012df9a8], eax }
	__asm { mov dword ptr [g_012df99c], 0x3f333333 }
	__asm { mov dword ptr [g_012df9a0], 0x3f333333 }
	__asm { mov dword ptr [g_012df9a4], 0x3f333333 }
	__asm { L_006d14cf: }
	__asm { mov eax, 0x12df99c }
	__asm { ret }
}

extern "C" char g_012df9ac[];
extern "C" char g_012df9b0[];
extern "C" char g_012df9b4[];
extern "C" char g_012df9b8[];
// FUNCTION: ROBLOXSTUDIO 0x006d14e0
extern "C" __declspec(naked) void asm_006d14e0()
{
	__asm { mov eax, dword ptr [g_012df9b8] }
	__asm { test al, 1 }
	__asm { jne L_006d150f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012df9b8], eax }
	__asm { mov dword ptr [g_012df9ac], 0x3f800000 }
	__asm { mov dword ptr [g_012df9b0], 0x3f800000 }
	__asm { mov dword ptr [g_012df9b4], 0x3f800000 }
	__asm { L_006d150f: }
	__asm { mov eax, 0x12df9ac }
	__asm { ret }
}

extern "C" char g_012df97c[];
extern "C" char g_012df980[];
extern "C" char g_012df984[];
extern "C" char g_012df988[];
// FUNCTION: ROBLOXSTUDIO 0x006d1520
extern "C" __declspec(naked) void asm_006d1520()
{
	__asm { mov eax, dword ptr [g_012df988] }
	__asm { test al, 1 }
	__asm { jne L_006d154f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012df988], eax }
	__asm { mov dword ptr [g_012df97c], 0 }
	__asm { mov dword ptr [g_012df980], 0 }
	__asm { mov dword ptr [g_012df984], 0 }
	__asm { L_006d154f: }
	__asm { mov eax, 0x12df97c }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006d2c10
extern "C" __declspec(naked) void asm_006d2c10()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 0xc] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { fld dword ptr [ecx + 0x18] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { fld dword ptr [ecx + 4] }
	__asm { fstp dword ptr [eax + 0xc] }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { fstp dword ptr [eax + 0x10] }
	__asm { fld dword ptr [ecx + 0x1c] }
	__asm { fstp dword ptr [eax + 0x14] }
	__asm { fld dword ptr [ecx + 8] }
	__asm { fstp dword ptr [eax + 0x18] }
	__asm { fld dword ptr [ecx + 0x14] }
	__asm { fstp dword ptr [eax + 0x1c] }
	__asm { fld dword ptr [ecx + 0x20] }
	__asm { fstp dword ptr [eax + 0x20] }
	__asm { ret 4 }
}

extern "C" char g_00e1055c[];
extern "C" char g_00e10630[];
extern "C" void fn_006d7d00();
// FUNCTION: ROBLOXSTUDIO 0x006d7860
extern "C" __declspec(naked) void asm_006d7860()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { push edi }
	__asm { call fn_006d7d00 }
	__asm { mov edi, eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { call dword ptr [g_00e10630] }
	__asm { push dword ptr [edi + 4] }
	__asm { call dword ptr [g_00e1055c] }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_006d7d00();
// FUNCTION: ROBLOXSTUDIO 0x006d7db0
extern "C" __declspec(naked) void asm_006d7db0()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [esp + 4], 0 }
	__asm { call fn_006d7d00 }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { push -1 }
	__asm { add eax, 8 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e1055c[];
extern "C" char g_00e10644[];
extern "C" void fn_006d78b0();
// FUNCTION: ROBLOXSTUDIO 0x006d7df0
extern "C" __declspec(naked) void asm_006d7df0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { je L_006d7e25 }
	__asm { call fn_006d78b0 }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_006d7e0a }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006d7e0a: }
	__asm { push eax }
	__asm { push 0x100dedc }
	__asm { push dword ptr [esi + 4] }
	__asm { call dword ptr [g_00e10644] }
	__asm { push dword ptr [esi + 4] }
	__asm { call dword ptr [g_00e1055c] }
	__asm { add esp, 0x10 }
	__asm { L_006d7e25: }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x006d9280
extern "C" __declspec(naked) void asm_006d9280()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 8] }
	__asm { mov dword ptr [esi], 0xe46834 }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { test byte ptr [esp + 8], 1 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { je L_006d92ab }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006d92ab: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_006dc770();
extern "C" void fn_006deac0();
// FUNCTION: ROBLOXSTUDIO 0x006dc740
extern "C" __declspec(naked) void asm_006dc740()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_006deac0 }
	__asm { mov edx, dword ptr [eax] }
	__asm { sub esp, 0xc }
	__asm { mov esi, esp }
	__asm { push dword ptr [esp + 0x18] }
	__asm { mov dword ptr [esi], edx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { call fn_006dc770 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_012dfad8[];
extern "C" char g_012dfadc[];
extern "C" char g_012dfae0[];
extern "C" char g_012dfae4[];
// FUNCTION: ROBLOXSTUDIO 0x006dea00
extern "C" __declspec(naked) void asm_006dea00()
{
	__asm { mov eax, dword ptr [g_012dfae4] }
	__asm { test al, 1 }
	__asm { jne L_006dea2f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dfae4], eax }
	__asm { mov dword ptr [g_012dfad8], 0 }
	__asm { mov dword ptr [g_012dfadc], 0 }
	__asm { mov dword ptr [g_012dfae0], 0 }
	__asm { L_006dea2f: }
	__asm { mov eax, 0x12dfad8 }
	__asm { ret }
}

extern "C" char g_012dfae8[];
extern "C" char g_012dfaec[];
extern "C" char g_012dfaf0[];
extern "C" char g_012dfaf4[];
// FUNCTION: ROBLOXSTUDIO 0x006dea40
extern "C" __declspec(naked) void asm_006dea40()
{
	__asm { mov eax, dword ptr [g_012dfaf4] }
	__asm { test al, 1 }
	__asm { jne L_006dea6f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dfaf4], eax }
	__asm { mov dword ptr [g_012dfae8], 0x3f800000 }
	__asm { mov dword ptr [g_012dfaec], 0x3f800000 }
	__asm { mov dword ptr [g_012dfaf0], 0x3f800000 }
	__asm { L_006dea6f: }
	__asm { mov eax, 0x12dfae8 }
	__asm { ret }
}

extern "C" char g_012dfaf8[];
extern "C" char g_012dfafc[];
extern "C" char g_012dfb00[];
extern "C" char g_012dfb04[];
// FUNCTION: ROBLOXSTUDIO 0x006dea80
extern "C" __declspec(naked) void asm_006dea80()
{
	__asm { mov eax, dword ptr [g_012dfb04] }
	__asm { test al, 1 }
	__asm { jne L_006deaaf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dfb04], eax }
	__asm { mov dword ptr [g_012dfaf8], 0x3f800000 }
	__asm { mov dword ptr [g_012dfafc], 0 }
	__asm { mov dword ptr [g_012dfb00], 0 }
	__asm { L_006deaaf: }
	__asm { mov eax, 0x12dfaf8 }
	__asm { ret }
}

extern "C" char g_012dfb08[];
extern "C" char g_012dfb0c[];
extern "C" char g_012dfb10[];
extern "C" char g_012dfb14[];
// FUNCTION: ROBLOXSTUDIO 0x006deac0
extern "C" __declspec(naked) void asm_006deac0()
{
	__asm { mov eax, dword ptr [g_012dfb14] }
	__asm { test al, 1 }
	__asm { jne L_006deaef }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dfb14], eax }
	__asm { mov dword ptr [g_012dfb08], 0 }
	__asm { mov dword ptr [g_012dfb0c], 0x3f800000 }
	__asm { mov dword ptr [g_012dfb10], 0 }
	__asm { L_006deaef: }
	__asm { mov eax, 0x12dfb08 }
	__asm { ret }
}

extern "C" char g_012dfb48[];
extern "C" char g_012dfb4c[];
extern "C" char g_012dfb50[];
extern "C" char g_012dfb54[];
// FUNCTION: ROBLOXSTUDIO 0x006dec40
extern "C" __declspec(naked) void asm_006dec40()
{
	__asm { mov eax, dword ptr [g_012dfb54] }
	__asm { test al, 1 }
	__asm { jne L_006dec6f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dfb54], eax }
	__asm { mov dword ptr [g_012dfb48], 0xff7fffff }
	__asm { mov dword ptr [g_012dfb4c], 0xff7fffff }
	__asm { mov dword ptr [g_012dfb50], 0xff7fffff }
	__asm { L_006dec6f: }
	__asm { mov eax, 0x12dfb48 }
	__asm { ret }
}

extern "C" char g_012dfb78[];
extern "C" char g_012dfb7c[];
extern "C" char g_012dfb80[];
// FUNCTION: ROBLOXSTUDIO 0x006e07d0
extern "C" __declspec(naked) void asm_006e07d0()
{
	__asm { mov eax, dword ptr [g_012dfb80] }
	__asm { test al, 1 }
	__asm { jne L_006e07f5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dfb80], eax }
	__asm { mov dword ptr [g_012dfb78], 0 }
	__asm { mov dword ptr [g_012dfb7c], 0 }
	__asm { L_006e07f5: }
	__asm { mov eax, 0x12dfb78 }
	__asm { ret }
}

extern "C" char g_012dfcbc[];
extern "C" char g_012dfcc0[];
extern "C" char g_012dfcc4[];
extern "C" char g_012dfcc8[];
extern "C" char g_012dfccc[];
// FUNCTION: ROBLOXSTUDIO 0x006e34d0
extern "C" __declspec(naked) void asm_006e34d0()
{
	__asm { mov eax, dword ptr [g_012dfccc] }
	__asm { test al, 1 }
	__asm { jne L_006e3509 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dfccc], eax }
	__asm { mov dword ptr [g_012dfcbc], 0 }
	__asm { mov dword ptr [g_012dfcc0], 0 }
	__asm { mov dword ptr [g_012dfcc4], 0 }
	__asm { mov dword ptr [g_012dfcc8], 0 }
	__asm { L_006e3509: }
	__asm { mov eax, 0x12dfcbc }
	__asm { ret }
}

extern "C" void fn_006ea500();
// FUNCTION: ROBLOXSTUDIO 0x006ea670
extern "C" __declspec(naked) void asm_006ea670()
{
	__asm { sub esp, 8 }
	__asm { push dword ptr [esp + 0xc] }
	__asm { lea eax, [esp + 4] }
	__asm { push dword ptr [esp + 0x28] }
	__asm { push dword ptr [esp + 0x28] }
	__asm { push dword ptr [esp + 0x28] }
	__asm { push dword ptr [esp + 0x28] }
	__asm { push dword ptr [esp + 0x28] }
	__asm { push dword ptr [esp + 0x28] }
	__asm { push eax }
	__asm { call fn_006ea500 }
	__asm { mov eax, dword ptr [esp + 0x2c] }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { add esp, 0x28 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006ea7a0
extern "C" __declspec(naked) void asm_006ea7a0()
{
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { sub edx, dword ptr [ecx] }
	__asm { mov eax, 0x3fffffff }
	__asm { sar edx, 2 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 1 }
	__asm { sub eax, ecx }
	__asm { cmp eax, edx }
	__asm { jae L_006ea7c7 }
	__asm { xor edx, edx }
	__asm { cmp edx, dword ptr [esp + 4] }
	__asm { cmovb edx, dword ptr [esp + 4] }
	__asm { mov eax, edx }
	__asm { ret 4 }
	__asm { L_006ea7c7: }
	__asm { add edx, ecx }
	__asm { cmp edx, dword ptr [esp + 4] }
	__asm { cmovb edx, dword ptr [esp + 4] }
	__asm { mov eax, edx }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006ea7e0
extern "C" __declspec(naked) void asm_006ea7e0()
{
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { sub edx, dword ptr [ecx] }
	__asm { mov eax, 0x1fffffff }
	__asm { sar edx, 3 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 1 }
	__asm { sub eax, ecx }
	__asm { cmp eax, edx }
	__asm { jae L_006ea807 }
	__asm { xor edx, edx }
	__asm { cmp edx, dword ptr [esp + 4] }
	__asm { cmovb edx, dword ptr [esp + 4] }
	__asm { mov eax, edx }
	__asm { ret 4 }
	__asm { L_006ea807: }
	__asm { add edx, ecx }
	__asm { cmp edx, dword ptr [esp + 4] }
	__asm { cmovb edx, dword ptr [esp + 4] }
	__asm { mov eax, edx }
	__asm { ret 4 }
}

extern "C" void fn_00701aa0();
// FUNCTION: ROBLOXSTUDIO 0x006f6780
extern "C" __declspec(naked) void asm_006f6780()
{
	__asm { push ecx }
	__asm { movsx eax, word ptr [ecx + 4] }
	__asm { push eax }
	__asm { movsx eax, word ptr [ecx + 2] }
	__asm { push eax }
	__asm { movsx eax, word ptr [ecx] }
	__asm { push eax }
	__asm { push 0xe47410 }
	__asm { push dword ptr [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_00701aa0 }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { add esp, 0x18 }
	__asm { ret 4 }
}

extern "C" char g_00e10140[];
extern "C" void fn_007022e0();
// FUNCTION: ROBLOXSTUDIO 0x007024f0
extern "C" __declspec(naked) void asm_007024f0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { test eax, eax }
	__asm { je L_00702513 }
	__asm { add eax, 0x38 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jg L_00702513 }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call fn_007022e0 }
	__asm { add esp, 4 }
	__asm { L_00702513: }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0070de50();
// FUNCTION: ROBLOXSTUDIO 0x0070dec0
extern "C" __declspec(naked) void asm_0070dec0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { push edi }
	__asm { movzx eax, byte ptr [esi] }
	__asm { mov edi, ecx }
	__asm { mov byte ptr [edi], al }
	__asm { movzx eax, byte ptr [esi + 1] }
	__asm { mov byte ptr [edi + 1], al }
	__asm { movzx eax, byte ptr [esi + 2] }
	__asm { mov byte ptr [edi + 2], al }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0070de50 }
	__asm { mov eax, edi }
	__asm { fld qword ptr [esi + 0x18] }
	__asm { fstp qword ptr [edi + 0x18] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0070f1b0
extern "C" __declspec(naked) void asm_0070f1b0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 4] }
	__asm { mov dword ptr [esi], 0xe47ed4 }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { test byte ptr [esp + 8], 1 }
	__asm { je L_0070f1d5 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070f1d5: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_0071b340();
// FUNCTION: ROBLOXSTUDIO 0x0071b140
extern "C" __declspec(naked) void asm_0071b140()
{
	__asm { L_0071b140: }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { jne L_0071b14e }
	__asm { xor eax, eax }
	__asm { jmp L_0071b157 }
	__asm { L_0071b14e: }
	__asm { push dword ptr [esp + 8] }
	__asm { call L_0071b140 }
	__asm { L_0071b157: }
	__asm { push dword ptr [esp + 8] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { lea eax, [esi + 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0071b340 }
	__asm { add esp, 0x14 }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00725f00
extern "C" __declspec(naked) void asm_00725f00()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret 4 }
}

extern "C" char g_00e104f4[];
// FUNCTION: ROBLOXSTUDIO 0x00729630
extern "C" __declspec(naked) void asm_00729630()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { push dword ptr [edi + 0x1c] }
	__asm { call esi }
	__asm { push dword ptr [edi + 0x24] }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { call esi }
	__asm { push dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { call esi }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00729670
extern "C" __declspec(naked) void asm_00729670()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax], 0x140000 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { mov dword ptr [eax + 0x14], ecx }
	__asm { mov dword ptr [eax + 0x18], ecx }
	__asm { mov dword ptr [eax + 0x1c], ecx }
	__asm { mov word ptr [eax + 0x20], cx }
	__asm { mov dword ptr [eax + 0x24], ecx }
	__asm { mov word ptr [eax + 0x28], cx }
	__asm { mov dword ptr [eax + 0x2c], ecx }
	__asm { mov dword ptr [eax + 0x30], ecx }
	__asm { mov word ptr [eax + 0x34], cx }
	__asm { mov dword ptr [eax + 0x38], ecx }
	__asm { mov dword ptr [eax + 0x3c], ecx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00729f50
extern "C" __declspec(naked) void asm_00729f50()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { mov edx, dword ptr [edi] }
	__asm { movzx esi, byte ptr [edx + 3] }
	__asm { movzx eax, byte ptr [edx + 2] }
	__asm { movzx ecx, byte ptr [edx + 1] }
	__asm { shl esi, 8 }
	__asm { add eax, esi }
	__asm { shl eax, 8 }
	__asm { add eax, ecx }
	__asm { movzx ecx, byte ptr [edx] }
	__asm { shl eax, 8 }
	__asm { add eax, ecx }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edi], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_0072a2c0();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x0072a490
extern "C" __declspec(naked) void asm_0072a490()
{
	__asm { push esi }
	__asm { push dword ptr [esp + 0xc] }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { jne L_0072a4b7 }
	__asm { push eax }
	__asm { push 0xe }
	__asm { push dword ptr [esp + 0x18] }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0072a4b7: }
	__asm { push dword ptr [esp + 0xc] }
	__asm { push dword ptr [esp + 0xc] }
	__asm { push esi }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00739c20();
// FUNCTION: ROBLOXSTUDIO 0x00737840
extern "C" __declspec(naked) void asm_00737840()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov ecx, dword ptr [eax + 0x4c] }
	__asm { test ecx, ecx }
	__asm { je L_00737851 }
	__asm { mov dword ptr [esp + 4], eax }
	__asm { jmp ecx }
	__asm { L_00737851: }
	__asm { push 0xe4af38 }
	__asm { push eax }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { ret }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov ecx, dword ptr [eax + 0x14c] }
	__asm { test ecx, ecx }
	__asm { je L_00737874 }
	__asm { mov dword ptr [esp + 4], eax }
	__asm { jmp ecx }
	__asm { L_00737874: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007385b0
extern "C" __declspec(naked) void asm_007385b0()
{
	__asm { cmp dword ptr [esp + 4], 0 }
	__asm { je L_007385da }
	__asm { mov edx, dword ptr [esp + 8] }
	__asm { test edx, edx }
	__asm { je L_007385da }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx + 0x5a], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 0x5e], eax }
	__asm { mov ax, word ptr [ecx + 8] }
	__asm { or dword ptr [edx + 8], 0x20 }
	__asm { mov word ptr [edx + 0x62], ax }
	__asm { L_007385da: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00738c00
extern "C" __declspec(naked) void asm_00738c00()
{
	__asm { cmp dword ptr [esp + 4], 0 }
	__asm { je L_00738c2b }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00738c2b }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { or dword ptr [ecx + 8], 0x100 }
	__asm { mov dword ptr [ecx + 0x64], eax }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [ecx + 0x68], eax }
	__asm { mov al, byte ptr [esp + 0x14] }
	__asm { mov byte ptr [ecx + 0x6c], al }
	__asm { L_00738c2b: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00738dc0
extern "C" __declspec(naked) void asm_00738dc0()
{
	__asm { cmp dword ptr [esp + 4], 0 }
	__asm { je L_00738deb }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00738deb }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { or dword ptr [ecx + 8], 0x80 }
	__asm { mov dword ptr [ecx + 0x70], eax }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [ecx + 0x74], eax }
	__asm { mov al, byte ptr [esp + 0x14] }
	__asm { mov byte ptr [ecx + 0x78], al }
	__asm { L_00738deb: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007392d0
extern "C" __declspec(naked) void asm_007392d0()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { test eax, eax }
	__asm { je L_007392ff }
	__asm { mov edx, dword ptr [esp + 8] }
	__asm { test edx, edx }
	__asm { je L_007392ff }
	__asm { test dword ptr [eax + 0x68], 0x200 }
	__asm { jne L_007392ff }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx + 0x3c], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { or dword ptr [edx + 8], 0x200 }
	__asm { mov dword ptr [edx + 0x40], eax }
	__asm { L_007392ff: }
	__asm { ret }
}

extern "C" void fn_00739970();
// FUNCTION: ROBLOXSTUDIO 0x007399d0
extern "C" __declspec(naked) void asm_007399d0()
{
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 8] }
	__asm { test edi, edi }
	__asm { jne L_007399dd }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { ret }
	__asm { L_007399dd: }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0x6c] }
	__asm { push dword ptr [esp + 0x10] }
	__asm { mov eax, esi }
	__asm { or eax, 0x100000 }
	__asm { push edi }
	__asm { mov dword ptr [edi + 0x6c], eax }
	__asm { call fn_00739970 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [edi + 0x6c], esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { ret }
}

extern "C" void fn_00739c20();
extern "C" void fn_0073a260();
// FUNCTION: ROBLOXSTUDIO 0x00739df0
extern "C" __declspec(naked) void asm_00739df0()
{
	__asm { sub esp, 0x54 }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x5c] }
	__asm { push dword ptr [esp + 0x60] }
	__asm { test esi, esi }
	__asm { jne L_00739e0e }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { add esp, 0x54 }
	__asm { ret }
	__asm { L_00739e0e: }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0073a260 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { add esp, 0x14 }
	__asm { pop esi }
	__asm { add esp, 0x54 }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_00745310();
// FUNCTION: ROBLOXSTUDIO 0x0073a350
extern "C" __declspec(naked) void asm_0073a350()
{
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 8] }
	__asm { push dword ptr [edi + 8] }
	__asm { call dword ptr [g_00e104f4] }
	__asm { push dword ptr [edi + 0xc] }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { call dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], 0xffffffff }
	__asm { call fn_00745310 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0073a460
extern "C" __declspec(naked) void asm_0073a460()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_0073a497 }
	__asm { mov eax, dword ptr [eax + 0x24] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_0073a490 }
	__asm { mov dword ptr [esi + 0x14], 0xc8 }
	__asm { mov dword ptr [esi + 0x10c], 0 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0073a490: }
	__asm { mov dword ptr [esi + 0x14], 0x64 }
	__asm { L_0073a497: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0073d340();
// FUNCTION: ROBLOXSTUDIO 0x0073d1d0
extern "C" __declspec(naked) void asm_0073d1d0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { push 0x1c }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push esi }
	__asm { call eax }
	__asm { mov dword ptr [esi + 0x184], eax }
	__asm { push esi }
	__asm { mov dword ptr [eax], 0x73d530 }
	__asm { mov dword ptr [eax + 4], 0x73d690 }
	__asm { mov byte ptr [eax + 8], 0 }
	__asm { call fn_0073d340 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006c54a0();
extern "C" void fn_006c5500();
// FUNCTION: ROBLOXSTUDIO 0x0076f4a0
extern "C" __declspec(naked) void asm_0076f4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_006c54a0 }
	__asm { push edi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c5500 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0068a630();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x007701f0
extern "C" __declspec(naked) void asm_007701f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00770217 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0068a630 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00770217 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00770217: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00771420
extern "C" __declspec(naked) void asm_00771420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0x3c] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_007715e0();
// FUNCTION: ROBLOXSTUDIO 0x007714f0
extern "C" __declspec(naked) void asm_007714f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], 0x3f800000 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { call fn_007715e0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00771810();
// FUNCTION: ROBLOXSTUDIO 0x007715a0
extern "C" __declspec(naked) void asm_007715a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], 0x3f800000 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { call fn_00771810 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00774670();
// FUNCTION: ROBLOXSTUDIO 0x00774630
extern "C" __declspec(naked) void asm_00774630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00774653 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00774670 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00774653: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11df070 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402150();
// FUNCTION: ROBLOXSTUDIO 0x0077656e
extern "C" __declspec(naked) void asm_0077656e()
{
	__asm { test eax, eax }
	__asm { je L_0077657e }
	__asm { lea ecx, [ebp + 0x68] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0077657e: }
	__asm { mov dword ptr [ebp + 0x60], 0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_00402150 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x84 }
}

extern "C" void fn_0077c1c0();
// FUNCTION: ROBLOXSTUDIO 0x0077c100
extern "C" __declspec(naked) void asm_0077c100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0077c123 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0077c1c0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0077c123: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11df3a0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0077c320();
// FUNCTION: ROBLOXSTUDIO 0x0077c140
extern "C" __declspec(naked) void asm_0077c140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0077c163 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0077c320 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0077c163: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11df248 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0077c450();
// FUNCTION: ROBLOXSTUDIO 0x0077c180
extern "C" __declspec(naked) void asm_0077c180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0077c1a3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0077c450 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0077c1a3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11df598 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0077b9b0();
extern "C" void fn_0077ca20();
// FUNCTION: ROBLOXSTUDIO 0x0077cca0
extern "C" __declspec(naked) void asm_0077cca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0077ca20 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0077ccb8 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0077ccb8: }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0077b9b0 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00781fa0();
// FUNCTION: ROBLOXSTUDIO 0x0077d620
extern "C" __declspec(naked) void asm_0077d620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00781fa0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, esi }
	__asm { mov cl, byte ptr [ecx] }
	__asm { mov byte ptr [esi + 0x10], cl }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00781fa0();
// FUNCTION: ROBLOXSTUDIO 0x0077d6c0
extern "C" __declspec(naked) void asm_0077d6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00781fa0 }
	__asm { mov cl, byte ptr [esi + 0x10] }
	__asm { mov byte ptr [edi + 0x10], cl }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0077d760
extern "C" __declspec(naked) void asm_0077d760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov dword ptr [esi + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0077d810
extern "C" __declspec(naked) void asm_0077d810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov esi, edi }
	__asm { cmp byte ptr [edi], 0 }
	__asm { je L_0077d826 }
	__asm { nop }
	__asm { L_0077d820: }
	__asm { inc esi }
	__asm { cmp byte ptr [esi], 0 }
	__asm { jne L_0077d820 }
	__asm { L_0077d826: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 8], edi }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 0xc], esi }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0077e820
extern "C" __declspec(naked) void asm_0077e820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor edx, edx }
	__asm { cmp ecx, eax }
	__asm { je L_0077e83b }
	__asm { nop }
	__asm { L_0077e830: }
	__asm { cmp byte ptr [ecx], 0xa }
	__asm { jne L_0077e836 }
	__asm { inc edx }
	__asm { L_0077e836: }
	__asm { inc ecx }
	__asm { cmp ecx, eax }
	__asm { jne L_0077e830 }
	__asm { L_0077e83b: }
	__asm { lea eax, [edx + 1] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0077e840
extern "C" __declspec(naked) void asm_0077e840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [edx + 5] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [edx + 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0077e865 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov cl, byte ptr [ecx] }
	__asm { mov byte ptr [eax], cl }
	__asm { L_0077e865: }
	__asm { mov eax, edx }
	__asm { mov byte ptr [edx + 4], 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

// FUNCTION: ROBLOXSTUDIO 0x0077e880
extern "C" __declspec(naked) void asm_0077e880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [edx + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [edx + 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0077e8a5 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_0077e8a5: }
	__asm { mov eax, edx }
	__asm { mov byte ptr [edx + 4], 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00783b40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007854d0
extern "C" __declspec(naked) void asm_007854d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], 0xe4fa5c }
	__asm { call fn_00783b40 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0xe4fa2c }
	__asm { je L_007854f9 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007854f9: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00785840
extern "C" __declspec(naked) void asm_00785840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esi], 0xe4efe8 }
	__asm { test ecx, ecx }
	__asm { je L_00785859 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00785859: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0xe4efdc }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00785876 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00785876: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00786180
extern "C" __declspec(naked) void asm_00786180()
{
	__asm { push esi }
	__asm { push 0x10 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007861ab }
	__asm { mov dword ptr [eax], 0xe4fa9c }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { pop esi }
	__asm { ret }
	__asm { L_007861ab: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00789980
extern "C" __declspec(naked) void asm_00789980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp ecx, edx }
	__asm { je L_007899a7 }
	__asm { push esi }
	__asm { L_00789991: }
	__asm { test eax, eax }
	__asm { je L_00789999 }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00789999: }
	__asm { add ecx, 4 }
	__asm { add eax, 4 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp ecx, edx }
	__asm { jne L_00789991 }
	__asm { pop esi }
	__asm { L_007899a7: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0044dee0();
extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x007899b0
extern "C" __declspec(naked) void asm_007899b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0044dee0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], ecx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0078daf0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x0078a3d0
extern "C" __declspec(naked) void asm_0078a3d0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0078daf0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0078a3ee }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0078a3ee: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0078c400
extern "C" __declspec(naked) void asm_0078c400()
{
	__asm { push 0x58 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_0078c414 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_0078c414: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_0078c41f }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0078c41f: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0078c428 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0078c428: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0078c430
extern "C" __declspec(naked) void asm_0078c430()
{
	__asm { push esi }
	__asm { push 0x58 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_0078c449 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0078c449: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_0078c458 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0078c458: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0078c463 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0078c463: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0078c4b0
extern "C" __declspec(naked) void asm_0078c4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_0078c4ca }
	__asm { lea eax, [esi + 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0078c4ca: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}
