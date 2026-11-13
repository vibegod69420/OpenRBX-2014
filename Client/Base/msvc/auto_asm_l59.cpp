// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_010381bc[];
// FUNCTION: ROBLOXSTUDIO 0x00c03e00
extern "C" __declspec(naked) void asm_00c03e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { movss xmm1, dword ptr [g_010381bc] }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mulss xmm0, xmm1 }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 4] }
	__asm { mulss xmm0, xmm1 }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { mulss xmm0, xmm1 }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c0a970
extern "C" __declspec(naked) void asm_00c0a970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00c0a98f }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00c0a98f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c0a98f: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bb5b90();
// FUNCTION: ROBLOXSTUDIO 0x00c1d640
extern "C" __declspec(naked) void asm_00c1d640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bb5b90 }
	__asm { movss xmm0, dword ptr [ebp + 0x10] }
	__asm { movss dword ptr [esi + 0xb8], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], 0xeee0e4 }
	__asm { mov dword ptr [esi + 4], 0xeee120 }
	__asm { movss dword ptr [esi + 0xbc], xmm0 }
	__asm { mov dword ptr [esi + 0xc0], 0 }
	__asm { mov dword ptr [esi + 0xc4], 0 }
	__asm { mov dword ptr [esi + 0xc8], 0 }
	__asm { mov dword ptr [esi + 0xcc], 0xffffffff }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c52980
extern "C" __declspec(naked) void asm_00c52980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00c529b2 }
	__asm { add ecx, 8 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00c529b2: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c52c20();
// FUNCTION: ROBLOXSTUDIO 0x00c52cf0
extern "C" __declspec(naked) void asm_00c52cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c52c20 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00c52d1d }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00c52d1d: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c54d80
extern "C" __declspec(naked) void asm_00c54d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00c54da7 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00c54da7: }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c57cf0();
// FUNCTION: ROBLOXSTUDIO 0x00c57e80
extern "C" __declspec(naked) void asm_00c57e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c57cf0 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00c57ead }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00c57ead: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c57db0();
// FUNCTION: ROBLOXSTUDIO 0x00c57ec0
extern "C" __declspec(naked) void asm_00c57ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c57db0 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00c57eed }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00c57eed: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c608e0();
// FUNCTION: ROBLOXSTUDIO 0x00c609c0
extern "C" __declspec(naked) void asm_00c609c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c608e0 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00c609ed }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00c609ed: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c669f0
extern "C" __declspec(naked) void asm_00c669f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [esi + 0x48] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00c66a17 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00c66a17: }
	__asm { push dword ptr [esi + 0x40] }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040e210();
extern "C" void fn_00c6fe50();
// FUNCTION: ROBLOXSTUDIO 0x00c795b0
extern "C" __declspec(naked) void asm_00c795b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_0040e210 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { call fn_00c6fe50 }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0044d240();
extern "C" void fn_00c70200();
// FUNCTION: ROBLOXSTUDIO 0x00c79780
extern "C" __declspec(naked) void asm_00c79780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_0044d240 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { call fn_00c70200 }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c79c90
extern "C" __declspec(naked) void asm_00c79c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00c79ca9 }
	__asm { lea edx, [eax - 0x50] }
	__asm { jmp L_00c79cab }
	__asm { L_00c79ca9: }
	__asm { xor edx, edx }
	__asm { L_00c79cab: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00c79cc6 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00c79cc6: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c814c0
extern "C" __declspec(naked) void asm_00c814c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { push dword ptr [edx + 0x18] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00c814ee }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00c814ee: }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { call eax }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ce13a0
extern "C" __declspec(naked) void asm_00ce13a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { comiss xmm0, dword ptr [eax + 8] }
	__asm { jbe L_00ce13b8 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ce13b8: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00626a40();
// FUNCTION: ROBLOXSTUDIO 0x00d09470
extern "C" __declspec(naked) void asm_00d09470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { call fn_00626a40 }
	__asm { mov edx, eax }
	__asm { lea ebx, [edx + 0x10] }
	__asm { mov word ptr [edx + 0xc], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00d094a2 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, eax }
	__asm { mov ecx, 9 }
	__asm { mov edi, ebx }
	__asm { rep movsd }
	__asm { mov eax, dword ptr [eax + 0x24] }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 0x24], eax }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { L_00d094a2: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}
