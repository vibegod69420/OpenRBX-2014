// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_006bc920();
extern "C" void fn_009fe110();
extern "C" void fn_00a00b90();
// FUNCTION: ROBLOXSTUDIO 0x00a00650
extern "C" __declspec(naked) void asm_00a00650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea eax, [esi + 0x84] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { call fn_009fe110 }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00a006df }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a006df }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a006df }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a006df }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a006df: }
	__asm { mov ecx, dword ptr [esi + 0x80] }
	__asm { push edi }
	__asm { call fn_00a00b90 }
	__asm { lea eax, [esi + 0x78] }
	__asm { push eax }
	__asm { call fn_006bc920 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_00a007a0();
// FUNCTION: ROBLOXSTUDIO 0x00a00710
extern "C" __declspec(naked) void asm_00a00710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { lea eax, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a007a0 }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { je L_00a0078c }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a0078c }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a0078c }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a0078c }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a0078c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_00a00c30();
// FUNCTION: ROBLOXSTUDIO 0x00a00b90
extern "C" __declspec(naked) void asm_00a00b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { lea eax, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a00c30 }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00a00c0e }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a00c0e }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a00c0e }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a00c0e }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a00c0e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_01306758[];
extern "C" char g_01306759[];
extern "C" char g_0130675a[];
extern "C" void fn_004030b0();
extern "C" void fn_004033d0();
extern "C" void fn_00403540();
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_00463750();
extern "C" void fn_006bc950();
extern "C" void fn_008f7770();
extern "C" void fn_009a7290();
extern "C" void fn_009fd720();
extern "C" void fn_009fdf40();
extern "C" void fn_009fe3b0();
extern "C" void fn_009fe5e0();
extern "C" void fn_009feda0();
extern "C" void fn_009ff800();
extern "C" void fn_009ffad0();
extern "C" void fn_00a00710();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a00d30
extern "C" __declspec(naked) void asm_00a00d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd436dc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { cmp dword ptr [ebx + 0x10], 0 }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { jne L_00a00d8f }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [eax], 2 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00a00d8f: }
	__asm { lea eax, [esi + 0x84] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { movzx eax, byte ptr [esi + 0x8c] }
	__asm { lea edi, [esi + 0x8c] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { add eax, edi }
	__asm { je L_00a00dc0 }
	__asm { inc eax }
	__asm { jmp L_00a00dc2 }
	__asm { L_00a00dc0: }
	__asm { xor eax, eax }
	__asm { L_00a00dc2: }
	__asm { push eax }
	__asm { push ebx }
	__asm { push ebx }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_009fe3b0 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00a00e4b }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 2 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { je L_00a01023 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a01023 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a01023 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a01023 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { jmp L_00a01023 }
	__asm { L_00a00e4b: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { je L_00a00e7e }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a00e7e }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a00e7e }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a00e7e }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a00e7e: }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov ecx, dword ptr [esi + 0x80] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_009ff800 }
	__asm { test al, al }
	__asm { je L_00a00ef4 }
	__asm { mov edx, dword ptr [ebp - 0x24] }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { cmp ecx, 1 }
	__asm { jne L_00a00ecd }
	__asm { cmp byte ptr [ebp + 0x14], 0 }
	__asm { je L_00a00ecd }
	__asm { mov ecx, dword ptr [esi + 0x80] }
	__asm { push ebx }
	__asm { call fn_00a00710 }
	__asm { mov edx, dword ptr [ebp - 0x24] }
	__asm { L_00a00ecd: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a01010 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { jmp L_00a01010 }
	__asm { L_00a00ef4: }
	__asm { push esi }
	__asm { call fn_00463750 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { test eax, eax }
	__asm { je L_00a00ff7 }
	__asm { push 0xc }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test ecx, ecx }
	__asm { je L_00a00f3a }
	__asm { push 0 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { call fn_009feda0 }
	__asm { jmp L_00a00f3c }
	__asm { L_00a00f3a: }
	__asm { xor eax, eax }
	__asm { L_00a00f3c: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_009fe5e0 }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { push 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov ecx, dword ptr [esi + 0x80] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_009ffad0 }
	__asm { lea eax, [esi + 0x78] }
	__asm { push eax }
	__asm { call fn_006bc950 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { sub esp, 0x20 }
	__asm { mov edi, esp }
	__asm { push 0 }
	__asm { sub esp, 0x24 }
	__asm { mov esi, esp }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push ebx }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { movzx eax, byte ptr [g_0130675a] }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_01306759] }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_01306758] }
	__asm { push eax }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { push eax }
	__asm { call fn_009a7290 }
	__asm { add esp, 8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { push 0x9ff320 }
	__asm { push esi }
	__asm { call fn_009fdf40 }
	__asm { add esp, 0x34 }
	__asm { mov ecx, edi }
	__asm { call fn_009fd720 }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { fstp dword ptr [esp] }
	__asm { push ebx }
	__asm { call fn_008f7770 }
	__asm { L_00a00ff7: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { L_00a01010: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_004033d0 }
	__asm { L_00a01023: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_00a01150();
// FUNCTION: ROBLOXSTUDIO 0x00a010c0
extern "C" __declspec(naked) void asm_00a010c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { lea eax, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a01150 }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { je L_00a0113c }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a0113c }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a0113c }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a0113c }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a0113c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
