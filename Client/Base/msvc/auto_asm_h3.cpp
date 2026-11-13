// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007dcfb0();
extern "C" void fn_007e9220();
// FUNCTION: ROBLOXSTUDIO 0x00aa4620
extern "C" __declspec(naked) void asm_00aa4620()
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
	__asm { call fn_007e9220 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007dcfb0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007e9220 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_007dcfb0 }
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

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0043f040();
// FUNCTION: ROBLOXSTUDIO 0x00aa84d0
extern "C" __declspec(naked) void asm_00aa84d0()
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
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi + 0x68] }
	__asm { mov edi, ecx }
	__asm { lea ecx, [esi + 0x68] }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov eax, dword ptr [edx + eax] }
	__asm { add eax, dword ptr [edi + 0x28] }
	__asm { add ecx, eax }
	__asm { call fn_0043f040 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 8] }
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

extern "C" void fn_00923320();
extern "C" void fn_00aac340();
// FUNCTION: ROBLOXSTUDIO 0x00aac3b0
extern "C" __declspec(naked) void asm_00aac3b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4deb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xeb88b4 }
	__asm { mov dword ptr [esi + 4], 0xeb89c4 }
	__asm { mov dword ptr [esi + 0x18], 0xeb89cc }
	__asm { mov dword ptr [esi + 0x1c], 0xeb89d8 }
	__asm { mov dword ptr [esi + 0x64], 0xeb89e8 }
	__asm { mov dword ptr [esi + 0x70], 0xeb89f0 }
	__asm { mov dword ptr [esi + 0x98], 0xeb8a10 }
	__asm { mov dword ptr [esi + 0xb0], 0xeb8a44 }
	__asm { mov dword ptr [esi + 0xc4], 0xeb8a70 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xeb8a78 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xd4] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { lea ecx, [esi + 0x124] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00923320 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00aac340 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0095b950();
extern "C" void fn_009a9600();
extern "C" void fn_00ab1e70();
// FUNCTION: ROBLOXSTUDIO 0x00ab0480
extern "C" __declspec(naked) void asm_00ab0480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4e240 }
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
	__asm { call fn_0095b950 }
	__asm { sub esp, 0x28 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_0095b950 }
	__asm { mov ecx, esi }
	__asm { call fn_00ab1e70 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009a9600 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009a9600 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_009bccc0();
extern "C" void fn_00ab2b90();
extern "C" void fn_00af96c0();
// FUNCTION: ROBLOXSTUDIO 0x00ab1590
extern "C" __declspec(naked) void asm_00ab1590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53350 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af96c0 }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00af96c0 }
	__asm { mov ecx, esi }
	__asm { call fn_00ab2b90 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009bccc0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009bccc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_00ab2d00();
extern "C" void fn_00ab79a0();
extern "C" void fn_00ab9020();
// FUNCTION: ROBLOXSTUDIO 0x00ab1630
extern "C" __declspec(naked) void asm_00ab1630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4e3b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x64], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ab79a0 }
	__asm { mov eax, dword ptr [ebp - 0x68] }
	__asm { sub esp, 0x58 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x64] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00ab79a0 }
	__asm { mov ecx, esi }
	__asm { call fn_00ab2d00 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00ab9020 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00ab9020 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x5c }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0057db40();
extern "C" void fn_00824ff0();
// FUNCTION: ROBLOXSTUDIO 0x00ab4170
extern "C" __declspec(naked) void asm_00ab4170()
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
	__asm { call fn_00824ff0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0057db40 }
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

extern "C" void fn_00410d50();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_00788700();
extern "C" void fn_007d5710();
extern "C" void fn_007d5d30();
// FUNCTION: ROBLOXSTUDIO 0x00ab4200
extern "C" __declspec(naked) void asm_00ab4200()
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
	__asm { call fn_007d5d30 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00410d50 }
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

extern "C" void fn_007cb440();
extern "C" void fn_00aca6b0();
// FUNCTION: ROBLOXSTUDIO 0x00aca900
extern "C" __declspec(naked) void asm_00aca900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4fe0c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x1003770 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00aca6b0 }
	__asm { mov dword ptr [edi], 0xebbee4 }
	__asm { mov dword ptr [edi + 4], 0xebbf6c }
	__asm { mov dword ptr [edi + 0x18], 0xebbf74 }
	__asm { mov dword ptr [edi + 0x1c], 0xebbf80 }
	__asm { mov dword ptr [edi + 0x64], 0xebbf90 }
	__asm { mov dword ptr [edi + 0x68], 0xebbf98 }
	__asm { mov dword ptr [edi + 0x8c], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x90], 0 }
	__asm { mov dword ptr [edi + 0x94], 0 }
	__asm { mov dword ptr [edi + 0x98], 0 }
	__asm { lea esi, [edi + 0x9c] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [edi + 0xb8], 0x3f800000 }
	__asm { mov dword ptr [edi + 0xbc], 0x3f800000 }
	__asm { mov dword ptr [edi + 0xc0], 0x40000000 }
	__asm { mov dword ptr [edi + 0xc4], 0x40800000 }
	__asm { mov dword ptr [edi + 0xc8], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cb440();
extern "C" void fn_00acbaa0();
// FUNCTION: ROBLOXSTUDIO 0x00acbcf0
extern "C" __declspec(naked) void asm_00acbcf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4ff5c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x1003690 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00acbaa0 }
	__asm { mov dword ptr [edi], 0xebc24c }
	__asm { mov dword ptr [edi + 4], 0xebc2d4 }
	__asm { mov dword ptr [edi + 0x18], 0xebc2dc }
	__asm { mov dword ptr [edi + 0x1c], 0xebc2e8 }
	__asm { mov dword ptr [edi + 0x64], 0xebc2f8 }
	__asm { mov dword ptr [edi + 0x68], 0xebc300 }
	__asm { mov dword ptr [edi + 0x8c], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x90], 0 }
	__asm { mov dword ptr [edi + 0x94], 0 }
	__asm { mov dword ptr [edi + 0x98], 0 }
	__asm { lea esi, [edi + 0x9c] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [edi + 0xb8], 0x3f800000 }
	__asm { mov dword ptr [edi + 0xbc], 0x3f800000 }
	__asm { mov dword ptr [edi + 0xc0], 0x40000000 }
	__asm { mov dword ptr [edi + 0xc4], 0x40800000 }
	__asm { mov dword ptr [edi + 0xc8], 0 }
	__asm { mov dword ptr [edi + 0xcc], 0x3d800000 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004109a0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007c7180();
extern "C" void fn_007d5470();
extern "C" void fn_007d58d0();
// FUNCTION: ROBLOXSTUDIO 0x00acf0a0
extern "C" __declspec(naked) void asm_00acf0a0()
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
	__asm { call fn_007d58d0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007c7180 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5470 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_004109a0 }
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

extern "C" void fn_00a5a980();
extern "C" void fn_00adb560();
extern "C" void fn_00adf160();
// FUNCTION: ROBLOXSTUDIO 0x00adadc0
extern "C" __declspec(naked) void asm_00adadc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50f00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a5a980 }
	__asm { mov eax, dword ptr [ebp - 0x68] }
	__asm { sub esp, 0x58 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a5a980 }
	__asm { mov ecx, esi }
	__asm { call fn_00adb560 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00adf160 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adf160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x5c }
}

extern "C" void fn_00adb8e0();
extern "C" void fn_00ade7c0();
extern "C" void fn_00adf340();
// FUNCTION: ROBLOXSTUDIO 0x00adaf90
extern "C" __declspec(naked) void asm_00adaf90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50f70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x64 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x70], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ade7c0 }
	__asm { mov eax, dword ptr [ebp - 0x70] }
	__asm { sub esp, 0x60 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea eax, [ebp - 0x68] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00ade7c0 }
	__asm { mov ecx, esi }
	__asm { call fn_00adb8e0 }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00adf340 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adf340 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x64 }
}

extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5390();
extern "C" void fn_007dd280();
extern "C" void fn_007e9300();
// FUNCTION: ROBLOXSTUDIO 0x00ae86c0
extern "C" __declspec(naked) void asm_00ae86c0()
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
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007e9300 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_007dd280 }
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

extern "C" void fn_00aeca30();
extern "C" void fn_00aed4a0();
extern "C" void fn_00aed7d0();
// FUNCTION: ROBLOXSTUDIO 0x00aec590
extern "C" __declspec(naked) void asm_00aec590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52090 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aed4a0 }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00aed4a0 }
	__asm { mov ecx, esi }
	__asm { call fn_00aeca30 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00aed7d0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00aed7d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00aef5c5
extern "C" __declspec(naked) void asm_00aef5c5()
{
	__asm { push 6 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xebf764 }
	__asm { push 7 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xebf76c }
	__asm { push 8 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xebf774 }
	__asm { push 9 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xebf77c }
	__asm { push 0xa }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xebf784 }
	__asm { push 0xb }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xebf78c }
	__asm { push 0xc }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xebf798 }
	__asm { push 0xd }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038064[];
extern "C" void fn_00626760();
extern "C" void fn_0099c980();
extern "C" void fn_009f2940();
// FUNCTION: ROBLOXSTUDIO 0x00af13f0
extern "C" __declspec(naked) void asm_00af13f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x90 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi + 0x100] }
	__asm { lea eax, [ebp - 0x90] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0099c980 }
	__asm { mov ecx, eax }
	__asm { call fn_00626760 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [esi + 0x100] }
	__asm { push dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { lea eax, [ebp - 0x90] }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0099c980 }
	__asm { mov ecx, eax }
	__asm { call fn_00626760 }
	__asm { fld dword ptr [g_01038064] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x60] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_009f2940 }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00af73f0();
extern "C" void fn_00afae40();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00af59d0
extern "C" __declspec(naked) void asm_00af59d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52790 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_00afae40 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [esi + 0x10] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af73f0 }
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

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_007d5550();
extern "C" void fn_007dd940();
extern "C" void fn_007e9530();
// FUNCTION: ROBLOXSTUDIO 0x00af74e0
extern "C" __declspec(naked) void asm_00af74e0()
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
	__asm { call fn_007e9530 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007dd940 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_0048e3f0 }
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

extern "C" void fn_008bff30();
extern "C" void fn_00af5530();
// FUNCTION: ROBLOXSTUDIO 0x00afdcb0
extern "C" __declspec(naked) void asm_00afdcb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53238 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { sub esp, 0x20 }
	__asm { lea esi, [edi + 4] }
	__asm { mov ecx, esp }
	__asm { lea eax, [esi + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { call fn_008bff30 }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esi }
	__asm { call fn_00af5530 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [edi] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x28 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009bccc0();
extern "C" void fn_00af96c0();
extern "C" void fn_00affda0();
// FUNCTION: ROBLOXSTUDIO 0x00aff390
extern "C" __declspec(naked) void asm_00aff390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53350 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af96c0 }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00af96c0 }
	__asm { mov ecx, esi }
	__asm { call fn_00affda0 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009bccc0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009bccc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_009bccc0();
extern "C" void fn_00af96c0();
extern "C" void fn_00affe50();
// FUNCTION: ROBLOXSTUDIO 0x00aff430
extern "C" __declspec(naked) void asm_00aff430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53350 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af96c0 }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00af96c0 }
	__asm { mov ecx, esi }
	__asm { call fn_00affe50 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009bccc0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009bccc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_009bccc0();
extern "C" void fn_00af96c0();
extern "C" void fn_00afff00();
// FUNCTION: ROBLOXSTUDIO 0x00aff4d0
extern "C" __declspec(naked) void asm_00aff4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53350 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af96c0 }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00af96c0 }
	__asm { mov ecx, esi }
	__asm { call fn_00afff00 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009bccc0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009bccc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_00b11a80();
extern "C" void fn_00baf830();
extern "C" void fn_00c679a0();
// FUNCTION: ROBLOXSTUDIO 0x00b13d60
extern "C" __declspec(naked) void asm_00b13d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd55123 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0xec4100 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00b11a80 }
	__asm { mov byte ptr [edi + 0x64], 1 }
	__asm { mov dword ptr [edi], 0xec41b4 }
	__asm { mov dword ptr [edi + 4], 0xec422c }
	__asm { mov dword ptr [edi + 0x18], 0xec4234 }
	__asm { mov dword ptr [edi + 0x1c], 0xec4240 }
	__asm { lea ecx, [edi + 0x68] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { call fn_00c679a0 }
	__asm { mov dword ptr [edi + 0x68], eax }
	__asm { lea ecx, [edi + 0x70] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { call fn_00baf830 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x70], eax }
	__asm { mov dword ptr [edi + 0x8c], 0xf }
	__asm { mov dword ptr [edi + 0x88], 0 }
	__asm { mov byte ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [edi + 0x90], 0xa }
	__asm { mov dword ptr [edi + 0x94], 0x3e8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004109a0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5470();
// FUNCTION: ROBLOXSTUDIO 0x00b1f160
extern "C" __declspec(naked) void asm_00b1f160()
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
	__asm { call fn_007d5470 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_004109a0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5470 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_004109a0 }
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

extern "C" void fn_009bccc0();
extern "C" void fn_00af96c0();
extern "C" void fn_00b24c10();
// FUNCTION: ROBLOXSTUDIO 0x00b24100
extern "C" __declspec(naked) void asm_00b24100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53350 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af96c0 }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00af96c0 }
	__asm { mov ecx, esi }
	__asm { call fn_00b24c10 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009bccc0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009bccc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_00b25370();
extern "C" void fn_00b25540();
extern "C" void fn_00c679a0();
// FUNCTION: ROBLOXSTUDIO 0x00b25ba0
extern "C" __declspec(naked) void asm_00b25ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd562ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00b25370 }
	__asm { mov byte ptr [edi + 0x64], 1 }
	__asm { mov dword ptr [edi], 0xec666c }
	__asm { mov dword ptr [edi + 4], 0xec66e4 }
	__asm { mov dword ptr [edi + 0x18], 0xec66ec }
	__asm { mov dword ptr [edi + 0x1c], 0xec66f8 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { lea ecx, [edi + 0x6c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { call fn_00c679a0 }
	__asm { mov dword ptr [edi + 0x6c], eax }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { lea ecx, [edi + 0x7c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00b25540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x7c], 0xec665c }
	__asm { mov dword ptr [edi + 0xa4], 0x64 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_0057db40();
extern "C" void fn_007d5550();
extern "C" void fn_00824ff0();
// FUNCTION: ROBLOXSTUDIO 0x00b2aec0
extern "C" __declspec(naked) void asm_00b2aec0()
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
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_00824ff0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_0057db40 }
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

extern "C" void fn_00929e70();
extern "C" void fn_0092aad0();
extern "C" void fn_0092ac20();
// FUNCTION: ROBLOXSTUDIO 0x00b39040
extern "C" __declspec(naked) void asm_00b39040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd358f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00929e70 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe7f7b4 }
	__asm { mov dword ptr [esi + 4], 0xe7f850 }
	__asm { mov dword ptr [esi + 0x18], 0xe7f858 }
	__asm { mov dword ptr [esi + 0x1c], 0xe7f864 }
	__asm { mov dword ptr [esi + 0x64], 0xe7f874 }
	__asm { call fn_0092ac20 }
	__asm { push dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi], 0xe7f87c }
	__asm { mov dword ptr [esi + 4], 0xe7f918 }
	__asm { mov dword ptr [esi + 0x18], 0xe7f920 }
	__asm { mov dword ptr [esi + 0x1c], 0xe7f92c }
	__asm { mov dword ptr [esi + 0x64], 0xe7f93c }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x98], eax }
	__asm { call fn_0092aad0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005e8b40();
extern "C" void fn_00b39470();
extern "C" void fn_00b69050();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b46440
extern "C" __declspec(naked) void asm_00b46440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd58c98 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x20], 0xe6dc74 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call fn_005e8b40 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x20], 0xec7cb8 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b39470 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x20], 0xe6dc74 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b69050 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00412590();
extern "C" void fn_007cb250();
extern "C" void fn_007cc5f0();
extern "C" void fn_008253e0();
// FUNCTION: ROBLOXSTUDIO 0x00b48940
extern "C" __declspec(naked) void asm_00b48940()
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
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x14], esi }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_008253e0 }
	__asm { push edi }
	__asm { lea ecx, [esi + 0xe0] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [edi + 0x28], 1 }
	__asm { call fn_007cc5f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0xec98d0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00412590();
extern "C" void fn_007cb250();
extern "C" void fn_007cc5f0();
extern "C" void fn_008253e0();
// FUNCTION: ROBLOXSTUDIO 0x00b489e0
extern "C" __declspec(naked) void asm_00b489e0()
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
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x14], esi }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_008253e0 }
	__asm { push edi }
	__asm { lea ecx, [esi + 0xe0] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [edi + 0x28], 0 }
	__asm { call fn_007cc5f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0xec98c0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00b49a90();
extern "C" void fn_00c01a50();
// FUNCTION: ROBLOXSTUDIO 0x00b49950
extern "C" __declspec(naked) void asm_00b49950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0x74] }
	__asm { mov dword ptr [esi + 4], 0xffffffff }
	__asm { mov dword ptr [esi + 8], 0xffffffff }
	__asm { mov dword ptr [esi + 0xc], 0xffffffff }
	__asm { mov dword ptr [esi + 0x10], 0xffffffff }
	__asm { mov dword ptr [esi + 0x14], 0xffffffff }
	__asm { mov dword ptr [esi], 0xec9cd8 }
	__asm { mov dword ptr [esi + 0x64], 0 }
	__asm { mov byte ptr [esi + 0x70], 0 }
	__asm { call fn_00c01a50 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0xac], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0xb0], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { lea ecx, [esi + 0xb8] }
	__asm { mov dword ptr [esi + 0xb4], eax }
	__asm { call fn_00b49a90 }
	__asm { lea ecx, [esi + 0xd4] }
	__asm { call fn_00b49a90 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0xfc], 0 }
	__asm { mov dword ptr [esi + 0x100], 0 }
	__asm { mov dword ptr [esi + 0x104], 0 }
	__asm { mov dword ptr [esi + 0x90], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x94], eax }
	__asm { mov dword ptr [esi + 0xf0], 0 }
	__asm { mov dword ptr [esi + 0xf4], 0 }
	__asm { mov dword ptr [esi + 0xf8], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00b57b40();
extern "C" void fn_00b58300();
extern "C" void fn_00b5b160();
extern "C" void fn_00b5cbf0();
// FUNCTION: ROBLOXSTUDIO 0x00b57c70
extern "C" __declspec(naked) void asm_00b57c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59308 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_00b5cbf0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b58300 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00b57b40 }
	__asm { add esp, 0x1c }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b5b160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b57cf0();
extern "C" void fn_00b58300();
extern "C" void fn_00b5b160();
extern "C" void fn_00b5cbf0();
// FUNCTION: ROBLOXSTUDIO 0x00b57e60
extern "C" __declspec(naked) void asm_00b57e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59308 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { call fn_00b5cbf0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b58300 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00b57cf0 }
	__asm { add esp, 0x1c }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b5b160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b5cbf0();
extern "C" void fn_00baa1e0();
// FUNCTION: ROBLOXSTUDIO 0x00b5ae10
extern "C" __declspec(naked) void asm_00b5ae10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5936e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { lea ecx, [edi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00baa1e0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { lea ecx, [edi + 0x44] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xecdcc0 }
	__asm { mov dword ptr [edi + 8], 0xecdcd0 }
	__asm { mov word ptr [edi + 0x38], 0 }
	__asm { mov byte ptr [edi + 0x3a], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { call fn_00b5cbf0 }
	__asm { lea ecx, [edi + 0x54] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00b5cbf0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov dword ptr [edi + 0x68], 0xffffffff }
	__asm { mov dword ptr [edi + 0x6c], 0xffffffff }
	__asm { mov dword ptr [edi + 0x70], 7 }
	__asm { mov byte ptr [edi + 0x7c], 1 }
	__asm { mov dword ptr [edi + 0x80], edi }
	__asm { mov dword ptr [edi + 0x88], 0xb5b400 }
	__asm { mov dword ptr [edi + 0x8c], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" char g_00e10668[];
extern "C" void fn_00b6d0d0();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x00b6d060
extern "C" __declspec(naked) void asm_00b6d060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40008 }
	__asm { push 1 }
	__asm { call dword ptr [g_00e10668] }
	__asm { mov edi, eax }
	__asm { push 0x20000 }
	__asm { lea ecx, [edi + 4] }
	__asm { push 0 }
	__asm { push ecx }
	__asm { call fn_00cf6804 }
	__asm { push 0x20000 }
	__asm { lea ecx, [edi + 0x20004] }
	__asm { push 0xff }
	__asm { push ecx }
	__asm { call fn_00cf6804 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x40004], eax }
	__asm { push eax }
	__asm { push edi }
	__asm { mov dword ptr [edi], eax }
	__asm { call fn_00b6d0d0 }
	__asm { push edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 0x34 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35150();
extern "C" void fn_00a351c0();
extern "C" void fn_00a354f0();
extern "C" void fn_00a35560();
extern "C" void fn_00a35a20();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38710();
// FUNCTION: ROBLOXSTUDIO 0x00b6e8e0
extern "C" __declspec(naked) void asm_00b6e8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a38710 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a351c0 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00a354f0 }
	__asm { xor ecx, ecx }
	__asm { test eax, eax }
	__asm { sete cl }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00a35560 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35a20 }
	__asm { push esi }
	__asm { call fn_00a35150 }
	__asm { add esp, 0x3c }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34e50();
extern "C" void fn_00a35690();
extern "C" void fn_00a357b0();
extern "C" void fn_00a35b70();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a35d10();
// FUNCTION: ROBLOXSTUDIO 0x00b70830
extern "C" __declspec(naked) void asm_00b70830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00a34e50 }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { push esi }
	__asm { call fn_00a35690 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push 0xe53324 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35b70 }
	__asm { add esp, 0x44 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10700[];
extern "C" char g_00e10750[];
extern "C" void fn_00a35650();
extern "C" void fn_00a356f0();
extern "C" void fn_00a38740();
extern "C" void fn_00a38810();
// FUNCTION: ROBLOXSTUDIO 0x00b71bd0
extern "C" __declspec(naked) void asm_00b71bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38810 }
	__asm { fstp qword ptr [esp] }
	__asm { call dword ptr [g_00e10750] }
	__asm { fstp qword ptr [esp + 4] }
	__asm { add esp, 4 }
	__asm { push esi }
	__asm { call fn_00a356f0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { push esi }
	__asm { call fn_00a35650 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 2 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a38740 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38810 }
	__asm { fstp qword ptr [esp] }
	__asm { call dword ptr [g_00e10700] }
	__asm { fstp qword ptr [esp + 4] }
	__asm { add esp, 4 }
	__asm { push esi }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b7e3e0();
extern "C" void fn_00b7ec10();
extern "C" void fn_00b7f370();
// FUNCTION: ROBLOXSTUDIO 0x00b7c920
extern "C" __declspec(naked) void asm_00b7c920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a620 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x40 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b7ec10 }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { sub esp, 0x3c }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea eax, [ebp - 0x48] }
	__asm { add ecx, 4 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b7ec10 }
	__asm { mov ecx, esi }
	__asm { call fn_00b7e3e0 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b7f370 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b7f370 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" void fn_00b7dd30();
extern "C" void fn_00b89440();
extern "C" void fn_00c452a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b7eb80
extern "C" __declspec(naked) void asm_00b7eb80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a848 }
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
	__asm { call fn_00b89440 }
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
	__asm { call fn_00b7dd30 }
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
	__asm { call fn_00c452a0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_004033d0();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_00b837a0();
// FUNCTION: ROBLOXSTUDIO 0x00b842c0
extern "C" __declspec(naked) void asm_00b842c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5af88 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0xc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b837a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { push 0xed3418 }
	__asm { push 3 }
	__asm { push esi }
	__asm { call fn_00773930 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004033d0 }
	__asm { mov eax, 0xb842f3 }
	__asm { ret }
}

extern "C" void fn_004033d0();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_00b83d20();
// FUNCTION: ROBLOXSTUDIO 0x00b84350
extern "C" __declspec(naked) void asm_00b84350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5afa8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0xc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b83d20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { push 0xed3418 }
	__asm { push 3 }
	__asm { push esi }
	__asm { call fn_00773930 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004033d0 }
	__asm { mov eax, 0xb84383 }
	__asm { ret }
}

extern "C" void fn_0092fcc0();
extern "C" void fn_0092fdc0();
// FUNCTION: ROBLOXSTUDIO 0x00b86800
extern "C" __declspec(naked) void asm_00b86800()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [esi + 0x88] }
	__asm { fld qword ptr [eax + 0x170] }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xe60aa8 }
	__asm { fld qword ptr [eax + 0x170] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [esi + 0x8c] }
	__asm { call fn_0092fdc0 }
	__asm { mov eax, dword ptr [esi + 0x88] }
	__asm { add esp, 0x10 }
	__asm { fld qword ptr [eax + 0x1a0] }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xed370c }
	__asm { fld qword ptr [eax + 0x1a0] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [esi + 0x90] }
	__asm { call fn_0092fdc0 }
	__asm { mov eax, dword ptr [esi + 0x88] }
	__asm { add esp, 0x10 }
	__asm { fld qword ptr [eax + 0x1d0] }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xed3718 }
	__asm { fld qword ptr [eax + 0x1d0] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [esi + 0x94] }
	__asm { call fn_0092fdc0 }
	__asm { mov eax, dword ptr [esi + 0x88] }
	__asm { mov ecx, dword ptr [esi + 0x98] }
	__asm { add esp, 0x18 }
	__asm { add eax, 0x1e8 }
	__asm { push eax }
	__asm { call fn_0092fcc0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10764[];
extern "C" void fn_00a356f0();
extern "C" void fn_00a38810();
extern "C" void fn_00a390e0();
extern "C" void fn_00cf6876();
// FUNCTION: ROBLOXSTUDIO 0x00b86dc0
extern "C" __declspec(naked) void asm_00b86dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fldz }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push 2 }
	__asm { push ebx }
	__asm { call fn_00a390e0 }
	__asm { call fn_00cf6876 }
	__asm { push 1 }
	__asm { push ebx }
	__asm { mov edi, eax }
	__asm { mov esi, edx }
	__asm { call fn_00a38810 }
	__asm { call fn_00cf6876 }
	__asm { push esi }
	__asm { push edi }
	__asm { push edx }
	__asm { push eax }
	__asm { call dword ptr [g_00e10764] }
	__asm { fstp qword ptr [esp + 0x20] }
	__asm { add esp, 0x20 }
	__asm { push ebx }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b87e40();
extern "C" void fn_00b89480();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b87300
extern "C" __declspec(naked) void asm_00b87300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b1e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b89480 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { lea ecx, [esi + 8] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 0xf] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b87e40 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0092f890();
extern "C" void fn_00b87ee0();
// FUNCTION: ROBLOXSTUDIO 0x00b89f80
extern "C" __declspec(naked) void asm_00b89f80()
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
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b87ee0 }
	__asm { add esp, 0xc }
	__asm { mov esi, dword ptr [edi] }
	__asm { push 0xe60a90 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_0092f890 }
	__asm { push 0xe60ac4 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x8c], eax }
	__asm { call fn_0092f890 }
	__asm { push 0xed38c4 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x90], eax }
	__asm { call fn_0092f890 }
	__asm { push 0xe60ae8 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x94], eax }
	__asm { call fn_0092f890 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x98], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b8c9e0();
// FUNCTION: ROBLOXSTUDIO 0x00b8cfb0
extern "C" __declspec(naked) void asm_00b8cfb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push 4 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b8c9e0 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi], 0xed4a34 }
	__asm { mov dword ptr [esi + 0x1c], 0xed4a80 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0xcc], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0xd0], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0xd4], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0xd8], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0xdc], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [esi + 0xe0], eax }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [esi + 0xe4], eax }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { mov dword ptr [esi + 0xe8], eax }
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { mov dword ptr [esi + 0xec], eax }
	__asm { mov eax, dword ptr [ecx + 0x24] }
	__asm { mov dword ptr [esi + 0xf0], eax }
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { mov dword ptr [esi + 0xf4], eax }
	__asm { mov eax, dword ptr [ecx + 0x2c] }
	__asm { mov dword ptr [esi + 0xf8], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_01038048[];
extern "C" void fn_00626760();
extern "C" void fn_0099c980();
extern "C" void fn_009f2a70();
// FUNCTION: ROBLOXSTUDIO 0x00b8e000
extern "C" __declspec(naked) void asm_00b8e000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x60 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { lea eax, [esi + 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { call fn_0099c980 }
	__asm { mov ecx, eax }
	__asm { call fn_00626760 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { lea eax, [esi + 0x64] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_0099c980 }
	__asm { mov ecx, eax }
	__asm { call fn_00626760 }
	__asm { fld dword ptr [g_01038048] }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { fst dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { call fn_009f2a70 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00898ee0();
extern "C" void fn_00b91250();
// FUNCTION: ROBLOXSTUDIO 0x00b913e0
extern "C" __declspec(naked) void asm_00b913e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 0x20] }
	__asm { mov ecx, edi }
	__asm { call fn_00898ee0 }
	__asm { mov esi, dword ptr [ebx + 0x1c] }
	__asm { mov ecx, esi }
	__asm { call fn_00898ee0 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebx + 0x54] }
	__asm { push eax }
	__asm { lea eax, [ebx + 0x24] }
	__asm { push eax }
	__asm { lea eax, [edi + 0xa4] }
	__asm { push eax }
	__asm { lea eax, [esi + 0xa4] }
	__asm { push eax }
	__asm { call fn_00b91250 }
	__asm { fsub dword ptr [ebx + 0x18] }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { fstp dword ptr [ebx + 0x8c] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_009332f0();
// FUNCTION: ROBLOXSTUDIO 0x00b9d030
extern "C" __declspec(naked) void asm_00b9d030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c458 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009332f0 }
	__asm { lea ecx, [esi + 0x40] }
	__asm { mov dword ptr [esi], 0xed7094 }
	__asm { mov dword ptr [esi + 4], 0xed70f0 }
	__asm { mov dword ptr [esi + 0x1c], 0xed7124 }
	__asm { push 0xb }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xe57074 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [esi + 0x58], 0 }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { mov dword ptr [esi + 0x60], 0 }
	__asm { mov dword ptr [esi + 0x64], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004115f0();
extern "C" void fn_00999680();
// FUNCTION: ROBLOXSTUDIO 0x00ba0d90
extern "C" __declspec(naked) void asm_00ba0d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c76e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [eax], eax }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x24], 0xf }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { mov byte ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x9997b0 }
	__asm { push 0x1303198 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004115f0 }
	__asm { call fn_00999680 }
	__asm { lea eax, [esi + 0x34] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x9997b0 }
	__asm { push 0x1303198 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_004115f0 }
	__asm { add esp, 0x10 }
	__asm { call fn_00999680 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
extern "C" void fn_00898ee0();
extern "C" void fn_009f3020();
extern "C" void fn_009f4480();
// FUNCTION: ROBLOXSTUDIO 0x00ba9240
extern "C" __declspec(naked) void asm_00ba9240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x4c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { fld dword ptr [esi + 0x90] }
	__asm { fstp dword ptr [ebp - 4] }
	__asm { call fn_00898ee0 }
	__asm { lea eax, [esi + 0x6c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_006d19a0 }
	__asm { lea eax, [esi + 0xa4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { call fn_009f4480 }
	__asm { add esp, 0xc }
	__asm { mov ecx, esi }
	__asm { call fn_00898ee0 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [esi + 0xc8] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_009f3020 }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006deac0();
extern "C" void fn_008bbcc0();
// FUNCTION: ROBLOXSTUDIO 0x00bc0640
extern "C" __declspec(naked) void asm_00bc0640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d7d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x10], 0xe370e4 }
	__asm { call fn_006deac0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0x14], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008bbcc0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_008bbcc0 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_008bbcc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00700740();
extern "C" void fn_00a206d0();
// FUNCTION: ROBLOXSTUDIO 0x00bc25b0
extern "C" __declspec(naked) void asm_00bc25b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { push ebx }
	__asm { call fn_00a206d0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { push ebx }
	__asm { mov edi, eax }
	__asm { call fn_00a206d0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov esi, eax }
	__asm { call fn_00a206d0 }
	__asm { lea ecx, [edi + 4] }
	__asm { push ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { push ecx }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_00700740 }
	__asm { fld dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { fstp dword ptr [ebx + 0x14] }
	__asm { pop esi }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ebx + 0x18] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [ebx + 0x1c] }
	__asm { fld dword ptr [eax + 0x10] }
	__asm { fstp dword ptr [ebx + 0x20] }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6400();
extern "C" void fn_00bc6fc0();
// FUNCTION: ROBLOXSTUDIO 0x00bc67c0
extern "C" __declspec(naked) void asm_00bc67c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push 0x4c }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc6400 }
	__asm { mov edi, eax }
	__asm { push 9 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc6fc0 }
	__asm { add esp, 0x1c }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6400();
extern "C" void fn_00bc6fc0();
extern "C" void fn_00bca320();
extern "C" void fn_00bca390();
// FUNCTION: ROBLOXSTUDIO 0x00bc9ad0
extern "C" __declspec(naked) void asm_00bc9ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0x24 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00bc6400 }
	__asm { mov esi, eax }
	__asm { push 5 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00bc6fc0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov word ptr [esi + 6], 0xff }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0x14], 0xee1e60 }
	__asm { call fn_00bca320 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00bca390 }
	__asm { add esp, 0x34 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00495660();
extern "C" void fn_00a206b0();
extern "C" void fn_00bd1840();
extern "C" void fn_00bd3030();
extern "C" void fn_00bd52d0();
// FUNCTION: ROBLOXSTUDIO 0x00bd14f0
extern "C" __declspec(naked) void asm_00bd14f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5da48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { call fn_00bd1840 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [eax], 0xee2920 }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { call fn_00bd3030 }
	__asm { mov ecx, eax }
	__asm { call fn_00495660 }
	__asm { mov ecx, eax }
	__asm { call fn_00a206b0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { call fn_00bd52d0 }
	__asm { mov ecx, eax }
	__asm { call fn_00495660 }
	__asm { mov ecx, eax }
	__asm { call fn_00a206b0 }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00496100();
extern "C" void fn_00b60890();
// FUNCTION: ROBLOXSTUDIO 0x00bd16e0
extern "C" __declspec(naked) void asm_00bd16e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5da48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xee28f0 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi], 0xee2908 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [eax + 0x100] }
	__asm { call fn_00496100 }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { add esp, 4 }
	__asm { add ecx, 0x18 }
	__asm { push 0 }
	__asm { call fn_00b60890 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00b49950();
extern "C" void fn_00bd1310();
// FUNCTION: ROBLOXSTUDIO 0x00bd1780
extern "C" __declspec(naked) void asm_00bd1780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b49950 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edi + 0x108], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { lea esi, [edi + 0x110] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edi], 0xee252c }
	__asm { mov dword ptr [edi + 0x10c], eax }
	__asm { call fn_00bd1310 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi], 0xee2970 }
	__asm { mov dword ptr [esi], 0xe370e4 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { fstp dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edi + 0x124], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edi + 0x128], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edi + 0x12c], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00495660();
extern "C" void fn_00a206b0();
extern "C" void fn_00bd3f60();
extern "C" void fn_00bd4ad0();
extern "C" void fn_00bd52d0();
// FUNCTION: ROBLOXSTUDIO 0x00bd3c80
extern "C" __declspec(naked) void asm_00bd3c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5dc38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { movzx eax, byte ptr [ebp + 0x18] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { call fn_00bd3f60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [edx], 0xee2de8 }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x1c] }
	__asm { call fn_00bd4ad0 }
	__asm { mov ecx, eax }
	__asm { call fn_00a206b0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx + 0x20], eax }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { call fn_00bd52d0 }
	__asm { mov ecx, eax }
	__asm { call fn_00495660 }
	__asm { mov ecx, eax }
	__asm { call fn_00a206b0 }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [edx + 0x24], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_006dea00();
extern "C" void fn_00bd8b80();
// FUNCTION: ROBLOXSTUDIO 0x00bd8ae0
extern "C" __declspec(naked) void asm_00bd8ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5de48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00bd8b80 }
	__asm { mov dword ptr [esi], 0xee3e4c }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { call fn_006dea00 }
	__asm { fld dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [esi + 0x74] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0x78] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { fstp dword ptr [esi + 0x7c] }
	__asm { fld dword ptr [esi + 0x74] }
	__asm { fstp dword ptr [esi + 0x68] }
	__asm { fld dword ptr [esi + 0x78] }
	__asm { fstp dword ptr [esi + 0x6c] }
	__asm { fld dword ptr [esi + 0x7c] }
	__asm { fstp dword ptr [esi + 0x70] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006dea00();
extern "C" void fn_00bd8b80();
// FUNCTION: ROBLOXSTUDIO 0x00bd8cb0
extern "C" __declspec(naked) void asm_00bd8cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5de48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00bd8b80 }
	__asm { mov dword ptr [esi], 0xee3e4c }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { call fn_006dea00 }
	__asm { fld dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [esi + 0x74] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0x78] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { fstp dword ptr [esi + 0x7c] }
	__asm { fld dword ptr [esi + 0x74] }
	__asm { fstp dword ptr [esi + 0x68] }
	__asm { fld dword ptr [esi + 0x78] }
	__asm { fstp dword ptr [esi + 0x6c] }
	__asm { fld dword ptr [esi + 0x7c] }
	__asm { fstp dword ptr [esi + 0x70] }
	__asm { mov dword ptr [esi], 0xee3f54 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006dea00();
extern "C" void fn_00bd8b80();
// FUNCTION: ROBLOXSTUDIO 0x00bd8d60
extern "C" __declspec(naked) void asm_00bd8d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5de48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00bd8b80 }
	__asm { mov dword ptr [esi], 0xee3e4c }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { call fn_006dea00 }
	__asm { fld dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [esi + 0x74] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0x78] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { fstp dword ptr [esi + 0x7c] }
	__asm { fld dword ptr [esi + 0x74] }
	__asm { fstp dword ptr [esi + 0x68] }
	__asm { fld dword ptr [esi + 0x78] }
	__asm { fstp dword ptr [esi + 0x6c] }
	__asm { fld dword ptr [esi + 0x7c] }
	__asm { fstp dword ptr [esi + 0x70] }
	__asm { mov dword ptr [esi], 0xee3ea4 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006dea00();
extern "C" void fn_00bd8b80();
// FUNCTION: ROBLOXSTUDIO 0x00bd8e10
extern "C" __declspec(naked) void asm_00bd8e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5de48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00bd8b80 }
	__asm { mov dword ptr [esi], 0xee3e4c }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { call fn_006dea00 }
	__asm { fld dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [esi + 0x74] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0x78] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { fstp dword ptr [esi + 0x7c] }
	__asm { fld dword ptr [esi + 0x74] }
	__asm { fstp dword ptr [esi + 0x68] }
	__asm { fld dword ptr [esi + 0x78] }
	__asm { fstp dword ptr [esi + 0x6c] }
	__asm { fld dword ptr [esi + 0x7c] }
	__asm { fstp dword ptr [esi + 0x70] }
	__asm { mov dword ptr [esi], 0xee3efc }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0103808c[];
extern "C" char g_012f8550[];
extern "C" void fn_00a0a110();
extern "C" void fn_00a4f140();
extern "C" void fn_00cf6840();
extern "C" void fn_00cf68ec();
// FUNCTION: ROBLOXSTUDIO 0x00bdc240
extern "C" __declspec(naked) void asm_00bdc240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { fld dword ptr [esi] }
	__asm { fmul dword ptr [g_0103808c] }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { call fn_00cf6840 }
	__asm { fld dword ptr [esi + 4] }
	__asm { fmul dword ptr [g_0103808c] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { call fn_00cf6840 }
	__asm { fld dword ptr [esi + 8] }
	__asm { fmul dword ptr [g_0103808c] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { add esp, 8 }
	__asm { call fn_00cf6840 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov eax, dword ptr [eax + 0xe0] }
	__asm { mov ecx, dword ptr [eax + 0xb4] }
	__asm { call fn_00a4f140 }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 0xf] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00a0a110 }
	__asm { mov cl, byte ptr [ebp + 0xf] }
	__asm { xor eax, eax }
	__asm { cmp cl, byte ptr [g_012f8550] }
	__asm { pop esi }
	__asm { setne al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00be0430();
extern "C" void fn_00be45b0();
extern "C" void fn_00be5590();
// FUNCTION: ROBLOXSTUDIO 0x00bde530
extern "C" __declspec(naked) void asm_00bde530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e170 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x74 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x80], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x7c], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x78] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00be45b0 }
	__asm { mov eax, dword ptr [ebp - 0x80] }
	__asm { sub esp, 0x70 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x7c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea eax, [ebp - 0x78] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00be45b0 }
	__asm { mov ecx, esi }
	__asm { call fn_00be0430 }
	__asm { lea ecx, [ebp - 0x78] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00be5590 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5590 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x74 }
}

extern "C" void fn_00403540();
extern "C" void fn_00bddd60();
// FUNCTION: ROBLOXSTUDIO 0x00be4d80
extern "C" __declspec(naked) void asm_00be4d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00bddd60 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xee50dc }
	__asm { mov dword ptr [esi + 4], 0xee515c }
	__asm { mov dword ptr [esi + 0x18], 0xee5164 }
	__asm { mov dword ptr [esi + 0x1c], 0xee5170 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_0092a010();
// FUNCTION: ROBLOXSTUDIO 0x00bf8b10
extern "C" __declspec(naked) void asm_00bf8b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd601f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0092a010 }
	__asm { push -1 }
	__asm { lea ecx, [esi + 0xbc] }
	__asm { mov dword ptr [esi], 0xee7fa4 }
	__asm { mov dword ptr [esi + 4], 0xee8040 }
	__asm { mov dword ptr [esi + 0x18], 0xee8048 }
	__asm { mov dword ptr [esi + 0x1c], 0xee8054 }
	__asm { mov dword ptr [esi + 0x64], 0xee8064 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
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

extern "C" void fn_00c03390();
extern "C" void fn_00c036a0();
// FUNCTION: ROBLOXSTUDIO 0x00c02f60
extern "C" __declspec(naked) void asm_00c02f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60bab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00c03390 }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [esi], 0xf }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push 0xf }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c036a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0xf }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c18030();
extern "C" void fn_00c18130();
// FUNCTION: ROBLOXSTUDIO 0x00c179f0
extern "C" __declspec(naked) void asm_00c179f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { push dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { shl eax, 9 }
	__asm { or eax, dword ptr [ebp + 0x18] }
	__asm { shl eax, 8 }
	__asm { or eax, dword ptr [ebp + 0x10] }
	__asm { shl eax, 6 }
	__asm { or eax, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00c18030 }
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
	__asm { add esp, 0x24 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005aa650();
extern "C" void fn_006dce00();
extern "C" void fn_00898ee0();
// FUNCTION: ROBLOXSTUDIO 0x00c1b960
extern "C" __declspec(naked) void asm_00c1b960()
{
	__asm { push ebx }
	__asm { mov ebx, esp }
	__asm { sub esp, 8 }
	__asm { and esp, 0xfffffff0 }
	__asm { add esp, 4 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esp + 4], ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x90] }
	__asm { mov ecx, esi }
	__asm { call fn_00898ee0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xa4] }
	__asm { call fn_006dce00 }
	__asm { mov ecx, dword ptr [edi + 0x110] }
	__asm { push eax }
	__asm { call fn_005aa650 }
	__asm { mov esi, dword ptr [edi + 0x94] }
	__asm { mov ecx, esi }
	__asm { call fn_00898ee0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xa4] }
	__asm { call fn_006dce00 }
	__asm { mov ecx, dword ptr [edi + 0x114] }
	__asm { push eax }
	__asm { call fn_005aa650 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_006dea00();
extern "C" void fn_00b49950();
// FUNCTION: ROBLOXSTUDIO 0x00c1ba20
extern "C" __declspec(naked) void asm_00c1ba20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b49950 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi], 0xeed850 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x108], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x10c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x110], eax }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x114], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x118], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x11c], eax }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x120], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x124], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x128], eax }
	__asm { mov dword ptr [esi + 0x12c], 0 }
	__asm { mov dword ptr [esi + 0x130], 0 }
	__asm { mov dword ptr [esi + 0x134], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
extern "C" void fn_00c206e0();
// FUNCTION: ROBLOXSTUDIO 0x00c203a0
extern "C" __declspec(naked) void asm_00c203a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 0x38] }
	__asm { lea eax, [esi + 0x20] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c206e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00c233e0();
extern "C" void fn_00c2b300();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c20860
extern "C" __declspec(naked) void asm_00c20860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61a50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c2b300 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { lea ecx, [esi + 8] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 0xf] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c233e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00c21340();
extern "C" void fn_00c2b300();
extern "C" void fn_00c2ce90();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c25fb0
extern "C" __declspec(naked) void asm_00c25fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd62078 }
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
	__asm { call fn_00c2b300 }
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
	__asm { call fn_00c21340 }
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
	__asm { call fn_00c2ce90 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_01310dc8[];
extern "C" void fn_006bc960();
// FUNCTION: ROBLOXSTUDIO 0x00c36fa0
extern "C" __declspec(naked) void asm_00c36fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax], 0xeefa90 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add ecx, 0xc }
	__asm { call fn_006bc960 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add eax, 0x10 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov byte ptr [edx + 0x14], 0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov byte ptr [eax + 0x15], 1 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov byte ptr [edx + 0x1c], 0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov byte ptr [eax + 0x1d], 1 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [g_01310dc8], ecx }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_007d0510();
extern "C" void fn_007d5550();
extern "C" void fn_007d5be0();
// FUNCTION: ROBLOXSTUDIO 0x00c3d9a0
extern "C" __declspec(naked) void asm_00c3d9a0()
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
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5be0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_007d0510 }
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

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_00788700();
extern "C" void fn_007d5710();
extern "C" void fn_007dc620();
extern "C" void fn_007e8f10();
// FUNCTION: ROBLOXSTUDIO 0x00c3da40
extern "C" __declspec(naked) void asm_00c3da40()
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
	__asm { call fn_007e8f10 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_007dc620 }
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

extern "C" void fn_00410d50();
extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5390();
extern "C" void fn_007d5d30();
// FUNCTION: ROBLOXSTUDIO 0x00c3dae0
extern "C" __declspec(naked) void asm_00c3dae0()
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
	__asm { call fn_007d5d30 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00410d50 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
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
	__asm { ret 8 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00c44ca0
extern "C" __declspec(naked) void asm_00c44ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
// FUNCTION: ROBLOXSTUDIO 0x00c4fc60
extern "C" __declspec(naked) void asm_00c4fc60()
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
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c5ee30
extern "C" __declspec(naked) void asm_00c5ee30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { mov ecx, 3 }
	__asm { sub ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x24] }
	__asm { sar eax, cl }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sar eax, cl }
	__asm { sar edi, cl }
	__asm { sar ebx, cl }
	__asm { sar esi, cl }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sar edx, cl }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov dword ptr [eax + 0x14], 0 }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 0x14], ebx }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00c60a60
extern "C" __declspec(naked) void asm_00c60a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd661a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { lea esi, [ebx + 4] }
	__asm { push -1 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [edi + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x20] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6d640();
// FUNCTION: ROBLOXSTUDIO 0x00c6de60
extern "C" __declspec(naked) void asm_00c6de60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { lea esi, [edi + 4] }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00c6d640 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00c6d640 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00c6d640 }
	__asm { lea esi, [edi + 0x10] }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00c6d640 }
	__asm { lea ecx, [esi + 4] }
	__asm { push ecx }
	__asm { push ebx }
	__asm { call fn_00c6d640 }
	__asm { lea ecx, [esi + 8] }
	__asm { push ecx }
	__asm { push ebx }
	__asm { call fn_00c6d640 }
	__asm { add esp, 0x30 }
	__asm { mov eax, ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007af680();
extern "C" void fn_00c6f8c0();
extern "C" void fn_00c707d0();
// FUNCTION: ROBLOXSTUDIO 0x00c6f810
extern "C" __declspec(naked) void asm_00c6f810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd670a1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007af680 }
	__asm { lea ecx, [edi + 0x64] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xef5d6c }
	__asm { mov dword ptr [edi + 4], 0xef5dec }
	__asm { mov dword ptr [edi + 0x18], 0xef5df4 }
	__asm { mov dword ptr [edi + 0x1c], 0xef5e00 }
	__asm { call fn_00c6f8c0 }
	__asm { mov dword ptr [edi + 0xe80], 0 }
	__asm { mov dword ptr [edi + 0xe84], 0 }
	__asm { lea ecx, [edi + 0xe88] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edi + 0xe88], 0 }
	__asm { mov dword ptr [edi + 0xe8c], 0 }
	__asm { call fn_00c707d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0xe88], eax }
	__asm { mov dword ptr [edi + 0xe90], 0x20 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00c6f970
extern "C" __declspec(naked) void asm_00c6f970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67c09 }
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
	__asm { mov dword ptr [edi], 0xef5c28 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0xc] }
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

extern "C" void fn_00c703b0();
// FUNCTION: ROBLOXSTUDIO 0x00c700c0
extern "C" __declspec(naked) void asm_00c700c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { fld dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push edi }
	__asm { call fn_00c703b0 }
	__asm { fld dword ptr [esi + 8] }
	__asm { add esp, 4 }
	__asm { fstp dword ptr [esp] }
	__asm { push edi }
	__asm { call fn_00c703b0 }
	__asm { fld dword ptr [esi + 0xc] }
	__asm { add esp, 4 }
	__asm { fstp dword ptr [esp] }
	__asm { push edi }
	__asm { call fn_00c703b0 }
	__asm { fld dword ptr [esi + 0x10] }
	__asm { add esp, 4 }
	__asm { fstp dword ptr [esp] }
	__asm { push edi }
	__asm { call fn_00c703b0 }
	__asm { fld dword ptr [esi + 0x14] }
	__asm { add esp, 4 }
	__asm { fstp dword ptr [esp] }
	__asm { push edi }
	__asm { call fn_00c703b0 }
	__asm { fld dword ptr [esi + 0x18] }
	__asm { add esp, 4 }
	__asm { fstp dword ptr [esp] }
	__asm { push edi }
	__asm { call fn_00c703b0 }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006dea00();
extern "C" void fn_007cff40();
extern "C" void fn_007d60a0();
extern "C" void fn_00c6de60();
// FUNCTION: ROBLOXSTUDIO 0x00c76510
extern "C" __declspec(naked) void asm_00c76510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd675f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov dword ptr [ebp - 0x28], 0xe461dc }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x24], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6de60 }
	__asm { add esp, 8 }
	__asm { call fn_007d60a0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_007cff40 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410d50();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_007d5550();
extern "C" void fn_007d5d30();
// FUNCTION: ROBLOXSTUDIO 0x00c77fc0
extern "C" __declspec(naked) void asm_00c77fc0()
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
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5d30 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
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
	__asm { ret 8 }
}

extern "C" void fn_00c752d0();
extern "C" void fn_00c755b0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c78060
extern "C" __declspec(naked) void asm_00c78060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67680 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c755b0 }
	__asm { add esp, 0x18 }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov edi, edx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c752d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov edx, edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00c752d0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xc780dd }
	__asm { ret }
}

extern "C" void fn_00c679a0();
extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x00c7a470
extern "C" __declspec(naked) void asm_00c7a470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67780 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00c679a0 }
	__asm { mov dword ptr [esi], eax }
	__asm { push 0x4028a0 }
	__asm { push 0x463e00 }
	__asm { push 0x80 }
	__asm { push 0x1c }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf676b }
	__asm { mov dword ptr [esi + 0xe08], 1 }
	__asm { push 0x4028a0 }
	__asm { push 0x463e00 }
	__asm { push 0x80 }
	__asm { push 0x1c }
	__asm { lea eax, [esi + 0xe0c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf676b }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a58ac[];
extern "C" char g_012a58b0[];
extern "C" char g_012a58b4[];
// FUNCTION: ROBLOXSTUDIO 0x00c7b250
extern "C" __declspec(naked) void asm_00c7b250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { xor eax, eax }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov eax, 0x1000 }
	__asm { mov word ptr [edi + 8], ax }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [g_012a58ac] }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov edx, dword ptr [edi + 0x14] }
	__asm { shl esi, cl }
	__asm { mov ecx, dword ptr [g_012a58b0] }
	__asm { shl eax, cl }
	__asm { mov ecx, dword ptr [g_012a58b4] }
	__asm { shl edx, cl }
	__asm { mov word ptr [ebp - 6], si }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov eax, dword ptr [ebp - 6] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov word ptr [edi + 4], dx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005e8b40();
extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x00c7c0f0
extern "C" __declspec(naked) void asm_00c7c0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67bf0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_005e8b40 }
	__asm { mov dword ptr [esi], eax }
	__asm { push 0x4028a0 }
	__asm { push 0x4030e0 }
	__asm { push 0x80 }
	__asm { push 0x18 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf676b }
	__asm { mov dword ptr [esi + 0xc08], 1 }
	__asm { push 0x4028a0 }
	__asm { push 0x4030e0 }
	__asm { push 0x80 }
	__asm { push 0x18 }
	__asm { lea eax, [esi + 0xc0c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf676b }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00c7c190
extern "C" __declspec(naked) void asm_00c7c190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67c09 }
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
	__asm { mov dword ptr [edi], 0xef66c4 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0xc] }
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

extern "C" void fn_00c86100();
extern "C" void fn_00c90a10();
// FUNCTION: ROBLOXSTUDIO 0x00c8dee0
extern "C" __declspec(naked) void asm_00c8dee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd695c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00c90a10 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 0x28] }
	__asm { mov ecx, edi }
	__asm { call fn_00c86100 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00c86100();
extern "C" void fn_00c90a10();
// FUNCTION: ROBLOXSTUDIO 0x00c8dfb0
extern "C" __declspec(naked) void asm_00c8dfb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd695c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_00c90a10 }
	__asm { mov eax, dword ptr [ebx + 0x40] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov eax, dword ptr [eax] }
	__asm { sub esp, 0x18 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov edx, esp }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { call dword ptr [edi + 0x2c] }
	__asm { mov ecx, ebx }
	__asm { call fn_00c86100 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_012a58ac[];
extern "C" char g_012a58b0[];
extern "C" char g_012a58b4[];
// FUNCTION: ROBLOXSTUDIO 0x00c90990
extern "C" __declspec(naked) void asm_00c90990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [edx] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [edi + 6], 0x10000000 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [g_012a58ac] }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov edx, dword ptr [edi + 0x14] }
	__asm { shl esi, cl }
	__asm { mov ecx, dword ptr [g_012a58b0] }
	__asm { shl eax, cl }
	__asm { mov ecx, dword ptr [g_012a58b4] }
	__asm { shl edx, cl }
	__asm { mov word ptr [ebp - 6], si }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov eax, dword ptr [ebp - 6] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov word ptr [edi + 4], dx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c91710();
extern "C" void fn_00c91880();
extern "C" void fn_00c919f0();
extern "C" void fn_00c91b60();
// FUNCTION: ROBLOXSTUDIO 0x00c91cd0
extern "C" __declspec(naked) void asm_00c91cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebx + 0x1fb4] }
	__asm { call fn_00c91710 }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebx + 0x1fd4] }
	__asm { call fn_00c919f0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebx + 0x1ff4] }
	__asm { call fn_00c91880 }
	__asm { push edi }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { lea ecx, [ebx + 0x2014] }
	__asm { call fn_00c91b60 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x13c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c86100();
extern "C" void fn_00c90a10();
// FUNCTION: ROBLOXSTUDIO 0x00c93800
extern "C" __declspec(naked) void asm_00c93800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd695c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_00c90a10 }
	__asm { mov eax, dword ptr [ebx + 0x40] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x20] }
	__asm { call eax }
	__asm { mov ecx, ebx }
	__asm { mov esi, eax }
	__asm { mov edi, edx }
	__asm { call fn_00c86100 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov edx, edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c86100();
extern "C" void fn_00c90a10();
// FUNCTION: ROBLOXSTUDIO 0x00c93870
extern "C" __declspec(naked) void asm_00c93870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd695c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_00c90a10 }
	__asm { mov eax, dword ptr [ebx + 0x40] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x24] }
	__asm { call eax }
	__asm { mov ecx, ebx }
	__asm { mov esi, eax }
	__asm { mov edi, edx }
	__asm { call fn_00c86100 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov edx, edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_01314228[];
extern "C" char g_0131422c[];
extern "C" char g_01314230[];
extern "C" char g_01314234[];
extern "C" char g_01314238[];
extern "C" void fn_00c6b400();
extern "C" void fn_00ce5cd0();
// FUNCTION: ROBLOXSTUDIO 0x00c9f720
extern "C" __declspec(naked) void asm_00c9f720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ebx + 0xab8] }
	__asm { push edi }
	__asm { call fn_00c6b400 }
	__asm { mov ecx, dword ptr [g_01314228] }
	__asm { sub esp, 0x14 }
	__asm { mov edx, esp }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [g_01314234] }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [g_0131422c] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [g_01314230] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [g_01314238] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { call dword ptr [edi + 0xc8] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { xor edx, esi }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { push edx }
	__asm { lea ecx, [ebx + 0x78] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_00ce5cd0 }
	__asm { mov ecx, dword ptr [ebx + 0xab8] }
	__asm { call fn_00c6b400 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0xac] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0092d390();
extern "C" void fn_0092d4d0();
// FUNCTION: ROBLOXSTUDIO 0x00ca5ba0
extern "C" __declspec(naked) void asm_00ca5ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebx + ebx*2] }
	__asm { lea eax, [ecx + eax*8] }
	__asm { mov ecx, dword ptr [edi + 0xbc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0092d390 }
	__asm { lea ecx, [ebx + 0xb] }
	__asm { lea ecx, [ecx + ecx*2] }
	__asm { shl ecx, 4 }
	__asm { add ecx, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { push 0x100a894 }
	__asm { mov ecx, eax }
	__asm { call fn_0092d4d0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebx + 0xb] }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea eax, [ecx + eax*8] }
	__asm { mov ecx, dword ptr [edi + 0xcc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0092d390 }
	__asm { add ebx, 0x16 }
	__asm { lea ecx, [ebx + ebx*2] }
	__asm { shl ecx, 4 }
	__asm { add ecx, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { push 0x100a894 }
	__asm { mov ecx, eax }
	__asm { call fn_0092d4d0 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007a10c0();
extern "C" void fn_00cad5c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00cad1b0
extern "C" __declspec(naked) void asm_00cad1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6aed0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_007a10c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [esi + 0x10] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cad5c0 }
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

extern "C" void fn_004115f0();
extern "C" void fn_0043f5a0();
extern "C" void fn_006b97d0();
extern "C" void fn_007b5910();
extern "C" void fn_00891b30();
extern "C" void fn_00cbaa00();
// FUNCTION: ROBLOXSTUDIO 0x00cbab70
extern "C" __declspec(naked) void asm_00cbab70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6bdcb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00cbaa00 }
	__asm { mov ecx, 0x13147f4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xeff134 }
	__asm { mov dword ptr [esi + 4], 0xeff1ac }
	__asm { mov dword ptr [esi + 0x18], 0xeff1b4 }
	__asm { mov dword ptr [esi + 0x1c], 0xeff1c0 }
	__asm { mov byte ptr [esi + 0x64], 0 }
	__asm { call fn_006b97d0 }
	__asm { mov dword ptr [esi + 0x68], eax }
	__asm { lea eax, [esi + 0x6c] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043f5a0 }
	__asm { lea eax, [esi + 0x48] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ebp - 0xd], 1 }
	__asm { call fn_00891b30 }
	__asm { lea ecx, [eax + 0x18] }
	__asm { call fn_007b5910 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cbf940();
extern "C" void fn_00cc4a90();
// FUNCTION: ROBLOXSTUDIO 0x00cc08f0
extern "C" __declspec(naked) void asm_00cc08f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push 0x5a }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { add edi, 7 }
	__asm { push 0xeff1f8 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { shr edi, 3 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x1030] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { call fn_00cbf940 }
	__asm { add dword ptr [esi + 0x1020], edi }
	__asm { push 0x8b5 }
	__asm { push 0xeff248 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { adc dword ptr [esi + 0x1024], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { add dword ptr [esi + 0x1028], edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { adc dword ptr [esi + 0x102c], 0 }
	__asm { push edi }
	__asm { push dword ptr [ebx + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cc4a90 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cc0ff0
extern "C" __declspec(naked) void asm_00cc0ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { shl esi, 4 }
	__asm { add esi, edx }
	__asm { shl ecx, 4 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ecx + edx] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + edx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx + edx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ecx + edx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1315c[];
// FUNCTION: ROBLOXSTUDIO 0x00cc4c60
extern "C" __declspec(naked) void asm_00cc4c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e1315c] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 4 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push 0x1002 }
	__asm { push 0xffff }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0x40000 }
	__asm { call esi }
	__asm { push 4 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push 0x80 }
	__asm { push 0xffff }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call esi }
	__asm { push 4 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push 0x1001 }
	__asm { push 0xffff }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0x4000 }
	__asm { call esi }
	__asm { push 4 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push 0x20 }
	__asm { push 0xffff }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005e8b40();
extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x00cc5c70
extern "C" __declspec(naked) void asm_00cc5c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67bf0 }
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
	__asm { call fn_005e8b40 }
	__asm { mov dword ptr [edi], eax }
	__asm { push 0x4028a0 }
	__asm { push 0x4030e0 }
	__asm { push 0x80 }
	__asm { push 0x18 }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf676b }
	__asm { mov dword ptr [edi + 0xc08], 1 }
	__asm { push 0x4028a0 }
	__asm { push 0x4030e0 }
	__asm { push 0x80 }
	__asm { push 0x18 }
	__asm { lea esi, [edi + 0xc0c] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf676b }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc00], 0 }
	__asm { mov byte ptr [esi + 0xc04], al }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012b09a0[];
extern "C" void fn_00cd07b0();
// FUNCTION: ROBLOXSTUDIO 0x00cd0380
extern "C" __declspec(naked) void asm_00cd0380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b9ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebx + 8], 0 }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebx + 0xc], al }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov dword ptr [ebx + 0x14], 0 }
	__asm { mov esi, dword ptr [g_012b09a0] }
	__asm { push esi }
	__asm { lea ecx, [ebx + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebx + 0x28], 0 }
	__asm { call fn_00cd07b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { mov dword ptr [ebx + 0x24], eax }
	__asm { mov dword ptr [ebx + 0x20], eax }
	__asm { shl esi, 5 }
	__asm { add esi, eax }
	__asm { mov dword ptr [ebx + 0x1c], esi }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 0x30], 0 }
	__asm { mov dword ptr [ebx + 0x34], 0 }
	__asm { mov dword ptr [ebx + 0x38], 0 }
	__asm { mov dword ptr [ebx + 0x3c], 0 }
	__asm { mov dword ptr [ebx + 0x40], 0 }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b5bb60();
extern "C" void fn_00c6cf00();
extern "C" void fn_00cd8ed0();
// FUNCTION: ROBLOXSTUDIO 0x00cd8bc0
extern "C" __declspec(naked) void asm_00cd8bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00cd8ed0 }
	__asm { mov ecx, edi }
	__asm { call fn_00b5bb60 }
	__asm { mov al, byte ptr [eax + 0x90] }
	__asm { and al, 0xf }
	__asm { push 1 }
	__asm { mov byte ptr [ebp + 0x17], al }
	__asm { push 4 }
	__asm { lea eax, [ebp + 0x17] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c6cf00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00941e40();
extern "C" void fn_00b89440();
extern "C" void fn_00cdcd20();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00cdd1a0
extern "C" __declspec(naked) void asm_00cdd1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6d698 }
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
	__asm { call fn_00b89440 }
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
	__asm { call fn_00cdcd20 }
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
	__asm { call fn_00941e40 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cc4dc0();
extern "C" void fn_00cc4df0();
extern "C" void fn_00ceb300();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
// FUNCTION: ROBLOXSTUDIO 0x00ce7270
extern "C" __declspec(naked) void asm_00ce7270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e168 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x40c] }
	__asm { call fn_00cf40a0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00cc4dc0 }
	__asm { add esp, 8 }
	__asm { push 0x2b8 }
	__asm { push 0xf045f0 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x48c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ceb300 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00cc4df0 }
	__asm { lea ecx, [esi + 0x40c] }
	__asm { call fn_00cf40b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x00cfdda0
extern "C" __declspec(naked) void asm_00cfdda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor edx, edx }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov ecx, dword ptr [esi + 0x4c] }
	__asm { add eax, eax }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { mov word ptr [eax + ecx*2 - 2], dx }
	__asm { mov eax, dword ptr [esi + 0x4c] }
	__asm { lea eax, [eax*2 - 2] }
	__asm { push eax }
	__asm { push edx }
	__asm { push dword ptr [esi + 0x44] }
	__asm { call fn_00cf6804 }
	__asm { mov eax, dword ptr [esi + 0x84] }
	__asm { add esp, 0xc }
	__asm { lea ecx, [eax + eax*2] }
	__asm { movzx eax, word ptr [ecx*4 + 0xf0f67a] }
	__asm { mov dword ptr [esi + 0x80], eax }
	__asm { movzx eax, word ptr [ecx*4 + 0xf0f678] }
	__asm { mov dword ptr [esi + 0x8c], eax }
	__asm { movzx eax, word ptr [ecx*4 + 0xf0f67c] }
	__asm { mov dword ptr [esi + 0x90], eax }
	__asm { movzx eax, word ptr [ecx*4 + 0xf0f67e] }
	__asm { mov dword ptr [esi + 0x7c], eax }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [esi + 0x16b4], 0 }
	__asm { mov dword ptr [esi + 0x78], 2 }
	__asm { mov dword ptr [esi + 0x60], 2 }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1520[];
extern "C" void fn_0079dc20();
extern "C" void fn_0079dda0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2190
extern "C" __declspec(naked) void asm_00da2190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1520 }
	__asm { push 0 }
	__asm { push 0xe530b0 }
	__asm { push 0x154 }
	__asm { call fn_0079dda0 }
	__asm { push 0xde24d0 }
	__asm { mov dword ptr [g_012e1520], 0xe53094 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e15a4 }
	__asm { push 0 }
	__asm { push 0xe52e68 }
	__asm { push 0xe5310c }
	__asm { push 0x160 }
	__asm { call fn_0079dc20 }
	__asm { push 0xde2530 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1b80[];
extern "C" char g_012e1b9c[];
extern "C" char g_012e1ba8[];
extern "C" char g_012e1bac[];
extern "C" void fn_00794940();
extern "C" void fn_007aef60();
extern "C" void fn_00825140();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3110
extern "C" __declspec(naked) void asm_00da3110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f89a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push 0x15 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x12e1b50 }
	__asm { push eax }
	__asm { call fn_00794940 }
	__asm { add esp, 0xc }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x12e1b80 }
	__asm { push dword ptr [eax] }
	__asm { push 0 }
	__asm { push 0xe5522c }
	__asm { call fn_007aef60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e1b80], 0xe55208 }
	__asm { mov dword ptr [g_012e1ba8], 0x53f649 }
	__asm { mov dword ptr [g_012e1bac], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde3260 }
	__asm { mov dword ptr [g_012e1b9c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa028[];
extern "C" char g_012fa058[];
extern "C" char g_012fa05c[];
extern "C" void fn_00868840();
extern "C" void fn_00868c80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf0a0
extern "C" __declspec(naked) void asm_00daf0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f9db0 }
	__asm { push 0 }
	__asm { push 0xe50278 }
	__asm { push 0xe62618 }
	__asm { push 0xe626e0 }
	__asm { push 0xec }
	__asm { call fn_00868840 }
	__asm { push 0xdead70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12fa028 }
	__asm { push 0 }
	__asm { push 0xe62ffc }
	__asm { push 0x294 }
	__asm { call fn_00868c80 }
	__asm { push 0xdeadd0 }
	__asm { mov dword ptr [g_012fa028], 0xe62fe0 }
	__asm { mov dword ptr [g_012fa058], 0 }
	__asm { mov dword ptr [g_012fa05c], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008682b0();
extern "C" void fn_00868b30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf5f0
extern "C" __declspec(naked) void asm_00daf5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f9d84 }
	__asm { push 0 }
	__asm { push 0xe62694 }
	__asm { push 0xe626a4 }
	__asm { push 0xe626b4 }
	__asm { push 0xe8 }
	__asm { call fn_00868b30 }
	__asm { push 0xdeb320 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f9d2c }
	__asm { push 0 }
	__asm { push 0xe62618 }
	__asm { push 0xe62628 }
	__asm { push 0xe0 }
	__asm { call fn_008682b0 }
	__asm { push 0xdeb380 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fbac0[];
extern "C" char g_012fbadc[];
extern "C" char g_012fbae8[];
extern "C" char g_012fbaec[];
extern "C" char g_012fbb28[];
extern "C" void fn_007d5630();
extern "C" void fn_00899c00();
extern "C" void fn_00899cb0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db2ce0
extern "C" __declspec(naked) void asm_00db2ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fbb28 }
	__asm { push 0 }
	__asm { push 0xe690bc }
	__asm { push 0x88 }
	__asm { call fn_00899c00 }
	__asm { push 0xded190 }
	__asm { mov dword ptr [g_012fbb28], 0xe690a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c87a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fbac0 }
	__asm { push 1 }
	__asm { push 0x1032ed4 }
	__asm { call fn_00899cb0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fbac0], 0xe69078 }
	__asm { mov dword ptr [g_012fbae8], 0x888350 }
	__asm { mov dword ptr [g_012fbaec], 0 }
	__asm { call fn_007d5630 }
	__asm { push 0xded1f0 }
	__asm { mov dword ptr [g_012fbadc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008a5910();
extern "C" void fn_008a6b40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db39b0
extern "C" __declspec(naked) void asm_00db39b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fc2f8 }
	__asm { push 0 }
	__asm { push 0xe566d0 }
	__asm { push 0xe67470 }
	__asm { push 0xe6b074 }
	__asm { push 0xa8 }
	__asm { call fn_008a6b40 }
	__asm { push 0xdee0c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x8a91a0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x91caf0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe6afb8 }
	__asm { mov ecx, 0x12fc214 }
	__asm { call fn_008a5910 }
	__asm { push 0xdee120 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcf68[];
extern "C" char g_012fcf84[];
extern "C" char g_012fcf90[];
extern "C" char g_012fcf94[];
extern "C" void fn_00825140();
extern "C" void fn_008c2ba0();
extern "C" void fn_008c2e50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db5da0
extern "C" __declspec(naked) void asm_00db5da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fce4c }
	__asm { push 0 }
	__asm { push 0xe6f404 }
	__asm { push 0x1004e30 }
	__asm { push 0xe6f40c }
	__asm { push 0xb0 }
	__asm { call fn_008c2ba0 }
	__asm { push 0xdefc00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ed4a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fcf68 }
	__asm { push 1 }
	__asm { push 0x100bf50 }
	__asm { call fn_008c2e50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fcf68], 0xe6f474 }
	__asm { mov dword ptr [g_012fcf90], 0x4d1cd0 }
	__asm { mov dword ptr [g_012fcf94], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdefc60 }
	__asm { mov dword ptr [g_012fcf84], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038160[];
extern "C" void fn_008fd450();
extern "C" void fn_008fd5d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db70f0
extern "C" __declspec(naked) void asm_00db70f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { fld qword ptr [g_01038160] }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fe160 }
	__asm { push 3 }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xe757bc }
	__asm { push 1 }
	__asm { push 0xe757c0 }
	__asm { push 0xe757cc }
	__asm { push 0 }
	__asm { push 0x403100 }
	__asm { call fn_008fd5d0 }
	__asm { push 0xdf11b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fe288 }
	__asm { push 3 }
	__asm { push 0x1024d64 }
	__asm { push 0xe758b8 }
	__asm { push 0 }
	__asm { push 0x900000 }
	__asm { call fn_008fd450 }
	__asm { push 0xdf1230 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00909480();
extern "C" void fn_009099e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db90e0
extern "C" __declspec(naked) void asm_00db90e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fe8e4 }
	__asm { push 5 }
	__asm { push 0x1024d30 }
	__asm { push 0xe778e0 }
	__asm { push 0xe77940 }
	__asm { push 0x94 }
	__asm { call fn_009099e0 }
	__asm { push 0xdf2190 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fe948 }
	__asm { push 0 }
	__asm { push 0xe778e0 }
	__asm { push 0xe7790c }
	__asm { push 0 }
	__asm { push 0x90ba30 }
	__asm { call fn_00909480 }
	__asm { push 0xdf21f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ff720[];
extern "C" char g_012ff750[];
extern "C" char g_012ff754[];
extern "C" char g_012ff758[];
extern "C" void fn_00927e80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbabc0
extern "C" __declspec(naked) void asm_00dbabc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12ff758 }
	__asm { push 0 }
	__asm { push 0xe7ffe8 }
	__asm { push 0x1b0 }
	__asm { call fn_00927e80 }
	__asm { push 0xdf3460 }
	__asm { mov dword ptr [g_012ff758], 0xe7ffcc }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12ff720 }
	__asm { push 0 }
	__asm { push 0xe7ffb4 }
	__asm { push 0x1a0 }
	__asm { call fn_00927e80 }
	__asm { push 0xdf34c0 }
	__asm { mov dword ptr [g_012ff720], 0xe7ff98 }
	__asm { mov dword ptr [g_012ff750], 0 }
	__asm { mov dword ptr [g_012ff754], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01300750[];
extern "C" char g_0130077c[];
extern "C" void fn_0093fd70();
extern "C" void fn_0093fe20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbc000
extern "C" __declspec(naked) void asm_00dbc000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1300750 }
	__asm { push 1 }
	__asm { push 0xe836f8 }
	__asm { push 0x80 }
	__asm { call fn_0093fe20 }
	__asm { push 0xdf42a0 }
	__asm { mov dword ptr [g_01300750], 0xe836dc }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130077c }
	__asm { push 1 }
	__asm { push 0xe837ac }
	__asm { push 0x74 }
	__asm { call fn_0093fd70 }
	__asm { push 0xdf4300 }
	__asm { mov dword ptr [g_0130077c], 0xe83790 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0096d730();
extern "C" void fn_0096f360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbd720
extern "C" __declspec(naked) void asm_00dbd720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x1301398 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1301400 }
	__asm { push 0 }
	__asm { push 0xe876d4 }
	__asm { push 0xe8770c }
	__asm { push 0 }
	__asm { push 0x9708a0 }
	__asm { call fn_0096f360 }
	__asm { push 0xdf52e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x970760 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x96ff30 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe87638 }
	__asm { mov ecx, 0x13012ac }
	__asm { call fn_0096d730 }
	__asm { push 0xdf5350 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00973d40();
extern "C" void fn_00973e90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbddb0
extern "C" __declspec(naked) void asm_00dbddb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130187c }
	__asm { push 0 }
	__asm { push 0xe87d3c }
	__asm { push 0xe62618 }
	__asm { push 0xe62628 }
	__asm { push 0x32c }
	__asm { call fn_00973d40 }
	__asm { push 0xdf5970 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1301a8c }
	__asm { push 0 }
	__asm { push 0xe87e14 }
	__asm { push 0xe87e24 }
	__asm { push 0x35c }
	__asm { call fn_00973e90 }
	__asm { push 0xdf59d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009a7850();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0780
extern "C" __declspec(naked) void asm_00dc0780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x1303cc8 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1303d30 }
	__asm { push 0 }
	__asm { push 0xe7383c }
	__asm { push 0xe9329c }
	__asm { push 0 }
	__asm { push 0x9af0c0 }
	__asm { call fn_009a7850 }
	__asm { push 0xdf7b40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1303cc8 }
	__asm { push 0 }
	__asm { push 0xe7383c }
	__asm { push 0xe9327c }
	__asm { push 0 }
	__asm { push 0x9af0c0 }
	__asm { call fn_009a7850 }
	__asm { push 0xdf7bb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009a79d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0880
extern "C" __declspec(naked) void asm_00dc0880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x1303dd8 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1303e10 }
	__asm { push 0 }
	__asm { push 0x1004e08 }
	__asm { push 0xe9330c }
	__asm { push 0 }
	__asm { push 0x9b0350 }
	__asm { call fn_009a79d0 }
	__asm { push 0xdf7d60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1303e48 }
	__asm { push 0 }
	__asm { push 0xe92f90 }
	__asm { push 0xe93318 }
	__asm { push 0 }
	__asm { push 0x9b04a0 }
	__asm { call fn_009a79d0 }
	__asm { push 0xdf7dd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b3a00();
extern "C" void fn_009b3fa0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0d30
extern "C" __declspec(naked) void asm_00dc0d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x1303ff8 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1304030 }
	__asm { push 0 }
	__asm { push 0xe93d80 }
	__asm { push 0xe93dd4 }
	__asm { push 0 }
	__asm { push 0x9b5db0 }
	__asm { call fn_009b3a00 }
	__asm { push 0xdf8710 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1304068 }
	__asm { push 0 }
	__asm { push 0xe93d80 }
	__asm { push 0xe93e00 }
	__asm { push 0x8c }
	__asm { call fn_009b3fa0 }
	__asm { push 0xdf8790 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305ed8[];
extern "C" char g_01305f08[];
extern "C" char g_01305f0c[];
extern "C" char g_01306028[];
extern "C" char g_0130605c[];
extern "C" char g_01306060[];
extern "C" void fn_009e4d10();
extern "C" void fn_009e4fb0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc4320
extern "C" __declspec(naked) void asm_00dc4320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1306028 }
	__asm { push 0 }
	__asm { push 0xe97c6c }
	__asm { push 0xe73878 }
	__asm { push 0xe97e8c }
	__asm { push 0 }
	__asm { push 0x9ec970 }
	__asm { call fn_009e4d10 }
	__asm { push 0xdfb530 }
	__asm { mov dword ptr [g_01306028], 0xe97e70 }
	__asm { mov dword ptr [g_0130605c], 0 }
	__asm { mov dword ptr [g_01306060], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1305ed8 }
	__asm { push 0 }
	__asm { push 0xe97c6c }
	__asm { push 0x1016e4c }
	__asm { push 0xe97d7c }
	__asm { push 0xb0 }
	__asm { call fn_009e4fb0 }
	__asm { push 0xdfb590 }
	__asm { mov dword ptr [g_01305ed8], 0xe97d60 }
	__asm { mov dword ptr [g_01305f08], 0 }
	__asm { mov dword ptr [g_01305f0c], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013086d4[];
extern "C" char g_01308704[];
extern "C" char g_01308708[];
extern "C" char g_01308744[];
extern "C" char g_01308774[];
extern "C" char g_01308778[];
extern "C" void fn_00a67980();
extern "C" void fn_00a67c30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8300
extern "C" __declspec(naked) void asm_00dc8300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x13086d4 }
	__asm { push 5 }
	__asm { push 0xeacff4 }
	__asm { push 0xeacf9c }
	__asm { push 0xe5dfd8 }
	__asm { push 0xead000 }
	__asm { push 0x74 }
	__asm { call fn_00a67980 }
	__asm { push 0xdfe4b0 }
	__asm { mov dword ptr [g_013086d4], 0xeacfd8 }
	__asm { mov dword ptr [g_01308704], 0 }
	__asm { mov dword ptr [g_01308708], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1308744 }
	__asm { push 6 }
	__asm { push 0xe3ef24 }
	__asm { push 0xead054 }
	__asm { push 0xead0c4 }
	__asm { push 0x7c }
	__asm { call fn_00a67c30 }
	__asm { push 0xdfe510 }
	__asm { mov dword ptr [g_01308744], 0xead0a8 }
	__asm { mov dword ptr [g_01308774], 0 }
	__asm { mov dword ptr [g_01308778], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00aa4950();
extern "C" void fn_00aa4ec0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcc820
extern "C" __declspec(naked) void asm_00dcc820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x130b2b0 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130b2e0 }
	__asm { push 0 }
	__asm { push 0xe7baac }
	__asm { push 0xeb7798 }
	__asm { push 0 }
	__asm { push 0x280 }
	__asm { call fn_00aa4ec0 }
	__asm { push 0xe01040 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130b370 }
	__asm { push 0 }
	__asm { push 0xeb7874 }
	__asm { push 0xeb7884 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0xaa61d0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00aa4950 }
	__asm { push 0xe010a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c674[];
extern "C" char g_0130c6a4[];
extern "C" char g_0130c6a8[];
extern "C" char g_0130c6ac[];
extern "C" char g_0130c6dc[];
extern "C" char g_0130c6e0[];
extern "C" void fn_00ae8af0();
extern "C" void fn_00ae8cd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dced80
extern "C" __declspec(naked) void asm_00dced80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130c6ac }
	__asm { push 6 }
	__asm { push 0xebeeec }
	__asm { push 0xe7383c }
	__asm { push 0xebeefc }
	__asm { push 0xebef08 }
	__asm { push 0x78 }
	__asm { call fn_00ae8cd0 }
	__asm { push 0xe02e00 }
	__asm { mov dword ptr [g_0130c6ac], 0xebeed0 }
	__asm { mov dword ptr [g_0130c6dc], 1 }
	__asm { mov dword ptr [g_0130c6e0], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130c674 }
	__asm { push 6 }
	__asm { push 0xebee74 }
	__asm { push 0xebee84 }
	__asm { push 0xe7383c }
	__asm { push 0xebee90 }
	__asm { push 0x80 }
	__asm { call fn_00ae8af0 }
	__asm { push 0xe02e60 }
	__asm { mov dword ptr [g_0130c674], 0xebee58 }
	__asm { mov dword ptr [g_0130c6a4], 0 }
	__asm { mov dword ptr [g_0130c6a8], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130d518[];
extern "C" char g_0130d544[];
extern "C" void fn_00b0a630();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd08b0
extern "C" __declspec(naked) void asm_00dd08b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130d544 }
	__asm { push 0 }
	__asm { push 0xec2548 }
	__asm { push 0x80 }
	__asm { call fn_00b0a630 }
	__asm { push 0xe05150 }
	__asm { mov dword ptr [g_0130d544], 0xec251c }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130d518 }
	__asm { push 0 }
	__asm { push 0xec2538 }
	__asm { push 0x7c }
	__asm { call fn_00b0a630 }
	__asm { push 0xe051b0 }
	__asm { mov dword ptr [g_0130d518], 0xec251c }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00825140();
extern "C" void fn_00be24f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd38d0
extern "C" __declspec(naked) void asm_00dd38d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5f028 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { push 0 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push 0xee553c }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push 0xee5548 }
	__asm { push 0xee5554 }
	__asm { push 0xee5560 }
	__asm { push 0xee556c }
	__asm { mov dword ptr [esi], eax }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push 0xbe9a30 }
	__asm { mov ecx, 0x130f930 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be24f0 }
	__asm { push 0xe08640 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310358[];
extern "C" char g_01310374[];
extern "C" char g_01310380[];
extern "C" char g_01310384[];
extern "C" void fn_007d5630();
extern "C" void fn_00c24b70();
extern "C" void fn_00c259a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd40d0
extern "C" __declspec(naked) void asm_00dd40d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x13102e8 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13101b8 }
	__asm { push 0 }
	__asm { push 0xe9688c }
	__asm { push 0xeeec00 }
	__asm { push 0 }
	__asm { push 0xc34140 }
	__asm { call fn_00c24b70 }
	__asm { push 0xe08e00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6287a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0x1310278 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1310358 }
	__asm { push 0 }
	__asm { push 0xeabd70 }
	__asm { call fn_00c259a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01310358], 0xeeeb50 }
	__asm { mov dword ptr [g_01310380], 0x855f60 }
	__asm { mov dword ptr [g_01310384], 0 }
	__asm { call fn_007d5630 }
	__asm { push 0xe08ed0 }
	__asm { mov dword ptr [g_01310374], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c24b70();
extern "C" void fn_00c24c40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd4710
extern "C" __declspec(naked) void asm_00dd4710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x13102e8 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1310740 }
	__asm { push 0 }
	__asm { push 0xe9688c }
	__asm { push 0xeeebec }
	__asm { push 0 }
	__asm { push 0xc34140 }
	__asm { call fn_00c24b70 }
	__asm { push 0xe096c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1310700 }
	__asm { push 6 }
	__asm { push 0xe5dcf8 }
	__asm { push 0xeeeb84 }
	__asm { push 0 }
	__asm { push 0xc363c0 }
	__asm { call fn_00c24c40 }
	__asm { push 0xe09790 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c7a040();
extern "C" void fn_00c7a190();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd92c0
extern "C" __declspec(naked) void asm_00dd92c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1313c2c }
	__asm { push 3 }
	__asm { push 0xef75f0 }
	__asm { push 0xef7600 }
	__asm { push 0xef7608 }
	__asm { push 0x1f90 }
	__asm { call fn_00c7a040 }
	__asm { push 0xe0d7a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1313ad8 }
	__asm { push 5 }
	__asm { push 0xe70490 }
	__asm { push 0xef7638 }
	__asm { push 0x1f94 }
	__asm { call fn_00c7a190 }
	__asm { push 0xe0d800 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c94d00();
extern "C" void fn_00c94ee0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd9810
extern "C" __declspec(naked) void asm_00dd9810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1313de4 }
	__asm { push 0 }
	__asm { push 0xefa238 }
	__asm { push 0xef7600 }
	__asm { push 0xef4a1c }
	__asm { push 0xb04 }
	__asm { call fn_00c94ee0 }
	__asm { push 0xe0dbf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1313db8 }
	__asm { push 0 }
	__asm { push 0xeeeb38 }
	__asm { push 0xefa298 }
	__asm { push 0xef7600 }
	__asm { push 0xefa2a0 }
	__asm { push 0xb08 }
	__asm { call fn_00c94d00 }
	__asm { push 0xe0dc50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01314020[];
extern "C" char g_0131403c[];
extern "C" char g_01314048[];
extern "C" char g_0131404c[];
extern "C" void fn_007d5390();
extern "C" void fn_00c9a6d0();
extern "C" void fn_00c9ab30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd9b80
extern "C" __declspec(naked) void asm_00dd9b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1313f48 }
	__asm { push 5 }
	__asm { push 0xefa238 }
	__asm { push 0xef7600 }
	__asm { push 0xefaecc }
	__asm { push 0xb74 }
	__asm { call fn_00c9a6d0 }
	__asm { push 0xe0e000 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a02a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1314020 }
	__asm { push 3 }
	__asm { push 0xefade8 }
	__asm { call fn_00c9ab30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01314020], 0xefade0 }
	__asm { mov dword ptr [g_01314048], 0xc9cf00 }
	__asm { mov dword ptr [g_0131404c], 0 }
	__asm { call fn_007d5390 }
	__asm { push 0xe0e060 }
	__asm { mov dword ptr [g_0131403c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8fa8[];
extern "C" char g_012f8fc8[];
extern "C" char g_012f8fd8[];
extern "C" char g_012f8fdc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de9530
extern "C" __declspec(naked) void asm_00de9530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012f8fdc] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012f8fd8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x12f8fc8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f8fc8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f8fa8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8f00[];
extern "C" char g_012f8f20[];
extern "C" char g_012f8f30[];
extern "C" char g_012f8f34[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dea290
extern "C" __declspec(naked) void asm_00dea290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012f8f34] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012f8f30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x12f8f20 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f8f20] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f8f00], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8f38[];
extern "C" char g_012f8f58[];
extern "C" char g_012f8f68[];
extern "C" char g_012f8f6c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dea310
extern "C" __declspec(naked) void asm_00dea310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012f8f6c] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012f8f68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x12f8f58 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f8f58] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f8f38], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8e90[];
extern "C" char g_012f8eb0[];
extern "C" char g_012f8ec0[];
extern "C" char g_012f8ec4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dea400
extern "C" __declspec(naked) void asm_00dea400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012f8ec4] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012f8ec0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x12f8eb0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f8eb0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f8e90], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8ec8[];
extern "C" char g_012f8ee8[];
extern "C" char g_012f8ef8[];
extern "C" char g_012f8efc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dea480
extern "C" __declspec(naked) void asm_00dea480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012f8efc] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012f8ef8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x12f8ee8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f8ee8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f8ec8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fb740[];
extern "C" char g_012fb760[];
extern "C" char g_012fb774[];
extern "C" char g_012fb778[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deca20
extern "C" __declspec(naked) void asm_00deca20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012fb778] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fb774] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x12fb760 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fb760] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fb740], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fb700[];
extern "C" char g_012fb720[];
extern "C" char g_012fb734[];
extern "C" char g_012fb738[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00decd50
extern "C" __declspec(naked) void asm_00decd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012fb738] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fb734] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x12fb720 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fb720] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fb700], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fbf08[];
extern "C" char g_012fbf28[];
extern "C" char g_012fbf3c[];
extern "C" char g_012fbf40[];
extern "C" char g_012fbf44[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ded830
extern "C" __declspec(naked) void asm_00ded830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012fbf44] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbf40] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbf3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { mov ecx, 0x12fbf28 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fbf28] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fbf08], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
