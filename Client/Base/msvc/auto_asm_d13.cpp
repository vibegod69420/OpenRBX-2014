// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ba14b0
extern "C" __declspec(naked) void asm_00ba14b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi], 0xed7f68 }
	__asm { test ecx, ecx }
	__asm { je L_00ba14c9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00ba14c9: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00ba14d8 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ba14d8: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ba1930
extern "C" __declspec(naked) void asm_00ba1930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi], 0xed8348 }
	__asm { test ecx, ecx }
	__asm { je L_00ba1949 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00ba1949: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00ba1958 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ba1958: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0099d070();
extern "C" void fn_00b8c890();
extern "C" void fn_00ba2a40();
// FUNCTION: ROBLOXSTUDIO 0x00ba39c0
extern "C" __declspec(naked) void asm_00ba39c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00b8c890 }
	__asm { test eax, eax }
	__asm { je L_00ba39e8 }
	__asm { lea ecx, [eax - 8] }
	__asm { call fn_0099d070 }
	__asm { push eax }
	__asm { lea ecx, [esi - 0x10] }
	__asm { call fn_00ba2a40 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ba39e8: }
	__asm { xor ecx, ecx }
	__asm { call fn_0099d070 }
	__asm { push eax }
	__asm { lea ecx, [esi - 0x10] }
	__asm { call fn_00ba2a40 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c2b0();
extern "C" void fn_00ba4300();
extern "C" void fn_00c120d0();
// FUNCTION: ROBLOXSTUDIO 0x00ba3e40
extern "C" __declspec(naked) void asm_00ba3e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c2b0 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { call fn_00ba4300 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c120d0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c530();
extern "C" void fn_00ba4320();
extern "C" void fn_00c12200();
// FUNCTION: ROBLOXSTUDIO 0x00ba3e70
extern "C" __declspec(naked) void asm_00ba3e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00c12200 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { call fn_00ba4320 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c530 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c360();
extern "C" void fn_00ba4300();
extern "C" void fn_00c120d0();
// FUNCTION: ROBLOXSTUDIO 0x00ba3ea0
extern "C" __declspec(naked) void asm_00ba3ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c360 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { call fn_00ba4300 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c120d0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c620();
extern "C" void fn_00ba4320();
extern "C" void fn_00c12200();
// FUNCTION: ROBLOXSTUDIO 0x00ba3ed0
extern "C" __declspec(naked) void asm_00ba3ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00c12200 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { call fn_00ba4320 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c620 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00410ef0();
extern "C" void fn_008ff0a0();
// FUNCTION: ROBLOXSTUDIO 0x00ba4440
extern "C" __declspec(naked) void asm_00ba4440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp + 8] }
	__asm { push esi }
	__asm { push eax }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b5d9d0();
// FUNCTION: ROBLOXSTUDIO 0x00ba6440
extern "C" __declspec(naked) void asm_00ba6440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, 0 }
	__asm { je L_00ba6473 }
	__asm { dec eax }
	__asm { je L_00ba6463 }
	__asm { dec eax }
	__asm { je L_00ba645c }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_00b5d9d0 }
	__asm { L_00ba645c: }
	__asm { mov eax, dword ptr [ecx + 0x74] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ba6463: }
	__asm { mov eax, dword ptr [ecx + 0xc4] }
	__asm { add eax, dword ptr [ecx + 0xb4] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ba6473: }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006d19a0();
extern "C" void fn_009f2f40();
// FUNCTION: ROBLOXSTUDIO 0x00ba9200
extern "C" __declspec(naked) void asm_00ba9200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x28 }
	__asm { fld dword ptr [ecx + 0x90] }
	__asm { lea eax, [ecx + 0x6c] }
	__asm { push eax }
	__asm { fstp dword ptr [ebp - 4] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_006d19a0 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x28] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009f2f40 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008d1da0();
// FUNCTION: ROBLOXSTUDIO 0x00baca30
extern "C" __declspec(naked) void asm_00baca30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { call fn_008d1da0 }
	__asm { mov ecx, eax }
	__asm { lea edx, [ecx + 0x10] }
	__asm { mov word ptr [ecx + 0xc], 0 }
	__asm { test edx, edx }
	__asm { je L_00baca56 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [edx] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, ecx }
	__asm { L_00baca56: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00ca5740();
// FUNCTION: ROBLOXSTUDIO 0x00bae180
extern "C" __declspec(naked) void asm_00bae180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00ca5740 }
	__asm { mov esi, eax }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test edi, edi }
	__asm { je L_00bae1b4 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, esi }
	__asm { L_00bae1b4: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00baf830
extern "C" __declspec(naked) void asm_00baf830()
{
	__asm { push 0x28 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00baf844 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_00baf844: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_00baf84f }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00baf84f: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00baf858 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00baf858: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" char g_0130f3bc[];
extern "C" char g_0130f3c0[];
extern "C" char g_0130f3c4[];
extern "C" char g_0130f3c8[];
// FUNCTION: ROBLOXSTUDIO 0x00bbad80
extern "C" __declspec(naked) void asm_00bbad80()
{
	__asm { mov eax, dword ptr [g_0130f3c8] }
	__asm { test al, 1 }
	__asm { jne L_00bbadaf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f3c8], eax }
	__asm { mov dword ptr [g_0130f3bc], 0x58635fa9 }
	__asm { mov dword ptr [g_0130f3c0], 0x58635fa9 }
	__asm { mov dword ptr [g_0130f3c4], 0x58635fa9 }
	__asm { L_00bbadaf: }
	__asm { mov eax, 0x130f3bc }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bbda70
extern "C" __declspec(naked) void asm_00bbda70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d713 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xec }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

extern "C" char g_010381d0[];
// FUNCTION: ROBLOXSTUDIO 0x00bbddf0
extern "C" __declspec(naked) void asm_00bbddf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x25c] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { fild dword ptr [ebp + 8] }
	__asm { mov byte ptr [eax + 8], 0 }
	__asm { test ecx, ecx }
	__asm { jns L_00bbde10 }
	__asm { fadd qword ptr [g_010381d0] }
	__asm { L_00bbde10: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { fmul qword ptr [ecx + 8] }
	__asm { fstp qword ptr [eax] }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00bbf800
extern "C" __declspec(naked) void asm_00bbf800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 8], 0x67452301 }
	__asm { mov dword ptr [eax + 0xc], 0xefcdab89 }
	__asm { mov dword ptr [eax + 0x10], 0x98badcfe }
	__asm { mov dword ptr [eax + 0x14], 0x10325476 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc9a90();
// FUNCTION: ROBLOXSTUDIO 0x00bc6250
extern "C" __declspec(naked) void asm_00bc6250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00bc9a90 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jne L_00bc6275 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov al, 1 }
	__asm { shl al, cl }
	__asm { or byte ptr [esi + 6], al }
	__asm { xor eax, eax }
	__asm { L_00bc6275: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6400();
// FUNCTION: ROBLOXSTUDIO 0x00bc6690
extern "C" __declspec(naked) void asm_00bc6690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { lea esi, [edx + 0x10] }
	__asm { cmp dword ptr [edx + 8], esi }
	__asm { je L_00bc66af }
	__asm { mov ecx, dword ptr [edx + 0x14] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { L_00bc66af: }
	__asm { push 0 }
	__asm { push 0x20 }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6400();
extern "C" void fn_00bc6fc0();
// FUNCTION: ROBLOXSTUDIO 0x00bc6860
extern "C" __declspec(naked) void asm_00bc6860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push 0x20 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc6400 }
	__asm { mov edi, eax }
	__asm { push 0xa }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc6fc0 }
	__asm { lea ecx, [edi + 0x10] }
	__asm { add esp, 0x1c }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov eax, edi }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc7710();
// FUNCTION: ROBLOXSTUDIO 0x00bc6d00
extern "C" __declspec(naked) void asm_00bc6d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp byte ptr [eax + 0x15], 1 }
	__asm { jne L_00bc6d1d }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00bc7710 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc6d1d: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov cl, byte ptr [eax + 0x14] }
	__asm { mov al, byte ptr [edx + 5] }
	__asm { and cl, 3 }
	__asm { and al, 0xf8 }
	__asm { or cl, al }
	__asm { mov byte ptr [edx + 5], cl }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc9a00();
extern "C" void fn_00bc9e10();
// FUNCTION: ROBLOXSTUDIO 0x00bc9cc0
extern "C" __declspec(naked) void asm_00bc9cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00bc9a00 }
	__asm { add esp, 8 }
	__asm { cmp eax, 0xea7e68 }
	__asm { jne L_00bc9cfa }
	__asm { fild dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { fstp qword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 8], 3 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc9e10 }
	__asm { add esp, 0xc }
	__asm { L_00bc9cfa: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c18f70();
// FUNCTION: ROBLOXSTUDIO 0x00bcd220
extern "C" __declspec(naked) void asm_00bcd220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [eax + 0x30] }
	__asm { call fn_00c18f70 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ecx + 0x10], 0xffffffff }
	__asm { mov dword ptr [ecx + 0x14], 0xffffffff }
	__asm { mov dword ptr [ecx], 4 }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bcfb00
extern "C" __declspec(naked) void asm_00bcfb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov word ptr [ecx + 8], 0x300 }
	__asm { mov dword ptr [ecx + 0x14], 0xffffffff }
	__asm { mov dword ptr [ecx + 0x18], 0xffffffff }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00715550();
// FUNCTION: ROBLOXSTUDIO 0x00bd0240
extern "C" __declspec(naked) void asm_00bd0240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00715550 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00555a90();
// FUNCTION: ROBLOXSTUDIO 0x00bd13b0
extern "C" __declspec(naked) void asm_00bd13b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push 0x478c90 }
	__asm { push 0x28 }
	__asm { push 0xc }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { push ecx }
	__asm { call fn_00555a90 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [edx + 0x1e0], 0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bd1810
extern "C" __declspec(naked) void asm_00bd1810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], 0xee28f0 }
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
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00bd1840
extern "C" __declspec(naked) void asm_00bd1840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx], 0xee28f0 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00bd1a20();
// FUNCTION: ROBLOXSTUDIO 0x00bd1b30
extern "C" __declspec(naked) void asm_00bd1b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi + 0x12c], 0xe4687c }
	__asm { mov dword ptr [esi + 0x110], 0xe4687c }
	__asm { je L_00bd1b59 }
	__asm { push esi }
	__asm { call fn_00bd1a20 }
	__asm { add esp, 4 }
	__asm { L_00bd1b59: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bd18f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bd1b60
extern "C" __declspec(naked) void asm_00bd1b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { call fn_00bd18f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { and eax, 1 }
	__asm { je L_00bd1b83 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bd1b83: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00bd3f20
extern "C" __declspec(naked) void asm_00bd3f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], 0xee2db0 }
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
	__asm { mov al, byte ptr [edx + 0x18] }
	__asm { mov byte ptr [ecx + 0x18], al }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bd3fa0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bd40e0
extern "C" __declspec(naked) void asm_00bd40e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { call fn_00bd3fa0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { and eax, 1 }
	__asm { je L_00bd4103 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bd4103: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00496100();
// FUNCTION: ROBLOXSTUDIO 0x00bd52f0
extern "C" __declspec(naked) void asm_00bd52f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00bd530e }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { push dword ptr [eax + 0x100] }
	__asm { call fn_00496100 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bd530e: }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { push dword ptr [eax + 0x100] }
	__asm { call fn_00496100 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b49920();
// FUNCTION: ROBLOXSTUDIO 0x00bd6b20
extern "C" __declspec(naked) void asm_00bd6b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b49920 }
	__asm { mov dword ptr [esi], 0xee371c }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0xd4], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00914100();
extern "C" void fn_00bd7640();
extern "C" void fn_00bd7800();
// FUNCTION: ROBLOXSTUDIO 0x00bd78f0
extern "C" __declspec(naked) void asm_00bd78f0()
{
	__asm { fldz }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { fstp dword ptr [esp] }
	__asm { mov eax, dword ptr [eax + 0x24] }
	__asm { call eax }
	__asm { mov ecx, esi }
	__asm { test al, al }
	__asm { je L_00bd791a }
	__asm { call fn_00914100 }
	__asm { test al, al }
	__asm { je L_00bd7916 }
	__asm { mov ecx, esi }
	__asm { call fn_00bd7640 }
	__asm { L_00bd7916: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00bd791a: }
	__asm { call fn_00bd7800 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00914100();
extern "C" void fn_00bd86d0();
extern "C" void fn_00bd8830();
// FUNCTION: ROBLOXSTUDIO 0x00bd8920
extern "C" __declspec(naked) void asm_00bd8920()
{
	__asm { fldz }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { fstp dword ptr [esp] }
	__asm { mov eax, dword ptr [eax + 0x24] }
	__asm { call eax }
	__asm { mov ecx, esi }
	__asm { test al, al }
	__asm { je L_00bd894a }
	__asm { call fn_00914100 }
	__asm { test al, al }
	__asm { je L_00bd8946 }
	__asm { mov ecx, esi }
	__asm { call fn_00bd86d0 }
	__asm { L_00bd8946: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00bd894a: }
	__asm { call fn_00bd8830 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00bdd060
extern "C" __declspec(naked) void asm_00bdd060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add ecx, 0x94 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00be8210();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00be5210
extern "C" __declspec(naked) void asm_00be5210()
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
	__asm { call fn_00be8210 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00be82d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00be5240
extern "C" __declspec(naked) void asm_00be5240()
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
	__asm { call fn_00be82d0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00be5e40
extern "C" __declspec(naked) void asm_00be5e40()
{
	__asm { push esi }
	__asm { push 0x90 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_00be5e5c }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00be5e5c: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_00be5e6b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00be5e6b: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00be5e76 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00be5e76: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00be9d40
extern "C" __declspec(naked) void asm_00be9d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x1292af0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00be9d60 }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00be9d60: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00be9d70
extern "C" __declspec(naked) void asm_00be9d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x1292a90 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00be9d90 }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00be9d90: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00be9da0
extern "C" __declspec(naked) void asm_00be9da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x1292a48 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00be9dc0 }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00be9dc0: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bdee10();
// FUNCTION: ROBLOXSTUDIO 0x00bea2f0
extern "C" __declspec(naked) void asm_00bea2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 8 }
	__asm { call fn_00bdee10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bdef10();
// FUNCTION: ROBLOXSTUDIO 0x00bea330
extern "C" __declspec(naked) void asm_00bea330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 8 }
	__asm { call fn_00bdef10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bea7e0();
// FUNCTION: ROBLOXSTUDIO 0x00bea530
extern "C" __declspec(naked) void asm_00bea530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00bea553 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bea7e0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bea553: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1292b38 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bea910();
// FUNCTION: ROBLOXSTUDIO 0x00bea570
extern "C" __declspec(naked) void asm_00bea570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00bea593 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bea910 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bea593: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1292cd0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00beaa40();
// FUNCTION: ROBLOXSTUDIO 0x00bea5b0
extern "C" __declspec(naked) void asm_00bea5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00bea5d3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00beaa40 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bea5d3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1293640 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00beab70();
// FUNCTION: ROBLOXSTUDIO 0x00bea5f0
extern "C" __declspec(naked) void asm_00bea5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00bea613 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00beab70 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bea613: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12930c8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00beacc0();
// FUNCTION: ROBLOXSTUDIO 0x00bea630
extern "C" __declspec(naked) void asm_00bea630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00bea653 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00beacc0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bea653: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1293328 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043f040();
extern "C" void fn_00bfab50();
// FUNCTION: ROBLOXSTUDIO 0x00bfab20
extern "C" __declspec(naked) void asm_00bfab20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bfab50 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00bfeca0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bfcdf0
extern "C" __declspec(naked) void asm_00bfcdf0()
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
	__asm { call fn_00bfeca0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bfdc80
extern "C" __declspec(naked) void asm_00bfdc80()
{
	__asm { push 0x5c }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00bfdc94 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_00bfdc94: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_00bfdc9f }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00bfdc9f: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00bfdca8 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00bfdca8: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bfdcb0
extern "C" __declspec(naked) void asm_00bfdcb0()
{
	__asm { push 0x1c }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00bfdcc4 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_00bfdcc4: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_00bfdccf }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00bfdccf: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00bfdcd8 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00bfdcd8: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" void fn_00bf9430();
// FUNCTION: ROBLOXSTUDIO 0x00bff590
extern "C" __declspec(naked) void asm_00bff590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 8 }
	__asm { call fn_00bf9430 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bff650();
// FUNCTION: ROBLOXSTUDIO 0x00bff5d0
extern "C" __declspec(naked) void asm_00bff5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00bff5f3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bff650 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bff5f3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1294758 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bff700();
// FUNCTION: ROBLOXSTUDIO 0x00bff610
extern "C" __declspec(naked) void asm_00bff610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00bff633 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bff700 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bff633: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12948a8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c03000
extern "C" __declspec(naked) void asm_00c03000()
{
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx + 8] }
	__asm { je L_00c03030 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00c03030: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c03350
extern "C" __declspec(naked) void asm_00c03350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { test ecx, ecx }
	__asm { je L_00c03383 }
	__asm { cmp ecx, 0x9249249 }
	__asm { ja L_00c0337d }
	__asm { lea eax, [ecx*8] }
	__asm { sub eax, ecx }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00c03383 }
	__asm { L_00c0337d: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00c03383: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c03c90
extern "C" __declspec(naked) void asm_00c03c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi], 0xee8750 }
	__asm { test ecx, ecx }
	__asm { je L_00c03ca9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00c03ca9: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c03cb8 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c03cb8: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c360();
extern "C" void fn_00ba3dc0();
extern "C" void fn_00c03b10();
// FUNCTION: ROBLOXSTUDIO 0x00c03d00
extern "C" __declspec(naked) void asm_00c03d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00b8c360 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { call fn_00ba3dc0 }
	__asm { push dword ptr [esi + 8] }
	__asm { lea ecx, [edi + 8] }
	__asm { push 0xba3e00 }
	__asm { call fn_00c03b10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c620();
extern "C" void fn_00ba3de0();
extern "C" void fn_00c03b10();
// FUNCTION: ROBLOXSTUDIO 0x00c03d40
extern "C" __declspec(naked) void asm_00c03d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push dword ptr [edi + 8] }
	__asm { push 0xba3e20 }
	__asm { call fn_00c03b10 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { call fn_00ba3de0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c620 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c360();
extern "C" void fn_00ba3ea0();
extern "C" void fn_00c03b10();
// FUNCTION: ROBLOXSTUDIO 0x00c03d80
extern "C" __declspec(naked) void asm_00c03d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00b8c360 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { call fn_00ba3ea0 }
	__asm { push dword ptr [esi + 8] }
	__asm { lea ecx, [edi + 8] }
	__asm { push 0xba3e40 }
	__asm { call fn_00c03b10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c620();
extern "C" void fn_00ba3ed0();
extern "C" void fn_00c03b10();
// FUNCTION: ROBLOXSTUDIO 0x00c03dc0
extern "C" __declspec(naked) void asm_00c03dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push dword ptr [edi + 8] }
	__asm { push 0xba3e70 }
	__asm { call fn_00c03b10 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { call fn_00ba3ed0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c620 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130fe58[];
extern "C" char g_0130fe5c[];
extern "C" char g_0130fe60[];
extern "C" char g_0130fe64[];
// FUNCTION: ROBLOXSTUDIO 0x00c0a010
extern "C" __declspec(naked) void asm_00c0a010()
{
	__asm { mov eax, dword ptr [g_0130fe64] }
	__asm { test al, 1 }
	__asm { jne L_00c0a03f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fe64], eax }
	__asm { mov dword ptr [g_0130fe58], 0x3dcccccd }
	__asm { mov dword ptr [g_0130fe5c], 0x3f19999a }
	__asm { mov dword ptr [g_0130fe60], 0x3f800000 }
	__asm { L_00c0a03f: }
	__asm { mov eax, 0x130fe58 }
	__asm { ret }
}

extern "C" void fn_0099a920();
// FUNCTION: ROBLOXSTUDIO 0x00c0eee0
extern "C" __declspec(naked) void asm_00c0eee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi - 0x24] }
	__asm { call fn_0099a920 }
	__asm { mov eax, dword ptr [esi - 0x68] }
	__asm { lea ecx, [esi - 0x68] }
	__asm { call dword ptr [eax + 0x40] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0099a920();
// FUNCTION: ROBLOXSTUDIO 0x00c0f500
extern "C" __declspec(naked) void asm_00c0f500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi - 0x1c] }
	__asm { call fn_0099a920 }
	__asm { mov eax, dword ptr [esi - 0x5c] }
	__asm { lea ecx, [esi - 0x5c] }
	__asm { mov byte ptr [esi - 0x10], 0 }
	__asm { call dword ptr [eax + 0x40] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c110e0
extern "C" __declspec(naked) void asm_00c110e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi], 0xeead98 }
	__asm { test ecx, ecx }
	__asm { je L_00c110f9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00c110f9: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c11108 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c11108: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c11320
extern "C" __declspec(naked) void asm_00c11320()
{
	__asm { push esi }
	__asm { push 0x14 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_00c11339 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00c11339: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_00c11348 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00c11348: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00c11353 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00c11353: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c119b0
extern "C" __declspec(naked) void asm_00c119b0()
{
	__asm { L_00c119b0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_00c119bc }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c119bc: }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { test eax, eax }
	__asm { jne L_00c119ca }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c119ca: }
	__asm { push eax }
	__asm { call L_00c119b0 }
	__asm { add esp, 4 }
	__asm { inc eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c11d60
extern "C" __declspec(naked) void asm_00c11d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi], 0xeeb3e0 }
	__asm { test ecx, ecx }
	__asm { je L_00c11d79 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00c11d79: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c11d88 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c11d88: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b5d560();
extern "C" void fn_00b8c620();
// FUNCTION: ROBLOXSTUDIO 0x00c12300
extern "C" __declspec(naked) void asm_00c12300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00b5d560 }
	__asm { test al, al }
	__asm { je L_00c1231f }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { L_00c1231f: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00b8c620 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c360();
// FUNCTION: ROBLOXSTUDIO 0x00c131f0
extern "C" __declspec(naked) void asm_00c131f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_00b8c360 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [esi + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bb8a80();
extern "C" void fn_00bb8ae0();
extern "C" void fn_00bb90d0();
extern "C" void fn_00bb9130();
// FUNCTION: ROBLOXSTUDIO 0x00c14980
extern "C" __declspec(naked) void asm_00c14980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00bb8a80 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bb9130 }
	__asm { fld dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { fabs }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bb90d0 }
	__asm { add eax, 0x35c }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bb8ae0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e8e05c[];
extern "C" char g_00eaccf0[];
extern "C" void fn_00c1d640();
// FUNCTION: ROBLOXSTUDIO 0x00c14d20
extern "C" __declspec(naked) void asm_00c14d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [g_00eaccf0] }
	__asm { push esi }
	__asm { sub esp, 8 }
	__asm { mov esi, ecx }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [g_00e8e05c] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c1d640 }
	__asm { mov dword ptr [esi], 0xeec7b0 }
	__asm { mov dword ptr [esi + 4], 0xeec7ec }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00bb5b90();
// FUNCTION: ROBLOXSTUDIO 0x00c14e70
extern "C" __declspec(naked) void asm_00c14e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bb5b90 }
	__asm { mov dword ptr [esi], 0xeec854 }
	__asm { mov dword ptr [esi + 4], 0xeec890 }
	__asm { mov dword ptr [esi + 0xc], 0x40400000 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0099fe10();
extern "C" void fn_009d8360();
extern "C" void fn_00bb90d0();
// FUNCTION: ROBLOXSTUDIO 0x00c15090
extern "C" __declspec(naked) void asm_00c15090()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00bb90d0 }
	__asm { cmp byte ptr [eax + 0x265], 0 }
	__asm { je L_00c150c5 }
	__asm { cmp byte ptr [eax + 0x266], 0 }
	__asm { je L_00c150c5 }
	__asm { mov ecx, esi }
	__asm { call fn_00bb90d0 }
	__asm { push eax }
	__asm { call fn_009d8360 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c150c5 }
	__asm { mov ecx, eax }
	__asm { call fn_0099fe10 }
	__asm { L_00c150c5: }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_009dd650();
extern "C" void fn_00bb90d0();
extern "C" void fn_00c2bee0();
// FUNCTION: ROBLOXSTUDIO 0x00c150d0
extern "C" __declspec(naked) void asm_00c150d0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00bb90d0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00c150fb }
	__asm { fldz }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bb90d0 }
	__asm { mov ecx, eax }
	__asm { call fn_009dd650 }
	__asm { L_00c150fb: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00c1d5d0();
// FUNCTION: ROBLOXSTUDIO 0x00c15100
extern "C" __declspec(naked) void asm_00c15100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c1d5d0 }
	__asm { mov dword ptr [esi], 0xeec8f0 }
	__asm { mov dword ptr [esi + 4], 0xeec92c }
	__asm { mov dword ptr [esi + 0xb8], 0x459c4000 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00bc88e0();
// FUNCTION: ROBLOXSTUDIO 0x00c17ff0
extern "C" __declspec(naked) void asm_00c17ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ebx, dword ptr [esi + 0x24] }
	__asm { movzx eax, byte ptr [eax + 0x4b] }
	__asm { add ebx, dword ptr [ebp + 0xc] }
	__asm { cmp ebx, eax }
	__asm { jle L_00c18025 }
	__asm { cmp ebx, 0xfa }
	__asm { jl L_00c18020 }
	__asm { push 0xeecf1c }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 8 }
	__asm { L_00c18020: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [eax + 0x4b], bl }
	__asm { L_00c18025: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c18030();
// FUNCTION: ROBLOXSTUDIO 0x00c180d0
extern "C" __declspec(naked) void asm_00c180d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { shl eax, 9 }
	__asm { or eax, dword ptr [ebp + 0x18] }
	__asm { shl eax, 8 }
	__asm { or eax, dword ptr [ebp + 0x10] }
	__asm { shl eax, 6 }
	__asm { or eax, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00c18030 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c18030();
extern "C" void fn_00c18130();
// FUNCTION: ROBLOXSTUDIO 0x00c18710
extern "C" __declspec(naked) void asm_00c18710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov esi, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [edi + 0x20], 0xffffffff }
	__asm { push dword ptr [eax + 8] }
	__asm { push 0x7fff8016 }
	__asm { push edi }
	__asm { call fn_00c18030 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00c18130 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x18 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c18030();
// FUNCTION: ROBLOXSTUDIO 0x00c18bc0
extern "C" __declspec(naked) void asm_00c18bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { lea ecx, [ecx + 1] }
	__asm { push dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { shl ecx, 0x17 }
	__asm { shl eax, 6 }
	__asm { or ecx, eax }
	__asm { or ecx, 0x1e }
	__asm { push ecx }
	__asm { push edx }
	__asm { call fn_00c18030 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00914100();
extern "C" void fn_00c1b2f0();
extern "C" void fn_00c1b450();
// FUNCTION: ROBLOXSTUDIO 0x00c1b540
extern "C" __declspec(naked) void asm_00c1b540()
{
	__asm { fldz }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { fstp dword ptr [esp] }
	__asm { mov eax, dword ptr [eax + 0x24] }
	__asm { call eax }
	__asm { mov ecx, esi }
	__asm { test al, al }
	__asm { je L_00c1b56a }
	__asm { call fn_00914100 }
	__asm { test al, al }
	__asm { je L_00c1b566 }
	__asm { mov ecx, esi }
	__asm { call fn_00c1b2f0 }
	__asm { L_00c1b566: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00c1b56a: }
	__asm { call fn_00c1b450 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c1d310
extern "C" __declspec(naked) void asm_00c1d310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi], 0xeedec4 }
	__asm { test ecx, ecx }
	__asm { je L_00c1d329 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00c1d329: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c1d338 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c1d338: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10194[];
extern "C" void fn_00c2b610();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c22c50
extern "C" __declspec(naked) void asm_00c22c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00c22c8a }
	__asm { xor ecx, ecx }
	__asm { lea eax, [esi + 0x18] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00c22c6d }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_00c22c6d: }
	__asm { mov ecx, esi }
	__asm { call fn_00c2b610 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { push esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { L_00c22c8a: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043f040();
extern "C" void fn_00c22da0();
// FUNCTION: ROBLOXSTUDIO 0x00c22d70
extern "C" __declspec(naked) void asm_00c22d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c22da0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00c22eb0();
// FUNCTION: ROBLOXSTUDIO 0x00c22e80
extern "C" __declspec(naked) void asm_00c22e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c22eb0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00c22fc0();
// FUNCTION: ROBLOXSTUDIO 0x00c22f90
extern "C" __declspec(naked) void asm_00c22f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c22fc0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00c23090();
// FUNCTION: ROBLOXSTUDIO 0x00c23060
extern "C" __declspec(naked) void asm_00c23060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c23090 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00c231a0();
// FUNCTION: ROBLOXSTUDIO 0x00c23170
extern "C" __declspec(naked) void asm_00c23170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c231a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01296460[];
extern "C" char g_01296464[];
extern "C" char g_01296468[];
extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
// FUNCTION: ROBLOXSTUDIO 0x00c26cf0
extern "C" __declspec(naked) void asm_00c26cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00c687d0 }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_00c68890 }
	__asm { mov eax, dword ptr [g_01296460] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [g_01296464] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov ax, word ptr [g_01296468] }
	__asm { lea ecx, [edi + 0x10] }
	__asm { mov word ptr [edi + 8], ax }
	__asm { call fn_00c688b0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c2f670();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c282b0
extern "C" __declspec(naked) void asm_00c282b0()
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
	__asm { call fn_00c2f670 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c2b300
extern "C" __declspec(naked) void asm_00c2b300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x3c }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00c2b317 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00c2b317: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_00c2b324 }
	__asm { mov ecx, eax }
	__asm { mov edx, eax }
	__asm { jmp L_00c2b327 }
	__asm { L_00c2b324: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00c2b327: }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea ecx, [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00c2b332 }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_00c2b332: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c2b340
extern "C" __declspec(naked) void asm_00c2b340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x4c }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00c2b357 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00c2b357: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_00c2b364 }
	__asm { mov ecx, eax }
	__asm { mov edx, eax }
	__asm { jmp L_00c2b367 }
	__asm { L_00c2b364: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00c2b367: }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea ecx, [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00c2b372 }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_00c2b372: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b69050();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c2b380
extern "C" __declspec(naked) void asm_00c2b380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { call fn_00b69050 }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c2b430();
// FUNCTION: ROBLOXSTUDIO 0x00c2b6e0
extern "C" __declspec(naked) void asm_00c2b6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00c2b708 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c2b430 }
	__asm { dec dword ptr [edi + 4] }
	__asm { L_00c2b708: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c20440();
// FUNCTION: ROBLOXSTUDIO 0x00c2c8f0
extern "C" __declspec(naked) void asm_00c2c8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { add ecx, 0x10 }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { add ecx, 8 }
	__asm { call fn_00c20440 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c23280();
// FUNCTION: ROBLOXSTUDIO 0x00c2cf60
extern "C" __declspec(naked) void asm_00c2cf60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c2cf8e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c23280 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c2cf8e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c23330();
// FUNCTION: ROBLOXSTUDIO 0x00c2cfa0
extern "C" __declspec(naked) void asm_00c2cfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c2cfce }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c23330 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c2cfce: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c20280();
extern "C" void fn_00c366a0();
// FUNCTION: ROBLOXSTUDIO 0x00c2d660
extern "C" __declspec(naked) void asm_00c2d660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00c2d679 }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00c2d67b }
	__asm { L_00c2d679: }
	__asm { xor bl, bl }
	__asm { L_00c2d67b: }
	__asm { call fn_00c366a0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00c20280 }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c20310();
extern "C" void fn_00c52bb0();
// FUNCTION: ROBLOXSTUDIO 0x00c2d6a0
extern "C" __declspec(naked) void asm_00c2d6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00c2d6b9 }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00c2d6bb }
	__asm { L_00c2d6b9: }
	__asm { xor bl, bl }
	__asm { L_00c2d6bb: }
	__asm { call fn_00c52bb0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00c20310 }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c2ec40();
// FUNCTION: ROBLOXSTUDIO 0x00c2e130
extern "C" __declspec(naked) void asm_00c2e130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c2e14b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c2ec40 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c2e14b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00c2ec40 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c2efe0();
// FUNCTION: ROBLOXSTUDIO 0x00c2e160
extern "C" __declspec(naked) void asm_00c2e160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c2e17b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c2efe0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c2e17b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00c2efe0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10194[];
extern "C" void fn_00c2b610();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c2f5e0
extern "C" __declspec(naked) void asm_00c2f5e0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00c2f617 }
	__asm { xor ecx, ecx }
	__asm { lea eax, [esi + 0x18] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00c2f5fa }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_00c2f5fa: }
	__asm { mov ecx, esi }
	__asm { call fn_00c2b610 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { push esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { L_00c2f617: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00c2c260();
// FUNCTION: ROBLOXSTUDIO 0x00c2fa60
extern "C" __declspec(naked) void asm_00c2fa60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c2fa6f }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00c2fa71 }
	__asm { L_00c2fa6f: }
	__asm { xor edx, edx }
	__asm { L_00c2fa71: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x2c] }
	__asm { push dword ptr [ecx + 0x28] }
	__asm { push edx }
	__asm { call fn_00c2c260 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00408320();
extern "C" void fn_00c214b0();
// FUNCTION: ROBLOXSTUDIO 0x00c324c0
extern "C" __declspec(naked) void asm_00c324c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00c214b0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408320();
extern "C" void fn_00c21540();
// FUNCTION: ROBLOXSTUDIO 0x00c324f0
extern "C" __declspec(naked) void asm_00c324f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00c21540 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c32a20();
// FUNCTION: ROBLOXSTUDIO 0x00c32620
extern "C" __declspec(naked) void asm_00c32620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c32643 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c32a20 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c32643: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1296510 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c32b60();
// FUNCTION: ROBLOXSTUDIO 0x00c326c0
extern "C" __declspec(naked) void asm_00c326c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c326e3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c32b60 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c326e3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1296680 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c32ce0();
// FUNCTION: ROBLOXSTUDIO 0x00c32730
extern "C" __declspec(naked) void asm_00c32730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c32753 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c32ce0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c32753: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12967e8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00c37110
extern "C" __declspec(naked) void asm_00c37110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { xor eax, eax }
	__asm { mov byte ptr [ebp - 1], al }
	__asm { mov cl, byte ptr [ebp - 1] }
	__asm { mov byte ptr [ebp - 8], cl }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e131b8[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c37150
extern "C" __declspec(naked) void asm_00c37150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { call dword ptr [g_00e131b8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { and eax, 1 }
	__asm { je L_00c37174 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c37174: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007a3000();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c3cfc0
extern "C" __declspec(naked) void asm_00c3cfc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00c3cfeb }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007a3000 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { L_00c3cfeb: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043f040();
extern "C" void fn_00c3d0c0();
// FUNCTION: ROBLOXSTUDIO 0x00c3d090
extern "C" __declspec(naked) void asm_00c3d090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c3d0c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00c3d1d0();
// FUNCTION: ROBLOXSTUDIO 0x00c3d1a0
extern "C" __declspec(naked) void asm_00c3d1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c3d1d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00c3d3c0();
// FUNCTION: ROBLOXSTUDIO 0x00c3d390
extern "C" __declspec(naked) void asm_00c3d390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c3d3c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009cf000();
// FUNCTION: ROBLOXSTUDIO 0x00c3d4a0
extern "C" __declspec(naked) void asm_00c3d4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009cf000 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00c3d500();
// FUNCTION: ROBLOXSTUDIO 0x00c3d4d0
extern "C" __declspec(naked) void asm_00c3d4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c3d500 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00c3d5e0();
// FUNCTION: ROBLOXSTUDIO 0x00c3d5b0
extern "C" __declspec(naked) void asm_00c3d5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c3d5e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00c3d770();
// FUNCTION: ROBLOXSTUDIO 0x00c3d740
extern "C" __declspec(naked) void asm_00c3d740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c3d770 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00c3d850();
// FUNCTION: ROBLOXSTUDIO 0x00c3d820
extern "C" __declspec(naked) void asm_00c3d820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c3d850 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007706e0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00c3dd00
extern "C" __declspec(naked) void asm_00c3dd00()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_007706e0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00c3dd1e }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00c3dd1e: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_004833f0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00c3dd30
extern "C" __declspec(naked) void asm_00c3dd30()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_004833f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00c3dd4e }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00c3dd4e: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00c3d4a0();
// FUNCTION: ROBLOXSTUDIO 0x00c45300
extern "C" __declspec(naked) void asm_00c45300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c4532e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c3d4a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c4532e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c3d4d0();
// FUNCTION: ROBLOXSTUDIO 0x00c45340
extern "C" __declspec(naked) void asm_00c45340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c4536e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c3d4d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c4536e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c3d5b0();
// FUNCTION: ROBLOXSTUDIO 0x00c45380
extern "C" __declspec(naked) void asm_00c45380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c453ae }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c3d5b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c453ae: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c3d690();
// FUNCTION: ROBLOXSTUDIO 0x00c453c0
extern "C" __declspec(naked) void asm_00c453c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c453ee }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c3d690 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c453ee: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c3d740();
// FUNCTION: ROBLOXSTUDIO 0x00c45400
extern "C" __declspec(naked) void asm_00c45400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c4542e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c3d740 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c4542e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00865390();
// FUNCTION: ROBLOXSTUDIO 0x00c45440
extern "C" __declspec(naked) void asm_00c45440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c4546e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00865390 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c4546e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c3d820();
// FUNCTION: ROBLOXSTUDIO 0x00c45480
extern "C" __declspec(naked) void asm_00c45480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c454ae }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c3d820 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c454ae: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c3ad20();
extern "C" void fn_00c52a60();
// FUNCTION: ROBLOXSTUDIO 0x00c460c0
extern "C" __declspec(naked) void asm_00c460c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00c460d9 }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00c460db }
	__asm { L_00c460d9: }
	__asm { xor bl, bl }
	__asm { L_00c460db: }
	__asm { call fn_00c52a60 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00c3ad20 }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c3adb0();
extern "C" void fn_00c52b40();
// FUNCTION: ROBLOXSTUDIO 0x00c46100
extern "C" __declspec(naked) void asm_00c46100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00c46119 }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00c4611b }
	__asm { L_00c46119: }
	__asm { xor bl, bl }
	__asm { L_00c4611b: }
	__asm { call fn_00c52b40 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00c3adb0 }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0081cb30();
// FUNCTION: ROBLOXSTUDIO 0x00c466e0
extern "C" __declspec(naked) void asm_00c466e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c466fb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_0081cb30 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c466fb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_0081cb30 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0081cec0();
// FUNCTION: ROBLOXSTUDIO 0x00c46710
extern "C" __declspec(naked) void asm_00c46710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c4672b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_0081cec0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c4672b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_0081cec0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c46860();
// FUNCTION: ROBLOXSTUDIO 0x00c46740
extern "C" __declspec(naked) void asm_00c46740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c4675b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c46860 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c4675b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00c46860 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009acd80();
// FUNCTION: ROBLOXSTUDIO 0x00c46770
extern "C" __declspec(naked) void asm_00c46770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c4678b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009acd80 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c4678b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_009acd80 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c46bf0();
// FUNCTION: ROBLOXSTUDIO 0x00c467a0
extern "C" __declspec(naked) void asm_00c467a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c467bb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c46bf0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c467bb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00c46bf0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c46f80();
// FUNCTION: ROBLOXSTUDIO 0x00c467d0
extern "C" __declspec(naked) void asm_00c467d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c467eb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c46f80 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c467eb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00c46f80 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c47310();
// FUNCTION: ROBLOXSTUDIO 0x00c46800
extern "C" __declspec(naked) void asm_00c46800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c4681b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c47310 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c4681b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00c47310 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c476a0();
// FUNCTION: ROBLOXSTUDIO 0x00c46830
extern "C" __declspec(naked) void asm_00c46830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c4684b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c476a0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c4684b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00c476a0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408320();
extern "C" void fn_00c3b280();
// FUNCTION: ROBLOXSTUDIO 0x00c4d100
extern "C" __declspec(naked) void asm_00c4d100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00c3b280 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c4e160();
// FUNCTION: ROBLOXSTUDIO 0x00c4d500
extern "C" __declspec(naked) void asm_00c4d500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c4d523 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c4e160 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c4d523: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x129a7a0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c4e270();
// FUNCTION: ROBLOXSTUDIO 0x00c4d5a0
extern "C" __declspec(naked) void asm_00c4d5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c4d5c3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c4e270 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c4d5c3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x129a598 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00424f10();
extern "C" void fn_00463db0();
extern "C" void fn_00c4f590();
// FUNCTION: ROBLOXSTUDIO 0x00c4eeb0
extern "C" __declspec(naked) void asm_00c4eeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00424f10 }
	__asm { test eax, eax }
	__asm { je L_00c4eee1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0x178] }
	__asm { test esi, esi }
	__asm { je L_00c4eee0 }
	__asm { push esi }
	__asm { call fn_00463db0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c4eee0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_00c4f590 }
	__asm { L_00c4eee0: }
	__asm { pop esi }
	__asm { L_00c4eee1: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00c50c10
extern "C" __declspec(naked) void asm_00c50c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x1dc], eax }
	__asm { je L_00c50c3d }
	__asm { push 0x131194c }
	__asm { mov dword ptr [esi + 0x1dc], eax }
	__asm { call fn_007b4f50 }
	__asm { push 0x1311384 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00c50c3d: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00c51970
extern "C" __declspec(naked) void asm_00c51970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x1d8], eax }
	__asm { je L_00c5199d }
	__asm { push 0x1311efc }
	__asm { mov dword ptr [esi + 0x1d8], eax }
	__asm { call fn_007b4f50 }
	__asm { push 0x1311fdc }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00c5199d: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00426fa0();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00c51a80
extern "C" __declspec(naked) void asm_00c51a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp al, byte ptr [esi + 0x70] }
	__asm { je L_00c51aba }
	__asm { cmp byte ptr [esi + 0x120], 0 }
	__asm { mov byte ptr [esi + 0x70], al }
	__asm { je L_00c51aae }
	__asm { cmp dword ptr [esi + 0x90], 0 }
	__asm { lea ecx, [esi + 0x90] }
	__asm { je L_00c51aae }
	__asm { call fn_00426fa0 }
	__asm { L_00c51aae: }
	__asm { push 0x1311d70 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00c51aba: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}
