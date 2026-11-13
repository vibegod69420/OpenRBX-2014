// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x009f8bc0
extern "C" __declspec(naked) void asm_009f8bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 0xc8] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov edx, dword ptr [ecx + 0xcc] }
	__asm { mov ecx, dword ptr [ecx + 0xd0] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006d1e60();
extern "C" void fn_00a106a0();
// FUNCTION: ROBLOXSTUDIO 0x00a10670
extern "C" __declspec(naked) void asm_00a10670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 2 }
	__asm { push eax }
	__asm { call fn_006d1e60 }
	__asm { push eax }
	__asm { call fn_00a106a0 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a24190();
// FUNCTION: ROBLOXSTUDIO 0x00a25900
extern "C" __declspec(naked) void asm_00a25900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00a24190 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a24250();
// FUNCTION: ROBLOXSTUDIO 0x00a25930
extern "C" __declspec(naked) void asm_00a25930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00a24250 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a29be0();
// FUNCTION: ROBLOXSTUDIO 0x00a29bb0
extern "C" __declspec(naked) void asm_00a29bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp - 4] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a29be0 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00a2bd50
extern "C" __declspec(naked) void asm_00a2bd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe4e93c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a30af0
extern "C" __declspec(naked) void asm_00a30af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { xor edx, edx }
	__asm { cmp byte ptr [ebp + 8], dl }
	__asm { mov eax, 4 }
	__asm { cmovne edx, eax }
	__asm { mov eax, dword ptr [ecx + 0xa0] }
	__asm { and eax, 0xfffffffb }
	__asm { or edx, eax }
	__asm { mov dword ptr [ecx + 0xa0], edx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a30b20
extern "C" __declspec(naked) void asm_00a30b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { xor edx, edx }
	__asm { cmp byte ptr [ebp + 8], dl }
	__asm { mov eax, 4 }
	__asm { cmovne edx, eax }
	__asm { mov eax, dword ptr [ecx + 0xf0] }
	__asm { and eax, 0xfffffffb }
	__asm { or edx, eax }
	__asm { mov dword ptr [ecx + 0xf0], edx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a30b50
extern "C" __declspec(naked) void asm_00a30b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { xor edx, edx }
	__asm { cmp byte ptr [ebp + 8], dl }
	__asm { mov eax, 4 }
	__asm { cmovne edx, eax }
	__asm { mov eax, dword ptr [ecx + 0x60] }
	__asm { and eax, 0xfffffffb }
	__asm { or edx, eax }
	__asm { mov dword ptr [ecx + 0x60], edx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a30b70
extern "C" __declspec(naked) void asm_00a30b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { xor edx, edx }
	__asm { cmp byte ptr [ebp + 8], dl }
	__asm { mov eax, 4 }
	__asm { cmovne edx, eax }
	__asm { mov eax, dword ptr [ecx + 0x68] }
	__asm { and eax, 0xfffffffb }
	__asm { or edx, eax }
	__asm { mov dword ptr [ecx + 0x68], edx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a34cd0
extern "C" __declspec(naked) void asm_00a34cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { add dword ptr [esi + 8], 0x10 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a35780
extern "C" __declspec(naked) void asm_00a35780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov dword ptr [eax + 8], 8 }
	__asm { mov ecx, dword ptr [edx + 0x10] }
	__asm { add dword ptr [edx + 8], 0x10 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 0x70], edx }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a3f7f0
extern "C" __declspec(naked) void asm_00a3f7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0xe6f058 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0124eacc[];
extern "C" void fn_00a389c0();
extern "C" void fn_00b7a8d0();
// FUNCTION: ROBLOXSTUDIO 0x00a40340
extern "C" __declspec(naked) void asm_00a40340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eacc] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b7a8d0 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb30[];
extern "C" void fn_00a389c0();
extern "C" void fn_00b7abc0();
// FUNCTION: ROBLOXSTUDIO 0x00a40370
extern "C" __declspec(naked) void asm_00a40370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb30] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b7abc0 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb2c[];
extern "C" void fn_00a389c0();
extern "C" void fn_00b7ac30();
// FUNCTION: ROBLOXSTUDIO 0x00a403a0
extern "C" __declspec(naked) void asm_00a403a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb2c] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b7ac30 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb20[];
extern "C" void fn_00a389c0();
extern "C" void fn_00b7aca0();
// FUNCTION: ROBLOXSTUDIO 0x00a403d0
extern "C" __declspec(naked) void asm_00a403d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb20] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b7aca0 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb24[];
extern "C" void fn_00a389c0();
extern "C" void fn_00b7ad10();
// FUNCTION: ROBLOXSTUDIO 0x00a40400
extern "C" __declspec(naked) void asm_00a40400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb24] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b7ad10 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb14[];
extern "C" void fn_00a389c0();
extern "C" void fn_00b7ad80();
// FUNCTION: ROBLOXSTUDIO 0x00a40430
extern "C" __declspec(naked) void asm_00a40430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb14] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b7ad80 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb18[];
extern "C" void fn_00a389c0();
extern "C" void fn_00b7adf0();
// FUNCTION: ROBLOXSTUDIO 0x00a40460
extern "C" __declspec(naked) void asm_00a40460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb18] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b7adf0 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb30[];
extern "C" void fn_008dfac0();
extern "C" void fn_00a35710();
extern "C" void fn_00a38fc0();
// FUNCTION: ROBLOXSTUDIO 0x00a40e70
extern "C" __declspec(naked) void asm_00a40e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_0124eb30] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a38fc0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_008dfac0 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35710 }
}

extern "C" char g_0124eb34[];
extern "C" void fn_00a35e70();
// FUNCTION: ROBLOXSTUDIO 0x00a419c0
extern "C" __declspec(naked) void asm_00a419c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a35e70 }
	__asm { mov ecx, dword ptr [g_0124eb34] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { cmovne ecx, eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d0020();
extern "C" void fn_00a559f0();
// FUNCTION: ROBLOXSTUDIO 0x00a41d90
extern "C" __declspec(naked) void asm_00a41d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00a559f0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d0020 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008bef80();
extern "C" void fn_008bf7d0();
// FUNCTION: ROBLOXSTUDIO 0x00a41db0
extern "C" __declspec(naked) void asm_00a41db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_008bf7d0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_008bef80 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a423a0();
// FUNCTION: ROBLOXSTUDIO 0x00a428c0
extern "C" __declspec(naked) void asm_00a428c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a423a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a427c0();
// FUNCTION: ROBLOXSTUDIO 0x00a428f0
extern "C" __declspec(naked) void asm_00a428f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a427c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a42800();
// FUNCTION: ROBLOXSTUDIO 0x00a42920
extern "C" __declspec(naked) void asm_00a42920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a42800 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a42840();
// FUNCTION: ROBLOXSTUDIO 0x00a42950
extern "C" __declspec(naked) void asm_00a42950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a42840 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a42880();
// FUNCTION: ROBLOXSTUDIO 0x00a42980
extern "C" __declspec(naked) void asm_00a42980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a42880 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006da0e0();
// FUNCTION: ROBLOXSTUDIO 0x00a55c40
extern "C" __declspec(naked) void asm_00a55c40()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_006da0e0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0045bdf0();
// FUNCTION: ROBLOXSTUDIO 0x00a5d310
extern "C" __declspec(naked) void asm_00a5d310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_0045bdf0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_011fa331[];
// FUNCTION: ROBLOXSTUDIO 0x00a70d90
extern "C" __declspec(naked) void asm_00a70d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov dl, byte ptr [g_011fa331] }
	__asm { movzx ecx, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ebp + 8], dl }
	__asm { push ebx }
	__asm { movzx ebx, dl }
	__asm { cmovne ebx, ecx }
	__asm { mov byte ptr [g_011fa331], bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a76a70();
// FUNCTION: ROBLOXSTUDIO 0x00a726d0
extern "C" __declspec(naked) void asm_00a726d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [eax] }
	__asm { push dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a76a70 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00a759b0
extern "C" __declspec(naked) void asm_00a759b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xeae308 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00424610();
// FUNCTION: ROBLOXSTUDIO 0x00a7ad00
extern "C" __declspec(naked) void asm_00a7ad00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0xb0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00424610 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006c46a0();
// FUNCTION: ROBLOXSTUDIO 0x00a80ca0
extern "C" __declspec(naked) void asm_00a80ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [ecx + 0x218] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008a40a0();
// FUNCTION: ROBLOXSTUDIO 0x00a83860
extern "C" __declspec(naked) void asm_00a83860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0x64] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a40a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a88980();
// FUNCTION: ROBLOXSTUDIO 0x00a89ff0
extern "C" __declspec(naked) void asm_00a89ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { push eax }
	__asm { call fn_00a88980 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006c46c0();
// FUNCTION: ROBLOXSTUDIO 0x00a8b150
extern "C" __declspec(naked) void asm_00a8b150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [ecx + 0x210] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a96600
extern "C" __declspec(naked) void asm_00a96600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { fld dword ptr [ecx + 0x134] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 0x138] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { fld dword ptr [ecx + 0x13c] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a9f8d0
extern "C" __declspec(naked) void asm_00a9f8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00a9f620();
// FUNCTION: ROBLOXSTUDIO 0x00a9f900
extern "C" __declspec(naked) void asm_00a9f900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { add ecx, 0x10 }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a9f620 }
	__asm { pop ebp }
	__asm { ret 0xc }
}
