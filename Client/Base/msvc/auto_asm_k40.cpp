// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e106d4[];
extern "C" char g_00e10710[];
extern "C" void fn_00a34d20();
extern "C" void fn_00a35060();
extern "C" void fn_00a35150();
extern "C" void fn_00a357b0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a35e70();
extern "C" void fn_00a38a50();
// FUNCTION: ROBLOXSTUDIO 0x00b6deb0
extern "C" __declspec(naked) void asm_00b6deb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a35150 }
	__asm { push 0xe71990 }
	__asm { mov ebx, eax }
	__asm { push 0xffffd8ee }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { call fn_00a35060 }
	__asm { mov edi, 1 }
	__asm { add esp, 0x10 }
	__asm { cmp ebx, edi }
	__asm { jl L_00b6df4c }
	__asm { L_00b6dee1: }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push 1 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a34d20 }
	__asm { push 0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35e70 }
	__asm { mov ebx, eax }
	__asm { add esp, 0x28 }
	__asm { test ebx, ebx }
	__asm { je L_00b6df6d }
	__asm { cmp edi, 1 }
	__asm { jle L_00b6df2a }
	__asm { call dword ptr [g_00e106d4] }
	__asm { add eax, 0x20 }
	__asm { push eax }
	__asm { push 0x1004e24 }
	__asm { call dword ptr [g_00e10710] }
	__asm { add esp, 8 }
	__asm { L_00b6df2a: }
	__asm { call dword ptr [g_00e106d4] }
	__asm { add eax, 0x20 }
	__asm { push eax }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10710] }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { inc edi }
	__asm { add esp, 0x10 }
	__asm { cmp edi, dword ptr [ebp - 4] }
	__asm { jle L_00b6dee1 }
	__asm { L_00b6df4c: }
	__asm { call dword ptr [g_00e106d4] }
	__asm { add eax, 0x20 }
	__asm { push eax }
	__asm { push 0x1004e20 }
	__asm { call dword ptr [g_00e10710] }
	__asm { add esp, 8 }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b6df6d: }
	__asm { push 0xe7199c }
	__asm { push esi }
	__asm { call fn_00a38a50 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35440();
extern "C" void fn_00a356d0();
extern "C" void fn_00a35710();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360d0();
extern "C" void fn_00a36100();
extern "C" void fn_00a38710();
extern "C" void fn_00a38960();
// FUNCTION: ROBLOXSTUDIO 0x00b6e450
extern "C" __declspec(naked) void asm_00b6e450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38710 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a36100 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { add esp, 0x20 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 5 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38960 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35440 }
	__asm { add esp, 0x1c }
	__asm { test eax, eax }
	__asm { je L_00b6e4b0 }
	__asm { mov eax, 2 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b6e4b0: }
	__asm { push esi }
	__asm { call fn_00a356d0 }
	__asm { add esp, 4 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_00886810();
extern "C" void fn_00a351c0();
extern "C" void fn_00a356d0();
extern "C" void fn_00a387b0();
extern "C" void fn_00a38e40();
extern "C" void fn_00a39080();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b6e4d0
extern "C" __declspec(naked) void asm_00b6e4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59bf0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push ebx }
	__asm { call fn_00a387b0 }
	__asm { push 0 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { push 2 }
	__asm { push ebx }
	__asm { call fn_00a39080 }
	__asm { add esp, 0x1c }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov edi, eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00886810 }
	__asm { push edi }
	__asm { push eax }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a38e40 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { jne L_00b6e559 }
	__asm { lea edi, [eax + 1] }
	__asm { jmp L_00b6e56f }
	__asm { L_00b6e559: }
	__asm { push ebx }
	__asm { call fn_00a356d0 }
	__asm { push -2 }
	__asm { push ebx }
	__asm { call fn_00a351c0 }
	__asm { add esp, 0xc }
	__asm { mov edi, 2 }
	__asm { L_00b6e56f: }
	__asm { mov esi, dword ptr [ebp - 0x2c] }
	__asm { test esi, esi }
	__asm { je L_00b6e5a0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00b6e586 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b6e586: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b6e5a0: }
	__asm { cmp dword ptr [ebp - 0x30], 0x10 }
	__asm { jb L_00b6e5b1 }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b6e5b1: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 0x30], 0xf }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov byte ptr [ebp - 0x44], 0 }
	__asm { jb L_00b6e5d4 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b6e5d4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34d20();
extern "C" void fn_00a34ed0();
extern "C" void fn_00a35150();
extern "C" void fn_00a35df0();
extern "C" void fn_00a38710();
extern "C" void fn_00a38a50();
extern "C" void fn_00a38c20();
extern "C" void fn_00a39080();
// FUNCTION: ROBLOXSTUDIO 0x00b6e6b0
extern "C" __declspec(naked) void asm_00b6e6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a39080 }
	__asm { push edi }
	__asm { mov esi, eax }
	__asm { call fn_00a35150 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, eax }
	__asm { call fn_00a38c20 }
	__asm { add esp, 0x1c }
	__asm { test eax, eax }
	__asm { je L_00b6e6e6 }
	__asm { push edi }
	__asm { call fn_00a34ed0 }
	__asm { add esp, 4 }
	__asm { L_00b6e6e6: }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00a34d20 }
	__asm { push edi }
	__asm { call fn_00a35150 }
	__asm { add esp, 0x10 }
	__asm { sub eax, ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38710 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35df0 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { jne L_00b6e73e }
	__asm { push eax }
	__asm { push 0xed10f0 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a39080 }
	__asm { push eax }
	__asm { push 0x100dedc }
	__asm { push esi }
	__asm { call fn_00a38a50 }
	__asm { add esp, 0x1c }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b6e73e: }
	__asm { push esi }
	__asm { call fn_00a35150 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35150();
extern "C" void fn_00a351c0();
extern "C" void fn_00a35560();
extern "C" void fn_00a36080();
extern "C" void fn_00a385a0();
extern "C" void fn_00b6ec20();
// FUNCTION: ROBLOXSTUDIO 0x00b6ea80
extern "C" __declspec(naked) void asm_00b6ea80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a36080 }
	__asm { mov edi, eax }
	__asm { add esp, 8 }
	__asm { test edi, edi }
	__asm { jne L_00b6eaa9 }
	__asm { push 0xed115c }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a385a0 }
	__asm { add esp, 0xc }
	__asm { L_00b6eaa9: }
	__asm { push esi }
	__asm { call fn_00a35150 }
	__asm { dec eax }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00b6ec20 }
	__asm { mov edi, eax }
	__asm { add esp, 0x10 }
	__asm { test edi, edi }
	__asm { jns L_00b6eadd }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00a35560 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a351c0 }
	__asm { add esp, 0x10 }
	__asm { mov eax, 2 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b6eadd: }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35560 }
	__asm { or eax, 0xffffffff }
	__asm { sub eax, edi }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a351c0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [edi + 1] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34d60();
extern "C" void fn_00a35150();
extern "C" void fn_00a35620();
extern "C" void fn_00a35bd0();
extern "C" void fn_00a36120();
extern "C" void fn_00a36d80();
extern "C" void fn_00a38a50();
extern "C" void fn_00b6edf0();
// FUNCTION: ROBLOXSTUDIO 0x00b6ec20
extern "C" __declspec(naked) void asm_00b6ec20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00b6edf0 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_00a34d60 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { jne L_00b6ec56 }
	__asm { push 0xed1170 }
	__asm { push esi }
	__asm { call fn_00a38a50 }
	__asm { add esp, 8 }
	__asm { L_00b6ec56: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { cmp eax, 1 }
	__asm { je L_00b6ec7d }
	__asm { push dword ptr [eax*4 + 0xed0ee0] }
	__asm { push 0xed1190 }
	__asm { push esi }
	__asm { call fn_00a35620 }
	__asm { add esp, 0xc }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b6ec7d: }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a36120 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a35bd0 }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00a36d80 }
	__asm { add esp, 0x1c }
	__asm { test eax, eax }
	__asm { je L_00b6ecb5 }
	__asm { cmp eax, 1 }
	__asm { je L_00b6ecb5 }
	__asm { push 1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a36120 }
	__asm { add esp, 0xc }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b6ecb5: }
	__asm { push edi }
	__asm { call fn_00a35150 }
	__asm { mov ebx, eax }
	__asm { lea ecx, [ebx + 1] }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00a34d60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00b6ecdc }
	__asm { push 0xed11ac }
	__asm { push esi }
	__asm { call fn_00a38a50 }
	__asm { add esp, 8 }
	__asm { L_00b6ecdc: }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a36120 }
	__asm { add esp, 0xc }
	__asm { mov eax, ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34e50();
extern "C" void fn_00a35580();
extern "C" void fn_00a35690();
extern "C" void fn_00a357b0();
extern "C" void fn_00a35b70();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a39240();
// FUNCTION: ROBLOXSTUDIO 0x00b6ecf0
extern "C" __declspec(naked) void asm_00b6ecf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xffffd8ee }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push 0x10305e4 }
	__asm { push 0xffffd8ee }
	__asm { push esi }
	__asm { call fn_00a35b70 }
	__asm { push 0xed0e18 }
	__asm { push 0x10305e4 }
	__asm { push esi }
	__asm { call fn_00a39240 }
	__asm { push 7 }
	__asm { push 0xed11e0 }
	__asm { push esi }
	__asm { call fn_00a35690 }
	__asm { push 0xed11e8 }
	__asm { push 0xffffd8ee }
	__asm { push esi }
	__asm { call fn_00a35b70 }
	__asm { push 0 }
	__asm { push 0xb6efa0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x44 }
	__asm { push 1 }
	__asm { push 0xb6f060 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push 0x1030610 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35b70 }
	__asm { push 0 }
	__asm { push 0xb6e480 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push 1 }
	__asm { push 0xb6f130 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push 0x1030618 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35b70 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00a34e50 }
	__asm { add esp, 0x48 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { push 2 }
	__asm { push 0xed11f4 }
	__asm { push esi }
	__asm { call fn_00a35690 }
	__asm { push 0xed11f8 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35b70 }
	__asm { push 1 }
	__asm { push 0xb6f0a0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push 0xed1200 }
	__asm { push 0xffffd8ee }
	__asm { push esi }
	__asm { call fn_00a35b70 }
	__asm { add esp, 0x40 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a357b0();
extern "C" void fn_00a360d0();
extern "C" void fn_00a37ab0();
extern "C" void fn_00a37bb0();
extern "C" void fn_00a385a0();
extern "C" void fn_00a38740();
extern "C" void fn_00a38a50();
extern "C" void fn_00a39050();
// FUNCTION: ROBLOXSTUDIO 0x00b6eee0
extern "C" __declspec(naked) void asm_00b6eee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x64 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 8 }
	__asm { cmp eax, 6 }
	__asm { jne L_00b6ef0a }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b6ef0a: }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push edi }
	__asm { push 1 }
	__asm { je L_00b6ef20 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a39050 }
	__asm { add esp, 0xc }
	__asm { jmp L_00b6ef29 }
	__asm { L_00b6ef20: }
	__asm { push esi }
	__asm { call fn_00a38740 }
	__asm { add esp, 8 }
	__asm { L_00b6ef29: }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jns L_00b6ef3f }
	__asm { push 0xed0ffc }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a385a0 }
	__asm { add esp, 0xc }
	__asm { L_00b6ef3f: }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a37bb0 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00b6ef61 }
	__asm { push 0xed1018 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a385a0 }
	__asm { add esp, 0xc }
	__asm { L_00b6ef61: }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { push 0xe3aeac }
	__asm { push esi }
	__asm { call fn_00a37ab0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { jne L_00b6ef8e }
	__asm { push edi }
	__asm { push 0xed1028 }
	__asm { push esi }
	__asm { call fn_00a38a50 }
	__asm { add esp, 0xc }
	__asm { L_00b6ef8e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34e50();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35560();
extern "C" void fn_00a357b0();
extern "C" void fn_00a358d0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a35df0();
extern "C" void fn_00a360d0();
extern "C" void fn_00a38a50();
// FUNCTION: ROBLOXSTUDIO 0x00b6f0a0
extern "C" __declspec(naked) void asm_00b6f0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00a353e0 }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov byte ptr [eax - 4], 0 }
	__asm { call fn_00a35df0 }
	__asm { add esp, 0x18 }
	__asm { test eax, eax }
	__asm { je L_00b6f10a }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 8 }
	__asm { cmp eax, 1 }
	__asm { jne L_00b6f112 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00a34e50 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35560 }
	__asm { push 0xffffd8ed }
	__asm { push esi }
	__asm { call fn_00a358d0 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x2c }
	__asm { L_00b6f10a: }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b6f112: }
	__asm { push 0xed1128 }
	__asm { push esi }
	__asm { call fn_00a38a50 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34d20();
extern "C" void fn_00a35480();
extern "C" void fn_00a35650();
extern "C" void fn_00a357b0();
extern "C" void fn_00a35890();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360d0();
extern "C" void fn_00a38960();
// FUNCTION: ROBLOXSTUDIO 0x00b6f1a0
extern "C" __declspec(naked) void asm_00b6f1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 5 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38960 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35480 }
	__asm { push 6 }
	__asm { push 2 }
	__asm { push esi }
	__asm { mov ebx, eax }
	__asm { call fn_00a38960 }
	__asm { mov edi, 1 }
	__asm { add esp, 0x20 }
	__asm { cmp ebx, edi }
	__asm { jl L_00b6f214 }
	__asm { L_00b6f1d3: }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a35650 }
	__asm { push edi }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35890 }
	__asm { push 1 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a34d20 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 0x30 }
	__asm { test eax, eax }
	__asm { jne L_00b6f21b }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { inc edi }
	__asm { add esp, 8 }
	__asm { cmp edi, ebx }
	__asm { jle L_00b6f1d3 }
	__asm { L_00b6f214: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b6f21b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34d20();
extern "C" void fn_00a35440();
extern "C" void fn_00a356d0();
extern "C" void fn_00a357b0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360d0();
extern "C" void fn_00a38960();
// FUNCTION: ROBLOXSTUDIO 0x00b6f230
extern "C" __declspec(naked) void asm_00b6f230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 5 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38960 }
	__asm { push 6 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a38960 }
	__asm { push esi }
	__asm { call fn_00a356d0 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35440 }
	__asm { add esp, 0x24 }
	__asm { test eax, eax }
	__asm { je L_00b6f2a8 }
	__asm { L_00b6f260: }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push 1 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a34d20 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 0x2c }
	__asm { test eax, eax }
	__asm { jne L_00b6f2ad }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35440 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { jne L_00b6f260 }
	__asm { L_00b6f2a8: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b6f2ad: }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10608[];
extern "C" void fn_00a38660();
extern "C" void fn_00a387b0();
extern "C" void fn_00a39110();
extern "C" void fn_00a39150();
// FUNCTION: ROBLOXSTUDIO 0x00b6fc10
extern "C" __declspec(naked) void asm_00b6fc10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x210 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a387b0 }
	__asm { mov ebx, eax }
	__asm { lea eax, [ebp - 0x210] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a38660 }
	__asm { xor esi, esi }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 4], esi }
	__asm { jbe L_00b6fc8c }
	__asm { mov eax, dword ptr [ebp - 0x210] }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_00e10608] }
	__asm { L_00b6fc50: }
	__asm { lea ecx, [ebp - 4] }
	__asm { cmp eax, ecx }
	__asm { jb L_00b6fc66 }
	__asm { lea eax, [ebp - 0x210] }
	__asm { push eax }
	__asm { call fn_00a39110 }
	__asm { add esp, 4 }
	__asm { L_00b6fc66: }
	__asm { movzx eax, byte ptr [esi + ebx] }
	__asm { push eax }
	__asm { call edi }
	__asm { mov ecx, dword ptr [ebp - 0x210] }
	__asm { inc esi }
	__asm { mov byte ptr [ecx], al }
	__asm { mov eax, dword ptr [ebp - 0x210] }
	__asm { inc eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x210], eax }
	__asm { cmp esi, dword ptr [ebp - 4] }
	__asm { jb L_00b6fc50 }
	__asm { pop edi }
	__asm { L_00b6fc8c: }
	__asm { lea eax, [ebp - 0x210] }
	__asm { push eax }
	__asm { call fn_00a39150 }
	__asm { add esp, 4 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105cc[];
extern "C" void fn_00a38660();
extern "C" void fn_00a387b0();
extern "C" void fn_00a39110();
extern "C" void fn_00a39150();
// FUNCTION: ROBLOXSTUDIO 0x00b6fcb0
extern "C" __declspec(naked) void asm_00b6fcb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x210 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a387b0 }
	__asm { mov ebx, eax }
	__asm { lea eax, [ebp - 0x210] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a38660 }
	__asm { xor esi, esi }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 4], esi }
	__asm { jbe L_00b6fd2c }
	__asm { mov eax, dword ptr [ebp - 0x210] }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_00e105cc] }
	__asm { L_00b6fcf0: }
	__asm { lea ecx, [ebp - 4] }
	__asm { cmp eax, ecx }
	__asm { jb L_00b6fd06 }
	__asm { lea eax, [ebp - 0x210] }
	__asm { push eax }
	__asm { call fn_00a39110 }
	__asm { add esp, 4 }
	__asm { L_00b6fd06: }
	__asm { movzx eax, byte ptr [esi + ebx] }
	__asm { push eax }
	__asm { call edi }
	__asm { mov ecx, dword ptr [ebp - 0x210] }
	__asm { inc esi }
	__asm { mov byte ptr [ecx], al }
	__asm { mov eax, dword ptr [ebp - 0x210] }
	__asm { inc eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x210], eax }
	__asm { cmp esi, dword ptr [ebp - 4] }
	__asm { jb L_00b6fcf0 }
	__asm { pop edi }
	__asm { L_00b6fd2c: }
	__asm { lea eax, [ebp - 0x210] }
	__asm { push eax }
	__asm { call fn_00a39150 }
	__asm { add esp, 4 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35650();
extern "C" void fn_00a387b0();
extern "C" void fn_00a38930();
extern "C" void fn_00a38a50();
extern "C" void fn_00a39050();
// FUNCTION: ROBLOXSTUDIO 0x00b6fdd0
extern "C" __declspec(naked) void asm_00b6fdd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push ebx }
	__asm { call fn_00a387b0 }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { push 1 }
	__asm { push 2 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { call fn_00a39050 }
	__asm { add esp, 0x18 }
	__asm { test eax, eax }
	__asm { jns L_00b6fe02 }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { L_00b6fe02: }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { xor esi, esi }
	__asm { test eax, eax }
	__asm { cmovns esi, eax }
	__asm { push esi }
	__asm { push 3 }
	__asm { push ebx }
	__asm { call fn_00a39050 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jns L_00b6fe1f }
	__asm { inc eax }
	__asm { add eax, edi }
	__asm { L_00b6fe1f: }
	__asm { xor ecx, ecx }
	__asm { test eax, eax }
	__asm { cmovns ecx, eax }
	__asm { test esi, esi }
	__asm { mov eax, 1 }
	__asm { cmovle esi, eax }
	__asm { cmp ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { cmova ecx, dword ptr [ebp - 4] }
	__asm { cmp esi, ecx }
	__asm { jle L_00b6fe47 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b6fe47: }
	__asm { mov edi, ecx }
	__asm { sub edi, esi }
	__asm { inc edi }
	__asm { lea eax, [edi + esi] }
	__asm { cmp eax, ecx }
	__asm { jg L_00b6fe61 }
	__asm { push 0xed140c }
	__asm { push ebx }
	__asm { call fn_00a38a50 }
	__asm { add esp, 8 }
	__asm { L_00b6fe61: }
	__asm { push 0xed140c }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00a38930 }
	__asm { add esp, 0xc }
	__asm { xor esi, esi }
	__asm { test edi, edi }
	__asm { jle L_00b6fe96 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { dec eax }
	__asm { add eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { L_00b6fe80: }
	__asm { movzx eax, byte ptr [eax + esi] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00a35650 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { inc esi }
	__asm { add esp, 8 }
	__asm { cmp esi, edi }
	__asm { jl L_00b6fe80 }
	__asm { L_00b6fe96: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34e90();
extern "C" void fn_00a35150();
extern "C" void fn_00a35d10();
extern "C" void fn_00a385a0();
extern "C" void fn_00a38660();
extern "C" void fn_00a38740();
extern "C" void fn_00a38960();
extern "C" void fn_00a38a50();
extern "C" void fn_00a39110();
extern "C" void fn_00a39150();
// FUNCTION: ROBLOXSTUDIO 0x00b6fea0
extern "C" __declspec(naked) void asm_00b6fea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x210 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00a35150 }
	__asm { mov ebx, eax }
	__asm { lea eax, [ebp - 0x210] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { call fn_00a38660 }
	__asm { mov esi, 1 }
	__asm { add esp, 0xc }
	__asm { cmp ebx, esi }
	__asm { jl L_00b6ff25 }
	__asm { L_00b6fed3: }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a38740 }
	__asm { mov ebx, eax }
	__asm { movzx ecx, bl }
	__asm { add esp, 8 }
	__asm { cmp ecx, ebx }
	__asm { je L_00b6fef5 }
	__asm { push 0xed1424 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a385a0 }
	__asm { add esp, 0xc }
	__asm { L_00b6fef5: }
	__asm { mov eax, dword ptr [ebp - 0x210] }
	__asm { lea ecx, [ebp - 4] }
	__asm { cmp eax, ecx }
	__asm { jb L_00b6ff17 }
	__asm { lea eax, [ebp - 0x210] }
	__asm { push eax }
	__asm { call fn_00a39110 }
	__asm { mov eax, dword ptr [ebp - 0x210] }
	__asm { add esp, 4 }
	__asm { L_00b6ff17: }
	__asm { mov byte ptr [eax], bl }
	__asm { inc dword ptr [ebp - 0x210] }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [ebp - 4] }
	__asm { jle L_00b6fed3 }
	__asm { L_00b6ff25: }
	__asm { lea eax, [ebp - 0x210] }
	__asm { push eax }
	__asm { call fn_00a39150 }
	__asm { add esp, 4 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 6 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38960 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { lea eax, [ebp - 0x20c] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a38660 }
	__asm { lea eax, [ebp - 0x20c] }
	__asm { push eax }
	__asm { push 0xb71710 }
	__asm { push esi }
	__asm { call fn_00a34e90 }
	__asm { add esp, 0x28 }
	__asm { test eax, eax }
	__asm { je L_00b6ff93 }
	__asm { push 0xed1434 }
	__asm { push esi }
	__asm { call fn_00a38a50 }
	__asm { add esp, 8 }
	__asm { L_00b6ff93: }
	__asm { lea eax, [ebp - 0x20c] }
	__asm { push eax }
	__asm { call fn_00a39150 }
	__asm { add esp, 4 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a38a50();
// FUNCTION: ROBLOXSTUDIO 0x00b707b0
extern "C" __declspec(naked) void asm_00b707b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { inc esi }
	__asm { movsx eax, byte ptr [esi - 1] }
	__asm { cmp eax, 0x25 }
	__asm { je L_00b70803 }
	__asm { cmp eax, 0x5b }
	__asm { je L_00b707cb }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b707cb: }
	__asm { cmp byte ptr [esi], 0x5e }
	__asm { jne L_00b707d1 }
	__asm { inc esi }
	__asm { L_00b707d1: }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_00b707d5: }
	__asm { cmp byte ptr [esi], 0 }
	__asm { jne L_00b707ea }
	__asm { push 0xed14a8 }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00a38a50 }
	__asm { add esp, 8 }
	__asm { L_00b707ea: }
	__asm { mov al, byte ptr [esi] }
	__asm { inc esi }
	__asm { cmp al, 0x25 }
	__asm { jne L_00b707f7 }
	__asm { cmp byte ptr [esi], 0 }
	__asm { je L_00b707f7 }
	__asm { inc esi }
	__asm { L_00b707f7: }
	__asm { cmp byte ptr [esi], 0x5d }
	__asm { jne L_00b707d5 }
	__asm { pop edi }
	__asm { lea eax, [esi + 1] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b70803: }
	__asm { cmp byte ptr [esi], 0 }
	__asm { jne L_00b7081b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0xed1484 }
	__asm { push dword ptr [eax + 8] }
	__asm { call fn_00a38a50 }
	__asm { add esp, 8 }
	__asm { L_00b7081b: }
	__asm { lea eax, [esi + 1] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35650();
extern "C" void fn_00a35a20();
extern "C" void fn_00a35e20();
extern "C" void fn_00a35e70();
extern "C" void fn_00b70ab0();
extern "C" void fn_00b712e0();
// FUNCTION: ROBLOXSTUDIO 0x00b708f0
extern "C" __declspec(naked) void asm_00b708f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x118 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0xffffd8ed }
	__asm { push esi }
	__asm { call fn_00a35e70 }
	__asm { push 0 }
	__asm { mov edi, eax }
	__asm { push 0xffffd8ec }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { call fn_00a35e70 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { add ecx, edi }
	__asm { push 0xffffd8eb }
	__asm { push esi }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [ebp - 0x110], esi }
	__asm { mov dword ptr [ebp - 0x118], edi }
	__asm { mov dword ptr [ebp - 0x114], ecx }
	__asm { call fn_00a35e20 }
	__asm { lea esi, [edi + eax] }
	__asm { add esp, 0x20 }
	__asm { cmp esi, dword ptr [ebp - 0x114] }
	__asm { ja L_00b7097c }
	__asm { L_00b70952: }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x118] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10c], 0 }
	__asm { call fn_00b70ab0 }
	__asm { mov edi, eax }
	__asm { add esp, 0xc }
	__asm { test edi, edi }
	__asm { jne L_00b70985 }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [ebp - 0x114] }
	__asm { jbe L_00b70952 }
	__asm { L_00b7097c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b70985: }
	__asm { mov eax, edi }
	__asm { sub eax, dword ptr [ebp - 4] }
	__asm { cmp edi, esi }
	__asm { jne L_00b7098f }
	__asm { inc eax }
	__asm { L_00b7098f: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00a35650 }
	__asm { push 0xffffd8eb }
	__asm { push ebx }
	__asm { call fn_00a35a20 }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x118] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00b712e0 }
	__asm { add esp, 0x1c }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a38a50();
// FUNCTION: ROBLOXSTUDIO 0x00b70f70
extern "C" __declspec(naked) void asm_00b70f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { cmp byte ptr [esi], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { je L_00b70f86 }
	__asm { cmp byte ptr [esi + 1], 0 }
	__asm { jne L_00b70f96 }
	__asm { L_00b70f86: }
	__asm { push 0xed14c8 }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00a38a50 }
	__asm { add esp, 8 }
	__asm { L_00b70f96: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov cl, byte ptr [esi] }
	__asm { cmp byte ptr [eax], cl }
	__asm { je L_00b70fa5 }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b70fa5: }
	__asm { push ebx }
	__asm { movsx ebx, cl }
	__asm { movsx ecx, byte ptr [esi + 1] }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { mov ecx, 1 }
	__asm { cmp eax, esi }
	__asm { jae L_00b70fda }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { L_00b70fc0: }
	__asm { movsx edx, byte ptr [eax] }
	__asm { cmp edx, edi }
	__asm { jne L_00b70fd0 }
	__asm { dec ecx }
	__asm { jne L_00b70fd5 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { inc eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b70fd0: }
	__asm { cmp edx, ebx }
	__asm { jne L_00b70fd5 }
	__asm { inc ecx }
	__asm { L_00b70fd5: }
	__asm { inc eax }
	__asm { cmp eax, esi }
	__asm { jb L_00b70fc0 }
	__asm { L_00b70fda: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b70ab0();
extern "C" void fn_00b70e30();
extern "C" void fn_00b70ff0();
// FUNCTION: ROBLOXSTUDIO 0x00b711b0
extern "C" __declspec(naked) void asm_00b711b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { push edi }
	__asm { cmp eax, dword ptr [ebx + 4] }
	__asm { jae L_00b7121f }
	__asm { mov edi, eax }
	__asm { L_00b711c5: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { movzx edx, byte ptr [edi] }
	__asm { mov cl, byte ptr [eax] }
	__asm { mov al, cl }
	__asm { cmp al, 0x25 }
	__asm { je L_00b711fa }
	__asm { cmp al, 0x2e }
	__asm { je L_00b71211 }
	__asm { cmp al, 0x5b }
	__asm { je L_00b711e7 }
	__asm { movzx eax, cl }
	__asm { xor ecx, ecx }
	__asm { cmp eax, edx }
	__asm { sete cl }
	__asm { jmp L_00b7120d }
	__asm { L_00b711e7: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { dec eax }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push edx }
	__asm { call fn_00b70ff0 }
	__asm { add esp, 0xc }
	__asm { jmp L_00b7120b }
	__asm { L_00b711fa: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { movzx eax, byte ptr [eax + 1] }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_00b70e30 }
	__asm { add esp, 8 }
	__asm { L_00b7120b: }
	__asm { mov ecx, eax }
	__asm { L_00b7120d: }
	__asm { test ecx, ecx }
	__asm { je L_00b71218 }
	__asm { L_00b71211: }
	__asm { inc edi }
	__asm { inc esi }
	__asm { cmp edi, dword ptr [ebx + 4] }
	__asm { jb L_00b711c5 }
	__asm { L_00b71218: }
	__asm { test esi, esi }
	__asm { js L_00b7123a }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { L_00b7121f: }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { inc edi }
	__asm { L_00b71223: }
	__asm { push edi }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00b70ab0 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00b7123c }
	__asm { dec esi }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { jns L_00b71223 }
	__asm { L_00b7123a: }
	__asm { xor eax, eax }
	__asm { L_00b7123c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b70ab0();
extern "C" void fn_00b70e30();
extern "C" void fn_00b70ff0();
// FUNCTION: ROBLOXSTUDIO 0x00b71250
extern "C" __declspec(naked) void asm_00b71250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b70ab0 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00b712d8 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { L_00b71272: }
	__asm { cmp esi, dword ptr [edi + 4] }
	__asm { jae L_00b712d6 }
	__asm { mov cl, byte ptr [ebx] }
	__asm { movzx edx, byte ptr [esi] }
	__asm { mov al, cl }
	__asm { cmp al, 0x25 }
	__asm { je L_00b712a7 }
	__asm { cmp al, 0x2e }
	__asm { je L_00b712bb }
	__asm { cmp al, 0x5b }
	__asm { je L_00b71296 }
	__asm { movzx eax, cl }
	__asm { xor ecx, ecx }
	__asm { cmp eax, edx }
	__asm { sete cl }
	__asm { jmp L_00b712b7 }
	__asm { L_00b71296: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { dec eax }
	__asm { push eax }
	__asm { push ebx }
	__asm { push edx }
	__asm { call fn_00b70ff0 }
	__asm { add esp, 0xc }
	__asm { jmp L_00b712b5 }
	__asm { L_00b712a7: }
	__asm { movzx eax, byte ptr [ebx + 1] }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_00b70e30 }
	__asm { add esp, 8 }
	__asm { L_00b712b5: }
	__asm { mov ecx, eax }
	__asm { L_00b712b7: }
	__asm { test ecx, ecx }
	__asm { je L_00b712d6 }
	__asm { L_00b712bb: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { inc esi }
	__asm { lea eax, [ecx + 1] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b70ab0 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_00b71272 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b712d6: }
	__asm { xor eax, eax }
	__asm { L_00b712d8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35650();
extern "C" void fn_00a35690();
extern "C" void fn_00a38a50();
// FUNCTION: ROBLOXSTUDIO 0x00b713b0
extern "C" __declspec(naked) void asm_00b713b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp edi, dword ptr [esi + 0xc] }
	__asm { jl L_00b713f1 }
	__asm { test edi, edi }
	__asm { jne L_00b713dd }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { push ecx }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00a35690 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b713dd: }
	__asm { push 0xed1454 }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00a38a50 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b713f1: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi + edi*8 + 0x14] }
	__asm { cmp ebx, -1 }
	__asm { jne L_00b71420 }
	__asm { push 0xed1514 }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00a38a50 }
	__asm { add esp, 8 }
	__asm { L_00b7140b: }
	__asm { push ebx }
	__asm { push dword ptr [esi + edi*8 + 0x10] }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00a35690 }
	__asm { add esp, 0xc }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b71420: }
	__asm { cmp ebx, -2 }
	__asm { jne L_00b7140b }
	__asm { mov eax, dword ptr [esi + edi*8 + 0x10] }
	__asm { sub eax, dword ptr [esi] }
	__asm { inc eax }
	__asm { push eax }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00a35650 }
	__asm { add esp, 8 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1058c[];
extern "C" char g_00e105c8[];
extern "C" char g_00e10688[];
extern "C" void fn_00a38a50();
// FUNCTION: ROBLOXSTUDIO 0x00b71440
extern "C" __declspec(naked) void asm_00b71440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { cmp byte ptr [esi], 0 }
	__asm { mov ebx, esi }
	__asm { je L_00b7146e }
	__asm { mov edi, dword ptr [g_00e10688] }
	__asm { L_00b71456: }
	__asm { movsx eax, byte ptr [ebx] }
	__asm { push eax }
	__asm { push 0xed15a8 }
	__asm { call edi }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00b7146e }
	__asm { inc ebx }
	__asm { cmp byte ptr [ebx], 0 }
	__asm { jne L_00b71456 }
	__asm { L_00b7146e: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, 6 }
	__asm { jb L_00b71488 }
	__asm { push 0xed15b0 }
	__asm { push edi }
	__asm { call fn_00a38a50 }
	__asm { add esp, 8 }
	__asm { L_00b71488: }
	__asm { movzx eax, byte ptr [ebx] }
	__asm { mov esi, dword ptr [g_00e105c8] }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b7149c }
	__asm { inc ebx }
	__asm { L_00b7149c: }
	__asm { movzx eax, byte ptr [ebx] }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b714aa }
	__asm { inc ebx }
	__asm { L_00b714aa: }
	__asm { cmp byte ptr [ebx], 0x2e }
	__asm { jne L_00b714cd }
	__asm { movzx eax, byte ptr [ebx + 1] }
	__asm { inc ebx }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b714bf }
	__asm { inc ebx }
	__asm { L_00b714bf: }
	__asm { movzx eax, byte ptr [ebx] }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b714cd }
	__asm { inc ebx }
	__asm { L_00b714cd: }
	__asm { movzx eax, byte ptr [ebx] }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b714e8 }
	__asm { push 0xed15d0 }
	__asm { push edi }
	__asm { call fn_00a38a50 }
	__asm { add esp, 8 }
	__asm { L_00b714e8: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov esi, ebx }
	__asm { sub esi, eax }
	__asm { mov byte ptr [edi], 0x25 }
	__asm { lea ecx, [esi + 1] }
	__asm { push ecx }
	__asm { push eax }
	__asm { inc edi }
	__asm { push edi }
	__asm { call dword ptr [g_00e1058c] }
	__asm { add esp, 0xc }
	__asm { mov byte ptr [esi + edi + 1], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b97e0();
extern "C" void fn_008bff30();
extern "C" void fn_008c04d0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b73260();
// FUNCTION: ROBLOXSTUDIO 0x00b72060
extern "C" __declspec(naked) void asm_00b72060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59c18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x28 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008bff30 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov ecx, dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00b720c0 }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b720c0: }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b73260 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00b720eb }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b720eb: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c04d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_006b97e0();
extern "C" void fn_008bff30();
extern "C" void fn_008c04d0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b72060();
// FUNCTION: ROBLOXSTUDIO 0x00b72110
extern "C" __declspec(naked) void asm_00b72110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59c18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008bff30 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov ecx, dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00b7216c }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b7216c: }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b72060 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00b72197 }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b72197: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c04d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00b25b30();
extern "C" void fn_00b73320();
// FUNCTION: ROBLOXSTUDIO 0x00b721c0
extern "C" __declspec(naked) void asm_00b721c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
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
	__asm { call fn_00b25b30 }
	__asm { sub esp, 0x28 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_00b25b30 }
	__asm { mov ecx, esi }
	__asm { call fn_00b73320 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b7223b }
	__asm { test al, 1 }
	__asm { jne L_00b72234 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b72234 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b72234: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_00b7223b: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b72262 }
	__asm { test al, 1 }
	__asm { jne L_00b72262 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b72262 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b72262: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00b25b30();
extern "C" void fn_00b733f0();
// FUNCTION: ROBLOXSTUDIO 0x00b72280
extern "C" __declspec(naked) void asm_00b72280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
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
	__asm { call fn_00b25b30 }
	__asm { sub esp, 0x28 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_00b25b30 }
	__asm { mov ecx, esi }
	__asm { call fn_00b733f0 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b722fb }
	__asm { test al, 1 }
	__asm { jne L_00b722f4 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b722f4 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b722f4: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_00b722fb: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b72322 }
	__asm { test al, 1 }
	__asm { jne L_00b72322 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b72322 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b72322: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00403540();
extern "C" void fn_006b97e0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b73690();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b72340
extern "C" __declspec(naked) void asm_00b72340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59c40 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea edi, [edx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { test ecx, ecx }
	__asm { je L_00b72390 }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b72390: }
	__asm { lea ecx, [edi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b73690 }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00b723d8 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b723d8: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { test eax, eax }
	__asm { je L_00b723fd }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b723fd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_00403540();
extern "C" void fn_006b97e0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b72340();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b72420
extern "C" __declspec(naked) void asm_00b72420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59c40 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea edi, [edx + 4] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00b7246c }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b7246c: }
	__asm { lea ecx, [edi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b72340 }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00b724b4 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b724b4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { test eax, eax }
	__asm { je L_00b724d9 }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b724d9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_006b97e0();
extern "C" void fn_008bff30();
extern "C" void fn_008c04d0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b73900();
// FUNCTION: ROBLOXSTUDIO 0x00b724f0
extern "C" __declspec(naked) void asm_00b724f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59c18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x28 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008bff30 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov ecx, dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00b72550 }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b72550: }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b73900 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00b7257b }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b7257b: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c04d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_006b97e0();
extern "C" void fn_008bff30();
extern "C" void fn_008c04d0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b724f0();
// FUNCTION: ROBLOXSTUDIO 0x00b725a0
extern "C" __declspec(naked) void asm_00b725a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59c18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008bff30 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov ecx, dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00b725fc }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b725fc: }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b724f0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00b72627 }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b72627: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c04d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00b25b30();
extern "C" void fn_00b33fa0();
extern "C" void fn_00b721c0();
// FUNCTION: ROBLOXSTUDIO 0x00b72a70
extern "C" __declspec(naked) void asm_00b72a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f0f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b25b30 }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_00b721c0 }
	__asm { mov edi, eax }
	__asm { cmp esi, edi }
	__asm { je L_00b72b06 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00b33fa0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00b33fa0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b33fa0 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00b72b06 }
	__asm { test al, 1 }
	__asm { jne L_00b72aff }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b72aff }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b72aff: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_00b72b06: }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b72b31 }
	__asm { test al, 1 }
	__asm { jne L_00b72b2a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b72b2a }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b72b2a: }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { L_00b72b31: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b72b58 }
	__asm { test al, 1 }
	__asm { jne L_00b72b58 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b72b58 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b72b58: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00b25b30();
extern "C" void fn_00b33fa0();
extern "C" void fn_00b72280();
// FUNCTION: ROBLOXSTUDIO 0x00b72b70
extern "C" __declspec(naked) void asm_00b72b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f0f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b25b30 }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_00b72280 }
	__asm { mov edi, eax }
	__asm { cmp esi, edi }
	__asm { je L_00b72c06 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00b33fa0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00b33fa0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b33fa0 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00b72c06 }
	__asm { test al, 1 }
	__asm { jne L_00b72bff }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b72bff }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b72bff: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_00b72c06: }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b72c31 }
	__asm { test al, 1 }
	__asm { jne L_00b72c2a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b72c2a }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b72c2a: }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { L_00b72c31: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b72c58 }
	__asm { test al, 1 }
	__asm { jne L_00b72c58 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b72c58 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b72c58: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b72c70
extern "C" __declspec(naked) void asm_00b72c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [eax] }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_00b72cdc }
	__asm { mov dword ptr [edx], ecx }
	__asm { test cl, 1 }
	__asm { je L_00b72cc8 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 0x24 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00b72cc8: }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b72cdc: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 0x24 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b73030
extern "C" __declspec(naked) void asm_00b73030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59cd8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00b7307f }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { L_00b7307f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { add ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b730a8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b730a8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" void fn_006b97e0();
extern "C" void fn_008bff30();
extern "C" void fn_008c04d0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b730c0
extern "C" __declspec(naked) void asm_00b730c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59d13 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00b7312f }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea esi, [edi + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [edi], ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_008bff30 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov ecx, dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { pop esi }
	__asm { test ecx, ecx }
	__asm { je L_00b73134 }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { jmp L_00b73131 }
	__asm { L_00b7312f: }
	__asm { xor edi, edi }
	__asm { L_00b73131: }
	__asm { mov ecx, dword ptr [ebp + 0x2c] }
	__asm { L_00b73134: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [eax], edi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { pop edi }
	__asm { test ecx, ecx }
	__asm { je L_00b73157 }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b73157: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c04d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_00403540();
extern "C" void fn_006b97e0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b73180
extern "C" __declspec(naked) void asm_00b73180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59d3b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b73204 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { lea edi, [esi + 4] }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00b731dc }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b731dc: }
	__asm { lea ecx, [edi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { pop edi }
	__asm { jmp L_00b73206 }
	__asm { L_00b73204: }
	__asm { xor esi, esi }
	__asm { L_00b73206: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { jb L_00b73224 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b73224: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { test eax, eax }
	__asm { je L_00b73249 }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b73249: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_006b97e0();
extern "C" void fn_008bff30();
extern "C" void fn_008c04d0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b73840();
// FUNCTION: ROBLOXSTUDIO 0x00b73260
extern "C" __declspec(naked) void asm_00b73260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59c18 }
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
	__asm { sub esp, 0x28 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008bff30 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov ecx, dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00b732be }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b732be: }
	__asm { mov esi, 0xed21b4 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b73840 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00b732f7 }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b732f7: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c04d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00aec810();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00b73320
extern "C" __declspec(naked) void asm_00b73320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00b25b30 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push esi }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b25b30 }
	__asm { mov esi, 0xed21f4 }
	__asm { mov ecx, esi }
	__asm { call fn_00aec810 }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b733aa }
	__asm { test cl, 1 }
	__asm { jne L_00b733a3 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00b733a3 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b733a3: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_00b733aa: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b733da }
	__asm { test al, 1 }
	__asm { jne L_00b733da }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b733da }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b733da: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00aec810();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00b733f0
extern "C" __declspec(naked) void asm_00b733f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00b25b30 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push esi }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b25b30 }
	__asm { mov esi, 0xed21ec }
	__asm { mov ecx, esi }
	__asm { call fn_00aec810 }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b7347a }
	__asm { test cl, 1 }
	__asm { jne L_00b73473 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00b73473 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b73473: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_00b7347a: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b734aa }
	__asm { test al, 1 }
	__asm { jne L_00b734aa }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b734aa }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b734aa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00403540();
extern "C" void fn_0040c260();
extern "C" void fn_006b97e0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b73180();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b734c0
extern "C" __declspec(naked) void asm_00b734c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59d60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00b73558 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea esi, [ecx + 4] }
	__asm { mov dword ptr [ebp + 0x28], esi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00b73524 }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b73524: }
	__asm { lea ecx, [esi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b73180 }
	__asm { mov bl, 1 }
	__asm { jmp L_00b7355a }
	__asm { L_00b73558: }
	__asm { xor bl, bl }
	__asm { L_00b7355a: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00b73572 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b73572: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b73597 }
	__asm { add ecx, 4 }
	__asm { push ecx }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b73597: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00403540();
extern "C" void fn_006b97e0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b734c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b735b0
extern "C" __declspec(naked) void asm_00b735b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59d60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea esi, [ecx + 4] }
	__asm { mov dword ptr [ebp + 0x28], esi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00b73605 }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b73605: }
	__asm { lea ecx, [esi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b734c0 }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00b7364f }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7364f: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { test eax, eax }
	__asm { je L_00b73674 }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b73674: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_00403540();
extern "C" void fn_006b97e0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b735b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b73690
extern "C" __declspec(naked) void asm_00b73690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59c40 }
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
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea esi, [edx + 4] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00b736de }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b736de: }
	__asm { lea ecx, [esi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov esi, 0xed21cc }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b735b0 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00b73734 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b73734: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { test eax, eax }
	__asm { je L_00b73759 }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b73759: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_0040c260();
extern "C" void fn_006b97e0();
extern "C" void fn_008bff30();
extern "C" void fn_008c04d0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b730c0();
// FUNCTION: ROBLOXSTUDIO 0x00b73770
extern "C" __declspec(naked) void asm_00b73770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59d88 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00b737f3 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 0x30], esi }
	__asm { call fn_008bff30 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov ecx, dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00b737e4 }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b737e4: }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b730c0 }
	__asm { mov bl, 1 }
	__asm { jmp L_00b737f5 }
	__asm { L_00b737f3: }
	__asm { xor bl, bl }
	__asm { L_00b737f5: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x30], eax }
	__asm { mov ecx, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test ecx, ecx }
	__asm { je L_00b73815 }
	__asm { add ecx, 4 }
	__asm { push ecx }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b73815: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c04d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_006b97e0();
extern "C" void fn_008bff30();
extern "C" void fn_008c04d0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b73770();
// FUNCTION: ROBLOXSTUDIO 0x00b73840
extern "C" __declspec(naked) void asm_00b73840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59d88 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 0x30], esi }
	__asm { call fn_008bff30 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov ecx, dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00b738a5 }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b738a5: }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b73770 }
	__asm { mov bl, al }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x30], eax }
	__asm { mov ecx, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test ecx, ecx }
	__asm { je L_00b738d2 }
	__asm { add ecx, 4 }
	__asm { push ecx }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b738d2: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c04d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_006b97e0();
extern "C" void fn_008bff30();
extern "C" void fn_008c04d0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b73840();
// FUNCTION: ROBLOXSTUDIO 0x00b73900
extern "C" __declspec(naked) void asm_00b73900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59c18 }
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
	__asm { sub esp, 0x28 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008bff30 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov ecx, dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00b7395e }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b7395e: }
	__asm { mov esi, 0xed21ac }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b73840 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00b73997 }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b73997: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c04d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_006b97e0();
extern "C" void fn_008bff30();
extern "C" void fn_008c04d0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b74950();
// FUNCTION: ROBLOXSTUDIO 0x00b73b40
extern "C" __declspec(naked) void asm_00b73b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59de9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { test eax, eax }
	__asm { je L_00b73b88 }
	__asm { lea ecx, [eax + 4] }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b73b88: }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_008bff30 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00b74950 }
	__asm { mov edi, eax }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea esi, [ebx + 4] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { call fn_008bff30 }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [esi + 0x20], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00b73bdd }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b73bdd: }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { test eax, eax }
	__asm { je L_00b73bfb }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b73bfb: }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008c04d0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008c04d0 }
	__asm { mov ecx, dword ptr [ebp + 0x34] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b73c2a }
	__asm { add ecx, 4 }
	__asm { push ecx }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b73c2a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00af9300();
extern "C" void fn_00b747e0();
// FUNCTION: ROBLOXSTUDIO 0x00b73c40
extern "C" __declspec(naked) void asm_00b73c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59e29 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00b73cc2 }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00b73cab }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_00b73cc2 }
	__asm { L_00b73cab: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b73cc2: }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_00b747e0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00af9300 }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00b73d0e }
	__asm { test al, 1 }
	__asm { jne L_00b73d07 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b73d07 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b73d07: }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { L_00b73d0e: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b73d32 }
	__asm { test al, 1 }
	__asm { jne L_00b73d32 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b73d32 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b73d32: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007af0c0();
extern "C" void fn_00af9300();
// FUNCTION: ROBLOXSTUDIO 0x00b73d50
extern "C" __declspec(naked) void asm_00b73d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59e29 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00b73dd2 }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00b73dbb }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_00b73dd2 }
	__asm { L_00b73dbb: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b73dd2: }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_007af0c0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00af9300 }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00b73e1e }
	__asm { test al, 1 }
	__asm { jne L_00b73e17 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b73e17 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b73e17: }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { L_00b73e1e: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b73e42 }
	__asm { test al, 1 }
	__asm { jne L_00b73e42 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b73e42 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b73e42: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b97e0();
extern "C" void fn_008bff30();
extern "C" void fn_008c04d0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b749f0();
// FUNCTION: ROBLOXSTUDIO 0x00b73fb0
extern "C" __declspec(naked) void asm_00b73fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59ed9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { test eax, eax }
	__asm { je L_00b73ff8 }
	__asm { lea ecx, [eax + 4] }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b73ff8: }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_008bff30 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00b749f0 }
	__asm { mov edi, eax }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea esi, [ebx + 4] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { call fn_008bff30 }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [esi + 0x20], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00b74053 }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b74053: }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { test eax, eax }
	__asm { je L_00b74071 }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b74071: }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008c04d0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008c04d0 }
	__asm { mov ecx, dword ptr [ebp + 0x3c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b740a0 }
	__asm { add ecx, 4 }
	__asm { push ecx }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b740a0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b74a90();
// FUNCTION: ROBLOXSTUDIO 0x00b747e0
extern "C" __declspec(naked) void asm_00b747e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f468 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00b7485b }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00b74844 }
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
	__asm { jmp L_00b7485b }
	__asm { L_00b74844: }
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
	__asm { L_00b7485b: }
	__asm { mov ecx, esi }
	__asm { call fn_00b74a90 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b74889 }
	__asm { test al, 1 }
	__asm { jne L_00b74889 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b74889 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b74889: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_00403540();
extern "C" void fn_006b97e0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b74b50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b748a0
extern "C" __declspec(naked) void asm_00b748a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59f48 }
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
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00b74908 }
	__asm { lea ecx, [eax + 4] }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b74908: }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b74b50 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b7492a }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b7492a: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00b7493b }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7493b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_006b97e0();
extern "C" void fn_008bff30();
extern "C" void fn_008c04d0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b74c20();
// FUNCTION: ROBLOXSTUDIO 0x00b74950
extern "C" __declspec(naked) void asm_00b74950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59f78 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { push ecx }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { test eax, eax }
	__asm { je L_00b74991 }
	__asm { lea ecx, [eax + 4] }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b74991: }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { lea eax, [ebp + 8] }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008bff30 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b74c20 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008c04d0 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b749d7 }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b749d7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_006b97e0();
extern "C" void fn_008bff30();
extern "C" void fn_008c04d0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b74d90();
// FUNCTION: ROBLOXSTUDIO 0x00b749f0
extern "C" __declspec(naked) void asm_00b749f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59fa8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { push ecx }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { test eax, eax }
	__asm { je L_00b74a31 }
	__asm { lea ecx, [eax + 4] }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b74a31: }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { lea eax, [ebp + 8] }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_008bff30 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b74d90 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008c04d0 }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b74a7d }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b74a7d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_0052d1a0();
// FUNCTION: ROBLOXSTUDIO 0x00b74a90
extern "C" __declspec(naked) void asm_00b74a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f468 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00b74b08 }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00b74af1 }
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
	__asm { jmp L_00b74b08 }
	__asm { L_00b74af1: }
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
	__asm { L_00b74b08: }
	__asm { mov ecx, esi }
	__asm { call fn_0052d1a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b74b36 }
	__asm { test al, 1 }
	__asm { jne L_00b74b36 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b74b36 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b74b36: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_00403540();
extern "C" void fn_006b97e0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b74b50
extern "C" __declspec(naked) void asm_00b74b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59fe0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00b74b8d }
	__asm { lea ecx, [esi + 4] }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b74b8d: }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00b74ba1 }
	__asm { lea ecx, [esi + 4] }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b74ba1: }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b74bb5 }
	__asm { add esi, 4 }
	__asm { push esi }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b74bb5: }
	__asm { lea ecx, [edi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b74bf1 }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b74bf1: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00b74c02 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b74c02: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_006b97e0();
extern "C" void fn_008bff30();
extern "C" void fn_008c04d0();
extern "C" void fn_008ccfc0();
// FUNCTION: ROBLOXSTUDIO 0x00b74c20
extern "C" __declspec(naked) void asm_00b74c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a018 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_008bff30 }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008bff30 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_008bff30 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008c04d0 }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008c04d0 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { test eax, eax }
	__asm { je L_00b74ca3 }
	__asm { lea ecx, [eax + 4] }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b74ca3: }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008c04d0 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b74cc9 }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b74cc9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_008bff30();
extern "C" void fn_008c04d0();
// FUNCTION: ROBLOXSTUDIO 0x00b74ce0
extern "C" __declspec(naked) void asm_00b74ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a050 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x60 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008bff30 }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008bff30 }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008bff30 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_008bff30 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008c04d0 }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008c04d0 }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008c04d0 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c04d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00427010();
extern "C" void fn_00a419c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b76500
extern "C" __declspec(naked) void asm_00b76500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a300 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push -1 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a419c0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { jne L_00b7654d }
	__asm { xor ecx, ecx }
	__asm { jmp L_00b7655b }
	__asm { L_00b7654d: }
	__asm { mov ecx, edx }
	__asm { lea esi, [ecx + 1] }
	__asm { L_00b76552: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00b76552 }
	__asm { sub ecx, esi }
	__asm { L_00b7655b: }
	__asm { push ecx }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_004038a0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00427010 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00b765a5 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b765a5: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b765de }
	__asm { test al, 1 }
	__asm { jne L_00b765de }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b765de }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b765de: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" void fn_00b74760();
extern "C" void fn_00b751f0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b780c0
extern "C" __declspec(naked) void asm_00b780c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1ac4b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { jne L_00b78131 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x20 }
	__asm { mov esi, dword ptr [eax] }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b7811b }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00b74760 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b7811b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b78131: }
	__asm { cmp eax, 1 }
	__asm { jne L_00b78155 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b78155: }
	__asm { cmp eax, 2 }
	__asm { jne L_00b7817f }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_00b7816a }
	__asm { push 1 }
	__asm { call fn_00b751f0 }
	__asm { L_00b7816a: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b7817f: }
	__asm { cmp eax, 3 }
	__asm { jne L_00b781ae }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x128d8c0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00b7816a }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b781ae: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0x128d8c0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc74[];
extern "C" void fn_008dfac0();
extern "C" void fn_00a35580();
extern "C" void fn_00a35710();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35ce0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38fc0();
// FUNCTION: ROBLOXSTUDIO 0x00b7ae90
extern "C" __declspec(naked) void asm_00b7ae90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_0128dc74] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a38fc0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_008dfac0 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xe5332c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b60 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a200 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b68 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb79b30 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x40 }
	__asm { push 0xea7b70 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a550 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc78[];
extern "C" void fn_008dfac0();
extern "C" void fn_00a35580();
extern "C" void fn_00a35710();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35ce0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38fc0();
// FUNCTION: ROBLOXSTUDIO 0x00b7af70
extern "C" __declspec(naked) void asm_00b7af70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_0128dc78] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a38fc0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_008dfac0 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xe5332c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b60 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a220 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b68 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb79b80 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x40 }
	__asm { push 0xea7b70 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a580 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc7c[];
extern "C" void fn_008dfac0();
extern "C" void fn_00a35580();
extern "C" void fn_00a35710();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35ce0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38fc0();
// FUNCTION: ROBLOXSTUDIO 0x00b7b050
extern "C" __declspec(naked) void asm_00b7b050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_0128dc7c] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a38fc0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_008dfac0 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xe5332c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b60 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a240 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b68 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb79bd0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x40 }
	__asm { push 0xea7b70 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a5b0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128e200[];
extern "C" void fn_008dfac0();
extern "C" void fn_00a35580();
extern "C" void fn_00a35710();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35ce0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38fc0();
// FUNCTION: ROBLOXSTUDIO 0x00b7b130
extern "C" __declspec(naked) void asm_00b7b130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_0128e200] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a38fc0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_008dfac0 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xe5332c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b60 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a260 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b68 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb79c20 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x40 }
	__asm { push 0xea7b70 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a5e0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012105e0[];
extern "C" void fn_008dfac0();
extern "C" void fn_00a35580();
extern "C" void fn_00a35710();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35ce0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38fc0();
// FUNCTION: ROBLOXSTUDIO 0x00b7b210
extern "C" __declspec(naked) void asm_00b7b210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_012105e0] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a38fc0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_008dfac0 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xe5332c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b60 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a2a0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b68 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb79c70 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x40 }
	__asm { push 0xea7b70 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a610 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012105e4[];
extern "C" void fn_008dfac0();
extern "C" void fn_00a35580();
extern "C" void fn_00a35710();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35ce0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38fc0();
// FUNCTION: ROBLOXSTUDIO 0x00b7b2f0
extern "C" __declspec(naked) void asm_00b7b2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_012105e4] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a38fc0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_008dfac0 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xe5332c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b60 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a2d0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b68 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb79cc0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x40 }
	__asm { push 0xea7b70 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a640 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012105e8[];
extern "C" void fn_008dfac0();
extern "C" void fn_00a35580();
extern "C" void fn_00a35710();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35ce0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38fc0();
// FUNCTION: ROBLOXSTUDIO 0x00b7b3d0
extern "C" __declspec(naked) void asm_00b7b3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_012105e8] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a38fc0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_008dfac0 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xe5332c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b60 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a320 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b68 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb79d10 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x40 }
	__asm { push 0xea7b70 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a670 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128d3b4[];
extern "C" void fn_008dfac0();
extern "C" void fn_00a35580();
extern "C" void fn_00a35710();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35ce0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38fc0();
// FUNCTION: ROBLOXSTUDIO 0x00b7b4b0
extern "C" __declspec(naked) void asm_00b7b4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_0128d3b4] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a38fc0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_008dfac0 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xe5332c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b60 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a370 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b70 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a6a0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x40 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x14 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eac8[];
extern "C" void fn_008dfac0();
extern "C" void fn_00a35580();
extern "C" void fn_00a35710();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35ce0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38fc0();
// FUNCTION: ROBLOXSTUDIO 0x00b7b570
extern "C" __declspec(naked) void asm_00b7b570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_0124eac8] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a38fc0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_008dfac0 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xe5332c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b60 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a3c0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b68 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb79d60 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x40 }
	__asm { push 0xea7b70 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a6d0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead0[];
extern "C" void fn_008dfac0();
extern "C" void fn_00a35580();
extern "C" void fn_00a35710();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35ce0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38fc0();
// FUNCTION: ROBLOXSTUDIO 0x00b7b650
extern "C" __declspec(naked) void asm_00b7b650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_0124ead0] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a38fc0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_008dfac0 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xe5332c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b60 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a3e0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b68 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb79db0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x40 }
	__asm { push 0xea7b70 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a750 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead4[];
extern "C" void fn_008dfac0();
extern "C" void fn_00a35580();
extern "C" void fn_00a35710();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35ce0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38fc0();
// FUNCTION: ROBLOXSTUDIO 0x00b7b730
extern "C" __declspec(naked) void asm_00b7b730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_0124ead4] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a38fc0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_008dfac0 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xe5332c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b60 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a400 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b68 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb79e00 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x40 }
	__asm { push 0xea7b70 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a7d0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb28[];
extern "C" void fn_008dfac0();
extern "C" void fn_00a35580();
extern "C" void fn_00a35710();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35ce0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38fc0();
// FUNCTION: ROBLOXSTUDIO 0x00b7b810
extern "C" __declspec(naked) void asm_00b7b810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_0124eb28] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a38fc0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_008dfac0 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xe5332c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b60 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a430 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b68 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb79e90 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x40 }
	__asm { push 0xea7b70 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a850 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eac4[];
extern "C" void fn_008dfac0();
extern "C" void fn_00a35580();
extern "C" void fn_00a35710();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35ce0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38fc0();
// FUNCTION: ROBLOXSTUDIO 0x00b7b8f0
extern "C" __declspec(naked) void asm_00b7b8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_0124eac4] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a38fc0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_008dfac0 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xe5332c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b60 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a450 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b68 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb79f10 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x40 }
	__asm { push 0xea7b70 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a940 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc80[];
extern "C" void fn_008dfac0();
extern "C" void fn_00a35580();
extern "C" void fn_00a35710();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35ce0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38fc0();
// FUNCTION: ROBLOXSTUDIO 0x00b7b9d0
extern "C" __declspec(naked) void asm_00b7b9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_0128dc80] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a38fc0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_008dfac0 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xe5332c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b60 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a470 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b68 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb79f60 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x40 }
	__asm { push 0xea7b70 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a9c0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb1c[];
extern "C" void fn_008dfac0();
extern "C" void fn_00a35580();
extern "C" void fn_00a35710();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35ce0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38fc0();
// FUNCTION: ROBLOXSTUDIO 0x00b7bab0
extern "C" __declspec(naked) void asm_00b7bab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_0124eb1c] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a38fc0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_008dfac0 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xe5332c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b60 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a4b0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b68 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb79fc0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x40 }
	__asm { push 0xea7b70 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7aa40 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead8[];
extern "C" void fn_008dfac0();
extern "C" void fn_00a35580();
extern "C" void fn_00a35710();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35ce0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38fc0();
// FUNCTION: ROBLOXSTUDIO 0x00b7bb90
extern "C" __declspec(naked) void asm_00b7bb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_0124ead8] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a38fc0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_008dfac0 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xe5332c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b60 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a4e0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b68 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a070 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x40 }
	__asm { push 0xea7b70 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7aac0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eadc[];
extern "C" void fn_008dfac0();
extern "C" void fn_00a35580();
extern "C" void fn_00a35710();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35ce0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38fc0();
// FUNCTION: ROBLOXSTUDIO 0x00b7bc70
extern "C" __declspec(naked) void asm_00b7bc70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_0124eadc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a38fc0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_008dfac0 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xe5332c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b60 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a500 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b68 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a120 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x40 }
	__asm { push 0xea7b70 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7ab40 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128e204[];
extern "C" void fn_008dfac0();
extern "C" void fn_00a35580();
extern "C" void fn_00a35710();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35ce0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38fc0();
// FUNCTION: ROBLOXSTUDIO 0x00b7bd50
extern "C" __declspec(naked) void asm_00b7bd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_0128e204] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a38fc0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_008dfac0 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xe5332c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b60 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a520 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b68 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7a1b0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x40 }
	__asm { push 0xea7b70 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xb7ae60 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b98f0();
extern "C" void fn_008dfe30();
extern "C" void fn_00a35580();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b7bf60
extern "C" __declspec(naked) void asm_00b7bf60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov ecx, 0xed2304 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, esi }
	__asm { L_00b7bf71: }
	__asm { mov dl, byte ptr [eax] }
	__asm { cmp dl, byte ptr [ecx] }
	__asm { jne L_00b7bf91 }
	__asm { test dl, dl }
	__asm { je L_00b7bf8d }
	__asm { mov dl, byte ptr [eax + 1] }
	__asm { cmp dl, byte ptr [ecx + 1] }
	__asm { jne L_00b7bf91 }
	__asm { add eax, 2 }
	__asm { add ecx, 2 }
	__asm { test dl, dl }
	__asm { jne L_00b7bf71 }
	__asm { L_00b7bf8d: }
	__asm { xor eax, eax }
	__asm { jmp L_00b7bf96 }
	__asm { L_00b7bf91: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { L_00b7bf96: }
	__asm { test eax, eax }
	__asm { jne L_00b7bfb5 }
	__asm { push eax }
	__asm { push 0xb7c260 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00a35580 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b7bfb5: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00b7bfda }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_008dfe30 }
	__asm { add esp, 8 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b7bfda: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xed2210 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00a35690();
extern "C" void fn_00a356f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b7c000
extern "C" __declspec(naked) void asm_00b7c000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov ecx, 0x100a8ac }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, esi }
	__asm { L_00b7c011: }
	__asm { mov dl, byte ptr [eax] }
	__asm { cmp dl, byte ptr [ecx] }
	__asm { jne L_00b7c031 }
	__asm { test dl, dl }
	__asm { je L_00b7c02d }
	__asm { mov dl, byte ptr [eax + 1] }
	__asm { cmp dl, byte ptr [ecx + 1] }
	__asm { jne L_00b7c031 }
	__asm { add eax, 2 }
	__asm { add ecx, 2 }
	__asm { test dl, dl }
	__asm { jne L_00b7c011 }
	__asm { L_00b7c02d: }
	__asm { xor eax, eax }
	__asm { jmp L_00b7c036 }
	__asm { L_00b7c031: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { L_00b7c036: }
	__asm { test eax, eax }
	__asm { jne L_00b7c067 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { jb L_00b7c050 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00b7c050: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00a35690 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b7c067: }
	__asm { mov ecx, 0x10086b4 }
	__asm { mov eax, esi }
	__asm { mov edi, edi }
	__asm { L_00b7c070: }
	__asm { mov dl, byte ptr [eax] }
	__asm { cmp dl, byte ptr [ecx] }
	__asm { jne L_00b7c090 }
	__asm { test dl, dl }
	__asm { je L_00b7c08c }
	__asm { mov dl, byte ptr [eax + 1] }
	__asm { cmp dl, byte ptr [ecx + 1] }
	__asm { jne L_00b7c090 }
	__asm { add eax, 2 }
	__asm { add ecx, 2 }
	__asm { test dl, dl }
	__asm { jne L_00b7c070 }
	__asm { L_00b7c08c: }
	__asm { xor eax, eax }
	__asm { jmp L_00b7c095 }
	__asm { L_00b7c090: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { L_00b7c095: }
	__asm { test eax, eax }
	__asm { jne L_00b7c0bc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [eax] }
	__asm { fild dword ptr [eax + 0x14] }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b7c0bc: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe6f03c }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10500[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00b7c340
extern "C" __declspec(naked) void asm_00b7c340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a5e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { jae L_00b7c38f }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_00b7c399 }
	__asm { push eax }
	__asm { push esi }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00b7c399 }
	__asm { L_00b7c38f: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00b7c399: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebx + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { lea edi, [ebx + 0x18] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { add esi, 0x18 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [edi + 0x18] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov al, byte ptr [esi + 0x30] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [edi + 0x30], al }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10388[];
extern "C" char g_00e10500[];
extern "C" void fn_00b7f8d0();
// FUNCTION: ROBLOXSTUDIO 0x00b7c430
extern "C" __declspec(naked) void asm_00b7c430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a600 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { jae L_00b7c47f }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { inc eax }
	__asm { je L_00b7c489 }
	__asm { push eax }
	__asm { push edi }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00b7c489 }
	__asm { L_00b7c47f: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_00b7c489: }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [ebx + 0x14], eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { lea esi, [ebx + 0x18] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { add edi, 0x18 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00b7f8d0 }
	__asm { mov dword ptr [esi], eax }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10388] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00b7cc60();
extern "C" void fn_00b7fa00();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b7dd30
extern "C" __declspec(naked) void asm_00b7dd30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a740 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00b7dd63: }
	__asm { cmp eax, dword ptr [ebp + 0x10] }
	__asm { je L_00b7ddd4 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add eax, 8 }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call fn_00b7cc60 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, 0x6666665 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00b7dd96 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00b7dd96: }
	__asm { inc eax }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { jmp L_00b7dd63 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { je L_00b7ddcb }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { L_00b7ddb7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_00b7fa00 }
	__asm { mov esi, dword ptr [esi] }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { jne L_00b7ddb7 }
	__asm { L_00b7ddcb: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00b7ddd4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00b7ec10();
extern "C" void fn_00b7f370();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b7e330
extern "C" __declspec(naked) void asm_00b7e330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a78b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x40 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00b7e3bb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { call fn_00b7ec10 }
	__asm { push 0x3c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00b7e3a4 }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { push eax }
	__asm { call fn_00b7ec10 }
	__asm { jmp L_00b7e3a6 }
	__asm { L_00b7e3a4: }
	__asm { xor esi, esi }
	__asm { L_00b7e3a6: }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b7f370 }
	__asm { mov bl, 1 }
	__asm { jmp L_00b7e3bd }
	__asm { L_00b7e3bb: }
	__asm { xor bl, bl }
	__asm { L_00b7e3bd: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b7f370 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" void fn_00b7e330();
extern "C" void fn_00b7ec10();
extern "C" void fn_00b7f370();
// FUNCTION: ROBLOXSTUDIO 0x00b7e3e0
extern "C" __declspec(naked) void asm_00b7e3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a620 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x40 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00b7ec10 }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x3c }
	__asm { mov ecx, esp }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call fn_00b7ec10 }
	__asm { mov esi, 0xed2bf4 }
	__asm { mov ecx, esi }
	__asm { call fn_00b7e330 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b7f370 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b7f370 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x3c }
}

extern "C" void fn_00403540();
extern "C" void fn_00b7e9c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7e6d0
extern "C" __declspec(naked) void asm_00b7e6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd36640 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_00b7e9c0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { add eax, 4 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00b7e773 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7e773: }
	__asm { cmp dword ptr [ebp + 0x2c], 0x10 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { jb L_00b7e796 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7e796: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc80[];
extern "C" void fn_00403540();
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7e890
extern "C" __declspec(naked) void asm_00b7e890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a829 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0x18 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a353e0 }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b7e8f2 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { L_00b7e8f2: }
	__asm { push dword ptr [g_0128dc80] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00b7e923 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7e923: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7e9c0
extern "C" __declspec(naked) void asm_00b7e9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53870 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b7ea42 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7ea42: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_00b7ea53 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7ea53: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00403110();
extern "C" void fn_0048eb20();
extern "C" void fn_00b7f8d0();
extern "C" void fn_00b89440();
extern "C" void fn_00bfdc80();
extern "C" void fn_00c679a0();
// FUNCTION: ROBLOXSTUDIO 0x00b7f0f0
extern "C" __declspec(naked) void asm_00b7f0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a902 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov byte ptr [edi + 4], 0 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 8] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { call fn_00b7f8d0 }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { lea ecx, [edi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { call fn_00bfdc80 }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea ecx, [edi + 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { call fn_00c679a0 }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { lea ecx, [edi + 0x20] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { call fn_0048eb20 }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { lea ecx, [edi + 0x28] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { call fn_00c679a0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [ebp + 8], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00b7f1da }
	__asm { sub eax, 4 }
	__asm { L_00b7f1da: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0x3f800000 }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x48] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { call fn_00b89440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x48], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x00b7f7f0
extern "C" __declspec(naked) void asm_00b7f7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd64790 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { jne L_00b7f841 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe19198 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00410540 }
	__asm { L_00b7f841: }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b7f877 }
	__asm { test al, 1 }
	__asm { jne L_00b7f877 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b7f877 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b7f877: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00513a40();
extern "C" void fn_008d0ec0();
extern "C" void fn_00a356d0();
extern "C" void fn_00a35710();
extern "C" void fn_00b800d0();
// FUNCTION: ROBLOXSTUDIO 0x00b7fa60
extern "C" __declspec(naked) void asm_00b7fa60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ecx + 0x20] }
	__asm { lea ebx, [ecx + 0x20] }
	__asm { mov ecx, ebx }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { je L_00b7faa5 }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_00b7fa8b }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00b7fa8b: }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [eax + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { js L_00b7faa5 }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { jmp L_00b7faaa }
	__asm { L_00b7faa5: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_00b7faaa: }
	__asm { lea eax, [ebp - 4] }
	__asm { cmp dword ptr [eax], edi }
	__asm { je L_00b7fae7 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a356d0 }
	__asm { add esp, 4 }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_008d0ec0 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00b7facf }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00b7facf: }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { add esp, 8 }
	__asm { mov eax, 2 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00b7fae7: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b800d0 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a35150();
extern "C" void fn_00a351c0();
extern "C" void fn_00a35290();
extern "C" void fn_00a35670();
extern "C" void fn_00a35690();
extern "C" void fn_00a356d0();
extern "C" void fn_00a35850();
extern "C" void fn_00a359d0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360d0();
// FUNCTION: ROBLOXSTUDIO 0x00b800d0
extern "C" __declspec(naked) void asm_00b800d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xb81410 }
	__asm { push esi }
	__asm { call fn_00a35670 }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35850 }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b8013e }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00b8013e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b80129 }
	__asm { push 0xc4 }
	__asm { push 0xed2360 }
	__asm { push 0xe72780 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8013e }
	__asm { L_00b80129: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed2790 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8013e: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { jb L_00b8014c }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00b8014c: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a35690 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35850 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 0x1c }
	__asm { test eax, eax }
	__asm { jne L_00b8017b }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b8017b: }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35290 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00b801b1 }
	__asm { push esi }
	__asm { call fn_00a356d0 }
	__asm { push esi }
	__asm { call fn_00a35150 }
	__asm { dec eax }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a351c0 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a359d0 }
	__asm { add esp, 0x18 }
	__asm { mov eax, 2 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b801b1: }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a359d0 }
	__asm { add esp, 8 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00941e40();
extern "C" void fn_00b7ceb0();
extern "C" void fn_00b7eb80();
extern "C" void fn_00c3b170();
extern "C" void fn_00c452a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b81160
extern "C" __declspec(naked) void asm_00b81160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5ab48 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 4], 0 }
	__asm { je L_00b811af }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { je L_00b811af }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x14], 0xb805a0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00b7ceb0 }
	__asm { add esp, 0xc }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00941e40 }
	__asm { L_00b811af: }
	__asm { cmp dword ptr [esi + 0x4c], 0 }
	__asm { je L_00b811fb }
	__asm { add esi, 0x48 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_00b7eb80 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c452a0 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x10], 0xb7f7f0 }
	__asm { call fn_00c3b170 }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_00c452a0 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b811fb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00403540();
extern "C" void fn_006b9740();
extern "C" void fn_00a35670();
extern "C" void fn_00a35690();
extern "C" void fn_00a357b0();
extern "C" void fn_00a35850();
extern "C" void fn_00a358d0();
extern "C" void fn_00a359d0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360d0();
extern "C" void fn_00b7e890();
// FUNCTION: ROBLOXSTUDIO 0x00b81410
extern "C" __declspec(naked) void asm_00b81410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 0xb81410 }
	__asm { push esi }
	__asm { call fn_00a35670 }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35850 }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b8147f }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00b8147f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8146a }
	__asm { push 0xf1 }
	__asm { push 0xed2360 }
	__asm { push 0xe72780 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8147f }
	__asm { L_00b8146a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed27f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8147f: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00b8148c }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_00b8148e }
	__asm { L_00b8148c: }
	__asm { mov eax, edi }
	__asm { L_00b8148e: }
	__asm { push dword ptr [edi + 0x10] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a35690 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35850 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 0x1c }
	__asm { test eax, eax }
	__asm { jne L_00b81506 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push esi }
	__asm { call fn_00b7e890 }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { add esp, 0x1c }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00b814eb }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_00b814eb: }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a35690 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push -4 }
	__asm { push esi }
	__asm { call fn_00a358d0 }
	__asm { add esp, 0x1c }
	__asm { L_00b81506: }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a359d0 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac80e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b82a00
extern "C" __declspec(naked) void asm_00b82a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5aceb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { lea esi, [eax + 0x14] }
	__asm { mov dword ptr [eax], 0xed2c18 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00b82b19 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov ebx, 0x1c }
	__asm { L_00b82a72: }
	__asm { push 0x1c }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00b82ab0 }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], ebx }
	__asm { mov dword ptr [edi + 0x10], 0x20 }
	__asm { mov dword ptr [edi + 0x14], 0x20 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { jmp L_00b82ab2 }
	__asm { L_00b82ab0: }
	__asm { xor edi, edi }
	__asm { L_00b82ab2: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { cmp ecx, eax }
	__asm { jae L_00b82aed }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { cmp ecx, edx }
	__asm { ja L_00b82aed }
	__asm { mov edi, edx }
	__asm { sub edi, ecx }
	__asm { sar edi, 2 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00b82add }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00ac80e0 }
	__asm { L_00b82add: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00b82b04 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { jmp L_00b82b04 }
	__asm { L_00b82aed: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00b82afb }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00ac80e0 }
	__asm { L_00b82afb: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00b82b04 }
	__asm { mov dword ptr [eax], edi }
	__asm { L_00b82b04: }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { add ebx, 4 }
	__asm { cmp ebx, 0x58 }
	__asm { jle L_00b82a72 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00b82b19: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00b82b30
extern "C" __declspec(naked) void asm_00b82b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { lea ebx, [ecx + 0x14] }
	__asm { mov dword ptr [ecx], 0xed2c18 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0xc], ebx }
	__asm { cmp ecx, eax }
	__asm { je L_00b82bd4 }
	__asm { sub eax, ecx }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { sar eax, 2 }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { test eax, eax }
	__asm { je L_00b82bc6 }
	__asm { push esi }
	__asm { L_00b82b60: }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov esi, dword ptr [esi + edi*4] }
	__asm { test esi, esi }
	__asm { je L_00b82bab }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { test ecx, ecx }
	__asm { je L_00b82ba2 }
	__asm { mov ebx, eax }
	__asm { L_00b82b78: }
	__asm { mov edi, dword ptr [ebx + ecx - 8] }
	__asm { lea eax, [ebx + ecx] }
	__asm { push ecx }
	__asm { mov ebx, dword ptr [eax - 4] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { test edi, edi }
	__asm { jne L_00b82b78 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov ebx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { mov dword ptr [esi], edi }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_00b82ba2: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b82bab: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { inc edi }
	__asm { mov dword ptr [eax + edi*4 - 4], 0 }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { sub eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { sar eax, 2 }
	__asm { cmp edi, eax }
	__asm { jb L_00b82b60 }
	__asm { pop esi }
	__asm { L_00b82bc6: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop edi }
	__asm { L_00b82bd4: }
	__asm { cmp dword ptr [ebx], 0 }
	__asm { je L_00b82bff }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { mov dword ptr [ebx + 8], 0 }
	__asm { L_00b82bff: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b82ff0
extern "C" __declspec(naked) void asm_00b82ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5ad08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x68 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b83050 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed3448 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov byte ptr [eax + 0x10], 0 }
	__asm { jmp L_00b83052 }
	__asm { L_00b83050: }
	__asm { xor eax, eax }
	__asm { L_00b83052: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00b8306b }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call dword ptr [eax] }
	__asm { L_00b8306b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x5c }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_00b83094 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call dword ptr [eax] }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { L_00b83094: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b830a0
extern "C" __declspec(naked) void asm_00b830a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5ad28 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x40 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b83100 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed3460 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov byte ptr [eax + 0x10], 0 }
	__asm { jmp L_00b83102 }
	__asm { L_00b83100: }
	__asm { xor eax, eax }
	__asm { L_00b83102: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00b8311b }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call dword ptr [eax] }
	__asm { L_00b8311b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_00b83144 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call dword ptr [eax] }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { L_00b83144: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00421060();
extern "C" void fn_006bc950();
extern "C" void fn_008c00e0();
// FUNCTION: ROBLOXSTUDIO 0x00b83400
extern "C" __declspec(naked) void asm_00b83400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5af1b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x130ef58 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_006bc950 }
	__asm { push 0x130ef60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006bc950 }
	__asm { add esp, 8 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { lea esi, [edi + 0xc] }
	__asm { mov dword ptr [edi], 0xed3380 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00b8348a }
	__asm { lea ecx, [eax + 5] }
	__asm { test ecx, ecx }
	__asm { je L_00b8346c }
	__asm { add ecx, -5 }
	__asm { jmp L_00b8346e }
	__asm { L_00b8346c: }
	__asm { xor ecx, ecx }
	__asm { L_00b8346e: }
	__asm { cmp dword ptr [ecx - 8], 0 }
	__asm { je L_00b8348a }
	__asm { mov dword ptr [esi], eax }
	__asm { test eax, eax }
	__asm { je L_00b8347f }
	__asm { add eax, 5 }
	__asm { jmp L_00b83481 }
	__asm { L_00b8347f: }
	__asm { xor eax, eax }
	__asm { L_00b83481: }
	__asm { push eax }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00b8348a: }
	__asm { lea eax, [ebx + 4] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008c00e0 }
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

extern "C" void fn_00421060();
extern "C" void fn_008bff30();
extern "C" void fn_008c00e0();
// FUNCTION: ROBLOXSTUDIO 0x00b834b0
extern "C" __declspec(naked) void asm_00b834b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5ae03 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test eax, eax }
	__asm { je L_00b83509 }
	__asm { lea ecx, [eax + 5] }
	__asm { test ecx, ecx }
	__asm { je L_00b834eb }
	__asm { add ecx, -5 }
	__asm { jmp L_00b834ed }
	__asm { L_00b834eb: }
	__asm { xor ecx, ecx }
	__asm { L_00b834ed: }
	__asm { cmp dword ptr [ecx - 8], 0 }
	__asm { je L_00b83509 }
	__asm { mov dword ptr [esi], eax }
	__asm { test eax, eax }
	__asm { je L_00b834fe }
	__asm { add eax, 5 }
	__asm { jmp L_00b83500 }
	__asm { L_00b834fe: }
	__asm { xor eax, eax }
	__asm { L_00b83500: }
	__asm { push eax }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00b83509: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008bff30 }
	__asm { lea eax, [edi + 0x28] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x28] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008c00e0 }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006b97e0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b84c00();
// FUNCTION: ROBLOXSTUDIO 0x00b84d50
extern "C" __declspec(naked) void asm_00b84d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5b008 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, 0x2aaaaaab }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { sub ecx, dword ptr [ebp + 8] }
	__asm { imul ecx }
	__asm { sar edx, 2 }
	__asm { mov ebx, edx }
	__asm { shr ebx, 0x1f }
	__asm { add ebx, edx }
	__asm { test ebx, ebx }
	__asm { jle L_00b84dea }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { test esi, esi }
	__asm { je L_00b84d9e }
	__asm { lea ecx, [esi + 4] }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b84d9e: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b84c00 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b84de9 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b84de9: }
	__asm { pop esi }
	__asm { L_00b84dea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b97e0();
extern "C" void fn_008cc910();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b84e00
extern "C" __declspec(naked) void asm_00b84e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b031 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00b84e34: }
	__asm { cmp esi, ebx }
	__asm { je L_00b84e9f }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00b84e6d }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00b84e55 }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b84e55: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { L_00b84e6d: }
	__asm { add edi, 0x18 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], edi }
	__asm { add esi, 0x18 }
	__asm { jmp L_00b84e34 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_00b84e96 }
	__asm { L_00b84e86: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { call fn_008cc910 }
	__asm { add esi, 0x18 }
	__asm { cmp esi, edi }
	__asm { jne L_00b84e86 }
	__asm { L_00b84e96: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00b84e9f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_008c8c40();
extern "C" void fn_00b84e00();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b84ef0
extern "C" __declspec(naked) void asm_00b84ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b040 }
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
	__asm { je L_00b84f45 }
	__asm { cmp edi, 0xaaaaaaa }
	__asm { ja L_00b84f3f }
	__asm { lea eax, [edi + edi*2] }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00b84f45 }
	__asm { L_00b84f3f: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00b84f45: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00b84e00 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b84fa3 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 4] }
	__asm { push eax }
	__asm { call fn_008c8c40 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_00b84fa3: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [edi + edi*2] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { pop edi }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea eax, [esi + eax*8] }
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
extern "C" void fn_00b84ef0();
// FUNCTION: ROBLOXSTUDIO 0x00b84ff0
extern "C" __declspec(naked) void asm_00b84ff0()
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
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_00b8508b }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul esi }
	__asm { sar edx, 2 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0xaaaaaaa }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00b85041 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00b85041: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ebx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0xaaaaaaa }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_00b85078 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b84ef0 }
	__asm { L_00b85078: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b84ef0 }
	__asm { L_00b8508b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006b97e0();
extern "C" void fn_00b84ff0();
// FUNCTION: ROBLOXSTUDIO 0x00b85120
extern "C" __declspec(naked) void asm_00b85120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd428b2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { cmp ebx, ecx }
	__asm { jae L_00b85189 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, ebx }
	__asm { ja L_00b85189 }
	__asm { sub ebx, eax }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ebx }
	__asm { sar edx, 2 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00b8516f }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00b84ff0 }
	__asm { L_00b8516f: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi + edi*2] }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { lea ebx, [eax + ecx*8] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jmp L_00b851a7 }
	__asm { L_00b85189: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00b85197 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00b84ff0 }
	__asm { L_00b85197: }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { L_00b851a7: }
	__asm { test edi, edi }
	__asm { je L_00b851d5 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov dword ptr [edi], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00b851bd }
	__asm { push 0 }
	__asm { add ecx, 4 }
	__asm { call fn_006b97e0 }
	__asm { L_00b851bd: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { L_00b851d5: }
	__asm { add dword ptr [esi + 4], 0x18 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0040c260();
extern "C" void fn_0067a690();
extern "C" void fn_00789f50();
extern "C" void fn_0092d610();
extern "C" void fn_0092f890();
extern "C" void fn_00b861e0();
// FUNCTION: ROBLOXSTUDIO 0x00b860b0
extern "C" __declspec(naked) void asm_00b860b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x88] }
	__asm { add eax, 0xde }
	__asm { push eax }
	__asm { push 0xed36a0 }
	__asm { call fn_0067a690 }
	__asm { mov eax, dword ptr [esi + 0x88] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { sub esp, 0x20 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov edi, esp }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0x8d9bb0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00b86132 }
	__asm { lea ecx, [edi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00b86126 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_00b86126: }
	__asm { mov eax, 0xed372c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [edi], eax }
	__asm { jmp L_00b86138 }
	__asm { L_00b86132: }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_00b86138: }
	__asm { push 0xed36ac }
	__asm { mov ecx, esi }
	__asm { call fn_00789f50 }
	__asm { push 0xed36b4 }
	__asm { mov ecx, esi }
	__asm { call fn_0092f890 }
	__asm { mov dword ptr [esi + 0x98], eax }
	__asm { mov eax, dword ptr [esi + 0x88] }
	__asm { add eax, 0x228 }
	__asm { push eax }
	__asm { push 0xed36c4 }
	__asm { mov ecx, esi }
	__asm { call fn_0092d610 }
	__asm { push 0xed36d8 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x9c], eax }
	__asm { call fn_0092f890 }
	__asm { push 0xed36ec }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x8c], eax }
	__asm { call fn_0092f890 }
	__asm { push 0xed36fc }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x90], eax }
	__asm { call fn_0092f890 }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x94], eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b861c4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b861e0 }
	__asm { L_00b861c4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x128e6a8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00b89440();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b87260
extern "C" __declspec(naked) void asm_00b87260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b1d1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b89440 }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [ebp + 0xc], ebx }
	__asm { lea esi, [ebx + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b872d5 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { L_00b872d5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00b87f80();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b876c0
extern "C" __declspec(naked) void asm_00b876c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b221 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00b876f4: }
	__asm { cmp esi, ebx }
	__asm { je L_00b8778c }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00b87744 }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_00b8773e }
	__asm { mov dword ptr [edi], ecx }
	__asm { test cl, 1 }
	__asm { je L_00b87753 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { L_00b8773e: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { L_00b87744: }
	__asm { add edi, 0x28 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], edi }
	__asm { add esi, 0x28 }
	__asm { jmp L_00b876f4 }
	__asm { L_00b87753: }
	__asm { push 0 }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { jmp L_00b8773e }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_00b87783 }
	__asm { L_00b87773: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { call fn_00b87f80 }
	__asm { add esi, 0x28 }
	__asm { cmp esi, edi }
	__asm { jne L_00b87773 }
	__asm { L_00b87783: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00b8778c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_00b86e20();
extern "C" void fn_00b88b20();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b87ee0
extern "C" __declspec(naked) void asm_00b87ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xa0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b87f34 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00b88b20 }
	__asm { mov edi, eax }
	__asm { jmp L_00b87f36 }
	__asm { L_00b87f34: }
	__asm { xor edi, edi }
	__asm { L_00b87f36: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [esi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], edi }
	__asm { call fn_00b86e20 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00b87f67 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b87f67 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_007de8e0 }
	__asm { L_00b87f67: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b875d0();
extern "C" void fn_00b88d10();
extern "C" void fn_00b893d0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b886f0
extern "C" __declspec(naked) void asm_00b886f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b3b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x66666667 }
	__asm { imul edx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00b893d0 }
	__asm { test al, al }
	__asm { je L_00b8876d }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00b875d0 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_00b8876d: }
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
	__asm { call fn_00b88d10 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x00b889d0
extern "C" __declspec(naked) void asm_00b889d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1f468 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b88a43 }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_00b88a2c }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { jmp L_00b88a43 }
	__asm { L_00b88a2c: }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { L_00b88a43: }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00b88a6e }
	__asm { test cl, 1 }
	__asm { jne L_00b88a6e }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00b88a6e }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b88a6e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_00b873b0();
extern "C" void fn_00b876c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b89640
extern "C" __declspec(naked) void asm_00b89640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b570 }
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
	__asm { je L_00b89695 }
	__asm { cmp edi, 0x6666666 }
	__asm { ja L_00b8968f }
	__asm { lea eax, [edi + edi*4] }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00b89695 }
	__asm { L_00b8968f: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00b89695: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00b876c0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b896f3 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 4] }
	__asm { push eax }
	__asm { call fn_00b873b0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_00b896f3: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [edi + edi*4] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { pop edi }
	__asm { lea eax, [eax + eax*4] }
	__asm { lea eax, [esi + eax*8] }
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
extern "C" void fn_00b89640();
// FUNCTION: ROBLOXSTUDIO 0x00b89740
extern "C" __declspec(naked) void asm_00b89740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x66666667 }
	__asm { imul edx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_00b897db }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul esi }
	__asm { sar edx, 4 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x6666666 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00b89791 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00b89791: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ebx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x6666666 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_00b897c8 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b89640 }
	__asm { L_00b897c8: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b89640 }
	__asm { L_00b897db: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b89ee0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b8a310
extern "C" __declspec(naked) void asm_00b8a310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp edi, dword ptr [ecx] }
	__asm { jne L_00b8a33b }
	__asm { cmp eax, ecx }
	__asm { jne L_00b8a33b }
	__asm { mov ecx, ebx }
	__asm { call fn_00b89ee0 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00b8a33b: }
	__asm { cmp edi, eax }
	__asm { je L_00b8a38f }
	__asm { push esi }
	__asm { L_00b8a340: }
	__asm { mov esi, dword ptr [edi] }
	__asm { cmp edi, dword ptr [ebx] }
	__asm { je L_00b8a385 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { cmp dword ptr [edi + 0x1c], 0x10 }
	__asm { jb L_00b8a364 }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b8a364: }
	__asm { mov dword ptr [edi + 0x1c], 0xf }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi + 8], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [ebx + 4] }
	__asm { L_00b8a385: }
	__asm { mov edi, esi }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { cmp esi, eax }
	__asm { jne L_00b8a340 }
	__asm { pop esi }
	__asm { L_00b8a38f: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10338[];
extern "C" void fn_00b894c0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b8bac0
extern "C" __declspec(naked) void asm_00b8bac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10338] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { cmp dword ptr [esi + 8], eax }
	__asm { ja L_00b8bade }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00b894c0 }
	__asm { L_00b8bade: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { dec ecx }
	__asm { and dword ptr [esi + 0xc], ecx }
	__asm { add eax, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { and ecx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea edi, [ecx*4] }
	__asm { cmp dword ptr [edi + eax], 0 }
	__asm { jne L_00b8bb1a }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_00b8bb14 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00b8bb14: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + eax], ecx }
	__asm { L_00b8bb1a: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [edi + eax] }
	__asm { pop edi }
	__asm { test edx, edx }
	__asm { je L_00b8bb3e }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { L_00b8bb3e: }
	__asm { inc dword ptr [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00869390();
extern "C" void fn_00b89740();
// FUNCTION: ROBLOXSTUDIO 0x00b8bb50
extern "C" __declspec(naked) void asm_00b8bb50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd428b2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { jae L_00b8bbbd }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_00b8bbbd }
	__asm { sub edi, eax }
	__asm { mov eax, 0x66666667 }
	__asm { imul edi }
	__asm { sar edx, 4 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00b8bb9e }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00b89740 }
	__asm { L_00b8bb9e: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi + edi*4] }
	__asm { lea eax, [eax + ecx*8] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b8bbe5 }
	__asm { push eax }
	__asm { jmp L_00b8bbe0 }
	__asm { L_00b8bbbd: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00b8bbcb }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00b89740 }
	__asm { L_00b8bbcb: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00b8bbe5 }
	__asm { push edi }
	__asm { L_00b8bbe0: }
	__asm { call fn_00869390 }
	__asm { L_00b8bbe5: }
	__asm { add dword ptr [esi + 4], 0x28 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00b8c2b0
extern "C" __declspec(naked) void asm_00b8c2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00b8c349 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { jne L_00b8c2fe }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8c2e9 }
	__asm { push 0x30 }
	__asm { push 0xed3ab8 }
	__asm { push 0xed3cec }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c2fe }
	__asm { L_00b8c2e9: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed3cf8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c2fe: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b8c340 }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { je L_00b8c340 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8c32b }
	__asm { push 0x31 }
	__asm { push 0xed3ab8 }
	__asm { push 0xed3d4c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c340 }
	__asm { L_00b8c32b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed3d60 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c340: }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b8c349: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00b8c360
extern "C" __declspec(naked) void asm_00b8c360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00b8c485 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { jne L_00b8c3ae }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8c399 }
	__asm { push 0x40 }
	__asm { push 0xed3ab8 }
	__asm { push 0xed3cec }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c3ae }
	__asm { L_00b8c399: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed3ef8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c3ae: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b8c47c }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jne L_00b8c3f4 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8c3df }
	__asm { push 0x41 }
	__asm { push 0xed3ab8 }
	__asm { push 0xe78b60 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c3f4 }
	__asm { L_00b8c3df: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed3f50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c3f4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b8c47c }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_00b8c438 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8c423 }
	__asm { push 0x42 }
	__asm { push 0xed3ab8 }
	__asm { push 0xed3fac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c438 }
	__asm { L_00b8c423: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed3fd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c438: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b8c47c }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp dword ptr [eax + 8], edi }
	__asm { je L_00b8c47c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8c467 }
	__asm { push 0x43 }
	__asm { push 0xed3ab8 }
	__asm { push 0xed404c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c47c }
	__asm { L_00b8c467: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed4078 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c47c: }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b8c485: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00b8c530
extern "C" __declspec(naked) void asm_00b8c530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00b8c60e }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { jne L_00b8c57e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8c569 }
	__asm { push 0x37 }
	__asm { push 0xed3ab8 }
	__asm { push 0xed3cec }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c57e }
	__asm { L_00b8c569: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed3dc0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c57e: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b8c601 }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jne L_00b8c5c0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8c5ab }
	__asm { push 0x38 }
	__asm { push 0xed3ab8 }
	__asm { push 0xe78b60 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c5c0 }
	__asm { L_00b8c5ab: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed3e18 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c5c0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b8c601 }
	__asm { cmp dword ptr [esi + 4], edi }
	__asm { je L_00b8c601 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8c5ec }
	__asm { push 0x39 }
	__asm { push 0xed3ab8 }
	__asm { push 0xed3e74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c601 }
	__asm { L_00b8c5ec: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed3e90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c601: }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b8c60e: }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00b8c620
extern "C" __declspec(naked) void asm_00b8c620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00b8c738 }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jne L_00b8c66c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8c657 }
	__asm { push 0x49 }
	__asm { push 0xed3ab8 }
	__asm { push 0xe78b60 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c66c }
	__asm { L_00b8c657: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed40f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c66c: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b8c738 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { jne L_00b8c6b4 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8c69f }
	__asm { push 0x4a }
	__asm { push 0xed3ab8 }
	__asm { push 0xed3cec }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c6b4 }
	__asm { L_00b8c69f: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed4150 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c6b4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b8c737 }
	__asm { cmp edi, dword ptr [esi + 4] }
	__asm { je L_00b8c6f5 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8c6e0 }
	__asm { push 0x4b }
	__asm { push 0xed3ab8 }
	__asm { push 0xed41a4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c6f5 }
	__asm { L_00b8c6e0: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed41c0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c6f5: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b8c737 }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { jne L_00b8c737 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8c722 }
	__asm { push 0x4c }
	__asm { push 0xed3ab8 }
	__asm { push 0xed4224 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c737 }
	__asm { L_00b8c722: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed4240 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c737: }
	__asm { pop edi }
	__asm { L_00b8c738: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00aefd90();
// FUNCTION: ROBLOXSTUDIO 0x00b8ca20
extern "C" __declspec(naked) void asm_00b8ca20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b958 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xed457c }
	__asm { mov dword ptr [esi + 0x1c], 0xed45c8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00b8cae1 }
	__asm { cmp dword ptr [esi + 0xbc], 0 }
	__asm { je L_00b8ca9c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8ca87 }
	__asm { push 0x2a }
	__asm { push 0xed45e0 }
	__asm { push 0xed4620 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8ca9c }
	__asm { L_00b8ca87: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed4638 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8ca9c: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b8cae1 }
	__asm { cmp dword ptr [esi + 0x94], 0 }
	__asm { je L_00b8cae1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8cacc }
	__asm { push 0x2b }
	__asm { push 0xed45e0 }
	__asm { push 0xed469c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8cae1 }
	__asm { L_00b8cacc: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed46b0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8cae1: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00aefd90 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00914100();
// FUNCTION: ROBLOXSTUDIO 0x00b8ccc0
extern "C" __declspec(naked) void asm_00b8ccc0()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { je L_00b8cd60 }
	__asm { mov eax, dword ptr [ebx + 0xb8] }
	__asm { cmp eax, dword ptr [ebx + 0x94] }
	__asm { jle L_00b8cd16 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8cd01 }
	__asm { push 0x9d }
	__asm { push 0xed45e0 }
	__asm { push 0xed48cc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8cd16 }
	__asm { L_00b8cd01: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed48f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8cd16: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b8cd60 }
	__asm { mov ecx, ebx }
	__asm { call fn_00914100 }
	__asm { test al, al }
	__asm { jne L_00b8cd60 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8cd4b }
	__asm { push 0x9e }
	__asm { push 0xed45e0 }
	__asm { push 0xed3af8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8cd60 }
	__asm { L_00b8cd4b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed4970 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8cd60: }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [ebx + 0xb8], edi }
	__asm { jle L_00b8cdcd }
	__asm { lea esi, [ebx + 0xbc] }
	__asm { L_00b8cd70: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b8cdb4 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00b8cdb4 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8cd9f }
	__asm { push 0xa4 }
	__asm { push 0xed45e0 }
	__asm { push 0xed47e8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8cdb4 }
	__asm { L_00b8cd9f: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed49d0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8cdb4: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00b8cdd3 }
	__asm { inc edi }
	__asm { add esi, 4 }
	__asm { cmp edi, dword ptr [ebx + 0xb8] }
	__asm { jl L_00b8cd70 }
	__asm { L_00b8cdcd: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_00b8cdd3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b53cd0();
extern "C" void fn_00b8c1b0();
extern "C" void fn_00b8cde0();
// FUNCTION: ROBLOXSTUDIO 0x00b8f070
extern "C" __declspec(naked) void asm_00b8f070()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00b8f109 }
	__asm { call fn_00b8c1b0 }
	__asm { test eax, eax }
	__asm { jne L_00b8f0bf }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8f0aa }
	__asm { push 0x120 }
	__asm { push 0xed4c08 }
	__asm { push 0xea8614 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8f0bf }
	__asm { L_00b8f0aa: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed4de0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8f0bf: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b8f109 }
	__asm { cmp dword ptr [esi + 0xd0], 0 }
	__asm { jne L_00b8f109 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b8f0f8 }
	__asm { push 0x122 }
	__asm { push 0xed4c08 }
	__asm { push 0xed4e3c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8f109 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b8f0f8: }
	__asm { movzx eax, al }
	__asm { push 0xed4e50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8f109: }
	__asm { push dword ptr [esi + 0xd0] }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c1b0 }
	__asm { mov ecx, eax }
	__asm { call fn_00b53cd0 }
	__asm { mov ecx, dword ptr [esi + 0xd0] }
	__asm { test ecx, ecx }
	__asm { je L_00b8f12e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00b8f12e: }
	__asm { mov dword ptr [esi + 0xd0], 0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b8f182 }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c1b0 }
	__asm { test eax, eax }
	__asm { jne L_00b8f182 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8f16d }
	__asm { push 0xbc }
	__asm { push 0xed4c08 }
	__asm { push 0xea8614 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8f182 }
	__asm { L_00b8f16d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed4ca0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8f182: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_00b8cde0 }
}

extern "C" char g_0130ef88[];
extern "C" void fn_00407e90();
extern "C" void fn_00aefa00();
extern "C" void fn_00b5e4a0();
extern "C" void fn_00b8f570();
// FUNCTION: ROBLOXSTUDIO 0x00b8f460
extern "C" __declspec(naked) void asm_00b8f460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b91b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00aefa00 }
	__asm { push 0xd0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xed4f2c }
	__asm { mov dword ptr [esi + 0x1c], 0xed4f78 }
	__asm { call fn_00b8f570 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00b8f50c }
	__asm { mov ecx, edi }
	__asm { call fn_00b5e4a0 }
	__asm { cmp byte ptr [g_0130ef88], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { jne L_00b8f4fa }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp - 0x10], 0x130ef84 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp - 0x10], 0xb8f7c0 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130ef88], 1 }
	__asm { L_00b8f4fa: }
	__asm { mov dword ptr [edi], 0xed4f94 }
	__asm { mov dword ptr [edi + 0xcc], 0 }
	__asm { jmp L_00b8f50e }
	__asm { L_00b8f50c: }
	__asm { xor edi, edi }
	__asm { L_00b8f50e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x94], edi }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { mov dword ptr [esi + 0x9c], 0 }
	__asm { mov dword ptr [esi + 0xa0], 0x3f800000 }
	__asm { mov dword ptr [esi + 0xa4], 0 }
	__asm { mov dword ptr [esi + 0xa8], 0 }
	__asm { mov dword ptr [esi + 0xac], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00aefa00();
extern "C" void fn_00b8fad0();
extern "C" void fn_00b8fc80();
// FUNCTION: ROBLOXSTUDIO 0x00b8fb60
extern "C" __declspec(naked) void asm_00b8fb60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b943 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00aefa00 }
	__asm { push 0xfc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xed50ec }
	__asm { mov dword ptr [esi + 0x1c], 0xed5138 }
	__asm { call fn_00b8fc80 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00b8fbbb }
	__asm { mov ecx, eax }
	__asm { call fn_00b8fad0 }
	__asm { jmp L_00b8fbbd }
	__asm { L_00b8fbbb: }
	__asm { xor eax, eax }
	__asm { L_00b8fbbd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x94], eax }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { mov dword ptr [esi + 0x9c], 0 }
	__asm { mov dword ptr [esi + 0xa0], 0 }
	__asm { mov dword ptr [esi + 0xa4], 0 }
	__asm { mov dword ptr [esi + 0xa8], 0 }
	__asm { mov dword ptr [esi + 0xac], 0 }
	__asm { mov dword ptr [esi + 0xb0], 0x3f800000 }
	__asm { mov dword ptr [esi + 0xb4], 0 }
	__asm { mov dword ptr [esi + 0xb8], 0 }
	__asm { mov dword ptr [esi + 0xbc], 0 }
	__asm { mov dword ptr [esi + 0xc0], 0 }
	__asm { mov dword ptr [esi + 0xc4], 0 }
	__asm { mov dword ptr [esi + 0xc8], 0 }
	__asm { mov dword ptr [esi + 0xcc], 0 }
	__asm { mov dword ptr [esi + 0xd0], 0 }
	__asm { mov dword ptr [esi + 0xd4], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038044[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006d19a0();
extern "C" void fn_006d5000();
extern "C" void fn_006ddf90();
extern "C" void fn_00b902d0();
// FUNCTION: ROBLOXSTUDIO 0x00b90360
extern "C" __declspec(naked) void asm_00b90360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x60 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00b903b0 }
	__asm { cmp dword ptr [esi + 0x94], 0 }
	__asm { jne L_00b903b0 }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00b9039f }
	__asm { push 0x34 }
	__asm { push 0xed5228 }
	__asm { push 0xed5088 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b903b0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b9039f: }
	__asm { movzx eax, al }
	__asm { push 0xed52f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b903b0: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { fld dword ptr [g_01038044] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { fstp dword ptr [esp] }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_006ddf90 }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_006d5000 }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { push eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x94] }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { call fn_00b902d0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x00b91e60
extern "C" __declspec(naked) void asm_00b91e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b91eab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00b91eab: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00b91efe }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xed5794 }
	__asm { mov dword ptr [esi + 8], 0xed57a4 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xed57ac }
	__asm { mov dword ptr [esi + 8], 0xed57bc }
	__asm { jmp L_00b91f00 }
	__asm { L_00b91efe: }
	__asm { xor esi, esi }
	__asm { L_00b91f00: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00b91f1d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00b91f1d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004033d0();
extern "C" void fn_004186a0();
extern "C" void fn_00933cc0();
extern "C" void fn_00b92500();
extern "C" void fn_00b92870();
// FUNCTION: ROBLOXSTUDIO 0x00b92300
extern "C" __declspec(naked) void asm_00b92300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x30], 0 }
	__asm { je L_00b92377 }
	__asm { push 0x13000f4 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_00933cc0 }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { add esp, 0x10 }
	__asm { test ecx, ecx }
	__asm { je L_00b92377 }
	__asm { cmp eax, ecx }
	__asm { je L_00b92377 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004186a0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { L_00b92377: }
	__asm { movzx eax, byte ptr [esi + 0x54] }
	__asm { push eax }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00b92500 }
	__asm { mov ecx, esi }
	__asm { push ebx }
	__asm { call fn_00b92870 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b93130();
extern "C" void fn_00b9e010();
extern "C" void fn_00c0a720();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b94480
extern "C" __declspec(naked) void asm_00b94480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x134 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b94503 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00c0a720 }
	__asm { mov dword ptr [esi], 0xed65ac }
	__asm { mov dword ptr [esi + 4], 0xed6620 }
	__asm { mov dword ptr [esi + 0x1c], 0xed6654 }
	__asm { mov dword ptr [esi + 0x128], 0 }
	__asm { mov dword ptr [esi + 0x12c], 0 }
	__asm { mov dword ptr [esi + 0x130], 0 }
	__asm { jmp L_00b94505 }
	__asm { L_00b94503: }
	__asm { xor esi, esi }
	__asm { L_00b94505: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b93130 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b94536 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b94536 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b94536: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b931c0();
extern "C" void fn_00b9e010();
extern "C" void fn_00c0a720();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b94550
extern "C" __declspec(naked) void asm_00b94550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x12c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b945bf }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00c0a720 }
	__asm { mov dword ptr [esi], 0xed665c }
	__asm { mov dword ptr [esi + 4], 0xed66d0 }
	__asm { mov dword ptr [esi + 0x1c], 0xed6704 }
	__asm { mov dword ptr [esi + 0x128], 6 }
	__asm { jmp L_00b945c1 }
	__asm { L_00b945bf: }
	__asm { xor esi, esi }
	__asm { L_00b945c1: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b931c0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b945f2 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b945f2 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b945f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b47dc0();
extern "C" void fn_00b93250();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b94610
extern "C" __declspec(naked) void asm_00b94610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x4c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b94676 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00b47dc0 }
	__asm { mov dword ptr [esi], 0xed628c }
	__asm { mov dword ptr [esi + 4], 0xed62e8 }
	__asm { mov dword ptr [esi + 0x1c], 0xed631c }
	__asm { mov byte ptr [esi + 0x48], 0 }
	__asm { jmp L_00b94678 }
	__asm { L_00b94676: }
	__asm { xor esi, esi }
	__asm { L_00b94678: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b93250 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b946a9 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b946a9 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b946a9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b932e0();
extern "C" void fn_00b9e010();
extern "C" void fn_00c06290();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b946c0
extern "C" __declspec(naked) void asm_00b946c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x98 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b94725 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00c06290 }
	__asm { mov dword ptr [esi], 0xed63bc }
	__asm { mov dword ptr [esi + 4], 0xed6420 }
	__asm { mov dword ptr [esi + 0x1c], 0xed6454 }
	__asm { jmp L_00b94727 }
	__asm { L_00b94725: }
	__asm { xor esi, esi }
	__asm { L_00b94727: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b932e0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b94758 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b94758 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b94758: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b93370();
extern "C" void fn_00b9e010();
extern "C" void fn_00c057d0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b94770
extern "C" __declspec(naked) void asm_00b94770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x48 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b947be }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_00c057d0 }
	__asm { mov esi, eax }
	__asm { jmp L_00b947c0 }
	__asm { L_00b947be: }
	__asm { xor esi, esi }
	__asm { L_00b947c0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b93370 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b947f1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b947f1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b947f1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0093cce0();
extern "C" void fn_00b93400();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b94810
extern "C" __declspec(naked) void asm_00b94810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x48 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b94872 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_0093cce0 }
	__asm { mov dword ptr [esi], 0xed5b84 }
	__asm { mov dword ptr [esi + 4], 0xed5be0 }
	__asm { mov dword ptr [esi + 0x1c], 0xed5c14 }
	__asm { jmp L_00b94874 }
	__asm { L_00b94872: }
	__asm { xor esi, esi }
	__asm { L_00b94874: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b93400 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b948a5 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b948a5 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b948a5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0097f630();
extern "C" void fn_00b93490();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b948c0
extern "C" __declspec(naked) void asm_00b948c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x6c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b94922 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_0097f630 }
	__asm { mov dword ptr [esi], 0xed5cd4 }
	__asm { mov dword ptr [esi + 4], 0xed5d34 }
	__asm { mov dword ptr [esi + 0x1c], 0xed5d68 }
	__asm { jmp L_00b94924 }
	__asm { L_00b94922: }
	__asm { xor esi, esi }
	__asm { L_00b94924: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b93490 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b94955 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b94955 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b94955: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b93520();
extern "C" void fn_00b9e010();
extern "C" void fn_00c05d80();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b94970
extern "C" __declspec(naked) void asm_00b94970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x58 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b949be }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_00c05d80 }
	__asm { mov esi, eax }
	__asm { jmp L_00b949c0 }
	__asm { L_00b949be: }
	__asm { xor esi, esi }
	__asm { L_00b949c0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b93520 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b949f1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b949f1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b949f1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0097f630();
extern "C" void fn_00b935b0();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b94a10
extern "C" __declspec(naked) void asm_00b94a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x6c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b94a72 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_0097f630 }
	__asm { mov dword ptr [esi], 0xed5d7c }
	__asm { mov dword ptr [esi + 4], 0xed5ddc }
	__asm { mov dword ptr [esi + 0x1c], 0xed5e10 }
	__asm { jmp L_00b94a74 }
	__asm { L_00b94a72: }
	__asm { xor esi, esi }
	__asm { L_00b94a74: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b935b0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b94aa5 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b94aa5 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b94aa5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b93640();
extern "C" void fn_00b9e010();
extern "C" void fn_00c051c0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b94ac0
extern "C" __declspec(naked) void asm_00b94ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x58 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b94b0e }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_00c051c0 }
	__asm { mov esi, eax }
	__asm { jmp L_00b94b10 }
	__asm { L_00b94b0e: }
	__asm { xor esi, esi }
	__asm { L_00b94b10: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b93640 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b94b41 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b94b41 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b94b41: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
