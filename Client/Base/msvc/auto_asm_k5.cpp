// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00403070();
extern "C" void fn_004a7b30();
extern "C" void fn_004adf00();
extern "C" void fn_004b1ea0();
// FUNCTION: ROBLOXSTUDIO 0x004a7d70
extern "C" __declspec(naked) void asm_004a7d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e419 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_004a7b30 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [edi], 0 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { movzx eax, byte ptr [ecx] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { add eax, ecx }
	__asm { je L_004a7dca }
	__asm { lea ebx, [eax + 1] }
	__asm { jmp L_004a7dcc }
	__asm { L_004a7dca: }
	__asm { xor ebx, ebx }
	__asm { L_004a7dcc: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ecx + 0x14] }
	__asm { cmp edx, 0x10 }
	__asm { jb L_004a7ddb }
	__asm { mov esi, dword ptr [ecx] }
	__asm { jmp L_004a7ddd }
	__asm { L_004a7ddb: }
	__asm { mov esi, ecx }
	__asm { L_004a7ddd: }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { add eax, esi }
	__asm { cmp edx, 0x10 }
	__asm { jb L_004a7deb }
	__asm { mov edx, dword ptr [ecx] }
	__asm { jmp L_004a7ded }
	__asm { L_004a7deb: }
	__asm { mov edx, ecx }
	__asm { L_004a7ded: }
	__asm { push ebx }
	__asm { push ecx }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_00403070 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_004b1ea0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_004a7e18 }
	__asm { add ecx, 0x18 }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_004adf00 }
	__asm { L_004a7e18: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004038a0();
extern "C" void fn_004ae8f0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x004a7f30
extern "C" __declspec(naked) void asm_004a7f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7ec10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { push 9 }
	__asm { mov esi, ecx }
	__asm { push 0x1016cb8 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x2c], 0xf }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { mov byte ptr [esp + 0x18], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x3c], 0 }
	__asm { call fn_004ae8f0 }
	__asm { mov byte ptr [esp + 0x34], 2 }
	__asm { cmp dword ptr [esp + 0x24], 0x10 }
	__asm { jb L_004a7fa8 }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004a7fa8: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [esp + 0x24], 0xf }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { mov byte ptr [esp + 0x10], 0 }
	__asm { test al, al }
	__asm { je L_004a8005 }
	__asm { cmp byte ptr [esp + 8], 0 }
	__asm { jne L_004a800c }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004a7ff4 }
	__asm { push 0x111 }
	__asm { push 0x1016a78 }
	__asm { push 0x1016cac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004a8005 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004a7ff4: }
	__asm { movzx eax, al }
	__asm { push 0x1016ce0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004a8005: }
	__asm { cmp byte ptr [esp + 8], 0 }
	__asm { je L_004a8020 }
	__asm { L_004a800c: }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004a8020: }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { or eax, 0xffffffff }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_004aea70();
// FUNCTION: ROBLOXSTUDIO 0x004a80d0
extern "C" __declspec(naked) void asm_004a80d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e3e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x58 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0xf }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov byte ptr [ebp - 0x44], 0 }
	__asm { call fn_004038a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 4 }
	__asm { push 0x100a8ac }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004aea70 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp byte ptr [eax], 0 }
	__asm { je L_004a8160 }
	__asm { add eax, 4 }
	__asm { jmp L_004a8163 }
	__asm { L_004a8160: }
	__asm { lea eax, [ebp - 0x44] }
	__asm { L_004a8163: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { cmp byte ptr [ebp - 0x60], 0 }
	__asm { mov edi, dword ptr [g_00e10508] }
	__asm { je L_004a81b3 }
	__asm { cmp dword ptr [ebp - 0x48], 0x10 }
	__asm { jb L_004a819d }
	__asm { push dword ptr [ebp - 0x5c] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_004a819d: }
	__asm { mov dword ptr [ebp - 0x48], 0xf }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov byte ptr [ebp - 0x5c], 0 }
	__asm { mov byte ptr [ebp - 0x60], 0 }
	__asm { L_004a81b3: }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_004a81c1 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_004a81c1: }
	__asm { cmp dword ptr [ebp - 0x30], 0x10 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { jb L_004a81e1 }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_004a81e1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" void fn_004a9690();
extern "C" void fn_004ad920();
extern "C" void fn_004b1850();
extern "C" void fn_006bc960();
// FUNCTION: ROBLOXSTUDIO 0x004a8200
extern "C" __declspec(naked) void asm_004a8200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e570 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ebx, edx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push 0x48 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { test edi, edi }
	__asm { je L_004a8289 }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push 1 }
	__asm { lea ecx, [edi + 0x10] }
	__asm { mov dword ptr [edi + 8], ebx }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { call fn_006bc960 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { jmp L_004a828b }
	__asm { L_004a8289: }
	__asm { xor edi, edi }
	__asm { L_004a828b: }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [esi], edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { push eax }
	__asm { mov edx, edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_004b1850 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { add ecx, 0x18 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_004ad920 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 1 }
	__asm { call fn_004a9690 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_004a82ed }
	__asm { test al, 1 }
	__asm { jne L_004a82ed }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004a82ed }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004a82ed: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_01319eb9[];
extern "C" char g_01319eba[];
extern "C" void fn_00402150();
extern "C" void fn_00421e70();
extern "C" void fn_00427900();
extern "C" void fn_004a6d70();
extern "C" void fn_004aece0();
extern "C" void fn_004aedf0();
extern "C" void fn_0077b020();
// FUNCTION: ROBLOXSTUDIO 0x004a9690
extern "C" __declspec(naked) void asm_004a9690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7ebc0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x70 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebx + 8] }
	__asm { push dword ptr [ebx + 0xc] }
	__asm { add edx, 0x30 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { call fn_004a6d70 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x2c] }
	__asm { mov dword ptr [esp + 0x88], 0 }
	__asm { call fn_00427900 }
	__asm { mov byte ptr [esp + 0x84], 2 }
	__asm { cmp dword ptr [esp + 0x24], 0x10 }
	__asm { jb L_004a96fc }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004a96fc: }
	__asm { push 0 }
	__asm { sub esp, 0x20 }
	__asm { mov edi, esp }
	__asm { sub esp, 0x14 }
	__asm { mov esi, esp }
	__asm { sub esp, 8 }
	__asm { mov ecx, ebx }
	__asm { push esp }
	__asm { mov dword ptr [esp + 0x68], 0xf }
	__asm { mov dword ptr [esp + 0x64], 0 }
	__asm { mov byte ptr [esp + 0x54], 0 }
	__asm { mov byte ptr [esp + 0xb8], 1 }
	__asm { call fn_00421e70 }
	__asm { movzx eax, byte ptr [g_01319eb9] }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_01319eba] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_004aece0 }
	__asm { add esp, 0x14 }
	__asm { mov ecx, edi }
	__asm { call fn_004aedf0 }
	__asm { lea ecx, [esp + 0x4c] }
	__asm { call fn_0077b020 }
	__asm { lea ecx, [esp + 0x28] }
	__asm { call fn_00402150 }
	__asm { mov ecx, dword ptr [esp + 0x7c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11b50[];
extern "C" void fn_004a95e0();
extern "C" void fn_004b0c80();
extern "C" void fn_004b0d70();
// FUNCTION: ROBLOXSTUDIO 0x004aa5c0
extern "C" __declspec(naked) void asm_004aa5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7de0f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea ecx, [edi + 0x50] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_004a95e0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [edi + 0x4c] }
	__asm { test ecx, ecx }
	__asm { je L_004aa62a }
	__asm { cmp dword ptr [edi + 0x40], 0 }
	__asm { je L_004aa610 }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { push ecx }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { call fn_004b0d70 }
	__asm { L_004aa610: }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { L_004aa62a: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [edi + 0x34] }
	__asm { test ecx, ecx }
	__asm { je L_004aa665 }
	__asm { cmp dword ptr [edi + 0x28], 0 }
	__asm { je L_004aa64b }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { push ecx }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_004b0c80 }
	__asm { L_004aa64b: }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { L_004aa665: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11b50] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10c8c[];
extern "C" char g_01319eb9[];
extern "C" char g_01319eba[];
extern "C" void fn_00402150();
extern "C" void fn_004038a0();
extern "C" void fn_00427900();
extern "C" void fn_004a6d70();
extern "C" void fn_004af030();
extern "C" void fn_004af0f0();
extern "C" void fn_0077b020();
// FUNCTION: ROBLOXSTUDIO 0x004aab00
extern "C" __declspec(naked) void asm_004aab00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e6eb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x8c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { cmp ebx, dword ptr [eax + 0x18] }
	__asm { je L_004aac22 }
	__asm { push 0x45 }
	__asm { push 0x1017590 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { push ebx }
	__asm { push -1 }
	__asm { lea edx, [ebp - 0x2c] }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a6d70 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x94] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00427900 }
	__asm { cmp dword ptr [ebp - 0x30], 0x10 }
	__asm { mov esi, dword ptr [g_00e10508] }
	__asm { jb L_004aab8f }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_004aab8f: }
	__asm { mov dword ptr [ebp - 0x30], 0xf }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov byte ptr [ebp - 0x44], 0 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_004aabb3 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_004aabb3: }
	__asm { movzx eax, byte ptr [g_01319eb9] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push 0 }
	__asm { sub esp, 0x20 }
	__asm { mov edi, esp }
	__asm { sub esp, 0x14 }
	__asm { mov esi, esp }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_01319eba] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push dword ptr [ecx + 0x1c] }
	__asm { mov byte ptr [ebp - 0x48], 1 }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [eax], ecx }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { call fn_004af030 }
	__asm { add esp, 0x14 }
	__asm { mov ecx, edi }
	__asm { call fn_004af0f0 }
	__asm { lea ecx, [ebp - 0x94] }
	__asm { call fn_0077b020 }
	__asm { lea ecx, [ebp - 0x94] }
	__asm { call fn_00402150 }
	__asm { L_004aac22: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10c88[];
extern "C" char g_00e10fb8[];
extern "C" void fn_004a7b30();
// FUNCTION: ROBLOXSTUDIO 0x004ac3b0
extern "C" __declspec(naked) void asm_004ac3b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e148 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_004ac46e }
	__asm { mov ecx, dword ptr [eax + 0x1c] }
	__asm { cmp ecx, dword ptr [ebp + 0xc] }
	__asm { jne L_004ac46e }
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
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x1007d5c }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { push 0x1007d5c }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { push 2 }
	__asm { push 0x10178f4 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { test esi, esi }
	__asm { jne L_004ac46e }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea ecx, [ecx + 0x50] }
	__asm { call fn_004a7b30 }
	__asm { push esi }
	__asm { push esi }
	__asm { push esi }
	__asm { push esi }
	__asm { push esi }
	__asm { push esi }
	__asm { push esi }
	__asm { push esi }
	__asm { push esi }
	__asm { push esi }
	__asm { push esi }
	__asm { push esi }
	__asm { push esi }
	__asm { push esi }
	__asm { push esi }
	__asm { push esi }
	__asm { push esi }
	__asm { push esi }
	__asm { push 0x1007d5c }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push 2 }
	__asm { push 0x10178d8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { L_004ac46e: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10c88] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10fc0[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11afc[];
extern "C" char g_00e11b0c[];
extern "C" char g_00e11b20[];
extern "C" char g_00e11b28[];
extern "C" char g_00e12c94[];
extern "C" void fn_004afe10();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004ac690
extern "C" __declspec(naked) void asm_004ac690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e59e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x20] }
	__asm { call fn_004afe10 }
	__asm { push 8 }
	__asm { lea esi, [eax + 8] }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_004ac6eb }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11b28] }
	__asm { mov dword ptr [edi], 0x10164a4 }
	__asm { jmp L_004ac6ed }
	__asm { L_004ac6eb: }
	__asm { xor edi, edi }
	__asm { L_004ac6ed: }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11b20] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call dword ptr [g_00e11afc] }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [g_00e10ffc] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call dword ptr [g_00e10fc0] }
	__asm { push 0x21 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0x12cc9a0 }
	__asm { push 0x12c56b0 }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e12c94] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11b0c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11110[];
extern "C" char g_01320164[];
extern "C" char g_01320184[];
extern "C" void fn_004eed60();
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004ac7a0
extern "C" __declspec(naked) void asm_004ac7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e665 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_004ac7ec }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_004ac7ec: }
	__asm { mov ecx, dword ptr [g_01320184] }
	__asm { call fn_004eed60 }
	__asm { mov ecx, dword ptr [g_01320164] }
	__asm { mov esi, eax }
	__asm { test cl, 1 }
	__asm { jne L_004ac827 }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [g_01320164], ecx }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_004ac827: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { lea edx, [ebp + 8] }
	__asm { lea ecx, [esi + 8] }
	__asm { push edx }
	__asm { push dword ptr [g_01320184] }
	__asm { call dword ptr [eax] }
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

extern "C" char g_00e10508[];
extern "C" char g_00e110bc[];
extern "C" void fn_004a6d70();
extern "C" void fn_004ac7a0();
extern "C" void fn_004afe10();
extern "C" void fn_004b1650();
// FUNCTION: ROBLOXSTUDIO 0x004aca90
extern "C" __declspec(naked) void asm_004aca90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7e4f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x1c], eax }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { push 0x131c5dc }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 0x10], 0x774920 }
	__asm { mov dword ptr [esp + 0x14], 0x1003b2c }
	__asm { mov dword ptr [esp + 0x18], 0x1016720 }
	__asm { mov dword ptr [esp + 0x1c], 0x10179b4 }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { call fn_004b1650 }
	__asm { add esp, 8 }
	__asm { lea eax, [esp + 4] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov dword ptr [esp + 8], 1 }
	__asm { call fn_004afe10 }
	__asm { push -1 }
	__asm { push dword ptr [esi + 0x14] }
	__asm { lea edx, [eax + 0x10] }
	__asm { lea ecx, [esp + 0x28] }
	__asm { call fn_004a6d70 }
	__asm { add esp, 4 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [esp + 0x50], 0 }
	__asm { call dword ptr [g_00e110bc] }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { call fn_004ac7a0 }
	__asm { cmp dword ptr [esp + 0x34], 0x10 }
	__asm { jb L_004acb51 }
	__asm { push dword ptr [esp + 0x20] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004acb51: }
	__asm { mov ecx, dword ptr [esp + 0x3c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10fc8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11b10[];
extern "C" char g_00e11b1c[];
extern "C" char g_00e11eb4[];
extern "C" char g_00e122f4[];
extern "C" char g_00e1234c[];
// FUNCTION: ROBLOXSTUDIO 0x004acbc0
extern "C" __declspec(naked) void asm_004acbc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ec8d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0x23 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10fc8] }
	__asm { cmp eax, dword ptr [esi + 0x18] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { sete bl }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { mov ecx, edi }
	__asm { test bl, bl }
	__asm { je L_004acc76 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11b1c] }
	__asm { push 0x1017a2c }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e1234c] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { push 0x4b }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call dword ptr [g_00e11eb4] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11b10] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { jmp L_004acccd }
	__asm { L_004acc76: }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11b1c] }
	__asm { push 0x1017a1c }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e1234c] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e11110] }
	__asm { push 0x32 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call dword ptr [g_00e11eb4] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11b10] }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { L_004acccd: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e122f4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10b74[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11b00[];
extern "C" char g_00e12c94[];
extern "C" void fn_00426fa0();
extern "C" void fn_004af8c0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004ad7c0
extern "C" __declspec(naked) void asm_004ad7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7e171 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push 0 }
	__asm { push 0x12cc9a0 }
	__asm { push 0x12c56b0 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e12c94] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e11b00] }
	__asm { test eax, eax }
	__asm { je L_004ad87a }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 0x22 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 4] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10b74] }
	__asm { test al, al }
	__asm { jne L_004ad86a }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_004af8c0 }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00426fa0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 0x44] }
	__asm { test eax, eax }
	__asm { je L_004ad86a }
	__asm { test al, 1 }
	__asm { jne L_004ad863 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004ad863 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004ad863: }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { L_004ad86a: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { L_004ad87a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004addd0();
extern "C" void fn_004b38e0();
// FUNCTION: ROBLOXSTUDIO 0x004ada00
extern "C" __declspec(naked) void asm_004ada00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd777a2 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { jae L_004ada6e }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_004ada6e }
	__asm { sub edi, eax }
	__asm { mov eax, 0x66666667 }
	__asm { imul edi }
	__asm { sar edx, 4 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_004ada4f }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_004addd0 }
	__asm { L_004ada4f: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi + edi*4] }
	__asm { lea eax, [eax + ecx*8] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_004ada95 }
	__asm { push eax }
	__asm { jmp L_004ada90 }
	__asm { L_004ada6e: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_004ada7b }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_004addd0 }
	__asm { L_004ada7b: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_004ada95 }
	__asm { push edi }
	__asm { L_004ada90: }
	__asm { call fn_004b38e0 }
	__asm { L_004ada95: }
	__asm { add dword ptr [esi + 4], 0x28 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004ae050();
// FUNCTION: ROBLOXSTUDIO 0x004adc90
extern "C" __declspec(naked) void asm_004adc90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7de28 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp edi, esi }
	__asm { je L_004add11 }
	__asm { mov dword ptr [esp + 8], 0 }
	__asm { push esi }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x38], 0 }
	__asm { call fn_004ae050 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_004ae050 }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004ae050 }
	__asm { mov dword ptr [esp + 0x34], 0xffffffff }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { test eax, eax }
	__asm { je L_004add11 }
	__asm { test al, 1 }
	__asm { jne L_004add11 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004add11 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004add11: }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_004ae150();
// FUNCTION: ROBLOXSTUDIO 0x004addd0
extern "C" __declspec(naked) void asm_004addd0()
{
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 8] }
	__asm { mov edx, edi }
	__asm { sub edx, esi }
	__asm { mov eax, 0x66666667 }
	__asm { imul edx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { jae L_004ade5f }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul esi }
	__asm { sar edx, 4 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { mov ebx, 0x6666666 }
	__asm { add esi, edx }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, 1 }
	__asm { jae L_004ade20 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_004ade20: }
	__asm { sub edi, dword ptr [ecx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul edi }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { sub ebx, edx }
	__asm { inc esi }
	__asm { cmp ebx, eax }
	__asm { jae L_004ade52 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { cmovb eax, esi }
	__asm { push eax }
	__asm { call fn_004ae150 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ecx }
	__asm { ret 4 }
	__asm { L_004ade52: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { cmovb eax, esi }
	__asm { push eax }
	__asm { call fn_004ae150 }
	__asm { L_004ade5f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ecx }
	__asm { ret 4 }
}

extern "C" void fn_004ae050();
// FUNCTION: ROBLOXSTUDIO 0x004ade70
extern "C" __declspec(naked) void asm_004ade70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7ec48 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp edi, esi }
	__asm { je L_004adee7 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004ae050 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_004ae050 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004ae050 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { test eax, eax }
	__asm { je L_004adee7 }
	__asm { test al, 1 }
	__asm { jne L_004adee7 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004adee7 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004adee7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x004adf00
extern "C" __declspec(naked) void asm_004adf00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6f971 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov al, byte ptr [edi] }
	__asm { test al, al }
	__asm { je L_004adf7f }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { add edi, 8 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [edi - 4], eax }
	__asm { lea esi, [edx + 4] }
	__asm { cmp esi, edi }
	__asm { je L_004adfc3 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_004adf53 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_004adf53: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_004adfc3 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [edi], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004adf7f: }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_004adfc0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { test ecx, ecx }
	__asm { je L_004adfb9 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea eax, [ebx + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_004adfb9: }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop ebx }
	__asm { L_004adfc0: }
	__asm { mov byte ptr [edi], 1 }
	__asm { L_004adfc3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004ae050
extern "C" __declspec(naked) void asm_004ae050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e5d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp edi, esi }
	__asm { je L_004ae124 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_004ae0ff }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_004ae0d2 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004ae0d2: }
	__asm { lea eax, [esi + 8] }
	__asm { push 1 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004ae0ff: }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_004ae124 }
	__asm { test al, 1 }
	__asm { jne L_004ae11e }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004ae11e }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004ae11e: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_004ae124: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" void fn_004a95e0();
extern "C" void fn_004b3400();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004ae150
extern "C" __declspec(naked) void asm_004ae150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7df80 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { test ebx, ebx }
	__asm { je L_004ae1a9 }
	__asm { cmp ebx, 0x6666666 }
	__asm { ja L_004ae1a3 }
	__asm { lea eax, [ebx + ebx*4] }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { test edi, edi }
	__asm { jne L_004ae1a9 }
	__asm { L_004ae1a3: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_004ae1a9: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { call fn_004b3400 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, eax }
	__asm { sub ecx, esi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { test esi, esi }
	__asm { je L_004ae216 }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { je L_004ae203 }
	__asm { L_004ae1f4: }
	__asm { mov ecx, esi }
	__asm { call fn_004a95e0 }
	__asm { add esi, 0x28 }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { jne L_004ae1f4 }
	__asm { L_004ae203: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { add esp, 4 }
	__asm { jmp L_004ae219 }
	__asm { L_004ae216: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_004ae219: }
	__asm { lea eax, [ebx + ebx*4] }
	__asm { mov dword ptr [esi], edi }
	__asm { lea eax, [edi + eax*8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { lea eax, [ecx + ecx*4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [edi + eax*8] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" void fn_004b1d30();
extern "C" void fn_004b34d0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004ae260
extern "C" __declspec(naked) void asm_004ae260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7df70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test ebx, ebx }
	__asm { je L_004ae2b7 }
	__asm { cmp ebx, 0x1fffffff }
	__asm { ja L_004ae2b1 }
	__asm { lea eax, [ebx*8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_004ae2b7 }
	__asm { L_004ae2b1: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_004ae2b7: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { call fn_004b34d0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, edx }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test ecx, ecx }
	__asm { je L_004ae300 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { call fn_004b1d30 }
	__asm { push dword ptr [edi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 0xc }
	__asm { L_004ae300: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + ebx*8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10524[];
extern "C" void fn_004a7d70();
extern "C" void fn_004b2ab0();
// FUNCTION: ROBLOXSTUDIO 0x004ae8f0
extern "C" __declspec(naked) void asm_004ae8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d9a1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_004a7d70 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov al, byte ptr [ebp - 0x58] }
	__asm { test al, al }
	__asm { je L_004ae94d }
	__asm { mov eax, dword ptr [ebp - 0x54] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be4a4 }
	__asm { je L_004ae988 }
	__asm { push eax }
	__asm { mov ecx, 0x12be4a4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_004ae988 }
	__asm { mov al, byte ptr [ebp - 0x58] }
	__asm { L_004ae94d: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { test al, al }
	__asm { L_004ae959: }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { je L_004ae975 }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { test ecx, ecx }
	__asm { je L_004ae975 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_004ae975: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004ae988: }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { call fn_004b2ab0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { lea ecx, [esi + 4] }
	__asm { mov byte ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_004ae9a3 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_004ae9a3: }
	__asm { mov byte ptr [esi], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [ebp - 0x58], 0 }
	__asm { jmp L_004ae959 }
}

extern "C" char g_00e10524[];
extern "C" void fn_004a7d70();
extern "C" void fn_004b2b40();
// FUNCTION: ROBLOXSTUDIO 0x004ae9b0
extern "C" __declspec(naked) void asm_004ae9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d9a1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_004a7d70 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov al, byte ptr [ebp - 0x58] }
	__asm { test al, al }
	__asm { je L_004aea0d }
	__asm { mov eax, dword ptr [ebp - 0x54] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12bdfcc }
	__asm { je L_004aea48 }
	__asm { push eax }
	__asm { mov ecx, 0x12bdfcc }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_004aea48 }
	__asm { mov al, byte ptr [ebp - 0x58] }
	__asm { L_004aea0d: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { test al, al }
	__asm { L_004aea19: }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { je L_004aea35 }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { test ecx, ecx }
	__asm { je L_004aea35 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_004aea35: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004aea48: }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { call fn_004b2b40 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { lea ecx, [esi + 1] }
	__asm { mov byte ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_004aea63 }
	__asm { mov byte ptr [ecx], al }
	__asm { L_004aea63: }
	__asm { mov byte ptr [esi], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [ebp - 0x58], 0 }
	__asm { jmp L_004aea19 }
}

extern "C" void fn_0040c260();
extern "C" void fn_004ade70();
// FUNCTION: ROBLOXSTUDIO 0x004aec20
extern "C" __declspec(naked) void asm_004aec20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7de28 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esp + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { push esi }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_004aec7e }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x1c], eax }
	__asm { mov eax, 0x1016488 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { jmp L_004aec86 }
	__asm { L_004aec7e: }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { L_004aec86: }
	__asm { push esi }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov dword ptr [esp + 0x40], 0 }
	__asm { call fn_004ade70 }
	__asm { mov dword ptr [esp + 0x3c], 0xffffffff }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_004aecc2 }
	__asm { test al, 1 }
	__asm { jne L_004aecc2 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004aecc2 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004aecc2: }
	__asm { mov ecx, dword ptr [esp + 0x34] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10c88[];
extern "C" char g_00e10c8c[];
extern "C" void fn_004b0ae0();
// FUNCTION: ROBLOXSTUDIO 0x004aeea0
extern "C" __declspec(naked) void asm_004aeea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d751 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [g_00e10c8c] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_004b0ae0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov edi, dword ptr [g_00e10c88] }
	__asm { push eax }
	__asm { call edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [esi], 0x4ac3b0 }
	__asm { add esi, 4 }
	__asm { push esi }
	__asm { mov dword ptr [esi], eax }
	__asm { call ebx }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10c88[];
extern "C" char g_00e10c8c[];
extern "C" void fn_004b2df0();
// FUNCTION: ROBLOXSTUDIO 0x004aef70
extern "C" __declspec(naked) void asm_004aef70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d410 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { lea esi, [ecx + 4] }
	__asm { push esi }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { add esp, 4 }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { call fn_004b2df0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [g_00e10c88] }
	__asm { push eax }
	__asm { call esi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, ebx }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10c88[];
extern "C" char g_00e10c8c[];
extern "C" void fn_004b0250();
// FUNCTION: ROBLOXSTUDIO 0x004af030
extern "C" __declspec(naked) void asm_004af030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d709 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_004b0250 }
	__asm { mov edi, eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi], 0x4ac1e0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { add esi, 4 }
	__asm { push esi }
	__asm { mov dword ptr [esi], ecx }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov esi, dword ptr [g_00e10c88] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10c88[];
extern "C" char g_00e10c8c[];
extern "C" void fn_004b2ec0();
// FUNCTION: ROBLOXSTUDIO 0x004af0f0
extern "C" __declspec(naked) void asm_004af0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d410 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { lea esi, [ecx + 4] }
	__asm { push esi }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { add esp, 4 }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { call fn_004b2ec0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [g_00e10c88] }
	__asm { push eax }
	__asm { call esi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, ebx }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00422570();
extern "C" void fn_004b0300();
// FUNCTION: ROBLOXSTUDIO 0x004af220
extern "C" __declspec(naked) void asm_004af220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d7b9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, edx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00422570 }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [eax], esi }
	__asm { call fn_004b0300 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add eax, 8 }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { lea ecx, [edi + 0x10] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test eax, eax }
	__asm { je L_004af2bf }
	__asm { test al, 1 }
	__asm { jne L_004af2b8 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004af2b8 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004af2b8: }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { L_004af2bf: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_004af2e3 }
	__asm { test al, 1 }
	__asm { jne L_004af2e3 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004af2e3 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004af2e3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x004af3d0
extern "C" __declspec(naked) void asm_004af3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d6d1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, edx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00422570 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00422570 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 0x40], esi }
	__asm { test eax, eax }
	__asm { je L_004af44c }
	__asm { test al, 1 }
	__asm { jne L_004af445 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004af445 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004af445: }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { L_004af44c: }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00422570 }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test eax, eax }
	__asm { je L_004af493 }
	__asm { test al, 1 }
	__asm { jne L_004af48c }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004af48c }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004af48c: }
	__asm { mov dword ptr [ebp - 0x60], 0 }
	__asm { L_004af493: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_004af4b7 }
	__asm { test al, 1 }
	__asm { jne L_004af4b7 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004af4b7 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004af4b7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00422570();
extern "C" void fn_004b3120();
// FUNCTION: ROBLOXSTUDIO 0x004af4d0
extern "C" __declspec(naked) void asm_004af4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d3f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00422570 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { lea eax, [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edi], 0 }
	__asm { call fn_00422570 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { call fn_004b3120 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { test eax, eax }
	__asm { je L_004af55a }
	__asm { test al, 1 }
	__asm { jne L_004af553 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004af553 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004af553: }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { L_004af55a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_004af581 }
	__asm { test al, 1 }
	__asm { jne L_004af581 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004af581 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004af581: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x004af730
extern "C" __declspec(naked) void asm_004af730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d80a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, edx }
	__asm { mov dword ptr [ebp - 0x20], edi }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x28], esi }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { lea ecx, [edi + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x1c], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_004b31b0();
// FUNCTION: ROBLOXSTUDIO 0x004af810
extern "C" __declspec(naked) void asm_004af810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d640 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { add ecx, 0xc }
	__asm { push eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov ecx, esi }
	__asm { call fn_004b31b0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x004af9d0
extern "C" __declspec(naked) void asm_004af9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7db34 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_004afa1b }
	__asm { mov dword ptr [esi + 0x28], 0x1016498 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_004afa1b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe8455c }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi], 0xefb298 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test ecx, ecx }
	__asm { je L_004afa5c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_004afa5c: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xefb3b0 }
	__asm { mov dword ptr [esi + 0x14], 0xefb3bc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x28], 0xefb3c4 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x24], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00403070();
extern "C" void fn_004b1ea0();
extern "C" void fn_004b64a0();
// FUNCTION: ROBLOXSTUDIO 0x004afc10
extern "C" __declspec(naked) void asm_004afc10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7e028 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_004afc85 }
	__asm { movzx eax, byte ptr [esi] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_004afc43 }
	__asm { lea ebx, [eax + 1] }
	__asm { jmp L_004afc45 }
	__asm { L_004afc43: }
	__asm { xor ebx, ebx }
	__asm { L_004afc45: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 0x14] }
	__asm { cmp edx, 0x10 }
	__asm { jb L_004afc54 }
	__asm { mov edi, dword ptr [ecx] }
	__asm { jmp L_004afc56 }
	__asm { L_004afc54: }
	__asm { mov edi, ecx }
	__asm { L_004afc56: }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { add eax, edi }
	__asm { cmp edx, 0x10 }
	__asm { jb L_004afc64 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { jmp L_004afc66 }
	__asm { L_004afc64: }
	__asm { mov edx, ecx }
	__asm { L_004afc66: }
	__asm { push ebx }
	__asm { push ecx }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_00403070 }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004b1ea0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_004afcb0 }
	__asm { L_004afc85: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 8], 0x1017a58 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe3b764 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004b64a0 }
	__asm { L_004afcb0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004aa4f0();
extern "C" void fn_004b06e0();
extern "C" void fn_004b0fb0();
extern "C" void fn_004b2060();
extern "C" void fn_004b3680();
extern "C" void fn_004b36f0();
// FUNCTION: ROBLOXSTUDIO 0x004afe10
extern "C" __declspec(naked) void asm_004afe10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7de88 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_004b2060 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_004afee6 }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_004afe55 }
	__asm { inc eax }
	__asm { jmp L_004afe57 }
	__asm { L_004afe55: }
	__asm { xor eax, eax }
	__asm { L_004afe57: }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [ebp + 0xb] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 0x28], 0x1319ebb }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { call fn_004b3680 }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_004b36f0 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add esp, 8 }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 0x13], 1 }
	__asm { call fn_004b0fb0 }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b06e0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { test esi, esi }
	__asm { je L_004afee4 }
	__asm { cmp byte ptr [ebp - 0x13], 0 }
	__asm { je L_004afeda }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_004aa4f0 }
	__asm { L_004afeda: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004afee4: }
	__asm { mov eax, edi }
	__asm { L_004afee6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004b0770();
extern "C" void fn_004b1030();
extern "C" void fn_004b1fc0();
extern "C" void fn_004b2110();
extern "C" void fn_004b3780();
// FUNCTION: ROBLOXSTUDIO 0x004aff00
extern "C" __declspec(naked) void asm_004aff00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94618 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push edi }
	__asm { push ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_004b2110 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_004affb0 }
	__asm { lea eax, [edi + 3] }
	__asm { test eax, eax }
	__asm { je L_004aff41 }
	__asm { inc eax }
	__asm { jmp L_004aff43 }
	__asm { L_004aff41: }
	__asm { xor eax, eax }
	__asm { L_004aff43: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004b3780 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { test eax, eax }
	__asm { je L_004aff6b }
	__asm { mov dword ptr [eax], esi }
	__asm { L_004aff6b: }
	__asm { add eax, 4 }
	__asm { je L_004aff7d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { L_004aff7d: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 0xf], 1 }
	__asm { call fn_004b1030 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004b0770 }
	__asm { mov esi, dword ptr [eax] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004b1fc0 }
	__asm { mov eax, esi }
	__asm { L_004affb0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004b08e0();
extern "C" void fn_004b18c0();
extern "C" void fn_004b21c0();
extern "C" void fn_004b3820();
// FUNCTION: ROBLOXSTUDIO 0x004b00a0
extern "C" __declspec(naked) void asm_004b00a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7de48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push edi }
	__asm { push ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_004b21c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_004b0183 }
	__asm { lea eax, [edi + 3] }
	__asm { test eax, eax }
	__asm { je L_004b00e5 }
	__asm { inc eax }
	__asm { jmp L_004b00e7 }
	__asm { L_004b00e5: }
	__asm { xor eax, eax }
	__asm { L_004b00e7: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004b3820 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { test eax, eax }
	__asm { je L_004b010f }
	__asm { mov dword ptr [eax], esi }
	__asm { L_004b010f: }
	__asm { add eax, 8 }
	__asm { je L_004b011a }
	__asm { mov dword ptr [eax], 0 }
	__asm { L_004b011a: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 0xf], 1 }
	__asm { call fn_004b18c0 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004b08e0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { test esi, esi }
	__asm { je L_004b0181 }
	__asm { cmp byte ptr [ebp - 0xf], 0 }
	__asm { je L_004b0177 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_004b0177 }
	__asm { test al, 1 }
	__asm { jne L_004b0170 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004b0170 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004b0170: }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_004b0177: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004b0181: }
	__asm { mov eax, edi }
	__asm { L_004b0183: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10c88[];
extern "C" char g_00e10c8c[];
extern "C" void fn_004b0ae0();
// FUNCTION: ROBLOXSTUDIO 0x004b0250
extern "C" __declspec(naked) void asm_004b0250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7dc18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [g_00e10c8c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { call fn_004b0ae0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov esi, dword ptr [g_00e10c88] }
	__asm { push eax }
	__asm { call esi }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004b04d0
extern "C" __declspec(naked) void asm_004b04d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ebf1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x30] }
	__asm { mov dword ptr [ebp - 0x1c], 0x1016498 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov dword ptr [ebp - 0x44], 0xefb298 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_004b054c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_004b054c: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x44], 0xefb3b0 }
	__asm { mov dword ptr [ebp - 0x30], 0xefb3bc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x117a0a0 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xefb3c4 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x004b05a0
extern "C" __declspec(naked) void asm_004b05a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebx + 0x60], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_004b05fd }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_004b05f0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0x5c] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_004b05f0: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0x5c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_004b0608 }
	__asm { L_004b05fd: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0x5c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_004b0608: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_004b061e }
	__asm { add ecx, -0x5c }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_004b061e: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x004b0630
extern "C" __declspec(naked) void asm_004b0630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94768 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { xor ebx, ebx }
	__asm { L_004b0654: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_004b065f }
	__asm { add esi, -0x5c }
	__asm { jmp L_004b0661 }
	__asm { L_004b065f: }
	__asm { xor esi, esi }
	__asm { L_004b0661: }
	__asm { mov eax, dword ptr [esi + 0x5c] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_004b0683 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_004b0683: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_004b069b }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004b069b: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { inc ebx }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_004b0654 }
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

// FUNCTION: ROBLOXSTUDIO 0x004b06e0
extern "C" __declspec(naked) void asm_004b06e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebx + 0x4c], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_004b073d }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_004b0730 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0x48] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_004b0730: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0x48] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_004b0748 }
	__asm { L_004b073d: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0x48] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_004b0748: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_004b075e }
	__asm { add ecx, -0x48 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_004b075e: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x004b0770
extern "C" __declspec(naked) void asm_004b0770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_004b07cd }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_004b07c0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_004b07c0: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_004b07d8 }
	__asm { L_004b07cd: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_004b07d8: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_004b07ee }
	__asm { add ecx, -0xc }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_004b07ee: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x004b08e0
extern "C" __declspec(naked) void asm_004b08e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebx + 0x2c], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_004b093d }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_004b0930 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0x28] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_004b0930: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0x28] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_004b0948 }
	__asm { L_004b093d: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0x28] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_004b0948: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_004b095e }
	__asm { add ecx, -0x28 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_004b095e: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x004b0970
extern "C" __declspec(naked) void asm_004b0970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { xor ebx, ebx }
	__asm { nop }
	__asm { L_004b0980: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_004b098b }
	__asm { add esi, -0x28 }
	__asm { jmp L_004b098d }
	__asm { L_004b098b: }
	__asm { xor esi, esi }
	__asm { L_004b098d: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_004b09b9 }
	__asm { test al, 1 }
	__asm { jne L_004b09b2 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004b09b2 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004b09b2: }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_004b09b9: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [eax + 8] }
	__asm { inc ebx }
	__asm { cmp dword ptr [edi], 0 }
	__asm { jne L_004b0980 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10c88[];
extern "C" char g_00e10c8c[];
// FUNCTION: ROBLOXSTUDIO 0x004b0ae0
extern "C" __declspec(naked) void asm_004b0ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7dc18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [g_00e10c8c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { push edi }
	__asm { mov dword ptr [edi], eax }
	__asm { call esi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov esi, dword ptr [g_00e10c88] }
	__asm { push eax }
	__asm { call esi }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call esi }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x18 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x004b0b80
extern "C" __declspec(naked) void asm_004b0b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7dafc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_004b0bcc }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_004b0bcc: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe8455c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xefb298 }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_004b0c12 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_004b0c12: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xefb3b0 }
	__asm { mov dword ptr [esi], 0xefb3bc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xefb3c4 }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x24], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10504[];
extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x004b10b0
extern "C" __declspec(naked) void asm_004b10b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8832c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_004b1102 }
	__asm { push 0x20 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_004b10f2 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b10f2: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b1102: }
	__asm { push esi }
	__asm { push 0x20 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_004b1139 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00422570 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b1139: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor esi, esi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10c54[];
extern "C" char g_00e10eec[];
extern "C" char g_00e10fc4[];
extern "C" char g_00e10ffc[];
extern "C" char g_0131c614[];
extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x004b12f0
extern "C" __declspec(naked) void asm_004b12f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7da5a }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { cmp dword ptr [g_0131c614], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, edx }
	__asm { mov esi, ecx }
	__asm { jne L_004b1337 }
	__asm { push 0x4b10b0 }
	__asm { push 0x4b1150 }
	__asm { push 0x1016788 }
	__asm { call dword ptr [g_00e10c54] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [g_0131c614], eax }
	__asm { L_004b1337: }
	__asm { mov ecx, dword ptr [g_0131c614] }
	__asm { test dword ptr [esi + 8], 0x40000000 }
	__asm { je L_004b134e }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax + 4], 1 }
	__asm { jne L_004b1367 }
	__asm { L_004b134e: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov edx, eax }
	__asm { and edx, 0x3fffffff }
	__asm { cmp ecx, edx }
	__asm { je L_004b13a4 }
	__asm { cmp ecx, 7 }
	__asm { ja L_004b1367 }
	__asm { cmp edx, 7 }
	__asm { jbe L_004b13a4 }
	__asm { L_004b1367: }
	__asm { push 0 }
	__asm { push edi }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call dword ptr [g_00e10eec] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10fc4] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b13a4: }
	__asm { and eax, 0x40000000 }
	__asm { and ecx, 0x3fffffff }
	__asm { or eax, ecx }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { test eax, 0x40000000 }
	__asm { je L_004b13bf }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov esi, dword ptr [eax] }
	__asm { L_004b13bf: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test eax, eax }
	__asm { je L_004b13e7 }
	__asm { test al, 1 }
	__asm { jne L_004b13e1 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004b13e1 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004b13e1: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_004b13e7: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00422570 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00422570();
extern "C" void fn_004b2f90();
// FUNCTION: ROBLOXSTUDIO 0x004b19f0
extern "C" __declspec(naked) void asm_004b19f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d428 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x30 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { add ecx, 0x10 }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { mov ecx, esi }
	__asm { call fn_004b2f90 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { test eax, eax }
	__asm { je L_004b1a69 }
	__asm { test al, 1 }
	__asm { jne L_004b1a69 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004b1a69 }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004b1a69: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x004b2610
extern "C" __declspec(naked) void asm_004b2610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7dafc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_004b265c }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_004b265c: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe8455c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xefb298 }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_004b26a2 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_004b26a2: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xefb3b0 }
	__asm { mov dword ptr [esi], 0xefb3bc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xefb3c4 }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x24], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004b1d80();
extern "C" void fn_004b4bf0();
// FUNCTION: ROBLOXSTUDIO 0x004b2970
extern "C" __declspec(naked) void asm_004b2970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7da28 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_004b2998 }
	__asm { inc eax }
	__asm { jmp L_004b299a }
	__asm { L_004b2998: }
	__asm { xor eax, eax }
	__asm { L_004b299a: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { L_004b29ba: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b4bf0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax + 0x5c] }
	__asm { test eax, eax }
	__asm { je L_004b29d4 }
	__asm { add eax, -0x5c }
	__asm { jmp L_004b29d6 }
	__asm { L_004b29d4: }
	__asm { xor eax, eax }
	__asm { L_004b29d6: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp eax, ecx }
	__asm { je L_004b29e5 }
	__asm { push ecx }
	__asm { push eax }
	__asm { push eax }
	__asm { jmp L_004b29ba }
	__asm { L_004b29e5: }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004b1d80 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_004b1d80();
extern "C" void fn_004b4cc0();
// FUNCTION: ROBLOXSTUDIO 0x004b2a10
extern "C" __declspec(naked) void asm_004b2a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7da28 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_004b2a38 }
	__asm { inc eax }
	__asm { jmp L_004b2a3a }
	__asm { L_004b2a38: }
	__asm { xor eax, eax }
	__asm { L_004b2a3a: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { L_004b2a5a: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b4cc0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax + 0x5c] }
	__asm { test eax, eax }
	__asm { je L_004b2a74 }
	__asm { add eax, -0x5c }
	__asm { jmp L_004b2a76 }
	__asm { L_004b2a74: }
	__asm { xor eax, eax }
	__asm { L_004b2a76: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp eax, ecx }
	__asm { je L_004b2a85 }
	__asm { push ecx }
	__asm { push eax }
	__asm { push eax }
	__asm { jmp L_004b2a5a }
	__asm { L_004b2a85: }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004b1d80 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10508[];
extern "C" void fn_004b4e60();
// FUNCTION: ROBLOXSTUDIO 0x004b2c70
extern "C" __declspec(naked) void asm_004b2c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7de48 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_004b2c98 }
	__asm { inc eax }
	__asm { jmp L_004b2c9a }
	__asm { L_004b2c98: }
	__asm { xor eax, eax }
	__asm { L_004b2c9a: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { L_004b2cba: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b4e60 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { test eax, eax }
	__asm { je L_004b2cd4 }
	__asm { add eax, -0x28 }
	__asm { jmp L_004b2cd6 }
	__asm { L_004b2cd4: }
	__asm { xor eax, eax }
	__asm { L_004b2cd6: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp eax, ecx }
	__asm { je L_004b2ce5 }
	__asm { push ecx }
	__asm { push eax }
	__asm { push eax }
	__asm { jmp L_004b2cba }
	__asm { L_004b2ce5: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { test esi, esi }
	__asm { je L_004b2d2a }
	__asm { cmp byte ptr [ebp - 0xf], 0 }
	__asm { je L_004b2d20 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_004b2d20 }
	__asm { test al, 1 }
	__asm { jne L_004b2d19 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004b2d19 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004b2d19: }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_004b2d20: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004b2d2a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10c88[];
extern "C" char g_00e10c8c[];
extern "C" void fn_004b5600();
// FUNCTION: ROBLOXSTUDIO 0x004b2df0
extern "C" __declspec(naked) void asm_004b2df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d5c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push esi }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { lea esi, [ecx + 4] }
	__asm { push esi }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { call fn_004b5600 }
	__asm { mov bl, al }
	__asm { lea eax, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [g_00e10c88] }
	__asm { push eax }
	__asm { call esi }
	__asm { xor eax, eax }
	__asm { mov ecx, 0x1016468 }
	__asm { test bl, bl }
	__asm { cmove ecx, eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10c88[];
extern "C" char g_00e10c8c[];
extern "C" void fn_004b5600();
// FUNCTION: ROBLOXSTUDIO 0x004b2ec0
extern "C" __declspec(naked) void asm_004b2ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d5c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push esi }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { lea esi, [ecx + 4] }
	__asm { push esi }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { call fn_004b5600 }
	__asm { mov bl, al }
	__asm { lea eax, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [g_00e10c88] }
	__asm { push eax }
	__asm { call esi }
	__asm { xor eax, eax }
	__asm { mov ecx, 0x1016460 }
	__asm { test bl, bl }
	__asm { cmove ecx, eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00422570();
extern "C" void fn_004b4ff0();
// FUNCTION: ROBLOXSTUDIO 0x004b2f90
extern "C" __declspec(naked) void asm_004b2f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d428 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x30 }
	__asm { mov ecx, esp }
	__asm { add ecx, 0x10 }
	__asm { mov dword ptr [ecx - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { call fn_004b4ff0 }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { mov ecx, 0x1016448 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { cmove ecx, edx }
	__asm { mov dword ptr [esi], ecx }
	__asm { test eax, eax }
	__asm { je L_004b3014 }
	__asm { test al, 1 }
	__asm { jne L_004b3014 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004b3014 }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004b3014: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" char g_00e10504[];
extern "C" void fn_004b38b0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004b3070
extern "C" __declspec(naked) void asm_004b3070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e5e0 }
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
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_004b30a1: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp esi, ebx }
	__asm { je L_004b310d }
	__asm { push 0x10 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_004b30da }
	__asm { mov edx, dword ptr [edi] }
	__asm { add esi, 4 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov dword ptr [esi - 4], eax }
	__asm { add edi, 4 }
	__asm { jmp L_004b30a1 }
	__asm { L_004b30da: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi], eax }
	__asm { add esi, 4 }
	__asm { add edi, 4 }
	__asm { jmp L_004b30a1 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp esi, edi }
	__asm { je L_004b3104 }
	__asm { L_004b30f0: }
	__asm { mov ecx, dword ptr [esi - 4] }
	__asm { sub esi, 4 }
	__asm { test ecx, ecx }
	__asm { je L_004b3100 }
	__asm { push ecx }
	__asm { call fn_004b38b0 }
	__asm { L_004b3100: }
	__asm { cmp esi, edi }
	__asm { jne L_004b30f0 }
	__asm { L_004b3104: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_004b310d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00422570();
extern "C" void fn_004b5080();
// FUNCTION: ROBLOXSTUDIO 0x004b3120
extern "C" __declspec(naked) void asm_004b3120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d598 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00422570 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { call fn_004b5080 }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { mov ecx, 0x1016440 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmove ecx, edx }
	__asm { mov dword ptr [edi], ecx }
	__asm { test eax, eax }
	__asm { je L_004b3198 }
	__asm { test al, 1 }
	__asm { jne L_004b3198 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004b3198 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004b3198: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_004b5820();
// FUNCTION: ROBLOXSTUDIO 0x004b31b0
extern "C" __declspec(naked) void asm_004b31b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d640 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { lea esi, [edi + 8] }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push esi }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { add ecx, 0xc }
	__asm { mov dword ptr [ecx - 0xc], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { call fn_004b5820 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { mov ecx, 0x1016430 }
	__asm { cmove ecx, eax }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" void fn_004b2270();
extern "C" void fn_004b3a00();
extern "C" void fn_004b5110();
// FUNCTION: ROBLOXSTUDIO 0x004b3300
extern "C" __declspec(naked) void asm_004b3300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d938 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push edi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_004b2270 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_004b3352 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_004b3352: }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_004b335c }
	__asm { inc eax }
	__asm { jmp L_004b335e }
	__asm { L_004b335c: }
	__asm { xor eax, eax }
	__asm { L_004b335e: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0xc }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_004b338c }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_004b338c: }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov word ptr [ebp - 0x10], 0x101 }
	__asm { call fn_004b5110 }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b3a00 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [esi + 4], 1 }
	__asm { test eax, eax }
	__asm { je L_004b33e9 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004b33e9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_004a95e0();
extern "C" void fn_004b38e0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004b3400
extern "C" __declspec(naked) void asm_004b3400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d4d1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, edx }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_004b3432: }
	__asm { cmp edi, ebx }
	__asm { je L_004b3479 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004b3449 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_004b38e0 }
	__asm { L_004b3449: }
	__asm { add esi, 0x28 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { add edi, 0x28 }
	__asm { jmp L_004b3432 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp esi, edi }
	__asm { je L_004b3470 }
	__asm { L_004b3462: }
	__asm { mov ecx, esi }
	__asm { call fn_004a95e0 }
	__asm { add esi, 0x28 }
	__asm { cmp esi, edi }
	__asm { jne L_004b3462 }
	__asm { L_004b3470: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_004b3479: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004b3a00
extern "C" __declspec(naked) void asm_004b3a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_004b3a5d }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_004b3a50 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_004b3a50: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_004b3a68 }
	__asm { L_004b3a5d: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_004b3a68: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_004b3a7e }
	__asm { add ecx, -4 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_004b3a7e: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x004b4110
extern "C" __declspec(naked) void asm_004b4110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7de28 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { lea eax, [edi + 0x10] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00422570 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add ecx, esi }
	__asm { call eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { test eax, eax }
	__asm { je L_004b4183 }
	__asm { test al, 1 }
	__asm { jne L_004b4183 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004b4183 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004b4183: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_00e10c88[];
extern "C" char g_00e10c8c[];
// FUNCTION: ROBLOXSTUDIO 0x004b4850
extern "C" __declspec(naked) void asm_004b4850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e5c1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, edx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov ebx, ecx }
	__asm { test edi, edi }
	__asm { je L_004b48d5 }
	__asm { cmp edi, 1 }
	__asm { je L_004b48d5 }
	__asm { cmp edi, 2 }
	__asm { jne L_004b488c }
	__asm { lea eax, [esi + 4] }
	__asm { jmp L_004b4914 }
	__asm { L_004b488c: }
	__asm { cmp edi, 3 }
	__asm { jne L_004b48b8 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12cc140 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, ebx }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b48b8: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12cc140 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b48d5: }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_004b4905 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { add esi, 4 }
	__asm { push esi }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_004b4905: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp edi, 1 }
	__asm { jne L_004b491e }
	__asm { lea eax, [ebx + 4] }
	__asm { L_004b4914: }
	__asm { push eax }
	__asm { call dword ptr [g_00e10c88] }
	__asm { add esp, 4 }
	__asm { L_004b491e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_00e10c88[];
extern "C" char g_00e10c8c[];
// FUNCTION: ROBLOXSTUDIO 0x004b4930
extern "C" __declspec(naked) void asm_004b4930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e5c1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, edx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov ebx, ecx }
	__asm { test edi, edi }
	__asm { je L_004b49b5 }
	__asm { cmp edi, 1 }
	__asm { je L_004b49b5 }
	__asm { cmp edi, 2 }
	__asm { jne L_004b496c }
	__asm { lea eax, [esi + 4] }
	__asm { jmp L_004b49f4 }
	__asm { L_004b496c: }
	__asm { cmp edi, 3 }
	__asm { jne L_004b4998 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12cc220 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, ebx }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b4998: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12cc220 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b49b5: }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_004b49e5 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { add esi, 4 }
	__asm { push esi }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_004b49e5: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp edi, 1 }
	__asm { jne L_004b49fe }
	__asm { lea eax, [ebx + 4] }
	__asm { L_004b49f4: }
	__asm { push eax }
	__asm { call dword ptr [g_00e10c88] }
	__asm { add esp, 4 }
	__asm { L_004b49fe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x004b4a10
extern "C" __declspec(naked) void asm_004b4a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e5c1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, edx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov ebx, ecx }
	__asm { test edi, edi }
	__asm { je L_004b4a95 }
	__asm { cmp edi, 1 }
	__asm { je L_004b4a95 }
	__asm { cmp edi, 2 }
	__asm { jne L_004b4a4c }
	__asm { lea ecx, [esi + 0xc] }
	__asm { jmp L_004b4acf }
	__asm { L_004b4a4c: }
	__asm { cmp edi, 3 }
	__asm { jne L_004b4a78 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12cbe88 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, ebx }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b4a78: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12cbe88 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b4a95: }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_004b4ac0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { lea eax, [ebx + 0xc] }
	__asm { lea ecx, [esi + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { L_004b4ac0: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp edi, 1 }
	__asm { jne L_004b4ad5 }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { L_004b4acf: }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_004b4ad5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403070();
extern "C" void fn_004b05a0();
extern "C" void fn_004b0f30();
extern "C" void fn_004b1ea0();
extern "C" void fn_004b35b0();
extern "C" void fn_004b5ae0();
// FUNCTION: ROBLOXSTUDIO 0x004b4bf0
extern "C" __declspec(naked) void asm_004b4bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov edi, ecx }
	__asm { cmp edx, 0x10 }
	__asm { jb L_004b4c08 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_004b4c0a }
	__asm { L_004b4c08: }
	__asm { mov ecx, esi }
	__asm { L_004b4c0a: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, ecx }
	__asm { cmp edx, 0x10 }
	__asm { jb L_004b4c18 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_004b4c1a }
	__asm { L_004b4c18: }
	__asm { mov ecx, esi }
	__asm { L_004b4c1a: }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00403070 }
	__asm { movzx ecx, byte ptr [edi] }
	__asm { inc ecx }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { add ecx, edi }
	__asm { je L_004b4c32 }
	__asm { inc ecx }
	__asm { jmp L_004b4c34 }
	__asm { L_004b4c32: }
	__asm { xor ecx, ecx }
	__asm { L_004b4c34: }
	__asm { push ecx }
	__asm { push esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004b1ea0 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_004b4cb1 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov ecx, ebx }
	__asm { call fn_004b35b0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { push dword ptr [ebx] }
	__asm { call fn_004b5ae0 }
	__asm { mov byte ptr [ebx + 9], 1 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { add esp, 0xc }
	__asm { lea eax, [esi + 1] }
	__asm { cmp eax, dword ptr [edi + 0x10] }
	__asm { jbe L_004b4ca2 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { xor edx, edx }
	__asm { cmp eax, ecx }
	__asm { je L_004b4c97 }
	__asm { L_004b4c84: }
	__asm { mov eax, dword ptr [eax + 0x5c] }
	__asm { inc edx }
	__asm { test eax, eax }
	__asm { je L_004b4c91 }
	__asm { add eax, -0x5c }
	__asm { jmp L_004b4c93 }
	__asm { L_004b4c91: }
	__asm { xor eax, eax }
	__asm { L_004b4c93: }
	__asm { cmp eax, ecx }
	__asm { jne L_004b4c84 }
	__asm { L_004b4c97: }
	__asm { lea eax, [esi + edx] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004b0f30 }
	__asm { L_004b4ca2: }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004b05a0 }
	__asm { L_004b4cb1: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00403070();
extern "C" void fn_004b05a0();
extern "C" void fn_004b0f30();
extern "C" void fn_004b1ea0();
extern "C" void fn_004b35b0();
extern "C" void fn_004b5b70();
// FUNCTION: ROBLOXSTUDIO 0x004b4cc0
extern "C" __declspec(naked) void asm_004b4cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_004b4cd8 }
	__asm { mov edx, dword ptr [esi] }
	__asm { jmp L_004b4cda }
	__asm { L_004b4cd8: }
	__asm { mov edx, esi }
	__asm { L_004b4cda: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, edx }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_004b4ce8 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_004b4cea }
	__asm { L_004b4ce8: }
	__asm { mov ecx, esi }
	__asm { L_004b4cea: }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00403070 }
	__asm { movzx ecx, byte ptr [edi] }
	__asm { inc ecx }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { add ecx, edi }
	__asm { je L_004b4d02 }
	__asm { inc ecx }
	__asm { jmp L_004b4d04 }
	__asm { L_004b4d02: }
	__asm { xor ecx, ecx }
	__asm { L_004b4d04: }
	__asm { push ecx }
	__asm { push esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004b1ea0 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_004b4d7f }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov ecx, ebx }
	__asm { call fn_004b35b0 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { call fn_004b5b70 }
	__asm { mov byte ptr [ebx + 9], 1 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { add esp, 4 }
	__asm { lea eax, [esi + 1] }
	__asm { cmp eax, dword ptr [edi + 0x10] }
	__asm { jbe L_004b4d70 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { xor edx, edx }
	__asm { cmp eax, ecx }
	__asm { je L_004b4d65 }
	__asm { L_004b4d52: }
	__asm { mov eax, dword ptr [eax + 0x5c] }
	__asm { inc edx }
	__asm { test eax, eax }
	__asm { je L_004b4d5f }
	__asm { add eax, -0x5c }
	__asm { jmp L_004b4d61 }
	__asm { L_004b4d5f: }
	__asm { xor eax, eax }
	__asm { L_004b4d61: }
	__asm { cmp eax, ecx }
	__asm { jne L_004b4d52 }
	__asm { L_004b4d65: }
	__asm { lea eax, [esi + edx] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004b0f30 }
	__asm { L_004b4d70: }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004b05a0 }
	__asm { L_004b4d7f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00422570();
extern "C" void fn_004b08e0();
extern "C" void fn_004b18c0();
extern "C" void fn_004b21c0();
extern "C" void fn_004b3820();
// FUNCTION: ROBLOXSTUDIO 0x004b4e60
extern "C" __declspec(naked) void asm_004b4e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7da11 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b21c0 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_004b4f20 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, edi }
	__asm { call fn_004b3820 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_004b4ed1 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea eax, [ebx + 8] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { L_004b4ed1: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov byte ptr [edi + 9], 1 }
	__asm { mov ebx, dword ptr [esi + 8] }
	__asm { lea eax, [ebx + 1] }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { jbe L_004b4f11 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { xor edx, edx }
	__asm { cmp eax, ecx }
	__asm { je L_004b4f06 }
	__asm { L_004b4ef3: }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { inc edx }
	__asm { test eax, eax }
	__asm { je L_004b4f00 }
	__asm { add eax, -0x28 }
	__asm { jmp L_004b4f02 }
	__asm { L_004b4f00: }
	__asm { xor eax, eax }
	__asm { L_004b4f02: }
	__asm { cmp eax, ecx }
	__asm { jne L_004b4ef3 }
	__asm { L_004b4f06: }
	__asm { lea eax, [ebx + edx] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b18c0 }
	__asm { L_004b4f11: }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b08e0 }
	__asm { L_004b4f20: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00422570();
extern "C" void fn_004b56d0();
// FUNCTION: ROBLOXSTUDIO 0x004b4ff0
extern "C" __declspec(naked) void asm_004b4ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d428 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { sub esp, 0x30 }
	__asm { mov ecx, esp }
	__asm { add ecx, 0x10 }
	__asm { mov dword ptr [ecx - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { call fn_004b56d0 }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { test eax, eax }
	__asm { je L_004b506c }
	__asm { test al, 1 }
	__asm { jne L_004b506c }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004b506c }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004b506c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" char g_00e10c88[];
extern "C" char g_00e10c8c[];
extern "C" void fn_0040c260();
// FUNCTION: ROBLOXSTUDIO 0x004b5600
extern "C" __declspec(naked) void asm_004b5600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d5f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_004b569d }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [g_00e10c8c] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call ebx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_004b5688 }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { add esi, 4 }
	__asm { push esi }
	__asm { mov dword ptr [esi], eax }
	__asm { call ebx }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_004b5688: }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10c88] }
	__asm { add esp, 4 }
	__asm { mov bl, 1 }
	__asm { jmp L_004b569f }
	__asm { L_004b569d: }
	__asm { xor bl, bl }
	__asm { L_004b569f: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10c88] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov al, bl }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00422570();
extern "C" void fn_004b5c70();
// FUNCTION: ROBLOXSTUDIO 0x004b56d0
extern "C" __declspec(naked) void asm_004b56d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d428 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_004b5736 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { sub esp, 0x30 }
	__asm { mov ecx, esp }
	__asm { add ecx, 0x10 }
	__asm { mov dword ptr [ecx - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { call fn_004b5c70 }
	__asm { mov bl, 1 }
	__asm { jmp L_004b5738 }
	__asm { L_004b5736: }
	__asm { xor bl, bl }
	__asm { L_004b5738: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { test eax, eax }
	__asm { je L_004b575f }
	__asm { test al, 1 }
	__asm { jne L_004b575f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004b575f }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004b575f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00422570();
extern "C" void fn_004b5d10();
// FUNCTION: ROBLOXSTUDIO 0x004b5780
extern "C" __declspec(naked) void asm_004b5780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d598 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_004b57da }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00422570 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { call fn_004b5d10 }
	__asm { mov bl, 1 }
	__asm { jmp L_004b57dc }
	__asm { L_004b57da: }
	__asm { xor bl, bl }
	__asm { L_004b57dc: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_004b5803 }
	__asm { test al, 1 }
	__asm { jne L_004b5803 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004b5803 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004b5803: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_0040c260();
// FUNCTION: ROBLOXSTUDIO 0x004b5820
extern "C" __declspec(naked) void asm_004b5820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d621 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_004b58af }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test ecx, ecx }
	__asm { je L_004b589e }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { add ecx, 0xc }
	__asm { push eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { L_004b589e: }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov bl, 1 }
	__asm { jmp L_004b58b1 }
	__asm { L_004b58af: }
	__asm { xor bl, bl }
	__asm { L_004b58b1: }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x004b5b70
extern "C" __declspec(naked) void asm_004b5b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d889 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, edx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_004b5bf1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_004b5bea }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edi + 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_004b5bea: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { pop edi }
	__asm { L_004b5bf1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x004b5c70
extern "C" __declspec(naked) void asm_004b5c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d544 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004b5cc8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { jmp L_004b5cca }
	__asm { L_004b5cc8: }
	__asm { xor esi, esi }
	__asm { L_004b5cca: }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_004b5cf7 }
	__asm { test al, 1 }
	__asm { jne L_004b5cf7 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004b5cf7 }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004b5cf7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" char g_00e10504[];
extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x004b5d10
extern "C" __declspec(naked) void asm_004b5d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd77204 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004b5d5c }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00422570 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { jmp L_004b5d5e }
	__asm { L_004b5d5c: }
	__asm { xor esi, esi }
	__asm { L_004b5d5e: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_004b5d8b }
	__asm { test al, 1 }
	__asm { jne L_004b5d8b }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004b5d8b }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004b5d8b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x004b5dd0
extern "C" __declspec(naked) void asm_004b5dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7db6c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_004b5e1c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_004b5e1c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b764 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_004b5e3e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_004b5e40 }
	__asm { L_004b5e3e: }
	__asm { xor edx, edx }
	__asm { L_004b5e40: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_004b5e5e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_004b5e5e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe76008 }
	__asm { mov dword ptr [ebx], 0xe76014 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe7601c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_004b5ea7 }
	__asm { add edi, 0xc }
	__asm { jmp L_004b5ea9 }
	__asm { L_004b5ea7: }
	__asm { xor edi, edi }
	__asm { L_004b5ea9: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x004b6020
extern "C" __declspec(naked) void asm_004b6020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7db6c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_004b606c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_004b606c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b764 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_004b608e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_004b6090 }
	__asm { L_004b608e: }
	__asm { xor edx, edx }
	__asm { L_004b6090: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_004b60ae }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_004b60ae: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe76008 }
	__asm { mov dword ptr [ebx], 0xe76014 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe7601c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_004b60f7 }
	__asm { add edi, 0xc }
	__asm { jmp L_004b60f9 }
	__asm { L_004b60f7: }
	__asm { xor edi, edi }
	__asm { L_004b60f9: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004b61b0
extern "C" __declspec(naked) void asm_004b61b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd704e1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf139e8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe3b764 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004b6213 }
	__asm { add esi, 0xc }
	__asm { jmp L_004b6215 }
	__asm { L_004b6213: }
	__asm { xor esi, esi }
	__asm { L_004b6215: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_004b622b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_004b622b: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe76008 }
	__asm { mov dword ptr [ebp - 0x30], 0xe76014 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x1179fc4 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe7601c }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x004b62d0
extern "C" __declspec(naked) void asm_004b62d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7dba4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_004b631b }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_004b631b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b764 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_004b633d }
	__asm { add edi, 0xc }
	__asm { jmp L_004b633f }
	__asm { L_004b633d: }
	__asm { xor edi, edi }
	__asm { L_004b633f: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_004b6355 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_004b6355: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe76008 }
	__asm { mov dword ptr [esi + 0xc], 0xe76014 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe7601c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10c88[];
extern "C" char g_00e10fb8[];
extern "C" char g_00e110bc[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x004c6570
extern "C" __declspec(naked) void asm_004c6570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd81701 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { je L_004c65f6 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_004c65f6 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e110bc] }
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
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x1007d54 }
	__asm { push eax }
	__asm { push 2 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push 0x1019c70 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x64 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_004c65f6: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10c88] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11004[];
extern "C" void fn_004c8fc0();
extern "C" void fn_004cc2e0();
extern "C" void fn_00525db0();
// FUNCTION: ROBLOXSTUDIO 0x004c7eb0
extern "C" __declspec(naked) void asm_004c7eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { test eax, eax }
	__asm { je L_004c7f2f }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { mov ecx, dword ptr [eax + 0x108] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_004c7ede }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { push 0 }
	__asm { call fn_00525db0 }
	__asm { L_004c7ede: }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_004c7eea }
	__asm { add ecx, 8 }
	__asm { jmp L_004c7eec }
	__asm { L_004c7eea: }
	__asm { xor ecx, ecx }
	__asm { L_004c7eec: }
	__asm { mov edi, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { test eax, eax }
	__asm { jle L_004c7f0e }
	__asm { add eax, 4 }
	__asm { lea edx, [edi + eax*4] }
	__asm { lea eax, [edi + 0x10] }
	__asm { cmp eax, edx }
	__asm { je L_004c7f0e }
	__asm { L_004c7f03: }
	__asm { cmp dword ptr [eax], ecx }
	__asm { je L_004c7f36 }
	__asm { add eax, 4 }
	__asm { cmp eax, edx }
	__asm { jne L_004c7f03 }
	__asm { L_004c7f0e: }
	__asm { or eax, 0xffffffff }
	__asm { L_004c7f11: }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_004c8fc0 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_004c7f28 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_004c7f28: }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_004c7f2f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004c7f36: }
	__asm { sub eax, edi }
	__asm { sub eax, 0x10 }
	__asm { sar eax, 2 }
	__asm { jmp L_004c7f11 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jne L_004c7f63 }
	__asm { push 0xf0 }
	__asm { push 0x100b998 }
	__asm { push 0x1012b6c }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_004c7f63: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_004c7f79 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax + 8] }
	__asm { call fn_004cc2e0 }
	__asm { L_004c7f79: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add eax, 3 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { ret }
}

extern "C" char g_00e11008[];
extern "C" void fn_004cc260();
extern "C" void fn_004cc2e0();
// FUNCTION: ROBLOXSTUDIO 0x004c8fc0
extern "C" __declspec(naked) void asm_004c8fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { js L_004c8fd6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp edi, dword ptr [eax + 8] }
	__asm { jl L_004c8ff3 }
	__asm { L_004c8fd6: }
	__asm { push 0x161 }
	__asm { push 0x100b998 }
	__asm { push 0x1002fbc }
	__asm { push 0x100b95c }
	__asm { call dword ptr [g_00e11008] }
	__asm { add esp, 0x10 }
	__asm { L_004c8ff3: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_004c9009 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax + 8] }
	__asm { call fn_004cc2e0 }
	__asm { L_004c9009: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { lea ebx, [eax + 0x10] }
	__asm { je L_004c9022 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax + 8] }
	__asm { call fn_004cc2e0 }
	__asm { L_004c9022: }
	__asm { lea eax, [edi + 1] }
	__asm { mov ecx, esi }
	__asm { lea eax, [ebx + eax*4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea eax, [eax + edi*4] }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { call fn_004cc260 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x004c9410
extern "C" __declspec(naked) void asm_004c9410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_004c945b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_004c945b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_004c94ae }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1017b18 }
	__asm { mov dword ptr [esi + 8], 0x1017b28 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x1017b48 }
	__asm { mov dword ptr [esi + 8], 0x1017b58 }
	__asm { jmp L_004c94b0 }
	__asm { L_004c94ae: }
	__asm { xor esi, esi }
	__asm { L_004c94b0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_004c94cd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_004c94cd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10c88[];
extern "C" char g_00e10c8c[];
extern "C" void fn_004cbfe0();
// FUNCTION: ROBLOXSTUDIO 0x004ca1b0
extern "C" __declspec(naked) void asm_004ca1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ee21 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [g_00e10c8c] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_004cbfe0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov esi, dword ptr [g_00e10c88] }
	__asm { push eax }
	__asm { call esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov dword ptr [ebx], 0x4c6570 }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { call edi }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov eax, ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10c88[];
extern "C" char g_00e10c8c[];
extern "C" void fn_004cde90();
// FUNCTION: ROBLOXSTUDIO 0x004ca270
extern "C" __declspec(naked) void asm_004ca270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ed80 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [g_00e10c8c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { add ecx, 4 }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { call fn_004cde90 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [g_00e10c88] }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_004cab00();
extern "C" void fn_004cbd70();
// FUNCTION: ROBLOXSTUDIO 0x004ca420
extern "C" __declspec(naked) void asm_004ca420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x38 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_004ca46b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_004ca46b: }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_004ca486 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_004cbd70 }
	__asm { mov esi, eax }
	__asm { jmp L_004ca488 }
	__asm { L_004ca486: }
	__asm { xor esi, esi }
	__asm { L_004ca488: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_004cab00 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_004ca4a5 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_004ca4a5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131c744[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_004c8840();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004caf80
extern "C" __declspec(naked) void asm_004caf80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe33ccc }
	__asm { test al, al }
	__asm { je L_004caff1 }
	__asm { cmp dword ptr [g_0131c744], 0x29a }
	__asm { je L_004caff1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004cafe0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004caff1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004cafe0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004caff1: }
	__asm { mov ecx, esi }
	__asm { call fn_004c8840 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_004cb04b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004cb04b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131c740[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_004c88a0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004cb290
extern "C" __declspec(naked) void asm_004cb290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe33cd4 }
	__asm { test al, al }
	__asm { je L_004cb301 }
	__asm { cmp dword ptr [g_0131c740], 0x29a }
	__asm { je L_004cb301 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004cb2f0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004cb301 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004cb2f0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004cb301: }
	__asm { mov ecx, esi }
	__asm { call fn_004c88a0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_004cb35b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004cb35b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131ebf8[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_004c8900();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004cb5a0
extern "C" __declspec(naked) void asm_004cb5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe59424 }
	__asm { test al, al }
	__asm { je L_004cb611 }
	__asm { cmp dword ptr [g_0131ebf8], 0x29a }
	__asm { je L_004cb611 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004cb600 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004cb611 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004cb600: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004cb611: }
	__asm { mov ecx, esi }
	__asm { call fn_004c8900 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_004cb66b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004cb66b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131ebfc[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_004c8960();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004cb8b0
extern "C" __declspec(naked) void asm_004cb8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe5942c }
	__asm { test al, al }
	__asm { je L_004cb921 }
	__asm { cmp dword ptr [g_0131ebfc], 0x29a }
	__asm { je L_004cb921 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004cb910 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004cb921 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004cb910: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004cb921: }
	__asm { mov ecx, esi }
	__asm { call fn_004c8960 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_004cb97b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004cb97b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131ec00[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_004c89c0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004cbbc0
extern "C" __declspec(naked) void asm_004cbbc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe59434 }
	__asm { test al, al }
	__asm { je L_004cbc31 }
	__asm { cmp dword ptr [g_0131ec00], 0x29a }
	__asm { je L_004cbc31 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004cbc20 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004cbc31 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004cbc20: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004cbc31: }
	__asm { mov ecx, esi }
	__asm { call fn_004c89c0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_004cbc8b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004cbc8b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10c88[];
extern "C" char g_00e10c8c[];
// FUNCTION: ROBLOXSTUDIO 0x004cbfe0
extern "C" __declspec(naked) void asm_004cbfe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7dc18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [g_00e10c8c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { push edi }
	__asm { mov dword ptr [edi], eax }
	__asm { call esi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov esi, dword ptr [g_00e10c88] }
	__asm { push eax }
	__asm { call esi }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x18 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e101fc[];
extern "C" char g_00e10200[];
extern "C" char g_00e10598[];
extern "C" void fn_0045f760();
extern "C" void fn_0045fe60();
extern "C" void fn_004ce780();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004cdc00
extern "C" __declspec(naked) void asm_004cdc00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7f379 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x60 }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e101fc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10200] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { test eax, eax }
	__asm { jne L_004cdc68 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { mov dword ptr [ebp - 0x28], 0xe1815c }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0045fe60 }
	__asm { L_004cdc68: }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004ce780 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_0045f760 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e101fc[];
extern "C" char g_00e10200[];
extern "C" char g_00e10598[];
extern "C" void fn_0045f760();
extern "C" void fn_0045fe60();
extern "C" void fn_004ce820();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004cdcb0
extern "C" __declspec(naked) void asm_004cdcb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7f349 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x60 }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e101fc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10200] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { test eax, eax }
	__asm { jne L_004cdd18 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { mov dword ptr [ebp - 0x28], 0xe1815c }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0045fe60 }
	__asm { L_004cdd18: }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004ce820 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_0045f760 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10c88[];
extern "C" char g_00e10c8c[];
extern "C" void fn_004cefa0();
// FUNCTION: ROBLOXSTUDIO 0x004cde90
extern "C" __declspec(naked) void asm_004cde90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d410 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [g_00e10c8c] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { lea eax, [edi + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004cefa0 }
	__asm { mov bl, al }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [g_00e10c88] }
	__asm { push eax }
	__asm { call esi }
	__asm { xor eax, eax }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1017ad4 }
	__asm { test bl, bl }
	__asm { cmove ecx, eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0040d6f0();
extern "C" void fn_004cd450();
extern "C" void fn_004cdf40();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004ce140
extern "C" __declspec(naked) void asm_004ce140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7edb0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov dl, 1 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov edi, ebx }
	__asm { mov byte ptr [ebp - 0x18], dl }
	__asm { jne L_004ce1a1 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_004ce182: }
	__asm { cmp ecx, dword ptr [eax + 0x10] }
	__asm { mov edi, eax }
	__asm { setb dl }
	__asm { mov byte ptr [ebp - 0x18], dl }
	__asm { test dl, dl }
	__asm { je L_004ce195 }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp L_004ce198 }
	__asm { L_004ce195: }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { L_004ce198: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_004ce182 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { L_004ce1a1: }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test dl, dl }
	__asm { je L_004ce1e7 }
	__asm { cmp edi, dword ptr [ebx] }
	__asm { jne L_004ce1dc }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 1 }
	__asm { L_004ce1b8: }
	__asm { push eax }
	__asm { call fn_004cdf40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_004ce1dc: }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_0040d6f0 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_004ce1e7: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jae L_004ce201 }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push edi }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { jmp L_004ce1b8 }
	__asm { L_004ce201: }
	__asm { call fn_004cd450 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_004cd450 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e11a34[];
extern "C" char g_00e125cc[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004cef00
extern "C" __declspec(naked) void asm_004cef00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd81001 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { L_004cef31: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp esi, ebx }
	__asm { je L_004cef7a }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test esi, esi }
	__asm { je L_004cef4c }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11a34] }
	__asm { L_004cef4c: }
	__asm { add esi, 4 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { add edi, 4 }
	__asm { jmp L_004cef31 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp edi, esi }
	__asm { je L_004cef71 }
	__asm { L_004cef62: }
	__asm { sub edi, 4 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e125cc] }
	__asm { cmp edi, esi }
	__asm { jne L_004cef62 }
	__asm { L_004cef71: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_004cef7a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10c88[];
extern "C" char g_00e10c8c[];
extern "C" void fn_0040c260();
// FUNCTION: ROBLOXSTUDIO 0x004cefa0
extern "C" __declspec(naked) void asm_004cefa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ede1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_004cf026 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test ecx, ecx }
	__asm { je L_004cf011 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { add ecx, 4 }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { add esp, 4 }
	__asm { L_004cf011: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10c88] }
	__asm { add esp, 4 }
	__asm { mov bl, 1 }
	__asm { jmp L_004cf028 }
	__asm { L_004cf026: }
	__asm { xor bl, bl }
	__asm { L_004cf028: }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10c88] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131c650[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_004cf5d0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004cf060
extern "C" __declspec(naked) void asm_004cf060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe5506c }
	__asm { test al, al }
	__asm { je L_004cf0d1 }
	__asm { cmp dword ptr [g_0131c650], 0x29a }
	__asm { je L_004cf0d1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004cf0c0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004cf0d1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004cf0c0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004cf0d1: }
	__asm { mov ecx, esi }
	__asm { call fn_004cf5d0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_004cf12b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004cf12b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131c664[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_004cfba0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004cf630
extern "C" __declspec(naked) void asm_004cf630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe55034 }
	__asm { test al, al }
	__asm { je L_004cf6a1 }
	__asm { cmp dword ptr [g_0131c664], 0x29a }
	__asm { je L_004cf6a1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004cf690 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004cf6a1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004cf690: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004cf6a1: }
	__asm { mov ecx, esi }
	__asm { call fn_004cfba0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_004cf6fb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004cf6fb: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131c678[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_004d0170();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004cfc00
extern "C" __declspec(naked) void asm_004cfc00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe5502c }
	__asm { test al, al }
	__asm { je L_004cfc71 }
	__asm { cmp dword ptr [g_0131c678], 0x29a }
	__asm { je L_004cfc71 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004cfc60 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004cfc71 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004cfc60: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004cfc71: }
	__asm { mov ecx, esi }
	__asm { call fn_004d0170 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_004cfccb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004cfccb: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131c68c[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_004d0740();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004d01d0
extern "C" __declspec(naked) void asm_004d01d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe3ba94 }
	__asm { test al, al }
	__asm { je L_004d0241 }
	__asm { cmp dword ptr [g_0131c68c], 0x29a }
	__asm { je L_004d0241 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004d0230 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004d0241 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004d0230: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004d0241: }
	__asm { mov ecx, esi }
	__asm { call fn_004d0740 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_004d029b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004d029b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131c6e8[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_004d1300();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004d0c60
extern "C" __declspec(naked) void asm_004d0c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe5505c }
	__asm { test al, al }
	__asm { je L_004d0cd1 }
	__asm { cmp dword ptr [g_0131c6e8], 0x29a }
	__asm { je L_004d0cd1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004d0cc0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004d0cd1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004d0cc0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004d0cd1: }
	__asm { mov ecx, esi }
	__asm { call fn_004d1300 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_004d0d2b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004d0d2b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131c6fc[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_004d18d0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004d1360
extern "C" __declspec(naked) void asm_004d1360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4fd8c }
	__asm { test al, al }
	__asm { je L_004d13d1 }
	__asm { cmp dword ptr [g_0131c6fc], 0x29a }
	__asm { je L_004d13d1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004d13c0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004d13d1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004d13c0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004d13d1: }
	__asm { mov ecx, esi }
	__asm { call fn_004d18d0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_004d142b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004d142b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00960a40();
// FUNCTION: ROBLOXSTUDIO 0x004d1d10
extern "C" __declspec(naked) void asm_004d1d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7f529 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov eax, dword ptr [esi + 0x70] }
	__asm { test eax, eax }
	__asm { je L_004d1d5d }
	__asm { test al, 1 }
	__asm { jne L_004d1d56 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x78] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004d1d56 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004d1d56: }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { L_004d1d5d: }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { test eax, eax }
	__asm { je L_004d1d88 }
	__asm { test al, 1 }
	__asm { jne L_004d1d81 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x58] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004d1d81 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004d1d81: }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { L_004d1d88: }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { test eax, eax }
	__asm { je L_004d1db3 }
	__asm { test al, 1 }
	__asm { jne L_004d1dac }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x38] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004d1dac }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004d1dac: }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { L_004d1db3: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { test eax, eax }
	__asm { je L_004d1dde }
	__asm { test al, 1 }
	__asm { jne L_004d1dd7 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004d1dd7 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004d1dd7: }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_004d1dde: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00960a40 }
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
extern "C" void fn_00c2cf50();
extern "C" void fn_00c2fed0();
extern "C" void fn_00c30b60();
extern "C" void fn_00c363b0();
// FUNCTION: ROBLOXSTUDIO 0x004d20f0
extern "C" __declspec(naked) void asm_004d20f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c2cf50 }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 2], al }
	__asm { call fn_00c363b0 }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 1], al }
	__asm { call fn_00c2fed0 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { setne bl }
	__asm { call fn_00c30b60 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov bh, al }
	__asm { test cl, cl }
	__asm { je L_004d2176 }
	__asm { cmp byte ptr [ebp - 1], 0 }
	__asm { je L_004d2189 }
	__asm { cmp byte ptr [ebp - 2], 0 }
	__asm { jne L_004d213e }
	__asm { test bl, bl }
	__asm { je L_004d2176 }
	__asm { L_004d213e: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_004d2165 }
	__asm { push 0x140 }
	__asm { push 0x1018408 }
	__asm { push 0x10183d8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004d2176 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_004d2165: }
	__asm { movzx eax, cl }
	__asm { push 0x1018450 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004d2176: }
	__asm { cmp byte ptr [ebp - 1], 0 }
	__asm { je L_004d2189 }
	__asm { xor eax, eax }
	__asm { test bh, bh }
	__asm { pop esi }
	__asm { setne al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004d2189: }
	__asm { cmp byte ptr [ebp - 2], 0 }
	__asm { je L_004d21ae }
	__asm { test bl, bl }
	__asm { je L_004d21a3 }
	__asm { xor eax, eax }
	__asm { test bh, bh }
	__asm { setne al }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add eax, 2 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004d21a3: }
	__asm { pop esi }
	__asm { mov eax, 4 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004d21ae: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { sete al }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add eax, 5 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10ebc[];
extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e110e4[];
extern "C" char g_00e11110[];
extern "C" char g_00e11c98[];
extern "C" char g_00e12298[];
extern "C" char g_00e1239c[];
extern "C" void fn_00403410();
// FUNCTION: ROBLOXSTUDIO 0x004d2510
extern "C" __declspec(naked) void asm_004d2510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd81b26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov dword ptr [esi], 0x101a33c }
	__asm { mov dword ptr [esi + 8], 0x101a414 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e12298] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10ebc] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e11c98] }
	__asm { push 0x1019e68 }
	__asm { mov edx, eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00403410 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e10fd4] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e110e4] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e1239c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10b30[];
extern "C" char g_00e10b34[];
extern "C" char g_00e10f3c[];
extern "C" char g_00e10f40[];
// FUNCTION: ROBLOXSTUDIO 0x004d34e0
extern "C" __declspec(naked) void asm_004d34e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { test eax, 0x2000000 }
	__asm { je L_004d3555 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp dword ptr [ecx + 8], esi }
	__asm { je L_004d354f }
	__asm { push esi }
	__asm { lea eax, [ebp + 0xe] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10f3c] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10b34] }
	__asm { test al, al }
	__asm { je L_004d354c }
	__asm { push esi }
	__asm { lea eax, [ebp + 0xe] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10f3c] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10f40] }
	__asm { test al, al }
	__asm { jne L_004d354c }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xe] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10f3c] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10b30] }
	__asm { test al, al }
	__asm { jne L_004d354c }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { jmp L_004d3554 }
	__asm { L_004d354c: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_004d354f: }
	__asm { mov esi, 0x2000000 }
	__asm { L_004d3554: }
	__asm { pop edi }
	__asm { L_004d3555: }
	__asm { test eax, 0x4000000 }
	__asm { je L_004d3562 }
	__asm { or esi, 0x4000000 }
	__asm { L_004d3562: }
	__asm { test eax, 0x10000000 }
	__asm { je L_004d356f }
	__asm { or esi, 0x10000000 }
	__asm { L_004d356f: }
	__asm { test eax, 0x8000000 }
	__asm { je L_004d357c }
	__asm { or esi, 0x8000000 }
	__asm { L_004d357c: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10b1c[];
extern "C" void fn_0041f450();
extern "C" void fn_004d6a20();
// FUNCTION: ROBLOXSTUDIO 0x004d3cc0
extern "C" __declspec(naked) void asm_004d3cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_004d3ce1 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { lea ecx, [edi + 0xc] }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_0041f450 }
	__asm { L_004d3ce1: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { add eax, 5 }
	__asm { cmp dword ptr [ecx], 1 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { je L_004d3d03 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { lea ecx, [edi + 0xc] }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_0041f450 }
	__asm { L_004d3d03: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { lea ecx, [ecx + eax*4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add ecx, 0x14 }
	__asm { cmp ecx, eax }
	__asm { je L_004d3d38 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [edx], ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], ebx }
	__asm { mov dword ptr [edx + 8], edi }
	__asm { mov edx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { call fn_004d6a20 }
	__asm { add esp, 0x14 }
	__asm { L_004d3d38: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10b1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10e38[];
extern "C" char g_00e11a1c[];
extern "C" char g_00e125cc[];
extern "C" void fn_004d6100();
extern "C" void fn_004d6180();
extern "C" void fn_004d6410();
// FUNCTION: ROBLOXSTUDIO 0x004d3f50
extern "C" __declspec(naked) void asm_004d3f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd82368 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [ebp + 0x10], 2 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { jne L_004d3fea }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 4], 1 }
	__asm { jne L_004d3fea }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_004d6410 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [esi] }
	__asm { lea ecx, [edi + 0xc] }
	__asm { call fn_004d6100 }
	__asm { push dword ptr [eax] }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_004d6180 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov cl, byte ptr [ebp - 0x14] }
	__asm { mov byte ptr [eax + 4], cl }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 8] }
	__asm { call dword ptr [g_00e11a1c] }
	__asm { push esi }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10e38] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e125cc] }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_004d3fea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e34[];
extern "C" char g_00e10fdc[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x004d4000
extern "C" __declspec(naked) void asm_004d4000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd81e0b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ebp + 0x14], 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { jne L_004d4114 }
	__asm { cmp dword ptr [ebp + 0x10], 1 }
	__asm { jne L_004d4114 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub eax, 0 }
	__asm { je L_004d40d1 }
	__asm { dec eax }
	__asm { je L_004d408e }
	__asm { dec eax }
	__asm { jne L_004d4114 }
	__asm { push 0x101a584 }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10e34] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_004d408e: }
	__asm { push 0x101a590 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10e34] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_004d40d1: }
	__asm { push 0x100a8ac }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10e34] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_004d4114: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10fdc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e11a18[];
extern "C" char g_00e11a20[];
extern "C" char g_00e125cc[];
extern "C" void fn_004d67d0();
// FUNCTION: ROBLOXSTUDIO 0x004d41e0
extern "C" __declspec(naked) void asm_004d41e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd81c79 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { push ebx }
	__asm { cmp dword ptr [eax], 1 }
	__asm { push esi }
	__asm { push edi }
	__asm { lea edi, [ecx + 0x10] }
	__asm { je L_004d4213 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_004d67d0 }
	__asm { L_004d4213: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov esi, dword ptr [ecx + 8] }
	__asm { add esi, 5 }
	__asm { lea esi, [ecx + esi*4] }
	__asm { mov edi, edi }
	__asm { L_004d4220: }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_004d4233 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_004d67d0 }
	__asm { L_004d4233: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { add eax, 5 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { cmp esi, eax }
	__asm { je L_004d427e }
	__asm { mov ebx, dword ptr [esi] }
	__asm { mov al, byte ptr [ebx + 4] }
	__asm { test al, al }
	__asm { je L_004d4279 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e11a20] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11a18] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e125cc] }
	__asm { mov byte ptr [ebx + 4], 0 }
	__asm { L_004d4279: }
	__asm { add esi, 4 }
	__asm { jmp L_004d4220 }
	__asm { L_004d427e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10b18[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e122d0[];
extern "C" char g_00e125cc[];
extern "C" char g_00e1261c[];
extern "C" void fn_004d3430();
extern "C" void fn_004d6410();
// FUNCTION: ROBLOXSTUDIO 0x004d44e0
extern "C" __declspec(naked) void asm_004d44e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8239a }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [esi + 4], 1 }
	__asm { jne L_004d45d2 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { mov ecx, 0x12bff68 }
	__asm { call dword ptr [g_00e10b18] }
	__asm { test eax, eax }
	__asm { je L_004d45dc }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 2 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x40] }
	__asm { mov edx, eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004d6410 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, 0x12bff48 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { cmp byte ptr [ebp - 0x14], 0 }
	__asm { mov esi, eax }
	__asm { je L_004d458d }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004d3430 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e125cc] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004d458d: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1261c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_004d3430 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov esi, dword ptr [g_00e125cc] }
	__asm { lea ecx, [ebp + 8] }
	__asm { call esi }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004d45d2: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e122d0] }
	__asm { L_004d45dc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e11a20[];
extern "C" char g_00e11a34[];
// FUNCTION: ROBLOXSTUDIO 0x004d65c0
extern "C" __declspec(naked) void asm_004d65c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7d268 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0xc }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test edi, edi }
	__asm { jne L_004d6619 }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { test esi, esi }
	__asm { je L_004d664d }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [esi], edi }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { call dword ptr [g_00e11a20] }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004d6619: }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004d664d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov al, byte ptr [edi + 4] }
	__asm { mov byte ptr [esi + 4], al }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call dword ptr [g_00e11a34] }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004d664d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor esi, esi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f78[];
extern "C" char g_00e10f7c[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" char g_00e11a34[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004d6960
extern "C" __declspec(naked) void asm_004d6960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd82045 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 4 }
	__asm { push 8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e10f7c] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi - 8] }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004d69b9 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11108] }
	__asm { L_004d69b9: }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test ecx, ecx }
	__asm { je L_004d69d0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call dword ptr [g_00e11a34] }
	__asm { L_004d69d0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call dword ptr [g_00e11110] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e10f78] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10504[];
extern "C" char g_00e11a34[];
extern "C" void fn_004d6bf0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004d6c50
extern "C" __declspec(naked) void asm_004d6c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8200c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { L_004d6c7e: }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { je L_004d6cfd }
	__asm { push 0xc }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004d6cc5 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov al, byte ptr [ecx + 4] }
	__asm { mov byte ptr [esi + 4], al }
	__asm { lea eax, [ecx + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call dword ptr [g_00e11a34] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], esi }
	__asm { add edi, 4 }
	__asm { add ebx, 4 }
	__asm { jmp L_004d6c7e }
	__asm { L_004d6cc5: }
	__asm { xor esi, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], esi }
	__asm { add edi, 4 }
	__asm { add ebx, 4 }
	__asm { jmp L_004d6c7e }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp esi, edi }
	__asm { je L_004d6cf4 }
	__asm { nop }
	__asm { L_004d6ce0: }
	__asm { mov ecx, dword ptr [esi - 4] }
	__asm { sub esi, 4 }
	__asm { test ecx, ecx }
	__asm { je L_004d6cf0 }
	__asm { push ecx }
	__asm { call fn_004d6bf0 }
	__asm { L_004d6cf0: }
	__asm { cmp esi, edi }
	__asm { jne L_004d6ce0 }
	__asm { L_004d6cf4: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_004d6cfd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" char g_01319fd0[];
extern "C" void fn_0042c1b0();
extern "C" void fn_0042c340();
extern "C" void fn_0043ee70();
extern "C" void fn_0045caa0();
extern "C" void fn_0045d4e0();
extern "C" void fn_00465f80();
extern "C" void fn_004660c0();
extern "C" void fn_006b9580();
extern "C" void fn_006b9980();
extern "C" void fn_00775320();
// FUNCTION: ROBLOXSTUDIO 0x004eb6b0
extern "C" __declspec(naked) void asm_004eb6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd853b4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x1319f78 }
	__asm { call fn_006b9580 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1319f78 }
	__asm { call fn_0045d4e0 }
	__asm { push 0xc }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { mov dword ptr [esp + 0x64], 0 }
	__asm { test eax, eax }
	__asm { je L_004eb70d }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_00465f80 }
	__asm { jmp L_004eb70f }
	__asm { L_004eb70d: }
	__asm { xor eax, eax }
	__asm { L_004eb70f: }
	__asm { mov dword ptr [esp + 0x64], 0xffffffff }
	__asm { mov edi, dword ptr [g_01319fd0] }
	__asm { mov esi, dword ptr [g_00e10508] }
	__asm { mov dword ptr [g_01319fd0], eax }
	__asm { test edi, edi }
	__asm { je L_004eb739 }
	__asm { mov ecx, edi }
	__asm { call fn_004660c0 }
	__asm { push edi }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_004eb739: }
	__asm { call fn_00775320 }
	__asm { push eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { call fn_006b9980 }
	__asm { push 0x100f070 }
	__asm { push eax }
	__asm { lea eax, [esp + 0x38] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x78], 1 }
	__asm { call fn_0043ee70 }
	__asm { add esp, 0x14 }
	__asm { mov byte ptr [esp + 0x64], 3 }
	__asm { cmp dword ptr [esp + 0x24], 0x10 }
	__asm { jb L_004eb779 }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_004eb779: }
	__asm { lea eax, [esp + 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x28], 0xf }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_0045caa0 }
	__asm { push eax }
	__asm { lea eax, [esp + 0x2c] }
	__asm { push eax }
	__asm { mov byte ptr [esp + 0x6c], 4 }
	__asm { call fn_0042c1b0 }
	__asm { mov byte ptr [esp + 0x64], 3 }
	__asm { cmp dword ptr [esp + 0x54], 0x10 }
	__asm { jb L_004eb7bd }
	__asm { push dword ptr [esp + 0x40] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_004eb7bd: }
	__asm { mov ecx, dword ptr [g_01319fd0] }
	__asm { lea eax, [esp + 0x28] }
	__asm { push eax }
	__asm { call fn_0042c340 }
	__asm { cmp dword ptr [esp + 0x3c], 0x10 }
	__asm { jb L_004eb7dd }
	__asm { push dword ptr [esp + 0x28] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_004eb7dd: }
	__asm { mov ecx, dword ptr [esp + 0x5c] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e1019c[];
extern "C" char g_00e110b0[];
extern "C" char g_00e110e4[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x004eb7f0
extern "C" __declspec(naked) void asm_004eb7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd82d91 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { je L_004eb89f }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e110b0] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [eax + 0xc] }
	__asm { push 0 }
	__asm { push 2 }
	__asm { call dword ptr [g_00e1019c] }
	__asm { mov esi, eax }
	__asm { xor ebx, ebx }
	__asm { test esi, esi }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { setne bl }
	__asm { call dword ptr [g_00e110e4] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { test ebx, ebx }
	__asm { je L_004eb880 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_004eb880: }
	__asm { test esi, esi }
	__asm { je L_004eb88b }
	__asm { push esi }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_004eb88b: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004eb89f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1113c[];
extern "C" char g_00e11148[];
extern "C" char g_00e11a5c[];
extern "C" char g_0131eb88[];
extern "C" char g_0131eba0[];
extern "C" void fn_00424480();
extern "C" void fn_00455380();
extern "C" void fn_0049a3f0();
extern "C" void fn_004a4c90();
extern "C" void fn_00846f90();
extern "C" void fn_00848ef0();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004ec3c0
extern "C" __declspec(naked) void asm_004ec3c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd87346 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e1113c] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { cmp al, bl }
	__asm { je L_004ec4de }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov esi, esp }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11a5c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { xor eax, 4 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e11148] }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_004ec43e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004ec43e: }
	__asm { mov eax, dword ptr [g_0131eba0] }
	__asm { test eax, eax }
	__asm { je L_004ec4c2 }
	__asm { add eax, 8 }
	__asm { je L_004ec4c2 }
	__asm { push 0 }
	__asm { push 0x12cc9c4 }
	__asm { push 0x12c5b08 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_004ec4c2 }
	__asm { push 1 }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00455380 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00846f90 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00424480 }
	__asm { cmp bl, byte ptr [eax + 0x8c] }
	__asm { je L_004ec4a0 }
	__asm { push ebx }
	__asm { lea ecx, [eax + 0x68] }
	__asm { mov byte ptr [eax + 0x8c], bl }
	__asm { call fn_0049a3f0 }
	__asm { L_004ec4a0: }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00848ef0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004ec4c2: }
	__asm { call fn_00424480 }
	__asm { cmp bl, byte ptr [eax + 0x8c] }
	__asm { je L_004ec4de }
	__asm { push ebx }
	__asm { lea ecx, [eax + 0x68] }
	__asm { mov byte ptr [eax + 0x8c], bl }
	__asm { call fn_0049a3f0 }
	__asm { L_004ec4de: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10f4c[];
extern "C" char g_00e11050[];
extern "C" char g_00e11070[];
extern "C" char g_00e11110[];
extern "C" char g_012e06e4[];
extern "C" void fn_004ec500();
extern "C" void fn_00774920();
// FUNCTION: ROBLOXSTUDIO 0x004ec720
extern "C" __declspec(naked) void asm_004ec720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd82e5a }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10f4c] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_004ec7e5 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11050] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [g_012e06e4], 0 }
	__asm { je L_004ec7a9 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11070] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_004ec780 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_004ec780: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xf12990 }
	__asm { push eax }
	__asm { push 0x1003b2c }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_004ec7a9 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004ec7a9: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11050] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { push eax }
	__asm { call fn_004ec500 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_004ec7e5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11050[];
extern "C" char g_00e11070[];
extern "C" char g_00e11110[];
extern "C" char g_012e06e4[];
extern "C" void fn_00403410();
extern "C" void fn_004ec500();
extern "C" void fn_00774920();
// FUNCTION: ROBLOXSTUDIO 0x004ec800
extern "C" __declspec(naked) void asm_004ec800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd82f33 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11050] }
	__asm { push 0x101a590 }
	__asm { mov edx, eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00403410 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { cmp byte ptr [g_012e06e4], 0 }
	__asm { je L_004ec88f }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11070] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_004ec866 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_004ec866: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xf12990 }
	__asm { push eax }
	__asm { push 0x1003b2c }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { jb L_004ec88f }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004ec88f: }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11050] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { push eax }
	__asm { call fn_004ec500 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10f4c[];
extern "C" char g_00e11050[];
extern "C" char g_00e11070[];
extern "C" char g_00e11110[];
extern "C" char g_012e06e4[];
extern "C" void fn_00403410();
extern "C" void fn_004ec500();
extern "C" void fn_00774920();
// FUNCTION: ROBLOXSTUDIO 0x004ec8f0
extern "C" __declspec(naked) void asm_004ec8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd82e8a }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { call dword ptr [g_00e10f4c] }
	__asm { test eax, eax }
	__asm { je L_004ec9c8 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11050] }
	__asm { push 0x101e9d8 }
	__asm { lea edx, [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00403410 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { cmp byte ptr [g_012e06e4], 0 }
	__asm { je L_004ec99f }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11070] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_004ec964 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_004ec964: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xf12990 }
	__asm { push eax }
	__asm { push 0x1003b2c }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { jb L_004ec98d }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004ec98d: }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { L_004ec99f: }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_004ec500 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_004ec9c8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10ae0[];
extern "C" char g_00e10b38[];
extern "C" char g_00e10b54[];
extern "C" char g_00e10b58[];
extern "C" char g_00e11110[];
extern "C" char g_00e128ec[];
extern "C" char g_00e12b00[];
extern "C" char g_00e12b04[];
extern "C" char g_00e12b08[];
extern "C" char g_00e12b0c[];
extern "C" char g_00e12b10[];
extern "C" void fn_00403410();
extern "C" void fn_00479a60();
// FUNCTION: ROBLOXSTUDIO 0x004ed680
extern "C" __declspec(naked) void asm_004ed680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8745a }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor bl, bl }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { je L_004ed77f }
	__asm { push esi }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10b58] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10b38] }
	__asm { test al, al }
	__asm { je L_004ed759 }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10ae0] }
	__asm { test al, al }
	__asm { jne L_004ed759 }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_00479a60 }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e12b00] }
	__asm { push 0x101eb60 }
	__asm { mov edx, esi }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call fn_00403410 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e12b04] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [eax], 0x400 }
	__asm { call dword ptr [g_00e12b08] }
	__asm { push 0x400 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call dword ptr [g_00e12b0c] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call dword ptr [g_00e128ec] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], bl }
	__asm { call dword ptr [g_00e12b10] }
	__asm { jmp L_004ed75b }
	__asm { L_004ed759: }
	__asm { mov bl, 1 }
	__asm { L_004ed75b: }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10b54] }
	__asm { mov al, bl }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004ed77f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f10[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e128ec[];
extern "C" char g_00e129ec[];
extern "C" char g_012bfc10[];
extern "C" char g_012bfc14[];
extern "C" void fn_004edca0();
extern "C" void fn_00515070();
extern "C" void fn_00575b60();
extern "C" void fn_008bde70();
// FUNCTION: ROBLOXSTUDIO 0x004edbc0
extern "C" __declspec(naked) void asm_004edbc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8313a }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x40 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call fn_008bde70 }
	__asm { add eax, 0x38 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_004edbf0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_004edbf0: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jne L_004edc0e }
	__asm { xor bl, bl }
	__asm { jmp L_004edc7c }
	__asm { L_004edc0e: }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_00515070 }
	__asm { mov edi, eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008bde70 }
	__asm { mov esi, dword ptr [eax + 0x54] }
	__asm { call fn_008bde70 }
	__asm { push esi }
	__asm { push dword ptr [eax + 0x50] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push 0 }
	__asm { push edi }
	__asm { call dword ptr [g_00e10f10] }
	__asm { push eax }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { call fn_00575b60 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e11110] }
	__asm { push dword ptr [g_012bfc14] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push dword ptr [g_012bfc10] }
	__asm { call dword ptr [g_00e129ec] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { call dword ptr [g_00e128ec] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov bl, 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_004edca0 }
	__asm { L_004edc7c: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10b88[];
extern "C" char g_00e10f4c[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11110[];
extern "C" char g_00e128f4[];
extern "C" char g_00e129b4[];
// FUNCTION: ROBLOXSTUDIO 0x004edeb0
extern "C" __declspec(naked) void asm_004edeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd83832 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e10f4c] }
	__asm { mov ecx, dword ptr [g_00e129b4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e128f4] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10b88] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { test esi, esi }
	__asm { je L_004edf29 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [eax + 0xd0] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call eax }
	__asm { mov bl, al }
	__asm { jmp L_004edf2b }
	__asm { L_004edf29: }
	__asm { xor bl, bl }
	__asm { L_004edf2b: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f34[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e13484[];
extern "C" char g_00e1348c[];
extern "C" void fn_00414df0();
extern "C" void fn_004ee240();
extern "C" void fn_00505d00();
// FUNCTION: ROBLOXSTUDIO 0x004ee170
extern "C" __declspec(naked) void asm_004ee170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd873d9 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov al, byte ptr [esi + 0x420] }
	__asm { test al, al }
	__asm { je L_004ee200 }
	__asm { push 0x101eca0 }
	__asm { lea ecx, [esp + 8] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { push dword ptr [g_00e13484] }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [g_00e10f34] }
	__asm { add esp, 0xc }
	__asm { lea ecx, [esp + 4] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { test esi, esi }
	__asm { je L_004ee22b }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { call fn_00505d00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x20], 1 }
	__asm { call dword ptr [g_00e1348c] }
	__asm { lea ecx, [esp + 8] }
	__asm { jmp L_004ee21e }
	__asm { L_004ee200: }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { call fn_00505d00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x20], 2 }
	__asm { call fn_004ee240 }
	__asm { lea ecx, [esp + 0xc] }
	__asm { L_004ee21e: }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { call fn_00414df0 }
	__asm { L_004ee22b: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e12a20[];
extern "C" char g_00e12a24[];
extern "C" char g_00e12bcc[];
extern "C" char g_00e12c8c[];
extern "C" char g_01318f93[];
extern "C" void fn_004d2370();
extern "C" void fn_00554f50();
// FUNCTION: ROBLOXSTUDIO 0x004ee7f0
extern "C" __declspec(naked) void asm_004ee7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd87298 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [g_01318f93], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_004ee876 }
	__asm { cmp dword ptr [esi + 0x3c0], 0 }
	__asm { jne L_004ee852 }
	__asm { push 0x28 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004ee843 }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_004d2370 }
	__asm { jmp L_004ee845 }
	__asm { L_004ee843: }
	__asm { xor eax, eax }
	__asm { L_004ee845: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi + 0x3c0], eax }
	__asm { L_004ee852: }
	__asm { mov ecx, dword ptr [esi + 0x3c0] }
	__asm { call dword ptr [g_00e12c8c] }
	__asm { mov ecx, dword ptr [esi + 0x3c0] }
	__asm { test al, al }
	__asm { jne L_004ee8c7 }
	__asm { call dword ptr [g_00e12a20] }
	__asm { mov ecx, dword ptr [esi + 0x3c0] }
	__asm { jmp L_004ee8e8 }
	__asm { L_004ee876: }
	__asm { cmp dword ptr [esi + 0x3bc], 0 }
	__asm { jne L_004ee8b1 }
	__asm { push 0x1c }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_004ee8a2 }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00554f50 }
	__asm { jmp L_004ee8a4 }
	__asm { L_004ee8a2: }
	__asm { xor eax, eax }
	__asm { L_004ee8a4: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi + 0x3bc], eax }
	__asm { L_004ee8b1: }
	__asm { mov ecx, dword ptr [esi + 0x3bc] }
	__asm { call dword ptr [g_00e12c8c] }
	__asm { mov ecx, dword ptr [esi + 0x3bc] }
	__asm { test al, al }
	__asm { je L_004ee8dc }
	__asm { L_004ee8c7: }
	__asm { call dword ptr [g_00e12bcc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004ee8dc: }
	__asm { call dword ptr [g_00e12a20] }
	__asm { mov ecx, dword ptr [esi + 0x3bc] }
	__asm { L_004ee8e8: }
	__asm { call dword ptr [g_00e12a24] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_0131eb88[];
extern "C" char g_0131eba4[];
extern "C" void fn_004a4c90();
extern "C" void fn_004ecb70();
extern "C" void fn_004f2520();
extern "C" void fn_004f66d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004eef50
extern "C" __declspec(naked) void asm_004eef50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd837dc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_004eefdc }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { push 3 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004f2520 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004eefdc: }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_004ef00d }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004ef00d: }
	__asm { mov eax, dword ptr [g_0131eba4] }
	__asm { test eax, eax }
	__asm { jne L_004ef04a }
	__asm { push 0x44 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0xa }
	__asm { test eax, eax }
	__asm { je L_004ef038 }
	__asm { mov ecx, eax }
	__asm { call fn_004f66d0 }
	__asm { jmp L_004ef03a }
	__asm { L_004ef038: }
	__asm { xor eax, eax }
	__asm { L_004ef03a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [g_0131eba4], eax }
	__asm { test eax, eax }
	__asm { je L_004ef04d }
	__asm { L_004ef04a: }
	__asm { add eax, 8 }
	__asm { L_004ef04d: }
	__asm { push 1 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004ecb70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f4c[];
extern "C" char g_00e10f50[];
extern "C" char g_00e11050[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110c8[];
extern "C" char g_00e110f4[];
extern "C" char g_00e11110[];
extern "C" char g_01318fba[];
extern "C" char g_0131eb88[];
extern "C" char g_0131eb9c[];
extern "C" char g_01320164[];
extern "C" void fn_004a4c90();
extern "C" void fn_0057e360();
extern "C" void fn_005812a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004ef380
extern "C" __declspec(naked) void asm_004ef380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd83743 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { call dword ptr [g_00e10f4c] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_004ef4c3 }
	__asm { mov ecx, dword ptr [g_0131eb88] }
	__asm { test cl, 1 }
	__asm { jne L_004ef3de }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [g_0131eb88], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004ef3de: }
	__asm { cmp dword ptr [g_0131eb9c], 0 }
	__asm { je L_004ef4c3 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11050] }
	__asm { push 0x1018f8c }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e110c8] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110f4] }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_004ef443 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_004ef443: }
	__asm { mov ecx, dword ptr [g_0131eb9c] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x48] }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_004ef47f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_004ef47f: }
	__asm { cmp byte ptr [g_01318fba], 0 }
	__asm { je L_004ef494 }
	__asm { mov ecx, 0x1320168 }
	__asm { call fn_005812a0 }
	__asm { jmp L_004ef4b3 }
	__asm { L_004ef494: }
	__asm { push 0x1035b00 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push 0x1320168 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { add esp, 0xc }
	__asm { L_004ef4b3: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_004ef4c3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10ab4[];
extern "C" char g_00e110d0[];
extern "C" char g_00e11110[];
extern "C" char g_00e119e4[];
extern "C" char g_00e11bc4[];
extern "C" char g_00e11bc8[];
extern "C" char g_00e11cb8[];
extern "C" char g_00e12c74[];
// FUNCTION: ROBLOXSTUDIO 0x004ef4e0
extern "C" __declspec(naked) void asm_004ef4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd83762 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_004ef5b0 }
	__asm { xor edx, edx }
	__asm { lea eax, [ecx + 0x3d8] }
	__asm { L_004ef510: }
	__asm { cmp esi, dword ptr [eax] }
	__asm { je L_004ef52f }
	__asm { inc edx }
	__asm { add eax, 4 }
	__asm { cmp edx, 6 }
	__asm { jl L_004ef510 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004ef52f: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11cb8] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e119e4] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10ab4] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e110d0] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { test bl, bl }
	__asm { je L_004ef59a }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12c74] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { call dword ptr [g_00e11bc8] }
	__asm { add esp, 0xc }
	__asm { jmp L_004ef5a0 }
	__asm { L_004ef59a: }
	__asm { call dword ptr [g_00e11bc4] }
	__asm { L_004ef5a0: }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_004ef5b0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_0131eb88[];
extern "C" char g_0131eb9c[];
extern "C" void fn_00462020();
extern "C" void fn_004a4c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004f19a0
extern "C" __declspec(naked) void asm_004f19a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd87321 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x3b4], 0 }
	__asm { jne L_004f19f9 }
	__asm { push 0x28 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004f19ea }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00462020 }
	__asm { jmp L_004f19ec }
	__asm { L_004f19ea: }
	__asm { xor eax, eax }
	__asm { L_004f19ec: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi + 0x3b4], eax }
	__asm { L_004f19f9: }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_004f1a2a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004f1a2a: }
	__asm { cmp dword ptr [g_0131eb9c], 0 }
	__asm { je L_004f1a94 }
	__asm { push 0x1020aa0 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_004f1a73 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { L_004f1a73: }
	__asm { mov ecx, dword ptr [g_0131eb9c] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x48] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_004f1a94: }
	__asm { mov ecx, dword ptr [esi + 0x3b4] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12790[];
extern "C" char g_00e12a20[];
extern "C" char g_0131dffc[];
extern "C" char g_0131e008[];
extern "C" void fn_00454080();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004f1ab0
extern "C" __declspec(naked) void asm_004f1ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd872da }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131dffc] }
	__asm { test al, 1 }
	__asm { jne L_004f1afa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dffc], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00454080 }
	__asm { push 0xddc730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004f1afa: }
	__asm { mov ecx, dword ptr [g_0131e008] }
	__asm { call dword ptr [g_00e12a20] }
	__asm { mov eax, dword ptr [g_0131dffc] }
	__asm { test al, 1 }
	__asm { jne L_004f1b37 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dffc], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00454080 }
	__asm { push 0xddc730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004f1b37: }
	__asm { mov ecx, dword ptr [g_0131e008] }
	__asm { call dword ptr [g_00e12790] }
	__asm { mov eax, dword ptr [g_0131dffc] }
	__asm { test al, 1 }
	__asm { jne L_004f1b74 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dffc], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00454080 }
	__asm { push 0xddc730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004f1b74: }
	__asm { mov ecx, dword ptr [g_0131e008] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xd4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10efc[];
extern "C" char g_00e10f08[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" void fn_008bde70();
// FUNCTION: ROBLOXSTUDIO 0x004f1f70
extern "C" __declspec(naked) void asm_004f1f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8832c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_008bde70 }
	__asm { mov ebx, dword ptr [eax + 0x1c] }
	__asm { push 0x18 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_004f1fc2 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10f08] }
	__asm { mov dword ptr [esi], 0x1008400 }
	__asm { jmp L_004f1fc4 }
	__asm { L_004f1fc2: }
	__asm { xor esi, esi }
	__asm { L_004f1fc4: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi + 0x404], esi }
	__asm { mov esi, dword ptr [g_00e110a8] }
	__asm { push 0 }
	__asm { push 0x1020ba0 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0x1020c40 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x404] }
	__asm { call dword ptr [g_00e110ac] }
	__asm { imul ebx, ebx, 0x3e8 }
	__asm { mov ecx, dword ptr [edi + 0x404] }
	__asm { add esp, 0x14 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10efc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" void fn_004039a0();
extern "C" void fn_00775320();
extern "C" void fn_00985cf0();
extern "C" void fn_00986750();
// FUNCTION: ROBLOXSTUDIO 0x004f2030
extern "C" __declspec(naked) void asm_004f2030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8520c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push 0x1c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004f20b1 }
	__asm { push 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { push 0x1020c00 }
	__asm { call fn_004039a0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00775320 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_004f2097 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_004f2097: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_004039a0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00985cf0 }
	__asm { mov esi, eax }
	__asm { jmp L_004f20b3 }
	__asm { L_004f20b1: }
	__asm { xor esi, esi }
	__asm { L_004f20b3: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00986750 }
	__asm { test esi, esi }
	__asm { je L_004f20f1 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_004f20d6 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004f20d6: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004f20f1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
