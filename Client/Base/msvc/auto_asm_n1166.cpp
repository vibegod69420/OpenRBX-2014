// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00b53cd0();
extern "C" void fn_00b8c1b0();
extern "C" void fn_00b8c490();
// FUNCTION: ROBLOXSTUDIO 0x00b91580
extern "C" __declspec(naked) void asm_00b91580()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test esi, esi }
	__asm { je L_00b9158f }
	__asm { lea eax, [esi + 0x94] }
	__asm { jmp L_00b91591 }
	__asm { L_00b9158f: }
	__asm { xor eax, eax }
	__asm { L_00b91591: }
	__asm { push eax }
	__asm { call fn_00b8c1b0 }
	__asm { mov ecx, eax }
	__asm { call fn_00b53cd0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_00b8c490 }
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
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov eax, ecx }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00b915d0
extern "C" __declspec(naked) void asm_00b915d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b9ab }
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
	__asm { je L_00b9163a }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { je L_00b9163a }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b91629 }
	__asm { push 0x13 }
	__asm { push 0xed54e0 }
	__asm { push 0xe99a20 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b9163a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b91629: }
	__asm { movzx eax, al }
	__asm { push 0xed5528 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b9163a: }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b91670 }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00b9166f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00b9166f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00b9166f: }
	__asm { pop edi }
	__asm { L_00b91670: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00481ce0();
extern "C" void fn_00626760();
extern "C" void fn_00629560();
extern "C" void fn_007b5ea0();
extern "C" void fn_00892440();
extern "C" void fn_00914ee0();
extern "C" void fn_00914f10();
extern "C" void fn_009153c0();
extern "C" void fn_009153f0();
// FUNCTION: ROBLOXSTUDIO 0x00b91680
extern "C" __declspec(naked) void asm_00b91680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x98 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00892440 }
	__asm { mov ecx, eax }
	__asm { call fn_00626760 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0x74] }
	__asm { push eax }
	__asm { call fn_00629560 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xa4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { call fn_00626760 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { or ebx, 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00b91721 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_007b5ea0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { test esi, esi }
	__asm { je L_00b91721 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00b91721 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00b91721 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00b91721: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00481ce0 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 8], edx }
	__asm { test esi, esi }
	__asm { je L_00b91777 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00b91777 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00b91777 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00b91777: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b917a8 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00b917a8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00b917a8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00b917a8: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x18] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_009153c0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { call fn_009153f0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { call fn_00914ee0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { call fn_00914f10 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_007b5ea0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_006d13a0();
extern "C" void fn_006d14a0();
extern "C" void fn_00771530();
extern "C" void fn_00928b00();
extern "C" void fn_0092a210();
extern "C" void fn_0092a660();
extern "C" void fn_0092ac70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b91b70
extern "C" __declspec(naked) void asm_00b91b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5b9c8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x8c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x88] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00b91dbf }
	__asm { mov eax, dword ptr [edi + 0x78] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { cmp eax, 1 }
	__asm { je L_00b91c27 }
	__asm { cmp eax, 3 }
	__asm { je L_00b91c27 }
	__asm { cmp eax, 2 }
	__asm { jne L_00b91d19 }
	__asm { call fn_006d13a0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { sub esp, 8 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov esi, esp }
	__asm { push ecx }
	__asm { mov ecx, ebx }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { mov dword ptr [ebp - 0x10], 0x3f800000 }
	__asm { call dword ptr [eax + 0x24] }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { subss xmm1, dword ptr [eax] }
	__asm { subss xmm0, dword ptr [eax + 4] }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { movss dword ptr [esi], xmm1 }
	__asm { movss dword ptr [esi + 4], xmm0 }
	__asm { call fn_00928b00 }
	__asm { jmp L_00b91d11 }
	__asm { L_00b91c27: }
	__asm { call fn_006d14a0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x30], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0x2c], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { push ecx }
	__asm { mov ecx, ebx }
	__asm { movss dword ptr [ebp - 0x28], xmm0 }
	__asm { mov dword ptr [ebp - 0x24], 0x3f800000 }
	__asm { call dword ptr [eax + 0x24] }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { subss xmm1, dword ptr [eax] }
	__asm { subss xmm0, dword ptr [eax + 4] }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov ecx, edi }
	__asm { movss dword ptr [eax], xmm1 }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { lea eax, [ebp - 0x88] }
	__asm { push eax }
	__asm { call fn_0092a660 }
	__asm { lea ecx, [eax + 8] }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { lea esi, [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { comiss xmm0, dword ptr [eax + 4] }
	__asm { lea edx, [eax + 4] }
	__asm { mov dword ptr [ebp - 0x20], edx }
	__asm { ja L_00b91cc3 }
	__asm { mov dword ptr [ebp - 0x20], esi }
	__asm { L_00b91cc3: }
	__asm { mov ebx, dword ptr [ebp - 0x20] }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { comiss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [ebx] }
	__asm { mov ebx, eax }
	__asm { ja L_00b91cd7 }
	__asm { mov ebx, ecx }
	__asm { L_00b91cd7: }
	__asm { movss xmm0, dword ptr [ebx] }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { movss dword ptr [ebp - 0x18], xmm1 }
	__asm { movss xmm0, dword ptr [edx] }
	__asm { comiss xmm0, dword ptr [esi] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { cmovbe edx, esi }
	__asm { comiss xmm0, dword ptr [ecx] }
	__asm { movss xmm1, dword ptr [edx] }
	__asm { cmovbe eax, ecx }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss dword ptr [ebp - 0x10], xmm1 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { L_00b91d11: }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00771530 }
	__asm { L_00b91d19: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 0xa0] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00b91d3e }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x98] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x9c] }
	__asm { mov esi, eax }
	__asm { jmp L_00b91d6d }
	__asm { L_00b91d3e: }
	__asm { call fn_0092a210 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x50], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0x4c], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 0x48], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { movss dword ptr [ebp - 0x44], xmm0 }
	__asm { lea esi, [ebp - 0x50] }
	__asm { L_00b91d6d: }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x78] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x8c] }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { push ecx }
	__asm { push esi }
	__asm { push eax }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x40], 0x3f000000 }
	__asm { mov dword ptr [ebp - 0x3c], 0x3f000000 }
	__asm { mov dword ptr [ebp - 0x38], 0x3f000000 }
	__asm { mov dword ptr [ebp - 0x34], 0x3e800000 }
	__asm { call fn_0092ac70 }
	__asm { cmp dword ptr [ebp - 0x64], 0x10 }
	__asm { jb L_00b91dbf }
	__asm { push dword ptr [ebp - 0x78] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b91dbf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004226b0();
extern "C" void fn_006b9e50();
extern "C" void fn_00b92740();
// FUNCTION: ROBLOXSTUDIO 0x00b92030
extern "C" __declspec(naked) void asm_00b92030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5ba4b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xed56fc }
	__asm { mov dword ptr [edi + 4], 0xed5758 }
	__asm { mov dword ptr [edi + 0x1c], 0xed578c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 0x50] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00b92094 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00b92094: }
	__asm { mov esi, dword ptr [edi + 0x4c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b920c7 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00b920c6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00b920c6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00b920c6: }
	__asm { pop ebx }
	__asm { L_00b920c7: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b92740 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
