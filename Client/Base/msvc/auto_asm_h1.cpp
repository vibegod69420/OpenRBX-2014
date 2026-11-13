// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e110d4[];
extern "C" char g_00e11110[];
extern "C" void fn_00401fb0();
extern "C" void fn_00403410();
extern "C" void fn_00515070();
// FUNCTION: ROBLOXSTUDIO 0x004014f0
extern "C" __declspec(naked) void asm_004014f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f61b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_00515070 }
	__asm { push 0xf1291c }
	__asm { mov edx, eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00403410 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00401fb0 }
	__asm { push 0xa }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e110d4] }
	__asm { mov esi, eax }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ebp - 0xd], al }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { cmove esi, eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11110[];
extern "C" void fn_00401fb0();
extern "C" void fn_00403410();
extern "C" void fn_00515070();
// FUNCTION: ROBLOXSTUDIO 0x00401b20
extern "C" __declspec(naked) void asm_00401b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f462 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_00515070 }
	__asm { push 0xf129f8 }
	__asm { mov edx, eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00403410 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00401fb0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110b0[];
extern "C" char g_00e110e4[];
extern "C" char g_00e11110[];
extern "C" void fn_00515070();
extern "C" void fn_00788030();
// FUNCTION: ROBLOXSTUDIO 0x004022f0
extern "C" __declspec(naked) void asm_004022f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f6d2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_00515070 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110b0] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [eax + 0xc] }
	__asm { call fn_00788030 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { setne bl }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110e4] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110f4[];
extern "C" char g_00e110f8[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x00403410
extern "C" __declspec(naked) void asm_00403410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f343 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { push -1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e110f8] }
	__asm { add esp, 0xc }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e110f4] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11070[];
extern "C" char g_00e11110[];
extern "C" char g_00e122f4[];
extern "C" char g_00e123e8[];
extern "C" void fn_00405b90();
extern "C" void fn_00412da0();
// FUNCTION: ROBLOXSTUDIO 0x00403e90
extern "C" __declspec(naked) void asm_00403e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd706f2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00405b90 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e123e8] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, eax }
	__asm { push esp }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11070] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ecx + 0x10] }
	__asm { call fn_00412da0 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e122f4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e11074[];
extern "C" char g_00e122f4[];
extern "C" char g_0131a55c[];
extern "C" void fn_007b00e0();
// FUNCTION: ROBLOXSTUDIO 0x00405090
extern "C" __declspec(naked) void asm_00405090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70080 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea ecx, [edi + 0xc4] }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e122f4] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov esi, dword ptr [g_00e11074] }
	__asm { lea ecx, [edi + 0x9c] }
	__asm { call esi }
	__asm { lea ecx, [edi + 0x88] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call esi }
	__asm { lea ecx, [edi + 0x84] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call esi }
	__asm { lea ecx, [edi + 0x80] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call esi }
	__asm { lea ecx, [edi + 0x7c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [g_0131a55c], 0 }
	__asm { mov dword ptr [edi], 0xf14994 }
	__asm { mov dword ptr [edi + 4], 0xf1498c }
	__asm { mov dword ptr [edi + 0x18], 0xf14980 }
	__asm { mov dword ptr [edi + 0x1c], 0xf14970 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e122f4[];
extern "C" char g_00e12308[];
extern "C" void fn_00405b90();
// FUNCTION: ROBLOXSTUDIO 0x00405bc0
extern "C" __declspec(naked) void asm_00405bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd702c2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_00405b90 }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00405b90 }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e12308] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [g_00e122f4] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov bl, al }
	__asm { call esi }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e11058[];
extern "C" char g_00e11074[];
extern "C" void fn_00405b90();
// FUNCTION: ROBLOXSTUDIO 0x00405db0
extern "C" __declspec(naked) void asm_00405db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd702a2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_00405b90 }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00405b90 }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11058] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [g_00e11074] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov bl, al }
	__asm { call esi }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0040eb70
extern "C" __declspec(naked) void asm_0040eb70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6ffa8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xe1823c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0xe32dec }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0040f4d0
extern "C" __declspec(naked) void asm_0040f4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6ffa8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xe1823c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0xe1826c }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0040f550
extern "C" __declspec(naked) void asm_0040f550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6ffa8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xe1823c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0xe18260 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0040f5d0
extern "C" __declspec(naked) void asm_0040f5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6ffa8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xe1823c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x004114b0
extern "C" __declspec(naked) void asm_004114b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov al, dl }
	__asm { and al, 0xf }
	__asm { add al, 0x41 }
	__asm { mov byte ptr [ecx], al }
	__asm { mov eax, edx }
	__asm { sar eax, 4 }
	__asm { and al, 0xf }
	__asm { add al, 0x41 }
	__asm { mov byte ptr [ecx + 1], al }
	__asm { mov eax, edx }
	__asm { sar eax, 8 }
	__asm { and al, 0xf }
	__asm { add al, 0x41 }
	__asm { mov byte ptr [ecx + 2], al }
	__asm { mov eax, edx }
	__asm { sar eax, 0xc }
	__asm { and al, 0xf }
	__asm { add al, 0x41 }
	__asm { mov byte ptr [ecx + 3], al }
	__asm { mov eax, edx }
	__asm { sar eax, 0x10 }
	__asm { and al, 0xf }
	__asm { add al, 0x41 }
	__asm { mov byte ptr [ecx + 4], al }
	__asm { mov eax, edx }
	__asm { sar eax, 0x14 }
	__asm { and al, 0xf }
	__asm { add al, 0x41 }
	__asm { mov byte ptr [ecx + 5], al }
	__asm { mov eax, edx }
	__asm { sar eax, 0x18 }
	__asm { sar edx, 0x1c }
	__asm { and al, 0xf }
	__asm { add al, 0x41 }
	__asm { and dl, 0xf }
	__asm { add dl, 0x41 }
	__asm { mov byte ptr [ecx + 6], al }
	__asm { mov byte ptr [ecx + 7], dl }
	__asm { mov byte ptr [ecx + 8], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00411520
extern "C" __declspec(naked) void asm_00411520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov al, dl }
	__asm { and al, 0xf }
	__asm { add al, 0x41 }
	__asm { mov byte ptr [ecx], al }
	__asm { mov eax, edx }
	__asm { shr eax, 4 }
	__asm { and al, 0xf }
	__asm { add al, 0x41 }
	__asm { mov byte ptr [ecx + 1], al }
	__asm { mov eax, edx }
	__asm { shr eax, 8 }
	__asm { and al, 0xf }
	__asm { add al, 0x41 }
	__asm { mov byte ptr [ecx + 2], al }
	__asm { mov eax, edx }
	__asm { shr eax, 0xc }
	__asm { and al, 0xf }
	__asm { add al, 0x41 }
	__asm { mov byte ptr [ecx + 3], al }
	__asm { mov eax, edx }
	__asm { shr eax, 0x10 }
	__asm { and al, 0xf }
	__asm { add al, 0x41 }
	__asm { mov byte ptr [ecx + 4], al }
	__asm { mov eax, edx }
	__asm { shr eax, 0x14 }
	__asm { and al, 0xf }
	__asm { add al, 0x41 }
	__asm { mov byte ptr [ecx + 5], al }
	__asm { mov eax, edx }
	__asm { shr eax, 0x18 }
	__asm { shr edx, 0x1c }
	__asm { and al, 0xf }
	__asm { add al, 0x41 }
	__asm { and dl, 0xf }
	__asm { add dl, 0x41 }
	__asm { mov byte ptr [ecx + 6], al }
	__asm { mov byte ptr [ecx + 7], dl }
	__asm { mov byte ptr [ecx + 8], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11000[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x00416bf0
extern "C" __declspec(naked) void asm_00416bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd718ca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call dword ptr [g_00e11000] }
	__asm { push 0x10034b8 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { mov dword ptr [ebp - 0x18], 0x1029570 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10fd4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00422570();
extern "C" void fn_00424380();
extern "C" void fn_004250e0();
// FUNCTION: ROBLOXSTUDIO 0x00424bb0
extern "C" __declspec(naked) void asm_00424bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71b50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x54 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { lea esi, [edx + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { lea eax, [ebp + 0x38] }
	__asm { lea ecx, [esi + 0x28] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00422570 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_004250e0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00424380 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_00422570();
extern "C" void fn_00425c10();
// FUNCTION: ROBLOXSTUDIO 0x004255e0
extern "C" __declspec(naked) void asm_004255e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71f78 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [esi + 0x30] }
	__asm { mov dword ptr [ebp + 8], esp }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [esi + 0x10] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00422570 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00425c10 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" void fn_0042b960();
// FUNCTION: ROBLOXSTUDIO 0x00427c20
extern "C" __declspec(naked) void asm_00427c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd725b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ecx + 0x54] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { lea esi, [edi + 0xf0] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x10c] }
	__asm { call fn_0042b960 }
	__asm { push dword ptr [edi + 0x108] }
	__asm { call dword ptr [g_00e10198] }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" void fn_006b1120();
// FUNCTION: ROBLOXSTUDIO 0x00429100
extern "C" __declspec(naked) void asm_00429100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd725b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov esi, dword ptr [ebx + 0xa0] }
	__asm { add esi, 0x58 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b1120 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x20] }
	__asm { push esi }
	__asm { mov edi, eax }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0042ae10();
// FUNCTION: ROBLOXSTUDIO 0x004295d0
extern "C" __declspec(naked) void asm_004295d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0x117eb08 }
	__asm { push 0xcf6e22 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0042ae10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { mov eax, 1 }
	__asm { ret }
	__asm { mov esp, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, 0x80004005 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_004033d0();
extern "C" void fn_00431590();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
// FUNCTION: ROBLOXSTUDIO 0x00430eb0
extern "C" __declspec(naked) void asm_00430eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd73dc8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00431590 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { push 0x100691c }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00773930 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004033d0 }
	__asm { mov eax, 0x430ede }
	__asm { ret }
}

extern "C" char g_00e10fb8[];
// FUNCTION: ROBLOXSTUDIO 0x004352e0
extern "C" __declspec(naked) void asm_004352e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x1007e30 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { push 0x1007d54 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea edx, [ebp + 8] }
	__asm { push 0x1007d5c }
	__asm { push edx }
	__asm { push 0 }
	__asm { push 0x1007a08 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1291c[];
extern "C" char g_00e12920[];
extern "C" char g_00e12938[];
extern "C" char g_00e1293c[];
extern "C" char g_00e12940[];
// FUNCTION: ROBLOXSTUDIO 0x00435930
extern "C" __declspec(naked) void asm_00435930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91999 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1291c] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1293c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e12938] }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12940] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12920] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12b20[];
extern "C" char g_00e12b24[];
extern "C" char g_00e12b28[];
extern "C" char g_00e12b2c[];
extern "C" char g_00e12b30[];
extern "C" char g_00e12b34[];
extern "C" char g_00e12b38[];
extern "C" char g_00e12b3c[];
// FUNCTION: ROBLOXSTUDIO 0x00445f90
extern "C" __declspec(naked) void asm_00445f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd75029 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e12b20] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12b24] }
	__asm { push 0x100a340 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call dword ptr [g_00e12b30] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call dword ptr [g_00e12b2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12b28] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12b34] }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x14] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { call dword ptr [g_00e12b38] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12b3c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e11110[];
extern "C" char g_00e12690[];
extern "C" char g_00e129e0[];
// FUNCTION: ROBLOXSTUDIO 0x00453eb0
extern "C" __declspec(naked) void asm_00453eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [ebx + 0x18] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12690] }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebp - 4] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { setg byte ptr [ebp - 8] }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [ebx + 0x20] }
	__asm { mov esi, dword ptr [g_00e129e0] }
	__asm { push edi }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebx + 0x24] }
	__asm { push edi }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebx + 0x40] }
	__asm { push edi }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebx + 0x44] }
	__asm { push edi }
	__asm { call esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11110[];
extern "C" void fn_00457090();
extern "C" void fn_004595f0();
extern "C" void fn_0045add0();
// FUNCTION: ROBLOXSTUDIO 0x00459250
extern "C" __declspec(naked) void asm_00459250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd761c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004595f0 }
	__asm { sub esp, 0x28 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_004595f0 }
	__asm { mov ecx, esi }
	__asm { call fn_0045add0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00457090 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea ecx, [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00457090 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" char g_00e110c0[];
extern "C" char g_00e110e4[];
extern "C" char g_00e12cd8[];
extern "C" char g_00e12d0c[];
extern "C" char g_00e12d10[];
// FUNCTION: ROBLOXSTUDIO 0x004685c0
extern "C" __declspec(naked) void asm_004685c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd784b2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12d10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x521 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { cdq }
	__asm { push edx }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e110c0] }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12cd8] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12d0c] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e110e4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110c8[];
extern "C" char g_00e110f4[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e1237c[];
// FUNCTION: ROBLOXSTUDIO 0x00470470
extern "C" __declspec(naked) void asm_00470470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd788c9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x1010870 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 0x101088c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110f4] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e110c8] }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1237c] }
	__asm { push 0x1010890 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0xbb8 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12988[];
extern "C" void fn_004760e0();
extern "C" void fn_004774d0();
// FUNCTION: ROBLOXSTUDIO 0x00470a20
extern "C" __declspec(naked) void asm_00470a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd78a6f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_004760e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 0x78] }
	__asm { mov edx, 1 }
	__asm { mov dword ptr [edi], 0x101152c }
	__asm { call fn_004774d0 }
	__asm { lea esi, [edi + 0x7c] }
	__asm { xor edx, edx }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004774d0 }
	__asm { lea ecx, [edi + 0x80] }
	__asm { or edx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004774d0 }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { call dword ptr [g_00e12988] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e129c4[];
extern "C" void fn_0043a460();
extern "C" void fn_004762f0();
extern "C" void fn_00825140();
// FUNCTION: ROBLOXSTUDIO 0x004761b0
extern "C" __declspec(naked) void asm_004761b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd78bcf }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e129c4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0 }
	__asm { mov dword ptr [esi], 0x1010d44 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { call fn_0043a460 }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x74], 0 }
	__asm { call fn_004762f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00496f30();
extern "C" void fn_004984f0();
extern "C" void fn_00499880();
// FUNCTION: ROBLOXSTUDIO 0x00497ec0
extern "C" __declspec(naked) void asm_00497ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7bae0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x64], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_004984f0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x68] }
	__asm { sub esp, 0x58 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x64] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { add ecx, 8 }
	__asm { call fn_004984f0 }
	__asm { mov ecx, esi }
	__asm { call fn_00499880 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_00496f30 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_00496f30 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x5c }
}

extern "C" char g_00e10bbc[];
extern "C" char g_00e10c60[];
extern "C" char g_00e110ec[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e12ef8[];
// FUNCTION: ROBLOXSTUDIO 0x0049d5d0
extern "C" __declspec(naked) void asm_0049d5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7c38b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10c60] }
	__asm { push 0x100f9d0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 0x1014cb4 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10bbc] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12ef8] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e110ec] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f4c[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e10fc8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e128f4[];
extern "C" char g_00e129b4[];
extern "C" void fn_004a5f10();
extern "C" void fn_004a61d0();
// FUNCTION: ROBLOXSTUDIO 0x004a6140
extern "C" __declspec(naked) void asm_004a6140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7d289 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e10f4c] }
	__asm { mov ecx, dword ptr [g_00e129b4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { lea ecx, [esp + 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e128f4] }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { call dword ptr [g_00e10fc8] }
	__asm { lea ecx, [esp + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [esp + 0x24], 0xffffffff }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_004a61d0 }
	__asm { mov ecx, edi }
	__asm { call fn_004a5f10 }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11110[];
extern "C" char g_00e11c9c[];
extern "C" char g_00e128ec[];
extern "C" char g_00e12b04[];
extern "C" char g_00e12b08[];
extern "C" char g_00e12b10[];
// FUNCTION: ROBLOXSTUDIO 0x004ad890
extern "C" __declspec(naked) void asm_004ad890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ec32 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11c9c] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e12b04] }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [eax], 0x400 }
	__asm { call dword ptr [g_00e12b08] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call dword ptr [g_00e128ec] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12b10] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x004b3ff0
extern "C" __declspec(naked) void asm_004b3ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88e39 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 8] }
	__asm { lea eax, [edi + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { push ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add ecx, esi }
	__asm { call eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402c40();
extern "C" void fn_004b53c0();
// FUNCTION: ROBLOXSTUDIO 0x004b5190
extern "C" __declspec(naked) void asm_004b5190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7dc38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [edi], 0 }
	__asm { push dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00402c40 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { fld dword ptr [esi + 0xc] }
	__asm { fstp dword ptr [edi + 0xc] }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004b53c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10aac[];
extern "C" char g_00e10ab0[];
extern "C" char g_00e11108[];
// FUNCTION: ROBLOXSTUDIO 0x004f4d50
extern "C" __declspec(naked) void asm_004f4d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd82bfa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0xe] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { call dword ptr [g_00e10ab0] }
	__asm { movzx eax, word ptr [eax] }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call dword ptr [g_00e10aac] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11104[];
extern "C" void fn_00409860();
// FUNCTION: ROBLOXSTUDIO 0x004f66d0
extern "C" __declspec(naked) void asm_004f66d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd876ff }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e11104] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 8], 0x1014354 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov byte ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi], 0x10223a0 }
	__asm { mov dword ptr [esi + 8], 0x10223d4 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { push 0x101d6e0 }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004fe4f0();
extern "C" void fn_004fe8d0();
extern "C" void fn_004fece0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004fe320
extern "C" __declspec(naked) void asm_004fe320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd87d58 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_004fe8d0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004fece0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004fe4f0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10c8c[];
extern "C" char g_00e129c4[];
extern "C" char g_00e12ab4[];
// FUNCTION: ROBLOXSTUDIO 0x00500660
extern "C" __declspec(naked) void asm_00500660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd885f4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e129c4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [edi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0x1024928 }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { mov eax, esp }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [eax], esi }
	__asm { call dword ptr [g_00e12ab4] }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ebp + 0xc], al }
	__asm { mov ecx, 2 }
	__asm { cmovne eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov dword ptr [edi], 0x1024908 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e11110[];
extern "C" char g_00e125c4[];
extern "C" char g_00e128cc[];
extern "C" char g_00e12a04[];
extern "C" void fn_00500430();
// FUNCTION: ROBLOXSTUDIO 0x00502b50
extern "C" __declspec(naked) void asm_00502b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd788c9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call fn_00500430 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12a04] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e125c4] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push dword ptr [eax + 0x248] }
	__asm { call dword ptr [g_00e128cc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f60[];
extern "C" void fn_0043a460();
extern "C" void fn_004fa300();
// FUNCTION: ROBLOXSTUDIO 0x005165a0
extern "C" __declspec(naked) void asm_005165a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b622 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_004fa300 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0x1029a54 }
	__asm { mov dword ptr [esi + 8], 0x1029be0 }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { mov dword ptr [esi + 0x9c], 0 }
	__asm { mov dword ptr [esi + 0xa0], 0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0xa4], 0 }
	__asm { mov dword ptr [esi + 0xa8], 0 }
	__asm { call fn_0043a460 }
	__asm { mov dword ptr [esi + 0xa4], eax }
	__asm { push 0 }
	__asm { lea ecx, [esi + 0xac] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e10f60] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11000[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_011edc10[];
// FUNCTION: ROBLOXSTUDIO 0x00524350
extern "C" __declspec(naked) void asm_00524350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd960fa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { cmp byte ptr [g_011edc10], 0 }
	__asm { push 0 }
	__asm { lea ecx, [esp + 0xc] }
	__asm { sete byte ptr [g_011edc10] }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { mov dword ptr [esp + 8], 0x1029570 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { movzx eax, byte ptr [g_011edc10] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x14] }
	__asm { call dword ptr [g_00e11000] }
	__asm { push 0x102a064 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov byte ptr [esp + 0x30], 1 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x34], 2 }
	__asm { call dword ptr [g_00e10fd4] }
	__asm { lea ecx, [esp + 4] }
	__asm { mov byte ptr [esp + 0x2c], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00521ef0();
extern "C" void fn_0052c0b0();
extern "C" void fn_0052f0b0();
// FUNCTION: ROBLOXSTUDIO 0x0052b0d0
extern "C" __declspec(naked) void asm_0052b0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8ba50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0052c0b0 }
	__asm { sub esp, 0x50 }
	__asm { lea eax, [ebp - 0x60] }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_0052c0b0 }
	__asm { mov ecx, esi }
	__asm { call fn_0052f0b0 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00521ef0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00521ef0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_00403540();
extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x0052c030
extern "C" __declspec(naked) void asm_0052c030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd71f78 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edx] }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea edi, [edx + 8] }
	__asm { lea esi, [ebx + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_00422570 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x20] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0052c150
extern "C" __declspec(naked) void asm_0052c150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { lea edi, [ecx + 8] }
	__asm { push -1 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { lea esi, [ebx + 8] }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { mov dword ptr [ecx + 0x24], eax }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { mov dword ptr [ecx + 0x28], eax }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ecx + 0x2c], eax }
	__asm { mov eax, ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0052e480
extern "C" __declspec(naked) void asm_0052e480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [edx] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [edx + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [edx + 8] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { fld dword ptr [edx + 0xc] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [edx + 0x10] }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { fld dword ptr [edx + 0x14] }
	__asm { fstp dword ptr [ecx + 0x14] }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { fld dword ptr [edx + 0x20] }
	__asm { fstp dword ptr [ecx + 0x20] }
	__asm { mov eax, ecx }
	__asm { fld dword ptr [edx + 0x24] }
	__asm { fstp dword ptr [ecx + 0x24] }
	__asm { fld dword ptr [edx + 0x28] }
	__asm { fstp dword ptr [ecx + 0x28] }
	__asm { fld dword ptr [edx + 0x2c] }
	__asm { fstp dword ptr [ecx + 0x2c] }
	__asm { fld dword ptr [edx + 0x30] }
	__asm { fstp dword ptr [ecx + 0x30] }
	__asm { fld dword ptr [edx + 0x34] }
	__asm { fstp dword ptr [ecx + 0x34] }
	__asm { fld dword ptr [edx + 0x38] }
	__asm { fstp dword ptr [ecx + 0x38] }
	__asm { fld dword ptr [edx + 0x3c] }
	__asm { fstp dword ptr [ecx + 0x3c] }
	__asm { fld dword ptr [edx + 0x40] }
	__asm { fstp dword ptr [ecx + 0x40] }
	__asm { fld dword ptr [edx + 0x44] }
	__asm { fstp dword ptr [ecx + 0x44] }
	__asm { fld dword ptr [edx + 0x48] }
	__asm { fstp dword ptr [ecx + 0x48] }
	__asm { fld dword ptr [edx + 0x4c] }
	__asm { fstp dword ptr [ecx + 0x4c] }
	__asm { fld dword ptr [edx + 0x50] }
	__asm { fstp dword ptr [ecx + 0x50] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00521ef0();
extern "C" void fn_0052c0b0();
extern "C" void fn_00531040();
// FUNCTION: ROBLOXSTUDIO 0x0052f0b0
extern "C" __declspec(naked) void asm_0052f0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8ba50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_0052c0b0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push esi }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_0052c0b0 }
	__asm { call fn_00531040 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00521ef0 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { mov ecx, 0x102b9f0 }
	__asm { cmove ecx, eax }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00521ef0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" void fn_00403540();
extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x0052fa40
extern "C" __declspec(naked) void asm_0052fa40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94768 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp + 8], esp }
	__asm { push -1 }
	__asm { lea esi, [edi + 8] }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00422570 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [edi] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x38 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005316c0
extern "C" __declspec(naked) void asm_005316c0()
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
	__asm { fld dword ptr [edx + 0x20] }
	__asm { fstp dword ptr [ecx + 0x20] }
	__asm { fld dword ptr [edx + 0x24] }
	__asm { fstp dword ptr [ecx + 0x24] }
	__asm { fld dword ptr [edx + 0x28] }
	__asm { fstp dword ptr [ecx + 0x28] }
	__asm { fld dword ptr [edx + 0x2c] }
	__asm { fstp dword ptr [ecx + 0x2c] }
	__asm { fld dword ptr [edx + 0x30] }
	__asm { fstp dword ptr [ecx + 0x30] }
	__asm { fld dword ptr [edx + 0x34] }
	__asm { fstp dword ptr [ecx + 0x34] }
	__asm { mov eax, dword ptr [edx + 0x38] }
	__asm { mov dword ptr [ecx + 0x38], eax }
	__asm { mov eax, dword ptr [edx + 0x3c] }
	__asm { mov dword ptr [ecx + 0x3c], eax }
	__asm { mov eax, dword ptr [edx + 0x40] }
	__asm { mov dword ptr [ecx + 0x40], eax }
	__asm { fld dword ptr [edx + 0x44] }
	__asm { fstp dword ptr [ecx + 0x44] }
	__asm { mov eax, ecx }
	__asm { fld dword ptr [edx + 0x48] }
	__asm { fstp dword ptr [ecx + 0x48] }
	__asm { fld dword ptr [edx + 0x4c] }
	__asm { fstp dword ptr [ecx + 0x4c] }
	__asm { fld dword ptr [edx + 0x50] }
	__asm { fstp dword ptr [ecx + 0x50] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00531750
extern "C" __declspec(naked) void asm_00531750()
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
	__asm { fld dword ptr [edx + 0x20] }
	__asm { fstp dword ptr [ecx + 0x20] }
	__asm { fld dword ptr [edx + 0x24] }
	__asm { fstp dword ptr [ecx + 0x24] }
	__asm { fld dword ptr [edx + 0x28] }
	__asm { fstp dword ptr [ecx + 0x28] }
	__asm { fld dword ptr [edx + 0x2c] }
	__asm { fstp dword ptr [ecx + 0x2c] }
	__asm { mov eax, dword ptr [edx + 0x30] }
	__asm { mov dword ptr [ecx + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x34] }
	__asm { mov dword ptr [ecx + 0x34], eax }
	__asm { mov eax, dword ptr [edx + 0x38] }
	__asm { mov dword ptr [ecx + 0x38], eax }
	__asm { fld dword ptr [edx + 0x3c] }
	__asm { fstp dword ptr [ecx + 0x3c] }
	__asm { mov eax, ecx }
	__asm { fld dword ptr [edx + 0x40] }
	__asm { fstp dword ptr [ecx + 0x40] }
	__asm { fld dword ptr [edx + 0x44] }
	__asm { fstp dword ptr [ecx + 0x44] }
	__asm { fld dword ptr [edx + 0x48] }
	__asm { fstp dword ptr [ecx + 0x48] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e12a38[];
extern "C" void fn_004fe4f0();
extern "C" void fn_00533de0();
// FUNCTION: ROBLOXSTUDIO 0x00533240
extern "C" __declspec(naked) void asm_00533240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebx], 0x102c574 }
	__asm { mov dword ptr [ebx + 8], 0x102c554 }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x1c] }
	__asm { call fn_004fe4f0 }
	__asm { push dword ptr [ebx + 0x1c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebx + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00533de0 }
	__asm { push dword ptr [ebx + 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebx], 0x10249bc }
	__asm { mov dword ptr [ebx + 8], 0x10249a0 }
	__asm { call dword ptr [g_00e12a38] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f6c[];
extern "C" char g_00e110ec[];
extern "C" char g_00e110f0[];
extern "C" char g_00e11110[];
extern "C" char g_00e129e0[];
extern "C" char g_00e12ef8[];
// FUNCTION: ROBLOXSTUDIO 0x005356b0
extern "C" __declspec(naked) void asm_005356b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8ea02 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e129e0] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x24] }
	__asm { call dword ptr [g_00e10f6c] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110f0] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12ef8] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110ec] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0048c0b0();
extern "C" void fn_0053e4a0();
extern "C" void fn_0053eec0();
// FUNCTION: ROBLOXSTUDIO 0x0053e400
extern "C" __declspec(naked) void asm_0053e400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ebx, ecx }
	__asm { call fn_0053e4a0 }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0053eec0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0048c0b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408cf0();
extern "C" void fn_0045c560();
extern "C" void fn_0053eec0();
// FUNCTION: ROBLOXSTUDIO 0x0053e450
extern "C" __declspec(naked) void asm_0053e450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ebx, ecx }
	__asm { call fn_0045c560 }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0053eec0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00408cf0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0053f440
extern "C" __declspec(naked) void asm_0053f440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov eax, edx }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 0xc], ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0053f5a0();
// FUNCTION: ROBLOXSTUDIO 0x0053f490
extern "C" __declspec(naked) void asm_0053f490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { call fn_0053f5a0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 4 }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { call fn_0053f5a0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 4 }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { call fn_0053f5a0 }
	__asm { add esp, 8 }
	__asm { pop ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110ec[];
extern "C" char g_00e110f0[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e12f30[];
// FUNCTION: ROBLOXSTUDIO 0x005479e0
extern "C" __declspec(naked) void asm_005479e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd9055c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e110f0] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12f30] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e110ec] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e117cc[];
extern "C" char g_00e12bc4[];
// FUNCTION: ROBLOXSTUDIO 0x00547dd0
extern "C" __declspec(naked) void asm_00547dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd949d2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x1030080 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e117cc] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { push 0x1030064 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e12bc4] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11158[];
extern "C" char g_00e1115c[];
extern "C" char g_00e117fc[];
extern "C" char g_00e11800[];
// FUNCTION: ROBLOXSTUDIO 0x00548f40
extern "C" __declspec(naked) void asm_00548f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd909cb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x10303b8 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e117fc] }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { push 0x10303cc }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e117fc] }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11158] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11800] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e1115c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12918[];
extern "C" char g_00e1291c[];
extern "C" char g_00e12920[];
extern "C" char g_00e12938[];
extern "C" char g_00e12940[];
extern "C" void fn_00551220();
// FUNCTION: ROBLOXSTUDIO 0x005532e0
extern "C" __declspec(naked) void asm_005532e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd91ad9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push edi }
	__asm { lea eax, [esp + 4] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e1291c] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { call dword ptr [g_00e12938] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esp + 0xc] }
	__asm { call dword ptr [g_00e12938] }
	__asm { lea eax, [esp + 4] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12940] }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esp + 8] }
	__asm { call dword ptr [g_00e12918] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00551220 }
	__asm { lea ecx, [esp + 4] }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { call dword ptr [g_00e12920] }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10978[];
extern "C" char g_00e1097c[];
extern "C" char g_00e10980[];
extern "C" char g_00e10c64[];
extern "C" char g_00e10c94[];
extern "C" char g_00e10c98[];
extern "C" char g_00e10f64[];
// FUNCTION: ROBLOXSTUDIO 0x00554470
extern "C" __declspec(naked) void asm_00554470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91381 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebx], 0x10317b0 }
	__asm { lea ecx, [ebx + 8] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10c98] }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebx + 0x15], 1 }
	__asm { call dword ptr [g_00e1097c] }
	__asm { lea ecx, [ebx + 8] }
	__asm { call dword ptr [g_00e10c94] }
	__asm { push -1 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10978] }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10980] }
	__asm { lea ecx, [ebx + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10f64] }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10c64] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_005597a0();
// FUNCTION: ROBLOXSTUDIO 0x00556080
extern "C" __declspec(naked) void asm_00556080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd92868 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_005597a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [esi + 0x88] }
	__asm { mov dword ptr [esi], 0x1032494 }
	__asm { mov dword ptr [esi + 4], 0x10325e0 }
	__asm { mov dword ptr [esi + 0x18], 0x10326a8 }
	__asm { mov dword ptr [esi + 0x1c], 0x1031d3c }
	__asm { mov dword ptr [esi + 0x80], 0xffffffff }
	__asm { mov dword ptr [esi + 0x84], 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [esi + 0xa0], 1 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10dc4[];
extern "C" char g_00e11110[];
extern "C" char g_00e11f7c[];
extern "C" char g_00e11fb8[];
// FUNCTION: ROBLOXSTUDIO 0x00568840
extern "C" __declspec(naked) void asm_00568840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd93194 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11fb8] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11fb8] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e10dc4] }
	__asm { test eax, eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { sets bl }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [g_00e11f7c] }
	__asm { lea ecx, [ebp + 8] }
	__asm { call esi }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_005693a0();
// FUNCTION: ROBLOXSTUDIO 0x00569320
extern "C" __declspec(naked) void asm_00569320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd93162 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0xf12f2d }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_005693a0 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11928[];
extern "C" char g_00e11940[];
extern "C" char g_00e11f7c[];
// FUNCTION: ROBLOXSTUDIO 0x0056ccc0
extern "C" __declspec(naked) void asm_0056ccc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd92fe9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov esi, dword ptr [eax] }
	__asm { push esi }
	__asm { call dword ptr [g_00e11928] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, esi }
	__asm { mov esi, dword ptr [g_00e11940] }
	__asm { push edi }
	__asm { call esi }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call esi }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11f7c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x0056f650
extern "C" __declspec(naked) void asm_0056f650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd93c58 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x0056f6f0
extern "C" __declspec(naked) void asm_0056f6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd93c58 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_0056fd70();
// FUNCTION: ROBLOXSTUDIO 0x0056f800
extern "C" __declspec(naked) void asm_0056f800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd93b68 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { sub esp, 0x14 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { call fn_0056fd70 }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { mov ecx, 0x1033864 }
	__asm { cmove ecx, edx }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_0056fd70();
// FUNCTION: ROBLOXSTUDIO 0x0056f960
extern "C" __declspec(naked) void asm_0056f960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd93b68 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { sub esp, 0x14 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { call fn_0056fd70 }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { mov ecx, 0x1033854 }
	__asm { cmove ecx, edx }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_0056fe00();
// FUNCTION: ROBLOXSTUDIO 0x0056fd70
extern "C" __declspec(naked) void asm_0056fd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd93b68 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { call fn_0056fe00 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10fb8[];
// FUNCTION: ROBLOXSTUDIO 0x005769e0
extern "C" __declspec(naked) void asm_005769e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x1007e30 }
	__asm { mov dword ptr [esp + 0x48], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push 0x1007d5c }
	__asm { lea edx, [esp + 0x50] }
	__asm { push edx }
	__asm { push 2 }
	__asm { lea eax, [ecx - 8] }
	__asm { push 0x103447c }
	__asm { push eax }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10918[];
extern "C" char g_00e11064[];
extern "C" char g_00e11074[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" void fn_0057a280();
// FUNCTION: ROBLOXSTUDIO 0x0057b6e0
extern "C" __declspec(naked) void asm_0057b6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94fe5 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x1034ce4 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x20], esi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0057a280 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11064] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e10918] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11074] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_0057dd50();
// FUNCTION: ROBLOXSTUDIO 0x0057d470
extern "C" __declspec(naked) void asm_0057d470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94a30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov ecx, esi }
	__asm { call fn_0057dd50 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11000[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x00584010
extern "C" __declspec(naked) void asm_00584010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd960fa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push 0 }
	__asm { lea ecx, [esp + 0xc] }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { mov dword ptr [esp + 8], 0x1029570 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov dword ptr [esp + 0x30], 0 }
	__asm { call dword ptr [g_00e11000] }
	__asm { push 0x1035fd0 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov byte ptr [esp + 0x30], 1 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x34], 2 }
	__asm { call dword ptr [g_00e10fd4] }
	__asm { lea ecx, [esp + 4] }
	__asm { mov byte ptr [esp + 0x2c], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11000[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x005841a0
extern "C" __declspec(naked) void asm_005841a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd960fa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push 0 }
	__asm { lea ecx, [esp + 0xc] }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { mov dword ptr [esp + 8], 0x1029570 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov dword ptr [esp + 0x30], 0 }
	__asm { call dword ptr [g_00e11000] }
	__asm { push 0x1035f5c }
	__asm { lea ecx, [esp + 8] }
	__asm { mov byte ptr [esp + 0x30], 1 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x34], 2 }
	__asm { call dword ptr [g_00e10fd4] }
	__asm { lea ecx, [esp + 4] }
	__asm { mov byte ptr [esp + 0x2c], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
}

extern "C" char g_012b55c0[];
extern "C" void fn_00cf6d5f();
// FUNCTION: ROBLOXSTUDIO 0x0058fb90
extern "C" __declspec(naked) void asm_0058fb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0xc], esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push edx }
	__asm { lea ecx, [eax + eax*8] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [esi + eax*4 + 0x48] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { xor ecx, ebp }
	__asm { pop esi }
	__asm { call fn_00cf6d5f }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012b55c0[];
extern "C" void fn_00cf6d5f();
// FUNCTION: ROBLOXSTUDIO 0x0058fcd0
extern "C" __declspec(naked) void asm_0058fcd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96938 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { push esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], 0x1036968 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { xor ecx, ebp }
	__asm { call fn_00cf6d5f }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x0058ff50
extern "C" __declspec(naked) void asm_0058ff50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 0x1c], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0x28], eax }
	__asm { mov dword ptr [ecx + 0x2c], 0 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012b55c0[];
extern "C" void fn_005b54c0();
extern "C" void fn_00cf6d5f();
// FUNCTION: ROBLOXSTUDIO 0x0059bda0
extern "C" __declspec(naked) void asm_0059bda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff0 }
	__asm { push -1 }
	__asm { push 0xd96ea8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { sub esp, 0x60 }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { mov dword ptr [esp + 0x58], eax }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x68] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov eax, dword ptr [ecx + 0x30] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esp + 0x14], 0x1036f08 }
	__asm { mov dword ptr [esp + 0x1c], eax }
	__asm { push edx }
	__asm { push esi }
	__asm { lea eax, [esp + 0x1c] }
	__asm { mov dword ptr [esp + 0x78], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x40] }
	__asm { push eax }
	__asm { call fn_005b54c0 }
	__asm { mov ecx, dword ptr [esp + 0x68] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [esp + 0x58] }
	__asm { xor ecx, esp }
	__asm { call fn_00cf6d5f }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x005cedd0
extern "C" __declspec(naked) void asm_005cedd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 8] }
	__asm { mov esi, dword ptr [esi] }
	__asm { imul eax, edi }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { imul edx, ebx }
	__asm { sub eax, edx }
	__asm { cdq }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov ebx, dword ptr [ecx] }
	__asm { mov ecx, ebx }
	__asm { imul ebx, dword ptr [ebp - 8] }
	__asm { mov eax, esi }
	__asm { imul esi, dword ptr [ebp - 4] }
	__asm { imul ecx, edi }
	__asm { imul eax, dword ptr [ebp + 0xc] }
	__asm { sub eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cdq }
	__asm { sub ebx, esi }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, ebx }
	__asm { mov dword ptr [ecx + 0xc], edx }
	__asm { cdq }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov dword ptr [ecx + 0x14], edx }
	__asm { mov eax, ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012b55c0[];
extern "C" void fn_005c2a90();
extern "C" void fn_00cf6d5f();
// FUNCTION: ROBLOXSTUDIO 0x005d9870
extern "C" __declspec(naked) void asm_005d9870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x64 }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { mov edx, 8 }
	__asm { mov dword ptr [ebp - 0x64], 0 }
	__asm { mov dword ptr [ebp - 0x60], 1 }
	__asm { mov dword ptr [ebp - 0x5c], 2 }
	__asm { mov dword ptr [ebp - 0x58], 3 }
	__asm { mov dword ptr [ebp - 0x54], 4 }
	__asm { mov dword ptr [ebp - 0x50], 5 }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov dword ptr [ebp - 0x48], 3 }
	__asm { mov dword ptr [ebp - 0x44], 4 }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { mov dword ptr [ebp - 0x3c], 4 }
	__asm { mov dword ptr [ebp - 0x38], 1 }
	__asm { mov dword ptr [ebp - 0x34], 1 }
	__asm { mov dword ptr [ebp - 0x30], 4 }
	__asm { mov dword ptr [ebp - 0x2c], 5 }
	__asm { mov dword ptr [ebp - 0x28], 1 }
	__asm { mov dword ptr [ebp - 0x24], 5 }
	__asm { mov dword ptr [ebp - 0x20], 2 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 3 }
	__asm { mov dword ptr [ebp - 0x14], 5 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0xc], 5 }
	__asm { mov dword ptr [ebp - 8], 2 }
	__asm { call fn_005c2a90 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { xor ecx, ebp }
	__asm { add esp, 4 }
	__asm { call fn_00cf6d5f }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005e0440
extern "C" __declspec(naked) void asm_005e0440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [edx] }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { fstp dword ptr [edx + 4] }
	__asm { fld dword ptr [ecx + 0x20] }
	__asm { fstp dword ptr [edx + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [edx + 0xc] }
	__asm { fld dword ptr [ecx + 4] }
	__asm { fstp dword ptr [edx + 0x10] }
	__asm { fld dword ptr [ecx + 0x14] }
	__asm { fstp dword ptr [edx + 0x14] }
	__asm { fld dword ptr [ecx + 0x24] }
	__asm { fstp dword ptr [edx + 0x18] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [edx + 0x1c] }
	__asm { fld dword ptr [ecx + 8] }
	__asm { fstp dword ptr [edx + 0x20] }
	__asm { fld dword ptr [ecx + 0x18] }
	__asm { fstp dword ptr [edx + 0x24] }
	__asm { fld dword ptr [ecx + 0x28] }
	__asm { fstp dword ptr [edx + 0x28] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [edx + 0x2c] }
	__asm { fld dword ptr [ecx + 0xc] }
	__asm { fstp dword ptr [edx + 0x30] }
	__asm { fld dword ptr [ecx + 0x1c] }
	__asm { fstp dword ptr [edx + 0x34] }
	__asm { fld dword ptr [ecx + 0x2c] }
	__asm { fstp dword ptr [edx + 0x38] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [edx + 0x3c] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1300c[];
// FUNCTION: ROBLOXSTUDIO 0x005e21c0
extern "C" __declspec(naked) void asm_005e21c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20 }
	__asm { xor eax, eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e1300c] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { sub ecx, dword ptr [ebp - 0x20] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { sub esi, dword ptr [ebp - 0x1c] }
	__asm { cmp ecx, 1 }
	__asm { lea edx, [ebp - 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { cmovge eax, edx }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov edx, dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmp esi, 1 }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { cmovge ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0xc], 1 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005e3840();
extern "C" void fn_00ad1340();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e3300
extern "C" __declspec(naked) void asm_005e3300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e660 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_00ad1340 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [esi + 0x10] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_005e3840 }
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

extern "C" void fn_005e4850();
extern "C" void fn_005eb960();
// FUNCTION: ROBLOXSTUDIO 0x005e3bd0
extern "C" __declspec(naked) void asm_005e3bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e6f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_005eb960 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], 0xe19cd0 }
	__asm { mov dword ptr [eax + 0x38], 0 }
	__asm { mov dword ptr [eax + 0x3c], 0 }
	__asm { mov dword ptr [eax + 0x40], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [eax + 0x44], 7 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_005e4850 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ecx + 0x38], eax }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_005e70e0();
extern "C" void fn_0060f6a0();
// FUNCTION: ROBLOXSTUDIO 0x005e58e0
extern "C" __declspec(naked) void asm_005e58e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e8b3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_0060f6a0 }
	__asm { lea ecx, [ebx + 0x38] }
	__asm { lea esi, [ebx + 0x2c] }
	__asm { lea edx, [ebx + 0x30] }
	__asm { lea eax, [ebx + 0x34] }
	__asm { mov dword ptr [ebx], 0xe1ad78 }
	__asm { mov dword ptr [ebx + 0x28], 0 }
	__asm { mov dword ptr [esi], 0xffffffff }
	__asm { mov dword ptr [edx], 0xffffffff }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { push eax }
	__asm { push edx }
	__asm { push esi }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_005e70e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebx + 0x28], eax }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_005e72e0();
extern "C" void fn_0060f6d0();
// FUNCTION: ROBLOXSTUDIO 0x005e5ae0
extern "C" __declspec(naked) void asm_005e5ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e8ff }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_0060f6d0 }
	__asm { lea eax, [edi + 0x30] }
	__asm { lea ecx, [edi + 0x2c] }
	__asm { mov dword ptr [edi], 0xe1ad8c }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_005e72e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { add esp, 0x10 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0060cd90
extern "C" __declspec(naked) void asm_0060cd90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [edx] }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { fstp dword ptr [edx + 4] }
	__asm { fld dword ptr [ecx + 0x20] }
	__asm { fstp dword ptr [edx + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [edx + 0xc] }
	__asm { fld dword ptr [ecx + 4] }
	__asm { fstp dword ptr [edx + 0x10] }
	__asm { fld dword ptr [ecx + 0x14] }
	__asm { fstp dword ptr [edx + 0x14] }
	__asm { fld dword ptr [ecx + 0x24] }
	__asm { fstp dword ptr [edx + 0x18] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [edx + 0x1c] }
	__asm { fld dword ptr [ecx + 8] }
	__asm { fstp dword ptr [edx + 0x20] }
	__asm { fld dword ptr [ecx + 0x18] }
	__asm { fstp dword ptr [edx + 0x24] }
	__asm { fld dword ptr [ecx + 0x28] }
	__asm { fstp dword ptr [edx + 0x28] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [edx + 0x2c] }
	__asm { fld dword ptr [ecx + 0xc] }
	__asm { fstp dword ptr [edx + 0x30] }
	__asm { fld dword ptr [ecx + 0x1c] }
	__asm { fstp dword ptr [edx + 0x34] }
	__asm { fld dword ptr [ecx + 0x2c] }
	__asm { fstp dword ptr [edx + 0x38] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [edx + 0x3c] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00618130();
extern "C" void fn_00618270();
// FUNCTION: ROBLOXSTUDIO 0x006116a0
extern "C" __declspec(naked) void asm_006116a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0x68] }
	__asm { mov edx, esi }
	__asm { sub edx, dword ptr [ebx + 0x64] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 0x64] }
	__asm { call fn_00618270 }
	__asm { mov ecx, dword ptr [ebx + 0x74] }
	__asm { mov esi, dword ptr [ebx + 0x70] }
	__asm { mov edx, ecx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00618130 }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x00618cb0
extern "C" __declspec(naked) void asm_00618cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { fld dword ptr [esi + 8] }
	__asm { fstp dword ptr [ebx + 8] }
	__asm { add esi, 0x1c }
	__asm { fld dword ptr [esi - 0x10] }
	__asm { push esi }
	__asm { fstp dword ptr [ebx + 0xc] }
	__asm { lea ecx, [ebx + 0x1c] }
	__asm { fld dword ptr [esi - 0xc] }
	__asm { fstp dword ptr [ebx + 0x10] }
	__asm { fld dword ptr [esi - 8] }
	__asm { fstp dword ptr [ebx + 0x14] }
	__asm { fld dword ptr [esi - 4] }
	__asm { fstp dword ptr [ebx + 0x18] }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebx + 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebx + 0x44], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 0x48], eax }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0061e2a0
extern "C" __declspec(naked) void asm_0061e2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [edx] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [edx + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [edx + 8] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { fld dword ptr [edx + 0xc] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [edx + 0x10] }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { fld dword ptr [edx + 0x14] }
	__asm { fstp dword ptr [ecx + 0x14] }
	__asm { fld dword ptr [edx + 0x18] }
	__asm { fstp dword ptr [ecx + 0x18] }
	__asm { fld dword ptr [edx + 0x1c] }
	__asm { fstp dword ptr [ecx + 0x1c] }
	__asm { fld dword ptr [edx + 0x20] }
	__asm { fstp dword ptr [ecx + 0x20] }
	__asm { fld dword ptr [edx + 0x24] }
	__asm { fstp dword ptr [ecx + 0x24] }
	__asm { fld dword ptr [edx + 0x28] }
	__asm { fstp dword ptr [ecx + 0x28] }
	__asm { fld dword ptr [edx + 0x2c] }
	__asm { fstp dword ptr [ecx + 0x2c] }
	__asm { mov eax, dword ptr [edx + 0x30] }
	__asm { mov dword ptr [ecx + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x34] }
	__asm { mov dword ptr [ecx + 0x34], eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00623020();
extern "C" void fn_00626a00();
extern "C" void fn_006276e0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00624aa0
extern "C" __declspec(naked) void asm_00624aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10028 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00626a00 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00623020 }
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
	__asm { call fn_006276e0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006dec40();
extern "C" void fn_006dec80();
// FUNCTION: ROBLOXSTUDIO 0x0062a050
extern "C" __declspec(naked) void asm_0062a050()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_006dec80 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 8] }
	__asm { call fn_006dec40 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0x10] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 0x14] }
	__asm { pop esi }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 0x14] }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00642030
extern "C" __declspec(naked) void asm_00642030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { movzx edx, byte ptr [eax + 1] }
	__asm { movzx eax, byte ptr [eax] }
	__asm { shl edx, 8 }
	__asm { or edx, eax }
	__asm { mov ecx, edx }
	__asm { sar ecx, 0xb }
	__asm { and cl, 0x1f }
	__asm { mov al, cl }
	__asm { shl cl, 3 }
	__asm { mov ebx, edx }
	__asm { sar ebx, 5 }
	__asm { and bl, 0x3f }
	__asm { shr al, 2 }
	__asm { or al, cl }
	__asm { mov cl, bl }
	__asm { shr cl, 4 }
	__asm { mov ah, dl }
	__asm { shl bl, 2 }
	__asm { or cl, bl }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { and ah, 0x1f }
	__asm { mov byte ptr [edx + 1], cl }
	__asm { mov cl, ah }
	__asm { shl ah, 3 }
	__asm { shr cl, 2 }
	__asm { or cl, ah }
	__asm { mov byte ptr [edx], al }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [edx + 2], cl }
	__asm { mov byte ptr [edx + 3], 0xff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00654ba0
extern "C" __declspec(naked) void asm_00654ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { lea eax, [edx + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { push edi }
	__asm { lea edi, [edx + 4] }
	__asm { cmovl edx, ecx }
	__asm { lea esi, [ecx + 4] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { lea ebx, [ecx + 8] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmovl edi, esi }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { cmp ecx, dword ptr [ebx] }
	__asm { pop edi }
	__asm { cmovl eax, ebx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, edx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006197a0();
extern "C" void fn_006da0e0();
// FUNCTION: ROBLOXSTUDIO 0x00655220
extern "C" __declspec(naked) void asm_00655220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10a59 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_006197a0 }
	__asm { mov dword ptr [esi], 0xe38b5c }
	__asm { mov dword ptr [esi + 0x60], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x64], 0 }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { lea ecx, [esi + 0x74] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_006da0e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xa4], 0 }
	__asm { mov dword ptr [esi + 0xa8], 0 }
	__asm { mov dword ptr [esi + 0xac], 0 }
	__asm { mov dword ptr [esi + 0xb0], 0 }
	__asm { mov dword ptr [esi + 0xc0], 0 }
	__asm { mov dword ptr [esi + 0xc4], 0 }
	__asm { mov dword ptr [esi + 0xc8], 0 }
	__asm { mov byte ptr [esi + 0xcc], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x006589e0
extern "C" __declspec(naked) void asm_006589e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10cc7 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push 0x4033d0 }
	__asm { mov esi, ecx }
	__asm { push 0x421ea0 }
	__asm { push 0x20 }
	__asm { mov dword ptr [esi], eax }
	__asm { push 8 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00cf676b }
	__asm { push 0x4033d0 }
	__asm { push 0x421ea0 }
	__asm { push 0x400 }
	__asm { push 8 }
	__asm { lea eax, [esi + 0x104] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf676b }
	__asm { push 0x65f9e0 }
	__asm { push 0x659570 }
	__asm { push 0x20 }
	__asm { push 0x34 }
	__asm { lea eax, [esi + 0x2104] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf676b }
	__asm { mov dword ptr [esi + 0x2784], 0 }
	__asm { mov dword ptr [esi + 0x2788], 0 }
	__asm { mov dword ptr [esi + 0x278c], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e103dc[];
extern "C" void fn_004276b0();
// FUNCTION: ROBLOXSTUDIO 0x0066c070
extern "C" __declspec(naked) void asm_0066c070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0x1009354 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { fld dword ptr [esi] }
	__asm { push 0x1009354 }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { fstp dword ptr [esp] }
	__asm { call dword ptr [g_00e103dc] }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { fld dword ptr [esi + 4] }
	__asm { add esp, 8 }
	__asm { push 0x1009354 }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { fstp dword ptr [esp] }
	__asm { call dword ptr [g_00e103dc] }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { fld dword ptr [esi + 8] }
	__asm { add esp, 8 }
	__asm { push 0x1009354 }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { fstp dword ptr [esp] }
	__asm { call dword ptr [g_00e103dc] }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { push 0x1004e20 }
	__asm { push edi }
	__asm { call fn_004276b0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e103dc[];
extern "C" void fn_004276b0();
// FUNCTION: ROBLOXSTUDIO 0x0066c100
extern "C" __declspec(naked) void asm_0066c100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0x1009354 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { fld dword ptr [esi] }
	__asm { push 0x1009354 }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { fstp dword ptr [esp] }
	__asm { call dword ptr [g_00e103dc] }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { fld dword ptr [esi + 4] }
	__asm { add esp, 8 }
	__asm { push 0x1009354 }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { fstp dword ptr [esp] }
	__asm { call dword ptr [g_00e103dc] }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { push 0x1004e20 }
	__asm { push edi }
	__asm { call fn_004276b0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
extern "C" void fn_00529560();
extern "C" void fn_00529630();
// FUNCTION: ROBLOXSTUDIO 0x0066cf90
extern "C" __declspec(naked) void asm_0066cf90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11f4e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { push -1 }
	__asm { lea ecx, [edi + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { call fn_00529560 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [edi + 0xc] }
	__asm { call fn_00529630 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00495b90();
extern "C" void fn_0067a1b0();
extern "C" void fn_0067a550();
extern "C" void fn_0067a690();
// FUNCTION: ROBLOXSTUDIO 0x0067dc00
extern "C" __declspec(naked) void asm_0067dc00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0067a1b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea eax, [ecx + 0x88] }
	__asm { push eax }
	__asm { push 0x1013260 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_00495b90 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea eax, [ecx + 0x8c] }
	__asm { push eax }
	__asm { push 0xe3bef0 }
	__asm { call fn_0067a690 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea eax, [ecx + 0x90] }
	__asm { push eax }
	__asm { push 0xe3befc }
	__asm { call fn_00495b90 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea edx, [ecx + 0x98] }
	__asm { push edx }
	__asm { push 0xe3bf0c }
	__asm { call fn_0067a550 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a104e0();
// FUNCTION: ROBLOXSTUDIO 0x0068d9d0
extern "C" __declspec(naked) void asm_0068d9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00a104e0 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00691fb0();
extern "C" void fn_00692c90();
extern "C" void fn_00a0d8c0();
// FUNCTION: ROBLOXSTUDIO 0x00691b90
extern "C" __declspec(naked) void asm_00691b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13b2c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x114 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x120] }
	__asm { call fn_00a0d8c0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xbc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xa0] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x84] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x40] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00691fb0 }
	__asm { lea ecx, [ebp - 0x120] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00692c90 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00691fb0();
extern "C" void fn_00692c90();
extern "C" void fn_00a0d8c0();
// FUNCTION: ROBLOXSTUDIO 0x00691f20
extern "C" __declspec(naked) void asm_00691f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13b90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x114 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x120] }
	__asm { call fn_00a0d8c0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xbc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xa0] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x84] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00691fb0 }
	__asm { lea ecx, [ebp - 0x120] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00692c90 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101a4[];
extern "C" char g_012b55c0[];
extern "C" void fn_006b25a0();
extern "C" void fn_00cf6d5f();
// FUNCTION: ROBLOXSTUDIO 0x006b2c90
extern "C" __declspec(naked) void asm_006b2c90()
{
	__asm { sub esp, 0x14 }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov edx, dword ptr [esp + 0x20] }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { mov dword ptr [esp], edx }
	__asm { mov edx, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [esp + 4], edx }
	__asm { mov edx, dword ptr [esp + 0x28] }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0xc], edx }
	__asm { mov edx, dword ptr [esp + 0x30] }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [esp + 0x14], edx }
	__asm { lea edx, [esp + 8] }
	__asm { push edx }
	__asm { lea edi, [esi + 0x58] }
	__asm { push edi }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006b25a0 }
	__asm { xor eax, eax }
	__asm { push edi }
	__asm { mov dword ptr [esi], 0xe42f9c }
	__asm { mov dword ptr [esi + 0xc], 0xe42f5c }
	__asm { mov dword ptr [esi + 0x10], 0xe42f40 }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { mov dword ptr [esi + 0x54], eax }
	__asm { call dword ptr [g_00e101a4] }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { xor ecx, esp }
	__asm { call fn_00cf6d5f }
	__asm { add esp, 0x14 }
	__asm { ret 0x18 }
}

extern "C" char g_012b55c0[];
extern "C" void fn_006b0d30();
extern "C" void fn_006b2e90();
extern "C" void fn_006b3840();
// FUNCTION: ROBLOXSTUDIO 0x006b3090
extern "C" __declspec(naked) void asm_006b3090()
{
	__asm { push -1 }
	__asm { push 0xd15ab3 }
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
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 0xc], esi }
	__asm { lea edi, [esi + 0x48] }
	__asm { mov dword ptr [esi], 0xe4308c }
	__asm { mov dword ptr [edi], 0xe4302c }
	__asm { mov dword ptr [esi + 0x54], 0xe42fdc }
	__asm { mov dword ptr [esi + 0x58], 0xe42fc4 }
	__asm { mov ecx, dword ptr [esi + 0xe8] }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x1c], 1 }
	__asm { call fn_006b2e90 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esp + 0x18], 0 }
	__asm { call fn_006b0d30 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x18], 0xffffffff }
	__asm { call fn_006b3840 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" void fn_006b5970();
extern "C" void fn_006b5ce0();
extern "C" void fn_006b6480();
// FUNCTION: ROBLOXSTUDIO 0x006b53d0
extern "C" __declspec(naked) void asm_006b53d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15c58 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { sub esp, 0x20 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { call fn_006b5ce0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x20 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b5970 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0x20 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { push eax }
	__asm { call fn_006b5ce0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0x20 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { push esp }
	__asm { call fn_006b5970 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006b6480 }
	__asm { xor ecx, ecx }
	__asm { add esp, 0x80 }
	__asm { test eax, eax }
	__asm { sete al }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006bc920();
extern "C" void fn_006c5500();
// FUNCTION: ROBLOXSTUDIO 0x006c4140
extern "C" __declspec(naked) void asm_006c4140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fldz }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { fst qword ptr [edi] }
	__asm { fst qword ptr [edi + 8] }
	__asm { fstp qword ptr [edi + 0x10] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { lea eax, [esi + 0x98] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_006c5500 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0xa8] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0xac] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push 0x12df2f8 }
	__asm { call fn_006bc920 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" void fn_00701aa0();
// FUNCTION: ROBLOXSTUDIO 0x006da570
extern "C" __declspec(naked) void asm_006da570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xffffffc0 }
	__asm { sub esp, 0x40 }
	__asm { fld1 }
	__asm { sub esp, 0x80 }
	__asm { fstp qword ptr [esp + 0x78] }
	__asm { mov dword ptr [esp + 0xbc], 0 }
	__asm { fldz }
	__asm { fst qword ptr [esp + 0x70] }
	__asm { fst qword ptr [esp + 0x68] }
	__asm { fstp qword ptr [esp + 0x60] }
	__asm { fld dword ptr [ecx + 0x2c] }
	__asm { fstp qword ptr [esp + 0x58] }
	__asm { fld dword ptr [ecx + 0x20] }
	__asm { fstp qword ptr [esp + 0x50] }
	__asm { fld dword ptr [ecx + 0x1c] }
	__asm { fstp qword ptr [esp + 0x48] }
	__asm { fld dword ptr [ecx + 0x18] }
	__asm { fstp qword ptr [esp + 0x40] }
	__asm { fld dword ptr [ecx + 0x28] }
	__asm { fstp qword ptr [esp + 0x38] }
	__asm { fld dword ptr [ecx + 0x14] }
	__asm { fstp qword ptr [esp + 0x30] }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { fstp qword ptr [esp + 0x28] }
	__asm { fld dword ptr [ecx + 0xc] }
	__asm { fstp qword ptr [esp + 0x20] }
	__asm { fld dword ptr [ecx + 0x24] }
	__asm { fstp qword ptr [esp + 0x18] }
	__asm { fld dword ptr [ecx + 8] }
	__asm { fstp qword ptr [esp + 0x10] }
	__asm { fld dword ptr [ecx + 4] }
	__asm { fstp qword ptr [esp + 8] }
	__asm { fld dword ptr [ecx] }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xe46988 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00701aa0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x88 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00701aa0();
// FUNCTION: ROBLOXSTUDIO 0x006e2e80
extern "C" __declspec(naked) void asm_006e2e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xffffffc0 }
	__asm { sub esp, 0x40 }
	__asm { fld dword ptr [ecx + 0x3c] }
	__asm { sub esp, 0x80 }
	__asm { mov dword ptr [esp + 0xbc], 0 }
	__asm { fstp qword ptr [esp + 0x78] }
	__asm { fld dword ptr [ecx + 0x38] }
	__asm { fstp qword ptr [esp + 0x70] }
	__asm { fld dword ptr [ecx + 0x34] }
	__asm { fstp qword ptr [esp + 0x68] }
	__asm { fld dword ptr [ecx + 0x30] }
	__asm { fstp qword ptr [esp + 0x60] }
	__asm { fld dword ptr [ecx + 0x2c] }
	__asm { fstp qword ptr [esp + 0x58] }
	__asm { fld dword ptr [ecx + 0x28] }
	__asm { fstp qword ptr [esp + 0x50] }
	__asm { fld dword ptr [ecx + 0x24] }
	__asm { fstp qword ptr [esp + 0x48] }
	__asm { fld dword ptr [ecx + 0x20] }
	__asm { fstp qword ptr [esp + 0x40] }
	__asm { fld dword ptr [ecx + 0x1c] }
	__asm { fstp qword ptr [esp + 0x38] }
	__asm { fld dword ptr [ecx + 0x18] }
	__asm { fstp qword ptr [esp + 0x30] }
	__asm { fld dword ptr [ecx + 0x14] }
	__asm { fstp qword ptr [esp + 0x28] }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { fstp qword ptr [esp + 0x20] }
	__asm { fld dword ptr [ecx + 0xc] }
	__asm { fstp qword ptr [esp + 0x18] }
	__asm { fld dword ptr [ecx + 8] }
	__asm { fstp qword ptr [esp + 0x10] }
	__asm { fld dword ptr [ecx + 4] }
	__asm { fstp qword ptr [esp + 8] }
	__asm { fld dword ptr [ecx] }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xe46b58 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00701aa0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x88 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x006f7940
extern "C" __declspec(naked) void asm_006f7940()
{
	__asm { push -1 }
	__asm { push 0xd185c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 4], esi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { push 8 }
	__asm { push 0xe46c50 }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov byte ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { call fn_004038a0 }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov byte ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov byte ptr [esi + 0x48], 1 }
	__asm { mov byte ptr [esi + 0x18], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" void fn_00702370();
extern "C" void fn_00706ac0();
extern "C" void fn_007091c0();
// FUNCTION: ROBLOXSTUDIO 0x007050e0
extern "C" __declspec(naked) void asm_007050e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00702370 }
	__asm { mov ecx, esi }
	__asm { call fn_00702370 }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00706ac0 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push dword ptr [esp + 8] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { call fn_007091c0 }
	__asm { mov ecx, esi }
	__asm { call fn_00702370 }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00706ac0 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push dword ptr [esp + 0xc] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { call fn_007091c0 }
	__asm { mov ecx, esi }
	__asm { call fn_00702370 }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00706ac0 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push dword ptr [esp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { call fn_007091c0 }
	__asm { mov ecx, esi }
	__asm { call fn_00702370 }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00706ac0 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push dword ptr [esp + 0x14] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { call fn_007091c0 }
	__asm { pop esi }
	__asm { ret 0x10 }
}

extern "C" void fn_00403540();
extern "C" void fn_00702370();
extern "C" void fn_00704180();
// FUNCTION: ROBLOXSTUDIO 0x007087c0
extern "C" __declspec(naked) void asm_007087c0()
{
	__asm { push -1 }
	__asm { push 0xd18f60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [esp + 0x24] }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { mov dword ptr [esp + 0x14], ebx }
	__asm { mov byte ptr [ebx], 0 }
	__asm { call fn_00403540 }
	__asm { lea edi, [ebx + 0x18] }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [esp + 0x1c], edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { fldz }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { fstp qword ptr [edi + 0x20] }
	__asm { mov byte ptr [esp + 0x14], 1 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { call fn_00702370 }
	__asm { push dword ptr [esp + 0x20] }
	__asm { mov ecx, edi }
	__asm { call fn_00704180 }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [ebx + 0x48], eax }
	__asm { mov eax, dword ptr [esp + 0x28] }
	__asm { mov dword ptr [ebx + 0x4c], eax }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret 0x10 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00708970
extern "C" __declspec(naked) void asm_00708970()
{
	__asm { push -1 }
	__asm { push 0xd3f19b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [esi], 0xe47b20 }
	__asm { push 0 }
	__asm { push dword ptr [esp + 0x20] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { push -1 }
	__asm { lea ecx, [esi + 0x30] }
	__asm { mov dword ptr [esi + 0x20], 0xffffffff }
	__asm { mov dword ptr [esi + 0x24], 0xffffffff }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { push 0 }
	__asm { push dword ptr [esp + 0x2c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret 0x10 }
}

extern "C" void fn_006dea00();
// FUNCTION: ROBLOXSTUDIO 0x00716ac0
extern "C" __declspec(naked) void asm_00716ac0()
{
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe46884 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { call fn_006dea00 }
	__asm { fld dword ptr [eax] }
	__asm { mov dword ptr [esp + 4], 0 }
	__asm { fstp dword ptr [esi + 0x14] }
	__asm { mov dword ptr [esp + 8], 0 }
	__asm { fld dword ptr [eax + 4] }
	__asm { mov dword ptr [esp + 0xc], 0 }
	__asm { fstp dword ptr [esi + 0x18] }
	__asm { mov dword ptr [esp + 0x10], 0x3f800000 }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { fstp dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" void fn_00710590();
// FUNCTION: ROBLOXSTUDIO 0x00716b60
extern "C" __declspec(naked) void asm_00716b60()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0xe46884 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { fld dword ptr [eax + 0x24] }
	__asm { fstp dword ptr [esi + 0x14] }
	__asm { lea ecx, [esp + 8] }
	__asm { fld dword ptr [eax + 0x28] }
	__asm { fstp dword ptr [esi + 0x18] }
	__asm { fld dword ptr [eax + 0x2c] }
	__asm { fstp dword ptr [esi + 0x1c] }
	__asm { call fn_00710590 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0xc], ecx }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { add esp, 0x10 }
	__asm { ret 4 }
}

extern "C" char g_00e10534[];
extern "C" char g_00e10610[];
extern "C" char g_00e106cc[];
// FUNCTION: ROBLOXSTUDIO 0x00729f80
extern "C" __declspec(naked) void asm_00729f80()
{
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10534] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x10], edx }
	__asm { call dword ptr [g_00e10610] }
	__asm { mov edx, dword ptr [esp + 0x1c] }
	__asm { mov esi, eax }
	__asm { mov ecx, edx }
	__asm { sar ecx, 9 }
	__asm { and ecx, 0x7f }
	__asm { add ecx, 0x50 }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { mov ecx, edx }
	__asm { sar ecx, 5 }
	__asm { and ecx, 0xf }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov eax, ecx }
	__asm { sar eax, 0xb }
	__asm { and eax, 0x1f }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, ecx }
	__asm { sar eax, 5 }
	__asm { and ecx, 0x1f }
	__asm { and edx, 0x1f }
	__asm { and eax, 0x3f }
	__asm { add ecx, ecx }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x20], 0xffffffff }
	__asm { mov dword ptr [esi + 0xc], edx }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { call dword ptr [g_00e106cc] }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { add esp, 8 }
	__asm { ret }
}

extern "C" void fn_0072c0f0();
// FUNCTION: ROBLOXSTUDIO 0x0072c1a0
extern "C" __declspec(naked) void asm_0072c1a0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { push 0xe4a24c }
	__asm { push 0xe4a238 }
	__asm { lea eax, [esi + 0x78] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0072c0f0 }
	__asm { push 0xe4a290 }
	__asm { push 0xe4a278 }
	__asm { lea eax, [esi + 0x88] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0072c0f0 }
	__asm { push 0xe4a26c }
	__asm { push 0xe4a258 }
	__asm { lea eax, [esi + 0x7c] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0072c0f0 }
	__asm { push 0xe4a348 }
	__asm { push 0xe4a334 }
	__asm { lea eax, [esi + 0x8c] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0072c0f0 }
	__asm { add esp, 0x40 }
	__asm { pop esi }
	__asm { ret }
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { mov dword ptr [ecx], 1 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { mov dword ptr [ecx + 0x20], eax }
	__asm { lea eax, [ecx + 0x24] }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00778ff0();
// FUNCTION: ROBLOXSTUDIO 0x00778430
extern "C" __declspec(naked) void asm_00778430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b4d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00778ff0 }
	__asm { lea ecx, [edi + 0x50] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x50] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [edi + 0x68] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x68] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov al, byte ptr [esi + 0x80] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [edi + 0x80], al }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005e56e0();
extern "C" void fn_0077dec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0077de50
extern "C" __declspec(naked) void asm_0077de50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bac0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ecx] }
	__asm { call fn_0077dec0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_005e56e0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012e07b5[];
extern "C" void fn_0077fbc0();
extern "C" void fn_007810b0();
// FUNCTION: ROBLOXSTUDIO 0x0077e7a0
extern "C" __declspec(naked) void asm_0077e7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push esi }
	__asm { push dword ptr [esi] }
	__asm { call fn_007810b0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov bl, byte ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { movzx eax, byte ptr [g_012e07b5] }
	__asm { mov byte ptr [ebp - 4], bl }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { movzx eax, byte ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov byte ptr [ebp - 0x1c], al }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { mov byte ptr [ebp - 0x10], bl }
	__asm { call fn_0077fbc0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0077eb00
extern "C" __declspec(naked) void asm_0077eb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bb58 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe4f508 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { lea ecx, [edi + 0x10] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x28], 0xe18224 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe4f870 }
	__asm { mov dword ptr [edi + 0x28], 0xe4f87c }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00781790
extern "C" __declspec(naked) void asm_00781790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bdd8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { push -1 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { lea ecx, [edi + 8] }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov al, byte ptr [esi + 0x20] }
	__asm { mov byte ptr [edi + 0x20], al }
	__asm { lea ecx, [edi + 0x24] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00781820
extern "C" __declspec(naked) void asm_00781820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bdd8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 8] }
	__asm { push 0 }
	__asm { lea eax, [edx + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x24] }
	__asm { mov al, byte ptr [edx] }
	__asm { mov byte ptr [esi + 0x20], al }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edx + 4] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00782030
extern "C" __declspec(naked) void asm_00782030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c658 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe4fabc }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov al, byte ptr [edx + 0x14] }
	__asm { mov byte ptr [esi + 0x18], al }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edx + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00783540
extern "C" __declspec(naked) void asm_00783540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c298 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe4f508 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { lea ecx, [edi + 0x10] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00783650
extern "C" __declspec(naked) void asm_00783650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c2e3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { lea ecx, [edi + 0xc] }
	__asm { push -1 }
	__asm { mov dword ptr [edi], 0xe4eff4 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [edi + 0x24] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x3c], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00784690
extern "C" __declspec(naked) void asm_00784690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov al, byte ptr [edx] }
	__asm { mov byte ptr [esi + 0x14], al }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { push 0 }
	__asm { add edx, 8 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00784860
extern "C" __declspec(naked) void asm_00784860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { push 0 }
	__asm { add edx, 0x10 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00784940
extern "C" __declspec(naked) void asm_00784940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c678 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe4fa4c }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { lea ecx, [esi + 0x24] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edx + 0x20] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00781790();
// FUNCTION: ROBLOXSTUDIO 0x007849e0
extern "C" __declspec(naked) void asm_007849e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c4e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_00781790 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x40] }
	__asm { mov eax, dword ptr [edx] }
	__asm { push -1 }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { push 0 }
	__asm { add edx, 4 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10388[];
// FUNCTION: ROBLOXSTUDIO 0x00788410
extern "C" __declspec(naked) void asm_00788410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov ax, word ptr [edx + 4] }
	__asm { push edi }
	__asm { mov word ptr [ebx + 4], ax }
	__asm { lea edi, [edx + 8] }
	__asm { push edi }
	__asm { lea ecx, [ebx + 8] }
	__asm { mov dword ptr [ebx + 8], 0 }
	__asm { mov dword ptr [ebx + 0xc], 0 }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { call dword ptr [g_00e10388] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007903c0();
// FUNCTION: ROBLOXSTUDIO 0x00790360
extern "C" __declspec(naked) void asm_00790360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_007903c0 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov edi, eax }
	__asm { movsx esi, word ptr [edx + 2] }
	__asm { movsx ecx, word ptr [edx + 4] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { shl esi, 5 }
	__asm { mov al, byte ptr [eax] }
	__asm { or esi, ecx }
	__asm { movsx ecx, word ptr [edx] }
	__asm { shl esi, 5 }
	__asm { or esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov edx, esi }
	__asm { shl edx, 8 }
	__asm { or edx, dword ptr [ecx] }
	__asm { movzx eax, al }
	__asm { shl edx, 8 }
	__asm { or edx, eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi*4], edx }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0xc], 2 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5390();
// FUNCTION: ROBLOXSTUDIO 0x0079a8e0
extern "C" __declspec(naked) void asm_0079a8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_004124c0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_00788700();
extern "C" void fn_007d5710();
// FUNCTION: ROBLOXSTUDIO 0x0079a970
extern "C" __declspec(naked) void asm_0079a970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00788700 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_00793960();
extern "C" void fn_007ad220();
// FUNCTION: ROBLOXSTUDIO 0x007adb40
extern "C" __declspec(naked) void asm_007adb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00793960 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007ad220 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_00788700();
extern "C" void fn_007d5710();
// FUNCTION: ROBLOXSTUDIO 0x007adbd0
extern "C" __declspec(naked) void asm_007adbd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00788700 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_00788700 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004030b0();
// FUNCTION: ROBLOXSTUDIO 0x007b3c00
extern "C" __declspec(naked) void asm_007b3c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { movzx esi, byte ptr [edx + 0x1a] }
	__asm { movzx ecx, byte ptr [edx + 0x18] }
	__asm { sub esi, 0x61c88647 }
	__asm { mov eax, esi }
	__asm { shl eax, 6 }
	__asm { add ecx, eax }
	__asm { mov eax, esi }
	__asm { shr eax, 2 }
	__asm { add eax, 0x9e3779b9 }
	__asm { add eax, ecx }
	__asm { movzx ecx, byte ptr [edx + 0x19] }
	__asm { xor esi, eax }
	__asm { mov eax, esi }
	__asm { shl eax, 6 }
	__asm { add ecx, eax }
	__asm { mov eax, esi }
	__asm { shr eax, 2 }
	__asm { add ecx, 0x9e3779b9 }
	__asm { add eax, ecx }
	__asm { xor esi, eax }
	__asm { lea eax, [edx + 0x1c] }
	__asm { push eax }
	__asm { call fn_004030b0 }
	__asm { mov edx, esi }
	__asm { mov ecx, esi }
	__asm { shl edx, 6 }
	__asm { shr ecx, 2 }
	__asm { add edx, ecx }
	__asm { add eax, 0x9e3779b9 }
	__asm { add esp, 4 }
	__asm { add eax, edx }
	__asm { xor eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410d50();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5d30();
// FUNCTION: ROBLOXSTUDIO 0x007b8340
extern "C" __declspec(naked) void asm_007b8340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5d30 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00410d50 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403a30();
extern "C" void fn_00a104e0();
// FUNCTION: ROBLOXSTUDIO 0x007c9220
extern "C" __declspec(naked) void asm_007c9220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33f91 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00a104e0 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00403a30 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edi + 8] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [esi] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 0x10] }
	__asm { mov edx, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006e8260();
extern "C" void fn_00792b60();
// FUNCTION: ROBLOXSTUDIO 0x007d8560
extern "C" __declspec(naked) void asm_007d8560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_006e8260 }
	__asm { movzx edi, byte ptr [ebp + 8] }
	__asm { movzx eax, byte ptr [ebp + 9] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { add edi, 0xff00 }
	__asm { shl edi, 8 }
	__asm { add edi, eax }
	__asm { movzx eax, byte ptr [ebp + 0xa] }
	__asm { shl edi, 8 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { add edi, eax }
	__asm { call fn_00792b60 }
	__asm { mov dword ptr [esi + 0x18], edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x14], 6 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007de820();
extern "C" void fn_00814510();
extern "C" void fn_00b7f8d0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007ea670
extern "C" __declspec(naked) void asm_007ea670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22d18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00b7f8d0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007de820 }
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
	__asm { call fn_00814510 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012e4e4c[];
extern "C" void fn_004115f0();
extern "C" void fn_007af830();
extern "C" void fn_0080f410();
extern "C" void fn_00824260();
// FUNCTION: ROBLOXSTUDIO 0x007ea700
extern "C" __declspec(naked) void asm_007ea700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22d48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push 0xe59734 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af830 }
	__asm { mov dword ptr [esi], 0xe595fc }
	__asm { mov dword ptr [esi + 4], 0xe59674 }
	__asm { mov dword ptr [esi + 0x18], 0xe5967c }
	__asm { mov dword ptr [esi + 0x1c], 0xe59688 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0080f410 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4e4c] }
	__asm { lea eax, [esi + 0x64] }
	__asm { mov dword ptr [esi], 0xe5969c }
	__asm { mov dword ptr [esi + 4], 0xe59714 }
	__asm { mov dword ptr [esi + 0x18], 0xe5971c }
	__asm { mov dword ptr [esi + 0x1c], 0xe59728 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x824670 }
	__asm { push 0x12eec40 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00824260 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4e48[];
extern "C" void fn_006a41d0();
extern "C" void fn_007af830();
extern "C" void fn_0080f490();
// FUNCTION: ROBLOXSTUDIO 0x007ea7c0
extern "C" __declspec(naked) void asm_007ea7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22d70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push 0x1032f48 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_007af830 }
	__asm { mov dword ptr [esi], 0xe594b4 }
	__asm { mov dword ptr [esi + 4], 0xe5952c }
	__asm { mov dword ptr [esi + 0x18], 0xe59534 }
	__asm { mov dword ptr [esi + 0x1c], 0xe59540 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0080f490 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4e48] }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x64] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe59554 }
	__asm { mov dword ptr [esi + 4], 0xe595cc }
	__asm { mov dword ptr [esi + 0x18], 0xe595d4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe595e0 }
	__asm { call fn_006a41d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00412590();
extern "C" void fn_007cb250();
extern "C" void fn_007cc880();
extern "C" void fn_008253e0();
// FUNCTION: ROBLOXSTUDIO 0x00825860
extern "C" __declspec(naked) void asm_00825860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35bab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0xe5bad0 }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x14], esi }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_008253e0 }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x44] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007cc880 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00827570();
extern "C" void fn_0082a3a0();
extern "C" void fn_0082d910();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00828140
extern "C" __declspec(naked) void asm_00828140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25538 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_0082a3a0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00827570 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0082d910 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
extern "C" void fn_007cb250();
extern "C" void fn_00828a60();
// FUNCTION: ROBLOXSTUDIO 0x008284b0
extern "C" __declspec(naked) void asm_008284b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25558 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_00828a60 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe5c1fc }
	__asm { call fn_007cb250 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00834060();
extern "C" void fn_008d01b0();
extern "C" void fn_009a8910();
// FUNCTION: ROBLOXSTUDIO 0x00831bc0
extern "C" __declspec(naked) void asm_00831bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25de0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x58], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009a8910 }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { sub esp, 0x48 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea eax, [ebp - 0x50] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009a8910 }
	__asm { mov ecx, esi }
	__asm { call fn_00834060 }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008d01b0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008d01b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_00788700();
extern "C" void fn_00793960();
extern "C" void fn_007ad220();
extern "C" void fn_007d5710();
// FUNCTION: ROBLOXSTUDIO 0x0083b0f0
extern "C" __declspec(naked) void asm_0083b0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00788700 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_00793960 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_007ad220 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}
