// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" char g_00e10268[];
extern "C" char g_00e10388[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0041fe80();
extern "C" void fn_008523c0();
extern "C" void fn_0085d060();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0097dd80
extern "C" __declspec(naked) void asm_0097dd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3b950 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { lea eax, [edi + 0xa8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { lea esi, [edi + 0xe4] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { cmp eax, esi }
	__asm { je L_0097de0c }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10388] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { L_0097de0c: }
	__asm { cmp byte ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0097de43 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0097de43 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0097de43 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0097de43 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0097de43: }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { sub eax, dword ptr [ebp - 0x24] }
	__asm { sar eax, 3 }
	__asm { test eax, eax }
	__asm { je L_0097de77 }
	__asm { push edi }
	__asm { call fn_008523c0 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_0097de77 }
	__asm { mov esi, dword ptr [ebp - 0x24] }
	__asm { cmp esi, dword ptr [ebp - 0x20] }
	__asm { je L_0097de77 }
	__asm { L_0097de67: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0085d060 }
	__asm { add esi, 8 }
	__asm { cmp esi, dword ptr [ebp - 0x20] }
	__asm { jne L_0097de67 }
	__asm { L_0097de77: }
	__asm { cmp dword ptr [ebp - 0x24], 0 }
	__asm { pop edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { je L_0097deac }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_0097deac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c740[];
extern "C" void fn_004c88a0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009810e0
extern "C" __declspec(naked) void asm_009810e0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0098112d }
	__asm { cmp dword ptr [g_0131c740], 0x29a }
	__asm { je L_0098112d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0098111c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0098112d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0098111c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0098112d: }
	__asm { mov ecx, 0x131ec10 }
	__asm { jmp fn_004c88a0 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { fld dword ptr [ecx + 0x9c] }
	__asm { ret }
}

extern "C" void fn_007cb440();
extern "C" void fn_0086b250();
extern "C" void fn_00981610();
// FUNCTION: ROBLOXSTUDIO 0x009818b0
extern "C" __declspec(naked) void asm_009818b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3bdc0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov ebx, ecx }
	__asm { push 0x1009844 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_00981610 }
	__asm { lea edi, [ebx + 0x294] }
	__asm { mov dword ptr [ebx], 0xe88edc }
	__asm { mov dword ptr [ebx + 4], 0xe88f94 }
	__asm { mov dword ptr [ebx + 0x18], 0xe88f9c }
	__asm { mov dword ptr [ebx + 0x1c], 0xe88fa8 }
	__asm { mov dword ptr [ebx + 0x64], 0xe88fb8 }
	__asm { mov dword ptr [ebx + 0x68], 0xe88fc0 }
	__asm { mov dword ptr [ebx + 0x290], 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { lea esi, [edi + 0x1c] }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { mov dword ptr [edi + 0x60], 0 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0xe88dc4 }
	__asm { mov dword ptr [ecx + 4], 0xe88e7c }
	__asm { mov dword ptr [ecx + 0x18], 0xe88e84 }
	__asm { mov dword ptr [ecx + 0x1c], 0xe88e90 }
	__asm { mov dword ptr [ecx + 0x64], 0xe88ea0 }
	__asm { mov dword ptr [ecx + 0x68], 0xe88ea8 }
	__asm { jmp fn_0086b250 }
}
